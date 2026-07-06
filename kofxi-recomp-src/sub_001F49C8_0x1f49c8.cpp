#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F49C8
// Address: 0x1f49c8 - 0x1f4b28
void sub_001F49C8_0x1f49c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F49C8_0x1f49c8");
#endif

    switch (ctx->pc) {
        case 0x1f49e0u: goto label_1f49e0;
        case 0x1f4a00u: goto label_1f4a00;
        case 0x1f4a10u: goto label_1f4a10;
        case 0x1f4a18u: goto label_1f4a18;
        case 0x1f4a20u: goto label_1f4a20;
        case 0x1f4a28u: goto label_1f4a28;
        case 0x1f4a48u: goto label_1f4a48;
        case 0x1f4a68u: goto label_1f4a68;
        case 0x1f4a98u: goto label_1f4a98;
        case 0x1f4ab4u: goto label_1f4ab4;
        case 0x1f4ad4u: goto label_1f4ad4;
        case 0x1f4afcu: goto label_1f4afc;
        default: break;
    }

    ctx->pc = 0x1f49c8u;

    // 0x1f49c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f49c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f49cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f49ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f49d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f49d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f49d4: 0x8077062  j           func_1DC188
    ctx->pc = 0x1F49D4u;
    ctx->pc = 0x1F49D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49D4u;
            // 0x1f49d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC188u;
    {
        auto targetFn = runtime->lookupFunction(0x1DC188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F49DCu;
    // 0x1f49dc: 0x0  nop
    ctx->pc = 0x1f49dcu;
    // NOP
label_1f49e0:
    // 0x1f49e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f49e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f49e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f49e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f49e8: 0x8c832018  lw          $v1, 0x2018($a0)
    ctx->pc = 0x1f49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f49ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f49f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F49F0u;
    {
        const bool branch_taken_0x1f49f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F49F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F49F0u;
            // 0x1f49f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f49f0) {
            ctx->pc = 0x1F4A04u;
            goto label_1f4a04;
        }
    }
    ctx->pc = 0x1F49F8u;
    // 0x1f49f8: 0xc076734  jal         func_1D9CD0
    ctx->pc = 0x1F49F8u;
    SET_GPR_U32(ctx, 31, 0x1F4A00u);
    ctx->pc = 0x1D9CD0u;
    if (runtime->hasFunction(0x1D9CD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A00u; }
        if (ctx->pc != 0x1F4A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9CD0_0x1d9cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A00u; }
        if (ctx->pc != 0x1F4A00u) { return; }
    }
    ctx->pc = 0x1F4A00u;
label_1f4a00:
    // 0x1f4a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a04:
    // 0x1f4a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A08u;
            // 0x1f4a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4A10u;
label_1f4a10:
    // 0x1f4a10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A10u;
            // 0x1f4a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4A18u;
label_1f4a18:
    // 0x1f4a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A18u;
            // 0x1f4a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4A20u;
label_1f4a20:
    // 0x1f4a20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A20u;
            // 0x1f4a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4A28u;
label_1f4a28:
    // 0x1f4a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4a2c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4a34: 0x34a50f0d  ori         $a1, $a1, 0xF0D
    ctx->pc = 0x1f4a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3853);
    // 0x1f4a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4a3c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F4A3Cu;
    ctx->pc = 0x1F4A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A3Cu;
            // 0x1f4a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F4A44u;
    // 0x1f4a44: 0x0  nop
    ctx->pc = 0x1f4a44u;
    // NOP
label_1f4a48:
    // 0x1f4a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4a4c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f4a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4a54: 0x34a50f0d  ori         $a1, $a1, 0xF0D
    ctx->pc = 0x1f4a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3853);
    // 0x1f4a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4a5c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F4A5Cu;
    ctx->pc = 0x1F4A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A5Cu;
            // 0x1f4a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F4A64u;
    // 0x1f4a64: 0x0  nop
    ctx->pc = 0x1f4a64u;
    // NOP
label_1f4a68:
    // 0x1f4a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4a70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4a78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f4a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f4a80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f4a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f4a84: 0x26130d88  addiu       $s3, $s0, 0xD88
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1f4a88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f4a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f4a8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f4a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f4a90: 0xc07d518  jal         func_1F5460
    ctx->pc = 0x1F4A90u;
    SET_GPR_U32(ctx, 31, 0x1F4A98u);
    ctx->pc = 0x1F4A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A90u;
            // 0x1f4a94: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5460u;
    if (runtime->hasFunction(0x1F5460u)) {
        auto targetFn = runtime->lookupFunction(0x1F5460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A98u; }
        if (ctx->pc != 0x1F4A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5460_0x1f5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A98u; }
        if (ctx->pc != 0x1F4A98u) { return; }
    }
    ctx->pc = 0x1F4A98u;
