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

// Function: sub_0027F040
// Address: 0x27f040 - 0x27f0c0
void sub_0027F040_0x27f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F040_0x27f040");
#endif

    switch (ctx->pc) {
        case 0x27f060u: goto label_27f060;
        case 0x27f098u: goto label_27f098;
        default: break;
    }

    ctx->pc = 0x27f040u;

    // 0x27f040: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27f040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27f044: 0x8c423560  lw          $v0, 0x3560($v0)
    ctx->pc = 0x27f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13664)));
    // 0x27f048: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27F048u;
    {
        const bool branch_taken_0x27f048 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27f048) {
            ctx->pc = 0x27F04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F048u;
            // 0x27f04c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F080u;
            goto label_27f080;
        }
    }
    ctx->pc = 0x27F050u;
    // 0x27f050: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27F050u;
    {
        const bool branch_taken_0x27f050 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27f050) {
            ctx->pc = 0x27F054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F050u;
            // 0x27f054: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F080u;
            goto label_27f080;
        }
    }
    ctx->pc = 0x27F058u;
    // 0x27f058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27f05c: 0x0  nop
    ctx->pc = 0x27f05cu;
    // NOP
label_27f060:
    // 0x27f060: 0x0  nop
    ctx->pc = 0x27f060u;
    // NOP
    // 0x27f064: 0x0  nop
    ctx->pc = 0x27f064u;
    // NOP
    // 0x27f068: 0x0  nop
    ctx->pc = 0x27f068u;
    // NOP
    // 0x27f06c: 0x0  nop
    ctx->pc = 0x27f06cu;
    // NOP
    // 0x27f070: 0x0  nop
    ctx->pc = 0x27f070u;
    // NOP
    // 0x27f074: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27F074u;
    {
        const bool branch_taken_0x27f074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F074u;
        // 0x27f078: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f074) {
            ctx->pc = 0x27F060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f060;
        }
    }
    ctx->pc = 0x27F07Cu;
    // 0x27f07c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_27f080:
    // 0x27f080: 0x8c42355c  lw          $v0, 0x355C($v0)
    ctx->pc = 0x27f080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13660)));
    // 0x27f084: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27F084u;
    {
        const bool branch_taken_0x27f084 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27f084) {
            ctx->pc = 0x27F0B4u;
            goto label_27f0b4;
        }
    }
    ctx->pc = 0x27F08Cu;
    // 0x27f08c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F08Cu;
    {
        const bool branch_taken_0x27f08c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27f08c) {
            ctx->pc = 0x27F0B4u;
            goto label_27f0b4;
        }
    }
    ctx->pc = 0x27F094u;
    // 0x27f094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27f098:
    // 0x27f098: 0x0  nop
    ctx->pc = 0x27f098u;
    // NOP
    // 0x27f09c: 0x0  nop
    ctx->pc = 0x27f09cu;
    // NOP
    // 0x27f0a0: 0x0  nop
    ctx->pc = 0x27f0a0u;
    // NOP
    // 0x27f0a4: 0x0  nop
    ctx->pc = 0x27f0a4u;
    // NOP
    // 0x27f0a8: 0x0  nop
    ctx->pc = 0x27f0a8u;
    // NOP
    // 0x27f0ac: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27F0ACu;
    {
        const bool branch_taken_0x27f0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f0ac) {
            ctx->pc = 0x27F0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F0ACu;
            // 0x27f0b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f098;
        }
    }
    ctx->pc = 0x27F0B4u;
label_27f0b4:
    // 0x27f0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F0BCu;
    // 0x27f0bc: 0x0  nop
    ctx->pc = 0x27f0bcu;
    // NOP
    if (ctx->pc == 0x27f0bcu) { ctx->pc = 0x27f0c0u; }
}
