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

// Function: sub_0013CF30
// Address: 0x13cf30 - 0x13cfa0
void sub_0013CF30_0x13cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CF30_0x13cf30");
#endif

    switch (ctx->pc) {
        case 0x13cf70u: goto label_13cf70;
        case 0x13cf80u: goto label_13cf80;
        case 0x13cf94u: goto label_13cf94;
        default: break;
    }

    ctx->pc = 0x13cf30u;

    // 0x13cf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cf34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13cf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cf3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13cf40: 0x84840240  lh          $a0, 0x240($a0)
    ctx->pc = 0x13cf40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x13cf44: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13CF44u;
    {
        const bool branch_taken_0x13cf44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13cf44) {
            ctx->pc = 0x13CF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF44u;
            // 0x13cf48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CF88u;
            goto label_13cf88;
        }
    }
    ctx->pc = 0x13CF4Cu;
    // 0x13cf4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cf50: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CF50u;
    {
        const bool branch_taken_0x13cf50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13cf50) {
            ctx->pc = 0x13CF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF50u;
            // 0x13cf54: 0xaca30214  sw          $v1, 0x214($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CF78u;
            goto label_13cf78;
        }
    }
    ctx->pc = 0x13CF58u;
    // 0x13cf58: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CF58u;
    {
        const bool branch_taken_0x13cf58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf58) {
            ctx->pc = 0x13CF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13CF58u;
            // 0x13cf5c: 0xaca30214  sw          $v1, 0x214($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CF68u;
            goto label_13cf68;
        }
    }
    ctx->pc = 0x13CF60u;
    // 0x13cf60: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13CF60u;
    {
        const bool branch_taken_0x13cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF60u;
        // 0x13cf64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cf60) {
            ctx->pc = 0x13CF98u;
            goto label_13cf98;
        }
    }
    ctx->pc = 0x13CF68u;
label_13cf68:
    // 0x13cf68: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13CF68u;
    SET_GPR_U32(ctx, 31, 0x13CF70u);
    ctx->pc = 0x13CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF68u;
    // 0x13cf6c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x13CF68u, 0x13CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF70u;
label_13cf70:
    // 0x13cf70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13CF70u;
    {
        const bool branch_taken_0x13cf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf70) {
            ctx->pc = 0x13CF94u;
            goto label_13cf94;
        }
    }
    ctx->pc = 0x13CF78u;
label_13cf78:
    // 0x13cf78: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13CF78u;
    SET_GPR_U32(ctx, 31, 0x13CF80u);
    ctx->pc = 0x13CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF78u;
    // 0x13cf7c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x13CF78u, 0x13CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF80u;
label_13cf80:
    // 0x13cf80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13CF80u;
    {
        const bool branch_taken_0x13cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf80) {
            ctx->pc = 0x13CF94u;
            goto label_13cf94;
        }
    }
    ctx->pc = 0x13CF88u;
label_13cf88:
    // 0x13cf88: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13cf8c: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13CF8Cu;
    SET_GPR_U32(ctx, 31, 0x13CF94u);
    ctx->pc = 0x13CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF8Cu;
    // 0x13cf90: 0xaca20214  sw          $v0, 0x214($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x13CF8Cu, 0x13CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF94u;
label_13cf94:
    // 0x13cf94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13cf98:
    // 0x13cf98: 0x3e00008  jr          $ra
    ctx->pc = 0x13CF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CF98u;
        // 0x13cf9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFA0u;
}
