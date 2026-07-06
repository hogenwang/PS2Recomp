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

// Function: sub_001B2630
// Address: 0x1b2630 - 0x1b2698
void sub_001B2630_0x1b2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2630_0x1b2630");
#endif

    switch (ctx->pc) {
        case 0x1b2648u: goto label_1b2648;
        case 0x1b267cu: goto label_1b267c;
        case 0x1b2684u: goto label_1b2684;
        default: break;
    }

    ctx->pc = 0x1b2630u;

    // 0x1b2630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2634: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2634u;
    {
        const bool branch_taken_0x1b2634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2634u;
        // 0x1b2638: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2634) {
            ctx->pc = 0x1B2658u;
            goto label_1b2658;
        }
    }
    ctx->pc = 0x1B263Cu;
    // 0x1b263c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b2640: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B2640u;
    SET_GPR_U32(ctx, 31, 0x1B2648u);
    ctx->pc = 0x1B2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2640u;
    // 0x1b2644: 0x24847d60  addiu       $a0, $a0, 0x7D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B2640u, 0x1B2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2648u;
label_1b2648:
    // 0x1b2648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b264c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2650: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2650u;
        // 0x1b2654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2658u;
label_1b2658:
    // 0x1b2658: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1b265c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2660: 0x8071938  j           func_1C64E0
    ctx->pc = 0x1B2660u;
    ctx->pc = 0x1B2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2660u;
    // 0x1b2664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C64E0u;
    sub_001C64E0_0x1c64e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2668u;
    // 0x1b2668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b266c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b266cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2674: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B2674u;
    SET_GPR_U32(ctx, 31, 0x1B267Cu);
    ctx->pc = 0x1B2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2674u;
    // 0x1b2678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B2674u, 0x1B267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B267Cu;
label_1b267c:
    // 0x1b267c: 0xc06c9a6  jal         func_1B2698
    ctx->pc = 0x1B267Cu;
    SET_GPR_U32(ctx, 31, 0x1B2684u);
    ctx->pc = 0x1B2680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B267Cu;
    // 0x1b2680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2698u, 0x1B267Cu, 0x1B2684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2684u;
label_1b2684:
    // 0x1b2684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2688: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b268c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B268Cu;
    ctx->pc = 0x1B2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B268Cu;
    // 0x1b2690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2694u;
    // 0x1b2694: 0x0  nop
    ctx->pc = 0x1b2694u;
    // NOP
}
