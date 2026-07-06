#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021DBE0
// Address: 0x21dbe0 - 0x21dd48
void sub_0021DBE0_0x21dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DBE0_0x21dbe0");
#endif

    switch (ctx->pc) {
        case 0x21dbfcu: goto label_21dbfc;
        case 0x21dc0cu: goto label_21dc0c;
        case 0x21dc30u: goto label_21dc30;
        case 0x21dc74u: goto label_21dc74;
        case 0x21dc88u: goto label_21dc88;
        case 0x21dc98u: goto label_21dc98;
        case 0x21dcc0u: goto label_21dcc0;
        case 0x21dd04u: goto label_21dd04;
        case 0x21dd18u: goto label_21dd18;
        case 0x21dd20u: goto label_21dd20;
        default: break;
    }

    ctx->pc = 0x21dbe0u;

label_21dbe0:
    // 0x21dbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21dbe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21dbe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21dbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21dbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbf0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dbf4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DBF4u;
    SET_GPR_U32(ctx, 31, 0x21DBFCu);
    ctx->pc = 0x21DBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DBF4u;
            // 0x21dbf8: 0x24841a58  addiu       $a0, $a0, 0x1A58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DBFCu; }
        if (ctx->pc != 0x21DBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DBFCu; }
        if (ctx->pc != 0x21DBFCu) { return; }
    }
    ctx->pc = 0x21DBFCu;
label_21dbfc:
    // 0x21dbfc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21dc00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dc04: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21DC04u;
    SET_GPR_U32(ctx, 31, 0x21DC0Cu);
    ctx->pc = 0x21DC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC04u;
            // 0x21dc08: 0x24841a78  addiu       $a0, $a0, 0x1A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC0Cu; }
        if (ctx->pc != 0x21DC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC0Cu; }
        if (ctx->pc != 0x21DC0Cu) { return; }
    }
    ctx->pc = 0x21DC0Cu;
label_21dc0c:
    // 0x21dc0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x21dc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21dc10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21dc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21dc18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21dc1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21dc1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dc20: 0x24841a88  addiu       $a0, $a0, 0x1A88
    ctx->pc = 0x21dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6792));
    // 0x21dc24: 0x8043e52  j           func_10F948
    ctx->pc = 0x21DC24u;
    ctx->pc = 0x21DC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC24u;
            // 0x21dc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21DC2Cu;
    // 0x21dc2c: 0x0  nop
    ctx->pc = 0x21dc2cu;
    // NOP
label_21dc30:
    // 0x21dc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21dc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21dc34: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21dc34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21dc38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21dc3c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21dc40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21dc44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21dc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21dc4c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21dc4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21dc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21dc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21dc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21dc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21dc5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21dc5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc60: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21dc64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21dc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21dc68: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21dc68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21dc6c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21DC6Cu;
    SET_GPR_U32(ctx, 31, 0x21DC74u);
    ctx->pc = 0x21DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC6Cu;
            // 0x21dc70: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC74u; }
        if (ctx->pc != 0x21DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC74u; }
        if (ctx->pc != 0x21DC74u) { return; }
    }
    ctx->pc = 0x21DC74u;
label_21dc74:
    // 0x21dc74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21dc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21dc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc80: 0xc08449a  jal         func_211268
    ctx->pc = 0x21DC80u;
    SET_GPR_U32(ctx, 31, 0x21DC88u);
    ctx->pc = 0x21DC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC80u;
            // 0x21dc84: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC88u; }
        if (ctx->pc != 0x21DC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC88u; }
        if (ctx->pc != 0x21DC88u) { return; }
    }
    ctx->pc = 0x21DC88u;
label_21dc88:
    // 0x21dc88: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21dc88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21dc8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc90: 0xc0876f8  jal         func_21DBE0
    ctx->pc = 0x21DC90u;
    SET_GPR_U32(ctx, 31, 0x21DC98u);
    ctx->pc = 0x21DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DC90u;
            // 0x21dc94: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBE0u;
    goto label_21dbe0;
    ctx->pc = 0x21DC98u;
label_21dc98:
    // 0x21dc98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21dc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21dc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dca0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21dca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21dca4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21dca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dca8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21dca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21dcac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21dcacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dcb0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21dcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DCB4u;
            // 0x21dcb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DCBCu;
    // 0x21dcbc: 0x0  nop
    ctx->pc = 0x21dcbcu;
    // NOP
label_21dcc0:
    // 0x21dcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21dcc4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21dcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21dcc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21dccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21dcd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21dcd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21dcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21dcd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21dcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21dce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21dce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dce4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21dce8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21dce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcec: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21dcf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21dcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcf4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21dcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21dcf8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21dcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21dcfc: 0xc084612  jal         func_211848
    ctx->pc = 0x21DCFCu;
    SET_GPR_U32(ctx, 31, 0x21DD04u);
    ctx->pc = 0x21DD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DCFCu;
            // 0x21dd00: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD04u; }
        if (ctx->pc != 0x21DD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD04u; }
        if (ctx->pc != 0x21DD04u) { return; }
    }
    ctx->pc = 0x21DD04u;
label_21dd04:
    // 0x21dd04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21dd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd08: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21dd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd10: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21DD10u;
    SET_GPR_U32(ctx, 31, 0x21DD18u);
    ctx->pc = 0x21DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD10u;
            // 0x21dd14: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD18u; }
        if (ctx->pc != 0x21DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD18u; }
        if (ctx->pc != 0x21DD18u) { return; }
    }
    ctx->pc = 0x21DD18u;
label_21dd18:
    // 0x21dd18: 0xc0876f8  jal         func_21DBE0
    ctx->pc = 0x21DD18u;
    SET_GPR_U32(ctx, 31, 0x21DD20u);
    ctx->pc = 0x21DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD18u;
            // 0x21dd1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBE0u;
    goto label_21dbe0;
    ctx->pc = 0x21DD20u;
label_21dd20:
    // 0x21dd20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21dd24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21dd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21dd28: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21dd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21dd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dd30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21dd30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dd34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21dd34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21dd38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21dd38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21dd3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21dd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21dd40: 0x3e00008  jr          $ra
    ctx->pc = 0x21DD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD40u;
            // 0x21dd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DD48u;
    ctx->pc = 0x21dd48u;
}
