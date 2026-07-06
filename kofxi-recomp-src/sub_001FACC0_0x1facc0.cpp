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

// Function: sub_001FACC0
// Address: 0x1facc0 - 0x1fad00
void sub_001FACC0_0x1facc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FACC0_0x1facc0");
#endif

    switch (ctx->pc) {
        case 0x1facd4u: goto label_1facd4;
        case 0x1facecu: goto label_1facec;
        default: break;
    }

    ctx->pc = 0x1facc0u;

    // 0x1facc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1facc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1facc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1facc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1facc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1facc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1faccc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FACCCu;
    SET_GPR_U32(ctx, 31, 0x1FACD4u);
    ctx->pc = 0x1FACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACCCu;
    // 0x1facd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FACCCu, 0x1FACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACD4u;
label_1facd4:
    // 0x1facd4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1facd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1facd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1facd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1facdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FACDCu;
    {
        const bool branch_taken_0x1facdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACDCu;
        // 0x1face0: 0x34a50111  ori         $a1, $a1, 0x111 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)273);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facdc) {
            ctx->pc = 0x1FACECu;
            goto label_1facec;
        }
    }
    ctx->pc = 0x1FACE4u;
    // 0x1face4: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1FACE4u;
    SET_GPR_U32(ctx, 31, 0x1FACECu);
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1FACE4u, 0x1FACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACECu;
label_1facec:
    // 0x1facec: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1facecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1facf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1facf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1facf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1facf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1facf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACF8u;
        // 0x1facfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FACF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD00u;
}
