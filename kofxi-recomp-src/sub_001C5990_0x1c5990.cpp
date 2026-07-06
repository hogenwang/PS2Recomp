#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5990
// Address: 0x1c5990 - 0x1c5b90
void sub_001C5990_0x1c5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5990_0x1c5990");
#endif

    switch (ctx->pc) {
        case 0x1c59d0u: goto label_1c59d0;
        case 0x1c59e0u: goto label_1c59e0;
        case 0x1c5a24u: goto label_1c5a24;
        case 0x1c5a3cu: goto label_1c5a3c;
        case 0x1c5a44u: goto label_1c5a44;
        case 0x1c5a7cu: goto label_1c5a7c;
        case 0x1c5a94u: goto label_1c5a94;
        case 0x1c5aa0u: goto label_1c5aa0;
        case 0x1c5ab8u: goto label_1c5ab8;
        case 0x1c5ac8u: goto label_1c5ac8;
        case 0x1c5afcu: goto label_1c5afc;
        case 0x1c5b08u: goto label_1c5b08;
        case 0x1c5b38u: goto label_1c5b38;
        case 0x1c5b48u: goto label_1c5b48;
        case 0x1c5b60u: goto label_1c5b60;
        case 0x1c5b80u: goto label_1c5b80;
        default: break;
    }

    ctx->pc = 0x1c5990u;

label_1c5990:
    // 0x1c5990: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1c5990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5994: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c5994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c599c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c59a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c59a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c59a4: 0x2447ef50  addiu       $a3, $v0, -0x10B0
    ctx->pc = 0x1c59a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
    // 0x1c59a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1c59ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c59acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c59b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c59b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1c59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1c59b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C59B8u;
    {
        const bool branch_taken_0x1c59b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59B8u;
            // 0x1c59bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59b8) {
            ctx->pc = 0x1C59D0u;
            goto label_1c59d0;
        }
    }
    ctx->pc = 0x1C59C0u;
    // 0x1c59c0: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x1c59c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1c59c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c59c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c59c8: 0x8071628  j           func_1C58A0
    ctx->pc = 0x1C59C8u;
    ctx->pc = 0x1C59CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59C8u;
            // 0x1c59cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C58A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C58A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C59D0u;
label_1c59d0:
    // 0x1c59d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c59d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c59d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C59D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C59D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59D4u;
            // 0x1c59d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C59DCu;
    // 0x1c59dc: 0x0  nop
    ctx->pc = 0x1c59dcu;
    // NOP
label_1c59e0:
    // 0x1c59e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c59e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c59e4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1c59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1c59e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c59e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c59ec: 0x24546b00  addiu       $s4, $v0, 0x6B00
    ctx->pc = 0x1c59ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x1c59f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c59f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c59f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c59f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c59f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c59f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c59fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c59fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c5a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c5a04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c5a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a08: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1c5a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1c5a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c5a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c5a18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c5a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c5a1c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A24u);
    ctx->pc = 0x1C5A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A1Cu;
            // 0x1c5a20: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A24u; }
        if (ctx->pc != 0x1C5A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A24u; }
        if (ctx->pc != 0x1C5A24u) { return; }
    }
    ctx->pc = 0x1C5A24u;
label_1c5a24:
    // 0x1c5a24: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c5a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c5a28: 0x8c62ef50  lw          $v0, -0x10B0($v1)
    ctx->pc = 0x1c5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963024)));
    // 0x1c5a2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5A2Cu;
    {
        const bool branch_taken_0x1c5a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a2c) {
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C5A34u;
    // 0x1c5a34: 0xc07165a  jal         func_1C5968
    ctx->pc = 0x1C5A34u;
    SET_GPR_U32(ctx, 31, 0x1C5A3Cu);
    ctx->pc = 0x1C5968u;
    if (runtime->hasFunction(0x1C5968u)) {
        auto targetFn = runtime->lookupFunction(0x1C5968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A3Cu; }
        if (ctx->pc != 0x1C5A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5968_0x1c5968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A3Cu; }
        if (ctx->pc != 0x1C5A3Cu) { return; }
    }
    ctx->pc = 0x1C5A3Cu;
label_1c5a3c:
    // 0x1c5a3c: 0xc0715dc  jal         func_1C5770
    ctx->pc = 0x1C5A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A44u);
    ctx->pc = 0x1C5770u;
    if (runtime->hasFunction(0x1C5770u)) {
        auto targetFn = runtime->lookupFunction(0x1C5770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A44u; }
        if (ctx->pc != 0x1C5A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5770_0x1c5770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A44u; }
        if (ctx->pc != 0x1C5A44u) { return; }
    }
    ctx->pc = 0x1C5A44u;
