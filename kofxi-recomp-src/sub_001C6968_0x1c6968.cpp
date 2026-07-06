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

// Function: sub_001C6968
// Address: 0x1c6968 - 0x1c69a0
void sub_001C6968_0x1c6968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6968_0x1c6968");
#endif

    switch (ctx->pc) {
        case 0x1c697cu: goto label_1c697c;
        case 0x1c6984u: goto label_1c6984;
        case 0x1c698cu: goto label_1c698c;
        default: break;
    }

    ctx->pc = 0x1c6968u;

    // 0x1c6968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c696c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6974: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C6974u;
    SET_GPR_U32(ctx, 31, 0x1C697Cu);
    ctx->pc = 0x1C6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6974u;
    // 0x1c6978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C6974u, 0x1C697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C697Cu;
label_1c697c:
    // 0x1c697c: 0xc071a68  jal         func_1C69A0
    ctx->pc = 0x1C697Cu;
    SET_GPR_U32(ctx, 31, 0x1C6984u);
    ctx->pc = 0x1C6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C697Cu;
    // 0x1c6980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69A0u, 0x1C697Cu, 0x1C6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6984u;
label_1c6984:
    // 0x1c6984: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C6984u;
    SET_GPR_U32(ctx, 31, 0x1C698Cu);
    ctx->pc = 0x1C6988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6984u;
    // 0x1c6988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC0u, 0x1C6984u, 0x1C698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C698Cu;
label_1c698c:
    // 0x1c698c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c698cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6998: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6998u;
        // 0x1c699c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C69A0u;
}
