#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BCA88
// Address: 0x2bca88 - 0x2bd918
void sub_002BCA88_0x2bca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCA88_0x2bca88");
#endif

    switch (ctx->pc) {
        case 0x2bcb74u: goto label_2bcb74;
        case 0x2bcbf8u: goto label_2bcbf8;
        case 0x2bcc18u: goto label_2bcc18;
        case 0x2bcc38u: goto label_2bcc38;
        case 0x2bcc54u: goto label_2bcc54;
        case 0x2bcc7cu: goto label_2bcc7c;
        case 0x2bcc8cu: goto label_2bcc8c;
        case 0x2bcca0u: goto label_2bcca0;
        case 0x2bccb4u: goto label_2bccb4;
        case 0x2bccdcu: goto label_2bccdc;
        case 0x2bcce8u: goto label_2bcce8;
        case 0x2bcd88u: goto label_2bcd88;
        case 0x2bcd9cu: goto label_2bcd9c;
        case 0x2bcdb4u: goto label_2bcdb4;
        case 0x2bce44u: goto label_2bce44;
        case 0x2bce78u: goto label_2bce78;
        case 0x2bcf60u: goto label_2bcf60;
        case 0x2bcf94u: goto label_2bcf94;
        case 0x2bcfa8u: goto label_2bcfa8;
        case 0x2bcfb8u: goto label_2bcfb8;
        case 0x2bcfc8u: goto label_2bcfc8;
        case 0x2bcfd8u: goto label_2bcfd8;
        case 0x2bcff8u: goto label_2bcff8;
        case 0x2bd070u: goto label_2bd070;
        case 0x2bd090u: goto label_2bd090;
        case 0x2bd0b4u: goto label_2bd0b4;
        case 0x2bd0c0u: goto label_2bd0c0;
        case 0x2bd0ccu: goto label_2bd0cc;
        case 0x2bd0e4u: goto label_2bd0e4;
        case 0x2bd0ecu: goto label_2bd0ec;
        case 0x2bd100u: goto label_2bd100;
        case 0x2bd12cu: goto label_2bd12c;
        case 0x2bd140u: goto label_2bd140;
        case 0x2bd148u: goto label_2bd148;
        case 0x2bd168u: goto label_2bd168;
        case 0x2bd1ecu: goto label_2bd1ec;
        case 0x2bd21cu: goto label_2bd21c;
        case 0x2bd230u: goto label_2bd230;
        case 0x2bd298u: goto label_2bd298;
        case 0x2bd2ecu: goto label_2bd2ec;
        case 0x2bd348u: goto label_2bd348;
        case 0x2bd3a8u: goto label_2bd3a8;
        case 0x2bd3b8u: goto label_2bd3b8;
        case 0x2bd3c0u: goto label_2bd3c0;
        case 0x2bd3d8u: goto label_2bd3d8;
        case 0x2bd3e8u: goto label_2bd3e8;
        case 0x2bd408u: goto label_2bd408;
        case 0x2bd478u: goto label_2bd478;
        case 0x2bd494u: goto label_2bd494;
        case 0x2bd4fcu: goto label_2bd4fc;
        case 0x2bd510u: goto label_2bd510;
        case 0x2bd528u: goto label_2bd528;
        case 0x2bd53cu: goto label_2bd53c;
        case 0x2bd55cu: goto label_2bd55c;
        case 0x2bd594u: goto label_2bd594;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd628u: goto label_2bd628;
        case 0x2bd66cu: goto label_2bd66c;
        case 0x2bd680u: goto label_2bd680;
        case 0x2bd690u: goto label_2bd690;
        case 0x2bd6a0u: goto label_2bd6a0;
        case 0x2bd6b0u: goto label_2bd6b0;
        case 0x2bd6d8u: goto label_2bd6d8;
        case 0x2bd804u: goto label_2bd804;
        default: break;
    }

    ctx->pc = 0x2bca88u;

label_2bca88:
    // 0x2bca88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bca8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2bca90: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bca94: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2bca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2bca98: 0x244be880  addiu       $t3, $v0, -0x1780
    ctx->pc = 0x2bca98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x2bca9c: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x2bca9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bcaa0: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x2bcaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bcaa4: 0x8969000b  lwl         $t1, 0xB($t3)
    ctx->pc = 0x2bcaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x2bcaa8: 0x99690008  lwr         $t1, 0x8($t3)
    ctx->pc = 0x2bcaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x2bcaac: 0x816a000c  lb          $t2, 0xC($t3)
    ctx->pc = 0x2bcaacu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2bcab0: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x2bcab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcab4: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x2bcab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcab8: 0xaba9001b  swl         $t1, 0x1B($sp)
    ctx->pc = 0x2bcab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bcabc: 0xbba90018  swr         $t1, 0x18($sp)
    ctx->pc = 0x2bcabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bcac0: 0xa3aa001c  sb          $t2, 0x1C($sp)
    ctx->pc = 0x2bcac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 10));
    // 0x2bcac4: 0x6862004b  ldl         $v0, 0x4B($v1)
    ctx->pc = 0x2bcac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bcac8: 0x6c620044  ldr         $v0, 0x44($v1)
    ctx->pc = 0x2bcac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bcacc: 0x68680053  ldl         $t0, 0x53($v1)
    ctx->pc = 0x2bcaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bcad0: 0x6c68004c  ldr         $t0, 0x4C($v1)
    ctx->pc = 0x2bcad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bcad4: 0x6869005b  ldl         $t1, 0x5B($v1)
    ctx->pc = 0x2bcad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2bcad8: 0x6c690054  ldr         $t1, 0x54($v1)
    ctx->pc = 0x2bcad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2bcadc: 0x686a0063  ldl         $t2, 0x63($v1)
    ctx->pc = 0x2bcadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bcae0: 0x6c6a005c  ldr         $t2, 0x5C($v1)
    ctx->pc = 0x2bcae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bcae4: 0xb3a20024  sdl         $v0, 0x24($sp)
    ctx->pc = 0x2bcae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcae8: 0xb7a2001d  sdr         $v0, 0x1D($sp)
    ctx->pc = 0x2bcae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 29); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcaec: 0xb3a8002c  sdl         $t0, 0x2C($sp)
    ctx->pc = 0x2bcaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcaf0: 0xb7a80025  sdr         $t0, 0x25($sp)
    ctx->pc = 0x2bcaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 37); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcaf4: 0xb3a90034  sdl         $t1, 0x34($sp)
    ctx->pc = 0x2bcaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcaf8: 0xb7a9002d  sdr         $t1, 0x2D($sp)
    ctx->pc = 0x2bcaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 45); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcafc: 0xb3aa003c  sdl         $t2, 0x3C($sp)
    ctx->pc = 0x2bcafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb00: 0xb7aa0035  sdr         $t2, 0x35($sp)
    ctx->pc = 0x2bcb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 53); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb04: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2bcb04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb08: 0x686b006b  ldl         $t3, 0x6B($v1)
    ctx->pc = 0x2bcb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bcb0c: 0x6c6b0064  ldr         $t3, 0x64($v1)
    ctx->pc = 0x2bcb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bcb10: 0x68620073  ldl         $v0, 0x73($v1)
    ctx->pc = 0x2bcb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bcb14: 0x6c62006c  ldr         $v0, 0x6C($v1)
    ctx->pc = 0x2bcb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bcb18: 0x6865007b  ldl         $a1, 0x7B($v1)
    ctx->pc = 0x2bcb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bcb1c: 0x6c650074  ldr         $a1, 0x74($v1)
    ctx->pc = 0x2bcb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bcb20: 0x68680083  ldl         $t0, 0x83($v1)
    ctx->pc = 0x2bcb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bcb24: 0x6c68007c  ldr         $t0, 0x7C($v1)
    ctx->pc = 0x2bcb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bcb28: 0xb3ab0044  sdl         $t3, 0x44($sp)
    ctx->pc = 0x2bcb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb2c: 0xb7ab003d  sdr         $t3, 0x3D($sp)
    ctx->pc = 0x2bcb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 61); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb30: 0xb3a2004c  sdl         $v0, 0x4C($sp)
    ctx->pc = 0x2bcb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb34: 0xb7a20045  sdr         $v0, 0x45($sp)
    ctx->pc = 0x2bcb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 69); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb38: 0xb3a50054  sdl         $a1, 0x54($sp)
    ctx->pc = 0x2bcb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb3c: 0xb7a5004d  sdr         $a1, 0x4D($sp)
    ctx->pc = 0x2bcb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 77); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb40: 0xb3a8005c  sdl         $t0, 0x5C($sp)
    ctx->pc = 0x2bcb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb44: 0xb7a80055  sdr         $t0, 0x55($sp)
    ctx->pc = 0x2bcb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 85); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcb48: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2bcb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2bcb4c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2bcb4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb50: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcb54: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x2bcb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2bcb58: 0x8c8800b0  lw          $t0, 0xB0($a0)
    ctx->pc = 0x2bcb58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2bcb5c: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x2bcb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2bcb60: 0x8d090010  lw          $t1, 0x10($t0)
    ctx->pc = 0x2bcb60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2bcb64: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x2bcb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x2bcb68: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x2bcb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
    // 0x2bcb6c: 0xc0af25e  jal         func_2BC978
    ctx->pc = 0x2BCB6Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB74u);
    ctx->pc = 0x2BCB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB6Cu;
    // 0x2bcb70: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC978u, 0x2BCB6Cu, 0x2BCB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB74u;
