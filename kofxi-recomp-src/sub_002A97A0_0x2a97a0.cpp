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

// Function: sub_002A97A0
// Address: 0x2a97a0 - 0x2a9810
void sub_002A97A0_0x2a97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A97A0_0x2a97a0");
#endif

    switch (ctx->pc) {
        case 0x2a97c8u: goto label_2a97c8;
        case 0x2a97e4u: goto label_2a97e4;
        case 0x2a97fcu: goto label_2a97fc;
        default: break;
    }

    ctx->pc = 0x2a97a0u;

    // 0x2a97a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a97a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A97A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97A4u;
        // 0x2a97a8: 0x24426cf8  addiu       $v0, $v0, 0x6CF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A97A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A97ACu;
    // 0x2a97ac: 0x0  nop
    ctx->pc = 0x2a97acu;
    // NOP
    // 0x2a97b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a97b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a97b8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A97B8u;
    {
        const bool branch_taken_0x2a97b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97B8u;
        // 0x2a97bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97b8) {
            ctx->pc = 0x2A97D0u;
            goto label_2a97d0;
        }
    }
    ctx->pc = 0x2A97C0u;
    // 0x2a97c0: 0xc0aa9fa  jal         func_2AA7E8
    ctx->pc = 0x2A97C0u;
    SET_GPR_U32(ctx, 31, 0x2A97C8u);
    ctx->pc = 0x2AA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA7E8u, 0x2A97C0u, 0x2A97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97C8u;
label_2a97c8:
    // 0x2a97c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A97C8u;
    {
        const bool branch_taken_0x2a97c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97C8u;
        // 0x2a97cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97c8) {
            ctx->pc = 0x2A9808u;
            goto label_2a9808;
        }
    }
    ctx->pc = 0x2A97D0u;
label_2a97d0:
    // 0x2a97d0: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2a97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2a97d4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A97D4u;
    {
        const bool branch_taken_0x2a97d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97D4u;
        // 0x2a97d8: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97d4) {
            ctx->pc = 0x2A97ECu;
            goto label_2a97ec;
        }
    }
    ctx->pc = 0x2A97DCu;
    // 0x2a97dc: 0xc0acc3e  jal         func_2B30F8
    ctx->pc = 0x2A97DCu;
    SET_GPR_U32(ctx, 31, 0x2A97E4u);
    ctx->pc = 0x2B30F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B30F8u, 0x2A97DCu, 0x2A97E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97E4u;
label_2a97e4:
    // 0x2a97e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A97E4u;
    {
        const bool branch_taken_0x2a97e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97E4u;
        // 0x2a97e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97e4) {
            ctx->pc = 0x2A9808u;
            goto label_2a9808;
        }
    }
    ctx->pc = 0x2A97ECu;
label_2a97ec:
    // 0x2a97ec: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A97ECu;
    {
        const bool branch_taken_0x2a97ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97ECu;
        // 0x2a97f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97ec) {
            ctx->pc = 0x2A9804u;
            goto label_2a9804;
        }
    }
    ctx->pc = 0x2A97F4u;
    // 0x2a97f4: 0xc0af196  jal         func_2BC658
    ctx->pc = 0x2A97F4u;
    SET_GPR_U32(ctx, 31, 0x2A97FCu);
    ctx->pc = 0x2BC658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC658u, 0x2A97F4u, 0x2A97FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A97FCu;
label_2a97fc:
    // 0x2a97fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A97FCu;
    {
        const bool branch_taken_0x2a97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A97FCu;
        // 0x2a9800: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97fc) {
            ctx->pc = 0x2A9808u;
            goto label_2a9808;
        }
    }
    ctx->pc = 0x2A9804u;
label_2a9804:
    // 0x2a9804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9808:
    // 0x2a9808: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9808u;
        // 0x2a980c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9810u;
}
