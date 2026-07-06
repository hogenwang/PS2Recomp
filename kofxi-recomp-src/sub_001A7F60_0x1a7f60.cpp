#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7F60
// Address: 0x1a7f60 - 0x1a80c8
void sub_001A7F60_0x1a7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7F60_0x1a7f60");
#endif

    switch (ctx->pc) {
        case 0x1a7f74u: goto label_1a7f74;
        case 0x1a7f8cu: goto label_1a7f8c;
        case 0x1a7fa0u: goto label_1a7fa0;
        case 0x1a7fd4u: goto label_1a7fd4;
        case 0x1a7fe8u: goto label_1a7fe8;
        case 0x1a8024u: goto label_1a8024;
        case 0x1a8038u: goto label_1a8038;
        case 0x1a8048u: goto label_1a8048;
        case 0x1a8068u: goto label_1a8068;
        case 0x1a8078u: goto label_1a8078;
        case 0x1a8080u: goto label_1a8080;
        case 0x1a80b0u: goto label_1a80b0;
        default: break;
    }

    ctx->pc = 0x1a7f60u;

label_1a7f60:
    // 0x1a7f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7f6c: 0xc069fae  jal         func_1A7EB8
    ctx->pc = 0x1A7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F74u);
    ctx->pc = 0x1A7EB8u;
    if (runtime->hasFunction(0x1A7EB8u)) {
        auto targetFn = runtime->lookupFunction(0x1A7EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F74u; }
        if (ctx->pc != 0x1A7F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7EB8_0x1a7eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F74u; }
        if (ctx->pc != 0x1A7F74u) { return; }
    }
    ctx->pc = 0x1A7F74u;
label_1a7f74:
    // 0x1a7f74: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f7c: 0x24843280  addiu       $a0, $a0, 0x3280
    ctx->pc = 0x1a7f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12928));
    // 0x1a7f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a7f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f84: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A7F84u;
    SET_GPR_U32(ctx, 31, 0x1A7F8Cu);
    ctx->pc = 0x1A7F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F84u;
            // 0x1a7f88: 0x24060310  addiu       $a2, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F8Cu; }
        if (ctx->pc != 0x1A7F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F8Cu; }
        if (ctx->pc != 0x1A7F8Cu) { return; }
    }
    ctx->pc = 0x1A7F8Cu;
label_1a7f8c:
    // 0x1a7f8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a7f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F98u;
            // 0x1a7f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7FA0u;
label_1a7fa0:
    // 0x1a7fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7fa4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a7fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a7fa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a7fac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1a7facu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fb8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7FB8u;
    {
        const bool branch_taken_0x1a7fb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FB8u;
            // 0x1a7fbc: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fb8) {
            ctx->pc = 0x1A7FC8u;
            goto label_1a7fc8;
        }
    }
    ctx->pc = 0x1A7FC0u;
    // 0x1a7fc0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A7FC0u;
    {
        const bool branch_taken_0x1a7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FC0u;
            // 0x1a7fc4: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fc0) {
            ctx->pc = 0x1A804Cu;
            goto label_1a804c;
        }
    }
    ctx->pc = 0x1A7FC8u;
label_1a7fc8:
    // 0x1a7fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fcc: 0xc06a364  jal         func_1A8D90
    ctx->pc = 0x1A7FCCu;
    SET_GPR_U32(ctx, 31, 0x1A7FD4u);
    ctx->pc = 0x1A7FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FCCu;
            // 0x1a7fd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8D90u;
    if (runtime->hasFunction(0x1A8D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FD4u; }
        if (ctx->pc != 0x1A7FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8D90_0x1a8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7FD4u; }
        if (ctx->pc != 0x1A7FD4u) { return; }
    }
    ctx->pc = 0x1A7FD4u;
label_1a7fd4:
    // 0x1a7fd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7fd8: 0x620001c  bltz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A7FD8u;
    {
        const bool branch_taken_0x1a7fd8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1A7FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FD8u;
            // 0x1a7fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fd8) {
            ctx->pc = 0x1A804Cu;
            goto label_1a804c;
        }
    }
    ctx->pc = 0x1A7FE0u;
    // 0x1a7fe0: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A7FE0u;
    SET_GPR_U32(ctx, 31, 0x1A7FE8u);
    ctx->pc = 0x1A7F60u;
    goto label_1a7f60;
    ctx->pc = 0x1A7FE8u;