label_1c5a44:
    // 0x1c5a44: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C5A44u;
    {
        const bool branch_taken_0x1c5a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A44u;
            // 0x1c5a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a44) {
            ctx->pc = 0x1C5B18u;
            goto label_1c5b18;
        }
    }
    ctx->pc = 0x1C5A4Cu;
    // 0x1c5a4c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5A4Cu;
    {
        const bool branch_taken_0x1c5a4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A4Cu;
            // 0x1c5a50: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a4c) {
            ctx->pc = 0x1C5A60u;
            goto label_1c5a60;
        }
    }
    ctx->pc = 0x1C5A54u;
    // 0x1c5a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5A58u;
    {
        const bool branch_taken_0x1c5a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A58u;
            // 0x1c5a5c: 0x2484a518  addiu       $a0, $a0, -0x5AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a58) {
            ctx->pc = 0x1C5A74u;
            goto label_1c5a74;
        }
    }
    ctx->pc = 0x1C5A60u;
label_1c5a60:
    // 0x1c5a60: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5A60u;
    {
        const bool branch_taken_0x1c5a60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A60u;
            // 0x1c5a64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a60) {
            ctx->pc = 0x1C5A88u;
            goto label_1c5a88;
        }
    }
    ctx->pc = 0x1C5A68u;
    // 0x1c5a68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c5a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a70: 0x2484a548  addiu       $a0, $a0, -0x5AB8
    ctx->pc = 0x1c5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944072));
label_1c5a74:
    // 0x1c5a74: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C5A74u;
    SET_GPR_U32(ctx, 31, 0x1C5A7Cu);
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A7Cu; }
        if (ctx->pc != 0x1C5A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A7Cu; }
        if (ctx->pc != 0x1C5A7Cu) { return; }
    }
    ctx->pc = 0x1C5A7Cu;
label_1c5a7c:
    // 0x1c5a7c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C5A7Cu;
    {
        const bool branch_taken_0x1c5a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A7Cu;
            // 0x1c5a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a7c) {
            ctx->pc = 0x1C5B18u;
            goto label_1c5b18;
        }
    }
    ctx->pc = 0x1C5A84u;
    // 0x1c5a84: 0x0  nop
    ctx->pc = 0x1c5a84u;
    // NOP
label_1c5a88:
    // 0x1c5a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a8c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C5A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A94u);
    ctx->pc = 0x1C5A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A8Cu;
            // 0x1c5a90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A94u; }
        if (ctx->pc != 0x1C5A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A94u; }
        if (ctx->pc != 0x1C5A94u) { return; }
    }
    ctx->pc = 0x1C5A94u;
label_1c5a94:
    // 0x1c5a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a98: 0xc071516  jal         func_1C5458
    ctx->pc = 0x1C5A98u;
    SET_GPR_U32(ctx, 31, 0x1C5AA0u);
    ctx->pc = 0x1C5A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A98u;
            // 0x1c5a9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5458u;
    if (runtime->hasFunction(0x1C5458u)) {
        auto targetFn = runtime->lookupFunction(0x1C5458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AA0u; }
        if (ctx->pc != 0x1C5AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5458_0x1c5458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AA0u; }
        if (ctx->pc != 0x1C5AA0u) { return; }
    }
    ctx->pc = 0x1C5AA0u;
label_1c5aa0:
    // 0x1c5aa0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5AA0u;
    {
        const bool branch_taken_0x1c5aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5aa0) {
            ctx->pc = 0x1C5AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AA0u;
            // 0x1c5aa4: 0x26500009  addiu       $s0, $s2, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5AD0u;
            goto label_1c5ad0;
        }
    }
    ctx->pc = 0x1C5AA8u;
    // 0x1c5aa8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c5aac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c5aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ab0: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C5AB0u;
    SET_GPR_U32(ctx, 31, 0x1C5AB8u);
    ctx->pc = 0x1C5AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AB0u;
            // 0x1c5ab4: 0x2484a578  addiu       $a0, $a0, -0x5A88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AB8u; }
        if (ctx->pc != 0x1C5AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AB8u; }
        if (ctx->pc != 0x1C5AB8u) { return; }
    }
    ctx->pc = 0x1C5AB8u;
label_1c5ab8:
    // 0x1c5ab8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c5ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c5abc: 0x24a5a5a0  addiu       $a1, $a1, -0x5A60
    ctx->pc = 0x1c5abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944160));
    // 0x1c5ac0: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C5AC0u;
    SET_GPR_U32(ctx, 31, 0x1C5AC8u);
    ctx->pc = 0x1C5AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AC0u;
            // 0x1c5ac4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (runtime->hasFunction(0x1C41D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C41D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AC8u; }
        if (ctx->pc != 0x1C5AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C41D8_0x1c41d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AC8u; }
        if (ctx->pc != 0x1C5AC8u) { return; }
    }
    ctx->pc = 0x1C5AC8u;
