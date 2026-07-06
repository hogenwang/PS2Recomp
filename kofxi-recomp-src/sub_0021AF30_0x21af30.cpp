#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021AF30
// Address: 0x21af30 - 0x21b090
void sub_0021AF30_0x21af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AF30_0x21af30");
#endif

    switch (ctx->pc) {
        case 0x21af4cu: goto label_21af4c;
        case 0x21af5cu: goto label_21af5c;
        case 0x21af78u: goto label_21af78;
        case 0x21afbcu: goto label_21afbc;
        case 0x21afd0u: goto label_21afd0;
        case 0x21afe0u: goto label_21afe0;
        case 0x21b008u: goto label_21b008;
        case 0x21b04cu: goto label_21b04c;
        case 0x21b060u: goto label_21b060;
        case 0x21b068u: goto label_21b068;
        default: break;
    }

    ctx->pc = 0x21af30u;

label_21af30:
    // 0x21af30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21af34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21af38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21af38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21af3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21af3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21af40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21af44: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AF44u;
    SET_GPR_U32(ctx, 31, 0x21AF4Cu);
    ctx->pc = 0x21AF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF44u;
            // 0x21af48: 0x24841530  addiu       $a0, $a0, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF4Cu; }
        if (ctx->pc != 0x21AF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF4Cu; }
        if (ctx->pc != 0x21AF4Cu) { return; }
    }
    ctx->pc = 0x21AF4Cu;
label_21af4c:
    // 0x21af4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21af50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21af50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21af54: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21AF54u;
    SET_GPR_U32(ctx, 31, 0x21AF5Cu);
    ctx->pc = 0x21AF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF54u;
            // 0x21af58: 0x24841550  addiu       $a0, $a0, 0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF5Cu; }
        if (ctx->pc != 0x21AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AF5Cu; }
        if (ctx->pc != 0x21AF5Cu) { return; }
    }
    ctx->pc = 0x21AF5Cu;
label_21af5c:
    // 0x21af5c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21af60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21af64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21af64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21af68: 0x24841480  addiu       $a0, $a0, 0x1480
    ctx->pc = 0x21af68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
    // 0x21af6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21af70: 0x8043e52  j           func_10F948
    ctx->pc = 0x21AF70u;
    ctx->pc = 0x21AF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AF70u;
            // 0x21af74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21AF78u;
label_21af78:
    // 0x21af78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21af78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21af7c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21af7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21af80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21af84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21af88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21af8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21af8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21af94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21af94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21af9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21af9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afa0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21afa4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21afa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afa8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21afac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21afb0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21afb0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21afb4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21AFB4u;
    SET_GPR_U32(ctx, 31, 0x21AFBCu);
    ctx->pc = 0x21AFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFB4u;
            // 0x21afb8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFBCu; }
        if (ctx->pc != 0x21AFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFBCu; }
        if (ctx->pc != 0x21AFBCu) { return; }
    }
    ctx->pc = 0x21AFBCu;
label_21afbc:
    // 0x21afbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21afbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afc0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21afc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21afc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afc8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21AFC8u;
    SET_GPR_U32(ctx, 31, 0x21AFD0u);
    ctx->pc = 0x21AFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFC8u;
            // 0x21afcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFD0u; }
        if (ctx->pc != 0x21AFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AFD0u; }
        if (ctx->pc != 0x21AFD0u) { return; }
    }
    ctx->pc = 0x21AFD0u;
label_21afd0:
    // 0x21afd0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21afd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21afd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afd8: 0xc086bcc  jal         func_21AF30
    ctx->pc = 0x21AFD8u;
    SET_GPR_U32(ctx, 31, 0x21AFE0u);
    ctx->pc = 0x21AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFD8u;
            // 0x21afdc: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21AF30u;
    goto label_21af30;
    ctx->pc = 0x21AFE0u;
label_21afe0:
    // 0x21afe0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21afe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21afe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21afe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21afe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21afec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21afecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aff0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21aff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21aff4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21aff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21aff8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21aff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21affc: 0x3e00008  jr          $ra
    ctx->pc = 0x21AFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AFFCu;
            // 0x21b000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B004u;
    // 0x21b004: 0x0  nop
    ctx->pc = 0x21b004u;
    // NOP
label_21b008:
    // 0x21b008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b00c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b00cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b010: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21b014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b01c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21b020: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b024: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21b028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b02c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21b02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21b030: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21b030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b034: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21b034u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21b038: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b03c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21b03cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b040: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b044: 0xc084612  jal         func_211848
    ctx->pc = 0x21B044u;
    SET_GPR_U32(ctx, 31, 0x21B04Cu);
    ctx->pc = 0x21B048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B044u;
            // 0x21b048: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B04Cu; }
        if (ctx->pc != 0x21B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B04Cu; }
        if (ctx->pc != 0x21B04Cu) { return; }
    }
    ctx->pc = 0x21B04Cu;
label_21b04c:
    // 0x21b04c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b050: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b058: 0xc084612  jal         func_211848
    ctx->pc = 0x21B058u;
    SET_GPR_U32(ctx, 31, 0x21B060u);
    ctx->pc = 0x21B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B058u;
            // 0x21b05c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B060u; }
        if (ctx->pc != 0x21B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B060u; }
        if (ctx->pc != 0x21B060u) { return; }
    }
    ctx->pc = 0x21B060u;
label_21b060:
    // 0x21b060: 0xc086bcc  jal         func_21AF30
    ctx->pc = 0x21B060u;
    SET_GPR_U32(ctx, 31, 0x21B068u);
    ctx->pc = 0x21B064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B060u;
            // 0x21b064: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21AF30u;
    goto label_21af30;
    ctx->pc = 0x21B068u;
label_21b068:
    // 0x21b068: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b06c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b070: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21b074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b078: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21b078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b07c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21b07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b080: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21b080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b084: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21b084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b088: 0x3e00008  jr          $ra
    ctx->pc = 0x21B088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B088u;
            // 0x21b08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B090u;
    ctx->pc = 0x21b090u;
}
