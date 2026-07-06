#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010FEC8
// Address: 0x10fec8 - 0x10ff30
void sub_0010FEC8_0x10fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FEC8_0x10fec8");
#endif

    switch (ctx->pc) {
        case 0x10fed8u: goto label_10fed8;
        case 0x10fee8u: goto label_10fee8;
        case 0x10ff00u: goto label_10ff00;
        case 0x10ff18u: goto label_10ff18;
        default: break;
    }

    ctx->pc = 0x10fec8u;

    // 0x10fec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10feccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fed0: 0xc043604  jal         func_10D810
    ctx->pc = 0x10FED0u;
    SET_GPR_U32(ctx, 31, 0x10FED8u);
    ctx->pc = 0x10FED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FED0u;
            // 0x10fed4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D810u;
    if (runtime->hasFunction(0x10D810u)) {
        auto targetFn = runtime->lookupFunction(0x10D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FED8u; }
        if (ctx->pc != 0x10FED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D810_0x10d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FED8u; }
        if (ctx->pc != 0x10FED8u) { return; }
    }
    ctx->pc = 0x10FED8u;
label_10fed8:
    // 0x10fed8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10fedc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x10fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10fee0: 0xc043264  jal         func_10C990
    ctx->pc = 0x10FEE0u;
    SET_GPR_U32(ctx, 31, 0x10FEE8u);
    ctx->pc = 0x10FEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FEE0u;
            // 0x10fee4: 0x8c6567d4  lw          $a1, 0x67D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26580)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C990u;
    if (runtime->hasFunction(0x10C990u)) {
        auto targetFn = runtime->lookupFunction(0x10C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FEE8u; }
        if (ctx->pc != 0x10FEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C990_0x10c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FEE8u; }
        if (ctx->pc != 0x10FEE8u) { return; }
    }
    ctx->pc = 0x10FEE8u;
label_10fee8:
    // 0x10fee8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x10fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x10feec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10feecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fef0: 0xac6086a8  sw          $zero, -0x7958($v1)
    ctx->pc = 0x10fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936232), GPR_U32(ctx, 0));
    // 0x10fef4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FEF4u;
            // 0x10fef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FEFCu;
    // 0x10fefc: 0x0  nop
    ctx->pc = 0x10fefcu;
    // NOP
label_10ff00:
    // 0x10ff00: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10ff04: 0x246367d8  addiu       $v1, $v1, 0x67D8
    ctx->pc = 0x10ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26584));
    // 0x10ff08: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x10ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x10ff0c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x10ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x10ff10: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF10u;
            // 0x10ff14: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FF18u;
label_10ff18:
    // 0x10ff18: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10ff1c: 0x246367d8  addiu       $v1, $v1, 0x67D8
    ctx->pc = 0x10ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26584));
    // 0x10ff20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x10ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x10ff24: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x10ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x10ff28: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FF28u;
            // 0x10ff2c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FF30u;
    ctx->pc = 0x10ff30u;
}
