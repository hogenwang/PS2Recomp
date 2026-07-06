#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8AD8
// Address: 0x2c8ad8 - 0x2c8bb0
void sub_002C8AD8_0x2c8ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8AD8_0x2c8ad8");
#endif

    switch (ctx->pc) {
        case 0x2c8ad8u: goto label_2c8ad8;
        case 0x2c8adcu: goto label_2c8adc;
        case 0x2c8ae0u: goto label_2c8ae0;
        case 0x2c8ae4u: goto label_2c8ae4;
        case 0x2c8ae8u: goto label_2c8ae8;
        case 0x2c8aecu: goto label_2c8aec;
        case 0x2c8af0u: goto label_2c8af0;
        case 0x2c8af4u: goto label_2c8af4;
        case 0x2c8af8u: goto label_2c8af8;
        case 0x2c8afcu: goto label_2c8afc;
        case 0x2c8b00u: goto label_2c8b00;
        case 0x2c8b04u: goto label_2c8b04;
        case 0x2c8b08u: goto label_2c8b08;
        case 0x2c8b0cu: goto label_2c8b0c;
        case 0x2c8b10u: goto label_2c8b10;
        case 0x2c8b14u: goto label_2c8b14;
        case 0x2c8b18u: goto label_2c8b18;
        case 0x2c8b1cu: goto label_2c8b1c;
        case 0x2c8b20u: goto label_2c8b20;
        case 0x2c8b24u: goto label_2c8b24;
        case 0x2c8b28u: goto label_2c8b28;
        case 0x2c8b2cu: goto label_2c8b2c;
        case 0x2c8b30u: goto label_2c8b30;
        case 0x2c8b34u: goto label_2c8b34;
        case 0x2c8b38u: goto label_2c8b38;
        case 0x2c8b3cu: goto label_2c8b3c;
        case 0x2c8b40u: goto label_2c8b40;
        case 0x2c8b44u: goto label_2c8b44;
        case 0x2c8b48u: goto label_2c8b48;
        case 0x2c8b4cu: goto label_2c8b4c;
        case 0x2c8b50u: goto label_2c8b50;
        case 0x2c8b54u: goto label_2c8b54;
        case 0x2c8b58u: goto label_2c8b58;
        case 0x2c8b5cu: goto label_2c8b5c;
        case 0x2c8b60u: goto label_2c8b60;
        case 0x2c8b64u: goto label_2c8b64;
        case 0x2c8b68u: goto label_2c8b68;
        case 0x2c8b6cu: goto label_2c8b6c;
        case 0x2c8b70u: goto label_2c8b70;
        case 0x2c8b74u: goto label_2c8b74;
        case 0x2c8b78u: goto label_2c8b78;
        case 0x2c8b7cu: goto label_2c8b7c;
        case 0x2c8b80u: goto label_2c8b80;
        case 0x2c8b84u: goto label_2c8b84;
        case 0x2c8b88u: goto label_2c8b88;
        case 0x2c8b8cu: goto label_2c8b8c;
        case 0x2c8b90u: goto label_2c8b90;
        case 0x2c8b94u: goto label_2c8b94;
        case 0x2c8b98u: goto label_2c8b98;
        case 0x2c8b9cu: goto label_2c8b9c;
        case 0x2c8ba0u: goto label_2c8ba0;
        case 0x2c8ba4u: goto label_2c8ba4;
        case 0x2c8ba8u: goto label_2c8ba8;
        case 0x2c8bacu: goto label_2c8bac;
        default: break;
    }

    ctx->pc = 0x2c8ad8u;

label_2c8ad8:
    // 0x2c8ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8adc:
    // 0x2c8adc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c8adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c8ae0:
    // 0x2c8ae0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c8ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ae4:
    // 0x2c8ae4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c8ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8ae8:
    // 0x2c8ae8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c8ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8aec:
    // 0x2c8aec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c8af0:
    // 0x2c8af0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c8af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c8af4:
    // 0x2c8af4: 0xc0b22ec  jal         func_2C8BB0
label_2c8af8:
    if (ctx->pc == 0x2C8AF8u) {
        ctx->pc = 0x2C8AF8u;
            // 0x2c8af8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8AFCu;
        goto label_2c8afc;
    }
    ctx->pc = 0x2C8AF4u;
    SET_GPR_U32(ctx, 31, 0x2C8AFCu);
    ctx->pc = 0x2C8AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AF4u;
            // 0x2c8af8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (runtime->hasFunction(0x2C8BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AFCu; }
        if (ctx->pc != 0x2C8AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8BB0_0x2c8bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8AFCu; }
        if (ctx->pc != 0x2C8AFCu) { return; }
    }
    ctx->pc = 0x2C8AFCu;
