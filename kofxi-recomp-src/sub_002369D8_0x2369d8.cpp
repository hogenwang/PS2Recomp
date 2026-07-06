#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002369D8
// Address: 0x2369d8 - 0x236b50
void sub_002369D8_0x2369d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002369D8_0x2369d8");
#endif

    switch (ctx->pc) {
        case 0x2369fcu: goto label_2369fc;
        case 0x236a14u: goto label_236a14;
        case 0x236a28u: goto label_236a28;
        case 0x236a50u: goto label_236a50;
        case 0x236a58u: goto label_236a58;
        case 0x236a6cu: goto label_236a6c;
        case 0x236a84u: goto label_236a84;
        case 0x236aa0u: goto label_236aa0;
        case 0x236ab0u: goto label_236ab0;
        case 0x236ac4u: goto label_236ac4;
        case 0x236ad8u: goto label_236ad8;
        case 0x236ae8u: goto label_236ae8;
        case 0x236b30u: goto label_236b30;
        default: break;
    }

    ctx->pc = 0x2369d8u;

    // 0x2369d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2369d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2369dc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2369dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2369e0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2369e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2369e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2369e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369e8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2369e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2369ec: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2369ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2369f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2369f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2369f4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2369F4u;
    SET_GPR_U32(ctx, 31, 0x2369FCu);
    ctx->pc = 0x2369F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2369F4u;
            // 0x2369f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369FCu; }
        if (ctx->pc != 0x2369FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369FCu; }
        if (ctx->pc != 0x2369FCu) { return; }
    }
    ctx->pc = 0x2369FCu;
label_2369fc:
    // 0x2369fc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2369fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236a00: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x236a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x236a04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x236a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a0c: 0xc08da36  jal         func_2368D8
    ctx->pc = 0x236A0Cu;
    SET_GPR_U32(ctx, 31, 0x236A14u);
    ctx->pc = 0x236A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A0Cu;
            // 0x236a10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2368D8u;
    if (runtime->hasFunction(0x2368D8u)) {
        auto targetFn = runtime->lookupFunction(0x2368D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A14u; }
        if (ctx->pc != 0x236A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002368D8_0x2368d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A14u; }
        if (ctx->pc != 0x236A14u) { return; }
    }
    ctx->pc = 0x236A14u;
label_236a14:
    // 0x236a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a18: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236A18u;
    {
        const bool branch_taken_0x236a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A18u;
            // 0x236a1c: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a18) {
            ctx->pc = 0x236A30u;
            goto label_236a30;
        }
    }
    ctx->pc = 0x236A20u;
    // 0x236a20: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236A20u;
    SET_GPR_U32(ctx, 31, 0x236A28u);
    ctx->pc = 0x236A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A20u;
            // 0x236a24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A28u; }
        if (ctx->pc != 0x236A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A28u; }
        if (ctx->pc != 0x236A28u) { return; }
    }
    ctx->pc = 0x236A28u;
label_236a28:
    // 0x236a28: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x236A28u;
    {
        const bool branch_taken_0x236a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A28u;
            // 0x236a2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a28) {
            ctx->pc = 0x236B34u;
            goto label_236b34;
        }
    }
    ctx->pc = 0x236A30u;
label_236a30:
    // 0x236a30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x236a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x236a34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236A34u;
    {
        const bool branch_taken_0x236a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A34u;
            // 0x236a38: 0x93a20010  lbu         $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a34) {
            ctx->pc = 0x236A48u;
            goto label_236a48;
        }
    }
    ctx->pc = 0x236A3Cu;
    // 0x236a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x236a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x236a40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x236A40u;
    {
        const bool branch_taken_0x236a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236a40) {
            ctx->pc = 0x236A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236A40u;
            // 0x236a44: 0x8e300100  lw          $s0, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236A58u;
            goto label_236a58;
        }
    }
    ctx->pc = 0x236A48u;
label_236a48:
    // 0x236a48: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236A48u;
    SET_GPR_U32(ctx, 31, 0x236A50u);
    ctx->pc = 0x236A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A48u;
            // 0x236a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A50u; }
        if (ctx->pc != 0x236A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A50u; }
        if (ctx->pc != 0x236A50u) { return; }
    }
    ctx->pc = 0x236A50u;
label_236a50:
    // 0x236a50: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x236A50u;
    {
        const bool branch_taken_0x236a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A50u;
            // 0x236a54: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a50) {
            ctx->pc = 0x236B34u;
            goto label_236b34;
        }
    }
    ctx->pc = 0x236A58u;
label_236a58:
    // 0x236a58: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x236A58u;
    {
        const bool branch_taken_0x236a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A58u;
            // 0x236a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a58) {
            ctx->pc = 0x236AA8u;
            goto label_236aa8;
        }
    }
    ctx->pc = 0x236A60u;
    // 0x236a60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a64: 0xc048c5e  jal         func_123178
    ctx->pc = 0x236A64u;
    SET_GPR_U32(ctx, 31, 0x236A6Cu);
    ctx->pc = 0x236A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A64u;
            // 0x236a68: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A6Cu; }
        if (ctx->pc != 0x236A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A6Cu; }
        if (ctx->pc != 0x236A6Cu) { return; }
    }
    ctx->pc = 0x236A6Cu;