label_2bcb74:
    // 0x2bcb74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bcb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bcb78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB78u;
        // 0x2bcb7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB80u;
    // 0x2bcb80: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2bcb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2bcb84: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2bcb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2bcb88: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x2bcb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
    // 0x2bcb8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bcb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb90: 0xffbe01d0  sd          $fp, 0x1D0($sp)
    ctx->pc = 0x2bcb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 30));
    // 0x2bcb94: 0xffb701c0  sd          $s7, 0x1C0($sp)
    ctx->pc = 0x2bcb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 23));
    // 0x2bcb98: 0xffb601b0  sd          $s6, 0x1B0($sp)
    ctx->pc = 0x2bcb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 22));
    // 0x2bcb9c: 0xffb501a0  sd          $s5, 0x1A0($sp)
    ctx->pc = 0x2bcb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 21));
    // 0x2bcba0: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2bcba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2bcba4: 0xffb30180  sd          $s3, 0x180($sp)
    ctx->pc = 0x2bcba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 19));
    // 0x2bcba8: 0xffb10160  sd          $s1, 0x160($sp)
    ctx->pc = 0x2bcba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 17));
    // 0x2bcbac: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x2bcbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x2bcbb0: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x2bcbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x2bcbb4: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x2bcbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bcbb8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2bcbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bcbbc: 0x8ca3015c  lw          $v1, 0x15C($a1)
    ctx->pc = 0x2bcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x2bcbc0: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x2bcbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bcbc4: 0x8cbe018c  lw          $fp, 0x18C($a1)
    ctx->pc = 0x2bcbc4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 396)));
    // 0x2bcbc8: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x2bcbc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bcbcc: 0x8cb10190  lw          $s1, 0x190($a1)
    ctx->pc = 0x2bcbccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x2bcbd0: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x2bcbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x2bcbd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2bcbd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2bcbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bcbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bcbdc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BCBDCu;
    {
        const bool branch_taken_0x2bcbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBDCu;
        // 0x2bcbe0: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbdc) {
            ctx->pc = 0x2BCC04u;
            goto label_2bcc04;
        }
    }
    ctx->pc = 0x2BCBE4u;
    // 0x2bcbe4: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x2bcbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2bcbe8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2bcbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bcbec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbf0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BCBF0u;
    SET_GPR_U32(ctx, 31, 0x2BCBF8u);
    ctx->pc = 0x2BCBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBF0u;
    // 0x2bcbf4: 0x26500068  addiu       $s0, $s2, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BCBF0u, 0x2BCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBF8u;
label_2bcbf8:
    // 0x2bcbf8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2bcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bcbfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BCBFCu;
    {
        const bool branch_taken_0x2bcbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBFCu;
        // 0x2bcc00: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbfc) {
            ctx->pc = 0x2BCC20u;
            goto label_2bcc20;
        }
    }
    ctx->pc = 0x2BCC04u;
label_2bcc04:
    // 0x2bcc04: 0x24a40028  addiu       $a0, $a1, 0x28
    ctx->pc = 0x2bcc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x2bcc08: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2bcc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bcc0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc10: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BCC10u;
    SET_GPR_U32(ctx, 31, 0x2BCC18u);
    ctx->pc = 0x2BCC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC10u;
    // 0x2bcc14: 0x26500074  addiu       $s0, $s2, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BCC10u, 0x2BCC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC18u;
label_2bcc18:
    // 0x2bcc18: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2bcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bcc1c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2bcc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2bcc20:
    // 0x2bcc20: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x2bcc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x2bcc24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2bcc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bcc28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCC28u;
    {
        const bool branch_taken_0x2bcc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcc28) {
            ctx->pc = 0x2BCC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCC28u;
            // 0x2bcc2c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCC44u;
            goto label_2bcc44;
        }
    }
    ctx->pc = 0x2BCC30u;
    // 0x2bcc30: 0xc0a58b8  jal         func_2962E0
    ctx->pc = 0x2BCC30u;
    SET_GPR_U32(ctx, 31, 0x2BCC38u);
    ctx->pc = 0x2962E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962E0u, 0x2BCC30u, 0x2BCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC38u;
label_2bcc38:
    // 0x2bcc38: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2BCC38u;
    {
        const bool branch_taken_0x2bcc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC38u;
        // 0x2bcc3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc38) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BCC40u;
    // 0x2bcc40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2bcc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2bcc44:
    // 0x2bcc44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCC44u;
    {
        const bool branch_taken_0x2bcc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC44u;
        // 0x2bcc48: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc44) {
            ctx->pc = 0x2BCC60u;
            goto label_2bcc60;
        }
    }
    ctx->pc = 0x2BCC4Cu;
    // 0x2bcc4c: 0xc0a5ef6  jal         func_297BD8
    ctx->pc = 0x2BCC4Cu;
    SET_GPR_U32(ctx, 31, 0x2BCC54u);
    ctx->pc = 0x297BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297BD8u, 0x2BCC4Cu, 0x2BCC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC54u;
label_2bcc54:
    // 0x2bcc54: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2BCC54u;
    {
        const bool branch_taken_0x2bcc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC54u;
        // 0x2bcc58: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc54) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BCC5Cu;
    // 0x2bcc5c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2bcc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2bcc60:
    // 0x2bcc60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc64: 0x24427ca8  addiu       $v0, $v0, 0x7CA8
    ctx->pc = 0x2bcc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31912));
    // 0x2bcc68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bcc68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc6c: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x2bcc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x2bcc70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2bcc70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc74: 0xc0a5f8a  jal         func_297E28
    ctx->pc = 0x2BCC74u;
    SET_GPR_U32(ctx, 31, 0x2BCC7Cu);
    ctx->pc = 0x2BCC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC74u;
    // 0x2bcc78: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E28u, 0x2BCC74u, 0x2BCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC7Cu;
label_2bcc7c:
    // 0x2bcc7c: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2BCC7Cu;
    {
        const bool branch_taken_0x2bcc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC7Cu;
        // 0x2bcc80: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc7c) {
            ctx->pc = 0x2BCFE4u;
            goto label_2bcfe4;
        }
    }
    ctx->pc = 0x2BCC84u;
    // 0x2bcc84: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2BCC84u;
    SET_GPR_U32(ctx, 31, 0x2BCC8Cu);
    ctx->pc = 0x2BCC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC84u;
    // 0x2bcc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2BCC84u, 0x2BCC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC8Cu;
label_2bcc8c:
    // 0x2bcc8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2bcc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bcc90: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x2bcc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
    // 0x2bcc94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bcc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bcc98: 0xc0a587a  jal         func_2961E8
    ctx->pc = 0x2BCC98u;
    SET_GPR_U32(ctx, 31, 0x2BCCA0u);
    ctx->pc = 0x2BCC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC98u;
    // 0x2bcc9c: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961E8u, 0x2BCC98u, 0x2BCCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCA0u;
label_2bcca0:
    // 0x2bcca0: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2BCCA0u;
    {
        const bool branch_taken_0x2bcca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCA0u;
        // 0x2bcca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcca0) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BCCA8u;
    // 0x2bcca8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bcca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bccac: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2BCCACu;
    SET_GPR_U32(ctx, 31, 0x2BCCB4u);
    ctx->pc = 0x2BCCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCCACu;
    // 0x2bccb0: 0x8c510188  lw          $s1, 0x188($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2BCCACu, 0x2BCCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCB4u;
label_2bccb4:
    // 0x2bccb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bccb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccb8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bccbc: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x2bccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2bccc0: 0x90640018  lbu         $a0, 0x18($v1)
    ctx->pc = 0x2bccc0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bccc4: 0x4983c  dsll32      $s3, $a0, 0
    ctx->pc = 0x2bccc4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2bccc8: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x2bccc8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x2bcccc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BCCCCu;
    {
        const bool branch_taken_0x2bcccc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcccc) {
            ctx->pc = 0x2BCCE0u;
            goto label_2bcce0;
        }
    }
    ctx->pc = 0x2BCCD4u;
    // 0x2bccd4: 0xc0a5b02  jal         func_296C08
    ctx->pc = 0x2BCCD4u;
    SET_GPR_U32(ctx, 31, 0x2BCCDCu);
    ctx->pc = 0x2BCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCCD4u;
    // 0x2bccd8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C08u, 0x2BCCD4u, 0x2BCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCDCu;
label_2bccdc:
    // 0x2bccdc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bccdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcce0:
    // 0x2bcce0: 0xc0a5b04  jal         func_296C10
    ctx->pc = 0x2BCCE0u;
    SET_GPR_U32(ctx, 31, 0x2BCCE8u);
    ctx->pc = 0x2BCCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCCE0u;
    // 0x2bcce4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C10u, 0x2BCCE0u, 0x2BCCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCE8u;
label_2bcce8:
    // 0x2bcce8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bcce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccec: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2bccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bccf0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2bccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2bccf4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCCF4u;
    {
        const bool branch_taken_0x2bccf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCF4u;
        // 0x2bccf8: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccf4) {
            ctx->pc = 0x2BCD04u;
            goto label_2bcd04;
        }
    }
    ctx->pc = 0x2BCCFCu;
    // 0x2bccfc: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BCCFCu;
    {
        const bool branch_taken_0x2bccfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BCD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCFCu;
        // 0x2bcd00: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccfc) {
            ctx->pc = 0x2BCD38u;
            goto label_2bcd38;
        }
    }
    ctx->pc = 0x2BCD04u;
label_2bcd04:
    // 0x2bcd04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd08: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2bcd08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2bcd0c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2bcd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2bcd10: 0xa6b821  addu        $s7, $a1, $a2
    ctx->pc = 0x2bcd10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2bcd14: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2bcd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bcd18: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x2bcd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x2bcd1c: 0xa6a021  addu        $s4, $a1, $a2
    ctx->pc = 0x2bcd1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2bcd20: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bcd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2bcd24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2bcd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcd28: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2bcd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2bcd2c: 0x2455e890  addiu       $s5, $v0, -0x1770
    ctx->pc = 0x2bcd2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x2bcd30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BCD30u;
    {
        const bool branch_taken_0x2bcd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD30u;
        // 0x2bcd34: 0xafa70138  sw          $a3, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd30) {
            ctx->pc = 0x2BCD60u;
            goto label_2bcd60;
        }
    }
    ctx->pc = 0x2BCD38u;
label_2bcd38:
    // 0x2bcd38: 0x2762021  addu        $a0, $s3, $s6
    ctx->pc = 0x2bcd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2bcd3c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2bcd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bcd40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2bcd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2bcd44: 0x226b821  addu        $s7, $s1, $a2
    ctx->pc = 0x2bcd44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2bcd48: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x2bcd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x2bcd4c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2bcd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2bcd50: 0x2475e8a8  addiu       $s5, $v1, -0x1758
    ctx->pc = 0x2bcd50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961320));
    // 0x2bcd54: 0x226a021  addu        $s4, $s1, $a2
    ctx->pc = 0x2bcd54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2bcd58: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2bcd5c: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x2bcd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_2bcd60:
    // 0x2bcd60: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2bcd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bcd64: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x2bcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x2bcd68: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2bcd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bcd6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BCD6Cu;
    {
        const bool branch_taken_0x2bcd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD6Cu;
        // 0x2bcd70: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd6c) {
            ctx->pc = 0x2BCD90u;
            goto label_2bcd90;
        }
    }
    ctx->pc = 0x2BCD74u;
    // 0x2bcd74: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x2bcd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2bcd78: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x2bcd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2bcd7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bcd7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd80: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BCD80u;
    SET_GPR_U32(ctx, 31, 0x2BCD88u);
    ctx->pc = 0x2BCD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD80u;
    // 0x2bcd84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BCD80u, 0x2BCD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD88u;
