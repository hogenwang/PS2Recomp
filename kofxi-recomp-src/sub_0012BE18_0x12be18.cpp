#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012BE18
// Address: 0x12be18 - 0x12bec8
void sub_0012BE18_0x12be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BE18_0x12be18");
#endif

    switch (ctx->pc) {
        case 0x12be7cu: goto label_12be7c;
        case 0x12be90u: goto label_12be90;
        default: break;
    }

    ctx->pc = 0x12be18u;

    // 0x12be18: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x12be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x12be1c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x12be1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12be20: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x12be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x12be24: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x12be24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12be28: 0xffb10468  sd          $s1, 0x468($sp)
    ctx->pc = 0x12be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 17));
    // 0x12be2c: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x12be2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
    // 0x12be30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12be30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be34: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x12be34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x12be38: 0x948f000c  lhu         $t7, 0xC($a0)
    ctx->pc = 0x12be38u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12be3c: 0x8c8c0054  lw          $t4, 0x54($a0)
    ctx->pc = 0x12be3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12be40: 0x960b000e  lhu         $t3, 0xE($s0)
    ctx->pc = 0x12be40u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12be44: 0x31effffd  andi        $t7, $t7, 0xFFFD
    ctx->pc = 0x12be44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65533);
    // 0x12be48: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x12be48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x12be4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12be4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be50: 0x8e0d0024  lw          $t5, 0x24($s0)
    ctx->pc = 0x12be50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x12be54: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x12be54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x12be58: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12be58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12be5c: 0xa7ab000e  sh          $t3, 0xE($sp)
    ctx->pc = 0x12be5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 11));
    // 0x12be60: 0xafae001c  sw          $t6, 0x1C($sp)
    ctx->pc = 0x12be60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 14));
    // 0x12be64: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x12be64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x12be68: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x12be68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x12be6c: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x12be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x12be70: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x12be70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x12be74: 0xc04afb2  jal         func_12BEC8
    ctx->pc = 0x12BE74u;
    SET_GPR_U32(ctx, 31, 0x12BE7Cu);
    ctx->pc = 0x12BE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE74u;
            // 0x12be78: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC8u;
    if (runtime->hasFunction(0x12BEC8u)) {
        auto targetFn = runtime->lookupFunction(0x12BEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE7Cu; }
        if (ctx->pc != 0x12BE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BEC8_0x12bec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE7Cu; }
        if (ctx->pc != 0x12BE7Cu) { return; }
    }
    ctx->pc = 0x12BE7Cu;
label_12be7c:
    // 0x12be7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12be7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be80: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BE80u;
    {
        const bool branch_taken_0x12be80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12BE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE80u;
            // 0x12be84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be80) {
            ctx->pc = 0x12BE98u;
            goto label_12be98;
        }
    }
    ctx->pc = 0x12BE88u;
    // 0x12be88: 0xc049258  jal         func_124960
    ctx->pc = 0x12BE88u;
    SET_GPR_U32(ctx, 31, 0x12BE90u);
    ctx->pc = 0x124960u;
    if (runtime->hasFunction(0x124960u)) {
        auto targetFn = runtime->lookupFunction(0x124960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE90u; }
        if (ctx->pc != 0x12BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124960_0x124960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BE90u; }
        if (ctx->pc != 0x12BE90u) { return; }
    }
    ctx->pc = 0x12BE90u;
label_12be90:
    // 0x12be90: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12be90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12be94: 0x1e2880b  movn        $s1, $t7, $v0
    ctx->pc = 0x12be94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
label_12be98:
    // 0x12be98: 0x97af000c  lhu         $t7, 0xC($sp)
    ctx->pc = 0x12be98u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12be9c: 0x31ef0040  andi        $t7, $t7, 0x40
    ctx->pc = 0x12be9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)64);
    // 0x12bea0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BEA0u;
    {
        const bool branch_taken_0x12bea0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEA0u;
            // 0x12bea4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bea0) {
            ctx->pc = 0x12BEB4u;
            goto label_12beb4;
        }
    }
    ctx->pc = 0x12BEA8u;
    // 0x12bea8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12bea8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12beac: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x12beacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
    // 0x12beb0: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12beb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12beb4:
    // 0x12beb4: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x12beb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x12beb8: 0xdfb10468  ld          $s1, 0x468($sp)
    ctx->pc = 0x12beb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x12bebc: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x12bebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x12bec0: 0x3e00008  jr          $ra
    ctx->pc = 0x12BEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEC0u;
            // 0x12bec4: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BEC8u;
    ctx->pc = 0x12bec8u;
}
