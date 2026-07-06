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

// Function: sub_00130770
// Address: 0x130770 - 0x1307e0
void sub_00130770_0x130770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130770_0x130770");
#endif

    switch (ctx->pc) {
        case 0x13078cu: goto label_13078c;
        case 0x130794u: goto label_130794;
        case 0x1307b4u: goto label_1307b4;
        case 0x1307bcu: goto label_1307bc;
        case 0x1307c4u: goto label_1307c4;
        default: break;
    }

    ctx->pc = 0x130770u;

    // 0x130770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13077c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x130780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130784: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x130784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x130788: 0x261055e0  addiu       $s0, $s0, 0x55E0
    ctx->pc = 0x130788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21984));
label_13078c:
    // 0x13078c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x13078Cu;
    SET_GPR_U32(ctx, 31, 0x130794u);
    ctx->pc = 0x130790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13078Cu;
    // 0x130790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x13078Cu, 0x130794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130794u;
label_130794:
    // 0x130794: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x130794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x130798: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x130798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13079c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x13079cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1307a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1307A0u;
    {
        const bool branch_taken_0x1307a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1307a0) {
            ctx->pc = 0x13078Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13078c;
        }
    }
    ctx->pc = 0x1307A8u;
    // 0x1307a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1307a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1307ac: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x1307ACu;
    SET_GPR_U32(ctx, 31, 0x1307B4u);
    ctx->pc = 0x1307B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307ACu;
    // 0x1307b0: 0x2484c428  addiu       $a0, $a0, -0x3BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x1307ACu, 0x1307B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307B4u;
label_1307b4:
    // 0x1307b4: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x1307B4u;
    SET_GPR_U32(ctx, 31, 0x1307BCu);
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x1307B4u, 0x1307BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307BCu;
label_1307bc:
    // 0x1307bc: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x1307BCu;
    SET_GPR_U32(ctx, 31, 0x1307C4u);
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x1307BCu, 0x1307C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307C4u;
label_1307c4:
    // 0x1307c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1307c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1307c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1307c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1307cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1307ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1307d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1307D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1307D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307D0u;
        // 0x1307d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1307D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1307D8u;
    // 0x1307d8: 0x0  nop
    ctx->pc = 0x1307d8u;
    // NOP
    // 0x1307dc: 0x0  nop
    ctx->pc = 0x1307dcu;
    // NOP
}
