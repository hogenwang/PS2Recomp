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

// Function: sub_001B93A8
// Address: 0x1b93a8 - 0x1b9408
void sub_001B93A8_0x1b93a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B93A8_0x1b93a8");
#endif

    switch (ctx->pc) {
        case 0x1b93c0u: goto label_1b93c0;
        case 0x1b93ecu: goto label_1b93ec;
        case 0x1b93f4u: goto label_1b93f4;
        default: break;
    }

    ctx->pc = 0x1b93a8u;

    // 0x1b93a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b93a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b93ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B93ACu;
    {
        const bool branch_taken_0x1b93ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93ACu;
        // 0x1b93b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93ac) {
            ctx->pc = 0x1B93C8u;
            goto label_1b93c8;
        }
    }
    ctx->pc = 0x1B93B4u;
    // 0x1b93b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b93b8: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B93B8u;
    SET_GPR_U32(ctx, 31, 0x1B93C0u);
    ctx->pc = 0x1B93BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93B8u;
    // 0x1b93bc: 0x248480f8  addiu       $a0, $a0, -0x7F08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B93B8u, 0x1B93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93C0u;
label_1b93c0:
    // 0x1b93c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B93C0u;
    {
        const bool branch_taken_0x1b93c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C0u;
        // 0x1b93c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93c0) {
            ctx->pc = 0x1B93CCu;
            goto label_1b93cc;
        }
    }
    ctx->pc = 0x1B93C8u;
label_1b93c8:
    // 0x1b93c8: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b93c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1b93cc:
    // 0x1b93cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b93ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b93d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93D0u;
        // 0x1b93d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B93D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B93D8u;
    // 0x1b93d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b93d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b93dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b93dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b93e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b93e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b93e4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B93E4u;
    SET_GPR_U32(ctx, 31, 0x1B93ECu);
    ctx->pc = 0x1B93E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93E4u;
    // 0x1b93e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1B93E4u, 0x1B93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93ECu;
label_1b93ec:
    // 0x1b93ec: 0xc06e502  jal         func_1B9408
    ctx->pc = 0x1B93ECu;
    SET_GPR_U32(ctx, 31, 0x1B93F4u);
    ctx->pc = 0x1B93F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93ECu;
    // 0x1b93f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9408u, 0x1B93ECu, 0x1B93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93F4u;
label_1b93f4:
    // 0x1b93f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b93f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b93f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b93f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b93fc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B93FCu;
    ctx->pc = 0x1B9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93FCu;
    // 0x1b9400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9404u;
    // 0x1b9404: 0x0  nop
    ctx->pc = 0x1b9404u;
    // NOP
    if (ctx->pc == 0x1b9404u) { ctx->pc = 0x1b9408u; }
}