label_2c8afc:
    // 0x2c8afc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2c8b00:
    if (ctx->pc == 0x2C8B00u) {
        ctx->pc = 0x2C8B00u;
            // 0x2c8b00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B04u;
        goto label_2c8b04;
    }
    ctx->pc = 0x2C8AFCu;
    {
        const bool branch_taken_0x2c8afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8AFCu;
            // 0x2c8b00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8afc) {
            ctx->pc = 0x2C8B2Cu;
            goto label_2c8b2c;
        }
    }
    ctx->pc = 0x2C8B04u;
label_2c8b04:
    // 0x2c8b04: 0x200f809  jalr        $s0
label_2c8b08:
    if (ctx->pc == 0x2C8B08u) {
        ctx->pc = 0x2C8B0Cu;
        goto label_2c8b0c;
    }
    ctx->pc = 0x2C8B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2C8B0Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8B0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B0Cu; }
            if (ctx->pc != 0x2C8B0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C8B0Cu;
label_2c8b0c:
    // 0x2c8b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c8b10:
    if (ctx->pc == 0x2C8B10u) {
        ctx->pc = 0x2C8B10u;
            // 0x2c8b10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B14u;
        goto label_2c8b14;
    }
    ctx->pc = 0x2C8B0Cu;
    {
        const bool branch_taken_0x2c8b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B0Cu;
            // 0x2c8b10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b0c) {
            ctx->pc = 0x2C8B20u;
            goto label_2c8b20;
        }
    }
    ctx->pc = 0x2C8B14u;
label_2c8b14:
    // 0x2c8b14: 0x10000005  b           . + 4 + (0x5 << 2)
label_2c8b18:
    if (ctx->pc == 0x2C8B18u) {
        ctx->pc = 0x2C8B18u;
            // 0x2c8b18: 0x24020213  addiu       $v0, $zero, 0x213 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
        ctx->pc = 0x2C8B1Cu;
        goto label_2c8b1c;
    }
    ctx->pc = 0x2C8B14u;
    {
        const bool branch_taken_0x2c8b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B14u;
            // 0x2c8b18: 0x24020213  addiu       $v0, $zero, 0x213 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b14) {
            ctx->pc = 0x2C8B2Cu;
            goto label_2c8b2c;
        }
    }
    ctx->pc = 0x2C8B1Cu;
label_2c8b1c:
    // 0x2c8b1c: 0x0  nop
    ctx->pc = 0x2c8b1cu;
    // NOP
label_2c8b20:
    // 0x2c8b20: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c8b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8b24:
    // 0x2c8b24: 0xc0b3ca2  jal         func_2CF288
label_2c8b28:
    if (ctx->pc == 0x2C8B28u) {
        ctx->pc = 0x2C8B28u;
            // 0x2c8b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B2Cu;
        goto label_2c8b2c;
    }
    ctx->pc = 0x2C8B24u;
    SET_GPR_U32(ctx, 31, 0x2C8B2Cu);
    ctx->pc = 0x2C8B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B24u;
            // 0x2c8b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF288u;
    if (runtime->hasFunction(0x2CF288u)) {
        auto targetFn = runtime->lookupFunction(0x2CF288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B2Cu; }
        if (ctx->pc != 0x2C8B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF288_0x2cf288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B2Cu; }
        if (ctx->pc != 0x2C8B2Cu) { return; }
    }
    ctx->pc = 0x2C8B2Cu;
label_2c8b2c:
    // 0x2c8b2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8b30:
    // 0x2c8b30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8b34:
    // 0x2c8b34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c8b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8b38:
    // 0x2c8b38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c8b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8b3c:
    // 0x2c8b3c: 0x3e00008  jr          $ra
label_2c8b40:
    if (ctx->pc == 0x2C8B40u) {
        ctx->pc = 0x2C8B40u;
            // 0x2c8b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C8B44u;
        goto label_2c8b44;
    }
    ctx->pc = 0x2C8B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B3Cu;
            // 0x2c8b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8B44u;
label_2c8b44:
    // 0x2c8b44: 0x0  nop
    ctx->pc = 0x2c8b44u;
    // NOP
