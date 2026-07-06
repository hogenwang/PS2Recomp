#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00219008
// Address: 0x219008 - 0x2192c0
void sub_00219008_0x219008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219008_0x219008");
#endif

    switch (ctx->pc) {
        case 0x219024u: goto label_219024;
        case 0x219034u: goto label_219034;
        case 0x219044u: goto label_219044;
        case 0x219054u: goto label_219054;
        case 0x219064u: goto label_219064;
        case 0x219074u: goto label_219074;
        case 0x219084u: goto label_219084;
        case 0x219094u: goto label_219094;
        case 0x2190b8u: goto label_2190b8;
        case 0x2190fcu: goto label_2190fc;
        case 0x219110u: goto label_219110;
        case 0x219124u: goto label_219124;
        case 0x219138u: goto label_219138;
        case 0x21914cu: goto label_21914c;
        case 0x219160u: goto label_219160;
        case 0x219174u: goto label_219174;
        case 0x219188u: goto label_219188;
        case 0x219198u: goto label_219198;
        case 0x2191c0u: goto label_2191c0;
        case 0x219204u: goto label_219204;
        case 0x219218u: goto label_219218;
        case 0x21922cu: goto label_21922c;
        case 0x219240u: goto label_219240;
        case 0x219254u: goto label_219254;
        case 0x219268u: goto label_219268;
        case 0x21927cu: goto label_21927c;
        case 0x219290u: goto label_219290;
        case 0x219298u: goto label_219298;
        default: break;
    }

    ctx->pc = 0x219008u;

label_219008:
    // 0x219008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21900c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219018: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21901c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21901Cu;
    SET_GPR_U32(ctx, 31, 0x219024u);
    ctx->pc = 0x219020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21901Cu;
            // 0x219020: 0x24841200  addiu       $a0, $a0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219024u; }
        if (ctx->pc != 0x219024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219024u; }
        if (ctx->pc != 0x219024u) { return; }
    }
    ctx->pc = 0x219024u;
label_219024:
    // 0x219024: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x219024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219028: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21902c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21902Cu;
    SET_GPR_U32(ctx, 31, 0x219034u);
    ctx->pc = 0x219030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21902Cu;
            // 0x219030: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219034u; }
        if (ctx->pc != 0x219034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219034u; }
        if (ctx->pc != 0x219034u) { return; }
    }
    ctx->pc = 0x219034u;
label_219034:
    // 0x219034: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219038: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x219038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21903c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21903Cu;
    SET_GPR_U32(ctx, 31, 0x219044u);
    ctx->pc = 0x219040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21903Cu;
            // 0x219040: 0x24841220  addiu       $a0, $a0, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219044u; }
        if (ctx->pc != 0x219044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219044u; }
        if (ctx->pc != 0x219044u) { return; }
    }
    ctx->pc = 0x219044u;
label_219044:
    // 0x219044: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219048: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x219048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x21904c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21904Cu;
    SET_GPR_U32(ctx, 31, 0x219054u);
    ctx->pc = 0x219050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21904Cu;
            // 0x219050: 0x24841160  addiu       $a0, $a0, 0x1160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219054u; }
        if (ctx->pc != 0x219054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219054u; }
        if (ctx->pc != 0x219054u) { return; }
    }
    ctx->pc = 0x219054u;
label_219054:
    // 0x219054: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219058: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x219058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x21905c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21905Cu;
    SET_GPR_U32(ctx, 31, 0x219064u);
    ctx->pc = 0x219060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21905Cu;
            // 0x219060: 0x24841230  addiu       $a0, $a0, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219064u; }
        if (ctx->pc != 0x219064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219064u; }
        if (ctx->pc != 0x219064u) { return; }
    }
    ctx->pc = 0x219064u;
label_219064:
    // 0x219064: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219068: 0x2605012c  addiu       $a1, $s0, 0x12C
    ctx->pc = 0x219068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x21906c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21906Cu;
    SET_GPR_U32(ctx, 31, 0x219074u);
    ctx->pc = 0x219070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21906Cu;
            // 0x219070: 0x248411c0  addiu       $a0, $a0, 0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219074u; }
        if (ctx->pc != 0x219074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219074u; }
        if (ctx->pc != 0x219074u) { return; }
    }
    ctx->pc = 0x219074u;
label_219074:
    // 0x219074: 0x8e05022c  lw          $a1, 0x22C($s0)
    ctx->pc = 0x219074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x219078: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21907c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21907Cu;
    SET_GPR_U32(ctx, 31, 0x219084u);
    ctx->pc = 0x219080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21907Cu;
            // 0x219080: 0x248411d0  addiu       $a0, $a0, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219084u; }
        if (ctx->pc != 0x219084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219084u; }
        if (ctx->pc != 0x219084u) { return; }
    }
    ctx->pc = 0x219084u;
