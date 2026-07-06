#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CEAC0
// Address: 0x2ceac0 - 0x2ceba0
void sub_002CEAC0_0x2ceac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEAC0_0x2ceac0");
#endif

    switch (ctx->pc) {
        case 0x2ceac0u: goto label_2ceac0;
        case 0x2ceac4u: goto label_2ceac4;
        case 0x2ceac8u: goto label_2ceac8;
        case 0x2ceaccu: goto label_2ceacc;
        case 0x2cead0u: goto label_2cead0;
        case 0x2cead4u: goto label_2cead4;
        case 0x2cead8u: goto label_2cead8;
        case 0x2ceadcu: goto label_2ceadc;
        case 0x2ceae0u: goto label_2ceae0;
        case 0x2ceae4u: goto label_2ceae4;
        case 0x2ceae8u: goto label_2ceae8;
        case 0x2ceaecu: goto label_2ceaec;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceaf4u: goto label_2ceaf4;
        case 0x2ceaf8u: goto label_2ceaf8;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb00u: goto label_2ceb00;
        case 0x2ceb04u: goto label_2ceb04;
        case 0x2ceb08u: goto label_2ceb08;
        case 0x2ceb0cu: goto label_2ceb0c;
        case 0x2ceb10u: goto label_2ceb10;
        case 0x2ceb14u: goto label_2ceb14;
        case 0x2ceb18u: goto label_2ceb18;
        case 0x2ceb1cu: goto label_2ceb1c;
        case 0x2ceb20u: goto label_2ceb20;
        case 0x2ceb24u: goto label_2ceb24;
        case 0x2ceb28u: goto label_2ceb28;
        case 0x2ceb2cu: goto label_2ceb2c;
        case 0x2ceb30u: goto label_2ceb30;
        case 0x2ceb34u: goto label_2ceb34;
        case 0x2ceb38u: goto label_2ceb38;
        case 0x2ceb3cu: goto label_2ceb3c;
        case 0x2ceb40u: goto label_2ceb40;
        case 0x2ceb44u: goto label_2ceb44;
        case 0x2ceb48u: goto label_2ceb48;
        case 0x2ceb4cu: goto label_2ceb4c;
        case 0x2ceb50u: goto label_2ceb50;
        case 0x2ceb54u: goto label_2ceb54;
        case 0x2ceb58u: goto label_2ceb58;
        case 0x2ceb5cu: goto label_2ceb5c;
        case 0x2ceb60u: goto label_2ceb60;
        case 0x2ceb64u: goto label_2ceb64;
        case 0x2ceb68u: goto label_2ceb68;
        case 0x2ceb6cu: goto label_2ceb6c;
        case 0x2ceb70u: goto label_2ceb70;
        case 0x2ceb74u: goto label_2ceb74;
        case 0x2ceb78u: goto label_2ceb78;
        case 0x2ceb7cu: goto label_2ceb7c;
        case 0x2ceb80u: goto label_2ceb80;
        case 0x2ceb84u: goto label_2ceb84;
        case 0x2ceb88u: goto label_2ceb88;
        case 0x2ceb8cu: goto label_2ceb8c;
        case 0x2ceb90u: goto label_2ceb90;
        case 0x2ceb94u: goto label_2ceb94;
        case 0x2ceb98u: goto label_2ceb98;
        case 0x2ceb9cu: goto label_2ceb9c;
        default: break;
    }

    ctx->pc = 0x2ceac0u;

label_2ceac0:
    // 0x2ceac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ceac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ceac4:
    // 0x2ceac4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ceac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2ceac8:
    // 0x2ceac8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ceac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ceacc:
    // 0x2ceacc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ceaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2cead0:
    // 0x2cead0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cead0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cead4:
    // 0x2cead4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2cead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2cead8:
    // 0x2cead8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cead8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ceadc:
    // 0x2ceadc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ceadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ceae0:
    // 0x2ceae0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ceae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2ceae4:
    // 0x2ceae4: 0xc0b2748  jal         func_2C9D20
