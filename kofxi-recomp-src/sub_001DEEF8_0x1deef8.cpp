#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEEF8
// Address: 0x1deef8 - 0x1df320
void sub_001DEEF8_0x1deef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEEF8_0x1deef8");
#endif

    switch (ctx->pc) {
        case 0x1def00u: goto label_1def00;
        case 0x1def20u: goto label_1def20;
        case 0x1def50u: goto label_1def50;
        case 0x1def5cu: goto label_1def5c;
        case 0x1def88u: goto label_1def88;
        case 0x1defa4u: goto label_1defa4;
        case 0x1defc8u: goto label_1defc8;
        case 0x1defe0u: goto label_1defe0;
        case 0x1deffcu: goto label_1deffc;
        case 0x1df020u: goto label_1df020;
        case 0x1df038u: goto label_1df038;
        case 0x1df04cu: goto label_1df04c;
        case 0x1df064u: goto label_1df064;
        case 0x1df078u: goto label_1df078;
        case 0x1df090u: goto label_1df090;
        case 0x1df0c4u: goto label_1df0c4;
        case 0x1df0dcu: goto label_1df0dc;
        case 0x1df0fcu: goto label_1df0fc;
        case 0x1df110u: goto label_1df110;
        case 0x1df118u: goto label_1df118;
        case 0x1df134u: goto label_1df134;
        case 0x1df14cu: goto label_1df14c;
        case 0x1df15cu: goto label_1df15c;
        case 0x1df178u: goto label_1df178;
        case 0x1df184u: goto label_1df184;
        case 0x1df1a8u: goto label_1df1a8;
        case 0x1df1d4u: goto label_1df1d4;
        case 0x1df1ecu: goto label_1df1ec;
        case 0x1df1fcu: goto label_1df1fc;
        case 0x1df210u: goto label_1df210;
        case 0x1df218u: goto label_1df218;
        case 0x1df22cu: goto label_1df22c;
        case 0x1df250u: goto label_1df250;
        case 0x1df260u: goto label_1df260;
        case 0x1df270u: goto label_1df270;
        case 0x1df288u: goto label_1df288;
        case 0x1df2b4u: goto label_1df2b4;
        case 0x1df2c4u: goto label_1df2c4;
        case 0x1df2e0u: goto label_1df2e0;
        case 0x1df2ecu: goto label_1df2ec;
        default: break;
    }

    ctx->pc = 0x1deef8u;

    // 0x1deef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEF8u;
            // 0x1deefc: 0x8c820404  lw          $v0, 0x404($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DEF00u;
label_1def00:
    // 0x1def00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1def00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1def04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1def04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1def08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1def08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1def0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1def10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1def10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1def14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1def14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1def18: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DEF18u;
    SET_GPR_U32(ctx, 31, 0x1DEF20u);
    ctx->pc = 0x1DEF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF18u;
            // 0x1def1c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF20u; }
        if (ctx->pc != 0x1DEF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF20u; }
        if (ctx->pc != 0x1DEF20u) { return; }
    }
    ctx->pc = 0x1DEF20u;
