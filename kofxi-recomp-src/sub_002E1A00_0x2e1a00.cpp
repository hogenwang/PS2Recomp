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

// Function: sub_002E1A00
// Address: 0x2e1a00 - 0x2e1f18
void sub_002E1A00_0x2e1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1A00_0x2e1a00");
#endif

    switch (ctx->pc) {
        case 0x2e1a80u: goto label_2e1a80;
        case 0x2e1ad0u: goto label_2e1ad0;
        case 0x2e1ae4u: goto label_2e1ae4;
        case 0x2e1aecu: goto label_2e1aec;
        case 0x2e1b20u: goto label_2e1b20;
        case 0x2e1b38u: goto label_2e1b38;
        case 0x2e1b4cu: goto label_2e1b4c;
        case 0x2e1b50u: goto label_2e1b50;
        case 0x2e1b58u: goto label_2e1b58;
        case 0x2e1b7cu: goto label_2e1b7c;
        case 0x2e1c44u: goto label_2e1c44;
        case 0x2e1c58u: goto label_2e1c58;
        case 0x2e1cc0u: goto label_2e1cc0;
        case 0x2e1cd0u: goto label_2e1cd0;
        case 0x2e1d24u: goto label_2e1d24;
        case 0x2e1d40u: goto label_2e1d40;
        case 0x2e1d48u: goto label_2e1d48;
        case 0x2e1db8u: goto label_2e1db8;
        case 0x2e1dc0u: goto label_2e1dc0;
        case 0x2e1e30u: goto label_2e1e30;
        case 0x2e1e38u: goto label_2e1e38;
        case 0x2e1ed4u: goto label_2e1ed4;
        default: break;
    }

    ctx->pc = 0x2e1a00u;

    // 0x2e1a00: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x2e1a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
    // 0x2e1a04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1a08: 0xffb004e0  sd          $s0, 0x4E0($sp)
    ctx->pc = 0x2e1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 16));
    // 0x2e1a0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e1a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a10: 0xffb104e8  sd          $s1, 0x4E8($sp)
    ctx->pc = 0x2e1a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1256), GPR_U64(ctx, 17));
    // 0x2e1a14: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e1a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a18: 0xffb204f0  sd          $s2, 0x4F0($sp)
    ctx->pc = 0x2e1a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 18));
    // 0x2e1a1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e1a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a20: 0xffb304f8  sd          $s3, 0x4F8($sp)
    ctx->pc = 0x2e1a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1272), GPR_U64(ctx, 19));
    // 0x2e1a24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e1a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a28: 0xffb50508  sd          $s5, 0x508($sp)
    ctx->pc = 0x2e1a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1288), GPR_U64(ctx, 21));
    // 0x2e1a2c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e1a2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a30: 0xffb40500  sd          $s4, 0x500($sp)
    ctx->pc = 0x2e1a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 20));
    // 0x2e1a34: 0xffb60510  sd          $s6, 0x510($sp)
    ctx->pc = 0x2e1a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 22));
    // 0x2e1a38: 0xffb70518  sd          $s7, 0x518($sp)
    ctx->pc = 0x2e1a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1304), GPR_U64(ctx, 23));
    // 0x2e1a3c: 0xffbe0520  sd          $fp, 0x520($sp)
    ctx->pc = 0x2e1a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 30));
    // 0x2e1a40: 0xffbf0528  sd          $ra, 0x528($sp)
    ctx->pc = 0x2e1a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1320), GPR_U64(ctx, 31));
    // 0x2e1a44: 0xe7b60540  swc1        $f22, 0x540($sp)
    ctx->pc = 0x2e1a44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
    // 0x2e1a48: 0xe7b50538  swc1        $f21, 0x538($sp)
    ctx->pc = 0x2e1a48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
    // 0x2e1a4c: 0xe7b40530  swc1        $f20, 0x530($sp)
    ctx->pc = 0x2e1a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
    // 0x2e1a50: 0xafa204d8  sw          $v0, 0x4D8($sp)
    ctx->pc = 0x2e1a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1240), GPR_U32(ctx, 2));
    // 0x2e1a54: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e1a58: 0x24631aa0  addiu       $v1, $v1, 0x1AA0
    ctx->pc = 0x2e1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6816));
    // 0x2e1a5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1a60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1A60u;
    {
        const bool branch_taken_0x2e1a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a60) {
            ctx->pc = 0x2E1A80u;
            goto label_2e1a80;
        }
    }
    ctx->pc = 0x2E1A68u;
    // 0x2e1a68: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e1a6c: 0x24841ab4  addiu       $a0, $a0, 0x1AB4
    ctx->pc = 0x2e1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6836));
    // 0x2e1a70: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e1a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e1a74: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e1a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e1a78: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E1A78u;
    SET_GPR_U32(ctx, 31, 0x2E1A80u);
    ctx->pc = 0x2E1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1A78u;
    // 0x2e1a7c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E1A78u, 0x2E1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1A80u;
label_2e1a80:
    // 0x2e1a80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E1A80u;
    {
        const bool branch_taken_0x2e1a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a80) {
            ctx->pc = 0x2E1AB4u;
            goto label_2e1ab4;
        }
    }
    ctx->pc = 0x2E1A88u;
    // 0x2e1a88: 0xdeeda2e7  ld          $t5, -0x5D19($s7)
    ctx->pc = 0x2e1a88u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 23), 4294943463)));
    // 0x2e1a8c: 0xfe6d269a  sd          $t5, 0x269A($s3)
    ctx->pc = 0x2e1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 9882), GPR_U64(ctx, 13));
    // 0x2e1a90: 0x862232bb  lh          $v0, 0x32BB($s1)
    ctx->pc = 0x2e1a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12987)));
    // 0x2e1a94: 0x8fb995c5  lw          $t9, -0x6A3B($sp)
    ctx->pc = 0x2e1a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294940101)));
    // 0x2e1a98: 0xfdaf281a  sd          $t7, 0x281A($t5)
    ctx->pc = 0x2e1a98u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 10266), GPR_U64(ctx, 15));
    // 0x2e1a9c: 0xff0a555a  sd          $t2, 0x555A($t8)
    ctx->pc = 0x2e1a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 21850), GPR_U64(ctx, 10));
    // 0x2e1aa0: 0x0  nop
    ctx->pc = 0x2e1aa0u;
    // NOP
    // 0x2e1aa4: 0x598d4ae7  .word       0x598D4AE7                   # blezl       $t4, . + 4 + (0x4AE7 << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1AA4u;
    {
        const bool branch_taken_0x2e1aa4 = (GPR_S32(ctx, 12) <= 0);
        if (branch_taken_0x2e1aa4) {
            ctx->pc = 0x2E1AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1AA4u;
            // 0x2e1aa8: 0xca0c88b2  lwc2        $12, -0x774E($s0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1AA8 raw=0xCA0C88B2");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4644u;
            return;
        }
    }
    ctx->pc = 0x2E1AACu;
    // 0x2e1aac: 0x598d4937  .word       0x598D4937                   # blezl       $t4, . + 4 + (0x4937 << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1AACu;
    {
        const bool branch_taken_0x2e1aac = (GPR_S32(ctx, 12) <= 0);
        if (branch_taken_0x2e1aac) {
            ctx->pc = 0x2F3F8Cu;
            return;
        }
    }
    ctx->pc = 0x2E1AB4u;
