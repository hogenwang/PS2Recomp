#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002682D0
// Address: 0x2682d0 - 0x268370
void sub_002682D0_0x2682d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002682D0_0x2682d0");
#endif

    switch (ctx->pc) {
        case 0x2682fcu: goto label_2682fc;
        case 0x26831cu: goto label_26831c;
        case 0x26832cu: goto label_26832c;
        case 0x268348u: goto label_268348;
        case 0x268354u: goto label_268354;
        default: break;
    }

    ctx->pc = 0x2682d0u;

    // 0x2682d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2682d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2682d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2682d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2682d8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2682d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2682dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2682dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2682e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2682e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2682e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2682e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2682e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2682e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2682ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2682ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2682f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2682f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2682f4: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x2682F4u;
    SET_GPR_U32(ctx, 31, 0x2682FCu);
    ctx->pc = 0x2682F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2682F4u;
            // 0x2682f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2682FCu; }
        if (ctx->pc != 0x2682FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2682FCu; }
        if (ctx->pc != 0x2682FCu) { return; }
    }
    ctx->pc = 0x2682FCu;
label_2682fc:
    // 0x2682fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2682fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268300: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268300u;
    {
        const bool branch_taken_0x268300 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x268304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268300u;
            // 0x268304: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268300) {
            ctx->pc = 0x268310u;
            goto label_268310;
        }
    }
    ctx->pc = 0x268308u;
    // 0x268308: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x268308u;
    {
        const bool branch_taken_0x268308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268308u;
            // 0x26830c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268308) {
            ctx->pc = 0x268358u;
            goto label_268358;
        }
    }
    ctx->pc = 0x268310u;
label_268310:
    // 0x268310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268314: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268314u;
    SET_GPR_U32(ctx, 31, 0x26831Cu);
    ctx->pc = 0x268318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268314u;
            // 0x268318: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26831Cu; }
        if (ctx->pc != 0x26831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26831Cu; }
        if (ctx->pc != 0x26831Cu) { return; }
    }
    ctx->pc = 0x26831Cu;
label_26831c:
    // 0x26831c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26831cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268320: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x268320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268324: 0xc04a966  jal         func_12A598
    ctx->pc = 0x268324u;
    SET_GPR_U32(ctx, 31, 0x26832Cu);
    ctx->pc = 0x268328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268324u;
            // 0x268328: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26832Cu; }
        if (ctx->pc != 0x26832Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26832Cu; }
        if (ctx->pc != 0x26832Cu) { return; }
    }
    ctx->pc = 0x26832Cu;
label_26832c:
    // 0x26832c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x26832cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x268330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268334: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x268334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x268338: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x268338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26833c: 0x34a5697f  ori         $a1, $a1, 0x697F
    ctx->pc = 0x26833cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27007);
    // 0x268340: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x268340u;
    SET_GPR_U32(ctx, 31, 0x268348u);
    ctx->pc = 0x268344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268340u;
            // 0x268344: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268348u; }
        if (ctx->pc != 0x268348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268348u; }
        if (ctx->pc != 0x268348u) { return; }
    }
    ctx->pc = 0x268348u;
label_268348:
    // 0x268348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26834c: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x26834Cu;
    SET_GPR_U32(ctx, 31, 0x268354u);
    ctx->pc = 0x268350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26834Cu;
            // 0x268350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268354u; }
        if (ctx->pc != 0x268354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268354u; }
        if (ctx->pc != 0x268354u) { return; }
    }
    ctx->pc = 0x268354u;
label_268354:
    // 0x268354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x268354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268358:
    // 0x268358: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x268358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26835c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x26835cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268360: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x268360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268364: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x268364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268368: 0x3e00008  jr          $ra
    ctx->pc = 0x268368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268368u;
            // 0x26836c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268370u;
    ctx->pc = 0x268370u;
}
