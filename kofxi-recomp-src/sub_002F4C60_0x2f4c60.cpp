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

// Function: sub_002F4C60
// Address: 0x2f4c60 - 0x2f4cc8
void sub_002F4C60_0x2f4c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4C60_0x2f4c60");
#endif

    switch (ctx->pc) {
        case 0x2f4c90u: goto label_2f4c90;
        case 0x2f4cacu: goto label_2f4cac;
        default: break;
    }

    ctx->pc = 0x2f4c60u;

    // 0x2f4c60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f4c64: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f4c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f4c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4c6c: 0x24421e58  addiu       $v0, $v0, 0x1E58
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7768));
    // 0x2f4c70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f4c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f4c74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f4c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f4c7c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2f4c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4c80: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f4c84: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f4c88: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2F4C88u;
    SET_GPR_U32(ctx, 31, 0x2F4C90u);
    ctx->pc = 0x2F4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C88u;
    // 0x2f4c8c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F4C88u, 0x2F4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C90u;
label_2f4c90:
    // 0x2f4c90: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f4c94: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4C94u;
    {
        const bool branch_taken_0x2f4c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C94u;
        // 0x2f4c98: 0xac6203e0  sw          $v0, 0x3E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c94) {
            ctx->pc = 0x2F4CA4u;
            goto label_2f4ca4;
        }
    }
    ctx->pc = 0x2F4C9Cu;
    // 0x2f4c9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4C9Cu;
    {
        const bool branch_taken_0x2f4c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C9Cu;
        // 0x2f4ca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c9c) {
            ctx->pc = 0x2F4CB4u;
            goto label_2f4cb4;
        }
    }
    ctx->pc = 0x2F4CA4u;
label_2f4ca4:
    // 0x2f4ca4: 0xc0bdfce  jal         func_2F7F38
    ctx->pc = 0x2F4CA4u;
    SET_GPR_U32(ctx, 31, 0x2F4CACu);
    ctx->pc = 0x2F7F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7F38u, 0x2F4CA4u, 0x2F4CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CACu;
label_2f4cac:
    // 0x2f4cac: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2f4cacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2f4cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4cb4:
    // 0x2f4cb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f4cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4cb8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f4cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CBCu;
        // 0x2f4cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4CC4u;
    // 0x2f4cc4: 0x0  nop
    ctx->pc = 0x2f4cc4u;
    // NOP
    if (ctx->pc == 0x2f4cc4u) { ctx->pc = 0x2f4cc8u; }
}