label_2bcd88:
    // 0x2bcd88: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2BCD88u;
    {
        const bool branch_taken_0x2bcd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD88u;
        // 0x2bcd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcd88) {
            ctx->pc = 0x2BCFFCu;
            goto label_2bcffc;
        }
    }
    ctx->pc = 0x2BCD90u;
label_2bcd90:
    // 0x2bcd90: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x2bcd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x2bcd94: 0xc049c48  jal         func_127120
    ctx->pc = 0x2BCD94u;
    SET_GPR_U32(ctx, 31, 0x2BCD9Cu);
    ctx->pc = 0x2BCD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD94u;
    // 0x2bcd98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BCD94u, 0x2BCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD9Cu;
label_2bcd9c:
    // 0x2bcd9c: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x2bcd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bcda0: 0x11000073  beqz        $t0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2BCDA0u;
    {
        const bool branch_taken_0x2bcda0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCDA0u;
        // 0x2bcda4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcda0) {
            ctx->pc = 0x2BCF70u;
            goto label_2bcf70;
        }
    }
    ctx->pc = 0x2BCDA8u;
    // 0x2bcda8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bcda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcdac: 0xc049c48  jal         func_127120
    ctx->pc = 0x2BCDACu;
    SET_GPR_U32(ctx, 31, 0x2BCDB4u);
    ctx->pc = 0x2BCDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDACu;
    // 0x2bcdb0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BCDACu, 0x2BCDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDB4u;
label_2bcdb4:
    // 0x2bcdb4: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2bcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bcdb8: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2bcdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bcdbc: 0x6862006b  ldl         $v0, 0x6B($v1)
    ctx->pc = 0x2bcdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bcdc0: 0x6c620064  ldr         $v0, 0x64($v1)
    ctx->pc = 0x2bcdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bcdc4: 0x68650073  ldl         $a1, 0x73($v1)
    ctx->pc = 0x2bcdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bcdc8: 0x6c65006c  ldr         $a1, 0x6C($v1)
    ctx->pc = 0x2bcdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bcdcc: 0x6866007b  ldl         $a2, 0x7B($v1)
    ctx->pc = 0x2bcdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bcdd0: 0x6c660074  ldr         $a2, 0x74($v1)
    ctx->pc = 0x2bcdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bcdd4: 0x68670083  ldl         $a3, 0x83($v1)
    ctx->pc = 0x2bcdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bcdd8: 0x6c67007c  ldr         $a3, 0x7C($v1)
    ctx->pc = 0x2bcdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bcddc: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2bcddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcde0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2bcde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcde4: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x2bcde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcde8: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x2bcde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdec: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x2bcdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdf0: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x2bcdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdf4: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x2bcdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdf8: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x2bcdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcdfc: 0x6868004b  ldl         $t0, 0x4B($v1)
    ctx->pc = 0x2bcdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bce00: 0x6c680044  ldr         $t0, 0x44($v1)
    ctx->pc = 0x2bce00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bce04: 0x68620053  ldl         $v0, 0x53($v1)
    ctx->pc = 0x2bce04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bce08: 0x6c62004c  ldr         $v0, 0x4C($v1)
    ctx->pc = 0x2bce08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bce0c: 0x6865005b  ldl         $a1, 0x5B($v1)
    ctx->pc = 0x2bce0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bce10: 0x6c650054  ldr         $a1, 0x54($v1)
    ctx->pc = 0x2bce10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bce14: 0x68660063  ldl         $a2, 0x63($v1)
    ctx->pc = 0x2bce14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bce18: 0x6c66005c  ldr         $a2, 0x5C($v1)
    ctx->pc = 0x2bce18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bce1c: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x2bce1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce20: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x2bce20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce24: 0xb3a2004f  sdl         $v0, 0x4F($sp)
    ctx->pc = 0x2bce24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce28: 0xb7a20048  sdr         $v0, 0x48($sp)
    ctx->pc = 0x2bce28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce2c: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x2bce2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce30: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x2bce30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce34: 0xb3a6005f  sdl         $a2, 0x5F($sp)
    ctx->pc = 0x2bce34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce38: 0xb7a60058  sdr         $a2, 0x58($sp)
    ctx->pc = 0x2bce38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce3c: 0xc0a5b02  jal         func_296C08
    ctx->pc = 0x2BCE3Cu;
    SET_GPR_U32(ctx, 31, 0x2BCE44u);
    ctx->pc = 0x2BCE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE3Cu;
    // 0x2bce40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C08u, 0x2BCE3Cu, 0x2BCE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE44u;
label_2bce44:
    // 0x2bce44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2bce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2bce48: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2bce48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bce4c: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x2bce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2bce50: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2bce50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bce54: 0x2353823  subu        $a3, $s1, $s5
    ctx->pc = 0x2bce54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2bce58: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2bce58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce5c: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x2bce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x2bce60: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2bce60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce64: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x2bce64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2bce68: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bce68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce6c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2bce6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce70: 0xc0af25e  jal         func_2BC978
    ctx->pc = 0x2BCE70u;
    SET_GPR_U32(ctx, 31, 0x2BCE78u);
    ctx->pc = 0x2BCE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCE70u;
    // 0x2bce74: 0x27ab0090  addiu       $t3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC978u, 0x2BCE70u, 0x2BCE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCE78u;
label_2bce78:
    // 0x2bce78: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2BCE78u;
    {
        const bool branch_taken_0x2bce78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE78u;
        // 0x2bce7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce78) {
            ctx->pc = 0x2BCFFCu;
            goto label_2bcffc;
        }
    }
    ctx->pc = 0x2BCE80u;
    // 0x2bce80: 0x1ac0003b  blez        $s6, . + 4 + (0x3B << 2)
    ctx->pc = 0x2BCE80u;
    {
        const bool branch_taken_0x2bce80 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2BCE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE80u;
        // 0x2bce84: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bce80) {
            ctx->pc = 0x2BCF70u;
            goto label_2bcf70;
        }
    }
    ctx->pc = 0x2BCE88u;
    // 0x2bce88: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2bce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bce8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2bce90: 0x2445e8c0  addiu       $a1, $v0, -0x1740
    ctx->pc = 0x2bce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x2bce94: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2bce94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bce98: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2bce98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bce9c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x2bce9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcea0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x2bcea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcea4: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x2bcea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2bcea8: 0x6866006b  ldl         $a2, 0x6B($v1)
    ctx->pc = 0x2bcea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2bceac: 0x6c660064  ldr         $a2, 0x64($v1)
    ctx->pc = 0x2bceacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2bceb0: 0x68670073  ldl         $a3, 0x73($v1)
    ctx->pc = 0x2bceb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bceb4: 0x6c67006c  ldr         $a3, 0x6C($v1)
    ctx->pc = 0x2bceb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bceb8: 0x6868007b  ldl         $t0, 0x7B($v1)
    ctx->pc = 0x2bceb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bcebc: 0x6c680074  ldr         $t0, 0x74($v1)
    ctx->pc = 0x2bcebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bcec0: 0x68620083  ldl         $v0, 0x83($v1)
    ctx->pc = 0x2bcec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bcec4: 0x6c62007c  ldr         $v0, 0x7C($v1)
    ctx->pc = 0x2bcec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bcec8: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x2bcec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcecc: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x2bceccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bced0: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x2bced0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bced4: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x2bced4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bced8: 0xb3a8002f  sdl         $t0, 0x2F($sp)
    ctx->pc = 0x2bced8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcedc: 0xb7a80028  sdr         $t0, 0x28($sp)
    ctx->pc = 0x2bcedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcee0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x2bcee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcee4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x2bcee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcee8: 0x162040  sll         $a0, $s6, 1
    ctx->pc = 0x2bcee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x2bceec: 0x6865004b  ldl         $a1, 0x4B($v1)
    ctx->pc = 0x2bceecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bcef0: 0x6c650044  ldr         $a1, 0x44($v1)
    ctx->pc = 0x2bcef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bcef4: 0x68670053  ldl         $a3, 0x53($v1)
    ctx->pc = 0x2bcef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bcef8: 0x6c67004c  ldr         $a3, 0x4C($v1)
    ctx->pc = 0x2bcef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bcefc: 0x6868005b  ldl         $t0, 0x5B($v1)
    ctx->pc = 0x2bcefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2bcf00: 0x6c680054  ldr         $t0, 0x54($v1)
    ctx->pc = 0x2bcf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2bcf04: 0x68620063  ldl         $v0, 0x63($v1)
    ctx->pc = 0x2bcf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bcf08: 0x6c62005c  ldr         $v0, 0x5C($v1)
    ctx->pc = 0x2bcf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bcf0c: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x2bcf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf10: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x2bcf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf14: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x2bcf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf18: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x2bcf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf1c: 0xb3a8004f  sdl         $t0, 0x4F($sp)
    ctx->pc = 0x2bcf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf20: 0xb7a80048  sdr         $t0, 0x48($sp)
    ctx->pc = 0x2bcf20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf24: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2bcf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf28: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2bcf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bcf2c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bcf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf30: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2bcf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2bcf34: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2bcf34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2bcf38: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x2bcf38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bcf3c: 0x2263823  subu        $a3, $s1, $a2
    ctx->pc = 0x2bcf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2bcf40: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x2bcf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2bcf44: 0x2508e8d0  addiu       $t0, $t0, -0x1730
    ctx->pc = 0x2bcf44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961360));
    // 0x2bcf48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bcf48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf4c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2bcf4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf50: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x2bcf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x2bcf54: 0x27ab00f0  addiu       $t3, $sp, 0xF0
    ctx->pc = 0x2bcf54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bcf58: 0xc0af25e  jal         func_2BC978
    ctx->pc = 0x2BCF58u;
    SET_GPR_U32(ctx, 31, 0x2BCF60u);
    ctx->pc = 0x2BCF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF58u;
    // 0x2bcf5c: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC978u, 0x2BCF58u, 0x2BCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF60u;
