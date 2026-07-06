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

// Function: sub_00185970
// Address: 0x185970 - 0x1859c0
void sub_00185970_0x185970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185970_0x185970");
#endif

    ctx->pc = 0x185970u;

    // 0x185970: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x185974: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x185974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x185978: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x185978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18597c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x185980: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x185980u;
    {
        const bool branch_taken_0x185980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185980) {
            ctx->pc = 0x185984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185980u;
            // 0x185984: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185990u;
            goto label_185990;
        }
    }
    ctx->pc = 0x185988u;
    // 0x185988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x185988u;
    {
        const bool branch_taken_0x185988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185988u;
        // 0x18598c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185988) {
            ctx->pc = 0x1859B8u;
            goto label_1859b8;
        }
    }
    ctx->pc = 0x185990u;
label_185990:
    // 0x185990: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x185990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x185994: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x185994u;
    {
        const bool branch_taken_0x185994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185994) {
            ctx->pc = 0x185998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185994u;
            // 0x185998: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1859A4u;
            goto label_1859a4;
        }
    }
    ctx->pc = 0x18599Cu;
    // 0x18599c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18599Cu;
    {
        const bool branch_taken_0x18599c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18599Cu;
        // 0x1859a0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18599c) {
            ctx->pc = 0x1859B8u;
            goto label_1859b8;
        }
    }
    ctx->pc = 0x1859A4u;
label_1859a4:
    // 0x1859a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1859a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1859a8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1859A8u;
    {
        const bool branch_taken_0x1859a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1859a8) {
            ctx->pc = 0x1859ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1859A8u;
            // 0x1859ac: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1859B8u;
            goto label_1859b8;
        }
    }
    ctx->pc = 0x1859B0u;
    // 0x1859b0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1859B0u;
    {
        const bool branch_taken_0x1859b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859B0u;
        // 0x1859b4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859b0) {
            ctx->pc = 0x1859B8u;
            goto label_1859b8;
        }
    }
    ctx->pc = 0x1859B8u;
label_1859b8:
    // 0x1859b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1859B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1859B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1859C0u;
}
