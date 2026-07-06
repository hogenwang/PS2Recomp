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

// Function: sub_001B5210
// Address: 0x1b5210 - 0x1b5240
void sub_001B5210_0x1b5210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5210_0x1b5210");
#endif

    switch (ctx->pc) {
        case 0x1b5228u: goto label_1b5228;
        default: break;
    }

    ctx->pc = 0x1b5210u;

    // 0x1b5210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b521c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b5220: 0xc06af60  jal         func_1ABD80
    ctx->pc = 0x1B5220u;
    SET_GPR_U32(ctx, 31, 0x1B5228u);
    ctx->pc = 0x1B5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5220u;
    // 0x1b5224: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD80u, 0x1B5220u, 0x1B5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5228u;
label_1b5228:
    // 0x1b5228: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1b5228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b522c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b522cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5234: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5234u;
        // 0x1b5238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B523Cu;
    // 0x1b523c: 0x0  nop
    ctx->pc = 0x1b523cu;
    // NOP
    if (ctx->pc == 0x1b523cu) { ctx->pc = 0x1b5240u; }
}