label_1f4a98:
    // 0x1f4a98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4aa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4aa4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1F4AA4u;
    {
        const bool branch_taken_0x1f4aa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AA4u;
            // 0x1f4aa8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4aa4) {
            ctx->pc = 0x1F4ADCu;
            goto label_1f4adc;
        }
    }
    ctx->pc = 0x1F4AACu;
    // 0x1f4aac: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x1F4AACu;
    SET_GPR_U32(ctx, 31, 0x1F4AB4u);
    ctx->pc = 0x1F4B28u;
    if (runtime->hasFunction(0x1F4B28u)) {
        auto targetFn = runtime->lookupFunction(0x1F4B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AB4u; }
        if (ctx->pc != 0x1F4AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B28_0x1f4b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AB4u; }
        if (ctx->pc != 0x1F4AB4u) { return; }
    }
    ctx->pc = 0x1F4AB4u;
label_1f4ab4:
    // 0x1f4ab4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4abc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1f4abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f4ac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ac4: 0xae66027c  sw          $a2, 0x27C($s3)
    ctx->pc = 0x1f4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 636), GPR_U32(ctx, 6));
    // 0x1f4ac8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1f4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f4acc: 0xc07f2ea  jal         func_1FCBA8
    ctx->pc = 0x1F4ACCu;
    SET_GPR_U32(ctx, 31, 0x1F4AD4u);
    ctx->pc = 0x1F4AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4ACCu;
            // 0x1f4ad0: 0xae630280  sw          $v1, 0x280($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBA8u;
    if (runtime->hasFunction(0x1FCBA8u)) {
        auto targetFn = runtime->lookupFunction(0x1FCBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AD4u; }
        if (ctx->pc != 0x1F4AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCBA8_0x1fcba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AD4u; }
        if (ctx->pc != 0x1F4AD4u) { return; }
    }
    ctx->pc = 0x1F4AD4u;
label_1f4ad4:
    // 0x1f4ad4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4AD4u;
    {
        const bool branch_taken_0x1f4ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AD4u;
            // 0x1f4ad8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ad4) {
            ctx->pc = 0x1F4AE8u;
            goto label_1f4ae8;
        }
    }
    ctx->pc = 0x1F4ADCu;
label_1f4adc:
    // 0x1f4adc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F4ADCu;
    {
        const bool branch_taken_0x1f4adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4ADCu;
            // 0x1f4ae0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4adc) {
            ctx->pc = 0x1F4B08u;
            goto label_1f4b08;
        }
    }
    ctx->pc = 0x1F4AE4u;
    // 0x1f4ae4: 0x0  nop
    ctx->pc = 0x1f4ae4u;
    // NOP
label_1f4ae8:
    // 0x1f4ae8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1f4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1f4aec: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4AECu;
    {
        const bool branch_taken_0x1f4aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4aec) {
            ctx->pc = 0x1F4AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AECu;
            // 0x1f4af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B08u;
            goto label_1f4b08;
        }
    }
    ctx->pc = 0x1F4AF4u;
    // 0x1f4af4: 0xc07d63e  jal         func_1F58F8
    ctx->pc = 0x1F4AF4u;
    SET_GPR_U32(ctx, 31, 0x1F4AFCu);
    ctx->pc = 0x1F4AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AF4u;
            // 0x1f4af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F58F8u;
    if (runtime->hasFunction(0x1F58F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F58F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AFCu; }
        if (ctx->pc != 0x1F4AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F58F8_0x1f58f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4AFCu; }
        if (ctx->pc != 0x1F4AFCu) { return; }
    }
    ctx->pc = 0x1F4AFCu;
label_1f4afc:
    // 0x1f4afc: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x1f4afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x1f4b00: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1f4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1f4b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b08:
    // 0x1f4b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4b10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f4b14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4b18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f4b18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4b1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f4b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f4b20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B20u;
            // 0x1f4b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4B28u;
    ctx->pc = 0x1f4b28u;
}