label_2e1ab4:
    // 0x2e1ab4: 0xdbfeaa56  lqc2        $vf30, -0x55AA($ra)
    ctx->pc = 0x2e1ab4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945366)));
    // 0x2e1ab8: 0xc1fcbd4a  ll          $gp, -0x42B6($t7)
    ctx->pc = 0x2e1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294950218); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1abc: 0xcdecbd6a  pref        0x0C, -0x4296($t7)
    ctx->pc = 0x2e1abcu;
    // PREF instruction (ignored)
    // 0x2e1ac0: 0xc5ecbd8a  lwc1        $f12, -0x4276($t7)
    ctx->pc = 0x2e1ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294950282)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e1ac4: 0xdb76bb5a  lqc2        $vf22, -0x44A6($k1)
    ctx->pc = 0x2e1ac4u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294949722)));
    // 0x2e1ac8: 0xc0b85cc  jal         func_2E1730
    ctx->pc = 0x2E1AC8u;
    SET_GPR_U32(ctx, 31, 0x2E1AD0u);
    ctx->pc = 0x2E1ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AC8u;
    // 0x2e1acc: 0x9b74bb5a  lwr         $s4, -0x44A6($k1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294949722); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 20) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 20) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 20, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1730u, 0x2E1AC8u, 0x2E1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AD0u;
label_2e1ad0:
    // 0x2e1ad0: 0xdafc2a6a  lqc2        $vf28, 0x2A6A($s7)
    ctx->pc = 0x2e1ad0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 10858)));
    // 0x2e1ad4: 0x9b67a398  lwr         $a3, -0x5C68($k1)
    ctx->pc = 0x2e1ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294943640); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2e1ad8: 0xdafca042  lqc2        $vf28, -0x5FBE($s7)
    ctx->pc = 0x2e1ad8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 4294942786)));
    // 0x2e1adc: 0x9b63b398  lwr         $v1, -0x4C68($k1)
    ctx->pc = 0x2e1adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294947736); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2e1ae0: 0xc9fcbd6a  lwc2        $28, -0x4296($t7)
    ctx->pc = 0x2e1ae0u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1AE0 raw=0xC9FCBD6A");
label_2e1ae4:
    // 0x2e1ae4: 0xc0b88c4  jal         func_2E2310
    ctx->pc = 0x2E1AE4u;
    SET_GPR_U32(ctx, 31, 0x2E1AECu);
    ctx->pc = 0x2E1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AE4u;
    // 0x2e1ae8: 0xcdfcbd2a  pref        0x1C, -0x42D6($t7) (Delay Slot)
    // PREF instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2310u, 0x2E1AE4u, 0x2E1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AECu;
label_2e1aec:
    // 0x2e1aec: 0xd97c2a6a  lqc2        $vf28, 0x2A6A($t3)
    ctx->pc = 0x2e1aecu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 10858)));
    // 0x2e1af0: 0x9b63b398  lwr         $v1, -0x4C68($k1)
    ctx->pc = 0x2e1af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294947736); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2e1af4: 0xd9fcac42  lqc2        $vf28, -0x53BE($t7)
    ctx->pc = 0x2e1af4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294945858)));
    // 0x2e1af8: 0x9b67239a  lwr         $a3, 0x239A($k1)
    ctx->pc = 0x2e1af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 9114); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2e1afc: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1afcu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1b00: 0xc9fcbd4a  lwc2        $28, -0x42B6($t7)
    ctx->pc = 0x2e1b00u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1B00 raw=0xC9FCBD4A");
    // 0x2e1b04: 0xcdfcbd2a  pref        0x1C, -0x42D6($t7)
    ctx->pc = 0x2e1b04u;
    // PREF instruction (ignored)
    // 0x2e1b08: 0x9b6fa798  lwr         $t7, -0x5868($k1)
    ctx->pc = 0x2e1b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294944664); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 15) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 15) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 15, merged64); }
    // 0x2e1b0c: 0x9b6f3b98  lwr         $t7, 0x3B98($k1)
    ctx->pc = 0x2e1b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 15256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 15) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 15) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 15, merged64); }
    // 0x2e1b10: 0xd9fc9daa  lqc2        $vf28, -0x6256($t7)
    ctx->pc = 0x2e1b10u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294942122)));
    // 0x2e1b14: 0x9b683f98  lwr         $t0, 0x3F98($k1)
    ctx->pc = 0x2e1b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 16280); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2e1b18: 0xc0b826a  jal         func_2E09A8
    ctx->pc = 0x2E1B18u;
    SET_GPR_U32(ctx, 31, 0x2E1B20u);
    ctx->pc = 0x2E1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B18u;
    // 0x2e1b1c: 0xd979aa5a  lqc2        $vf25, -0x55A6($t3) (Delay Slot)
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 4294945370)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09A8u, 0x2E1B18u, 0x2E1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B20u;
label_2e1b20:
    // 0x2e1b20: 0xd9fd2a6a  lqc2        $vf29, 0x2A6A($t7)
    ctx->pc = 0x2e1b20u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 10858)));
    // 0x2e1b24: 0x9b67239a  lwr         $a3, 0x239A($k1)
    ctx->pc = 0x2e1b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 9114); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2e1b28: 0x9b67239a  lwr         $a3, 0x239A($k1)
    ctx->pc = 0x2e1b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 9114); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2e1b2c: 0xd87cb442  lqc2        $vf28, -0x4BBE($v1)
    ctx->pc = 0x2e1b2cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 4294947906)));
    // 0x2e1b30: 0xdb65239a  lqc2        $vf5, 0x239A($k1)
    ctx->pc = 0x2e1b30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 9114)));
    // 0x2e1b34: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1b34u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
