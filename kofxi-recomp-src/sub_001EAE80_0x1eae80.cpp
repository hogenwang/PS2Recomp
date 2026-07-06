#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EAE80
// Address: 0x1eae80 - 0x1eaee0
void sub_001EAE80_0x1eae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAE80_0x1eae80");
#endif

    switch (ctx->pc) {
        case 0x1eaec8u: goto label_1eaec8;
        default: break;
    }

    ctx->pc = 0x1eae80u;

    // 0x1eae80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1eae80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae84: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1eae84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1eae88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1eae88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1eae8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eae8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eae90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1eae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eae94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eae98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eae98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eae9c: 0x24871368  addiu       $a3, $a0, 0x1368
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x1eaea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eaea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eaea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eaea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eaea8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1eaea8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1eaeac: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1eaeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1eaeb0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1eaeb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAEB4u;
    {
        const bool branch_taken_0x1eaeb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEB4u;
            // 0x1eaeb8: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaeb4) {
            ctx->pc = 0x1EAEC8u;
            goto label_1eaec8;
        }
    }
    ctx->pc = 0x1EAEBCu;
    // 0x1eaebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eaebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaec0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EAEC0u;
    ctx->pc = 0x1EAEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEC0u;
            // 0x1eaec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1EAEC8u;
label_1eaec8:
    // 0x1eaec8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x1eaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1eaecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eaeccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eaed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaed4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1eaed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1eaed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAED8u;
            // 0x1eaedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAEE0u;
    ctx->pc = 0x1eaee0u;
}
