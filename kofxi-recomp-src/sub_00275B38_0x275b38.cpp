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

// Function: sub_00275B38
// Address: 0x275b38 - 0x275d00
void sub_00275B38_0x275b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275B38_0x275b38");
#endif

    switch (ctx->pc) {
        case 0x275b7cu: goto label_275b7c;
        case 0x275ba0u: goto label_275ba0;
        case 0x275ce8u: goto label_275ce8;
        default: break;
    }

    ctx->pc = 0x275b38u;

    // 0x275b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275b3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x275b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x275b40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x275b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x275b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x275b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275b50: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x275b54: 0x24635b9c  addiu       $v1, $v1, 0x5B9C
    ctx->pc = 0x275b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23452));
    // 0x275b58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275b5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275B5Cu;
    {
        const bool branch_taken_0x275b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275b5c) {
            ctx->pc = 0x275B7Cu;
            goto label_275b7c;
        }
    }
    ctx->pc = 0x275B64u;
    // 0x275b64: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x275b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275b68: 0x24845bb0  addiu       $a0, $a0, 0x5BB0
    ctx->pc = 0x275b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23472));
    // 0x275b6c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275b70: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x275b74: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x275B74u;
    SET_GPR_U32(ctx, 31, 0x275B7Cu);
    ctx->pc = 0x275B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B74u;
    // 0x275b78: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x275B74u, 0x275B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B7Cu;
label_275b7c:
    // 0x275b7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275B7Cu;
    {
        const bool branch_taken_0x275b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275b7c) {
            ctx->pc = 0x275BB0u;
            goto label_275bb0;
        }
    }
    ctx->pc = 0x275B84u;
    // 0x275b84: 0x27f7c5c0  addiu       $s7, $ra, -0x3A40
    ctx->pc = 0x275b84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 31), 4294952384));
    // 0x275b88: 0x25a34cb0  addiu       $v1, $t5, 0x4CB0
    ctx->pc = 0x275b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 19632));
    // 0x275b8c: 0x1e85020  add         $t2, $t7, $t0
    ctx->pc = 0x275b8cu;
    {     int32_t rs_val = GPR_S32(ctx, 15);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x275b90: 0xdcd12a2f  ld          $s1, 0x2A2F($a2)
    ctx->pc = 0x275b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 6), 10799)));
    // 0x275b94: 0xffe53712  sd          $a1, 0x3712($ra)
    ctx->pc = 0x275b94u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14098), GPR_U64(ctx, 5));
    // 0x275b98: 0xca4879c  jal         func_2921E70
    ctx->pc = 0x275B98u;
    SET_GPR_U32(ctx, 31, 0x275BA0u);
    ctx->pc = 0x2921E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2921E70u, 0x275B98u, 0x275BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BA0u;
label_275ba0:
    // 0x275ba0: 0x5877e177  .word       0x5877E177                   # blezl       $v1, . + 4 + (-0x1E89 << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275BA0u;
    {
        const bool branch_taken_0x275ba0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x275ba0) {
            ctx->pc = 0x275BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275BA0u;
            // 0x275ba4: 0x971e2b4a  lhu         $fp, 0x2B4A($t8) (Delay Slot)
            SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 11082)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E180u;
            return;
        }
    }
    ctx->pc = 0x275BA8u;
    // 0x275ba8: 0x5877e19f  .word       0x5877E19F                   # blezl       $v1, . + 4 + (-0x1E61 << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275BA8u;
    {
        const bool branch_taken_0x275ba8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x275ba8) {
            ctx->pc = 0x26E228u;
            return;
        }
    }
    ctx->pc = 0x275BB0u;