label_2e1b38:
    // 0x2e1b38: 0xc9ecbd6a  lwc2        $12, -0x4296($t7)
    ctx->pc = 0x2e1b38u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1B38 raw=0xC9ECBD6A");
    // 0x2e1b3c: 0xcdfcbdaa  pref        0x1C, -0x4256($t7)
    ctx->pc = 0x2e1b3cu;
    // PREF instruction (ignored)
    // 0x2e1b40: 0xc1ecbd2a  ll          $t4, -0x42D6($t7)
    ctx->pc = 0x2e1b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294950186); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1b44: 0xc0b8960  jal         func_2E2580
    ctx->pc = 0x2E1B44u;
    SET_GPR_U32(ctx, 31, 0x2E1B4Cu);
    ctx->pc = 0x2E1B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B44u;
    // 0x2e1b48: 0xbb6f2398  swr         $t7, 0x2398($k1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 9112); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2580u, 0x2E1B44u, 0x2E1B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B4Cu;
label_2e1b4c:
    // 0x2e1b4c: 0xd87cb26a  lqc2        $vf28, -0x4D96($v1)
    ctx->pc = 0x2e1b4cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 4294947434)));
label_2e1b50:
    // 0x2e1b50: 0xdb65239a  lqc2        $vf5, 0x239A($k1)
    ctx->pc = 0x2e1b50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 9114)));
    // 0x2e1b54: 0xdb65239a  lqc2        $vf5, 0x239A($k1)
    ctx->pc = 0x2e1b54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 9114)));