label_219084:
    // 0x219084: 0x8e050230  lw          $a1, 0x230($s0)
    ctx->pc = 0x219084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x219088: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21908c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21908Cu;
    SET_GPR_U32(ctx, 31, 0x219094u);
    ctx->pc = 0x219090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21908Cu;
            // 0x219090: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219094u; }
        if (ctx->pc != 0x219094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219094u; }
        if (ctx->pc != 0x219094u) { return; }
    }
    ctx->pc = 0x219094u;
label_219094:
    // 0x219094: 0x26100234  addiu       $s0, $s0, 0x234
    ctx->pc = 0x219094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x219098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21909c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21909cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2190a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2190a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2190a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2190a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2190a8: 0x248411f0  addiu       $a0, $a0, 0x11F0
    ctx->pc = 0x2190a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4592));
    // 0x2190ac: 0x8043e52  j           func_10F948
    ctx->pc = 0x2190ACu;
    ctx->pc = 0x2190B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2190ACu;
            // 0x2190b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2190B4u;
    // 0x2190b4: 0x0  nop
    ctx->pc = 0x2190b4u;
    // NOP
label_2190b8:
    // 0x2190b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2190b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2190bc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2190bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2190c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2190c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2190c4: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2190c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2190c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2190c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2190cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2190ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2190d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2190d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2190d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2190d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2190d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2190dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2190dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2190e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2190e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2190e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2190e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190ec: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x2190ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2190f0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2190f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2190f4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2190F4u;
    SET_GPR_U32(ctx, 31, 0x2190FCu);
    ctx->pc = 0x2190F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2190F4u;
            // 0x2190f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190FCu; }
        if (ctx->pc != 0x2190FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190FCu; }
        if (ctx->pc != 0x2190FCu) { return; }
    }
    ctx->pc = 0x2190FCu;
label_2190fc:
    // 0x2190fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2190fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219100: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219104: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219108: 0xc08449a  jal         func_211268
    ctx->pc = 0x219108u;
    SET_GPR_U32(ctx, 31, 0x219110u);
    ctx->pc = 0x21910Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219108u;
            // 0x21910c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219110u; }
        if (ctx->pc != 0x219110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219110u; }
        if (ctx->pc != 0x219110u) { return; }
    }
    ctx->pc = 0x219110u;
label_219110:
    // 0x219110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219118: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21911c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21911Cu;
    SET_GPR_U32(ctx, 31, 0x219124u);
    ctx->pc = 0x219120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21911Cu;
            // 0x219120: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219124u; }
        if (ctx->pc != 0x219124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219124u; }
        if (ctx->pc != 0x219124u) { return; }
    }
    ctx->pc = 0x219124u;
label_219124:
    // 0x219124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21912c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21912cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219130: 0xc08449a  jal         func_211268
    ctx->pc = 0x219130u;
    SET_GPR_U32(ctx, 31, 0x219138u);
    ctx->pc = 0x219134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219130u;
            // 0x219134: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219138u; }
        if (ctx->pc != 0x219138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219138u; }
        if (ctx->pc != 0x219138u) { return; }
    }
    ctx->pc = 0x219138u;
label_219138:
    // 0x219138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21913c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219140: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219144: 0xc08449a  jal         func_211268
    ctx->pc = 0x219144u;
    SET_GPR_U32(ctx, 31, 0x21914Cu);
    ctx->pc = 0x219148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219144u;
            // 0x219148: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21914Cu; }
        if (ctx->pc != 0x21914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21914Cu; }
        if (ctx->pc != 0x21914Cu) { return; }
    }
    ctx->pc = 0x21914Cu;
label_21914c:
    // 0x21914c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219154: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219158: 0xc0844dc  jal         func_211370
    ctx->pc = 0x219158u;
    SET_GPR_U32(ctx, 31, 0x219160u);
    ctx->pc = 0x21915Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219158u;
            // 0x21915c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219160u; }
        if (ctx->pc != 0x219160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219160u; }
        if (ctx->pc != 0x219160u) { return; }
    }
    ctx->pc = 0x219160u;
label_219160:
    // 0x219160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219168: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21916c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21916Cu;
    SET_GPR_U32(ctx, 31, 0x219174u);
    ctx->pc = 0x219170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21916Cu;
            // 0x219170: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219174u; }
        if (ctx->pc != 0x219174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219174u; }
        if (ctx->pc != 0x219174u) { return; }
    }
    ctx->pc = 0x219174u;
label_219174:
    // 0x219174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219178: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x219178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21917c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219180: 0xc08449a  jal         func_211268
    ctx->pc = 0x219180u;
    SET_GPR_U32(ctx, 31, 0x219188u);
    ctx->pc = 0x219184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219180u;
            // 0x219184: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219188u; }
        if (ctx->pc != 0x219188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219188u; }
        if (ctx->pc != 0x219188u) { return; }
    }
    ctx->pc = 0x219188u;
label_219188:
    // 0x219188: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21918c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219190: 0xc086402  jal         func_219008
    ctx->pc = 0x219190u;
    SET_GPR_U32(ctx, 31, 0x219198u);
    ctx->pc = 0x219194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219190u;
            // 0x219194: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219008u;
    goto label_219008;
    ctx->pc = 0x219198u;
