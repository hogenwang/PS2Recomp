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

// Function: sub_00260730
// Address: 0x260730 - 0x260808
void sub_00260730_0x260730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260730_0x260730");
#endif

    switch (ctx->pc) {
        case 0x260764u: goto label_260764;
        case 0x260798u: goto label_260798;
        case 0x2607a8u: goto label_2607a8;
        case 0x2607d8u: goto label_2607d8;
        default: break;
    }

    ctx->pc = 0x260730u;

    // 0x260730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x260730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x260734: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x260734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x260738: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x260738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26073c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26073cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260740: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x260740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x260744: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x260744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260748: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x260748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26074c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26074cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x260750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x260750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260758: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x260758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26075c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x26075Cu;
    SET_GPR_U32(ctx, 31, 0x260764u);
    ctx->pc = 0x260760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26075Cu;
    // 0x260760: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x26075Cu, 0x260764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260764u;
label_260764:
    // 0x260764: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x260764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260768: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x260768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x26076c: 0x8c50fcd0  lw          $s0, -0x330($v0)
    ctx->pc = 0x26076cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x260770: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x260770u;
    {
        const bool branch_taken_0x260770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x260770) {
            ctx->pc = 0x2607D0u;
            goto label_2607d0;
        }
    }
    ctx->pc = 0x260778u;
    // 0x260778: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x260778u;
    {
        const bool branch_taken_0x260778 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260778u;
        // 0x26077c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260778) {
            ctx->pc = 0x2607A8u;
            goto label_2607a8;
        }
    }
    ctx->pc = 0x260780u;
    // 0x260780: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x260780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x260784: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260784u;
    {
        const bool branch_taken_0x260784 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x260788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260784u;
        // 0x260788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260784) {
            ctx->pc = 0x260798u;
            goto label_260798;
        }
    }
    ctx->pc = 0x26078Cu;
    // 0x26078c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26078Cu;
    {
        const bool branch_taken_0x26078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26078Cu;
        // 0x260790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26078c) {
            ctx->pc = 0x2607D0u;
            goto label_2607d0;
        }
    }
    ctx->pc = 0x260794u;
    // 0x260794: 0x0  nop
    ctx->pc = 0x260794u;
    // NOP
label_260798:
    // 0x260798: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x260798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x26079c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2607a0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2607A0u;
    SET_GPR_U32(ctx, 31, 0x2607A8u);
    ctx->pc = 0x2607A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607A0u;
    // 0x2607a4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2607A0u, 0x2607A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607A8u;
label_2607a8:
    // 0x2607a8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2607a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2607ac: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2607ACu;
    {
        const bool branch_taken_0x2607ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2607ac) {
            ctx->pc = 0x2607D0u;
            goto label_2607d0;
        }
    }
    ctx->pc = 0x2607B4u;
    // 0x2607b4: 0x1260fffc  beqz        $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2607B4u;
    {
        const bool branch_taken_0x2607b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607B4u;
        // 0x2607b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607b4) {
            ctx->pc = 0x2607A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2607a8;
        }
    }
    ctx->pc = 0x2607BCu;
    // 0x2607bc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2607bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2607c0: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2607c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2607c4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2607C4u;
    {
        const bool branch_taken_0x2607c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607C4u;
        // 0x2607c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607c4) {
            ctx->pc = 0x260798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260798;
        }
    }
    ctx->pc = 0x2607CCu;
    // 0x2607cc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2607ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2607d0:
    // 0x2607d0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2607D0u;
    SET_GPR_U32(ctx, 31, 0x2607D8u);
    ctx->pc = 0x2607D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607D0u;
    // 0x2607d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2607D0u, 0x2607D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607D8u;
label_2607d8:
    // 0x2607d8: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x2607d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x2607dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2607dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2607e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2607e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2607e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2607e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2607e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2607ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2607ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2607f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2607f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2607f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2607f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2607f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2607f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2607fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2607FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607FCu;
        // 0x260800: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2607FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260804u;
    // 0x260804: 0x0  nop
    ctx->pc = 0x260804u;
    // NOP
    if (ctx->pc == 0x260804u) { ctx->pc = 0x260808u; }
}
