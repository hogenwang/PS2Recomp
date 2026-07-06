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

// Function: sub_002A8D68
// Address: 0x2a8d68 - 0x2a8da8
void sub_002A8D68_0x2a8d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8D68_0x2a8d68");
#endif

    switch (ctx->pc) {
        case 0x2a8d68u: goto label_2a8d68;
        case 0x2a8d6cu: goto label_2a8d6c;
        case 0x2a8d70u: goto label_2a8d70;
        case 0x2a8d74u: goto label_2a8d74;
        case 0x2a8d78u: goto label_2a8d78;
        case 0x2a8d7cu: goto label_2a8d7c;
        case 0x2a8d80u: goto label_2a8d80;
        case 0x2a8d84u: goto label_2a8d84;
        case 0x2a8d88u: goto label_2a8d88;
        case 0x2a8d8cu: goto label_2a8d8c;
        case 0x2a8d90u: goto label_2a8d90;
        case 0x2a8d94u: goto label_2a8d94;
        case 0x2a8d98u: goto label_2a8d98;
        case 0x2a8d9cu: goto label_2a8d9c;
        case 0x2a8da0u: goto label_2a8da0;
        case 0x2a8da4u: goto label_2a8da4;
        default: break;
    }

    ctx->pc = 0x2a8d68u;

label_2a8d68:
    // 0x2a8d68: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a8d6c:
    // 0x2a8d6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a8d70:
    // 0x2a8d70: 0x8c626aa0  lw          $v0, 0x6AA0($v1)
    ctx->pc = 0x2a8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27296)));
label_2a8d74:
    // 0x2a8d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a8d78:
    // 0x2a8d78: 0x40f809  jalr        $v0
label_2a8d7c:
    if (ctx->pc == 0x2A8D7Cu) {
        ctx->pc = 0x2A8D80u;
        goto label_2a8d80;
    }
    ctx->pc = 0x2A8D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A8D80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D78u, 0x2A8D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8D80u;
label_2a8d80:
    // 0x2a8d80: 0xc0aa2ea  jal         func_2A8BA8
label_2a8d84:
    if (ctx->pc == 0x2A8D84u) {
        ctx->pc = 0x2A8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D80u;
        // 0x2a8d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D88u;
        goto label_2a8d88;
    }
    ctx->pc = 0x2A8D80u;
    SET_GPR_U32(ctx, 31, 0x2A8D88u);
    ctx->pc = 0x2A8D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D80u;
    // 0x2a8d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8BA8u, 0x2A8D80u, 0x2A8D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D88u;
label_2a8d88:
    // 0x2a8d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a8d8c:
    // 0x2a8d8c: 0x3e00008  jr          $ra
label_2a8d90:
    if (ctx->pc == 0x2A8D90u) {
        ctx->pc = 0x2A8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D8Cu;
        // 0x2a8d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8D94u;
        goto label_2a8d94;
    }
    ctx->pc = 0x2A8D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D8Cu;
        // 0x2a8d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D94u;
label_2a8d94:
    // 0x2a8d94: 0x0  nop
    ctx->pc = 0x2a8d94u;
    // NOP
label_2a8d98:
    // 0x2a8d98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a8d9c:
    // 0x2a8d9c: 0x3e00008  jr          $ra
label_2a8da0:
    if (ctx->pc == 0x2A8DA0u) {
        ctx->pc = 0x2A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D9Cu;
        // 0x2a8da0: 0xac446aa0  sw          $a0, 0x6AA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8DA4u;
        goto label_2a8da4;
    }
    ctx->pc = 0x2A8D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D9Cu;
        // 0x2a8da0: 0xac446aa0  sw          $a0, 0x6AA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8DA4u;
label_2a8da4:
    // 0x2a8da4: 0x0  nop
    ctx->pc = 0x2a8da4u;
    // NOP
    if (ctx->pc == 0x2a8da4u) { ctx->pc = 0x2a8da8u; }
}
