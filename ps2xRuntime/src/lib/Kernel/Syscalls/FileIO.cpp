#include "Common.h"
#include "FileIO.h"

namespace ps2_syscalls
{
    static int allocatePs2Fd(FILE *file)
    {
        if (!file)
            return -1;

        std::lock_guard<std::mutex> lock(g_fd_mutex);
        int fd = g_nextFd++;
        g_fileDescriptors[fd] = file;
        return fd;
    }

    static FILE *getHostFile(int ps2Fd)
    {
        std::lock_guard<std::mutex> lock(g_fd_mutex);
        auto it = g_fileDescriptors.find(ps2Fd);
        if (it != g_fileDescriptors.end())
        {
            return it->second;
        }
        return nullptr;
    }

    static void releasePs2Fd(int ps2Fd)
    {
        std::lock_guard<std::mutex> lock(g_fd_mutex);
        g_fileDescriptors.erase(ps2Fd);
    }

    struct VagAccumEntry
    {
        std::vector<uint8_t> data;
        uint32_t firstBufAddr = 0;
    };
    static std::unordered_map<int, VagAccumEntry> g_vagAccum;
    static std::mutex g_vagAccumMutex;
    static constexpr size_t kVagAccumMaxBytes = 16 * 1024 * 1024;

    static const char *translateFioMode(int ps2Flags)
    {
        const uint32_t access = static_cast<uint32_t>(ps2Flags) & PS2_FIO_O_RDWR;
        bool read = access == PS2_FIO_O_RDONLY || access == PS2_FIO_O_RDWR;
        bool write = access == PS2_FIO_O_WRONLY || access == PS2_FIO_O_RDWR;
        bool append = (ps2Flags & PS2_FIO_O_APPEND);
        bool create = (ps2Flags & PS2_FIO_O_CREAT);
        bool truncate = (ps2Flags & PS2_FIO_O_TRUNC);

        if (read && write)
        {
            if (create && truncate)
                return "w+b";
            if (create)
                return "a+b";
            return "r+b";
        }
        else if (write)
        {
            if (append)
                return "ab";
            if (create && truncate)
                return "wb";
            if (create)
                return "wx";
            return "r+b";
        }
        else if (read)
        {
            return "rb";
        }
        return "rb";
    }

    static bool fioOpenMayReadExistingFile(int ps2Flags)
    {
        const bool writes = (ps2Flags & PS2_FIO_O_WRONLY) ||
                            (ps2Flags & PS2_FIO_O_CREAT) ||
                            (ps2Flags & PS2_FIO_O_TRUNC) ||
                            (ps2Flags & PS2_FIO_O_APPEND);
        return !writes;
    }

    static std::string normalizeCdLooseFileKey(std::string value)
    {
        value = stripIsoVersionSuffix(toLowerAscii(std::move(value)));
        std::string normalized;
        normalized.reserve(value.size());

        for (std::size_t i = 0; i < value.size();)
        {
            if (!std::isdigit(static_cast<unsigned char>(value[i])))
            {
                normalized.push_back(value[i]);
                ++i;
                continue;
            }

            std::size_t end = i + 1;
            while (end < value.size() && std::isdigit(static_cast<unsigned char>(value[end])))
            {
                ++end;
            }

            std::size_t firstNonZero = i;
            while (firstNonZero + 1 < end && value[firstNonZero] == '0')
            {
                ++firstNonZero;
            }

            normalized.append(value, firstNonZero, end - firstNonZero);
            i = end;
        }

        return normalized;
    }

    static bool shouldTryLooseCdReadOpen(const char *ps2Path)
    {
        if (!ps2Path || !*ps2Path)
        {
            return false;
        }

        const std::string path(ps2Path);
        const std::string lower = toLowerAscii(path);
        if (lower.rfind("mc0:", 0) == 0 ||
            lower.rfind("host0:", 0) == 0 ||
            lower.rfind("host:", 0) == 0)
        {
            return false;
        }

        if (path.size() > 1 && path[1] == ':' &&
            lower.rfind("cdrom0:", 0) != 0 &&
            lower.rfind("cdrom:", 0) != 0)
        {
            return false;
        }

        return true;
    }

    static std::string normalizeCdOpenSuffixForLooseResolve(std::string path)
    {
        std::string lower = toLowerAscii(path);
        if (lower.rfind("cdrom0:", 0) == 0)
        {
            path = path.substr(7);
        }
        else if (lower.rfind("cdrom:", 0) == 0)
        {
            path = path.substr(6);
        }

        return normalizePs2PathSuffix(std::move(path));
    }