label_2ceae8:
    if (ctx->pc == 0x2CEAE8u) {
        ctx->pc = 0x2CEAE8u;
            // 0x2ceae8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CEAECu;
        goto label_2ceaec;
    }
    ctx->pc = 0x2CEAE4u;
    SET_GPR_U32(ctx, 31, 0x2CEAECu);
    ctx->pc = 0x2CEAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAE4u;
            // 0x2ceae8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D20u;
    if (runtime->hasFunction(0x2C9D20u)) {
        auto targetFn = runtime->lookupFunction(0x2C9D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAECu; }
        if (ctx->pc != 0x2CEAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9D20_0x2c9d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAECu; }
        if (ctx->pc != 0x2CEAECu) { return; }
    }
    ctx->pc = 0x2CEAECu;
label_2ceaec:
    // 0x2ceaec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ceaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ceaf0:
    // 0x2ceaf0: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_2ceaf4:
    if (ctx->pc == 0x2CEAF4u) {
        ctx->pc = 0x2CEAF4u;
            // 0x2ceaf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAF8u;
        goto label_2ceaf8;
    }
    ctx->pc = 0x2CEAF0u;
    {
        const bool branch_taken_0x2ceaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAF0u;
            // 0x2ceaf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceaf0) {
            ctx->pc = 0x2CEB68u;
            goto label_2ceb68;
        }
    }
    ctx->pc = 0x2CEAF8u;
label_2ceaf8:
    // 0x2ceaf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ceaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ceafc:
    // 0x2ceafc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2ceafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2ceb00:
    // 0x2ceb00: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2ceb04:
    if (ctx->pc == 0x2CEB04u) {
        ctx->pc = 0x2CEB04u;
            // 0x2ceb04: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x2CEB08u;
        goto label_2ceb08;
    }
    ctx->pc = 0x2CEB00u;
    {
        const bool branch_taken_0x2ceb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB00u;
            // 0x2ceb04: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb00) {
            ctx->pc = 0x2CEB34u;
            goto label_2ceb34;
        }
    }
    ctx->pc = 0x2CEB08u;
label_2ceb08:
    // 0x2ceb08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ceb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb0c:
    // 0x2ceb0c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ceb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb10:
    // 0x2ceb10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ceb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ceb14:
    // 0x2ceb14: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2ceb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2ceb18:
    // 0x2ceb18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2ceb1c:
    if (ctx->pc == 0x2CEB1Cu) {
        ctx->pc = 0x2CEB1Cu;
            // 0x2ceb1c: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->pc = 0x2CEB20u;
        goto label_2ceb20;
    }
    ctx->pc = 0x2CEB18u;
    {
        const bool branch_taken_0x2ceb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB18u;
            // 0x2ceb1c: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb18) {
            ctx->pc = 0x2CEB68u;
            goto label_2ceb68;
        }
    }
    ctx->pc = 0x2CEB20u;
label_2ceb20:
    // 0x2ceb20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ceb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ceb24:
    // 0x2ceb24: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2ceb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2ceb28:
    // 0x2ceb28: 0x0  nop
    ctx->pc = 0x2ceb28u;
    // NOP
label_2ceb2c:
    // 0x2ceb2c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_2ceb30:
    if (ctx->pc == 0x2CEB30u) {
        ctx->pc = 0x2CEB30u;
            // 0x2ceb30: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x2CEB34u;
        goto label_2ceb34;
    }
    ctx->pc = 0x2CEB2Cu;
    {
        const bool branch_taken_0x2ceb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB2Cu;
            // 0x2ceb30: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb2c) {
            ctx->pc = 0x2CEB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ceb10;
        }
    }
    ctx->pc = 0x2CEB34u;