label_275bb0:
    // 0x275bb0: 0xcd219fb7  pref        0x01, -0x6049($t1)
    ctx->pc = 0x275bb0u;
    // PREF instruction (ignored)
    // 0x275bb4: 0x81301fb7  lb          $s0, 0x1FB7($t1)
    ctx->pc = 0x275bb4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 8119)));
    // 0x275bb8: 0xd3309d33  lld         $s0, -0x62CD($t9)
    ctx->pc = 0x275bb8u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x275BB8 raw=0xD3309D33");
    // 0x275bbc: 0xab219d33  swl         $at, -0x62CD($t9)
    ctx->pc = 0x275bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294942003); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 1); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275bc0: 0xfbe19623  sqc2        $vf1, -0x69DD($ra)
    ctx->pc = 0x275bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294940195), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275bc4: 0x9b338d23  lwr         $s3, -0x72DD($t9)
    ctx->pc = 0x275bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294937891); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 19) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 19) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 19, merged64); }
    // 0x275bc8: 0xdba19fa3  lqc2        $vf1, -0x605D($sp)
    ctx->pc = 0x275bc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4294942627)));
    // 0x275bcc: 0x6b1f7dc  bgezal      $s5, . + 4 + (-0x824 << 2)
    ctx->pc = 0x275BCCu;
    {
        const bool branch_taken_0x275bcc = (GPR_S32(ctx, 21) >= 0);
        SET_GPR_U32(ctx, 31, 0x275BD4u);
        ctx->pc = 0x275BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BCCu;
        // 0x275bd0: 0x9be18e23  lwr         $at, -0x71DD($ra) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294938147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bcc) {
            ctx->pc = 0x273B40u;
            return;
        }
    }
    ctx->pc = 0x275BD4u;
    // 0x275bd4: 0x9bf015a3  lwr         $s0, 0x15A3($ra)
    ctx->pc = 0x275bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 5539); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x275bd8: 0xda238ea3  lqc2        $vf3, -0x715D($s1)
    ctx->pc = 0x275bd8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 4294938275)));
    // 0x275bdc: 0x992196b7  lwr         $at, -0x6949($t1)
    ctx->pc = 0x275bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294940343); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275be0: 0x4723eeec  .word       0x4723EEEC                   # INVALID     $t9, $v1, -0x1114 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275be0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x2C at 0x275BE0 raw=0x4723EEEC");
    // 0x275be4: 0x99a18aa3  lwr         $at, -0x755D($t5)
    ctx->pc = 0x275be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294937251); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275be8: 0xfa2197a7  sqc2        $vf1, -0x6859($s1)
    ctx->pc = 0x275be8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294940583), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275bec: 0xd9238ea3  lqc2        $vf3, -0x715D($t1)
    ctx->pc = 0x275becu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 4294938275)));
    // 0x275bf0: 0xdb238ea3  lqc2        $vf3, -0x715D($t9)
    ctx->pc = 0x275bf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294938275)));
    // 0x275bf4: 0x982196b3  lwr         $at, -0x694D($at)
    ctx->pc = 0x275bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294940339); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275bf8: 0x4623eeec  .word       0x4623EEEC                   # INVALID     $s1, $v1, -0x1114 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275bf8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x2C at 0x275BF8 raw=0x4623EEEC");
    // 0x275bfc: 0x9aa18aa3  lwr         $at, -0x755D($s5)
    ctx->pc = 0x275bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294937251); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275c00: 0xf9a197b3  sqc2        $vf1, -0x684D($t5)
    ctx->pc = 0x275c00u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294940595), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275c04: 0x46a3eeec  .word       0x46A3EEEC                   # INVALID     $s5, $v1, -0x1114 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275c04u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x15, function 0x2C at 0x275C04 raw=0x46A3EEEC");
    // 0x275c08: 0x9a8197b3  lwr         $at, -0x684D($s4)
    ctx->pc = 0x275c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294940595); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275c0c: 0x45a3eee8  .word       0x45A3EEE8                   # INVALID     $t5, $v1, -0x1118 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275c0cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xD, function 0x28 at 0x275C0C raw=0x45A3EEE8");
    // 0x275c10: 0xd82197af  lqc2        $vf1, -0x6851($at)
    ctx->pc = 0x275c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 1), 4294940591)));
    // 0x275c14: 0xc7a3eed1  lwc1        $f3, -0x112F($sp)
    ctx->pc = 0x275c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4294962897)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275c18: 0x98a196af  lwr         $at, -0x6951($a1)
    ctx->pc = 0x275c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294940335); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275c1c: 0x4423eee8  .word       0x4423EEE8                   # dmfc1       $v1, $f29 # 000006E8 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275c1cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x28 at 0x275C1C raw=0x4423EEE8");
    // 0x275c20: 0x99218aa3  lwr         $at, -0x755D($t1)
    ctx->pc = 0x275c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294937251); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275c24: 0xfa2397af  sqc2        $vf3, -0x6851($s1)
    ctx->pc = 0x275c24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294940591), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x275c28: 0x47a3eeec  .word       0x47A3EEEC                   # INVALID     $sp, $v1, -0x1114 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275c28u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1D, function 0x2C at 0x275C28 raw=0x47A3EEEC");
    // 0x275c2c: 0xdb238ea7  lqc2        $vf3, -0x7159($t9)
    ctx->pc = 0x275c2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294938279)));
    // 0x275c30: 0x9ba196af  lwr         $at, -0x6951($sp)
    ctx->pc = 0x275c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294940335); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x275c34: 0x46a3eee8  .word       0x46A3EEE8                   # INVALID     $s5, $v1, -0x1118 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275c34u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x15, function 0x28 at 0x275C34 raw=0x46A3EEE8");
    // 0x275c38: 0xdba38e93  lqc2        $vf3, -0x716D($sp)
    ctx->pc = 0x275c38u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4294938259)));
    // 0x275c3c: 0x99a396ab  lwr         $v1, -0x6955($t5)
    ctx->pc = 0x275c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294940331); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x275c40: 0xc7a3eed1  lwc1        $f3, -0x112F($sp)
    ctx->pc = 0x275c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4294962897)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275c44: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x275c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x275c48: 0x24652d78  addiu       $a1, $v1, 0x2D78
    ctx->pc = 0x275c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11640));
    // 0x275c4c: 0xdb2382a3  lqc2        $vf3, -0x7D5D($t9)
    ctx->pc = 0x275c4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294935203)));
    // 0x275c50: 0xf3219d33  scd         $at, -0x62CD($t9)
    ctx->pc = 0x275c50u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x275C50 raw=0xF3219D33");
    // 0x275c54: 0xfbe39afc  sqc2        $vf3, -0x6504($ra)
    ctx->pc = 0x275c54u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294941436), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x275c58: 0xfb2186a3  sqc2        $vf1, -0x795D($t9)
    ctx->pc = 0x275c58u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 4294936227), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275c5c: 0xf9a397a7  sqc2        $vf3, -0x6859($t5)
    ctx->pc = 0x275c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294940583), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x275c60: 0xc7a3eed1  lwc1        $f3, -0x112F($sp)
    ctx->pc = 0x275c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4294962897)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275c64: 0x4623ee68  .word       0x4623EE68                   # INVALID     $s1, $v1, -0x1198 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275c64u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x28 at 0x275C64 raw=0x4623EE68");
    // 0x275c68: 0xdbe28a23  lqc2        $vf2, -0x75DD($ra)
    ctx->pc = 0x275c68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294937123)));
    // 0x275c6c: 0xdb2382a3  lqc2        $vf3, -0x7D5D($t9)
    ctx->pc = 0x275c6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294935203)));
    // 0x275c70: 0xf3219d33  scd         $at, -0x62CD($t9)
    ctx->pc = 0x275c70u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x275C70 raw=0xF3219D33");
    // 0x275c74: 0xfbe39afc  sqc2        $vf3, -0x6504($ra)
    ctx->pc = 0x275c74u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294941436), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x275c78: 0xfb2386a3  sqc2        $vf3, -0x795D($t9)
    ctx->pc = 0x275c78u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 4294936227), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x275c7c: 0xdb238323  lqc2        $vf3, -0x7CDD($t9)
    ctx->pc = 0x275c7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 4294935331)));
    // 0x275c80: 0xdf319d33  ld          $s1, -0x62CD($t9)
    ctx->pc = 0x275c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 25), 4294942003)));
    // 0x275c84: 0xd9a197a3  lqc2        $vf1, -0x685D($t5)
    ctx->pc = 0x275c84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 4294940579)));
    // 0x275c88: 0xdbf38afc  lqc2        $vf19, -0x7504($ra)
    ctx->pc = 0x275c88u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294937340)));
    // 0x275c8c: 0xdba19fa3  lqc2        $vf1, -0x605D($sp)
    ctx->pc = 0x275c8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 4294942627)));
    // 0x275c90: 0xf2219db3  scd         $at, -0x624D($s1)
    ctx->pc = 0x275c90u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x275C90 raw=0xF2219DB3");
    // 0x275c94: 0xdbe28aa3  lqc2        $vf2, -0x755D($ra)
    ctx->pc = 0x275c94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 31), 4294937251)));
    // 0x275c98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275C98u;
    {
        const bool branch_taken_0x275c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c98) {
            ctx->pc = 0x275CC8u;
            goto label_275cc8;
        }
    }
    ctx->pc = 0x275CA0u;
    // 0x275ca0: 0x25ce4058  addiu       $t6, $t6, 0x4058
    ctx->pc = 0x275ca0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16472));
    // 0x275ca4: 0x2834020  add         $t0, $s4, $v1
    ctx->pc = 0x275ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 20);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x275ca8: 0xdd9377e7  ld          $s3, 0x77E7($t4)
    ctx->pc = 0x275ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 12), 30695)));
    // 0x275cac: 0x87db9703  lh          $k1, -0x68FD($fp)
    ctx->pc = 0x275cacu;
    SET_GPR_S32(ctx, 27, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294940419)));
    // 0x275cb0: 0xa34d8931  sb          $t5, -0x76CF($k0)
    ctx->pc = 0x275cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 26), 4294936881), (uint8_t)GPR_U32(ctx, 13));
    // 0x275cb4: 0x861661db  lh          $s6, 0x61DB($s0)
    ctx->pc = 0x275cb4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 25051)));
    // 0x275cb8: 0x587771e7  .word       0x587771E7                   # blezl       $v1, . + 4 + (0x71E7 << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275CB8u;
    {
        const bool branch_taken_0x275cb8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x275cb8) {
            ctx->pc = 0x275CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275CB8u;
            // 0x275cbc: 0x971e2b4b  lhu         $fp, 0x2B4B($t8) (Delay Slot)
            SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 11083)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292458u;
            return;
        }
    }
    ctx->pc = 0x275CC0u;
    // 0x275cc0: 0x5877710f  .word       0x5877710F                   # blezl       $v1, . + 4 + (0x710F << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275CC0u;
    {
        const bool branch_taken_0x275cc0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x275cc0) {
            ctx->pc = 0x292100u;
            return;
        }
    }
    ctx->pc = 0x275CC8u;
label_275cc8:
    // 0x275cc8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275ccc: 0x24425cb8  addiu       $v0, $v0, 0x5CB8
    ctx->pc = 0x275cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23736));
    // 0x275cd0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x275cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275cd4: 0x24845c98  addiu       $a0, $a0, 0x5C98
    ctx->pc = 0x275cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23704));
    // 0x275cd8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x275cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275cdc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x275cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x275ce0: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x275CE0u;
    SET_GPR_U32(ctx, 31, 0x275CE8u);
    ctx->pc = 0x275CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275CE0u;
    // 0x275ce4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x275CE0u, 0x275CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CE8u;
label_275ce8:
    // 0x275ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275cec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x275cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275cf0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x275cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275cf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x275CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275CF8u;
        // 0x275cfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275D00u;
}
