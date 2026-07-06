#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267F68
// Address: 0x267f68 - 0x268068
void sub_00267F68_0x267f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267F68_0x267f68");
#endif

    switch (ctx->pc) {
        case 0x267fa0u: goto label_267fa0;
        case 0x267fc4u: goto label_267fc4;
        case 0x267fd4u: goto label_267fd4;
        case 0x267fecu: goto label_267fec;
        case 0x268018u: goto label_268018;
        case 0x268034u: goto label_268034;
        case 0x268044u: goto label_268044;
        default: break;
    }

    ctx->pc = 0x267f68u;

    // 0x267f68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x267f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x267f6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f70: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x267f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x267f74: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x267f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x267f78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x267f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x267f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f80: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x267f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x267f84: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x267f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x267f88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267f8c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x267f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x267f90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x267f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267f94: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x267f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x267f98: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x267F98u;
    SET_GPR_U32(ctx, 31, 0x267FA0u);
    ctx->pc = 0x267F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F98u;
            // 0x267f9c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FA0u; }
        if (ctx->pc != 0x267FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FA0u; }
        if (ctx->pc != 0x267FA0u) { return; }
    }
    ctx->pc = 0x267FA0u;
label_267fa0:
    // 0x267fa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fa4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267FA4u;
    {
        const bool branch_taken_0x267fa4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x267FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267FA4u;
            // 0x267fa8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fa4) {
            ctx->pc = 0x267FB4u;
            goto label_267fb4;
        }
    }
    ctx->pc = 0x267FACu;
    // 0x267fac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x267FACu;
    {
        const bool branch_taken_0x267fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267FACu;
            // 0x267fb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fac) {
            ctx->pc = 0x268048u;
            goto label_268048;
        }
    }
    ctx->pc = 0x267FB4u;
label_267fb4:
    // 0x267fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fbc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267FBCu;
    SET_GPR_U32(ctx, 31, 0x267FC4u);
    ctx->pc = 0x267FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267FBCu;
            // 0x267fc0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FC4u; }
        if (ctx->pc != 0x267FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FC4u; }
        if (ctx->pc != 0x267FC4u) { return; }
    }
    ctx->pc = 0x267FC4u;
label_267fc4:
    // 0x267fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x267fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fcc: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267FCCu;
    SET_GPR_U32(ctx, 31, 0x267FD4u);
    ctx->pc = 0x267FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267FCCu;
            // 0x267fd0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FD4u; }
        if (ctx->pc != 0x267FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FD4u; }
        if (ctx->pc != 0x267FD4u) { return; }
    }
    ctx->pc = 0x267FD4u;
label_267fd4:
    // 0x267fd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x267fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267fd8: 0x3405c028  ori         $a1, $zero, 0xC028
    ctx->pc = 0x267fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49192);
    // 0x267fdc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267fe0: 0x34a56936  ori         $a1, $a1, 0x6936
    ctx->pc = 0x267fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26934);
    // 0x267fe4: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267FE4u;
    SET_GPR_U32(ctx, 31, 0x267FECu);
    ctx->pc = 0x267FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267FE4u;
            // 0x267fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FECu; }
        if (ctx->pc != 0x267FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267FECu; }
        if (ctx->pc != 0x267FECu) { return; }
    }
    ctx->pc = 0x267FECu;
label_267fec:
    // 0x267fec: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x267FECu;
    {
        const bool branch_taken_0x267fec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267FECu;
            // 0x267ff0: 0x8fb00030  lw          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fec) {
            ctx->pc = 0x26803Cu;
            goto label_26803c;
        }
    }
    ctx->pc = 0x267FF4u;
    // 0x267ff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x267ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ff8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ffc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x267ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x268000: 0x101702  srl         $v0, $s0, 28
    ctx->pc = 0x268000u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x268004: 0x320300e0  andi        $v1, $s0, 0xE0
    ctx->pc = 0x268004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)224);
    // 0x268008: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x268008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x26800c: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x26800cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x268010: 0xc04a966  jal         func_12A598
    ctx->pc = 0x268010u;
    SET_GPR_U32(ctx, 31, 0x268018u);
    ctx->pc = 0x268014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268010u;
            // 0x268014: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268018u; }
        if (ctx->pc != 0x268018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268018u; }
        if (ctx->pc != 0x268018u) { return; }
    }
    ctx->pc = 0x268018u;
label_268018:
    // 0x268018: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x268018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x26801c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268020: 0x3405c020  ori         $a1, $zero, 0xC020
    ctx->pc = 0x268020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x268024: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x268024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x268028: 0x34a56935  ori         $a1, $a1, 0x6935
    ctx->pc = 0x268028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26933);
    // 0x26802c: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26802Cu;
    SET_GPR_U32(ctx, 31, 0x268034u);
    ctx->pc = 0x268030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26802Cu;
            // 0x268030: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268034u; }
        if (ctx->pc != 0x268034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268034u; }
        if (ctx->pc != 0x268034u) { return; }
    }
    ctx->pc = 0x268034u;
label_268034:
    // 0x268034: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x268034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x268038: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x268038u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_26803c:
    // 0x26803c: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x26803Cu;
    SET_GPR_U32(ctx, 31, 0x268044u);
    ctx->pc = 0x268040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26803Cu;
            // 0x268040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268044u; }
        if (ctx->pc != 0x268044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268044u; }
        if (ctx->pc != 0x268044u) { return; }
    }
    ctx->pc = 0x268044u;
label_268044:
    // 0x268044: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x268044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_268048:
    // 0x268048: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x268048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26804c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x26804cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x268050: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x268050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268054: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x268054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268058: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x268058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26805c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x26805cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268060: 0x3e00008  jr          $ra
    ctx->pc = 0x268060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268060u;
            // 0x268064: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268068u;
    ctx->pc = 0x268068u;
}
