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

// Function: sub_001AD208
// Address: 0x1ad208 - 0x1ad238
void sub_001AD208_0x1ad208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD208_0x1ad208");
#endif

    ctx->pc = 0x1ad208u;

    // 0x1ad208: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ad20c: 0x2442f6f8  addiu       $v0, $v0, -0x908
    ctx->pc = 0x1ad20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964984));
    // 0x1ad210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ad210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad214: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ad214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ad218: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ad218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ad21c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ad21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad220: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD220u;
    {
        const bool branch_taken_0x1ad220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD220u;
        // 0x1ad224: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad220) {
            ctx->pc = 0x1AD22Cu;
            goto label_1ad22c;
        }
    }
    ctx->pc = 0x1AD228u;
    // 0x1ad228: 0xac40f6f0  sw          $zero, -0x910($v0)
    ctx->pc = 0x1ad228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964976), GPR_U32(ctx, 0));
label_1ad22c:
    // 0x1ad22c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD234u;
    // 0x1ad234: 0x0  nop
    ctx->pc = 0x1ad234u;
    // NOP
    if (ctx->pc == 0x1ad234u) { ctx->pc = 0x1ad238u; }
}