label_2bcf60:
    // 0x2bcf60: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BCF60u;
    {
        const bool branch_taken_0x2bcf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF60u;
        // 0x2bcf64: 0x8fa30138  lw          $v1, 0x138($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf60) {
            ctx->pc = 0x2BCFF8u;
            goto label_2bcff8;
        }
    }
    ctx->pc = 0x2BCF68u;
    // 0x2bcf68: 0x216a021  addu        $s4, $s0, $s6
    ctx->pc = 0x2bcf68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2bcf6c: 0x203a00b  movn        $s4, $s0, $v1
    ctx->pc = 0x2bcf6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
label_2bcf70:
    // 0x2bcf70: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2bcf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2bcf74: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2bcf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf78: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x2bcf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2bcf7c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2bcf7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2bcf80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2bcf84: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2bcf84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf88: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2bcf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bcf8c: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2BCF8Cu;
    SET_GPR_U32(ctx, 31, 0x2BCF94u);
    ctx->pc = 0x2BCF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF8Cu;
    // 0x2bcf90: 0x30480002  andi        $t0, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2BCF8Cu, 0x2BCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF94u;
label_2bcf94:
    // 0x2bcf94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BCF94u;
    {
        const bool branch_taken_0x2bcf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF94u;
        // 0x2bcf98: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf94) {
            ctx->pc = 0x2BCFF8u;
            goto label_2bcff8;
        }
    }
    ctx->pc = 0x2BCF9Cu;
    // 0x2bcf9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfa0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BCFA0u;
    SET_GPR_U32(ctx, 31, 0x2BCFA8u);
    ctx->pc = 0x2BCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFA0u;
    // 0x2bcfa4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BCFA0u, 0x2BCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFA8u;
label_2bcfa8:
    // 0x2bcfa8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2bcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bcfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfb0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BCFB0u;
    SET_GPR_U32(ctx, 31, 0x2BCFB8u);
    ctx->pc = 0x2BCFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFB0u;
    // 0x2bcfb4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BCFB0u, 0x2BCFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFB8u;
label_2bcfb8:
    // 0x2bcfb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2bcfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bcfbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfc0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BCFC0u;
    SET_GPR_U32(ctx, 31, 0x2BCFC8u);
    ctx->pc = 0x2BCFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFC0u;
    // 0x2bcfc4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BCFC0u, 0x2BCFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFC8u;
label_2bcfc8:
    // 0x2bcfc8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2bcfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bcfcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfd0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BCFD0u;
    SET_GPR_U32(ctx, 31, 0x2BCFD8u);
    ctx->pc = 0x2BCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFD0u;
    // 0x2bcfd4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BCFD0u, 0x2BCFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFD8u;
label_2bcfd8:
    // 0x2bcfd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BCFD8u;
    {
        const bool branch_taken_0x2bcfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFD8u;
        // 0x2bcfdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfd8) {
            ctx->pc = 0x2BCFFCu;
            goto label_2bcffc;
        }
    }
    ctx->pc = 0x2BCFE0u;
label_2bcfe0:
    // 0x2bcfe0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bcfe4:
    // 0x2bcfe4: 0x240500d2  addiu       $a1, $zero, 0xD2
    ctx->pc = 0x2bcfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x2bcfe8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2bcfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2bcfec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bcfecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcff0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BCFF0u;
    SET_GPR_U32(ctx, 31, 0x2BCFF8u);
    ctx->pc = 0x2BCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFF0u;
    // 0x2bcff4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BCFF0u, 0x2BCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFF8u;
label_2bcff8:
    // 0x2bcff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bcff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcffc:
    // 0x2bcffc: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x2bcffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2bd000: 0xdfbe01d0  ld          $fp, 0x1D0($sp)
    ctx->pc = 0x2bd000u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bd004: 0xdfb701c0  ld          $s7, 0x1C0($sp)
    ctx->pc = 0x2bd004u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bd008: 0xdfb601b0  ld          $s6, 0x1B0($sp)
    ctx->pc = 0x2bd008u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2bd00c: 0xdfb501a0  ld          $s5, 0x1A0($sp)
    ctx->pc = 0x2bd00cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bd010: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2bd010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bd014: 0xdfb30180  ld          $s3, 0x180($sp)
    ctx->pc = 0x2bd014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bd018: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2bd018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bd01c: 0xdfb10160  ld          $s1, 0x160($sp)
    ctx->pc = 0x2bd01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bd020: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x2bd020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bd024: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD024u;
        // 0x2bd028: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD02Cu;
    // 0x2bd02c: 0x0  nop
    ctx->pc = 0x2bd02cu;
    // NOP
    // 0x2bd030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bd030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bd034: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bd034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bd038: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bd038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bd03c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd040: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2bd040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2bd044: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bd044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bd048: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bd048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bd04c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd050: 0x8c430184  lw          $v1, 0x184($v0)
    ctx->pc = 0x2bd050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2bd054: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2BD054u;
    {
        const bool branch_taken_0x2bd054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD054u;
        // 0x2bd058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd054) {
            ctx->pc = 0x2BD16Cu;
            goto label_2bd16c;
        }
    }
    ctx->pc = 0x2BD05Cu;
    // 0x2bd05c: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2bd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2bd060: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd064: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2bd064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2bd068: 0xc0ae652  jal         func_2B9948
    ctx->pc = 0x2BD068u;
    SET_GPR_U32(ctx, 31, 0x2BD070u);
    ctx->pc = 0x2BD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD068u;
    // 0x2bd06c: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9948u, 0x2BD068u, 0x2BD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD070u;
label_2bd070:
    // 0x2bd070: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD070u;
    {
        const bool branch_taken_0x2bd070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD070u;
        // 0x2bd074: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd070) {
            ctx->pc = 0x2BD098u;
            goto label_2bd098;
        }
    }
    ctx->pc = 0x2BD078u;
    // 0x2bd078: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bd078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bd07c: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x2bd07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2bd080: 0x2406008a  addiu       $a2, $zero, 0x8A
    ctx->pc = 0x2bd080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x2bd084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd088: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BD088u;
    SET_GPR_U32(ctx, 31, 0x2BD090u);
    ctx->pc = 0x2BD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD088u;
    // 0x2bd08c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BD088u, 0x2BD090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD090u;
label_2bd090:
    // 0x2bd090: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2BD090u;
    {
        const bool branch_taken_0x2bd090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD090u;
        // 0x2bd094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd090) {
            ctx->pc = 0x2BD16Cu;
            goto label_2bd16c;
        }
    }
    ctx->pc = 0x2BD098u;
label_2bd098:
    // 0x2bd098: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2bd098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd09c: 0xac62018c  sw          $v0, 0x18C($v1)
    ctx->pc = 0x2bd09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 2));
    // 0x2bd0a0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2bd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd0a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2bd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2bd0a8: 0xac820190  sw          $v0, 0x190($a0)
    ctx->pc = 0x2bd0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 2));
    // 0x2bd0ac: 0xc0a5b02  jal         func_296C08
    ctx->pc = 0x2BD0ACu;
    SET_GPR_U32(ctx, 31, 0x2BD0B4u);
    ctx->pc = 0x2BD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0ACu;
    // 0x2bd0b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C08u, 0x2BD0ACu, 0x2BD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0B4u;
label_2bd0b4:
    // 0x2bd0b4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2bd0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2bd0b8: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2BD0B8u;
    SET_GPR_U32(ctx, 31, 0x2BD0C0u);
    ctx->pc = 0x2BD0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0B8u;
    // 0x2bd0bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2BD0B8u, 0x2BD0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0C0u;
label_2bd0c0:
    // 0x2bd0c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2bd0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd0c4: 0xc0a5b04  jal         func_296C10
    ctx->pc = 0x2BD0C4u;
    SET_GPR_U32(ctx, 31, 0x2BD0CCu);
    ctx->pc = 0x2BD0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0C4u;
    // 0x2bd0c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C10u, 0x2BD0C4u, 0x2BD0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0CCu;
label_2bd0cc:
    // 0x2bd0cc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2bd0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2bd0d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2bd0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bd0d8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2bd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2bd0dc: 0xc0ab79a  jal         func_2ADE68
    ctx->pc = 0x2BD0DCu;
    SET_GPR_U32(ctx, 31, 0x2BD0E4u);
    ctx->pc = 0x2BD0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0DCu;
    // 0x2bd0e0: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADE68u, 0x2BD0DCu, 0x2BD0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0E4u;
label_2bd0e4:
    // 0x2bd0e4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BD0E4u;
    SET_GPR_U32(ctx, 31, 0x2BD0ECu);
    ctx->pc = 0x2BD0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0E4u;
    // 0x2bd0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2BD0E4u, 0x2BD0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0ECu;
label_2bd0ec:
    // 0x2bd0ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0f0: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BD0F0u;
    {
        const bool branch_taken_0x2bd0f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0F0u;
        // 0x2bd0f4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0f0) {
            ctx->pc = 0x2BD154u;
            goto label_2bd154;
        }
    }
    ctx->pc = 0x2BD0F8u;
    // 0x2bd0f8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BD0F8u;
    SET_GPR_U32(ctx, 31, 0x2BD100u);
    ctx->pc = 0x2BD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0F8u;
    // 0x2bd0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2BD0F8u, 0x2BD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD100u;
label_2bd100:
    // 0x2bd100: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bd100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd104: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BD104u;
    {
        const bool branch_taken_0x2bd104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD104u;
        // 0x2bd108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd104) {
            ctx->pc = 0x2BD150u;
            goto label_2bd150;
        }
    }
    ctx->pc = 0x2BD10Cu;
    // 0x2bd10c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd110: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bd110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd114: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bd114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd118: 0xac500184  sw          $s0, 0x184($v0)
    ctx->pc = 0x2bd118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 16));
    // 0x2bd11c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2bd11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd120: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bd120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd124: 0xc0af2a2  jal         func_2BCA88
    ctx->pc = 0x2BD124u;
    SET_GPR_U32(ctx, 31, 0x2BD12Cu);
    ctx->pc = 0x2BD128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD124u;
    // 0x2bd128: 0xac530188  sw          $s3, 0x188($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA88u;
    goto label_2bca88;
    ctx->pc = 0x2BD12Cu;