label_236a6c:
    // 0x236a6c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x236A6Cu;
    {
        const bool branch_taken_0x236a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236a6c) {
            ctx->pc = 0x236A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236A6Cu;
            // 0x236a70: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236a58;
        }
    }
    ctx->pc = 0x236A74u;
    // 0x236a74: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x236a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x236a78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x236a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a7c: 0xc048c5e  jal         func_123178
    ctx->pc = 0x236A7Cu;
    SET_GPR_U32(ctx, 31, 0x236A84u);
    ctx->pc = 0x236A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A7Cu;
            // 0x236a80: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A84u; }
        if (ctx->pc != 0x236A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A84u; }
        if (ctx->pc != 0x236A84u) { return; }
    }
    ctx->pc = 0x236A84u;
label_236a84:
    // 0x236a84: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x236A84u;
    {
        const bool branch_taken_0x236a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236a84) {
            ctx->pc = 0x236A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x236A84u;
            // 0x236a88: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x236A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_236a58;
        }
    }
    ctx->pc = 0x236A8Cu;
    // 0x236a8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x236a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x236a90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x236a98: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236A98u;
    SET_GPR_U32(ctx, 31, 0x236AA0u);
    ctx->pc = 0x236A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236A98u;
            // 0x236a9c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AA0u; }
        if (ctx->pc != 0x236AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AA0u; }
        if (ctx->pc != 0x236AA0u) { return; }
    }
    ctx->pc = 0x236AA0u;
label_236aa0:
    // 0x236aa0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x236AA0u;
    {
        const bool branch_taken_0x236aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236AA0u;
            // 0x236aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236aa0) {
            ctx->pc = 0x236B34u;
            goto label_236b34;
        }
    }
    ctx->pc = 0x236AA8u;
label_236aa8:
    // 0x236aa8: 0xc098552  jal         func_261548
    ctx->pc = 0x236AA8u;
    SET_GPR_U32(ctx, 31, 0x236AB0u);
    ctx->pc = 0x236AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236AA8u;
            // 0x236aac: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AB0u; }
        if (ctx->pc != 0x236AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AB0u; }
        if (ctx->pc != 0x236AB0u) { return; }
    }
    ctx->pc = 0x236AB0u;
label_236ab0:
    // 0x236ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ab4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236AB4u;
    {
        const bool branch_taken_0x236ab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x236AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236AB4u;
            // 0x236ab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ab4) {
            ctx->pc = 0x236ACCu;
            goto label_236acc;
        }
    }
    ctx->pc = 0x236ABCu;
    // 0x236abc: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236ABCu;
    SET_GPR_U32(ctx, 31, 0x236AC4u);
    ctx->pc = 0x236AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236ABCu;
            // 0x236ac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AC4u; }
        if (ctx->pc != 0x236AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AC4u; }
        if (ctx->pc != 0x236AC4u) { return; }
    }
    ctx->pc = 0x236AC4u;
label_236ac4:
    // 0x236ac4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x236AC4u;
    {
        const bool branch_taken_0x236ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236AC4u;
            // 0x236ac8: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ac4) {
            ctx->pc = 0x236B34u;
            goto label_236b34;
        }
    }
    ctx->pc = 0x236ACCu;
label_236acc:
    // 0x236acc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x236accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ad0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x236AD0u;
    SET_GPR_U32(ctx, 31, 0x236AD8u);
    ctx->pc = 0x236AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236AD0u;
            // 0x236ad4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AD8u; }
        if (ctx->pc != 0x236AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AD8u; }
        if (ctx->pc != 0x236AD8u) { return; }
    }
    ctx->pc = 0x236AD8u;
label_236ad8:
    // 0x236ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x236ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236adc: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x236adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x236ae0: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x236AE0u;
    SET_GPR_U32(ctx, 31, 0x236AE8u);
    ctx->pc = 0x236AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236AE0u;
            // 0x236ae4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AE8u; }
        if (ctx->pc != 0x236AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236AE8u; }
        if (ctx->pc != 0x236AE8u) { return; }
    }
    ctx->pc = 0x236AE8u;
label_236ae8:
    // 0x236ae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x236ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236aec: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x236aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x236af0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x236af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x236af4: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x236af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x236af8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236AF8u;
    {
        const bool branch_taken_0x236af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236AF8u;
            // 0x236afc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236af8) {
            ctx->pc = 0x236B10u;
            goto label_236b10;
        }
    }
    ctx->pc = 0x236B00u;
    // 0x236b00: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x236b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x236b04: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x236b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x236b08: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x236b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x236b0c: 0x0  nop
    ctx->pc = 0x236b0cu;
    // NOP
label_236b10:
    // 0x236b10: 0xae300100  sw          $s0, 0x100($s1)
    ctx->pc = 0x236b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 16));
    // 0x236b14: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x236b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x236b18: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x236b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x236b1c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x236b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x236b20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x236b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x236b24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b28: 0xc08c698  jal         func_231A60
    ctx->pc = 0x236B28u;
    SET_GPR_U32(ctx, 31, 0x236B30u);
    ctx->pc = 0x236B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236B28u;
            // 0x236b2c: 0xae230104  sw          $v1, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B30u; }
        if (ctx->pc != 0x236B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B30u; }
        if (ctx->pc != 0x236B30u) { return; }
    }
    ctx->pc = 0x236B30u;
label_236b30:
    // 0x236b30: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x236b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_236b34:
    // 0x236b34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x236b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x236b38: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x236b38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236b3c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x236b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236b40: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x236b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236b44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x236b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236b48: 0x3e00008  jr          $ra
    ctx->pc = 0x236B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236B48u;
            // 0x236b4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236B50u;
    ctx->pc = 0x236b50u;
}
