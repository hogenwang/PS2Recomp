#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010FAC0
// Address: 0x10fac0 - 0x10fb88
void sub_0010FAC0_0x10fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FAC0_0x10fac0");
#endif

    switch (ctx->pc) {
        case 0x10faf8u: goto label_10faf8;
        case 0x10fb50u: goto label_10fb50;
        case 0x10fb64u: goto label_10fb64;
        default: break;
    }

    ctx->pc = 0x10fac0u;

    // 0x10fac0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x10fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x10fac4: 0xffb10210  sd          $s1, 0x210($sp)
    ctx->pc = 0x10fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 17));
    // 0x10fac8: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x10fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x10facc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10faccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fad0: 0xffbf0230  sd          $ra, 0x230($sp)
    ctx->pc = 0x10fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 31));
    // 0x10fad4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10fad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fad8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x10fad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x10fadc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10FADCu;
    {
        const bool branch_taken_0x10fadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FADCu;
            // 0x10fae0: 0xffb00200  sd          $s0, 0x200($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fadc) {
            ctx->pc = 0x10FB6Cu;
            goto label_10fb6c;
        }
    }
    ctx->pc = 0x10FAE4u;
    // 0x10fae4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x10fae4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x10fae8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10faec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10faf0: 0xc049c48  jal         func_127120
    ctx->pc = 0x10FAF0u;
    SET_GPR_U32(ctx, 31, 0x10FAF8u);
    ctx->pc = 0x10FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FAF0u;
            // 0x10faf4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FAF8u; }
        if (ctx->pc != 0x10FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FAF8u; }
        if (ctx->pc != 0x10FAF8u) { return; }
    }
    ctx->pc = 0x10FAF8u;
label_10faf8:
    // 0x10faf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10faf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10fafc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10fb00: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x10fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x10fb04: 0x2463a780  addiu       $v1, $v1, -0x5880
    ctx->pc = 0x10fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944640));
    // 0x10fb08: 0x8c4567e0  lw          $a1, 0x67E0($v0)
    ctx->pc = 0x10fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26592)));
    // 0x10fb0c: 0x3b02021  addu        $a0, $sp, $s0
    ctx->pc = 0x10fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x10fb10: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x10fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x10fb14: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10fb18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10fb1c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x10fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x10fb20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x10fb24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10fb28: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x10fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10fb2c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10fb30: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x10fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x10fb34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10fb38: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x10fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x10fb3c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FB3Cu;
    {
        const bool branch_taken_0x10fb3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FB3Cu;
            // 0x10fb40: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb3c) {
            ctx->pc = 0x10FB58u;
            goto label_10fb58;
        }
    }
    ctx->pc = 0x10FB44u;
    // 0x10fb44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10fb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb48: 0xc043408  jal         func_10D020
    ctx->pc = 0x10FB48u;
    SET_GPR_U32(ctx, 31, 0x10FB50u);
    ctx->pc = 0x10FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FB48u;
            // 0x10fb4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D020u;
    if (runtime->hasFunction(0x10D020u)) {
        auto targetFn = runtime->lookupFunction(0x10D020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FB50u; }
        if (ctx->pc != 0x10FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifSetDmaSyscall_0x10d020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FB50u; }
        if (ctx->pc != 0x10FB50u) { return; }
    }
    ctx->pc = 0x10FB50u;
label_10fb50:
    // 0x10fb50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10FB50u;
    {
        const bool branch_taken_0x10fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FB50u;
            // 0x10fb54: 0xdfbf0230  ld          $ra, 0x230($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb50) {
            ctx->pc = 0x10FB74u;
            goto label_10fb74;
        }
    }
    ctx->pc = 0x10FB58u;
label_10fb58:
    // 0x10fb58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10fb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb5c: 0xc04340c  jal         func_10D030
    ctx->pc = 0x10FB5Cu;
    SET_GPR_U32(ctx, 31, 0x10FB64u);
    ctx->pc = 0x10FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FB5Cu;
            // 0x10fb60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D030u;
    if (runtime->hasFunction(0x10D030u)) {
        auto targetFn = runtime->lookupFunction(0x10D030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FB64u; }
        if (ctx->pc != 0x10FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifSetDmaSyscallIntr_0x10d030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FB64u; }
        if (ctx->pc != 0x10FB64u) { return; }
    }
    ctx->pc = 0x10FB64u;
label_10fb64:
    // 0x10fb64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB64u;
    {
        const bool branch_taken_0x10fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FB64u;
            // 0x10fb68: 0xdfbf0230  ld          $ra, 0x230($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb64) {
            ctx->pc = 0x10FB74u;
            goto label_10fb74;
        }
    }
    ctx->pc = 0x10FB6Cu;
label_10fb6c:
    // 0x10fb6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10fb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb70: 0xdfbf0230  ld          $ra, 0x230($sp)
    ctx->pc = 0x10fb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_10fb74:
    // 0x10fb74: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x10fb74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x10fb78: 0xdfb10210  ld          $s1, 0x210($sp)
    ctx->pc = 0x10fb78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x10fb7c: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x10fb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x10fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x10FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FB80u;
            // 0x10fb84: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FB88u;
    ctx->pc = 0x10fb88u;
}
