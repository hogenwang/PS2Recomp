#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00339F20
// Address: 0x339f20 - 0x339fb0
void sub_00339F20_0x339f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339F20_0x339f20");
#endif

    switch (ctx->pc) {
        case 0x339f4cu: goto label_339f4c;
        case 0x339f64u: goto label_339f64;
        case 0x339f7cu: goto label_339f7c;
        case 0x339f94u: goto label_339f94;
        default: break;
    }

    ctx->pc = 0x339f20u;

    // 0x339f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x339f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x339f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f34: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x339F34u;
    {
        const bool branch_taken_0x339f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339F34u;
            // 0x339f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f34) {
            ctx->pc = 0x339F6Cu;
            goto label_339f6c;
        }
    }
    ctx->pc = 0x339F3Cu;
    // 0x339f3c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339f40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f44: 0xc0ce5fc  jal         func_3397F0
    ctx->pc = 0x339F44u;
    SET_GPR_U32(ctx, 31, 0x339F4Cu);
    ctx->pc = 0x339F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339F44u;
            // 0x339f48: 0x24c64d88  addiu       $a2, $a2, 0x4D88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3397F0u;
    if (runtime->hasFunction(0x3397F0u)) {
        auto targetFn = runtime->lookupFunction(0x3397F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F4Cu; }
        if (ctx->pc != 0x339F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003397F0_0x3397f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F4Cu; }
        if (ctx->pc != 0x339F4Cu) { return; }
    }
    ctx->pc = 0x339F4Cu;
label_339f4c:
    // 0x339f4c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x339f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f58: 0x24c64d90  addiu       $a2, $a2, 0x4D90
    ctx->pc = 0x339f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19856));
    // 0x339f5c: 0xc0ce5fc  jal         func_3397F0
    ctx->pc = 0x339F5Cu;
    SET_GPR_U32(ctx, 31, 0x339F64u);
    ctx->pc = 0x339F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339F5Cu;
            // 0x339f60: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3397F0u;
    if (runtime->hasFunction(0x3397F0u)) {
        auto targetFn = runtime->lookupFunction(0x3397F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F64u; }
        if (ctx->pc != 0x339F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003397F0_0x3397f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F64u; }
        if (ctx->pc != 0x339F64u) { return; }
    }
    ctx->pc = 0x339F64u;
label_339f64:
    // 0x339f64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x339F64u;
    {
        const bool branch_taken_0x339f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339F64u;
            // 0x339f68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f64) {
            ctx->pc = 0x339F98u;
            goto label_339f98;
        }
    }
    ctx->pc = 0x339F6Cu;
label_339f6c:
    // 0x339f6c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339f70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x339f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339f74: 0xc0ce5fc  jal         func_3397F0
    ctx->pc = 0x339F74u;
    SET_GPR_U32(ctx, 31, 0x339F7Cu);
    ctx->pc = 0x339F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339F74u;
            // 0x339f78: 0x24c64da0  addiu       $a2, $a2, 0x4DA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3397F0u;
    if (runtime->hasFunction(0x3397F0u)) {
        auto targetFn = runtime->lookupFunction(0x3397F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F7Cu; }
        if (ctx->pc != 0x339F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003397F0_0x3397f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F7Cu; }
        if (ctx->pc != 0x339F7Cu) { return; }
    }
    ctx->pc = 0x339F7Cu;
label_339f7c:
    // 0x339f7c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x339f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x339f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x339f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f88: 0x24c64da8  addiu       $a2, $a2, 0x4DA8
    ctx->pc = 0x339f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19880));
    // 0x339f8c: 0xc0ce5fc  jal         func_3397F0
    ctx->pc = 0x339F8Cu;
    SET_GPR_U32(ctx, 31, 0x339F94u);
    ctx->pc = 0x339F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339F8Cu;
            // 0x339f90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3397F0u;
    if (runtime->hasFunction(0x3397F0u)) {
        auto targetFn = runtime->lookupFunction(0x3397F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F94u; }
        if (ctx->pc != 0x339F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003397F0_0x3397f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339F94u; }
        if (ctx->pc != 0x339F94u) { return; }
    }
    ctx->pc = 0x339F94u;
label_339f94:
    // 0x339f94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_339f98:
    // 0x339f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x339FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339FA0u;
            // 0x339fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339FA8u;
    // 0x339fa8: 0x0  nop
    ctx->pc = 0x339fa8u;
    // NOP
    // 0x339fac: 0x0  nop
    ctx->pc = 0x339facu;
    // NOP
    ctx->pc = 0x339fb0u;
}
