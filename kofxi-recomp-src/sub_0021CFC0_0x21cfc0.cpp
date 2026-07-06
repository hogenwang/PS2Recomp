#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CFC0
// Address: 0x21cfc0 - 0x21d198
void sub_0021CFC0_0x21cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CFC0_0x21cfc0");
#endif

    switch (ctx->pc) {
        case 0x21cfdcu: goto label_21cfdc;
        case 0x21cfecu: goto label_21cfec;
        case 0x21cffcu: goto label_21cffc;
        case 0x21d010u: goto label_21d010;
        case 0x21d030u: goto label_21d030;
        case 0x21d074u: goto label_21d074;
        case 0x21d088u: goto label_21d088;
        case 0x21d09cu: goto label_21d09c;
        case 0x21d0b0u: goto label_21d0b0;
        case 0x21d0c0u: goto label_21d0c0;
        case 0x21d0e8u: goto label_21d0e8;
        case 0x21d12cu: goto label_21d12c;
        case 0x21d140u: goto label_21d140;
        case 0x21d154u: goto label_21d154;
        case 0x21d168u: goto label_21d168;
        case 0x21d170u: goto label_21d170;
        default: break;
    }

    ctx->pc = 0x21cfc0u;

label_21cfc0:
    // 0x21cfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cfc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cfc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cfcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfd0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cfd4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CFD4u;
    SET_GPR_U32(ctx, 31, 0x21CFDCu);
    ctx->pc = 0x21CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFD4u;
            // 0x21cfd8: 0x24841868  addiu       $a0, $a0, 0x1868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFDCu; }
        if (ctx->pc != 0x21CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFDCu; }
        if (ctx->pc != 0x21CFDCu) { return; }
    }
    ctx->pc = 0x21CFDCu;
label_21cfdc:
    // 0x21cfdc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cfe0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cfe4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CFE4u;
    SET_GPR_U32(ctx, 31, 0x21CFECu);
    ctx->pc = 0x21CFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFE4u;
            // 0x21cfe8: 0x24841808  addiu       $a0, $a0, 0x1808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFECu; }
        if (ctx->pc != 0x21CFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFECu; }
        if (ctx->pc != 0x21CFECu) { return; }
    }
    ctx->pc = 0x21CFECu;
label_21cfec:
    // 0x21cfec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21cfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21cff0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21cff4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21CFF4u;
    SET_GPR_U32(ctx, 31, 0x21CFFCu);
    ctx->pc = 0x21CFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CFF4u;
            // 0x21cff8: 0x24841818  addiu       $a0, $a0, 0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFFCu; }
        if (ctx->pc != 0x21CFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CFFCu; }
        if (ctx->pc != 0x21CFFCu) { return; }
    }
    ctx->pc = 0x21CFFCu;
label_21cffc:
    // 0x21cffc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d000: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x21d000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21d004: 0x24841858  addiu       $a0, $a0, 0x1858
    ctx->pc = 0x21d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6232));
    // 0x21d008: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D008u;
    SET_GPR_U32(ctx, 31, 0x21D010u);
    ctx->pc = 0x21D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D008u;
            // 0x21d00c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D010u; }
        if (ctx->pc != 0x21D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D010u; }
        if (ctx->pc != 0x21D010u) { return; }
    }
    ctx->pc = 0x21D010u;
label_21d010:
    // 0x21d010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d014: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d018: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d020: 0x24841888  addiu       $a0, $a0, 0x1888
    ctx->pc = 0x21d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6280));
    // 0x21d024: 0x8043e52  j           func_10F948
    ctx->pc = 0x21D024u;
    ctx->pc = 0x21D028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D024u;
            // 0x21d028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21D02Cu;
    // 0x21d02c: 0x0  nop
    ctx->pc = 0x21d02cu;
    // NOP
label_21d030:
    // 0x21d030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d034: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d034u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d038: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21d03c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21d040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d048: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d04c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21d04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d050: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d054: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d058: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21d05c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21d05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d060: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d064: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21d064u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21d068: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21d068u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d06c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21D06Cu;
    SET_GPR_U32(ctx, 31, 0x21D074u);
    ctx->pc = 0x21D070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D06Cu;
            // 0x21d070: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D074u; }
        if (ctx->pc != 0x21D074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D074u; }
        if (ctx->pc != 0x21D074u) { return; }
    }
    ctx->pc = 0x21D074u;
label_21d074:
    // 0x21d074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d078: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d07c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d080: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21D080u;
    SET_GPR_U32(ctx, 31, 0x21D088u);
    ctx->pc = 0x21D084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D080u;
            // 0x21d084: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D088u; }
        if (ctx->pc != 0x21D088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D088u; }
        if (ctx->pc != 0x21D088u) { return; }
    }
    ctx->pc = 0x21D088u;
