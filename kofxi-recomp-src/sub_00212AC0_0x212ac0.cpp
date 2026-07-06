#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212AC0
// Address: 0x212ac0 - 0x212ba0
void sub_00212AC0_0x212ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212AC0_0x212ac0");
#endif

    switch (ctx->pc) {
        case 0x212adcu: goto label_212adc;
        case 0x212aecu: goto label_212aec;
        case 0x212afcu: goto label_212afc;
        case 0x212b0cu: goto label_212b0c;
        case 0x212b1cu: goto label_212b1c;
        case 0x212b2cu: goto label_212b2c;
        case 0x212b3cu: goto label_212b3c;
        case 0x212b4cu: goto label_212b4c;
        case 0x212b5cu: goto label_212b5c;
        case 0x212b6cu: goto label_212b6c;
        case 0x212b7cu: goto label_212b7c;
        default: break;
    }

    ctx->pc = 0x212ac0u;

    // 0x212ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x212ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x212acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ad0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212ad4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212AD4u;
    SET_GPR_U32(ctx, 31, 0x212ADCu);
    ctx->pc = 0x212AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AD4u;
            // 0x212ad8: 0x24840548  addiu       $a0, $a0, 0x548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212ADCu; }
        if (ctx->pc != 0x212ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212ADCu; }
        if (ctx->pc != 0x212ADCu) { return; }
    }
    ctx->pc = 0x212ADCu;
label_212adc:
    // 0x212adc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x212adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212ae0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212ae4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212AE4u;
    SET_GPR_U32(ctx, 31, 0x212AECu);
    ctx->pc = 0x212AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AE4u;
            // 0x212ae8: 0x24840568  addiu       $a0, $a0, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AECu; }
        if (ctx->pc != 0x212AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AECu; }
        if (ctx->pc != 0x212AECu) { return; }
    }
    ctx->pc = 0x212AECu;
label_212aec:
    // 0x212aec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212af0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x212af4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212AF4u;
    SET_GPR_U32(ctx, 31, 0x212AFCu);
    ctx->pc = 0x212AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212AF4u;
            // 0x212af8: 0x24840578  addiu       $a0, $a0, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AFCu; }
        if (ctx->pc != 0x212AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212AFCu; }
        if (ctx->pc != 0x212AFCu) { return; }
    }
    ctx->pc = 0x212AFCu;
label_212afc:
    // 0x212afc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b00: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x212b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x212b04: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B04u;
    SET_GPR_U32(ctx, 31, 0x212B0Cu);
    ctx->pc = 0x212B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B04u;
            // 0x212b08: 0x24840488  addiu       $a0, $a0, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B0Cu; }
        if (ctx->pc != 0x212B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B0Cu; }
        if (ctx->pc != 0x212B0Cu) { return; }
    }
    ctx->pc = 0x212B0Cu;
label_212b0c:
    // 0x212b0c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x212b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x212b10: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b14: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B14u;
    SET_GPR_U32(ctx, 31, 0x212B1Cu);
    ctx->pc = 0x212B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B14u;
            // 0x212b18: 0x24840478  addiu       $a0, $a0, 0x478 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B1Cu; }
        if (ctx->pc != 0x212B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B1Cu; }
        if (ctx->pc != 0x212B1Cu) { return; }
    }
    ctx->pc = 0x212B1Cu;
label_212b1c:
    // 0x212b1c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x212b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x212b20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b24: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B24u;
    SET_GPR_U32(ctx, 31, 0x212B2Cu);
    ctx->pc = 0x212B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B24u;
            // 0x212b28: 0x24840588  addiu       $a0, $a0, 0x588 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B2Cu; }
        if (ctx->pc != 0x212B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B2Cu; }
        if (ctx->pc != 0x212B2Cu) { return; }
    }
    ctx->pc = 0x212B2Cu;
label_212b2c:
    // 0x212b2c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x212b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x212b30: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b34: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B34u;
    SET_GPR_U32(ctx, 31, 0x212B3Cu);
    ctx->pc = 0x212B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B34u;
            // 0x212b38: 0x24840598  addiu       $a0, $a0, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B3Cu; }
        if (ctx->pc != 0x212B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B3Cu; }
        if (ctx->pc != 0x212B3Cu) { return; }
    }
    ctx->pc = 0x212B3Cu;
label_212b3c:
    // 0x212b3c: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x212b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x212b40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b44: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B44u;
    SET_GPR_U32(ctx, 31, 0x212B4Cu);
    ctx->pc = 0x212B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B44u;
            // 0x212b48: 0x248405a8  addiu       $a0, $a0, 0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B4Cu; }
        if (ctx->pc != 0x212B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B4Cu; }
        if (ctx->pc != 0x212B4Cu) { return; }
    }
    ctx->pc = 0x212B4Cu;
label_212b4c:
    // 0x212b4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b50: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x212b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x212b54: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B54u;
    SET_GPR_U32(ctx, 31, 0x212B5Cu);
    ctx->pc = 0x212B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B54u;
            // 0x212b58: 0x248405b8  addiu       $a0, $a0, 0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B5Cu; }
        if (ctx->pc != 0x212B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B5Cu; }
        if (ctx->pc != 0x212B5Cu) { return; }
    }
    ctx->pc = 0x212B5Cu;
label_212b5c:
    // 0x212b5c: 0x8e05013c  lw          $a1, 0x13C($s0)
    ctx->pc = 0x212b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x212b60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b64: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B64u;
    SET_GPR_U32(ctx, 31, 0x212B6Cu);
    ctx->pc = 0x212B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B64u;
            // 0x212b68: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B6Cu; }
        if (ctx->pc != 0x212B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B6Cu; }
        if (ctx->pc != 0x212B6Cu) { return; }
    }
    ctx->pc = 0x212B6Cu;
label_212b6c:
    // 0x212b6c: 0x8e050140  lw          $a1, 0x140($s0)
    ctx->pc = 0x212b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x212b70: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b74: 0xc043e52  jal         func_10F948
    ctx->pc = 0x212B74u;
    SET_GPR_U32(ctx, 31, 0x212B7Cu);
    ctx->pc = 0x212B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B74u;
            // 0x212b78: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B7Cu; }
        if (ctx->pc != 0x212B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B7Cu; }
        if (ctx->pc != 0x212B7Cu) { return; }
    }
    ctx->pc = 0x212B7Cu;
label_212b7c:
    // 0x212b7c: 0x26100144  addiu       $s0, $s0, 0x144
    ctx->pc = 0x212b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
    // 0x212b80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x212b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212b88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x212b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x212b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b90: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x212b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x212b94: 0x8043e52  j           func_10F948
    ctx->pc = 0x212B94u;
    ctx->pc = 0x212B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x212B94u;
            // 0x212b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x212B9Cu;
    // 0x212b9c: 0x0  nop
    ctx->pc = 0x212b9cu;
    // NOP
    ctx->pc = 0x212ba0u;
}