label_1def20:
    // 0x1def20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1def20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def24: 0x8e4204d4  lw          $v0, 0x4D4($s2)
    ctx->pc = 0x1def24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
    // 0x1def28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1def28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1def2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def30: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DEF30u;
    {
        const bool branch_taken_0x1def30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF30u;
            // 0x1def34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def30) {
            ctx->pc = 0x1DEF50u;
            goto label_1def50;
        }
    }
    ctx->pc = 0x1DEF38u;
    // 0x1def38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1def38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1def3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1def3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1def40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1def40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1def44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1def44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1def48: 0x807b7c0  j           func_1EDF00
    ctx->pc = 0x1DEF48u;
    ctx->pc = 0x1DEF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF48u;
            // 0x1def4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDF00u;
    {
        auto targetFn = runtime->lookupFunction(0x1EDF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1DEF50u;
label_1def50:
    // 0x1def50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1def50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def54: 0xc0772fa  jal         func_1DCBE8
    ctx->pc = 0x1DEF54u;
    SET_GPR_U32(ctx, 31, 0x1DEF5Cu);
    ctx->pc = 0x1DEF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF54u;
            // 0x1def58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE8u;
    if (runtime->hasFunction(0x1DCBE8u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF5Cu; }
        if (ctx->pc != 0x1DEF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBE8_0x1dcbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF5Cu; }
        if (ctx->pc != 0x1DEF5Cu) { return; }
    }
    ctx->pc = 0x1DEF5Cu;
label_1def5c:
    // 0x1def5c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1def5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1def60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1def60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1def64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1def68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1def68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1def6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1def70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1def70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1def74: 0x24a5efc8  addiu       $a1, $a1, -0x1038
    ctx->pc = 0x1def74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963144));
    // 0x1def78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1def78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1def7c: 0x807b7c0  j           func_1EDF00
    ctx->pc = 0x1DEF7Cu;
    ctx->pc = 0x1DEF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF7Cu;
            // 0x1def80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDF00u;
    {
        auto targetFn = runtime->lookupFunction(0x1EDF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1DEF84u;
    // 0x1def84: 0x0  nop
    ctx->pc = 0x1def84u;
    // NOP
label_1def88:
    // 0x1def88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1def88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1def8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1def8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1def90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1def90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1def94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1def98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1def98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1def9c: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DEF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DEFA4u);
    ctx->pc = 0x1DEFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF9Cu;
            // 0x1defa0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFA4u; }
        if (ctx->pc != 0x1DEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFA4u; }
        if (ctx->pc != 0x1DEFA4u) { return; }
    }
    ctx->pc = 0x1DEFA4u;
label_1defa4:
    // 0x1defa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1defa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1defa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1defa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1defac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1defacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1defb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1defb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1defb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1defb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1defb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1defb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1defbc: 0x807b7c0  j           func_1EDF00
    ctx->pc = 0x1DEFBCu;
    ctx->pc = 0x1DEFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFBCu;
            // 0x1defc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDF00u;
    {
        auto targetFn = runtime->lookupFunction(0x1EDF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1DEFC4u;
    // 0x1defc4: 0x0  nop
    ctx->pc = 0x1defc4u;
    // NOP
label_1defc8:
    // 0x1defc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1defcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1defccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1defd0: 0x8c8404d4  lw          $a0, 0x4D4($a0)
    ctx->pc = 0x1defd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
    // 0x1defd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1defd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1defd8: 0x807738e  j           func_1DCE38
    ctx->pc = 0x1DEFD8u;
    ctx->pc = 0x1DEFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFD8u;
            // 0x1defdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE38u;
    if (runtime->hasFunction(0x1DCE38u)) {
        auto targetFn = runtime->lookupFunction(0x1DCE38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001DCE38_0x1dce38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DEFE0u;
label_1defe0:
    // 0x1defe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1defe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1defe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1defe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1defe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1defe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1defec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1defecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1deff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1deff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1deff4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DEFF4u;
    SET_GPR_U32(ctx, 31, 0x1DEFFCu);
    ctx->pc = 0x1DEFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFF4u;
            // 0x1deff8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFFCu; }
        if (ctx->pc != 0x1DEFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFFCu; }
        if (ctx->pc != 0x1DEFFCu) { return; }
    }
    ctx->pc = 0x1DEFFCu;
label_1deffc:
    // 0x1deffc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1deffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1df000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df004: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF004u;
    {
        const bool branch_taken_0x1df004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF004u;
            // 0x1df008: 0x2484c9b0  addiu       $a0, $a0, -0x3650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df004) {
            ctx->pc = 0x1DF020u;
            goto label_1df020;
        }
    }
    ctx->pc = 0x1DF00Cu;
    // 0x1df00c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df00cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df018: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DF018u;
    ctx->pc = 0x1DF01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF018u;
            // 0x1df01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DF020u;
label_1df020:
    // 0x1df020: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x1df020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x1df024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df02c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df030: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF030u;
            // 0x1df034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF038u;
label_1df038:
    // 0x1df038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1df040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1df044: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DF044u;
    SET_GPR_U32(ctx, 31, 0x1DF04Cu);
    ctx->pc = 0x1DF048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF044u;
            // 0x1df048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF04Cu; }
        if (ctx->pc != 0x1DF04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF04Cu; }
        if (ctx->pc != 0x1DF04Cu) { return; }
    }
    ctx->pc = 0x1DF04Cu;
label_1df04c:
    // 0x1df04c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df050: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF050u;
    {
        const bool branch_taken_0x1df050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF050u;
            // 0x1df054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df050) {
            ctx->pc = 0x1DF078u;
            goto label_1df078;
        }
    }
    ctx->pc = 0x1DF058u;
    // 0x1df058: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1df058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1df05c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DF05Cu;
    SET_GPR_U32(ctx, 31, 0x1DF064u);
    ctx->pc = 0x1DF060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF05Cu;
            // 0x1df060: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF064u; }
        if (ctx->pc != 0x1DF064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF064u; }
        if (ctx->pc != 0x1DF064u) { return; }
    }
    ctx->pc = 0x1DF064u;