label_1c5ac8:
    // 0x1c5ac8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5AC8u;
    {
        const bool branch_taken_0x1c5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AC8u;
            // 0x1c5acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ac8) {
            ctx->pc = 0x1C5B18u;
            goto label_1c5b18;
        }
    }
    ctx->pc = 0x1C5AD0u;
label_1c5ad0:
    // 0x1c5ad0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c5ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ad4: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x1c5ad4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1c5ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c5ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5adc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ae0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C5AE0u;
    {
        const bool branch_taken_0x1c5ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ae0) {
            ctx->pc = 0x1C5AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AE0u;
            // 0x1c5ae4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5AE8u;
            goto label_1c5ae8;
        }
    }
    ctx->pc = 0x1C5AE8u;
label_1c5ae8:
    // 0x1c5ae8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c5ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c5aec: 0x8812  mflo        $s1
    ctx->pc = 0x1c5aecu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1c5af0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c5af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5af4: 0xc0714ae  jal         func_1C52B8
    ctx->pc = 0x1C5AF4u;
    SET_GPR_U32(ctx, 31, 0x1C5AFCu);
    ctx->pc = 0x1C5AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5AF4u;
            // 0x1c5af8: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C52B8u;
    if (runtime->hasFunction(0x1C52B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C52B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AFCu; }
        if (ctx->pc != 0x1C5AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C52B8_0x1c52b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5AFCu; }
        if (ctx->pc != 0x1C5AFCu) { return; }
    }
    ctx->pc = 0x1C5AFCu;
label_1c5afc:
    // 0x1c5afc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b00: 0xc07156e  jal         func_1C55B8
    ctx->pc = 0x1C5B00u;
    SET_GPR_U32(ctx, 31, 0x1C5B08u);
    ctx->pc = 0x1C5B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B00u;
            // 0x1c5b04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C55B8u;
    if (runtime->hasFunction(0x1C55B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C55B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B08u; }
        if (ctx->pc != 0x1C5B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55B8_0x1c55b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B08u; }
        if (ctx->pc != 0x1C5B08u) { return; }
    }
    ctx->pc = 0x1C5B08u;
label_1c5b08:
    // 0x1c5b08: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C5B08u;
    {
        const bool branch_taken_0x1c5b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b08) {
            ctx->pc = 0x1C5B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B08u;
            // 0x1c5b0c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5B10u;
            goto label_1c5b10;
        }
    }
    ctx->pc = 0x1C5B10u;
label_1c5b10:
    // 0x1c5b10: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1c5b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c5b14: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c5b18:
    // 0x1c5b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5b24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c5b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c5b28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c5b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5b2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c5b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B30u;
            // 0x1c5b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5B38u;
label_1c5b38:
    // 0x1c5b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5b3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5b40: 0xc071664  jal         func_1C5990
    ctx->pc = 0x1C5B40u;
    SET_GPR_U32(ctx, 31, 0x1C5B48u);
    ctx->pc = 0x1C5B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B40u;
            // 0x1c5b44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5990u;
    goto label_1c5990;
    ctx->pc = 0x1C5B48u;
label_1c5b48:
    // 0x1c5b48: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c5b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5b50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c5b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c5b54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B54u;
            // 0x1c5b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5B5Cu;
    // 0x1c5b5c: 0x0  nop
    ctx->pc = 0x1c5b5cu;
    // NOP
label_1c5b60:
    // 0x1c5b60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5B60u;
    {
        const bool branch_taken_0x1c5b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B60u;
            // 0x1c5b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b60) {
            ctx->pc = 0x1C5B80u;
            goto label_1c5b80;
        }
    }
    ctx->pc = 0x1C5B68u;
    // 0x1c5b68: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5B68u;
    {
        const bool branch_taken_0x1c5b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B68u;
            // 0x1c5b6c: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b68) {
            ctx->pc = 0x1C5B84u;
            goto label_1c5b84;
        }
    }
    ctx->pc = 0x1C5B70u;
    // 0x1c5b70: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c5b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B74u;
            // 0x1c5b78: 0xac44ef60  sw          $a0, -0x10A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294963040), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5B7Cu;
    // 0x1c5b7c: 0x0  nop
    ctx->pc = 0x1c5b7cu;
    // NOP
label_1c5b80:
    // 0x1c5b80: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c5b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c5b84:
    // 0x1c5b84: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1c5b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1c5b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B88u;
            // 0x1c5b8c: 0xac62ef60  sw          $v0, -0x10A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5B90u;
    ctx->pc = 0x1c5b90u;
}
