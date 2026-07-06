#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9008
// Address: 0x1a9008 - 0x1a9268
void sub_001A9008_0x1a9008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9008_0x1a9008");
#endif

    switch (ctx->pc) {
        case 0x1a9050u: goto label_1a9050;
        case 0x1a9058u: goto label_1a9058;
        case 0x1a906cu: goto label_1a906c;
        case 0x1a9080u: goto label_1a9080;
        case 0x1a9098u: goto label_1a9098;
        case 0x1a90c8u: goto label_1a90c8;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a9128u: goto label_1a9128;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a9178u: goto label_1a9178;
        case 0x1a91b0u: goto label_1a91b0;
        case 0x1a91d8u: goto label_1a91d8;
        case 0x1a9240u: goto label_1a9240;
        default: break;
    }

    ctx->pc = 0x1a9008u;

    // 0x1a9008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a900c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a9010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a9010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9014: 0x8c62e150  lw          $v0, -0x1EB0($v1)
    ctx->pc = 0x1a9014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959440)));
    // 0x1a9018: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a9018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a901c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A901Cu;
    {
        const bool branch_taken_0x1a901c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A901Cu;
            // 0x1a9020: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a901c) {
            ctx->pc = 0x1A902Cu;
            goto label_1a902c;
        }
    }
    ctx->pc = 0x1A9024u;
    // 0x1a9024: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A9024u;
    {
        const bool branch_taken_0x1a9024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9024u;
            // 0x1a9028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9024) {
            ctx->pc = 0x1A9084u;
            goto label_1a9084;
        }
    }
    ctx->pc = 0x1A902Cu;
label_1a902c:
    // 0x1a902c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A902Cu;
    {
        const bool branch_taken_0x1a902c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a902c) {
            ctx->pc = 0x1A9044u;
            goto label_1a9044;
        }
    }
    ctx->pc = 0x1A9034u;
    // 0x1a9034: 0x1090000a  beq         $a0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9034u;
    {
        const bool branch_taken_0x1a9034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A9038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9034u;
            // 0x1a9038: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9034) {
            ctx->pc = 0x1A9060u;
            goto label_1a9060;
        }
    }
    ctx->pc = 0x1A903Cu;
    // 0x1a903c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A903Cu;
    {
        const bool branch_taken_0x1a903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A903Cu;
            // 0x1a9040: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a903c) {
            ctx->pc = 0x1A9088u;
            goto label_1a9088;
        }
    }
    ctx->pc = 0x1A9044u;
label_1a9044:
    // 0x1a9044: 0x8c64e150  lw          $a0, -0x1EB0($v1)
    ctx->pc = 0x1a9044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959440)));
    // 0x1a9048: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1A9048u;
    SET_GPR_U32(ctx, 31, 0x1A9050u);
    ctx->pc = 0x1A904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9048u;
            // 0x1a904c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9050u; }
        if (ctx->pc != 0x1A9050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9050u; }
        if (ctx->pc != 0x1A9050u) { return; }
    }
    ctx->pc = 0x1A9050u;
label_1a9050:
    // 0x1a9050: 0xc06a3c8  jal         func_1A8F20
    ctx->pc = 0x1A9050u;
    SET_GPR_U32(ctx, 31, 0x1A9058u);
    ctx->pc = 0x1A8F20u;
    if (runtime->hasFunction(0x1A8F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A8F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9058u; }
        if (ctx->pc != 0x1A9058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8F20_0x1a8f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9058u; }
        if (ctx->pc != 0x1A9058u) { return; }
    }
    ctx->pc = 0x1A9058u;
label_1a9058:
    // 0x1a9058: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A9058u;
    {
        const bool branch_taken_0x1a9058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A905Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9058u;
            // 0x1a905c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9058) {
            ctx->pc = 0x1A9084u;
            goto label_1a9084;
        }
    }
    ctx->pc = 0x1A9060u;
label_1a9060:
    // 0x1a9060: 0x8c64e150  lw          $a0, -0x1EB0($v1)
    ctx->pc = 0x1a9060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959440)));
    // 0x1a9064: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x1A9064u;
    SET_GPR_U32(ctx, 31, 0x1A906Cu);
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A906Cu; }
        if (ctx->pc != 0x1A906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A906Cu; }
        if (ctx->pc != 0x1A906Cu) { return; }
    }
    ctx->pc = 0x1A906Cu;
