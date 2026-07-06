#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8658
// Address: 0x1f8658 - 0x1f86c0
void sub_001F8658_0x1f8658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8658_0x1f8658");
#endif

    switch (ctx->pc) {
        case 0x1f8688u: goto label_1f8688;
        case 0x1f86b0u: goto label_1f86b0;
        default: break;
    }

    ctx->pc = 0x1f8658u;

    // 0x1f8658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f865c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f865cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8664: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f8664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f8668: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8668u;
    {
        const bool branch_taken_0x1f8668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8668u;
            // 0x1f866c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8668) {
            ctx->pc = 0x1F8688u;
            goto label_1f8688;
        }
    }
    ctx->pc = 0x1F8670u;
    // 0x1f8670: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f8670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f8674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8678: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x1f8678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x1f867c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F867Cu;
    ctx->pc = 0x1F8680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F867Cu;
            // 0x1f8680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F8684u;
    // 0x1f8684: 0x0  nop
    ctx->pc = 0x1f8684u;
    // NOP
label_1f8688:
    // 0x1f8688: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1f8688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1f868c: 0x2c423828  sltiu       $v0, $v0, 0x3828
    ctx->pc = 0x1f868cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14376) ? 1 : 0);
    // 0x1f8690: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8690u;
    {
        const bool branch_taken_0x1f8690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8690u;
            // 0x1f8694: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8690) {
            ctx->pc = 0x1F86B0u;
            goto label_1f86b0;
        }
    }
    ctx->pc = 0x1F8698u;
    // 0x1f8698: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f869c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86a0: 0x34a50205  ori         $a1, $a1, 0x205
    ctx->pc = 0x1f86a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)517);
    // 0x1f86a4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F86A4u;
    ctx->pc = 0x1F86A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F86A4u;
            // 0x1f86a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F86ACu;
    // 0x1f86ac: 0x0  nop
    ctx->pc = 0x1f86acu;
    // NOP
label_1f86b0:
    // 0x1f86b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f86b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F86B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F86B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F86B4u;
            // 0x1f86b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F86BCu;
    // 0x1f86bc: 0x0  nop
    ctx->pc = 0x1f86bcu;
    // NOP
    ctx->pc = 0x1f86c0u;
}
