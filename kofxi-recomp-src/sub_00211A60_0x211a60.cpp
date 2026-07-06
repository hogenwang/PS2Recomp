#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211A60
// Address: 0x211a60 - 0x211b20
void sub_00211A60_0x211a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211A60_0x211a60");
#endif

    switch (ctx->pc) {
        case 0x211a60u: goto label_211a60;
        case 0x211a64u: goto label_211a64;
        case 0x211a68u: goto label_211a68;
        case 0x211a6cu: goto label_211a6c;
        case 0x211a70u: goto label_211a70;
        case 0x211a74u: goto label_211a74;
        case 0x211a78u: goto label_211a78;
        case 0x211a7cu: goto label_211a7c;
        case 0x211a80u: goto label_211a80;
        case 0x211a84u: goto label_211a84;
        case 0x211a88u: goto label_211a88;
        case 0x211a8cu: goto label_211a8c;
        case 0x211a90u: goto label_211a90;
        case 0x211a94u: goto label_211a94;
        case 0x211a98u: goto label_211a98;
        case 0x211a9cu: goto label_211a9c;
        case 0x211aa0u: goto label_211aa0;
        case 0x211aa4u: goto label_211aa4;
        case 0x211aa8u: goto label_211aa8;
        case 0x211aacu: goto label_211aac;
        case 0x211ab0u: goto label_211ab0;
        case 0x211ab4u: goto label_211ab4;
        case 0x211ab8u: goto label_211ab8;
        case 0x211abcu: goto label_211abc;
        case 0x211ac0u: goto label_211ac0;
        case 0x211ac4u: goto label_211ac4;
        case 0x211ac8u: goto label_211ac8;
        case 0x211accu: goto label_211acc;
        case 0x211ad0u: goto label_211ad0;
        case 0x211ad4u: goto label_211ad4;
        case 0x211ad8u: goto label_211ad8;
        case 0x211adcu: goto label_211adc;
        case 0x211ae0u: goto label_211ae0;
        case 0x211ae4u: goto label_211ae4;
        case 0x211ae8u: goto label_211ae8;
        case 0x211aecu: goto label_211aec;
        case 0x211af0u: goto label_211af0;
        case 0x211af4u: goto label_211af4;
        case 0x211af8u: goto label_211af8;
        case 0x211afcu: goto label_211afc;
        case 0x211b00u: goto label_211b00;
        case 0x211b04u: goto label_211b04;
        case 0x211b08u: goto label_211b08;
        case 0x211b0cu: goto label_211b0c;
        case 0x211b10u: goto label_211b10;
        case 0x211b14u: goto label_211b14;
        case 0x211b18u: goto label_211b18;
        case 0x211b1cu: goto label_211b1c;
        default: break;
    }

    ctx->pc = 0x211a60u;

label_211a60:
    // 0x211a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_211a64:
    // 0x211a64: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x211a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_211a68:
    // 0x211a68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x211a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_211a6c:
    // 0x211a6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x211a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_211a70:
    // 0x211a70: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x211a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_211a74:
    // 0x211a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_211a78:
    // 0x211a78: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x211a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_211a7c:
    // 0x211a7c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x211a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_211a80:
    // 0x211a80: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x211a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_211a84:
    // 0x211a84: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x211a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
label_211a88:
    // 0x211a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_211a8c:
    // 0x211a8c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_211a90:
    // 0x211a90: 0x24840258  addiu       $a0, $a0, 0x258
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 600));
label_211a94:
    // 0x211a94: 0x240501c4  addiu       $a1, $zero, 0x1C4
    ctx->pc = 0x211a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
label_211a98:
    // 0x211a98: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x211a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_211a9c:
    // 0x211a9c: 0x24e70240  addiu       $a3, $a3, 0x240
    ctx->pc = 0x211a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
label_211aa0:
    // 0x211aa0: 0xc0897d6  jal         func_225F58
label_211aa4:
    if (ctx->pc == 0x211AA4u) {
        ctx->pc = 0x211AA4u;
            // 0x211aa4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x211AA8u;
        goto label_211aa8;
    }
    ctx->pc = 0x211AA0u;
    SET_GPR_U32(ctx, 31, 0x211AA8u);
    ctx->pc = 0x211AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211AA0u;
            // 0x211aa4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AA8u; }
        if (ctx->pc != 0x211AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AA8u; }
        if (ctx->pc != 0x211AA8u) { return; }
    }
    ctx->pc = 0x211AA8u;