label_2e1b58:
    // 0x2e1b58: 0xbb2f238c  swr         $t7, 0x238C($t9)
    ctx->pc = 0x2e1b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 9100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e1b5c: 0xc9fcbd0a  lwc2        $28, -0x42F6($t7)
    ctx->pc = 0x2e1b5cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1B5C raw=0xC9FCBD0A");
    // 0x2e1b60: 0x9b7e2a5a  lwr         $fp, 0x2A5A($k1)
    ctx->pc = 0x2e1b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10842); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 30) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 30) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 30, merged64); }
    // 0x2e1b64: 0xc1ecbd2a  ll          $t4, -0x42D6($t7)
    ctx->pc = 0x2e1b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294950186); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1b68: 0xd9ec9d6a  lqc2        $vf12, -0x6296($t7)
    ctx->pc = 0x2e1b68u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294942058)));
    // 0x2e1b6c: 0x9b782a5a  lwr         $t8, 0x2A5A($k1)
    ctx->pc = 0x2e1b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10842); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 24) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 24) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 24, merged64); }
    // 0x2e1b70: 0xb969a398  swr         $t1, -0x5C68($t3)
    ctx->pc = 0x2e1b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294943640); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e1b74: 0xc0b851a  jal         func_2E1468
    ctx->pc = 0x2E1B74u;
    SET_GPR_U32(ctx, 31, 0x2E1B7Cu);
    ctx->pc = 0x2E1B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B74u;
    // 0x2e1b78: 0xd9ecfd6a  lqc2        $vf12, -0x296($t7) (Delay Slot)
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294966634)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1468u, 0x2E1B74u, 0x2E1B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B7Cu;
label_2e1b7c:
    // 0x2e1b7c: 0xda7cbe6a  lqc2        $vf28, -0x4196($s3)
    ctx->pc = 0x2e1b7cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 4294950506)));
    // 0x2e1b80: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1b80u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1b84: 0xc9fcbc4a  lwc2        $28, -0x43B6($t7)
    ctx->pc = 0x2e1b84u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1B84 raw=0xC9FCBC4A");
    // 0x2e1b88: 0xd7eeb94a  ldc1        $f14, -0x46B6($ra)
    ctx->pc = 0x2e1b88u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2E1B88 raw=0xD7EEB94A");
    // 0x2e1b8c: 0xdbfeaa1a  lqc2        $vf30, -0x55E6($ra)
    ctx->pc = 0x2e1b8cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945306)));
    // 0x2e1b90: 0x9b7da21e  lwr         $sp, -0x5DE2($k1)
    ctx->pc = 0x2e1b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294943262); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 29) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 29) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 29, merged64); }
    // 0x2e1b94: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1b94u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1b98: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1b98u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1b9c: 0x267cd661  addiu       $gp, $s3, -0x299F
    ctx->pc = 0x2e1b9cu;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956641));
    // 0x2e1ba0: 0xdb2ca87a  lqc2        $vf12, -0x5786($t9)
    ctx->pc = 0x2e1ba0u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294944890)));
    // 0x2e1ba4: 0xc1ecbd8a  ll          $t4, -0x4276($t7)
    ctx->pc = 0x2e1ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294950282); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1ba8: 0xcdfcbc4a  pref        0x1C, -0x43B6($t7)
    ctx->pc = 0x2e1ba8u;
    // PREF instruction (ignored)
    // 0x2e1bac: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1bacu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1bb0: 0xd3fe382a  lld         $fp, 0x382A($ra)
    ctx->pc = 0x2e1bb0u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1BB0 raw=0xD3FE382A");
    // 0x2e1bb4: 0xcbee394a  lwc2        $14, 0x394A($ra)
    ctx->pc = 0x2e1bb4u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1BB4 raw=0xCBEE394A");
    // 0x2e1bb8: 0xdb3d2862  lqc2        $vf29, 0x2862($t9)
    ctx->pc = 0x2e1bb8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 10338)));
    // 0x2e1bbc: 0xdbee2a1a  lqc2        $vf14, 0x2A1A($ra)
    ctx->pc = 0x2e1bbcu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 10778)));
    // 0x2e1bc0: 0xdb6da21e  lqc2        $vf13, -0x5DE2($k1)
    ctx->pc = 0x2e1bc0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294943262)));
    // 0x2e1bc4: 0x267cd661  addiu       $gp, $s3, -0x299F
    ctx->pc = 0x2e1bc4u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956641));
    // 0x2e1bc8: 0xdb3d281a  lqc2        $vf29, 0x281A($t9)
    ctx->pc = 0x2e1bc8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 10266)));
    // 0x2e1bcc: 0xb92da38c  swr         $t5, -0x5C74($t1)
    ctx->pc = 0x2e1bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294943628); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e1bd0: 0xdb6f235a  lqc2        $vf15, 0x235A($k1)
    ctx->pc = 0x2e1bd0u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 9050)));
    // 0x2e1bd4: 0xdbfcac62  lqc2        $vf28, -0x539E($ra)
    ctx->pc = 0x2e1bd4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945890)));
    // 0x2e1bd8: 0xcdfcbc4a  pref        0x1C, -0x43B6($t7)
    ctx->pc = 0x2e1bd8u;
    // PREF instruction (ignored)
    // 0x2e1bdc: 0xc1fcbc6a  ll          $gp, -0x4396($t7)
    ctx->pc = 0x2e1bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294949994); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1be0: 0xd3fe394a  lld         $fp, 0x394A($ra)
    ctx->pc = 0x2e1be0u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1BE0 raw=0xD3FE394A");
    // 0x2e1be4: 0xcbee382a  lwc2        $14, 0x382A($ra)
    ctx->pc = 0x2e1be4u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1BE4 raw=0xCBEE382A");
    // 0x2e1be8: 0xdb3d2862  lqc2        $vf29, 0x2862($t9)
    ctx->pc = 0x2e1be8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 10338)));
    // 0x2e1bec: 0xdbee2a1a  lqc2        $vf14, 0x2A1A($ra)
    ctx->pc = 0x2e1becu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 10778)));
    // 0x2e1bf0: 0xd2efbc0a  lld         $t7, -0x43F6($s7)
    ctx->pc = 0x2e1bf0u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1BF0 raw=0xD2EFBC0A");
    // 0x2e1bf4: 0x267cd661  addiu       $gp, $s3, -0x299F
    ctx->pc = 0x2e1bf4u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956641));
    // 0x2e1bf8: 0xdb3d281a  lqc2        $vf29, 0x281A($t9)
    ctx->pc = 0x2e1bf8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 10266)));
    // 0x2e1bfc: 0xc1ecbd8a  ll          $t4, -0x4276($t7)
    ctx->pc = 0x2e1bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294950282); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1c00: 0xcdfcbc4a  pref        0x1C, -0x43B6($t7)
    ctx->pc = 0x2e1c00u;
    // PREF instruction (ignored)
    // 0x2e1c04: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1c04u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1c08: 0xd3fe382a  lld         $fp, 0x382A($ra)
    ctx->pc = 0x2e1c08u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1C08 raw=0xD3FE382A");
    // 0x2e1c0c: 0xcbee390a  lwc2        $14, 0x390A($ra)
    ctx->pc = 0x2e1c0cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1C0C raw=0xCBEE390A");
    // 0x2e1c10: 0xdb3d2862  lqc2        $vf29, 0x2862($t9)
    ctx->pc = 0x2e1c10u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 10338)));
    // 0x2e1c14: 0xdbee2a1a  lqc2        $vf14, 0x2A1A($ra)
    ctx->pc = 0x2e1c14u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 10778)));
    // 0x2e1c18: 0xdb6da21e  lqc2        $vf13, -0x5DE2($k1)
    ctx->pc = 0x2e1c18u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294943262)));
    // 0x2e1c1c: 0x267cd661  addiu       $gp, $s3, -0x299F
    ctx->pc = 0x2e1c1cu;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956641));
    // 0x2e1c20: 0xdb3d281a  lqc2        $vf29, 0x281A($t9)
    ctx->pc = 0x2e1c20u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 10266)));
    // 0x2e1c24: 0xbb2ca79c  swr         $t4, -0x5864($t9)
    ctx->pc = 0x2e1c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294944668); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e1c28: 0xbcfc1655  cache       0x1C, 0x1655($a3)
    ctx->pc = 0x2e1c28u;
    // CACHE instruction (ignored)
    // 0x2e1c2c: 0x24ec5651  addiu       $t4, $a3, 0x5651
    ctx->pc = 0x2e1c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 22097));
    // 0x2e1c30: 0xc35c6a0a  ll          $gp, 0x6A0A($k0)
    ctx->pc = 0x2e1c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 27146); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1c34: 0xd1ecfd8a  lld         $t4, -0x276($t7)
    ctx->pc = 0x2e1c34u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1C34 raw=0xD1ECFD8A");
    // 0x2e1c38: 0x1b7c0a57  .word       0x1B7C0A57                   # blez        $k1, . + 4 + (0xA57 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1C38u;
    {
        const bool branch_taken_0x2e1c38 = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2E1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C38u;
        // 0x2e1c3c: 0xcf5c6a0a  pref        0x1C, 0x6A0A($k0) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c38) {
            ctx->pc = 0x2E4598u;
            return;
        }
    }
    ctx->pc = 0x2E1C40u;
    // 0x2e1c40: 0xd9fcfc4a  lqc2        $vf28, -0x3B6($t7)
    ctx->pc = 0x2e1c40u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294966346)));