label_1a906c:
    // 0x1a906c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9070: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9070u;
    {
        const bool branch_taken_0x1a9070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A9074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9070u;
            // 0x1a9074: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9070) {
            ctx->pc = 0x1A9084u;
            goto label_1a9084;
        }
    }
    ctx->pc = 0x1A9078u;
    // 0x1a9078: 0xc06a3c8  jal         func_1A8F20
    ctx->pc = 0x1A9078u;
    SET_GPR_U32(ctx, 31, 0x1A9080u);
    ctx->pc = 0x1A907Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9078u;
            // 0x1a907c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F20u;
    if (runtime->hasFunction(0x1A8F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A8F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9080u; }
        if (ctx->pc != 0x1A9080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8F20_0x1a8f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9080u; }
        if (ctx->pc != 0x1A9080u) { return; }
    }
    ctx->pc = 0x1A9080u;
label_1a9080:
    // 0x1a9080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9084:
    // 0x1a9084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a9084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9088:
    // 0x1a9088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a908c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A908Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A908Cu;
            // 0x1a9090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9094u;
    // 0x1a9094: 0x0  nop
    ctx->pc = 0x1a9094u;
    // NOP
label_1a9098:
    // 0x1a9098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a909c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a90a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a90a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a90a4: 0x2450e158  addiu       $s0, $v0, -0x1EA8
    ctx->pc = 0x1a90a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
    // 0x1a90a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a90ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A90ACu;
    {
        const bool branch_taken_0x1a90ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A90B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90ACu;
            // 0x1a90b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90ac) {
            ctx->pc = 0x1A90CCu;
            goto label_1a90cc;
        }
    }
    ctx->pc = 0x1A90B4u;
    // 0x1a90b4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a90b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a90b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90bc: 0x2484e160  addiu       $a0, $a0, -0x1EA0
    ctx->pc = 0x1a90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959456));
    // 0x1a90c0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1A90C0u;
    SET_GPR_U32(ctx, 31, 0x1A90C8u);
    ctx->pc = 0x1A90C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90C0u;
            // 0x1a90c4: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90C8u; }
        if (ctx->pc != 0x1A90C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90C8u; }
        if (ctx->pc != 0x1A90C8u) { return; }
    }
    ctx->pc = 0x1A90C8u;
label_1a90c8:
    // 0x1a90c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a90c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a90cc:
    // 0x1a90cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a90d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a90d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a90d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a90d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a90d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a90dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A90DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A90E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90DCu;
            // 0x1a90e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A90E4u;
    // 0x1a90e4: 0x0  nop
    ctx->pc = 0x1a90e4u;
    // NOP
label_1a90e8:
    // 0x1a90e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a90e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a90ec: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a90f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a90f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a90f4: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x1a90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
    // 0x1a90f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a90f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a90fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9100: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9100u;
    {
        const bool branch_taken_0x1a9100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9100u;
            // 0x1a9104: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9100) {
            ctx->pc = 0x1A9128u;
            goto label_1a9128;
        }
    }
    ctx->pc = 0x1A9108u;
    // 0x1a9108: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a9108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1a910c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a910cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9114: 0x2484e160  addiu       $a0, $a0, -0x1EA0
    ctx->pc = 0x1a9114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959456));
    // 0x1a9118: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x1a9118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1a911c: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1A911Cu;
    ctx->pc = 0x1A9120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A911Cu;
            // 0x1a9120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A9124u;
    // 0x1a9124: 0x0  nop
    ctx->pc = 0x1a9124u;
    // NOP
label_1a9128:
    // 0x1a9128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a912c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A912Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A912Cu;
            // 0x1a9130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9134u;
    // 0x1a9134: 0x0  nop
    ctx->pc = 0x1a9134u;
    // NOP