label_211aa8:
    // 0x211aa8: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x211aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_211aac:
    // 0x211aac: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x211aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_211ab0:
    // 0x211ab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x211ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_211ab4:
    // 0x211ab4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x211ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_211ab8:
    // 0x211ab8: 0x19e0000b  blez        $t7, . + 4 + (0xB << 2)
label_211abc:
    if (ctx->pc == 0x211ABCu) {
        ctx->pc = 0x211ABCu;
            // 0x211abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x211AC0u;
        goto label_211ac0;
    }
    ctx->pc = 0x211AB8u;
    {
        const bool branch_taken_0x211ab8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x211ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211AB8u;
            // 0x211abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ab8) {
            ctx->pc = 0x211AE8u;
            goto label_211ae8;
        }
    }
    ctx->pc = 0x211AC0u;
label_211ac0:
    // 0x211ac0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_211ac4:
    // 0x211ac4: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x211ac4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
label_211ac8:
    // 0x211ac8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x211ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
label_211acc:
    // 0x211acc: 0xadc0ab5c  sw          $zero, -0x54A4($t6)
    ctx->pc = 0x211accu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294945628), GPR_U32(ctx, 0));
label_211ad0:
    // 0x211ad0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211ad0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_211ad4:
    // 0x211ad4: 0x200f809  jalr        $s0
label_211ad8:
    if (ctx->pc == 0x211AD8u) {
        ctx->pc = 0x211AD8u;
            // 0x211ad8: 0xade0ab60  sw          $zero, -0x54A0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945632), GPR_U32(ctx, 0));
        ctx->pc = 0x211ADCu;
        goto label_211adc;
    }
    ctx->pc = 0x211AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x211ADCu);
        ctx->pc = 0x211AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211AD4u;
            // 0x211ad8: 0xade0ab60  sw          $zero, -0x54A0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x211ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x211ADCu; }
            if (ctx->pc != 0x211ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x211ADCu;
label_211adc:
    // 0x211adc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211ae0:
    // 0x211ae0: 0xc0846c8  jal         func_211B20
label_211ae4:
    if (ctx->pc == 0x211AE4u) {
        ctx->pc = 0x211AE4u;
            // 0x211ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x211AE8u;
        goto label_211ae8;
    }
    ctx->pc = 0x211AE0u;
    SET_GPR_U32(ctx, 31, 0x211AE8u);
    ctx->pc = 0x211AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211AE0u;
            // 0x211ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211B20u;
    if (runtime->hasFunction(0x211B20u)) {
        auto targetFn = runtime->lookupFunction(0x211B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AE8u; }
        if (ctx->pc != 0x211AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211B20_0x211b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211AE8u; }
        if (ctx->pc != 0x211AE8u) { return; }
    }
    ctx->pc = 0x211AE8u;
label_211ae8:
    // 0x211ae8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x211ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_211aec:
    // 0x211aec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x211aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_211af0:
    // 0x211af0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x211af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_211af4:
    // 0x211af4: 0x3e00008  jr          $ra
label_211af8:
    if (ctx->pc == 0x211AF8u) {
        ctx->pc = 0x211AF8u;
            // 0x211af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x211AFCu;
        goto label_211afc;
    }
    ctx->pc = 0x211AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211AF4u;
            // 0x211af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211AFCu;
label_211afc:
    // 0x211afc: 0x0  nop
    ctx->pc = 0x211afcu;
    // NOP
label_211b00:
    // 0x211b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_211b04:
    // 0x211b04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x211b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_211b08:
    // 0x211b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_211b0c:
    // 0x211b0c: 0x40f809  jalr        $v0
label_211b10:
    if (ctx->pc == 0x211B10u) {
        ctx->pc = 0x211B10u;
            // 0x211b10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x211B14u;
        goto label_211b14;
    }
    ctx->pc = 0x211B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211B14u);
        ctx->pc = 0x211B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211B0Cu;
            // 0x211b10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x211B14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x211B14u; }
            if (ctx->pc != 0x211B14u) { return; }
        }
        }
    }
    ctx->pc = 0x211B14u;
label_211b14:
    // 0x211b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_211b18:
    // 0x211b18: 0x3e00008  jr          $ra
label_211b1c:
    if (ctx->pc == 0x211B1Cu) {
        ctx->pc = 0x211B1Cu;
            // 0x211b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x211B20u;
        goto label_fallthrough_0x211b18;
    }
    ctx->pc = 0x211B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211B18u;
            // 0x211b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x211b18:
    ctx->pc = 0x211B20u;
    ctx->pc = 0x211b20u;
}