label_1df064:
    // 0x1df064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df06c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df070: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF070u;
            // 0x1df074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF078u;
label_1df078:
    // 0x1df078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df07c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df080: 0x8077c22  j           func_1DF088
    ctx->pc = 0x1DF080u;
    ctx->pc = 0x1DF084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF080u;
            // 0x1df084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF088u;
    goto label_1df088;
    ctx->pc = 0x1DF088u;
label_1df088:
    // 0x1df088: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF088u;
            // 0x1df08c: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF090u;
label_1df090:
    // 0x1df090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1df090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df094: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1df094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1df098: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1df098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df09c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1df09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1df0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1df0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1df0a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1df0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0ac: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1df0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1df0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0b4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1df0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1df0b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1df0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1df0bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1DF0BCu;
    SET_GPR_U32(ctx, 31, 0x1DF0C4u);
    ctx->pc = 0x1DF0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0BCu;
            // 0x1df0c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0C4u; }
        if (ctx->pc != 0x1DF0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0C4u; }
        if (ctx->pc != 0x1DF0C4u) { return; }
    }
    ctx->pc = 0x1DF0C4u;
label_1df0c4:
    // 0x1df0c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df0c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1df0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1df0cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1df0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1df0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0d4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DF0D4u;
    SET_GPR_U32(ctx, 31, 0x1DF0DCu);
    ctx->pc = 0x1DF0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0D4u;
            // 0x1df0d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0DCu; }
        if (ctx->pc != 0x1DF0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0DCu; }
        if (ctx->pc != 0x1DF0DCu) { return; }
    }
    ctx->pc = 0x1DF0DCu;
label_1df0dc:
    // 0x1df0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1df0e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df0e8: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF0E8u;
    {
        const bool branch_taken_0x1df0e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0E8u;
            // 0x1df0ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0e8) {
            ctx->pc = 0x1DF108u;
            goto label_1df108;
        }
    }
    ctx->pc = 0x1DF0F0u;
    // 0x1df0f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1df0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1df0f4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DF0F4u;
    SET_GPR_U32(ctx, 31, 0x1DF0FCu);
    ctx->pc = 0x1DF0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0F4u;
            // 0x1df0f8: 0x2484ca10  addiu       $a0, $a0, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0FCu; }
        if (ctx->pc != 0x1DF0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0FCu; }
        if (ctx->pc != 0x1DF0FCu) { return; }
    }
    ctx->pc = 0x1DF0FCu;
label_1df0fc:
    // 0x1df0fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1DF0FCu;
    {
        const bool branch_taken_0x1df0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0FCu;
            // 0x1df100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0fc) {
            ctx->pc = 0x1DF188u;
            goto label_1df188;
        }
    }
    ctx->pc = 0x1DF104u;
    // 0x1df104: 0x0  nop
    ctx->pc = 0x1df104u;
    // NOP
label_1df108:
    // 0x1df108: 0xc077ce4  jal         func_1DF390
    ctx->pc = 0x1DF108u;
    SET_GPR_U32(ctx, 31, 0x1DF110u);
    ctx->pc = 0x1DF390u;
    if (runtime->hasFunction(0x1DF390u)) {
        auto targetFn = runtime->lookupFunction(0x1DF390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF110u; }
        if (ctx->pc != 0x1DF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF390_0x1df390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF110u; }
        if (ctx->pc != 0x1DF110u) { return; }
    }
    ctx->pc = 0x1DF110u;