label_2e1c44:
    // 0x2e1c44: 0x5f7c0a55  .word       0x5F7C0A55                   # bgtzl       $k1, . + 4 + (0xA55 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1C44u;
    {
        const bool branch_taken_0x2e1c44 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2e1c44) {
            ctx->pc = 0x2E1C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1C44u;
            // 0x2e1c48: 0xcb5c6a0a  lwc2        $28, 0x6A0A($k0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1C48 raw=0xCB5C6A0A");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E459Cu;
            return;
        }
    }
    ctx->pc = 0x2E1C4Cu;
    // 0x2e1c4c: 0xdb746a56  lqc2        $vf20, 0x6A56($k1)
    ctx->pc = 0x2e1c4cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 27222)));
    // 0x2e1c50: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E1C50u;
    SET_GPR_U32(ctx, 31, 0x2E1C58u);
    ctx->pc = 0x2E1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C50u;
    // 0x2e1c54: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1) (Delay Slot)
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E1C50u, 0x2E1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C58u;
label_2e1c58:
    // 0x2e1c58: 0xdb5daa0a  lqc2        $vf29, -0x55F6($k0)
    ctx->pc = 0x2e1c58u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294945290)));
    // 0x2e1c5c: 0xdb5cbb0a  lqc2        $vf28, -0x44F6($k0)
    ctx->pc = 0x2e1c5cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294949642)));
    // 0x2e1c60: 0xcbf4b96a  lwc2        $20, -0x4696($ra)
    ctx->pc = 0x2e1c60u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1C60 raw=0xCBF4B96A");
    // 0x2e1c64: 0xdbf4ab5a  lqc2        $vf20, -0x54A6($ra)
    ctx->pc = 0x2e1c64u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945626)));
    // 0x2e1c68: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1c68u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1c6c: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1c6cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1c70: 0xdad7ab4a  lqc2        $vf23, -0x54B6($s6)
    ctx->pc = 0x2e1c70u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 4294945610)));
    // 0x2e1c74: 0xda562b4a  lqc2        $vf22, 0x2B4A($s2)
    ctx->pc = 0x2e1c74u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 11082)));
    // 0x2e1c78: 0xc85cf34a  lwc2        $28, -0xCB6($v0)
    ctx->pc = 0x2e1c78u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1C78 raw=0xC85CF34A");
    // 0x2e1c7c: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1c80: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1c80u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1c84: 0xd9dcaaca  lqc2        $vf28, -0x5536($t6)
    ctx->pc = 0x2e1c84u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294945482)));
    // 0x2e1c88: 0xdb7d235e  lqc2        $vf29, 0x235E($k1)
    ctx->pc = 0x2e1c88u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 9054)));
    // 0x2e1c8c: 0xdbd6ab4a  lqc2        $vf22, -0x54B6($fp)
    ctx->pc = 0x2e1c8cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294945610)));
    // 0x2e1c90: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1c90u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1c94: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1c94u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1c98: 0xd1f4386a  lld         $s4, 0x386A($t7)
    ctx->pc = 0x2e1c98u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1C98 raw=0xD1F4386A");
    // 0x2e1c9c: 0x256cde61  addiu       $t4, $t3, -0x219F
    ctx->pc = 0x2e1c9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958689));
    // 0x2e1ca0: 0xdb3da81a  lqc2        $vf29, -0x57E6($t9)
    ctx->pc = 0x2e1ca0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294944794)));
    // 0x2e1ca4: 0xbcfc1655  cache       0x1C, 0x1655($a3)
    ctx->pc = 0x2e1ca4u;
    // CACHE instruction (ignored)
    // 0x2e1ca8: 0x24ec5651  addiu       $t4, $a3, 0x5651
    ctx->pc = 0x2e1ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 22097));
    // 0x2e1cac: 0xc35c6a0a  ll          $gp, 0x6A0A($k0)
    ctx->pc = 0x2e1cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 27146); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1cb0: 0xd9fcfc4a  lqc2        $vf28, -0x3B6($t7)
    ctx->pc = 0x2e1cb0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294966346)));
    // 0x2e1cb4: 0x1b7c0a57  .word       0x1B7C0A57                   # blez        $k1, . + 4 + (0xA57 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1CB4u;
    {
        const bool branch_taken_0x2e1cb4 = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2E1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CB4u;
        // 0x2e1cb8: 0xcf5c6a0a  pref        0x1C, 0x6A0A($k0) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cb4) {
            ctx->pc = 0x2E4614u;
            return;
        }
    }
    ctx->pc = 0x2E1CBCu;
    // 0x2e1cbc: 0xdb746a56  lqc2        $vf20, 0x6A56($k1)
    ctx->pc = 0x2e1cbcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 27222)));
label_2e1cc0:
    // 0x2e1cc0: 0x5f7c0a55  .word       0x5F7C0A55                   # bgtzl       $k1, . + 4 + (0xA55 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1CC0u;
    {
        const bool branch_taken_0x2e1cc0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2e1cc0) {
            ctx->pc = 0x2E1CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1CC0u;
            // 0x2e1cc4: 0xcb5c6a0a  lwc2        $28, 0x6A0A($k0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1CC4 raw=0xCB5C6A0A");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4618u;
            return;
        }
    }
    ctx->pc = 0x2E1CC8u;
    // 0x2e1cc8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E1CC8u;
    SET_GPR_U32(ctx, 31, 0x2E1CD0u);
    ctx->pc = 0x2E1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1CC8u;
    // 0x2e1ccc: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1) (Delay Slot)
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E1CC8u, 0x2E1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1CD0u;
label_2e1cd0:
    // 0x2e1cd0: 0xdb5daa0a  lqc2        $vf29, -0x55F6($k0)
    ctx->pc = 0x2e1cd0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294945290)));
    // 0x2e1cd4: 0xdb5cbb0a  lqc2        $vf28, -0x44F6($k0)
    ctx->pc = 0x2e1cd4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294949642)));
    // 0x2e1cd8: 0xcbe4b96a  lwc2        $4, -0x4696($ra)
    ctx->pc = 0x2e1cd8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1CD8 raw=0xCBE4B96A");
    // 0x2e1cdc: 0xdbf4ab5a  lqc2        $vf20, -0x54A6($ra)
    ctx->pc = 0x2e1cdcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945626)));
    // 0x2e1ce0: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1ce0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1ce4: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1ce4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1ce8: 0xdad7ab4a  lqc2        $vf23, -0x54B6($s6)
    ctx->pc = 0x2e1ce8u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 4294945610)));
    // 0x2e1cec: 0xda562b4a  lqc2        $vf22, 0x2B4A($s2)
    ctx->pc = 0x2e1cecu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 11082)));
    // 0x2e1cf0: 0xc85cf34a  lwc2        $28, -0xCB6($v0)
    ctx->pc = 0x2e1cf0u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1CF0 raw=0xC85CF34A");
    // 0x2e1cf4: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1cf8: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1cf8u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1cfc: 0xd9dcaaca  lqc2        $vf28, -0x5536($t6)
    ctx->pc = 0x2e1cfcu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294945482)));
    // 0x2e1d00: 0x9b7d2b5e  lwr         $sp, 0x2B5E($k1)
    ctx->pc = 0x2e1d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 11102); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 29) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 29) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 29, merged64); }
    // 0x2e1d04: 0xdbd6ab4a  lqc2        $vf22, -0x54B6($fp)
    ctx->pc = 0x2e1d04u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294945610)));
    // 0x2e1d08: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1d0c: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1d0cu;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1d10: 0xd1f4386a  lld         $s4, 0x386A($t7)
    ctx->pc = 0x2e1d10u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1D10 raw=0xD1F4386A");
    // 0x2e1d14: 0x256cde61  addiu       $t4, $t3, -0x219F
    ctx->pc = 0x2e1d14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958689));
    // 0x2e1d18: 0xdb3da81a  lqc2        $vf29, -0x57E6($t9)
    ctx->pc = 0x2e1d18u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294944794)));
    // 0x2e1d1c: 0xbcfc1655  cache       0x1C, 0x1655($a3)
    ctx->pc = 0x2e1d1cu;
    // CACHE instruction (ignored)
    // 0x2e1d20: 0x24ec5651  addiu       $t4, $a3, 0x5651
    ctx->pc = 0x2e1d20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 22097));
