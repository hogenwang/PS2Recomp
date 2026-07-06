#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010FB88
// Address: 0x10fb88 - 0x10fc48
void sub_0010FB88_0x10fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB88_0x10fb88");
#endif

    switch (ctx->pc) {
        case 0x10fba4u: goto label_10fba4;
        case 0x10fbc8u: goto label_10fbc8;
        case 0x10fbd8u: goto label_10fbd8;
        case 0x10fbf0u: goto label_10fbf0;
        case 0x10fbfcu: goto label_10fbfc;
        case 0x10fc10u: goto label_10fc10;
        case 0x10fc2cu: goto label_10fc2c;
        case 0x10fc3cu: goto label_10fc3c;
        default: break;
    }

    ctx->pc = 0x10fb88u;

    // 0x10fb88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fb8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fb90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fb94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10fb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10fb9c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10FB9Cu;
    SET_GPR_U32(ctx, 31, 0x10FBA4u);
    ctx->pc = 0x10FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FB9Cu;
            // 0x10fba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBA4u; }
        if (ctx->pc != 0x10FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBA4u; }
        if (ctx->pc != 0x10FBA4u) { return; }
    }
    ctx->pc = 0x10FBA4u;
label_10fba4:
    // 0x10fba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10fba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fba8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x10fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x10fbac: 0x8c4386a8  lw          $v1, -0x7958($v0)
    ctx->pc = 0x10fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936232)));
    // 0x10fbb0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10FBB0u;
    {
        const bool branch_taken_0x10fbb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fbb0) {
            ctx->pc = 0x10FBE0u;
            goto label_10fbe0;
        }
    }
    ctx->pc = 0x10FBB8u;
    // 0x10fbb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FBB8u;
    {
        const bool branch_taken_0x10fbb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FBB8u;
            // 0x10fbbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbb8) {
            ctx->pc = 0x10FBCCu;
            goto label_10fbcc;
        }
    }
    ctx->pc = 0x10FBC0u;
    // 0x10fbc0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10FBC0u;
    SET_GPR_U32(ctx, 31, 0x10FBC8u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBC8u; }
        if (ctx->pc != 0x10FBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBC8u; }
        if (ctx->pc != 0x10FBC8u) { return; }
    }
    ctx->pc = 0x10FBC8u;
label_10fbc8:
    // 0x10fbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10fbcc:
    // 0x10fbcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10fbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbd0: 0xc043eb0  jal         func_10FAC0
    ctx->pc = 0x10FBD0u;
    SET_GPR_U32(ctx, 31, 0x10FBD8u);
    ctx->pc = 0x10FBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FBD0u;
            // 0x10fbd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAC0u;
    if (runtime->hasFunction(0x10FAC0u)) {
        auto targetFn = runtime->lookupFunction(0x10FAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBD8u; }
        if (ctx->pc != 0x10FBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAC0_0x10fac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBD8u; }
        if (ctx->pc != 0x10FBD8u) { return; }
    }
    ctx->pc = 0x10FBD8u;
label_10fbd8:
    // 0x10fbd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10FBD8u;
    {
        const bool branch_taken_0x10fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FBD8u;
            // 0x10fbdc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbd8) {
            ctx->pc = 0x10FC00u;
            goto label_10fc00;
        }
    }
    ctx->pc = 0x10FBE0u;
label_10fbe0:
    // 0x10fbe0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FBE0u;
    {
        const bool branch_taken_0x10fbe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FBE0u;
            // 0x10fbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbe0) {
            ctx->pc = 0x10FBF4u;
            goto label_10fbf4;
        }
    }
    ctx->pc = 0x10FBE8u;
    // 0x10fbe8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10FBE8u;
    SET_GPR_U32(ctx, 31, 0x10FBF0u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBF0u; }
        if (ctx->pc != 0x10FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBF0u; }
        if (ctx->pc != 0x10FBF0u) { return; }
    }
    ctx->pc = 0x10FBF0u;
label_10fbf0:
    // 0x10fbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10fbf4:
    // 0x10fbf4: 0xc043408  jal         func_10D020
    ctx->pc = 0x10FBF4u;
    SET_GPR_U32(ctx, 31, 0x10FBFCu);
    ctx->pc = 0x10FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FBF4u;
            // 0x10fbf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D020u;
    if (runtime->hasFunction(0x10D020u)) {
        auto targetFn = runtime->lookupFunction(0x10D020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBFCu; }
        if (ctx->pc != 0x10FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifSetDmaSyscall_0x10d020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FBFCu; }
        if (ctx->pc != 0x10FBFCu) { return; }
    }
    ctx->pc = 0x10FBFCu;
label_10fbfc:
    // 0x10fbfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10fbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10fc00:
    // 0x10fc00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fc00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fc04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fc04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC08u;
            // 0x10fc0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FC10u;
label_10fc10:
    // 0x10fc10: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x10fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x10fc14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fc14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fc18: 0x8c4386a8  lw          $v1, -0x7958($v0)
    ctx->pc = 0x10fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936232)));
    // 0x10fc1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FC1Cu;
    {
        const bool branch_taken_0x10fc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC1Cu;
            // 0x10fc20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc1c) {
            ctx->pc = 0x10FC34u;
            goto label_10fc34;
        }
    }
    ctx->pc = 0x10FC24u;
    // 0x10fc24: 0xc043eb0  jal         func_10FAC0
    ctx->pc = 0x10FC24u;
    SET_GPR_U32(ctx, 31, 0x10FC2Cu);
    ctx->pc = 0x10FC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC24u;
            // 0x10fc28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAC0u;
    if (runtime->hasFunction(0x10FAC0u)) {
        auto targetFn = runtime->lookupFunction(0x10FAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC2Cu; }
        if (ctx->pc != 0x10FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAC0_0x10fac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC2Cu; }
        if (ctx->pc != 0x10FC2Cu) { return; }
    }
    ctx->pc = 0x10FC2Cu;
label_10fc2c:
    // 0x10fc2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10FC2Cu;
    {
        const bool branch_taken_0x10fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC2Cu;
            // 0x10fc30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc2c) {
            ctx->pc = 0x10FC40u;
            goto label_10fc40;
        }
    }
    ctx->pc = 0x10FC34u;
label_10fc34:
    // 0x10fc34: 0xc04340c  jal         func_10D030
    ctx->pc = 0x10FC34u;
    SET_GPR_U32(ctx, 31, 0x10FC3Cu);
    ctx->pc = 0x10D030u;
    if (runtime->hasFunction(0x10D030u)) {
        auto targetFn = runtime->lookupFunction(0x10D030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC3Cu; }
        if (ctx->pc != 0x10FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifSetDmaSyscallIntr_0x10d030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10FC3Cu; }
        if (ctx->pc != 0x10FC3Cu) { return; }
    }
    ctx->pc = 0x10FC3Cu;
label_10fc3c:
    // 0x10fc3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fc40:
    // 0x10fc40: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10FC40u;
            // 0x10fc44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10FC48u;
    ctx->pc = 0x10fc48u;
}