label_1df110:
    // 0x1df110: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DF110u;
    SET_GPR_U32(ctx, 31, 0x1DF118u);
    ctx->pc = 0x1DF114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF110u;
            // 0x1df114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF118u; }
        if (ctx->pc != 0x1DF118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF118u; }
        if (ctx->pc != 0x1DF118u) { return; }
    }
    ctx->pc = 0x1DF118u;
label_1df118:
    // 0x1df118: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df11c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1df11cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df120: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1df120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df124: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DF124u;
    {
        const bool branch_taken_0x1df124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF124u;
            // 0x1df128: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df124) {
            ctx->pc = 0x1DF188u;
            goto label_1df188;
        }
    }
    ctx->pc = 0x1DF12Cu;
    // 0x1df12c: 0xc07e5a8  jal         func_1F96A0
    ctx->pc = 0x1DF12Cu;
    SET_GPR_U32(ctx, 31, 0x1DF134u);
    ctx->pc = 0x1F96A0u;
    if (runtime->hasFunction(0x1F96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF134u; }
        if (ctx->pc != 0x1DF134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F96A0_0x1f96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF134u; }
        if (ctx->pc != 0x1DF134u) { return; }
    }
    ctx->pc = 0x1DF134u;
label_1df134:
    // 0x1df134: 0x54530015  bnel        $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF134u;
    {
        const bool branch_taken_0x1df134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1df134) {
            ctx->pc = 0x1DF138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF134u;
            // 0x1df138: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF18Cu;
            goto label_1df18c;
        }
    }
    ctx->pc = 0x1DF13Cu;
    // 0x1df13c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df144: 0xc077e0c  jal         func_1DF830
    ctx->pc = 0x1DF144u;
    SET_GPR_U32(ctx, 31, 0x1DF14Cu);
    ctx->pc = 0x1DF148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF144u;
            // 0x1df148: 0xae050078  sw          $a1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF830u;
    if (runtime->hasFunction(0x1DF830u)) {
        auto targetFn = runtime->lookupFunction(0x1DF830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF14Cu; }
        if (ctx->pc != 0x1DF14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF830_0x1df830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF14Cu; }
        if (ctx->pc != 0x1DF14Cu) { return; }
    }
    ctx->pc = 0x1DF14Cu;
label_1df14c:
    // 0x1df14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df150: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df154: 0xc077d0a  jal         func_1DF428
    ctx->pc = 0x1DF154u;
    SET_GPR_U32(ctx, 31, 0x1DF15Cu);
    ctx->pc = 0x1DF158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF154u;
            // 0x1df158: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF428u;
    if (runtime->hasFunction(0x1DF428u)) {
        auto targetFn = runtime->lookupFunction(0x1DF428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF15Cu; }
        if (ctx->pc != 0x1DF15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF428_0x1df428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF15Cu; }
        if (ctx->pc != 0x1DF15Cu) { return; }
    }
    ctx->pc = 0x1DF15Cu;
label_1df15c:
    // 0x1df15c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1df15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1df160: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1df160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1df164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df168: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1df168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1df16c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df170: 0xc077cf6  jal         func_1DF3D8
    ctx->pc = 0x1DF170u;
    SET_GPR_U32(ctx, 31, 0x1DF178u);
    ctx->pc = 0x1DF174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF170u;
            // 0x1df174: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3D8u;
    if (runtime->hasFunction(0x1DF3D8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF178u; }
        if (ctx->pc != 0x1DF178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3D8_0x1df3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF178u; }
        if (ctx->pc != 0x1DF178u) { return; }
    }
    ctx->pc = 0x1DF178u;
label_1df178:
    // 0x1df178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df17c: 0xc077cc8  jal         func_1DF320
    ctx->pc = 0x1DF17Cu;
    SET_GPR_U32(ctx, 31, 0x1DF184u);
    ctx->pc = 0x1DF180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF17Cu;
            // 0x1df180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF320u;
    if (runtime->hasFunction(0x1DF320u)) {
        auto targetFn = runtime->lookupFunction(0x1DF320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF184u; }
        if (ctx->pc != 0x1DF184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF320_0x1df320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF184u; }
        if (ctx->pc != 0x1DF184u) { return; }
    }
    ctx->pc = 0x1DF184u;