label_21d088:
    // 0x21d088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d08c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d090: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d094: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21D094u;
    SET_GPR_U32(ctx, 31, 0x21D09Cu);
    ctx->pc = 0x21D098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D094u;
            // 0x21d098: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D09Cu; }
        if (ctx->pc != 0x21D09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D09Cu; }
        if (ctx->pc != 0x21D09Cu) { return; }
    }
    ctx->pc = 0x21D09Cu;
label_21d09c:
    // 0x21d09c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0a8: 0xc08449a  jal         func_211268
    ctx->pc = 0x21D0A8u;
    SET_GPR_U32(ctx, 31, 0x21D0B0u);
    ctx->pc = 0x21D0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0A8u;
            // 0x21d0ac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0B0u; }
        if (ctx->pc != 0x21D0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0B0u; }
        if (ctx->pc != 0x21D0B0u) { return; }
    }
    ctx->pc = 0x21D0B0u;
label_21d0b0:
    // 0x21d0b0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21d0b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21d0b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0b8: 0xc0873f0  jal         func_21CFC0
    ctx->pc = 0x21D0B8u;
    SET_GPR_U32(ctx, 31, 0x21D0C0u);
    ctx->pc = 0x21D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0B8u;
            // 0x21d0bc: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CFC0u;
    goto label_21cfc0;
    ctx->pc = 0x21D0C0u;
label_21d0c0:
    // 0x21d0c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21d0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d0c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d0c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d0cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d0ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d0d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d0d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d0d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21d0d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d0d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21D0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D0DCu;
            // 0x21d0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D0E4u;
    // 0x21d0e4: 0x0  nop
    ctx->pc = 0x21d0e4u;
    // NOP
label_21d0e8:
    // 0x21d0e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d0ec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d0ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d0f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21d0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21d0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d0f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d0fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d104: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21d108: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21d108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d10c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21d110: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21d110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d114: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21d114u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21d118: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d11c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21d11cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d120: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21d120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d124: 0xc084612  jal         func_211848
    ctx->pc = 0x21D124u;
    SET_GPR_U32(ctx, 31, 0x21D12Cu);
    ctx->pc = 0x21D128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D124u;
            // 0x21d128: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D12Cu; }
        if (ctx->pc != 0x21D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D12Cu; }
        if (ctx->pc != 0x21D12Cu) { return; }
    }
    ctx->pc = 0x21D12Cu;
label_21d12c:
    // 0x21d12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d130: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d134: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d138: 0xc084612  jal         func_211848
    ctx->pc = 0x21D138u;
    SET_GPR_U32(ctx, 31, 0x21D140u);
    ctx->pc = 0x21D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D138u;
            // 0x21d13c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D140u; }
        if (ctx->pc != 0x21D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D140u; }
        if (ctx->pc != 0x21D140u) { return; }
    }
    ctx->pc = 0x21D140u;
label_21d140:
    // 0x21d140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d148: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d14c: 0xc084582  jal         func_211608
    ctx->pc = 0x21D14Cu;
    SET_GPR_U32(ctx, 31, 0x21D154u);
    ctx->pc = 0x21D150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D14Cu;
            // 0x21d150: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D154u; }
        if (ctx->pc != 0x21D154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D154u; }
        if (ctx->pc != 0x21D154u) { return; }
    }
    ctx->pc = 0x21D154u;
label_21d154:
    // 0x21d154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d158: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d160: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21D160u;
    SET_GPR_U32(ctx, 31, 0x21D168u);
    ctx->pc = 0x21D164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D160u;
            // 0x21d164: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D168u; }
        if (ctx->pc != 0x21D168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D168u; }
        if (ctx->pc != 0x21D168u) { return; }
    }
    ctx->pc = 0x21D168u;
label_21d168:
    // 0x21d168: 0xc0873f0  jal         func_21CFC0
    ctx->pc = 0x21D168u;
    SET_GPR_U32(ctx, 31, 0x21D170u);
    ctx->pc = 0x21D16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D168u;
            // 0x21d16c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CFC0u;
    goto label_21cfc0;
    ctx->pc = 0x21D170u;
label_21d170:
    // 0x21d170: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21d174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d178: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21d178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21d17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d180: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d184: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21d184u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d188: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21d188u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d18c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d190: 0x3e00008  jr          $ra
    ctx->pc = 0x21D190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D190u;
            // 0x21d194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D198u;
    ctx->pc = 0x21d198u;
}