label_2e1d24:
    // 0x2e1d24: 0xc35c6a0a  ll          $gp, 0x6A0A($k0)
    ctx->pc = 0x2e1d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 27146); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1d28: 0xd9fcfc4a  lqc2        $vf28, -0x3B6($t7)
    ctx->pc = 0x2e1d28u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294966346)));
    // 0x2e1d2c: 0x1b7c0a57  .word       0x1B7C0A57                   # blez        $k1, . + 4 + (0xA57 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1D2Cu;
    {
        const bool branch_taken_0x2e1d2c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2E1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D2Cu;
        // 0x2e1d30: 0xcf5c6a0a  pref        0x1C, 0x6A0A($k0) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d2c) {
            ctx->pc = 0x2E468Cu;
            return;
        }
    }
    ctx->pc = 0x2E1D34u;
    // 0x2e1d34: 0xdb746a56  lqc2        $vf20, 0x6A56($k1)
    ctx->pc = 0x2e1d34u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 27222)));
    // 0x2e1d38: 0x5f7c0a55  .word       0x5F7C0A55                   # bgtzl       $k1, . + 4 + (0xA55 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1D38u;
    {
        const bool branch_taken_0x2e1d38 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2e1d38) {
            ctx->pc = 0x2E1D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1D38u;
            // 0x2e1d3c: 0xcb5c6a0a  lwc2        $28, 0x6A0A($k0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1D3C raw=0xCB5C6A0A");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4690u;
            return;
        }
    }
    ctx->pc = 0x2E1D40u;
label_2e1d40:
    // 0x2e1d40: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E1D40u;
    SET_GPR_U32(ctx, 31, 0x2E1D48u);
    ctx->pc = 0x2E1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D40u;
    // 0x2e1d44: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1) (Delay Slot)
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E1D40u, 0x2E1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D48u;
label_2e1d48:
    // 0x2e1d48: 0xdb5daa0a  lqc2        $vf29, -0x55F6($k0)
    ctx->pc = 0x2e1d48u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294945290)));
    // 0x2e1d4c: 0xdb5cbb0a  lqc2        $vf28, -0x44F6($k0)
    ctx->pc = 0x2e1d4cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294949642)));
    // 0x2e1d50: 0xcbe4b92a  lwc2        $4, -0x46D6($ra)
    ctx->pc = 0x2e1d50u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1D50 raw=0xCBE4B92A");
    // 0x2e1d54: 0xdbf4ab5a  lqc2        $vf20, -0x54A6($ra)
    ctx->pc = 0x2e1d54u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945626)));
    // 0x2e1d58: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1d58u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1d5c: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1d5cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1d60: 0xdad7ab4a  lqc2        $vf23, -0x54B6($s6)
    ctx->pc = 0x2e1d60u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 4294945610)));
    // 0x2e1d64: 0xda562b4a  lqc2        $vf22, 0x2B4A($s2)
    ctx->pc = 0x2e1d64u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 11082)));
    // 0x2e1d68: 0xc85cf34a  lwc2        $28, -0xCB6($v0)
    ctx->pc = 0x2e1d68u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1D68 raw=0xC85CF34A");
    // 0x2e1d6c: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1d70: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1d70u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1d74: 0xd9dcaaca  lqc2        $vf28, -0x5536($t6)
    ctx->pc = 0x2e1d74u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294945482)));
    // 0x2e1d78: 0xdb7d2b5c  lqc2        $vf29, 0x2B5C($k1)
    ctx->pc = 0x2e1d78u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 11100)));
    // 0x2e1d7c: 0xdbd6ab4a  lqc2        $vf22, -0x54B6($fp)
    ctx->pc = 0x2e1d7cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294945610)));
    // 0x2e1d80: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1d80u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1d84: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1d84u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1d88: 0xd1f4386a  lld         $s4, 0x386A($t7)
    ctx->pc = 0x2e1d88u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1D88 raw=0xD1F4386A");
    // 0x2e1d8c: 0x256cde61  addiu       $t4, $t3, -0x219F
    ctx->pc = 0x2e1d8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958689));
    // 0x2e1d90: 0xdb3da81a  lqc2        $vf29, -0x57E6($t9)
    ctx->pc = 0x2e1d90u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294944794)));
    // 0x2e1d94: 0xbcfc1655  cache       0x1C, 0x1655($a3)
    ctx->pc = 0x2e1d94u;
    // CACHE instruction (ignored)
    // 0x2e1d98: 0x24ec5651  addiu       $t4, $a3, 0x5651
    ctx->pc = 0x2e1d98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 22097));
    // 0x2e1d9c: 0xc35c6a0a  ll          $gp, 0x6A0A($k0)
    ctx->pc = 0x2e1d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 27146); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1da0: 0xd9fcfc4a  lqc2        $vf28, -0x3B6($t7)
    ctx->pc = 0x2e1da0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294966346)));
    // 0x2e1da4: 0x1b7c0a57  .word       0x1B7C0A57                   # blez        $k1, . + 4 + (0xA57 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1DA4u;
    {
        const bool branch_taken_0x2e1da4 = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2E1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DA4u;
        // 0x2e1da8: 0xcf5c6a0a  pref        0x1C, 0x6A0A($k0) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1da4) {
            ctx->pc = 0x2E4704u;
            return;
        }
    }
    ctx->pc = 0x2E1DACu;
    // 0x2e1dac: 0xdb746a56  lqc2        $vf20, 0x6A56($k1)
    ctx->pc = 0x2e1dacu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 27222)));
    // 0x2e1db0: 0x5f7c0a55  .word       0x5F7C0A55                   # bgtzl       $k1, . + 4 + (0xA55 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1DB0u;
    {
        const bool branch_taken_0x2e1db0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2e1db0) {
            ctx->pc = 0x2E1DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1DB0u;
            // 0x2e1db4: 0xcb5c6a0a  lwc2        $28, 0x6A0A($k0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1DB4 raw=0xCB5C6A0A");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4708u;
            return;
        }
    }
    ctx->pc = 0x2E1DB8u;