label_1df184:
    // 0x1df184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df188:
    // 0x1df188: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1df188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df18c:
    // 0x1df18c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1df18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df190: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1df190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df194: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1df194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df198: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1df198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df19c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF19Cu;
            // 0x1df1a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF1A4u;
    // 0x1df1a4: 0x0  nop
    ctx->pc = 0x1df1a4u;
    // NOP
label_1df1a8:
    // 0x1df1a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1df1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1df1ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1df1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1df1b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1df1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1df1b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1df1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1df1bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1df1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1df1c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1df1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1df1c4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1df1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1df1c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1df1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1df1cc: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1DF1CCu;
    SET_GPR_U32(ctx, 31, 0x1DF1D4u);
    ctx->pc = 0x1DF1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1CCu;
            // 0x1df1d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1D4u; }
        if (ctx->pc != 0x1DF1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1D4u; }
        if (ctx->pc != 0x1DF1D4u) { return; }
    }
    ctx->pc = 0x1DF1D4u;
label_1df1d4:
    // 0x1df1d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df1d8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF1D8u;
    {
        const bool branch_taken_0x1df1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1D8u;
            // 0x1df1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1d8) {
            ctx->pc = 0x1DF208u;
            goto label_1df208;
        }
    }
    ctx->pc = 0x1DF1E0u;
    // 0x1df1e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1df1e4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DF1E4u;
    SET_GPR_U32(ctx, 31, 0x1DF1ECu);
    ctx->pc = 0x1DF1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1E4u;
            // 0x1df1e8: 0x2484ca38  addiu       $a0, $a0, -0x35C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1ECu; }
        if (ctx->pc != 0x1DF1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1ECu; }
        if (ctx->pc != 0x1DF1ECu) { return; }
    }
    ctx->pc = 0x1DF1ECu;
label_1df1ec:
    // 0x1df1ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1f4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1DF1F4u;
    SET_GPR_U32(ctx, 31, 0x1DF1FCu);
    ctx->pc = 0x1DF1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1F4u;
            // 0x1df1f8: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1FCu; }
        if (ctx->pc != 0x1DF1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF1FCu; }
        if (ctx->pc != 0x1DF1FCu) { return; }
    }
    ctx->pc = 0x1DF1FCu;
label_1df1fc:
    // 0x1df1fc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1DF1FCu;
    {
        const bool branch_taken_0x1df1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1FCu;
            // 0x1df200: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1fc) {
            ctx->pc = 0x1DF2FCu;
            goto label_1df2fc;
        }
    }
    ctx->pc = 0x1DF204u;
    // 0x1df204: 0x0  nop
    ctx->pc = 0x1df204u;
    // NOP
label_1df208:
    // 0x1df208: 0xc077ce4  jal         func_1DF390
    ctx->pc = 0x1DF208u;
    SET_GPR_U32(ctx, 31, 0x1DF210u);
    ctx->pc = 0x1DF20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF208u;
            // 0x1df20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF390u;
    if (runtime->hasFunction(0x1DF390u)) {
        auto targetFn = runtime->lookupFunction(0x1DF390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF210u; }
        if (ctx->pc != 0x1DF210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF390_0x1df390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF210u; }
        if (ctx->pc != 0x1DF210u) { return; }
    }
    ctx->pc = 0x1DF210u;
label_1df210:
    // 0x1df210: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1DF210u;
    SET_GPR_U32(ctx, 31, 0x1DF218u);
    ctx->pc = 0x1DF214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF210u;
            // 0x1df214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF218u; }
        if (ctx->pc != 0x1DF218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF218u; }
        if (ctx->pc != 0x1DF218u) { return; }
    }
    ctx->pc = 0x1DF218u;