label_1a9138:
    // 0x1a9138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a913c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a9140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a9144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a9148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a914c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a9150: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a9150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9154: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a9154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a9158: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a9158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a915c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a915cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1a9160: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a9160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a9164: 0x2683e160  addiu       $v1, $s4, -0x1EA0
    ctx->pc = 0x1a9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959456));
    // 0x1a9168: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1a9168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a916c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A916Cu;
    {
        const bool branch_taken_0x1a916c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A916Cu;
            // 0x1a9170: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a916c) {
            ctx->pc = 0x1A919Cu;
            goto label_1a919c;
        }
    }
    ctx->pc = 0x1A9174u;
    // 0x1a9174: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a9178:
    // 0x1a9178: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1a9178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a917c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A917Cu;
    {
        const bool branch_taken_0x1a917c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A917Cu;
            // 0x1a9180: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a917c) {
            ctx->pc = 0x1A919Cu;
            goto label_1a919c;
        }
    }
    ctx->pc = 0x1A9184u;
    // 0x1a9184: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1a9184u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9188: 0x0  nop
    ctx->pc = 0x1a9188u;
    // NOP
    // 0x1a918c: 0x0  nop
    ctx->pc = 0x1a918cu;
    // NOP
    // 0x1a9190: 0x0  nop
    ctx->pc = 0x1a9190u;
    // NOP
    // 0x1a9194: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A9194u;
    {
        const bool branch_taken_0x1a9194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9194) {
            ctx->pc = 0x1A9198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9194u;
            // 0x1a9198: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9178;
        }
    }
    ctx->pc = 0x1A919Cu;
label_1a919c:
    // 0x1a919c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a91a0: 0x12030028  beq         $s0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A91A0u;
    {
        const bool branch_taken_0x1a91a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A91A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91A0u;
            // 0x1a91a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91a0) {
            ctx->pc = 0x1A9244u;
            goto label_1a9244;
        }
    }
    ctx->pc = 0x1A91A8u;
    // 0x1a91a8: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1A91A8u;
    SET_GPR_U32(ctx, 31, 0x1A91B0u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91B0u; }
        if (ctx->pc != 0x1A91B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91B0u; }
        if (ctx->pc != 0x1A91B0u) { return; }
    }
    ctx->pc = 0x1A91B0u;
label_1a91b0:
    // 0x1a91b0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a91b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a91b8: 0x2683e160  addiu       $v1, $s4, -0x1EA0
    ctx->pc = 0x1a91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959456));
    // 0x1a91bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a91c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a91c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a91c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a91c8: 0x1a200010  blez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A91C8u;
    {
        const bool branch_taken_0x1a91c8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1A91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91C8u;
            // 0x1a91cc: 0xa2110002  sb          $s1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a91c8) {
            ctx->pc = 0x1A920Cu;
            goto label_1a920c;
        }
    }
    ctx->pc = 0x1A91D0u;
    // 0x1a91d0: 0x2609000c  addiu       $t1, $s0, 0xC
    ctx->pc = 0x1a91d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1a91d4: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x1a91d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a91d8:
    // 0x1a91d8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1a91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a91dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a91dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a91e0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1a91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a91e4: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x1a91e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a91e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a91ec: 0x111282a  slt         $a1, $t0, $s1
    ctx->pc = 0x1a91ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a91f0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1a91f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1a91f4: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1a91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1a91f8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1a91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1a91fc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1a91fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a9200: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a9204: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A9204u;
    {
        const bool branch_taken_0x1a9204 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9204u;
            // 0x1a9208: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9204) {
            ctx->pc = 0x1A91D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a91d8;
        }
    }
    ctx->pc = 0x1A920Cu;
label_1a920c:
    // 0x1a920c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a920cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a9210: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1a9210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1a9214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a9214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9218: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x1a9218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x1a921c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a921cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9220: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a9220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a9224: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1a9224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1a9228: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1a9228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1a922c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1a922cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a9230: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1a9230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9234: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1a9234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a9238: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1A9238u;
    SET_GPR_U32(ctx, 31, 0x1A9240u);
    ctx->pc = 0x1A923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9238u;
            // 0x1a923c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9240u; }
        if (ctx->pc != 0x1A9240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9240u; }
        if (ctx->pc != 0x1A9240u) { return; }
    }
    ctx->pc = 0x1A9240u;
label_1a9240:
    // 0x1a9240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9244:
    // 0x1a9244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a9244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a9248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a924c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a924cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9250: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a9250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9254: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a9254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9258: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a9258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a925c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A925Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A925Cu;
            // 0x1a9260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9264u;
    // 0x1a9264: 0x0  nop
    ctx->pc = 0x1a9264u;
    // NOP
    ctx->pc = 0x1a9268u;
}
