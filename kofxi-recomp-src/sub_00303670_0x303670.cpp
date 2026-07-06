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

// Function: sub_00303670
// Address: 0x303670 - 0x3036a0
void sub_00303670_0x303670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303670_0x303670");
#endif

    switch (ctx->pc) {
        case 0x303680u: goto label_303680;
        default: break;
    }

    ctx->pc = 0x303670u;

    // 0x303670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303678: 0xc066dd8  jal         func_19B760
    ctx->pc = 0x303678u;
    SET_GPR_U32(ctx, 31, 0x303680u);
    ctx->pc = 0x19B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B760u, 0x303678u, 0x303680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303680u;
label_303680:
    // 0x303680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303684: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x303684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x303688: 0x21023  negu        $v0, $v0
    ctx->pc = 0x303688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x30368c: 0x3e00008  jr          $ra
    ctx->pc = 0x30368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30368Cu;
        // 0x303690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303694u;
    // 0x303694: 0x0  nop
    ctx->pc = 0x303694u;
    // NOP
    // 0x303698: 0x0  nop
    ctx->pc = 0x303698u;
    // NOP
    // 0x30369c: 0x0  nop
    ctx->pc = 0x30369cu;
    // NOP
}
