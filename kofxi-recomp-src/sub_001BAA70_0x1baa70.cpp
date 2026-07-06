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

// Function: sub_001BAA70
// Address: 0x1baa70 - 0x1baac8
void sub_001BAA70_0x1baa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAA70_0x1baa70");
#endif

    switch (ctx->pc) {
        case 0x1baa88u: goto label_1baa88;
        case 0x1baa98u: goto label_1baa98;
        default: break;
    }

    ctx->pc = 0x1baa70u;

    // 0x1baa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baa74: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAA74u;
    {
        const bool branch_taken_0x1baa74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA74u;
        // 0x1baa78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa74) {
            ctx->pc = 0x1BAA90u;
            goto label_1baa90;
        }
    }
    ctx->pc = 0x1BAA7Cu;
    // 0x1baa7c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1baa80: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BAA80u;
    SET_GPR_U32(ctx, 31, 0x1BAA88u);
    ctx->pc = 0x1BAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA80u;
    // 0x1baa84: 0x24848510  addiu       $a0, $a0, -0x7AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BAA80u, 0x1BAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA88u;
label_1baa88:
    // 0x1baa88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BAA88u;
    {
        const bool branch_taken_0x1baa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA88u;
        // 0x1baa8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa88) {
            ctx->pc = 0x1BAAB8u;
            goto label_1baab8;
        }
    }
    ctx->pc = 0x1BAA90u;
label_1baa90:
    // 0x1baa90: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1BAA90u;
    SET_GPR_U32(ctx, 31, 0x1BAA98u);
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1BAA90u, 0x1BAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA98u;
label_1baa98:
    // 0x1baa98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1baa98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa9c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1baa9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1baaa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAAA0u;
    {
        const bool branch_taken_0x1baaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAA0u;
        // 0x1baaa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baaa0) {
            ctx->pc = 0x1BAAB0u;
            goto label_1baab0;
        }
    }
    ctx->pc = 0x1BAAA8u;
    // 0x1baaa8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAAA8u;
    {
        const bool branch_taken_0x1baaa8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAA8u;
        // 0x1baaac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baaa8) {
            ctx->pc = 0x1BAAB8u;
            goto label_1baab8;
        }
    }
    ctx->pc = 0x1BAAB0u;
label_1baab0:
    // 0x1baab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1baab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baab4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1baab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1baab8:
    // 0x1baab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baabc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAABCu;
        // 0x1baac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAAC4u;
    // 0x1baac4: 0x0  nop
    ctx->pc = 0x1baac4u;
    // NOP
}
