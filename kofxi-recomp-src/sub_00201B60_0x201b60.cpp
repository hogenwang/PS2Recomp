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

// Function: sub_00201B60
// Address: 0x201b60 - 0x201b98
void sub_00201B60_0x201b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201B60_0x201b60");
#endif

    switch (ctx->pc) {
        case 0x201b80u: goto label_201b80;
        default: break;
    }

    ctx->pc = 0x201b60u;

    // 0x201b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201b68: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x201b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x201b6c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x201b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x201b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201b74: 0x8080836  j           func_2020D8
    ctx->pc = 0x201B74u;
    ctx->pc = 0x201B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B74u;
    // 0x201b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    sub_002020D8_0x2020d8(rdram, ctx, runtime); return;
    ctx->pc = 0x201B7Cu;
    // 0x201b7c: 0x0  nop
    ctx->pc = 0x201b7cu;
    // NOP
label_201b80:
    // 0x201b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201b88: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x201b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x201b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201b90: 0x80801d0  j           func_200740
    ctx->pc = 0x201B90u;
    ctx->pc = 0x201B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B90u;
    // 0x201b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200740u, 0x201B90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x201B98u;
}
