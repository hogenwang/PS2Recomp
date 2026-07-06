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

// Function: sub_002756F8
// Address: 0x2756f8 - 0x2757d8
void sub_002756F8_0x2756f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002756F8_0x2756f8");
#endif

    switch (ctx->pc) {
        case 0x275734u: goto label_275734;
        case 0x275744u: goto label_275744;
        case 0x2757c4u: goto label_2757c4;
        default: break;
    }

    ctx->pc = 0x2756f8u;

    // 0x2756f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2756f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2756fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2756fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275704: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x275704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x275708: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27570c: 0x24635754  addiu       $v1, $v1, 0x5754
    ctx->pc = 0x27570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22356));
    // 0x275710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275714: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275714u;
    {
        const bool branch_taken_0x275714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275714) {
            ctx->pc = 0x275734u;
            goto label_275734;
        }
    }
    ctx->pc = 0x27571Cu;
    // 0x27571c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27571cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275720: 0x24845768  addiu       $a0, $a0, 0x5768
    ctx->pc = 0x275720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22376));
    // 0x275724: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275728: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27572c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27572Cu;
    SET_GPR_U32(ctx, 31, 0x275734u);
    ctx->pc = 0x275730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27572Cu;
    // 0x275730: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27572Cu, 0x275734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275734u;
label_275734:
    // 0x275734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275734u;
    {
        const bool branch_taken_0x275734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275734) {
            ctx->pc = 0x275768u;
            goto label_275768;
        }
    }
    ctx->pc = 0x27573Cu;
    // 0x27573c: 0xa2b5dc51  sb          $s5, -0x23AF($s5)
    ctx->pc = 0x27573cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294958161), (uint8_t)GPR_U32(ctx, 21));
    // 0x275740: 0xa1085319  sb          $t0, 0x5319($t0)
    ctx->pc = 0x275740u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 21273), (uint8_t)GPR_U32(ctx, 8));
label_275744:
    // 0x275744: 0x24c404a0  addiu       $a0, $a2, 0x4A0
    ctx->pc = 0x275744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1184));
    // 0x275748: 0xa31fcd31  sb          $ra, -0x32CF($t8)
    ctx->pc = 0x275748u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294954289), (uint8_t)GPR_U32(ctx, 31));
    // 0x27574c: 0xd08020  add         $s0, $a2, $s0
    ctx->pc = 0x27574cu;
    {     int32_t rs_val = GPR_S32(ctx, 6);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x275750: 0xfe13f38a  sd          $s3, -0xC76($s0)
    ctx->pc = 0x275750u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294964106), GPR_U64(ctx, 19));
    // 0x275754: 0x0  nop
    ctx->pc = 0x275754u;
    // NOP
    // 0x275758: 0x7aba90c6  lq          $k0, -0x6F3A($s5)
    ctx->pc = 0x275758u;
    SET_GPR_VEC(ctx, 26, READ128(ADD32(GPR_U32(ctx, 21), 4294938822)));
    // 0x27575c: 0x971e2a24  lhu         $fp, 0x2A24($t8)
    ctx->pc = 0x27575cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10788)));
    // 0x275760: 0x7aba90ca  lq          $k0, -0x6F36($s5)
    ctx->pc = 0x275760u;
    SET_GPR_VEC(ctx, 26, READ128(ADD32(GPR_U32(ctx, 21), 4294938826)));
    // 0x275764: 0x0  nop
    ctx->pc = 0x275764u;
    // NOP
label_275768:
    // 0x275768: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x275768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27576c: 0xb9667fed  swr         $a2, 0x7FED($t3)
    ctx->pc = 0x27576cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32749); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275770: 0xa0433412  sb          $v1, 0x3412($v0)
    ctx->pc = 0x275770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13330), (uint8_t)GPR_U32(ctx, 3));
    // 0x275774: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275774u;
    {
        const bool branch_taken_0x275774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275774) {
            ctx->pc = 0x2757A4u;
            goto label_2757a4;
        }
    }
    ctx->pc = 0x27577Cu;
    // 0x27577c: 0x26e1020  add         $v0, $s3, $t6
    ctx->pc = 0x27577cu;
    {     int32_t rs_val = GPR_S32(ctx, 19);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x275780: 0x850e72db  lh          $t6, 0x72DB($t0)
    ctx->pc = 0x275780u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 29403)));
    // 0x275784: 0xfe742d2a  sd          $s4, 0x2D2A($s3)
    ctx->pc = 0x275784u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 11562), GPR_U64(ctx, 20));
    // 0x275788: 0x87114393  lh          $s1, 0x4393($t8)
    ctx->pc = 0x275788u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 17299)));
    // 0x27578c: 0xfd6233ea  sd          $v0, 0x33EA($t3)
    ctx->pc = 0x27578cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 13290), GPR_U64(ctx, 2));
    // 0x275790: 0x24431cb8  addiu       $v1, $v0, 0x1CB8
    ctx->pc = 0x275790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7352));
    // 0x275794: 0x76c09aba  .word       0x76C09ABA                   # INVALID     $s6, $zero, -0x6546 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275794u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x275794 raw=0x76C09ABA");
    // 0x275798: 0x971e2a25  lhu         $fp, 0x2A25($t8)
    ctx->pc = 0x275798u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10789)));
    // 0x27579c: 0x76c09ab6  .word       0x76C09AB6                   # INVALID     $s6, $zero, -0x654A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27579cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27579C raw=0x76C09AB6");
    // 0x2757a0: 0x0  nop
    ctx->pc = 0x2757a0u;
    // NOP
label_2757a4:
    // 0x2757a4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2757a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2757a8: 0x24425794  addiu       $v0, $v0, 0x5794
    ctx->pc = 0x2757a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22420));
    // 0x2757ac: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2757acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2757b0: 0x24845774  addiu       $a0, $a0, 0x5774
    ctx->pc = 0x2757b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22388));
    // 0x2757b4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2757b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2757b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2757b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2757bc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2757BCu;
    SET_GPR_U32(ctx, 31, 0x2757C4u);
    ctx->pc = 0x2757C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2757BCu;
    // 0x2757c0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x2757BCu, 0x2757C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757C4u;
label_2757c4:
    // 0x2757c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2757c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2757c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2757c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2757cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2757ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2757d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2757D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2757D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757D0u;
        // 0x2757d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2757D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2757D8u;
}