label_2bd12c:
    // 0x2bd12c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BD12Cu;
    {
        const bool branch_taken_0x2bd12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD12Cu;
        // 0x2bd130: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd12c) {
            ctx->pc = 0x2BD168u;
            goto label_2bd168;
        }
    }
    ctx->pc = 0x2BD134u;
    // 0x2bd134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd138: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BD138u;
    SET_GPR_U32(ctx, 31, 0x2BD140u);
    ctx->pc = 0x2BD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD138u;
    // 0x2bd13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BD138u, 0x2BD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD140u;
label_2bd140:
    // 0x2bd140: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2BD140u;
    SET_GPR_U32(ctx, 31, 0x2BD148u);
    ctx->pc = 0x2BD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD140u;
    // 0x2bd144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2BD140u, 0x2BD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD148u;
label_2bd148:
    // 0x2bd148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD148u;
    {
        const bool branch_taken_0x2bd148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD148u;
        // 0x2bd14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd148) {
            ctx->pc = 0x2BD16Cu;
            goto label_2bd16c;
        }
    }
    ctx->pc = 0x2BD150u;
label_2bd150:
    // 0x2bd150: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bd150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bd154:
    // 0x2bd154: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x2bd154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2bd158: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2bd158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2bd15c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd160: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BD160u;
    SET_GPR_U32(ctx, 31, 0x2BD168u);
    ctx->pc = 0x2BD164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD160u;
    // 0x2bd164: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BD160u, 0x2BD168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD168u;
label_2bd168:
    // 0x2bd168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd16c:
    // 0x2bd16c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bd16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd170: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2bd170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd174: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bd174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd178: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bd178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd17c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bd17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd180: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD180u;
        // 0x2bd184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD188u;
    // 0x2bd188: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2bd188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2bd18c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2bd18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2bd190: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bd190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bd194: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2bd194u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd198: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2bd198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2bd19c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1a0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2bd1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2bd1a4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2bd1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bd1a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bd1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bd1ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bd1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bd1b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bd1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bd1b4: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD1B4u;
    {
        const bool branch_taken_0x2bd1b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1B4u;
        // 0x2bd1b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1b4) {
            ctx->pc = 0x2BD1CCu;
            goto label_2bd1cc;
        }
    }
    ctx->pc = 0x2BD1BCu;
    // 0x2bd1bc: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd1c0: 0x26440074  addiu       $a0, $s2, 0x74
    ctx->pc = 0x2bd1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x2bd1c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD1C4u;
    {
        const bool branch_taken_0x2bd1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1C4u;
        // 0x2bd1c8: 0x245100cc  addiu       $s1, $v0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1c4) {
            ctx->pc = 0x2BD1D8u;
            goto label_2bd1d8;
        }
    }
    ctx->pc = 0x2BD1CCu;
label_2bd1cc:
    // 0x2bd1cc: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd1d0: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x2bd1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x2bd1d4: 0x245100b4  addiu       $s1, $v0, 0xB4
    ctx->pc = 0x2bd1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_2bd1d8:
    // 0x2bd1d8: 0x8c960008  lw          $s6, 0x8($a0)
    ctx->pc = 0x2bd1d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bd1dc: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD1DCu;
    {
        const bool branch_taken_0x2bd1dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1DCu;
        // 0x2bd1e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1dc) {
            ctx->pc = 0x2BD1F0u;
            goto label_2bd1f0;
        }
    }
    ctx->pc = 0x2BD1E4u;
    // 0x2bd1e4: 0xc0a5b06  jal         func_296C18
    ctx->pc = 0x2BD1E4u;
    SET_GPR_U32(ctx, 31, 0x2BD1ECu);
    ctx->pc = 0x2BD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1E4u;
    // 0x2bd1e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C18u, 0x2BD1E4u, 0x2BD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1ECu;
label_2bd1ec:
    // 0x2bd1ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bd1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bd1f0:
    // 0x2bd1f0: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2bd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x2bd1f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD1F4u;
    {
        const bool branch_taken_0x2bd1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd1f4) {
            ctx->pc = 0x2BD1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD1F4u;
            // 0x2bd1f8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD210u;
            goto label_2bd210;
        }
    }
    ctx->pc = 0x2BD1FCu;
    // 0x2bd1fc: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD1FCu;
    {
        const bool branch_taken_0x2bd1fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd1fc) {
            ctx->pc = 0x2BD200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD1FCu;
            // 0x2bd200: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD210u;
            goto label_2bd210;
        }
    }
    ctx->pc = 0x2BD204u;
    // 0x2bd204: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD204u;
    {
        const bool branch_taken_0x2bd204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd204) {
            ctx->pc = 0x2BD208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD204u;
            // 0x2bd208: 0x9e340004  lwu         $s4, 0x4($s1) (Delay Slot)
            SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD228u;
            goto label_2bd228;
        }
    }
    ctx->pc = 0x2BD20Cu;
    // 0x2bd20c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2bd20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2bd210:
    // 0x2bd210: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2bd210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bd214: 0xc049c48  jal         func_127120
    ctx->pc = 0x2BD214u;
    SET_GPR_U32(ctx, 31, 0x2BD21Cu);
    ctx->pc = 0x2BD218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD214u;
    // 0x2bd218: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BD214u, 0x2BD21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD21Cu;
label_2bd21c:
    // 0x2bd21c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2bd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bd220: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2BD220u;
    {
        const bool branch_taken_0x2bd220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD220u;
        // 0x2bd224: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd220) {
            ctx->pc = 0x2BD428u;
            goto label_2bd428;
        }
    }
    ctx->pc = 0x2BD228u;
label_2bd228:
    // 0x2bd228: 0xc0a5b08  jal         func_296C20
    ctx->pc = 0x2BD228u;
    SET_GPR_U32(ctx, 31, 0x2BD230u);
    ctx->pc = 0x2BD22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD228u;
    // 0x2bd22c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C20u, 0x2BD228u, 0x2BD230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD230u;
label_2bd230:
    // 0x2bd230: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bd230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd238: 0x12620025  beq         $s3, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BD238u;
    {
        const bool branch_taken_0x2bd238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bd238) {
            ctx->pc = 0x2BD2D0u;
            goto label_2bd2d0;
        }
    }
    ctx->pc = 0x2BD240u;
    // 0x2bd240: 0x12e00023  beqz        $s7, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BD240u;
    {
        const bool branch_taken_0x2bd240 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd240) {
            ctx->pc = 0x2BD2D0u;
            goto label_2bd2d0;
        }
    }
    ctx->pc = 0x2BD248u;
    // 0x2bd248: 0x14383c  dsll32      $a3, $s4, 0
    ctx->pc = 0x2bd248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2bd24c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2bd24cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2bd250: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD250u;
    {
        const bool branch_taken_0x2bd250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd250) {
            ctx->pc = 0x2BD254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD250u;
            // 0x2bd254: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD258u;
            goto label_2bd258;
        }
    }
    ctx->pc = 0x2BD258u;
label_2bd258:
    // 0x2bd258: 0xf3001a  div         $zero, $a3, $s3
    ctx->pc = 0x2bd258u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2bd25c: 0xde430100  ld          $v1, 0x100($s2)
    ctx->pc = 0x2bd25cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2bd260: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2bd260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2bd264: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd264u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd268: 0x2628023  subu        $s0, $s3, $v0
    ctx->pc = 0x2bd268u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bd26c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD26Cu;
    {
        const bool branch_taken_0x2bd26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD26Cu;
        // 0x2bd270: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd26c) {
            ctx->pc = 0x2BD284u;
            goto label_2bd284;
        }
    }
    ctx->pc = 0x2BD274u;
    // 0x2bd274: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2bd274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd278: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2bd278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd27c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2bd27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2bd280: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x2bd280u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_2bd284:
    // 0x2bd284: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2bd284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd288: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2bd288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2bd28c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2bd28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bd290: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BD290u;
    {
        const bool branch_taken_0x2bd290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD290u;
        // 0x2bd294: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd290) {
            ctx->pc = 0x2BD2C0u;
            goto label_2bd2c0;
        }
    }
    ctx->pc = 0x2BD298u;
label_2bd298:
    // 0x2bd298: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bd298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bd29c: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x2bd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2bd2a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bd2a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bd2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bd2a8: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2bd2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bd2ac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2bd2acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bd2b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BD2B0u;
    {
        const bool branch_taken_0x2bd2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2b0) {
            ctx->pc = 0x2BD298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bd298;
        }
    }
    ctx->pc = 0x2BD2B8u;
    // 0x2bd2b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD2B8u;
    {
        const bool branch_taken_0x2bd2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2B8u;
        // 0x2bd2bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2b8) {
            ctx->pc = 0x2BD2C4u;
            goto label_2bd2c4;
        }
    }
    ctx->pc = 0x2BD2C0u;
label_2bd2c0:
    // 0x2bd2c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bd2c4:
    // 0x2bd2c4: 0x286a02d  daddu       $s4, $s4, $a2
    ctx->pc = 0x2bd2c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2bd2c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bd2cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2bd2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2bd2d0:
    // 0x2bd2d0: 0x14a83c  dsll32      $s5, $s4, 0
    ctx->pc = 0x2bd2d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2bd2d4: 0x15a83f  dsra32      $s5, $s5, 0
    ctx->pc = 0x2bd2d4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x2bd2d8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2bd2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bd2dc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x2bd2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bd2e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bd2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2e4: 0xc0a5832  jal         func_2960C8
    ctx->pc = 0x2BD2E4u;
    SET_GPR_U32(ctx, 31, 0x2BD2ECu);
    ctx->pc = 0x2BD2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD2E4u;
    // 0x2bd2e8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960C8u, 0x2BD2E4u, 0x2BD2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2ECu;
