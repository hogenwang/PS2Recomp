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

// Function: sub_001FAE40
// Address: 0x1fae40 - 0x1fae90
void sub_001FAE40_0x1fae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAE40_0x1fae40");
#endif

    switch (ctx->pc) {
        case 0x1fae64u: goto label_1fae64;
        default: break;
    }

    ctx->pc = 0x1fae40u;

    // 0x1fae40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fae44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fae48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fae48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fae50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fae50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fae58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fae5c: 0xc07ebb8  jal         func_1FAEE0
    ctx->pc = 0x1FAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1FAE64u);
    ctx->pc = 0x1FAE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE5Cu;
    // 0x1fae60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x1FAE5Cu, 0x1FAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE64u;
label_1fae64:
    // 0x1fae64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAE64u;
    {
        const bool branch_taken_0x1fae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE64u;
        // 0x1fae68: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae64) {
            ctx->pc = 0x1FAE74u;
            goto label_1fae74;
        }
    }
    ctx->pc = 0x1FAE6Cu;
    // 0x1fae6c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1fae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1fae70: 0xac510a0c  sw          $s1, 0xA0C($v0)
    ctx->pc = 0x1fae70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2572), GPR_U32(ctx, 17));
label_1fae74:
    // 0x1fae74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fae74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fae78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fae78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fae7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fae7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fae80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fae80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fae84: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE84u;
        // 0x1fae88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE8Cu;
    // 0x1fae8c: 0x0  nop
    ctx->pc = 0x1fae8cu;
    // NOP
}
