#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205130
// Address: 0x205130 - 0x205180
void sub_00205130_0x205130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205130_0x205130");
#endif

    ctx->pc = 0x205130u;

    // 0x205130: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x205130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x205134: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x205134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x205138: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205138u;
    {
        const bool branch_taken_0x205138 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x20513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205138u;
            // 0x20513c: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205138) {
            ctx->pc = 0x20514Cu;
            goto label_20514c;
        }
    }
    ctx->pc = 0x205140u;
    // 0x205140: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205140u;
    {
        const bool branch_taken_0x205140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205140) {
            ctx->pc = 0x20514Cu;
            goto label_20514c;
        }
    }
    ctx->pc = 0x205148u;
    // 0x205148: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x205148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_20514c:
    // 0x20514c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20514Cu;
    {
        const bool branch_taken_0x20514c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20514c) {
            ctx->pc = 0x205150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20514Cu;
            // 0x205150: 0x28a10008  slti        $at, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x205168u;
            goto label_205168;
        }
    }
    ctx->pc = 0x205154u;
    // 0x205154: 0x28a10008  slti        $at, $a1, 0x8
    ctx->pc = 0x205154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x205158: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x205158u;
    {
        const bool branch_taken_0x205158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205158) {
            ctx->pc = 0x205174u;
            goto label_205174;
        }
    }
    ctx->pc = 0x205160u;
    // 0x205160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x205160u;
    {
        const bool branch_taken_0x205160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205160u;
            // 0x205164: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205160) {
            ctx->pc = 0x205174u;
            goto label_205174;
        }
    }
    ctx->pc = 0x205168u;
label_205168:
    // 0x205168: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x205168u;
    {
        const bool branch_taken_0x205168 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x205168) {
            ctx->pc = 0x205174u;
            goto label_205174;
        }
    }
    ctx->pc = 0x205170u;
    // 0x205170: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x205170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_205174:
    // 0x205174: 0x3e00008  jr          $ra
    ctx->pc = 0x205174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20517Cu;
    // 0x20517c: 0x0  nop
    ctx->pc = 0x20517cu;
    // NOP
    ctx->pc = 0x205180u;
}