label_2bd2ec:
    // 0x2bd2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd2f0: 0x1262004f  beq         $s3, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2BD2F0u;
    {
        const bool branch_taken_0x2bd2f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD2F0u;
        // 0x2bd2f4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd2f0) {
            ctx->pc = 0x2BD430u;
            goto label_2bd430;
        }
    }
    ctx->pc = 0x2BD2F8u;
    // 0x2bd2f8: 0x56e0004e  bnel        $s7, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x2BD2F8u;
    {
        const bool branch_taken_0x2bd2f8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2f8) {
            ctx->pc = 0x2BD2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD2F8u;
            // 0x2bd2fc: 0xdfb70070  ld          $s7, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD434u;
            goto label_2bd434;
        }
    }
    ctx->pc = 0x2BD300u;
    // 0x2bd300: 0x6682ffff  daddiu      $v0, $s4, -0x1
    ctx->pc = 0x2bd300u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294967295);
    // 0x2bd304: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2bd304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bd308: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2bd308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2bd30c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2bd30cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2bd310: 0xde430100  ld          $v1, 0x100($s2)
    ctx->pc = 0x2bd310u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2bd314: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bd314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bd318: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2bd318u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd31c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2bd31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2bd320: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2bd320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd324: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2bd324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd328: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BD328u;
    {
        const bool branch_taken_0x2bd328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD328u;
        // 0x2bd32c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd328) {
            ctx->pc = 0x2BD384u;
            goto label_2bd384;
        }
    }
    ctx->pc = 0x2BD330u;
    // 0x2bd330: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2bd330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd334: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2bd334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2bd338: 0x24a5e8d8  addiu       $a1, $a1, -0x1728
    ctx->pc = 0x2bd338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961368));
    // 0x2bd33c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2bd33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bd340: 0xc049c22  jal         func_127088
    ctx->pc = 0x2BD340u;
    SET_GPR_U32(ctx, 31, 0x2BD348u);
    ctx->pc = 0x2BD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD340u;
    // 0x2bd344: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2BD340u, 0x2BD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD348u;
label_2bd348:
    // 0x2bd348: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2BD348u;
    {
        const bool branch_taken_0x2bd348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd348) {
            ctx->pc = 0x2BD34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD348u;
            // 0x2bd34c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD374u;
            goto label_2bd374;
        }
    }
    ctx->pc = 0x2BD350u;
    // 0x2bd350: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2bd350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2bd354: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD354u;
    {
        const bool branch_taken_0x2bd354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd354) {
            ctx->pc = 0x2BD358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD354u;
            // 0x2bd358: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD374u;
            goto label_2bd374;
        }
    }
    ctx->pc = 0x2BD35Cu;
    // 0x2bd35c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2bd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2bd360: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2bd360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bd364: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2bd364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bd368: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd36c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2bd36cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2bd370: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2bd370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2bd374:
    // 0x2bd374: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x2bd374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2bd378: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2bd378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd37c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2bd37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2bd380: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x2bd380u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_2bd384:
    // 0x2bd384: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2bd384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bd388: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x2bd388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2bd38c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BD38Cu;
    {
        const bool branch_taken_0x2bd38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD38Cu;
        // 0x2bd390: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd38c) {
            ctx->pc = 0x2BD3F0u;
            goto label_2bd3f0;
        }
    }
    ctx->pc = 0x2BD394u;
    // 0x2bd394: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x2bd394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x2bd398: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x2bd398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2bd39c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3a0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BD3A0u;
    SET_GPR_U32(ctx, 31, 0x2BD3A8u);
    ctx->pc = 0x2BD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3A0u;
    // 0x2bd3a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BD3A0u, 0x2BD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3A8u;
label_2bd3a8:
    // 0x2bd3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2bd3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bd3b0: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2BD3B0u;
    SET_GPR_U32(ctx, 31, 0x2BD3B8u);
    ctx->pc = 0x2BD3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3B0u;
    // 0x2bd3b4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2BD3B0u, 0x2BD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3B8u;
label_2bd3b8:
    // 0x2bd3b8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2BD3B8u;
    {
        const bool branch_taken_0x2bd3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3B8u;
        // 0x2bd3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3b8) {
            ctx->pc = 0x2BD42Cu;
            goto label_2bd42c;
        }
    }
    ctx->pc = 0x2BD3C0u;
label_2bd3c0:
    // 0x2bd3c0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bd3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bd3c4: 0x240500d3  addiu       $a1, $zero, 0xD3
    ctx->pc = 0x2bd3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x2bd3c8: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x2bd3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x2bd3cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3d0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2BD3D0u;
    SET_GPR_U32(ctx, 31, 0x2BD3D8u);
    ctx->pc = 0x2BD3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3D0u;
    // 0x2bd3d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BD3D0u, 0x2BD3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3D8u;
label_2bd3d8:
    // 0x2bd3d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2bd3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bd3e0: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2BD3E0u;
    SET_GPR_U32(ctx, 31, 0x2BD3E8u);
    ctx->pc = 0x2BD3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3E0u;
    // 0x2bd3e4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2BD3E0u, 0x2BD3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3E8u;
label_2bd3e8:
    // 0x2bd3e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BD3E8u;
    {
        const bool branch_taken_0x2bd3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3E8u;
        // 0x2bd3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3e8) {
            ctx->pc = 0x2BD42Cu;
            goto label_2bd42c;
        }
    }
    ctx->pc = 0x2BD3F0u;
label_2bd3f0:
    // 0x2bd3f0: 0x2b02823  subu        $a1, $s5, $s0
    ctx->pc = 0x2bd3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2bd3f4: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x2bd3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2bd3f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BD3F8u;
    {
        const bool branch_taken_0x2bd3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3F8u;
        // 0x2bd3fc: 0xd01023  subu        $v0, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd3f8) {
            ctx->pc = 0x2BD424u;
            goto label_2bd424;
        }
    }
    ctx->pc = 0x2BD400u;
    // 0x2bd400: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2bd400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2bd404: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2bd404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2bd408:
    // 0x2bd408: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2bd408u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd40c: 0x1474ffec  bne         $v1, $s4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2BD40Cu;
    {
        const bool branch_taken_0x2bd40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2BD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD40Cu;
        // 0x2bd410: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd40c) {
            ctx->pc = 0x2BD3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bd3c0;
        }
    }
    ctx->pc = 0x2BD414u;
    // 0x2bd414: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x2bd414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2bd418: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BD418u;
    {
        const bool branch_taken_0x2bd418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD418u;
        // 0x2bd41c: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd418) {
            ctx->pc = 0x2BD408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bd408;
        }
    }
    ctx->pc = 0x2BD420u;
    // 0x2bd420: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x2bd420u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2bd424:
    // 0x2bd424: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2bd424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2bd428:
    // 0x2bd428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bd428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bd42c:
    // 0x2bd42c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2bd42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2bd430:
    // 0x2bd430: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2bd430u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2bd434:
    // 0x2bd434: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2bd434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd438: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2bd438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd43c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bd43cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd440: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bd440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd444: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bd444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd448: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bd448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd44c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bd44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd450: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD450u;
        // 0x2bd454: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD458u;
    // 0x2bd458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bd458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bd45c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bd45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bd460: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bd460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bd464: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bd464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd468: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bd468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bd46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bd46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd470: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x2BD470u;
    SET_GPR_U32(ctx, 31, 0x2BD478u);
    ctx->pc = 0x2BD474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD470u;
    // 0x2bd474: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296EB8u, 0x2BD470u, 0x2BD478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD478u;
label_2bd478:
    // 0x2bd478: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD478u;
    {
        const bool branch_taken_0x2bd478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd478) {
            ctx->pc = 0x2BD47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD478u;
            // 0x2bd47c: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD488u;
            goto label_2bd488;
        }
    }
    ctx->pc = 0x2BD480u;
    // 0x2bd480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD480u;
    {
        const bool branch_taken_0x2bd480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD480u;
        // 0x2bd484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd480) {
            ctx->pc = 0x2BD498u;
            goto label_2bd498;
        }
    }
    ctx->pc = 0x2BD488u;
label_2bd488:
    // 0x2bd488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd48c: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2BD48Cu;
    SET_GPR_U32(ctx, 31, 0x2BD494u);
    ctx->pc = 0x2BD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD48Cu;
    // 0x2bd490: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2BD48Cu, 0x2BD494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD494u;
label_2bd494:
    // 0x2bd494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2bd494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2bd498:
    // 0x2bd498: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bd498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd49c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bd49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd4a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bd4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4A4u;
        // 0x2bd4a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD4ACu;
    // 0x2bd4ac: 0x0  nop
    ctx->pc = 0x2bd4acu;
    // NOP
    // 0x2bd4b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2bd4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2bd4b4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2bd4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2bd4b8: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2bd4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2bd4bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2bd4bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4c0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2bd4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2bd4c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bd4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4c8: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2bd4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2bd4cc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2bd4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd4d0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2bd4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2bd4d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bd4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4d8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2bd4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4dc: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2bd4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2bd4e0: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2bd4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2bd4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bd4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4e8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2bd4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2bd4ec: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2bd4ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2bd4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd4f4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2BD4F4u;
    SET_GPR_U32(ctx, 31, 0x2BD4FCu);
    ctx->pc = 0x2BD4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD4F4u;
    // 0x2bd4f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2BD4F4u, 0x2BD4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD4FCu;
label_2bd4fc:
    // 0x2bd4fc: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2bd4fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd500: 0x8e640128  lw          $a0, 0x128($s3)
    ctx->pc = 0x2bd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x2bd504: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2bd504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2bd508: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x2BD508u;
    SET_GPR_U32(ctx, 31, 0x2BD510u);
    ctx->pc = 0x2BD50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD508u;
    // 0x2bd50c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296EB8u, 0x2BD508u, 0x2BD510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD510u;
label_2bd510:
    // 0x2bd510: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BD510u;
    {
        const bool branch_taken_0x2bd510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD510u;
        // 0x2bd514: 0x27b00060  addiu       $s0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd510) {
            ctx->pc = 0x2BD544u;
            goto label_2bd544;
        }
    }
    ctx->pc = 0x2BD518u;
    // 0x2bd518: 0x8e640128  lw          $a0, 0x128($s3)
    ctx->pc = 0x2bd518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x2bd51c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd520: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2BD520u;
    SET_GPR_U32(ctx, 31, 0x2BD528u);
    ctx->pc = 0x2BD524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD520u;
    // 0x2bd524: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2BD520u, 0x2BD528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD528u;
