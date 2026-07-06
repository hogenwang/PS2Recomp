#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6820
// Address: 0x1e6820 - 0x1e6868
void sub_001E6820_0x1e6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6820_0x1e6820");
#endif

    switch (ctx->pc) {
        case 0x1e6838u: goto label_1e6838;
        default: break;
    }

    ctx->pc = 0x1e6820u;

    // 0x1e6820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e6828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e682c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e6830: 0xc0799fc  jal         func_1E67F0
    ctx->pc = 0x1E6830u;
    SET_GPR_U32(ctx, 31, 0x1E6838u);
    ctx->pc = 0x1E6834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6830u;
            // 0x1e6834: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E67F0u;
    if (runtime->hasFunction(0x1E67F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E67F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6838u; }
        if (ctx->pc != 0x1E6838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E67F0_0x1e67f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6838u; }
        if (ctx->pc != 0x1E6838u) { return; }
    }
    ctx->pc = 0x1E6838u;
label_1e6838:
    // 0x1e6838: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6838u;
    {
        const bool branch_taken_0x1e6838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6838u;
            // 0x1e683c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6838) {
            ctx->pc = 0x1E6854u;
            goto label_1e6854;
        }
    }
    ctx->pc = 0x1E6840u;
    // 0x1e6840: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e6840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e6844: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6844u;
    {
        const bool branch_taken_0x1e6844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E6848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6844u;
            // 0x1e6848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6844) {
            ctx->pc = 0x1E6854u;
            goto label_1e6854;
        }
    }
    ctx->pc = 0x1E684Cu;
    // 0x1e684c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1e684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e6850: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e6850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e6854:
    // 0x1e6854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6858: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e6858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e685c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E685Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E685Cu;
            // 0x1e6860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6864u;
    // 0x1e6864: 0x0  nop
    ctx->pc = 0x1e6864u;
    // NOP
    ctx->pc = 0x1e6868u;
}
