#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343880
// Address: 0x343880 - 0x343980
void sub_00343880_0x343880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343880_0x343880");
#endif

    switch (ctx->pc) {
        case 0x3438fcu: goto label_3438fc;
        case 0x343918u: goto label_343918;
        case 0x34392cu: goto label_34392c;
        case 0x34394cu: goto label_34394c;
        case 0x343964u: goto label_343964;
        default: break;
    }

    ctx->pc = 0x343880u;

    // 0x343880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x343880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x343884: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x343884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x343888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34388c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x343890: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x343890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x343894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343894u;
    {
        const bool branch_taken_0x343894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343894) {
            ctx->pc = 0x3438A8u;
            goto label_3438a8;
        }
    }
    ctx->pc = 0x34389Cu;
    // 0x34389c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3438a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3438A0u;
    {
        const bool branch_taken_0x3438a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3438A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3438A0u;
            // 0x3438a4: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438a0) {
            ctx->pc = 0x3438B0u;
            goto label_3438b0;
        }
    }
    ctx->pc = 0x3438A8u;
label_3438a8:
    // 0x3438a8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3438a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3438ac: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x3438acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_3438b0:
    // 0x3438b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3438b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3438b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3438b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3438b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3438b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3438bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3438bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3438c0: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x3438c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3438c4: 0x9044bea9  lbu         $a0, -0x4157($v0)
    ctx->pc = 0x3438c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x3438c8: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x3438c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x3438cc: 0x8c63ddc0  lw          $v1, -0x2240($v1)
    ctx->pc = 0x3438ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958528)));
    // 0x3438d0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3438d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3438d4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3438d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3438d8: 0x9045bea8  lbu         $a1, -0x4158($v0)
    ctx->pc = 0x3438d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x3438dc: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x3438dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3438e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3438e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3438e4: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x3438e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3438e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3438e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3438ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3438ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3438f0: 0x0  nop
    ctx->pc = 0x3438f0u;
    // NOP
    // 0x3438f4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3438F4u;
    SET_GPR_U32(ctx, 31, 0x3438FCu);
    ctx->pc = 0x3438F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3438F4u;
            // 0x3438f8: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3438FCu; }
        if (ctx->pc != 0x3438FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3438FCu; }
        if (ctx->pc != 0x3438FCu) { return; }
    }
    ctx->pc = 0x3438FCu;
label_3438fc:
    // 0x3438fc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3438fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x343900: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x343900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x343904: 0x8c4240b0  lw          $v0, 0x40B0($v0)
    ctx->pc = 0x343904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16560)));
    // 0x343908: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x343908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x34390c: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x34390cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x343910: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x343910u;
    SET_GPR_U32(ctx, 31, 0x343918u);
    ctx->pc = 0x343914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343910u;
            // 0x343914: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343918u; }
        if (ctx->pc != 0x343918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343918u; }
        if (ctx->pc != 0x343918u) { return; }
    }
    ctx->pc = 0x343918u;
label_343918:
    // 0x343918: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x343918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34391c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x34391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x343920: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x343920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x343924: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x343924u;
    SET_GPR_U32(ctx, 31, 0x34392Cu);
    ctx->pc = 0x343928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343924u;
            // 0x343928: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34392Cu; }
        if (ctx->pc != 0x34392Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34392Cu; }
        if (ctx->pc != 0x34392Cu) { return; }
    }
    ctx->pc = 0x34392Cu;
label_34392c:
    // 0x34392c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343930: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x343930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x343934: 0xa0409490  sb          $zero, -0x6B70($v0)
    ctx->pc = 0x343934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939792), (uint8_t)GPR_U32(ctx, 0));
    // 0x343938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34393c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343940: 0x248450d0  addiu       $a0, $a0, 0x50D0
    ctx->pc = 0x343940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20688));
    // 0x343944: 0xc043e52  jal         func_10F948
    ctx->pc = 0x343944u;
    SET_GPR_U32(ctx, 31, 0x34394Cu);
    ctx->pc = 0x343948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343944u;
            // 0x343948: 0xa0439488  sb          $v1, -0x6B78($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939784), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34394Cu; }
        if (ctx->pc != 0x34394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34394Cu; }
        if (ctx->pc != 0x34394Cu) { return; }
    }
    ctx->pc = 0x34394Cu;
label_34394c:
    // 0x34394c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343950: 0x24051120  addiu       $a1, $zero, 0x1120
    ctx->pc = 0x343950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
    // 0x343954: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x343954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x343958: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x343958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34395c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34395Cu;
    SET_GPR_U32(ctx, 31, 0x343964u);
    ctx->pc = 0x343960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34395Cu;
            // 0x343960: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343964u; }
        if (ctx->pc != 0x343964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343964u; }
        if (ctx->pc != 0x343964u) { return; }
    }
    ctx->pc = 0x343964u;
label_343964:
    // 0x343964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34396c: 0x3e00008  jr          $ra
    ctx->pc = 0x34396Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34396Cu;
            // 0x343970: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x343974u;
    // 0x343974: 0x0  nop
    ctx->pc = 0x343974u;
    // NOP
    // 0x343978: 0x0  nop
    ctx->pc = 0x343978u;
    // NOP
    // 0x34397c: 0x0  nop
    ctx->pc = 0x34397cu;
    // NOP
    ctx->pc = 0x343980u;
}