label_1df218:
    // 0x1df218: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1df218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df21c: 0x1220fff3  beqz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DF21Cu;
    {
        const bool branch_taken_0x1df21c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF21Cu;
            // 0x1df220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df21c) {
            ctx->pc = 0x1DF1ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1df1ec;
        }
    }
    ctx->pc = 0x1DF224u;
    // 0x1df224: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x1DF224u;
    SET_GPR_U32(ctx, 31, 0x1DF22Cu);
    ctx->pc = 0x1DF228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF224u;
            // 0x1df228: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9828u;
    if (runtime->hasFunction(0x1F9828u)) {
        auto targetFn = runtime->lookupFunction(0x1F9828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF22Cu; }
        if (ctx->pc != 0x1DF22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9828_0x1f9828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF22Cu; }
        if (ctx->pc != 0x1DF22Cu) { return; }
    }
    ctx->pc = 0x1DF22Cu;
label_1df22c:
    // 0x1df22c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df230: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1DF230u;
    {
        const bool branch_taken_0x1df230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df230) {
            ctx->pc = 0x1DF234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF230u;
            // 0x1df234: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF2FCu;
            goto label_1df2fc;
        }
    }
    ctx->pc = 0x1DF238u;
    // 0x1df238: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1df238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df23c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DF23Cu;
    {
        const bool branch_taken_0x1df23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF23Cu;
            // 0x1df240: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df23c) {
            ctx->pc = 0x1DF294u;
            goto label_1df294;
        }
    }
    ctx->pc = 0x1DF244u;
    // 0x1df244: 0x8e140018  lw          $s4, 0x18($s0)
    ctx->pc = 0x1df244u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1df248: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1df248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df24c: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x1df24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1df250:
    // 0x1df250: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF250u;
    {
        const bool branch_taken_0x1df250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF250u;
            // 0x1df254: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df250) {
            ctx->pc = 0x1DF290u;
            goto label_1df290;
        }
    }
    ctx->pc = 0x1DF258u;
    // 0x1df258: 0xc077f00  jal         func_1DFC00
    ctx->pc = 0x1DF258u;
    SET_GPR_U32(ctx, 31, 0x1DF260u);
    ctx->pc = 0x1DF25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF258u;
            // 0x1df25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFC00u;
    if (runtime->hasFunction(0x1DFC00u)) {
        auto targetFn = runtime->lookupFunction(0x1DFC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF260u; }
        if (ctx->pc != 0x1DF260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFC00_0x1dfc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF260u; }
        if (ctx->pc != 0x1DF260u) { return; }
    }
    ctx->pc = 0x1DF260u;
label_1df260:
    // 0x1df260: 0x1455000b  bne         $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF260u;
    {
        const bool branch_taken_0x1df260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1DF264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF260u;
            // 0x1df264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df260) {
            ctx->pc = 0x1DF290u;
            goto label_1df290;
        }
    }
    ctx->pc = 0x1DF268u;
    // 0x1df268: 0xc07e648  jal         func_1F9920
    ctx->pc = 0x1DF268u;
    SET_GPR_U32(ctx, 31, 0x1DF270u);
    ctx->pc = 0x1DF26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF268u;
            // 0x1df26c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9920u;
    if (runtime->hasFunction(0x1F9920u)) {
        auto targetFn = runtime->lookupFunction(0x1F9920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF270u; }
        if (ctx->pc != 0x1DF270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9920_0x1f9920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF270u; }
        if (ctx->pc != 0x1DF270u) { return; }
    }
    ctx->pc = 0x1DF270u;
label_1df270:
    // 0x1df270: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1df270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1df274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df278: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1df278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df27c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1df27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df280: 0xc07e60a  jal         func_1F9828
    ctx->pc = 0x1DF280u;
    SET_GPR_U32(ctx, 31, 0x1DF288u);
    ctx->pc = 0x1DF284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF280u;
            // 0x1df284: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9828u;
    if (runtime->hasFunction(0x1F9828u)) {
        auto targetFn = runtime->lookupFunction(0x1F9828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF288u; }
        if (ctx->pc != 0x1DF288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9828_0x1f9828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF288u; }
        if (ctx->pc != 0x1DF288u) { return; }
    }
    ctx->pc = 0x1DF288u;
label_1df288:
    // 0x1df288: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1DF288u;
    {
        const bool branch_taken_0x1df288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF288u;
            // 0x1df28c: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df288) {
            ctx->pc = 0x1DF250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1df250;
        }
    }
    ctx->pc = 0x1DF290u;
