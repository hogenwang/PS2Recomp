#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021BCD0
// Address: 0x21bcd0 - 0x21be30
void sub_0021BCD0_0x21bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BCD0_0x21bcd0");
#endif

    switch (ctx->pc) {
        case 0x21bcecu: goto label_21bcec;
        case 0x21bcfcu: goto label_21bcfc;
        case 0x21bd18u: goto label_21bd18;
        case 0x21bd5cu: goto label_21bd5c;
        case 0x21bd70u: goto label_21bd70;
        case 0x21bd80u: goto label_21bd80;
        case 0x21bda8u: goto label_21bda8;
        case 0x21bdecu: goto label_21bdec;
        case 0x21be00u: goto label_21be00;
        case 0x21be08u: goto label_21be08;
        default: break;
    }

    ctx->pc = 0x21bcd0u;

label_21bcd0:
    // 0x21bcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bcd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bcd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21bcdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21bcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bce0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bce4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BCE4u;
    SET_GPR_U32(ctx, 31, 0x21BCECu);
    ctx->pc = 0x21BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BCE4u;
            // 0x21bce8: 0x24841650  addiu       $a0, $a0, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCECu; }
        if (ctx->pc != 0x21BCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCECu; }
        if (ctx->pc != 0x21BCECu) { return; }
    }
    ctx->pc = 0x21BCECu;
label_21bcec:
    // 0x21bcec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21bcf0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bcf4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21BCF4u;
    SET_GPR_U32(ctx, 31, 0x21BCFCu);
    ctx->pc = 0x21BCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BCF4u;
            // 0x21bcf8: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCFCu; }
        if (ctx->pc != 0x21BCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BCFCu; }
        if (ctx->pc != 0x21BCFCu) { return; }
    }
    ctx->pc = 0x21BCFCu;
label_21bcfc:
    // 0x21bcfc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21bd00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21bd04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bd08: 0x24841670  addiu       $a0, $a0, 0x1670
    ctx->pc = 0x21bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5744));
    // 0x21bd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bd10: 0x8043e52  j           func_10F948
    ctx->pc = 0x21BD10u;
    ctx->pc = 0x21BD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD10u;
            // 0x21bd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21BD18u;
label_21bd18:
    // 0x21bd18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bd1c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bd1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bd20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bd24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21bd28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bd2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21bd2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21bd34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bd34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21bd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21bd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21bd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21bd44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21bd44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd48: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21bd4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21bd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21bd50: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21bd50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21bd54: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21BD54u;
    SET_GPR_U32(ctx, 31, 0x21BD5Cu);
    ctx->pc = 0x21BD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD54u;
            // 0x21bd58: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD5Cu; }
        if (ctx->pc != 0x21BD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD5Cu; }
        if (ctx->pc != 0x21BD5Cu) { return; }
    }
    ctx->pc = 0x21BD5Cu;
label_21bd5c:
    // 0x21bd5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21bd60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd68: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21BD68u;
    SET_GPR_U32(ctx, 31, 0x21BD70u);
    ctx->pc = 0x21BD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD68u;
            // 0x21bd6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD70u; }
        if (ctx->pc != 0x21BD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD70u; }
        if (ctx->pc != 0x21BD70u) { return; }
    }
    ctx->pc = 0x21BD70u;
label_21bd70:
    // 0x21bd70: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21bd70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21bd74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd78: 0xc086f34  jal         func_21BCD0
    ctx->pc = 0x21BD78u;
    SET_GPR_U32(ctx, 31, 0x21BD80u);
    ctx->pc = 0x21BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD78u;
            // 0x21bd7c: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21BCD0u;
    goto label_21bcd0;
    ctx->pc = 0x21BD80u;
label_21bd80:
    // 0x21bd80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21bd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bd88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bd8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21bd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bd90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21bd90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21bd94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21bd94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bd98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21bd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21bd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BD9Cu;
            // 0x21bda0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21BDA4u;
    // 0x21bda4: 0x0  nop
    ctx->pc = 0x21bda4u;
    // NOP
label_21bda8:
    // 0x21bda8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bdac: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21bdacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21bdb0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21bdb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bdb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bdbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21bdc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21bdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21bdc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21bdc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21bdd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21bdd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdd4: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21bdd8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21bdd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bddc: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21bddcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21bde0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21bde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21bde4: 0xc084612  jal         func_211848
    ctx->pc = 0x21BDE4u;
    SET_GPR_U32(ctx, 31, 0x21BDECu);
    ctx->pc = 0x21BDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BDE4u;
            // 0x21bde8: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BDECu; }
        if (ctx->pc != 0x21BDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BDECu; }
        if (ctx->pc != 0x21BDECu) { return; }
    }
    ctx->pc = 0x21BDECu;
label_21bdec:
    // 0x21bdec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21bdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21bdf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdf8: 0xc084612  jal         func_211848
    ctx->pc = 0x21BDF8u;
    SET_GPR_U32(ctx, 31, 0x21BE00u);
    ctx->pc = 0x21BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BDF8u;
            // 0x21bdfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE00u; }
        if (ctx->pc != 0x21BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE00u; }
        if (ctx->pc != 0x21BE00u) { return; }
    }
    ctx->pc = 0x21BE00u;
label_21be00:
    // 0x21be00: 0xc086f34  jal         func_21BCD0
    ctx->pc = 0x21BE00u;
    SET_GPR_U32(ctx, 31, 0x21BE08u);
    ctx->pc = 0x21BE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE00u;
            // 0x21be04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21BCD0u;
    goto label_21bcd0;
    ctx->pc = 0x21BE08u;
label_21be08:
    // 0x21be08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21be0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21be0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21be10: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21be10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21be14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21be14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21be18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21be18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21be1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21be1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21be20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21be20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21be24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21be24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21be28: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE28u;
            // 0x21be2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21BE30u;
    ctx->pc = 0x21be30u;
}