label_2c8b48:
    // 0x2c8b48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8b4c:
    // 0x2c8b4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c8b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8b50:
    // 0x2c8b50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b54:
    // 0x2c8b54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c8b58:
    // 0x2c8b58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c8b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b5c:
    // 0x2c8b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b60:
    // 0x2c8b60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c8b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c8b64:
    // 0x2c8b64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2c8b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2c8b68:
    // 0x2c8b68: 0xc0b22ec  jal         func_2C8BB0
label_2c8b6c:
    if (ctx->pc == 0x2C8B6Cu) {
        ctx->pc = 0x2C8B6Cu;
            // 0x2c8b6c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B70u;
        goto label_2c8b70;
    }
    ctx->pc = 0x2C8B68u;
    SET_GPR_U32(ctx, 31, 0x2C8B70u);
    ctx->pc = 0x2C8B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B68u;
            // 0x2c8b6c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (runtime->hasFunction(0x2C8BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B70u; }
        if (ctx->pc != 0x2C8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8BB0_0x2c8bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B70u; }
        if (ctx->pc != 0x2C8B70u) { return; }
    }
    ctx->pc = 0x2C8B70u;
label_2c8b70:
    // 0x2c8b70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2c8b74:
    if (ctx->pc == 0x2C8B74u) {
        ctx->pc = 0x2C8B74u;
            // 0x2c8b74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B78u;
        goto label_2c8b78;
    }
    ctx->pc = 0x2C8B70u;
    {
        const bool branch_taken_0x2c8b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B70u;
            // 0x2c8b74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b70) {
            ctx->pc = 0x2C8B98u;
            goto label_2c8b98;
        }
    }
    ctx->pc = 0x2C8B78u;
label_2c8b78:
    // 0x2c8b78: 0x200f809  jalr        $s0
label_2c8b7c:
    if (ctx->pc == 0x2C8B7Cu) {
        ctx->pc = 0x2C8B80u;
        goto label_2c8b80;
    }
    ctx->pc = 0x2C8B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2C8B80u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8B80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B80u; }
            if (ctx->pc != 0x2C8B80u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8B80u;
label_2c8b80:
    // 0x2c8b80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c8b84:
    if (ctx->pc == 0x2C8B84u) {
        ctx->pc = 0x2C8B84u;
            // 0x2c8b84: 0x24020213  addiu       $v0, $zero, 0x213 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
        ctx->pc = 0x2C8B88u;
        goto label_2c8b88;
    }
    ctx->pc = 0x2C8B80u;
    {
        const bool branch_taken_0x2c8b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B80u;
            // 0x2c8b84: 0x24020213  addiu       $v0, $zero, 0x213 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8b80) {
            ctx->pc = 0x2C8B98u;
            goto label_2c8b98;
        }
    }
    ctx->pc = 0x2C8B88u;
label_2c8b88:
    // 0x2c8b88: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2c8b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8b8c:
    // 0x2c8b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b90:
    // 0x2c8b90: 0xc0b3cd6  jal         func_2CF358
label_2c8b94:
    if (ctx->pc == 0x2C8B94u) {
        ctx->pc = 0x2C8B94u;
            // 0x2c8b94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8B98u;
        goto label_2c8b98;
    }
    ctx->pc = 0x2C8B90u;
    SET_GPR_U32(ctx, 31, 0x2C8B98u);
    ctx->pc = 0x2C8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8B90u;
            // 0x2c8b94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF358u;
    if (runtime->hasFunction(0x2CF358u)) {
        auto targetFn = runtime->lookupFunction(0x2CF358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B98u; }
        if (ctx->pc != 0x2C8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF358_0x2cf358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B98u; }
        if (ctx->pc != 0x2C8B98u) { return; }
    }
    ctx->pc = 0x2C8B98u;
label_2c8b98:
    // 0x2c8b98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8b9c:
    // 0x2c8b9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8ba0:
    // 0x2c8ba0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c8ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8ba4:
    // 0x2c8ba4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2c8ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8ba8:
    // 0x2c8ba8: 0x3e00008  jr          $ra
label_2c8bac:
    if (ctx->pc == 0x2C8BACu) {
        ctx->pc = 0x2C8BACu;
            // 0x2c8bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C8BB0u;
        goto label_fallthrough_0x2c8ba8;
    }
    ctx->pc = 0x2C8BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8BA8u;
            // 0x2c8bac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c8ba8:
    ctx->pc = 0x2C8BB0u;
    ctx->pc = 0x2c8bb0u;
}