label_1df290:
    // 0x1df290: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1df290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1df294:
    // 0x1df294: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DF294u;
    {
        const bool branch_taken_0x1df294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF294u;
            // 0x1df298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df294) {
            ctx->pc = 0x1DF2F8u;
            goto label_1df2f8;
        }
    }
    ctx->pc = 0x1DF29Cu;
    // 0x1df29c: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1df29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1df2a0: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x1df2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x1df2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1df2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1df2a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1df2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df2ac: 0xc077e0c  jal         func_1DF830
    ctx->pc = 0x1DF2ACu;
    SET_GPR_U32(ctx, 31, 0x1DF2B4u);
    ctx->pc = 0x1DF2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2ACu;
            // 0x1df2b0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF830u;
    if (runtime->hasFunction(0x1DF830u)) {
        auto targetFn = runtime->lookupFunction(0x1DF830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2B4u; }
        if (ctx->pc != 0x1DF2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF830_0x1df830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2B4u; }
        if (ctx->pc != 0x1DF2B4u) { return; }
    }
    ctx->pc = 0x1DF2B4u;
label_1df2b4:
    // 0x1df2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1df2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df2bc: 0xc077d0a  jal         func_1DF428
    ctx->pc = 0x1DF2BCu;
    SET_GPR_U32(ctx, 31, 0x1DF2C4u);
    ctx->pc = 0x1DF2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2BCu;
            // 0x1df2c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF428u;
    if (runtime->hasFunction(0x1DF428u)) {
        auto targetFn = runtime->lookupFunction(0x1DF428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2C4u; }
        if (ctx->pc != 0x1DF2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF428_0x1df428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2C4u; }
        if (ctx->pc != 0x1DF2C4u) { return; }
    }
    ctx->pc = 0x1DF2C4u;
label_1df2c4:
    // 0x1df2c4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1df2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1df2c8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1df2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1df2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2d0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1df2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1df2d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2d8: 0xc077cf6  jal         func_1DF3D8
    ctx->pc = 0x1DF2D8u;
    SET_GPR_U32(ctx, 31, 0x1DF2E0u);
    ctx->pc = 0x1DF2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2D8u;
            // 0x1df2dc: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF3D8u;
    if (runtime->hasFunction(0x1DF3D8u)) {
        auto targetFn = runtime->lookupFunction(0x1DF3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2E0u; }
        if (ctx->pc != 0x1DF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF3D8_0x1df3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2E0u; }
        if (ctx->pc != 0x1DF2E0u) { return; }
    }
    ctx->pc = 0x1DF2E0u;
label_1df2e0:
    // 0x1df2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2e4: 0xc077cc8  jal         func_1DF320
    ctx->pc = 0x1DF2E4u;
    SET_GPR_U32(ctx, 31, 0x1DF2ECu);
    ctx->pc = 0x1DF2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2E4u;
            // 0x1df2e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF320u;
    if (runtime->hasFunction(0x1DF320u)) {
        auto targetFn = runtime->lookupFunction(0x1DF320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2ECu; }
        if (ctx->pc != 0x1DF2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF320_0x1df320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2ECu; }
        if (ctx->pc != 0x1DF2ECu) { return; }
    }
    ctx->pc = 0x1DF2ECu;
label_1df2ec:
    // 0x1df2ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF2ECu;
    {
        const bool branch_taken_0x1df2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2ECu;
            // 0x1df2f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2ec) {
            ctx->pc = 0x1DF300u;
            goto label_1df300;
        }
    }
    ctx->pc = 0x1DF2F4u;
    // 0x1df2f4: 0x0  nop
    ctx->pc = 0x1df2f4u;
    // NOP
label_1df2f8:
    // 0x1df2f8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1df2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1df2fc:
    // 0x1df2fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1df2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df300:
    // 0x1df300: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1df300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df304: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1df304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df308: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1df308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df30c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1df30cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df310: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1df310u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1df314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1df314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df318: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF318u;
            // 0x1df31c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF320u;
    ctx->pc = 0x1df320u;
}