    static bool isLooseParentSuffixMatch(const std::string &candidateParent, const std::string &requestedParent)
    {
        if (requestedParent.empty() || candidateParent == requestedParent)
        {
            return true;
        }
        if (candidateParent.size() <= requestedParent.size())
        {
            return false;
        }

        const std::size_t suffixStart = candidateParent.size() - requestedParent.size();
        return candidateParent.compare(suffixStart, requestedParent.size(), requestedParent) == 0 &&
               candidateParent[suffixStart - 1] == '/';
    }

    static bool resolveExistingPathCaseInsensitive(const std::filesystem::path &root,
                                                   const std::filesystem::path &relative,
                                                   std::filesystem::path &resolvedOut)
    {
        std::filesystem::path current = root;
        for (const auto &component : relative)
        {
            const std::filesystem::path direct = current / component;
            std::error_code ec;
            if (std::filesystem::exists(direct, ec) && !ec)
            {
                current = direct;
                continue;
            }

            bool matched = false;
            const std::string needle = toLowerAscii(component.string());
            std::error_code iterEc;
            for (const auto &entry : std::filesystem::directory_iterator(current, iterEc))
            {
                if (iterEc)
                {
                    break;
                }

                if (toLowerAscii(entry.path().filename().string()) == needle)
                {
                    current = entry.path();
                    matched = true;
                    break;
                }
            }

            if (!matched)
            {
                return false;
            }
        }

        std::error_code fileEc;
        if (std::filesystem::is_regular_file(current, fileEc) && !fileEc)
        {
            resolvedOut = current;
            return true;
        }
        return false;
    }

    static bool resolveExistingCdFileLoose(const std::string &ps2Path, std::filesystem::path &resolvedOut)
    {
        const std::string normalized = normalizeCdOpenSuffixForLooseResolve(ps2Path);
        if (normalized.empty())
        {
            return false;
        }

        const std::filesystem::path root = getConfiguredCdRoot();
        std::error_code ec;
        if (!std::filesystem::exists(root, ec) || ec)
        {
            return false;
        }

        const std::filesystem::path relative(normalized);
        const std::filesystem::path direct = root / relative;
        if (std::filesystem::is_regular_file(direct, ec) && !ec)
        {
            resolvedOut = direct;
            return true;
        }

        if (resolveExistingPathCaseInsensitive(root, relative, resolvedOut))
        {
            return true;
        }

        const std::string requestedParent = toLowerAscii(relative.parent_path().generic_string());
        const std::string requestedLeaf = normalizeCdLooseFileKey(relative.filename().string());
        if (requestedLeaf.empty())
        {
            return false;
        }

        std::filesystem::path leafFallback;
        for (const auto &entry : std::filesystem::recursive_directory_iterator(
                 root, std::filesystem::directory_options::skip_permission_denied, ec))
        {
            if (ec)
            {
                break;
            }
            if (!entry.is_regular_file())
            {
                continue;
            }

            std::error_code relEc;
            const std::filesystem::path entryRelative = std::filesystem::relative(entry.path(), root, relEc);
            if (relEc)
            {
                continue;
            }

            if (normalizeCdLooseFileKey(entryRelative.filename().string()) != requestedLeaf)
            {
                continue;
            }

            if (leafFallback.empty())
            {
                leafFallback = entry.path();
            }

            const std::string entryParent = toLowerAscii(entryRelative.parent_path().generic_string());
            if (isLooseParentSuffixMatch(entryParent, requestedParent))
            {
                resolvedOut = entry.path();
                return true;
            }
        }

        if (!leafFallback.empty())
        {
            resolvedOut = leafFallback;
            return true;
        }
        return false;
    }

    std::string resolvePs2PathForReadOpen(const char *ps2Path)
    {
        const std::string translated = translatePs2Path(ps2Path);
        if (translated.empty())
        {
            return {};
        }

        std::error_code ec;
        if (std::filesystem::is_regular_file(translated, ec) && !ec)
        {
            return translated;
        }

        std::filesystem::path loosePath;
        if (shouldTryLooseCdReadOpen(ps2Path) &&
            resolveExistingCdFileLoose(ps2Path ? ps2Path : "", loosePath))
        {
            return loosePath.lexically_normal().string();
        }

        return translated;
    }

    void fioOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t pathAddr = getRegU32(ctx, 4); // $a0
        int flags = (int)getRegU32(ctx, 5);    // $a1 (PS2 FIO flags)

