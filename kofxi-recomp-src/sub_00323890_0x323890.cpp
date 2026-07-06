#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323890
// Address: 0x323890 - 0x323980
void sub_00323890_0x323890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323890_0x323890");
#endif

    switch (ctx->pc) {
        case 0x3238c4u: goto label_3238c4;
        case 0x3238f0u: goto label_3238f0;
        case 0x323918u: goto label_323918;
        case 0x32393cu: goto label_32393c;
        case 0x323958u: goto label_323958;
        default: break;
    }

    ctx->pc = 0x323890u;

    // 0x323890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x323890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x323894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x323894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x323898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x323898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32389c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3238a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3238a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3238a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3238a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3238a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3238acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3238b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3238b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3238b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3238b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3238bc: 0xc0c87f8  jal         func_321FE0
    ctx->pc = 0x3238BCu;
    SET_GPR_U32(ctx, 31, 0x3238C4u);
    ctx->pc = 0x3238C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3238BCu;
            // 0x3238c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (runtime->hasFunction(0x321FE0u)) {
        auto targetFn = runtime->lookupFunction(0x321FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3238C4u; }
        if (ctx->pc != 0x3238C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321FE0_0x321fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3238C4u; }
        if (ctx->pc != 0x3238C4u) { return; }
    }
    ctx->pc = 0x3238C4u;
label_3238c4:
    // 0x3238c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3238c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3238c8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x3238C8u;
    {
        const bool branch_taken_0x3238c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3238c8) {
            ctx->pc = 0x3238CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3238C8u;
            // 0x3238cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32395Cu;
            goto label_32395c;
        }
    }
    ctx->pc = 0x3238D0u;
    // 0x3238d0: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x3238d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x3238d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3238d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3238d8: 0x24847cf0  addiu       $a0, $a0, 0x7CF0
    ctx->pc = 0x3238d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31984));
    // 0x3238dc: 0x24a53ed8  addiu       $a1, $a1, 0x3ED8
    ctx->pc = 0x3238dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16088));
    // 0x3238e0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3238e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3238e4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x3238e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3238e8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x3238E8u;
    SET_GPR_U32(ctx, 31, 0x3238F0u);
    ctx->pc = 0x3238ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3238E8u;
            // 0x3238ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3238F0u; }
        if (ctx->pc != 0x3238F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3238F0u; }
        if (ctx->pc != 0x3238F0u) { return; }
    }
    ctx->pc = 0x3238F0u;
label_3238f0:
    // 0x3238f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3238f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238f4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3238F4u;
    {
        const bool branch_taken_0x3238f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3238f4) {
            ctx->pc = 0x323958u;
            goto label_323958;
        }
    }
    ctx->pc = 0x3238FCu;
    // 0x3238fc: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x3238fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x323900: 0xa6140012  sh          $s4, 0x12($s0)
    ctx->pc = 0x323900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 20));
    // 0x323904: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x323904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x323908: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x323908u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x32390c: 0x96050010  lhu         $a1, 0x10($s0)
    ctx->pc = 0x32390cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323910: 0xc0c9f28  jal         func_327CA0
    ctx->pc = 0x323910u;
    SET_GPR_U32(ctx, 31, 0x323918u);
    ctx->pc = 0x323914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323910u;
            // 0x323914: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327CA0u;
    if (runtime->hasFunction(0x327CA0u)) {
        auto targetFn = runtime->lookupFunction(0x327CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323918u; }
        if (ctx->pc != 0x323918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327CA0_0x327ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323918u; }
        if (ctx->pc != 0x323918u) { return; }
    }
    ctx->pc = 0x323918u;
label_323918:
    // 0x323918: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x323918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32391c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323920: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x323920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x323924: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x323924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x323928: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x323928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x32392c: 0xa6130018  sh          $s3, 0x18($s0)
    ctx->pc = 0x32392cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 19));
    // 0x323930: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x323930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x323934: 0xc0c8ab8  jal         func_322AE0
    ctx->pc = 0x323934u;
    SET_GPR_U32(ctx, 31, 0x32393Cu);
    ctx->pc = 0x323938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323934u;
            // 0x323938: 0xa6120014  sh          $s2, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322AE0u;
    if (runtime->hasFunction(0x322AE0u)) {
        auto targetFn = runtime->lookupFunction(0x322AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32393Cu; }
        if (ctx->pc != 0x32393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322AE0_0x322ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32393Cu; }
        if (ctx->pc != 0x32393Cu) { return; }
    }
    ctx->pc = 0x32393Cu;
label_32393c:
    // 0x32393c: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x32393cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x323940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x323940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x323944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323948: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x323948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32394c: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x32394cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x323950: 0xc0c8d50  jal         func_323540
    ctx->pc = 0x323950u;
    SET_GPR_U32(ctx, 31, 0x323958u);
    ctx->pc = 0x323954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323950u;
            // 0x323954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323540u;
    if (runtime->hasFunction(0x323540u)) {
        auto targetFn = runtime->lookupFunction(0x323540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323958u; }
        if (ctx->pc != 0x323958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323540_0x323540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323958u; }
        if (ctx->pc != 0x323958u) { return; }
    }
    ctx->pc = 0x323958u;
label_323958:
    // 0x323958: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32395c:
    // 0x32395c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32395cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323960: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x323960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323964: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x323964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32396c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32396cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323974: 0x3e00008  jr          $ra
    ctx->pc = 0x323974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323974u;
            // 0x323978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32397Cu;
    // 0x32397c: 0x0  nop
    ctx->pc = 0x32397cu;
    // NOP
    ctx->pc = 0x323980u;
}
