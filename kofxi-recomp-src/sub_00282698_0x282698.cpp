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

// Function: sub_00282698
// Address: 0x282698 - 0x2826e0
void sub_00282698_0x282698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282698_0x282698");
#endif

    switch (ctx->pc) {
        case 0x2826acu: goto label_2826ac;
        case 0x2826ccu: goto label_2826cc;
        default: break;
    }

    ctx->pc = 0x282698u;

    // 0x282698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28269c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x28269cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2826a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2826a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2826a4: 0xc09fdf8  jal         func_27F7E0
    ctx->pc = 0x2826A4u;
    SET_GPR_U32(ctx, 31, 0x2826ACu);
    ctx->pc = 0x2826A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826A4u;
    // 0x2826a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F7E0u, 0x2826A4u, 0x2826ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826ACu;
label_2826ac:
    // 0x2826ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2826ACu;
    {
        const bool branch_taken_0x2826ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2826B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826ACu;
        // 0x2826b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826ac) {
            ctx->pc = 0x2826D4u;
            goto label_2826d4;
        }
    }
    ctx->pc = 0x2826B4u;
    // 0x2826b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2826b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2826b8: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2826b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2826bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2826bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2826c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2826c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826c4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2826C4u;
    SET_GPR_U32(ctx, 31, 0x2826CCu);
    ctx->pc = 0x2826C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826C4u;
    // 0x2826c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2826C4u, 0x2826CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826CCu;
label_2826cc:
    // 0x2826cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2826ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2826d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2826d4:
    // 0x2826d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2826D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2826D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826D4u;
        // 0x2826d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2826D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2826DCu;
    // 0x2826dc: 0x0  nop
    ctx->pc = 0x2826dcu;
    // NOP
}