label_2e1db8:
    // 0x2e1db8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E1DB8u;
    SET_GPR_U32(ctx, 31, 0x2E1DC0u);
    ctx->pc = 0x2E1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1DB8u;
    // 0x2e1dbc: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1) (Delay Slot)
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E1DB8u, 0x2E1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1DC0u;
label_2e1dc0:
    // 0x2e1dc0: 0xdb5daa0a  lqc2        $vf29, -0x55F6($k0)
    ctx->pc = 0x2e1dc0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294945290)));
    // 0x2e1dc4: 0xdb5cbb0a  lqc2        $vf28, -0x44F6($k0)
    ctx->pc = 0x2e1dc4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294949642)));
    // 0x2e1dc8: 0xcbf4b92a  lwc2        $20, -0x46D6($ra)
    ctx->pc = 0x2e1dc8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1DC8 raw=0xCBF4B92A");
    // 0x2e1dcc: 0xdbf4ab5a  lqc2        $vf20, -0x54A6($ra)
    ctx->pc = 0x2e1dccu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945626)));
    // 0x2e1dd0: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1dd0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1dd4: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1dd4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1dd8: 0xdad7ab4a  lqc2        $vf23, -0x54B6($s6)
    ctx->pc = 0x2e1dd8u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 4294945610)));
    // 0x2e1ddc: 0xda562b4a  lqc2        $vf22, 0x2B4A($s2)
    ctx->pc = 0x2e1ddcu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 11082)));
    // 0x2e1de0: 0xc85cf34a  lwc2        $28, -0xCB6($v0)
    ctx->pc = 0x2e1de0u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1DE0 raw=0xC85CF34A");
    // 0x2e1de4: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1de4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1de8: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1de8u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1dec: 0xd9dcaaca  lqc2        $vf28, -0x5536($t6)
    ctx->pc = 0x2e1decu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294945482)));
    // 0x2e1df0: 0xdb7d3b5e  lqc2        $vf29, 0x3B5E($k1)
    ctx->pc = 0x2e1df0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 15198)));
    // 0x2e1df4: 0xdbd6ab4a  lqc2        $vf22, -0x54B6($fp)
    ctx->pc = 0x2e1df4u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294945610)));
    // 0x2e1df8: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1df8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1dfc: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1dfcu;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1e00: 0xd1f4386a  lld         $s4, 0x386A($t7)
    ctx->pc = 0x2e1e00u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1E00 raw=0xD1F4386A");
    // 0x2e1e04: 0x256cde61  addiu       $t4, $t3, -0x219F
    ctx->pc = 0x2e1e04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958689));
    // 0x2e1e08: 0xdb3da81a  lqc2        $vf29, -0x57E6($t9)
    ctx->pc = 0x2e1e08u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294944794)));
    // 0x2e1e0c: 0xbcfc1655  cache       0x1C, 0x1655($a3)
    ctx->pc = 0x2e1e0cu;
    // CACHE instruction (ignored)
    // 0x2e1e10: 0x24ec5651  addiu       $t4, $a3, 0x5651
    ctx->pc = 0x2e1e10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 22097));
    // 0x2e1e14: 0xc35c6a0a  ll          $gp, 0x6A0A($k0)
    ctx->pc = 0x2e1e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 27146); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e1e18: 0xd9fcfc4a  lqc2        $vf28, -0x3B6($t7)
    ctx->pc = 0x2e1e18u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 4294966346)));
    // 0x2e1e1c: 0x1b7c0a57  .word       0x1B7C0A57                   # blez        $k1, . + 4 + (0xA57 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1E1Cu;
    {
        const bool branch_taken_0x2e1e1c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2E1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E1Cu;
        // 0x2e1e20: 0xcf5c6a0a  pref        0x1C, 0x6A0A($k0) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1e1c) {
            ctx->pc = 0x2E477Cu;
            return;
        }
    }
    ctx->pc = 0x2E1E24u;
    // 0x2e1e24: 0xdb746a56  lqc2        $vf20, 0x6A56($k1)
    ctx->pc = 0x2e1e24u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 27222)));
    // 0x2e1e28: 0x5f7c0a55  .word       0x5F7C0A55                   # bgtzl       $k1, . + 4 + (0xA55 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1E28u;
    {
        const bool branch_taken_0x2e1e28 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2e1e28) {
            ctx->pc = 0x2E1E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E28u;
            // 0x2e1e2c: 0xcb5c6a0a  lwc2        $28, 0x6A0A($k0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1E2C raw=0xCB5C6A0A");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4780u;
            return;
        }
    }
    ctx->pc = 0x2E1E30u;
