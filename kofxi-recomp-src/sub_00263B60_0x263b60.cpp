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

// Function: sub_00263B60
// Address: 0x263b60 - 0x263b90
void sub_00263B60_0x263b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263B60_0x263b60");
#endif

    switch (ctx->pc) {
        case 0x263b80u: goto label_263b80;
        default: break;
    }

    ctx->pc = 0x263b60u;

    // 0x263b60: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x263b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x263b64: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x263b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x263b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263b6c: 0x8c471a30  lw          $a3, 0x1A30($v0)
    ctx->pc = 0x263b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x263b70: 0x8c681a34  lw          $t0, 0x1A34($v1)
    ctx->pc = 0x263b70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6708)));
    // 0x263b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263b78: 0xc098ee4  jal         func_263B90
    ctx->pc = 0x263B78u;
    SET_GPR_U32(ctx, 31, 0x263B80u);
    ctx->pc = 0x263B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263B90u, 0x263B78u, 0x263B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B80u;
label_263b80:
    // 0x263b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263b84: 0x3e00008  jr          $ra
    ctx->pc = 0x263B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B84u;
        // 0x263b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263B8Cu;
    // 0x263b8c: 0x0  nop
    ctx->pc = 0x263b8cu;
    // NOP
    if (ctx->pc == 0x263b8cu) { ctx->pc = 0x263b90u; }
}
