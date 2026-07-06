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

// Function: sub_0030B230
// Address: 0x30b230 - 0x30b260
void sub_0030B230_0x30b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B230_0x30b230");
#endif

    switch (ctx->pc) {
        case 0x30b24cu: goto label_30b24c;
        default: break;
    }

    ctx->pc = 0x30b230u;

    // 0x30b230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30b234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b238: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b23c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B23Cu;
    {
        const bool branch_taken_0x30b23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b23c) {
            ctx->pc = 0x30B240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B23Cu;
            // 0x30b240: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B250u;
            goto label_30b250;
        }
    }
    ctx->pc = 0x30B244u;
    // 0x30b244: 0xc0c2bf4  jal         func_30AFD0
    ctx->pc = 0x30B244u;
    SET_GPR_U32(ctx, 31, 0x30B24Cu);
    ctx->pc = 0x30AFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AFD0u, 0x30B244u, 0x30B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B24Cu;
label_30b24c:
    // 0x30b24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30b250:
    // 0x30b250: 0x3e00008  jr          $ra
    ctx->pc = 0x30B250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B250u;
        // 0x30b254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B258u;
    // 0x30b258: 0x0  nop
    ctx->pc = 0x30b258u;
    // NOP
    // 0x30b25c: 0x0  nop
    ctx->pc = 0x30b25cu;
    // NOP
    if (ctx->pc == 0x30b25cu) { ctx->pc = 0x30b260u; }
}