label_2bd528:
    // 0x2bd528: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2bd528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd52c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bd52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd530: 0x8e640128  lw          $a0, 0x128($s3)
    ctx->pc = 0x2bd530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x2bd534: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x2BD534u;
    SET_GPR_U32(ctx, 31, 0x2BD53Cu);
    ctx->pc = 0x2BD538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD534u;
    // 0x2bd538: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296EB8u, 0x2BD534u, 0x2BD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD53Cu;
label_2bd53c:
    // 0x2bd53c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD53Cu;
    {
        const bool branch_taken_0x2bd53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd53c) {
            ctx->pc = 0x2BD540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD53Cu;
            // 0x2bd540: 0x8e640128  lw          $a0, 0x128($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD54Cu;
            goto label_2bd54c;
        }
    }
    ctx->pc = 0x2BD544u;
label_2bd544:
    // 0x2bd544: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2BD544u;
    {
        const bool branch_taken_0x2bd544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD544u;
        // 0x2bd548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd544) {
            ctx->pc = 0x2BD59Cu;
            goto label_2bd59c;
        }
    }
    ctx->pc = 0x2BD54Cu;
label_2bd54c:
    // 0x2bd54c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bd54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd554: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2BD554u;
    SET_GPR_U32(ctx, 31, 0x2BD55Cu);
    ctx->pc = 0x2BD558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD554u;
    // 0x2bd558: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2BD554u, 0x2BD55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD55Cu;
label_2bd55c:
    // 0x2bd55c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x2bd55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2bd560: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2bd560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd564: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2bd564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2bd568: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2bd568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd56c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2bd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd570: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x2bd570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2bd574: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x2bd574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x2bd578: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x2bd578u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd57c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x2bd57cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bd580: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2bd580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bd584: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x2bd584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x2bd588: 0x2463823  subu        $a3, $s2, $a2
    ctx->pc = 0x2bd588u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2bd58c: 0xc0af25e  jal         func_2BC978
    ctx->pc = 0x2BD58Cu;
    SET_GPR_U32(ctx, 31, 0x2BD594u);
    ctx->pc = 0x2BD590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD58Cu;
    // 0x2bd590: 0x8c640104  lw          $a0, 0x104($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC978u, 0x2BD58Cu, 0x2BD594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD594u;
label_2bd594:
    // 0x2bd594: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2bd594u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2bd598: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bd598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd59c:
    // 0x2bd59c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2bd59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bd5a0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2bd5a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bd5a4: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2bd5a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bd5a8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2bd5a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bd5ac: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2bd5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd5b0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2bd5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd5b4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2bd5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd5b8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2bd5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5BCu;
        // 0x2bd5c0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD5C4u;
    // 0x2bd5c4: 0x0  nop
    ctx->pc = 0x2bd5c4u;
    // NOP
    // 0x2bd5c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bd5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bd5cc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2bd5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2bd5d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bd5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bd5d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2bd5d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd5d8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2bd5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2bd5dc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2bd5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2bd5e0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2bd5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2bd5e4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD5E4u;
    {
        const bool branch_taken_0x2bd5e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5E4u;
        // 0x2bd5e8: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5e4) {
            ctx->pc = 0x2BD604u;
            goto label_2bd604;
        }
    }
    ctx->pc = 0x2BD5ECu;
    // 0x2bd5ec: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2bd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2bd5f0: 0x8c900078  lw          $s0, 0x78($a0)
    ctx->pc = 0x2bd5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2bd5f4: 0x24530028  addiu       $s3, $v0, 0x28
    ctx->pc = 0x2bd5f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2bd5f8: 0x245100cc  addiu       $s1, $v0, 0xCC
    ctx->pc = 0x2bd5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x2bd5fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD5FCu;
    {
        const bool branch_taken_0x2bd5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5FCu;
        // 0x2bd600: 0x24520030  addiu       $s2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5fc) {
            ctx->pc = 0x2BD618u;
            goto label_2bd618;
        }
    }
    ctx->pc = 0x2BD604u;
label_2bd604:
    // 0x2bd604: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2bd604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2bd608: 0x8c90006c  lw          $s0, 0x6C($a0)
    ctx->pc = 0x2bd608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2bd60c: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x2bd60cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2bd610: 0x245100b4  addiu       $s1, $v0, 0xB4
    ctx->pc = 0x2bd610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2bd614: 0x24520014  addiu       $s2, $v0, 0x14
    ctx->pc = 0x2bd614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2bd618:
    // 0x2bd618: 0xc0a5f46  jal         func_297D18
    ctx->pc = 0x2BD618u;
    SET_GPR_U32(ctx, 31, 0x2BD620u);
    ctx->pc = 0x2BD61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD618u;
    // 0x2bd61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297D18u, 0x2BD618u, 0x2BD620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD620u;
label_2bd620:
    // 0x2bd620: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2BD620u;
    SET_GPR_U32(ctx, 31, 0x2BD628u);
    ctx->pc = 0x2BD624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD620u;
    // 0x2bd624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BD8u, 0x2BD620u, 0x2BD628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD628u;
label_2bd628:
    // 0x2bd628: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2bd628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2bd62c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2bd62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bd630: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bd630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd634: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bd634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd638: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2bd638u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd63c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd640: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x2bd640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bd644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd648: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2bd648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd650: 0xa3a80002  sb          $t0, 0x2($sp)
    ctx->pc = 0x2bd650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x2bd654: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bd658: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bd658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bd65c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x2bd65cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bd660: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x2bd660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bd664: 0xc0a5f8a  jal         func_297E28
    ctx->pc = 0x2BD664u;
    SET_GPR_U32(ctx, 31, 0x2BD66Cu);
    ctx->pc = 0x2BD668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD664u;
    // 0x2bd668: 0xa3a30004  sb          $v1, 0x4($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297E28u, 0x2BD664u, 0x2BD66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD66Cu;
label_2bd66c:
    // 0x2bd66c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BD66Cu;
    {
        const bool branch_taken_0x2bd66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD66Cu;
        // 0x2bd670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd66c) {
            ctx->pc = 0x2BD6B8u;
            goto label_2bd6b8;
        }
    }
    ctx->pc = 0x2BD674u;
    // 0x2bd674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bd674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd678: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x2BD678u;
    SET_GPR_U32(ctx, 31, 0x2BD680u);
    ctx->pc = 0x2BD67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD678u;
    // 0x2bd67c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD0u, 0x2BD678u, 0x2BD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD680u;
label_2bd680:
    // 0x2bd680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd684: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd688: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x2BD688u;
    SET_GPR_U32(ctx, 31, 0x2BD690u);
    ctx->pc = 0x2BD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD688u;
    // 0x2bd68c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD0u, 0x2BD688u, 0x2BD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD690u;
label_2bd690:
    // 0x2bd690: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2bd690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bd694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd698: 0xc0a5ff4  jal         func_297FD0
    ctx->pc = 0x2BD698u;
    SET_GPR_U32(ctx, 31, 0x2BD6A0u);
    ctx->pc = 0x2BD69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD698u;
    // 0x2bd69c: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD0u, 0x2BD698u, 0x2BD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6A0u;
label_2bd6a0:
    // 0x2bd6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd6a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bd6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd6a8: 0xc0a5ff6  jal         func_297FD8
    ctx->pc = 0x2BD6A8u;
    SET_GPR_U32(ctx, 31, 0x2BD6B0u);
    ctx->pc = 0x2BD6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD6A8u;
    // 0x2bd6ac: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297FD8u, 0x2BD6A8u, 0x2BD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6B0u;
label_2bd6b0:
    // 0x2bd6b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD6B0u;
    {
        const bool branch_taken_0x2bd6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd6b0) {
            ctx->pc = 0x2BD6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD6B0u;
            // 0x2bd6b4: 0x92620007  lbu         $v0, 0x7($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD6C0u;
            goto label_2bd6c0;
        }
    }
    ctx->pc = 0x2BD6B8u;
label_2bd6b8:
    // 0x2bd6b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BD6B8u;
    {
        const bool branch_taken_0x2bd6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B8u;
        // 0x2bd6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6b8) {
            ctx->pc = 0x2BD6FCu;
            goto label_2bd6fc;
        }
    }
    ctx->pc = 0x2BD6C0u;
label_2bd6c0:
    // 0x2bd6c0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2bd6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bd6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bd6c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bd6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bd6cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2BD6CCu;
    {
        const bool branch_taken_0x2bd6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6CCu;
        // 0x2bd6d0: 0xa2620007  sb          $v0, 0x7($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6cc) {
            ctx->pc = 0x2BD6F8u;
            goto label_2bd6f8;
        }
    }
    ctx->pc = 0x2BD6D4u;
    // 0x2bd6d4: 0x26650007  addiu       $a1, $s3, 0x7
    ctx->pc = 0x2bd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_2bd6d8:
    // 0x2bd6d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2bd6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2bd6dc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD6DCu;
    {
        const bool branch_taken_0x2bd6dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2BD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6DCu;
        // 0x2bd6e0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6dc) {
            ctx->pc = 0x2BD6F8u;
            goto label_2bd6f8;
        }
    }
    ctx->pc = 0x2BD6E4u;
    // 0x2bd6e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2bd6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bd6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bd6ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bd6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bd6f0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BD6F0u;
    {
        const bool branch_taken_0x2bd6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6F0u;
        // 0x2bd6f4: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6f0) {
            ctx->pc = 0x2BD6D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bd6d8;
        }
    }
    ctx->pc = 0x2BD6F8u;
