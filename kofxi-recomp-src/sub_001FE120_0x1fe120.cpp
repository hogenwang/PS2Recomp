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

// Function: sub_001FE120
// Address: 0x1fe120 - 0x1fe180
void sub_001FE120_0x1fe120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE120_0x1fe120");
#endif

    switch (ctx->pc) {
        case 0x1fe140u: goto label_1fe140;
        case 0x1fe168u: goto label_1fe168;
        default: break;
    }

    ctx->pc = 0x1fe120u;

    // 0x1fe120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe12c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fe12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fe130: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1fe130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fe134: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE134u;
    {
        const bool branch_taken_0x1fe134 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE134u;
        // 0x1fe138: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe134) {
            ctx->pc = 0x1FE160u;
            goto label_1fe160;
        }
    }
    ctx->pc = 0x1FE13Cu;
    // 0x1fe13c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1fe13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1fe140:
    // 0x1fe140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe144: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe148: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fe148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fe14c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fe14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fe150: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1fe150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fe154: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1fe154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe158: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FE158u;
    {
        const bool branch_taken_0x1fe158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE158u;
        // 0x1fe15c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe158) {
            ctx->pc = 0x1FE140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe140;
        }
    }
    ctx->pc = 0x1FE160u;
label_1fe160:
    // 0x1fe160: 0xc07f860  jal         func_1FE180
    ctx->pc = 0x1FE160u;
    SET_GPR_U32(ctx, 31, 0x1FE168u);
    ctx->pc = 0x1FE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE160u;
    // 0x1fe164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE180u, 0x1FE160u, 0x1FE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE168u;
label_1fe168:
    // 0x1fe168: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x1fe168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x1fe16c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fe16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe174: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE174u;
        // 0x1fe178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE17Cu;
    // 0x1fe17c: 0x0  nop
    ctx->pc = 0x1fe17cu;
    // NOP
}