label_1a7fe8:
    // 0x1a7fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7fec: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1a7ff0: 0x24633280  addiu       $v1, $v1, 0x3280
    ctx->pc = 0x1a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12928));
    // 0x1a7ff4: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a7ff8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1a7ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ffc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1a7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1a8000: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a8004: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a8008: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1a8008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a800c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a800cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8010: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x1a8010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a8014: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8018: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x1a8018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a801c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1A801Cu;
    SET_GPR_U32(ctx, 31, 0x1A8024u);
    ctx->pc = 0x1A8020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A801Cu;
            // 0x1a8020: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8024u; }
        if (ctx->pc != 0x1A8024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8024u; }
        if (ctx->pc != 0x1A8024u) { return; }
    }
    ctx->pc = 0x1A8024u;
label_1a8024:
    // 0x1a8024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8028: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8028u;
    {
        const bool branch_taken_0x1a8028 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A802Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8028u;
            // 0x1a802c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8028) {
            ctx->pc = 0x1A8040u;
            goto label_1a8040;
        }
    }
    ctx->pc = 0x1A8030u;
    // 0x1a8030: 0xc06a390  jal         func_1A8E40
    ctx->pc = 0x1A8030u;
    SET_GPR_U32(ctx, 31, 0x1A8038u);
    ctx->pc = 0x1A8034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8030u;
            // 0x1a8034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E40u;
    if (runtime->hasFunction(0x1A8E40u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8038u; }
        if (ctx->pc != 0x1A8038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8E40_0x1a8e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8038u; }
        if (ctx->pc != 0x1A8038u) { return; }
    }
    ctx->pc = 0x1A8038u;
label_1a8038:
    // 0x1a8038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8038u;
    {
        const bool branch_taken_0x1a8038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8038u;
            // 0x1a803c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8038) {
            ctx->pc = 0x1A804Cu;
            goto label_1a804c;
        }
    }
    ctx->pc = 0x1A8040u;
label_1a8040:
    // 0x1a8040: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1A8040u;
    SET_GPR_U32(ctx, 31, 0x1A8048u);
    ctx->pc = 0x1A8044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8040u;
            // 0x1a8044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8048u; }
        if (ctx->pc != 0x1A8048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8048u; }
        if (ctx->pc != 0x1A8048u) { return; }
    }
    ctx->pc = 0x1A8048u;
label_1a8048:
    // 0x1a8048: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a8048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a804c:
    // 0x1a804c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a804cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8050: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a8050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8054: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a8054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8058: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a8058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a805c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A805Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A805Cu;
            // 0x1a8060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8064u;
    // 0x1a8064: 0x0  nop
    ctx->pc = 0x1a8064u;
    // NOP
label_1a8068:
    // 0x1a8068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a806c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8070: 0xc06a390  jal         func_1A8E40
    ctx->pc = 0x1A8070u;
    SET_GPR_U32(ctx, 31, 0x1A8078u);
    ctx->pc = 0x1A8E40u;
    if (runtime->hasFunction(0x1A8E40u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8078u; }
        if (ctx->pc != 0x1A8078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8E40_0x1a8e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8078u; }
        if (ctx->pc != 0x1A8078u) { return; }
    }
    ctx->pc = 0x1A8078u;
label_1a8078:
    // 0x1a8078: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8078u;
    SET_GPR_U32(ctx, 31, 0x1A8080u);
    ctx->pc = 0x1A7F60u;
    goto label_1a7f60;
    ctx->pc = 0x1A8080u;
label_1a8080:
    // 0x1a8080: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1a8080u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
    // 0x1a8084: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8088: 0x24e73280  addiu       $a3, $a3, 0x3280
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12928));
    // 0x1a808c: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a8090: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1a8094: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1a8094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a8098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a809c: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x1a809cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a80a0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1a80a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80a4: 0x240a1000  addiu       $t2, $zero, 0x1000
    ctx->pc = 0x1a80a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a80a8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1A80A8u;
    SET_GPR_U32(ctx, 31, 0x1A80B0u);
    ctx->pc = 0x1A80ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80A8u;
            // 0x1a80ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80B0u; }
        if (ctx->pc != 0x1A80B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80B0u; }
        if (ctx->pc != 0x1A80B0u) { return; }
    }
    ctx->pc = 0x1A80B0u;
label_1a80b0:
    // 0x1a80b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a80b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a80b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a80b8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a80b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a80bc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1a80bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1a80c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A80C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A80C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80C0u;
            // 0x1a80c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A80C8u;
    ctx->pc = 0x1a80c8u;
}