label_2e1e30:
    // 0x2e1e30: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E1E30u;
    SET_GPR_U32(ctx, 31, 0x2E1E38u);
    ctx->pc = 0x2E1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E30u;
    // 0x2e1e34: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1) (Delay Slot)
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E1E30u, 0x2E1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E38u;
label_2e1e38:
    // 0x2e1e38: 0xdb5daa0a  lqc2        $vf29, -0x55F6($k0)
    ctx->pc = 0x2e1e38u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294945290)));
    // 0x2e1e3c: 0xdb5cbb0a  lqc2        $vf28, -0x44F6($k0)
    ctx->pc = 0x2e1e3cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294949642)));
    // 0x2e1e40: 0xcbf4b9aa  lwc2        $20, -0x4656($ra)
    ctx->pc = 0x2e1e40u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1E40 raw=0xCBF4B9AA");
    // 0x2e1e44: 0xdbf4ab5a  lqc2        $vf20, -0x54A6($ra)
    ctx->pc = 0x2e1e44u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294945626)));
    // 0x2e1e48: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1e48u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1e4c: 0xdb7ca84a  lqc2        $vf28, -0x57B6($k1)
    ctx->pc = 0x2e1e4cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 4294944842)));
    // 0x2e1e50: 0xdad7ab4a  lqc2        $vf23, -0x54B6($s6)
    ctx->pc = 0x2e1e50u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 4294945610)));
    // 0x2e1e54: 0xda562b4a  lqc2        $vf22, 0x2B4A($s2)
    ctx->pc = 0x2e1e54u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 11082)));
    // 0x2e1e58: 0xc85cf34a  lwc2        $28, -0xCB6($v0)
    ctx->pc = 0x2e1e58u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1E58 raw=0xC85CF34A");
    // 0x2e1e5c: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1e60: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1e60u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1e64: 0xd9dcaaca  lqc2        $vf28, -0x5536($t6)
    ctx->pc = 0x2e1e64u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 4294945482)));
    // 0x2e1e68: 0xdb7d3b5e  lqc2        $vf29, 0x3B5E($k1)
    ctx->pc = 0x2e1e68u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 27), 15198)));
    // 0x2e1e6c: 0xdbd6ab4a  lqc2        $vf22, -0x54B6($fp)
    ctx->pc = 0x2e1e6cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 4294945610)));
    // 0x2e1e70: 0xf95cbb4a  sqc2        $vf28, -0x44B6($t2)
    ctx->pc = 0x2e1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294949706), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e1e74: 0xdf5daa4a  ld          $sp, -0x55B6($k0)
    ctx->pc = 0x2e1e74u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 26), 4294945354)));
    // 0x2e1e78: 0xd1f4386a  lld         $s4, 0x386A($t7)
    ctx->pc = 0x2e1e78u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E1E78 raw=0xD1F4386A");
    // 0x2e1e7c: 0x256cde61  addiu       $t4, $t3, -0x219F
    ctx->pc = 0x2e1e7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958689));
    // 0x2e1e80: 0xdb3da81a  lqc2        $vf29, -0x57E6($t9)
    ctx->pc = 0x2e1e80u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294944794)));
    // 0x2e1e84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E1E84u;
    {
        const bool branch_taken_0x2e1e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1e84) {
            ctx->pc = 0x2E1EB4u;
            goto label_2e1eb4;
        }
    }
    ctx->pc = 0x2E1E8Cu;
    // 0x2e1e8c: 0x30c1020  add         $v0, $t8, $t4
    ctx->pc = 0x2e1e8cu;
    {     int32_t rs_val = GPR_S32(ctx, 24);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2e1e90: 0x85a75273  lh          $a3, 0x5273($t5)
    ctx->pc = 0x2e1e90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 21107)));
    // 0x2e1e94: 0x268f5ab8  addiu       $t7, $s4, 0x5AB8
    ctx->pc = 0x2e1e94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 23224));
    // 0x2e1e98: 0x8728532b  lh          $t0, 0x532B($t9)
    ctx->pc = 0x2e1e98u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 21291)));
    // 0x2e1e9c: 0x87a2e723  lh          $v0, -0x18DD($sp)
    ctx->pc = 0x2e1e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4294960931)));
    // 0x2e1ea0: 0x2708e860  addiu       $t0, $t8, -0x17A0
    ctx->pc = 0x2e1ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 4294961248));
    // 0x2e1ea4: 0x5987ea4d  .word       0x5987EA4D                   # blezl       $t4, . + 4 + (-0x15B3 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1EA4u;
    {
        const bool branch_taken_0x2e1ea4 = (GPR_S32(ctx, 12) <= 0);
        if (branch_taken_0x2e1ea4) {
            ctx->pc = 0x2E1EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EA4u;
            // 0x2e1ea8: 0xca0c88b3  lwc2        $12, -0x774D($s0) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E1EA8 raw=0xCA0C88B3");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7DCu;
            return;
        }
    }
    ctx->pc = 0x2E1EACu;
    // 0x2e1eac: 0x5987e99d  .word       0x5987E99D                   # blezl       $t4, . + 4 + (-0x1663 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E1EACu;
    {
        const bool branch_taken_0x2e1eac = (GPR_S32(ctx, 12) <= 0);
        if (branch_taken_0x2e1eac) {
            ctx->pc = 0x2DC524u;
            return;
        }
    }
    ctx->pc = 0x2E1EB4u;
label_2e1eb4:
    // 0x2e1eb4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e1eb8: 0x24421ea4  addiu       $v0, $v0, 0x1EA4
    ctx->pc = 0x2e1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7844));
    // 0x2e1ebc: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e1ec0: 0x24841e84  addiu       $a0, $a0, 0x1E84
    ctx->pc = 0x2e1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7812));
    // 0x2e1ec4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e1ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e1ec8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e1ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e1ecc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E1ECCu;
    SET_GPR_U32(ctx, 31, 0x2E1ED4u);
    ctx->pc = 0x2E1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1ECCu;
    // 0x2e1ed0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E1ECCu, 0x2E1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1ED4u;
label_2e1ed4:
    // 0x2e1ed4: 0x8fa204d8  lw          $v0, 0x4D8($sp)
    ctx->pc = 0x2e1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1240)));
    // 0x2e1ed8: 0xdfb004e0  ld          $s0, 0x4E0($sp)
    ctx->pc = 0x2e1ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x2e1edc: 0xdfb104e8  ld          $s1, 0x4E8($sp)
    ctx->pc = 0x2e1edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1256)));
    // 0x2e1ee0: 0xdfb204f0  ld          $s2, 0x4F0($sp)
    ctx->pc = 0x2e1ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2e1ee4: 0xdfb304f8  ld          $s3, 0x4F8($sp)
    ctx->pc = 0x2e1ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1272)));
    // 0x2e1ee8: 0xdfb40500  ld          $s4, 0x500($sp)
    ctx->pc = 0x2e1ee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x2e1eec: 0xdfb50508  ld          $s5, 0x508($sp)
    ctx->pc = 0x2e1eecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x2e1ef0: 0xdfb60510  ld          $s6, 0x510($sp)
    ctx->pc = 0x2e1ef0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2e1ef4: 0xdfb70518  ld          $s7, 0x518($sp)
    ctx->pc = 0x2e1ef4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1304)));
    // 0x2e1ef8: 0xdfbe0520  ld          $fp, 0x520($sp)
    ctx->pc = 0x2e1ef8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x2e1efc: 0xdfbf0528  ld          $ra, 0x528($sp)
    ctx->pc = 0x2e1efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2e1f00: 0xc7b60540  lwc1        $f22, 0x540($sp)
    ctx->pc = 0x2e1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e1f04: 0xc7b50538  lwc1        $f21, 0x538($sp)
    ctx->pc = 0x2e1f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e1f08: 0xc7b40530  lwc1        $f20, 0x530($sp)
    ctx->pc = 0x2e1f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e1f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F0Cu;
        // 0x2e1f10: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1F14u;
    // 0x2e1f14: 0x0  nop
    ctx->pc = 0x2e1f14u;
    // NOP
}
