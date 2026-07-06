#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262900
// Address: 0x262900 - 0x262978
void sub_00262900_0x262900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262900_0x262900");
#endif

    switch (ctx->pc) {
        case 0x262938u: goto label_262938;
        case 0x262944u: goto label_262944;
        case 0x262954u: goto label_262954;
        case 0x262964u: goto label_262964;
        default: break;
    }

    ctx->pc = 0x262900u;

    // 0x262900: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x262900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x262904: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262908: 0x8c43d778  lw          $v1, -0x2888($v0)
    ctx->pc = 0x262908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956920)));
    // 0x26290c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262910: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262910u;
    {
        const bool branch_taken_0x262910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262910u;
            // 0x262914: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262910) {
            ctx->pc = 0x262920u;
            goto label_262920;
        }
    }
    ctx->pc = 0x262918u;
    // 0x262918: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x262918u;
    {
        const bool branch_taken_0x262918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262918u;
            // 0x26291c: 0x2402ffe9  addiu       $v0, $zero, -0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262918) {
            ctx->pc = 0x262968u;
            goto label_262968;
        }
    }
    ctx->pc = 0x262920u;
label_262920:
    // 0x262920: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x262920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x262924: 0x8e041a10  lw          $a0, 0x1A10($s0)
    ctx->pc = 0x262924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6672)));
    // 0x262928: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262928u;
    {
        const bool branch_taken_0x262928 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262928u;
            // 0x26292c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262928) {
            ctx->pc = 0x26293Cu;
            goto label_26293c;
        }
    }
    ctx->pc = 0x262930u;
    // 0x262930: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x262930u;
    SET_GPR_U32(ctx, 31, 0x262938u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262938u; }
        if (ctx->pc != 0x262938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262938u; }
        if (ctx->pc != 0x262938u) { return; }
    }
    ctx->pc = 0x262938u;
label_262938:
    // 0x262938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26293c:
    // 0x26293c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x26293Cu;
    SET_GPR_U32(ctx, 31, 0x262944u);
    ctx->pc = 0x262940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26293Cu;
            // 0x262940: 0xae021a10  sw          $v0, 0x1A10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262944u; }
        if (ctx->pc != 0x262944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262944u; }
        if (ctx->pc != 0x262944u) { return; }
    }
    ctx->pc = 0x262944u;
label_262944:
    // 0x262944: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x262944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x262948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26294c: 0xc043fea  jal         func_10FFA8
    ctx->pc = 0x26294Cu;
    SET_GPR_U32(ctx, 31, 0x262954u);
    ctx->pc = 0x262950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26294Cu;
            // 0x262950: 0x34840014  ori         $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FFA8u;
    if (runtime->hasFunction(0x10FFA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262954u; }
        if (ctx->pc != 0x262954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FFA8_0x10ffa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262954u; }
        if (ctx->pc != 0x262954u) { return; }
    }
    ctx->pc = 0x262954u;
label_262954:
    // 0x262954: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262954u;
    {
        const bool branch_taken_0x262954 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x262958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262954u;
            // 0x262958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262954) {
            ctx->pc = 0x262968u;
            goto label_262968;
        }
    }
    ctx->pc = 0x26295Cu;
    // 0x26295c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x26295Cu;
    SET_GPR_U32(ctx, 31, 0x262964u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262964u; }
        if (ctx->pc != 0x262964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262964u; }
        if (ctx->pc != 0x262964u) { return; }
    }
    ctx->pc = 0x262964u;
label_262964:
    // 0x262964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262968:
    // 0x262968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26296c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26296cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262970: 0x3e00008  jr          $ra
    ctx->pc = 0x262970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262970u;
            // 0x262974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262978u;
    ctx->pc = 0x262978u;
}