label_219198:
    // 0x219198: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x219198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21919c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21919cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2191a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2191a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2191a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2191a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2191a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2191a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2191ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2191acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2191b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2191b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2191b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2191B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2191B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2191B4u;
            // 0x2191b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2191BCu;
    // 0x2191bc: 0x0  nop
    ctx->pc = 0x2191bcu;
    // NOP
label_2191c0:
    // 0x2191c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2191c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2191c4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2191c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2191c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2191c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2191cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2191ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2191d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2191d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2191d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2191d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2191d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2191d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2191dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2191e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2191e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2191e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2191e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2191e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191ec: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2191ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2191f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2191f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2191f4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2191f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2191f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2191f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2191fc: 0xc084612  jal         func_211848
    ctx->pc = 0x2191FCu;
    SET_GPR_U32(ctx, 31, 0x219204u);
    ctx->pc = 0x219200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2191FCu;
            // 0x219200: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219204u; }
        if (ctx->pc != 0x219204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219204u; }
        if (ctx->pc != 0x219204u) { return; }
    }
    ctx->pc = 0x219204u;
label_219204:
    // 0x219204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219208: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x219208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21920c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21920cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219210: 0xc0845c2  jal         func_211708
    ctx->pc = 0x219210u;
    SET_GPR_U32(ctx, 31, 0x219218u);
    ctx->pc = 0x219214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219210u;
            // 0x219214: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219218u; }
        if (ctx->pc != 0x219218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219218u; }
        if (ctx->pc != 0x219218u) { return; }
    }
    ctx->pc = 0x219218u;
label_219218:
    // 0x219218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21921c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219220: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219224: 0xc0845c2  jal         func_211708
    ctx->pc = 0x219224u;
    SET_GPR_U32(ctx, 31, 0x21922Cu);
    ctx->pc = 0x219228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219224u;
            // 0x219228: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21922Cu; }
        if (ctx->pc != 0x21922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21922Cu; }
        if (ctx->pc != 0x21922Cu) { return; }
    }
    ctx->pc = 0x21922Cu;
label_21922c:
    // 0x21922c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219230: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x219230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219234: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219238: 0xc0845c2  jal         func_211708
    ctx->pc = 0x219238u;
    SET_GPR_U32(ctx, 31, 0x219240u);
    ctx->pc = 0x21923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219238u;
            // 0x21923c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219240u; }
        if (ctx->pc != 0x219240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219240u; }
        if (ctx->pc != 0x219240u) { return; }
    }
    ctx->pc = 0x219240u;
label_219240:
    // 0x219240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219244: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x219244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219248: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21924c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21924Cu;
    SET_GPR_U32(ctx, 31, 0x219254u);
    ctx->pc = 0x219250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21924Cu;
            // 0x219250: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219254u; }
        if (ctx->pc != 0x219254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219254u; }
        if (ctx->pc != 0x219254u) { return; }
    }
    ctx->pc = 0x219254u;
label_219254:
    // 0x219254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x219258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21925c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21925cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219260: 0xc084612  jal         func_211848
    ctx->pc = 0x219260u;
    SET_GPR_U32(ctx, 31, 0x219268u);
    ctx->pc = 0x219264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219260u;
            // 0x219264: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219268u; }
        if (ctx->pc != 0x219268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219268u; }
        if (ctx->pc != 0x219268u) { return; }
    }
    ctx->pc = 0x219268u;
label_219268:
    // 0x219268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21926c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21926cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219270: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219274: 0xc084612  jal         func_211848
    ctx->pc = 0x219274u;
    SET_GPR_U32(ctx, 31, 0x21927Cu);
    ctx->pc = 0x219278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219274u;
            // 0x219278: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21927Cu; }
        if (ctx->pc != 0x21927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21927Cu; }
        if (ctx->pc != 0x21927Cu) { return; }
    }
    ctx->pc = 0x21927Cu;
label_21927c:
    // 0x21927c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21927cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219280: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219288: 0xc0845c2  jal         func_211708
    ctx->pc = 0x219288u;
    SET_GPR_U32(ctx, 31, 0x219290u);
    ctx->pc = 0x21928Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219288u;
            // 0x21928c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219290u; }
        if (ctx->pc != 0x219290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219290u; }
        if (ctx->pc != 0x219290u) { return; }
    }
    ctx->pc = 0x219290u;
label_219290:
    // 0x219290: 0xc086402  jal         func_219008
    ctx->pc = 0x219290u;
    SET_GPR_U32(ctx, 31, 0x219298u);
    ctx->pc = 0x219294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219290u;
            // 0x219294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219008u;
    goto label_219008;
    ctx->pc = 0x219298u;
label_219298:
    // 0x219298: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x219298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21929c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21929cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2192a0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2192a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2192a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2192a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2192a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2192a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2192ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2192acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2192b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2192b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2192b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2192b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2192b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2192B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2192BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2192B8u;
            // 0x2192bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2192C0u;
    ctx->pc = 0x2192c0u;
}
