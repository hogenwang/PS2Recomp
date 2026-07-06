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

// Function: sub_00189F60
// Address: 0x189f60 - 0x189fb0
void sub_00189F60_0x189f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189F60_0x189f60");
#endif

    switch (ctx->pc) {
        case 0x189f70u: goto label_189f70;
        default: break;
    }

    ctx->pc = 0x189f60u;

    // 0x189f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189f68: 0xc062794  jal         func_189E50
    ctx->pc = 0x189F68u;
    SET_GPR_U32(ctx, 31, 0x189F70u);
    ctx->pc = 0x189E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E50u, 0x189F68u, 0x189F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F70u;
label_189f70:
    // 0x189f70: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x189f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x189f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f78: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x189f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189f7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x189f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x189f80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189f84: 0x2442dbb4  addiu       $v0, $v0, -0x244C
    ctx->pc = 0x189f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958004));
    // 0x189f88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189f90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189f98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x189F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F9Cu;
        // 0x189fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189FA4u;
    // 0x189fa4: 0x0  nop
    ctx->pc = 0x189fa4u;
    // NOP
    // 0x189fa8: 0x0  nop
    ctx->pc = 0x189fa8u;
    // NOP
    // 0x189fac: 0x0  nop
    ctx->pc = 0x189facu;
    // NOP
    if (ctx->pc == 0x189facu) { ctx->pc = 0x189fb0u; }
}