label_2ceb34:
    // 0x2ceb34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ceb38:
    if (ctx->pc == 0x2CEB38u) {
        ctx->pc = 0x2CEB38u;
            // 0x2ceb38: 0x3c07003c  lui         $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
        ctx->pc = 0x2CEB3Cu;
        goto label_2ceb3c;
    }
    ctx->pc = 0x2CEB34u;
    {
        const bool branch_taken_0x2ceb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB34u;
            // 0x2ceb38: 0x3c07003c  lui         $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb34) {
            ctx->pc = 0x2CEB6Cu;
            goto label_2ceb6c;
        }
    }
    ctx->pc = 0x2CEB3Cu;
label_2ceb3c:
    // 0x2ceb3c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x2ceb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_2ceb40:
    // 0x2ceb40: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x2ceb40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
label_2ceb44:
    // 0x2ceb44: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2ceb44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2ceb48:
    // 0x2ceb48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ceb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb4c:
    // 0x2ceb4c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2ceb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2ceb50:
    // 0x2ceb50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ceb54:
    // 0x2ceb54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ceb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ceb58:
    // 0x2ceb58: 0x40f809  jalr        $v0
label_2ceb5c:
    if (ctx->pc == 0x2CEB5Cu) {
        ctx->pc = 0x2CEB5Cu;
            // 0x2ceb5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2CEB60u;
        goto label_2ceb60;
    }
    ctx->pc = 0x2CEB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CEB60u);
        ctx->pc = 0x2CEB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB58u;
            // 0x2ceb5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CEB60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB60u; }
            if (ctx->pc != 0x2CEB60u) { return; }
        }
        }
    }
    ctx->pc = 0x2CEB60u;
label_2ceb60:
    // 0x2ceb60: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ceb64:
    if (ctx->pc == 0x2CEB64u) {
        ctx->pc = 0x2CEB64u;
            // 0x2ceb64: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2CEB68u;
        goto label_2ceb68;
    }
    ctx->pc = 0x2CEB60u;
    {
        const bool branch_taken_0x2ceb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB60u;
            // 0x2ceb64: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb60) {
            ctx->pc = 0x2CEB88u;
            goto label_2ceb88;
        }
    }
    ctx->pc = 0x2CEB68u;
label_2ceb68:
    // 0x2ceb68: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2ceb68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
label_2ceb6c:
    // 0x2ceb6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ceb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb70:
    // 0x2ceb70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ceb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb74:
    // 0x2ceb74: 0x24e78548  addiu       $a3, $a3, -0x7AB8
    ctx->pc = 0x2ceb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935880));
label_2ceb78:
    // 0x2ceb78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ceb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb7c:
    // 0x2ceb7c: 0xc0b2692  jal         func_2C9A48
label_2ceb80:
    if (ctx->pc == 0x2CEB80u) {
        ctx->pc = 0x2CEB80u;
            // 0x2ceb80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB84u;
        goto label_2ceb84;
    }
    ctx->pc = 0x2CEB7Cu;
    SET_GPR_U32(ctx, 31, 0x2CEB84u);
    ctx->pc = 0x2CEB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB7Cu;
            // 0x2ceb80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A48u;
    if (runtime->hasFunction(0x2C9A48u)) {
        auto targetFn = runtime->lookupFunction(0x2C9A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB84u; }
        if (ctx->pc != 0x2CEB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9A48_0x2c9a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB84u; }
        if (ctx->pc != 0x2CEB84u) { return; }
    }
    ctx->pc = 0x2CEB84u;
label_2ceb84:
    // 0x2ceb84: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ceb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ceb88:
    // 0x2ceb88: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ceb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ceb8c:
    // 0x2ceb8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ceb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ceb90:
    // 0x2ceb90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ceb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ceb94:
    // 0x2ceb94: 0x3e00008  jr          $ra
label_2ceb98:
    if (ctx->pc == 0x2CEB98u) {
        ctx->pc = 0x2CEB98u;
            // 0x2ceb98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CEB9Cu;
        goto label_2ceb9c;
    }
    ctx->pc = 0x2CEB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB94u;
            // 0x2ceb98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEB9Cu;
label_2ceb9c:
    // 0x2ceb9c: 0x0  nop
    ctx->pc = 0x2ceb9cu;
    // NOP
    ctx->pc = 0x2ceba0u;
}