label_2bd6f8:
    // 0x2bd6f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd6fc:
    // 0x2bd6fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bd6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd700: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2bd700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd704: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2bd704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd708: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2bd708u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd70c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2bd70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd710: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2bd710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd714: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD714u;
        // 0x2bd718: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD71Cu;
    // 0x2bd71c: 0x0  nop
    ctx->pc = 0x2bd71cu;
    // NOP
    // 0x2bd720: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2bd720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bd724: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bd724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2bd728: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2bd728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2bd72c: 0x2443e8e8  addiu       $v1, $v0, -0x1718
    ctx->pc = 0x2bd72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961384));
    // 0x2bd730: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bd730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bd734: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2bd734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd738: 0xdc45e8e8  ld          $a1, -0x1718($v0)
    ctx->pc = 0x2bd738u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961384)));
    // 0x2bd73c: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x2bd73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bd740: 0x906a000c  lbu         $t2, 0xC($v1)
    ctx->pc = 0x2bd740u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2bd744: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2bd744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd748: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2bd748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bd74c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2bd74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd750: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2bd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2bd754: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x2bd754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x2bd758: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2bd758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2bd75c: 0xa3aa001c  sb          $t2, 0x1C($sp)
    ctx->pc = 0x2bd75cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 10));
    // 0x2bd760: 0x6862006b  ldl         $v0, 0x6B($v1)
    ctx->pc = 0x2bd760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bd764: 0x6c620064  ldr         $v0, 0x64($v1)
    ctx->pc = 0x2bd764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bd768: 0x68650073  ldl         $a1, 0x73($v1)
    ctx->pc = 0x2bd768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bd76c: 0x6c65006c  ldr         $a1, 0x6C($v1)
    ctx->pc = 0x2bd76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bd770: 0x6867007b  ldl         $a3, 0x7B($v1)
    ctx->pc = 0x2bd770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bd774: 0x6c670074  ldr         $a3, 0x74($v1)
    ctx->pc = 0x2bd774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bd778: 0x686a0083  ldl         $t2, 0x83($v1)
    ctx->pc = 0x2bd778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bd77c: 0x6c6a007c  ldr         $t2, 0x7C($v1)
    ctx->pc = 0x2bd77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bd780: 0xb3a20024  sdl         $v0, 0x24($sp)
    ctx->pc = 0x2bd780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd784: 0xb7a2001d  sdr         $v0, 0x1D($sp)
    ctx->pc = 0x2bd784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 29); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd788: 0xb3a5002c  sdl         $a1, 0x2C($sp)
    ctx->pc = 0x2bd788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd78c: 0xb7a50025  sdr         $a1, 0x25($sp)
    ctx->pc = 0x2bd78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 37); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd790: 0xb3a70034  sdl         $a3, 0x34($sp)
    ctx->pc = 0x2bd790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd794: 0xb7a7002d  sdr         $a3, 0x2D($sp)
    ctx->pc = 0x2bd794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 45); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd798: 0xb3aa003c  sdl         $t2, 0x3C($sp)
    ctx->pc = 0x2bd798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd79c: 0xb7aa0035  sdr         $t2, 0x35($sp)
    ctx->pc = 0x2bd79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 53); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7a0: 0x686b004b  ldl         $t3, 0x4B($v1)
    ctx->pc = 0x2bd7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2bd7a4: 0x6c6b0044  ldr         $t3, 0x44($v1)
    ctx->pc = 0x2bd7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2bd7a8: 0x68620053  ldl         $v0, 0x53($v1)
    ctx->pc = 0x2bd7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2bd7ac: 0x6c62004c  ldr         $v0, 0x4C($v1)
    ctx->pc = 0x2bd7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2bd7b0: 0x6865005b  ldl         $a1, 0x5B($v1)
    ctx->pc = 0x2bd7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2bd7b4: 0x6c650054  ldr         $a1, 0x54($v1)
    ctx->pc = 0x2bd7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2bd7b8: 0x686a0063  ldl         $t2, 0x63($v1)
    ctx->pc = 0x2bd7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2bd7bc: 0x6c6a005c  ldr         $t2, 0x5C($v1)
    ctx->pc = 0x2bd7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2bd7c0: 0xb3ab0044  sdl         $t3, 0x44($sp)
    ctx->pc = 0x2bd7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7c4: 0xb7ab003d  sdr         $t3, 0x3D($sp)
    ctx->pc = 0x2bd7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 61); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7c8: 0xb3a2004c  sdl         $v0, 0x4C($sp)
    ctx->pc = 0x2bd7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7cc: 0xb7a20045  sdr         $v0, 0x45($sp)
    ctx->pc = 0x2bd7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 69); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7d0: 0xb3a50054  sdl         $a1, 0x54($sp)
    ctx->pc = 0x2bd7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7d4: 0xb7a5004d  sdr         $a1, 0x4D($sp)
    ctx->pc = 0x2bd7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 77); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7d8: 0xb3aa005c  sdl         $t2, 0x5C($sp)
    ctx->pc = 0x2bd7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7dc: 0xb7aa0055  sdr         $t2, 0x55($sp)
    ctx->pc = 0x2bd7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 85); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bd7e0: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x2bd7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2bd7e4: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x2bd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2bd7e8: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x2bd7e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd7ec: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2bd7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2bd7f0: 0x8c8a00b0  lw          $t2, 0xB0($a0)
    ctx->pc = 0x2bd7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2bd7f4: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x2bd7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x2bd7f8: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x2bd7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2bd7fc: 0xc0af25e  jal         func_2BC978
    ctx->pc = 0x2BD7FCu;
    SET_GPR_U32(ctx, 31, 0x2BD804u);
    ctx->pc = 0x2BD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7FCu;
    // 0x2bd800: 0x254a0014  addiu       $t2, $t2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC978u, 0x2BD7FCu, 0x2BD804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD804u;
label_2bd804:
    // 0x2bd804: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2bd804u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2bd808: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2bd808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd80c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bd80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd810: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2bd810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd814: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD814u;
        // 0x2bd818: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD81Cu;
    // 0x2bd81c: 0x0  nop
    ctx->pc = 0x2bd81cu;
    // NOP
    // 0x2bd820: 0x2c820065  sltiu       $v0, $a0, 0x65
    ctx->pc = 0x2bd820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x2bd824: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BD824u;
    {
        const bool branch_taken_0x2bd824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD824u;
        // 0x2bd828: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd824) {
            ctx->pc = 0x2BD904u;
            goto label_2bd904;
        }
    }
    ctx->pc = 0x2BD82Cu;
    // 0x2bd82c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd830: 0x2442e900  addiu       $v0, $v0, -0x1700
    ctx->pc = 0x2bd830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961408));
    // 0x2bd834: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bd834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd838: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2bd838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd83c: 0x800008  jr          $a0
    ctx->pc = 0x2BD83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BD844u: goto label_2bd844;
            case 0x2BD84Cu: goto label_2bd84c;
            case 0x2BD854u: goto label_2bd854;
            case 0x2BD85Cu: goto label_2bd85c;
            case 0x2BD864u: goto label_2bd864;
            case 0x2BD86Cu: goto label_2bd86c;
            case 0x2BD874u: goto label_2bd874;
            case 0x2BD87Cu: goto label_2bd87c;
            case 0x2BD884u: goto label_2bd884;
            case 0x2BD88Cu: goto label_2bd88c;
            case 0x2BD894u: goto label_2bd894;
            case 0x2BD89Cu: goto label_2bd89c;
            case 0x2BD8A4u: goto label_2bd8a4;
            case 0x2BD8ACu: goto label_2bd8ac;
            case 0x2BD8B4u: goto label_2bd8b4;
            case 0x2BD8BCu: goto label_2bd8bc;
            case 0x2BD8C4u: goto label_2bd8c4;
            case 0x2BD8CCu: goto label_2bd8cc;
            case 0x2BD8D4u: goto label_2bd8d4;
            case 0x2BD8DCu: goto label_2bd8dc;
            case 0x2BD8E4u: goto label_2bd8e4;
            case 0x2BD8ECu: goto label_2bd8ec;
            case 0x2BD8F4u: goto label_2bd8f4;
            case 0x2BD8FCu: goto label_2bd8fc;
            case 0x2BD904u: goto label_2bd904;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD83Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BD844u;
label_2bd844:
    // 0x2bd844: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD844u;
        // 0x2bd848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD84Cu;
label_2bd84c:
    // 0x2bd84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD84Cu;
        // 0x2bd850: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD854u;
label_2bd854:
    // 0x2bd854: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD854u;
        // 0x2bd858: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD85Cu;
label_2bd85c:
    // 0x2bd85c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD85Cu;
        // 0x2bd860: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD864u;
label_2bd864:
    // 0x2bd864: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD864u;
        // 0x2bd868: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD86Cu;
label_2bd86c:
    // 0x2bd86c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD86Cu;
        // 0x2bd870: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD874u;
label_2bd874:
    // 0x2bd874: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD874u;
        // 0x2bd878: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD87Cu;
label_2bd87c:
    // 0x2bd87c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD87Cu;
        // 0x2bd880: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD884u;
label_2bd884:
    // 0x2bd884: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD884u;
        // 0x2bd888: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD88Cu;
label_2bd88c:
    // 0x2bd88c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD88Cu;
        // 0x2bd890: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD894u;
label_2bd894:
    // 0x2bd894: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD894u;
        // 0x2bd898: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD89Cu;
label_2bd89c:
    // 0x2bd89c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD89Cu;
        // 0x2bd8a0: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8A4u;
label_2bd8a4:
    // 0x2bd8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8A4u;
        // 0x2bd8a8: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8ACu;
label_2bd8ac:
    // 0x2bd8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8ACu;
        // 0x2bd8b0: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8B4u;
label_2bd8b4:
    // 0x2bd8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8B4u;
        // 0x2bd8b8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8BCu;
label_2bd8bc:
    // 0x2bd8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8BCu;
        // 0x2bd8c0: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8C4u;
label_2bd8c4:
    // 0x2bd8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8C4u;
        // 0x2bd8c8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8CCu;
label_2bd8cc:
    // 0x2bd8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8CCu;
        // 0x2bd8d0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8D4u;
label_2bd8d4:
    // 0x2bd8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8D4u;
        // 0x2bd8d8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8DCu;
label_2bd8dc:
    // 0x2bd8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8DCu;
        // 0x2bd8e0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8E4u;
label_2bd8e4:
    // 0x2bd8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E4u;
        // 0x2bd8e8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8ECu;
label_2bd8ec:
    // 0x2bd8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8ECu;
        // 0x2bd8f0: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8F4u;
label_2bd8f4:
    // 0x2bd8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8F4u;
        // 0x2bd8f8: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD8FCu;
label_2bd8fc:
    // 0x2bd8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8FCu;
        // 0x2bd900: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD904u;
label_2bd904:
    // 0x2bd904: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD904u;
        // 0x2bd908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD90Cu;
    // 0x2bd90c: 0x0  nop
    ctx->pc = 0x2bd90cu;
    // NOP
    // 0x2bd910: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD910u;
        // 0x2bd914: 0x24021c20  addiu       $v0, $zero, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD918u;
}
