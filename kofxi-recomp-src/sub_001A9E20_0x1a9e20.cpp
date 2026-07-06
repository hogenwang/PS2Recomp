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

// Function: sub_001A9E20
// Address: 0x1a9e20 - 0x1a9e88
void sub_001A9E20_0x1a9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9E20_0x1a9e20");
#endif

    switch (ctx->pc) {
        case 0x1a9e40u: goto label_1a9e40;
        case 0x1a9e5cu: goto label_1a9e5c;
        default: break;
    }

    ctx->pc = 0x1a9e20u;

    // 0x1a9e20: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a9e24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9e28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a9e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9e2c: 0x24a56a38  addiu       $a1, $a1, 0x6A38
    ctx->pc = 0x1a9e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27192));
    // 0x1a9e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9e34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a9e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a9e38: 0xc049c22  jal         func_127088
    ctx->pc = 0x1A9E38u;
    SET_GPR_U32(ctx, 31, 0x1A9E40u);
    ctx->pc = 0x1A9E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9E38u;
    // 0x1a9e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1A9E38u, 0x1A9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E40u;
label_1a9e40:
    // 0x1a9e40: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a9e44: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a9e48: 0x24a56a40  addiu       $a1, $a1, 0x6A40
    ctx->pc = 0x1a9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27200));
    // 0x1a9e4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9E4Cu;
    {
        const bool branch_taken_0x1a9e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E4Cu;
        // 0x1a9e50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e4c) {
            ctx->pc = 0x1A9E70u;
            goto label_1a9e70;
        }
    }
    ctx->pc = 0x1A9E54u;
    // 0x1a9e54: 0xc049c22  jal         func_127088
    ctx->pc = 0x1A9E54u;
    SET_GPR_U32(ctx, 31, 0x1A9E5Cu);
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x1A9E54u, 0x1A9E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9E5Cu;
label_1a9e5c:
    // 0x1a9e5c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9E5Cu;
    {
        const bool branch_taken_0x1a9e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e5c) {
            ctx->pc = 0x1A9E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E5Cu;
            // 0x1a9e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E74u;
            goto label_1a9e74;
        }
    }
    ctx->pc = 0x1A9E64u;
    // 0x1a9e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9E64u;
    {
        const bool branch_taken_0x1a9e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E64u;
        // 0x1a9e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e64) {
            ctx->pc = 0x1A9E74u;
            goto label_1a9e74;
        }
    }
    ctx->pc = 0x1A9E6Cu;
    // 0x1a9e6c: 0x0  nop
    ctx->pc = 0x1a9e6cu;
    // NOP
label_1a9e70:
    // 0x1a9e70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a9e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9e74:
    // 0x1a9e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9e78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a9e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E7Cu;
        // 0x1a9e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E84u;
    // 0x1a9e84: 0x0  nop
    ctx->pc = 0x1a9e84u;
    // NOP
    if (ctx->pc == 0x1a9e84u) { ctx->pc = 0x1a9e88u; }
}