        const char *ps2Path = reinterpret_cast<const char *>(getConstMemPtr(rdram, pathAddr));
        if (!ps2Path)
        {
            std::cerr << "fioOpen error: Invalid path address" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        std::string hostPath = fioOpenMayReadExistingFile(flags)
                                   ? resolvePs2PathForReadOpen(ps2Path)
                                   : translatePs2Path(ps2Path);
        if (hostPath.empty())
        {
            std::cerr << "fioOpen error: Failed to translate path '" << ps2Path << "'" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        const char *mode = translateFioMode(flags);
        RUNTIME_LOG("fioOpen: '" << hostPath << "' flags=0x" << std::hex << flags << std::dec << " mode='" << mode << "'");

        FILE *fp = ::fopen(hostPath.c_str(), mode);
        if (!fp)
        {
            std::cerr << "fioOpen error: fopen failed for '" << hostPath << "': " << strerror(errno) << std::endl;
            setReturnS32(ctx, -1); // e.g., -ENOENT, -EACCES
            return;
        }

        int ps2Fd = allocatePs2Fd(fp);
        if (ps2Fd < 0)
        {
            std::cerr << "fioOpen error: Failed to allocate PS2 file descriptor" << std::endl;
            ::fclose(fp);
            setReturnS32(ctx, -1); // e.g., -EMFILE
            return;
        }

        // returns the PS2 file descriptor
        setReturnS32(ctx, ps2Fd);
    }

    void fioClose(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int ps2Fd = (int)getRegU32(ctx, 4);

        FILE *fp = getHostFile(ps2Fd);
        if (!fp)
        {
            std::cerr << "fioClose warning: Invalid PS2 file descriptor " << ps2Fd << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        int ret = ::fclose(fp);
        releasePs2Fd(ps2Fd);

        {
            std::lock_guard<std::mutex> lock(g_vagAccumMutex);
            auto it = g_vagAccum.find(ps2Fd);
            if (it != g_vagAccum.end())
            {
                VagAccumEntry &e = it->second;
                if (e.data.size() >= 48)
                {
                    const uint32_t magic = (static_cast<uint32_t>(e.data[0]) << 24) |
                                           (static_cast<uint32_t>(e.data[1]) << 16) |
                                           (static_cast<uint32_t>(e.data[2]) << 8) |
                                           static_cast<uint32_t>(e.data[3]);
                    const uint32_t magicLE = (static_cast<uint32_t>(e.data[3]) << 24) |
                                             (static_cast<uint32_t>(e.data[2]) << 16) |
                                             (static_cast<uint32_t>(e.data[1]) << 8) |
                                             static_cast<uint32_t>(e.data[0]);
                    if (magic == 0x56414770u || magicLE == 0x56414770u)
                    {
                        if (runtime)
                            runtime->audioBackend().onVagTransferFromBuffer(
                                e.data.data(), static_cast<uint32_t>(e.data.size()),
                                e.firstBufAddr ? e.firstBufAddr : 0u);
                    }
                }
                g_vagAccum.erase(it);
            }
        }

        setReturnS32(ctx, ret == 0 ? 0 : -1);
    }

    void fioRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int ps2Fd = (int)getRegU32(ctx, 4);   // $a0
        uint32_t bufAddr = getRegU32(ctx, 5); // $a1
        size_t size = getRegU32(ctx, 6);      // $a2

        uint8_t *hostBuf = getMemPtr(rdram, bufAddr);
        FILE *fp = getHostFile(ps2Fd);

        if (!hostBuf)
        {
            std::cerr << "fioRead error: Invalid buffer address for fd " << ps2Fd << std::endl;
            setReturnS32(ctx, -1); // -EFAULT
            return;
        }
        if (!fp)
        {
            std::cerr << "fioRead error: Invalid file descriptor " << ps2Fd << std::endl;
            setReturnS32(ctx, -1); // -EBADF
            return;
        }
        if (size == 0)
        {
            setReturnS32(ctx, 0); // Read 0 bytes
            return;
        }

        size_t bytesRead = 0;
        {
            std::lock_guard<std::mutex> lock(g_sys_fd_mutex);
            bytesRead = fread(hostBuf, 1, size, fp);
        }

        if (bytesRead < size && ferror(fp))
        {
            std::cerr << "fioRead error: fread failed for fd " << ps2Fd << ": " << strerror(errno) << std::endl;
            clearerr(fp);
            setReturnS32(ctx, -1);
            return;
        }

        {
            std::lock_guard<std::mutex> lock(g_vagAccumMutex);
            auto it = g_vagAccum.find(ps2Fd);
            if (it != g_vagAccum.end())
            {
                VagAccumEntry &e = it->second;
                if (e.data.size() + bytesRead <= kVagAccumMaxBytes)
                    e.data.insert(e.data.end(), hostBuf, hostBuf + bytesRead);
            }
            else if (bytesRead >= 4)
            {
                const uint32_t magic = (static_cast<uint32_t>(hostBuf[0]) << 24) |
                                       (static_cast<uint32_t>(hostBuf[1]) << 16) |
                                       (static_cast<uint32_t>(hostBuf[2]) << 8) |
                                       static_cast<uint32_t>(hostBuf[3]);
                const uint32_t magicLE = (static_cast<uint32_t>(hostBuf[3]) << 24) |
                                         (static_cast<uint32_t>(hostBuf[2]) << 16) |
                                         (static_cast<uint32_t>(hostBuf[1]) << 8) |
                                         static_cast<uint32_t>(hostBuf[0]);
                if (magic == 0x56414770u || magicLE == 0x56414770u)
                {
                    VagAccumEntry &e = g_vagAccum[ps2Fd];
                    e.firstBufAddr = bufAddr;
                    if (bytesRead <= kVagAccumMaxBytes)
                        e.data.assign(hostBuf, hostBuf + bytesRead);
                }
            }
        }

        setReturnS32(ctx, (int32_t)bytesRead);
    }

    void fioWrite(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int ps2Fd = (int)getRegU32(ctx, 4);   // $a0
        uint32_t bufAddr = getRegU32(ctx, 5); // $a1
        size_t size = getRegU32(ctx, 6);      // $a2

        const uint8_t *hostBuf = getConstMemPtr(rdram, bufAddr);
        if (!hostBuf)
        {
            setReturnS32(ctx, -1);
            return;
        }

        FILE *fp = getHostFile(ps2Fd);
        if (!fp)
        {
            setReturnS32(ctx, -1); // -EFAULT
            return;
        }

        if (size == 0)
        {
            setReturnS32(ctx, 0); // Wrote 0 bytes
            return;
        }

        size_t bytesWritten = 0;
        {
            std::lock_guard<std::mutex> lock(g_sys_fd_mutex);
            bytesWritten = ::fwrite(hostBuf, 1, size, fp);
            if (bytesWritten < size && ferror(fp))
            {
                clearerr(fp);
                setReturnS32(ctx, -1); // -EIO, -ENOSPC etc.
                return;
            }
        }

        // returns number of bytes written
        setReturnS32(ctx, (int32_t)bytesWritten);
    }

    void fioLseek(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        int ps2Fd = (int)getRegU32(ctx, 4);  // $a0
        int32_t offset = getRegU32(ctx, 5);  // $a1 (PS2 seems to use 32-bit offset here commonly)
        int whence = (int)getRegU32(ctx, 6); // $a2 (PS2 FIO_SEEK constants)

        FILE *fp = getHostFile(ps2Fd);
        if (!fp)
        {
            std::cerr << "fioLseek error: Invalid file descriptor " << ps2Fd << std::endl;
            setReturnS32(ctx, -1); // -EBADF
            return;
        }

        int hostWhence;
        switch (whence)
        {
        case PS2_FIO_SEEK_SET:
            hostWhence = SEEK_SET;
            break;
        case PS2_FIO_SEEK_CUR:
            hostWhence = SEEK_CUR;
            break;
        case PS2_FIO_SEEK_END:
            hostWhence = SEEK_END;
            break;
        default:
            std::cerr << "fioLseek error: Invalid whence value " << whence << " for fd " << ps2Fd << std::endl;
            setReturnS32(ctx, -1); // -EINVAL
            return;
        }

        if (::fseek(fp, static_cast<long>(offset), hostWhence) != 0)
        {
            std::cerr << "fioLseek error: fseek failed for fd " << ps2Fd << ": " << strerror(errno) << std::endl;
            setReturnS32(ctx, -1); // Return error code
            return;
        }

        long newPos = ::ftell(fp);
        if (newPos < 0)
        {
            std::cerr << "fioLseek error: ftell failed after fseek for fd " << ps2Fd << ": " << strerror(errno) << std::endl;
            setReturnS32(ctx, -1);
        }
        else
        {
            if (newPos > 0xFFFFFFFFL)
            {
                std::cerr << "fioLseek warning: New position exceeds 32-bit for fd " << ps2Fd << std::endl;
                setReturnS32(ctx, -1);
            }
            else
            {
                setReturnS32(ctx, (int32_t)newPos);
            }
        }
    }

    void fioMkdir(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t pathAddr = getRegU32(ctx, 4); // $a0
        // int mode = (int)getRegU32(ctx, 5);  // $a1 - ignored on host

        const char *ps2Path = reinterpret_cast<const char *>(getConstMemPtr(rdram, pathAddr));
        if (!ps2Path)
        {
            std::cerr << "fioMkdir error: Invalid path address" << std::endl;
            setReturnS32(ctx, -1); // -EFAULT
            return;
        }
        std::string hostPath = translatePs2Path(ps2Path);
        if (hostPath.empty())
        {
            std::cerr << "fioMkdir error: Failed to translate path '" << ps2Path << "'" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }
        std::error_code ec;
        bool success = std::filesystem::create_directory(hostPath, ec);

        if (!success && ec)
        {
            std::cerr << "fioMkdir error: create_directory failed for '" << hostPath
                      << "': " << ec.message() << std::endl;
            setReturnS32(ctx, -1);
        }
        else
        {
            RUNTIME_LOG("fioMkdir: Created directory '" << hostPath << "'");
            setReturnS32(ctx, 0); // Success
        }
    }

    void fioChdir(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t pathAddr = getRegU32(ctx, 4); // $a0
        const char *ps2Path = reinterpret_cast<const char *>(getConstMemPtr(rdram, pathAddr));
        if (!ps2Path)
        {
            std::cerr << "fioChdir error: Invalid path address" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        std::string hostPath = translatePs2Path(ps2Path);
        if (hostPath.empty())
        {
            std::cerr << "fioChdir error: Failed to translate path '" << ps2Path << "'" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        std::error_code ec;
        std::filesystem::current_path(hostPath, ec);

        if (ec)
        {
            std::cerr << "fioChdir error: current_path failed for '" << hostPath
                      << "': " << ec.message() << std::endl;
            setReturnS32(ctx, -1);
        }
        else
        {
            RUNTIME_LOG("fioChdir: Changed directory to '" << hostPath << "'");
            setReturnS32(ctx, 0); // Success
        }
    }

    void fioRmdir(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t pathAddr = getRegU32(ctx, 4); // $a0
        const char *ps2Path = reinterpret_cast<const char *>(getConstMemPtr(rdram, pathAddr));
        if (!ps2Path)
        {
            std::cerr << "fioRmdir error: Invalid path address" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }
        std::string hostPath = translatePs2Path(ps2Path);
        if (hostPath.empty())
        {
            std::cerr << "fioRmdir error: Failed to translate path '" << ps2Path << "'" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        std::error_code ec;
        bool success = std::filesystem::remove(hostPath, ec);

        if (!success || ec)
        {
            std::cerr << "fioRmdir error: remove failed for '" << hostPath
                      << "': " << ec.message() << std::endl;
            setReturnS32(ctx, -1);
        }
        else
        {
            RUNTIME_LOG("fioRmdir: Removed directory '" << hostPath << "'");
            setReturnS32(ctx, 0); // Success
        }
    }

    void fioGetstat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        // we wont implement this for now.
        uint32_t pathAddr = getRegU32(ctx, 4);    // $a0
        uint32_t statBufAddr = getRegU32(ctx, 5); // $a1

        const char *ps2Path = reinterpret_cast<const char *>(getConstMemPtr(rdram, pathAddr));
        uint8_t *ps2StatBuf = getMemPtr(rdram, statBufAddr);

        if (!ps2Path)
        {
            std::cerr << "fioGetstat error: Invalid path addr" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }
        if (!ps2StatBuf)
        {
            std::cerr << "fioGetstat error: Invalid buffer addr" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        std::string hostPath = translatePs2Path(ps2Path);
        if (hostPath.empty())
        {
            std::cerr << "fioGetstat error: Bad path translate" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        setReturnS32(ctx, -1);
    }

    void fioRemove(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint32_t pathAddr = getRegU32(ctx, 4); // $a0
        const char *ps2Path = reinterpret_cast<const char *>(getConstMemPtr(rdram, pathAddr));
        if (!ps2Path)
        {
            std::cerr << "fioRemove error: Invalid path" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        std::string hostPath = translatePs2Path(ps2Path);
        if (hostPath.empty())
        {
            std::cerr << "fioRemove error: Path translate fail" << std::endl;
            setReturnS32(ctx, -1);
            return;
        }

        std::error_code ec;
        bool success = std::filesystem::remove(hostPath, ec);

        if (!success || ec)
        {
            std::cerr << "fioRemove error: remove failed for '" << hostPath
                      << "': " << ec.message() << std::endl;
            setReturnS32(ctx, -1);
        }
        else
        {
            RUNTIME_LOG("fioRemove: Removed file '" << hostPath << "'");
            setReturnS32(ctx, 0); // Success
        }
    }
}
