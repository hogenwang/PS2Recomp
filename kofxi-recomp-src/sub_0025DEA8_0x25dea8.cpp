#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025DEA8
// Address: 0x25dea8 - 0x25df38
void sub_0025DEA8_0x25dea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DEA8_0x25dea8");
#endif

    switch (ctx->pc) {
        case 0x25dec8u: goto label_25dec8;
        case 0x25dedcu: goto label_25dedc;
        case 0x25def8u: goto label_25def8;
        case 0x25df04u: goto label_25df04;
        case 0x25df10u: goto label_25df10;
        case 0x25df1cu: goto label_25df1c;
        default: break;
    }

    ctx->pc = 0x25dea8u;

    // 0x25dea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25dea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25deac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25deacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25deb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25deb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25deb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25deb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25deb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25debc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25dec0: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25DEC0u;
    SET_GPR_U32(ctx, 31, 0x25DEC8u);
    ctx->pc = 0x25DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEC0u;
            // 0x25dec4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEC8u; }
        if (ctx->pc != 0x25DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEC8u; }
        if (ctx->pc != 0x25DEC8u) { return; }
    }
    ctx->pc = 0x25DEC8u;
label_25dec8:
    // 0x25dec8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25dec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25decc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25DECCu;
    {
        const bool branch_taken_0x25decc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DECCu;
            // 0x25ded0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25decc) {
            ctx->pc = 0x25DF1Cu;
            goto label_25df1c;
        }
    }
    ctx->pc = 0x25DED4u;
    // 0x25ded4: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25DED4u;
    SET_GPR_U32(ctx, 31, 0x25DEDCu);
    ctx->pc = 0x25DED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DED4u;
            // 0x25ded8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (runtime->hasFunction(0x230328u)) {
        auto targetFn = runtime->lookupFunction(0x230328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEDCu; }
        if (ctx->pc != 0x25DEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230328_0x230328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEDCu; }
        if (ctx->pc != 0x25DEDCu) { return; }
    }
    ctx->pc = 0x25DEDCu;
label_25dedc:
    // 0x25dedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25dedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dee0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DEE0u;
    {
        const bool branch_taken_0x25dee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEE0u;
            // 0x25dee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dee0) {
            ctx->pc = 0x25DEF0u;
            goto label_25def0;
        }
    }
    ctx->pc = 0x25DEE8u;
    // 0x25dee8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25DEE8u;
    {
        const bool branch_taken_0x25dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEE8u;
            // 0x25deec: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dee8) {
            ctx->pc = 0x25DF08u;
            goto label_25df08;
        }
    }
    ctx->pc = 0x25DEF0u;
label_25def0:
    // 0x25def0: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25DEF0u;
    SET_GPR_U32(ctx, 31, 0x25DEF8u);
    ctx->pc = 0x25DEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEF0u;
            // 0x25def4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (runtime->hasFunction(0x25CE98u)) {
        auto targetFn = runtime->lookupFunction(0x25CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEF8u; }
        if (ctx->pc != 0x25DEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CE98_0x25ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEF8u; }
        if (ctx->pc != 0x25DEF8u) { return; }
    }
    ctx->pc = 0x25DEF8u;
label_25def8:
    // 0x25def8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25defc: 0xc08be2e  jal         func_22F8B8
    ctx->pc = 0x25DEFCu;
    SET_GPR_U32(ctx, 31, 0x25DF04u);
    ctx->pc = 0x25DF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEFCu;
            // 0x25df00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F8B8u;
    if (runtime->hasFunction(0x22F8B8u)) {
        auto targetFn = runtime->lookupFunction(0x22F8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF04u; }
        if (ctx->pc != 0x25DF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F8B8_0x22f8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF04u; }
        if (ctx->pc != 0x25DF04u) { return; }
    }
    ctx->pc = 0x25DF04u;
label_25df04:
    // 0x25df04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25df04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25df08:
    // 0x25df08: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25DF08u;
    SET_GPR_U32(ctx, 31, 0x25DF10u);
    ctx->pc = 0x25DF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF08u;
            // 0x25df0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (runtime->hasFunction(0x25CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x25CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF10u; }
        if (ctx->pc != 0x25DF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEB0_0x25ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF10u; }
        if (ctx->pc != 0x25DF10u) { return; }
    }
    ctx->pc = 0x25DF10u;
label_25df10:
    // 0x25df10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df14: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25DF14u;
    SET_GPR_U32(ctx, 31, 0x25DF1Cu);
    ctx->pc = 0x25DF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF14u;
            // 0x25df18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF1Cu; }
        if (ctx->pc != 0x25DF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF1Cu; }
        if (ctx->pc != 0x25DF1Cu) { return; }
    }
    ctx->pc = 0x25DF1Cu;
label_25df1c:
    // 0x25df1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25df1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25df20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25df20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25df24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25df24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25df28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25df28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25DF2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF2Cu;
            // 0x25df30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25DF34u;
    // 0x25df34: 0x0  nop
    ctx->pc = 0x25df34u;
    // NOP
    ctx->pc = 0x25df38u;
}
