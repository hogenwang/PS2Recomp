#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ABE10
// Address: 0x1abe10 - 0x1abf30
void sub_001ABE10_0x1abe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABE10_0x1abe10");
#endif

    switch (ctx->pc) {
        case 0x1abe18u: goto label_1abe18;
        case 0x1abe28u: goto label_1abe28;
        case 0x1abe30u: goto label_1abe30;
        case 0x1abe68u: goto label_1abe68;
        case 0x1abe80u: goto label_1abe80;
        case 0x1abec4u: goto label_1abec4;
        case 0x1abed8u: goto label_1abed8;
        case 0x1abf18u: goto label_1abf18;
        default: break;
    }

    ctx->pc = 0x1abe10u;

    // 0x1abe10: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE10u;
            // 0x1abe14: 0x8c820090  lw          $v0, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABE18u;
label_1abe18:
    // 0x1abe18: 0xac860100  sw          $a2, 0x100($a0)
    ctx->pc = 0x1abe18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 6));
    // 0x1abe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE1Cu;
            // 0x1abe20: 0xac8500fc  sw          $a1, 0xFC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABE24u;
    // 0x1abe24: 0x0  nop
    ctx->pc = 0x1abe24u;
    // NOP
label_1abe28:
    // 0x1abe28: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE28u;
            // 0x1abe2c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABE30u;
label_1abe30:
    // 0x1abe30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abe34: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x1abe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1abe38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abe3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1abe3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abe44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1abe44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe48: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1abe4c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1abe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1abe50: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1abe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1abe54: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1abe54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1abe58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1abe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1abe5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe60: 0xc06f702  jal         func_1BDC08
    ctx->pc = 0x1ABE60u;
    SET_GPR_U32(ctx, 31, 0x1ABE68u);
    ctx->pc = 0x1ABE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE60u;
            // 0x1abe64: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC08u;
    if (runtime->hasFunction(0x1BDC08u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE68u; }
        if (ctx->pc != 0x1ABE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC08_0x1bdc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE68u; }
        if (ctx->pc != 0x1ABE68u) { return; }
    }
    ctx->pc = 0x1ABE68u;
label_1abe68:
    // 0x1abe68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abe68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abe6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abe70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abe70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abe74: 0x806f726  j           func_1BDC98
    ctx->pc = 0x1ABE74u;
    ctx->pc = 0x1ABE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE74u;
            // 0x1abe78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC98u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1ABE7Cu;
    // 0x1abe7c: 0x0  nop
    ctx->pc = 0x1abe7cu;
    // NOP
label_1abe80:
    // 0x1abe80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abe84: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x1abe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1abe88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abe8c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1abe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1abe90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abe94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1abe94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1abe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1abe9c: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x1abe9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1abea0: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1abea4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1abea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1abea8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1abea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1abeac: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1abeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1abeb0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1abeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abeb4: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1abeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1abeb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abebc: 0xc06f70e  jal         func_1BDC38
    ctx->pc = 0x1ABEBCu;
    SET_GPR_U32(ctx, 31, 0x1ABEC4u);
    ctx->pc = 0x1ABEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEBCu;
            // 0x1abec0: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC38u;
    if (runtime->hasFunction(0x1BDC38u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEC4u; }
        if (ctx->pc != 0x1ABEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC38_0x1bdc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEC4u; }
        if (ctx->pc != 0x1ABEC4u) { return; }
    }
    ctx->pc = 0x1ABEC4u;
label_1abec4:
    // 0x1abec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abec8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abed0: 0x806f726  j           func_1BDC98
    ctx->pc = 0x1ABED0u;
    ctx->pc = 0x1ABED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABED0u;
            // 0x1abed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC98u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1ABED8u;
label_1abed8:
    // 0x1abed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abedc: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x1abedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1abee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abee4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1abee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abeec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1abeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1abef0: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x1abef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1abef4: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x1abef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1abef8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1abef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1abefc: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1abefcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1abf00: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1abf00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1abf04: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1abf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abf08: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1abf08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1abf0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf10: 0xc06f71a  jal         func_1BDC68
    ctx->pc = 0x1ABF10u;
    SET_GPR_U32(ctx, 31, 0x1ABF18u);
    ctx->pc = 0x1ABF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF10u;
            // 0x1abf14: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC68u;
    if (runtime->hasFunction(0x1BDC68u)) {
        auto targetFn = runtime->lookupFunction(0x1BDC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF18u; }
        if (ctx->pc != 0x1ABF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDC68_0x1bdc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF18u; }
        if (ctx->pc != 0x1ABF18u) { return; }
    }
    ctx->pc = 0x1ABF18u;
label_1abf18:
    // 0x1abf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abf20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abf24: 0x806f726  j           func_1BDC98
    ctx->pc = 0x1ABF24u;
    ctx->pc = 0x1ABF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF24u;
            // 0x1abf28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC98u;
    {
        auto targetFn = runtime->lookupFunction(0x1BDC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1ABF2Cu;
    // 0x1abf2c: 0x0  nop
    ctx->pc = 0x1abf2cu;
    // NOP
    ctx->pc = 0x1abf30u;
}
