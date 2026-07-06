#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00214B28
// Address: 0x214b28 - 0x214d38
void sub_00214B28_0x214b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214B28_0x214b28");
#endif

    switch (ctx->pc) {
        case 0x214b44u: goto label_214b44;
        case 0x214b54u: goto label_214b54;
        case 0x214b64u: goto label_214b64;
        case 0x214b74u: goto label_214b74;
        case 0x214b84u: goto label_214b84;
        case 0x214ba8u: goto label_214ba8;
        case 0x214becu: goto label_214bec;
        case 0x214c00u: goto label_214c00;
        case 0x214c14u: goto label_214c14;
        case 0x214c28u: goto label_214c28;
        case 0x214c3cu: goto label_214c3c;
        case 0x214c4cu: goto label_214c4c;
        case 0x214c70u: goto label_214c70;
        case 0x214cb4u: goto label_214cb4;
        case 0x214cc8u: goto label_214cc8;
        case 0x214cdcu: goto label_214cdc;
        case 0x214cf0u: goto label_214cf0;
        case 0x214d04u: goto label_214d04;
        case 0x214d0cu: goto label_214d0c;
        default: break;
    }

    ctx->pc = 0x214b28u;

label_214b28:
    // 0x214b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214b30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b38: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214b3c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214B3Cu;
    SET_GPR_U32(ctx, 31, 0x214B44u);
    ctx->pc = 0x214B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214B3Cu;
            // 0x214b40: 0x24840988  addiu       $a0, $a0, 0x988 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B44u; }
        if (ctx->pc != 0x214B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B44u; }
        if (ctx->pc != 0x214B44u) { return; }
    }
    ctx->pc = 0x214B44u;
label_214b44:
    // 0x214b44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x214b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214b48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214b4c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214B4Cu;
    SET_GPR_U32(ctx, 31, 0x214B54u);
    ctx->pc = 0x214B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214B4Cu;
            // 0x214b50: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B54u; }
        if (ctx->pc != 0x214B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B54u; }
        if (ctx->pc != 0x214B54u) { return; }
    }
    ctx->pc = 0x214B54u;
label_214b54:
    // 0x214b54: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214b58: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x214b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x214b5c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214B5Cu;
    SET_GPR_U32(ctx, 31, 0x214B64u);
    ctx->pc = 0x214B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214B5Cu;
            // 0x214b60: 0x24840958  addiu       $a0, $a0, 0x958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B64u; }
        if (ctx->pc != 0x214B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B64u; }
        if (ctx->pc != 0x214B64u) { return; }
    }
    ctx->pc = 0x214B64u;
label_214b64:
    // 0x214b64: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x214b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x214b68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214b6c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214B6Cu;
    SET_GPR_U32(ctx, 31, 0x214B74u);
    ctx->pc = 0x214B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214B6Cu;
            // 0x214b70: 0x248408d8  addiu       $a0, $a0, 0x8D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B74u; }
        if (ctx->pc != 0x214B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B74u; }
        if (ctx->pc != 0x214B74u) { return; }
    }
    ctx->pc = 0x214B74u;
label_214b74:
    // 0x214b74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x214b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214b78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214b7c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214B7Cu;
    SET_GPR_U32(ctx, 31, 0x214B84u);
    ctx->pc = 0x214B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214B7Cu;
            // 0x214b80: 0x248408e8  addiu       $a0, $a0, 0x8E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B84u; }
        if (ctx->pc != 0x214B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214B84u; }
        if (ctx->pc != 0x214B84u) { return; }
    }
    ctx->pc = 0x214B84u;
label_214b84:
    // 0x214b84: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x214b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x214b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214b90: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b98: 0x248408f8  addiu       $a0, $a0, 0x8F8
    ctx->pc = 0x214b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2296));
    // 0x214b9c: 0x8043e52  j           func_10F948
    ctx->pc = 0x214B9Cu;
    ctx->pc = 0x214BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214B9Cu;
            // 0x214ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x214BA4u;
    // 0x214ba4: 0x0  nop
    ctx->pc = 0x214ba4u;
    // NOP
label_214ba8:
    // 0x214ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214bac: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214bacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214bb0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x214bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214bb4: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x214bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x214bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214bbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214bc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214bc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x214bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214bd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x214bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bdc: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x214bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214be0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x214be0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214be4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214BE4u;
    SET_GPR_U32(ctx, 31, 0x214BECu);
    ctx->pc = 0x214BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214BE4u;
            // 0x214be8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BECu; }
        if (ctx->pc != 0x214BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214BECu; }
        if (ctx->pc != 0x214BECu) { return; }
    }
    ctx->pc = 0x214BECu;
label_214bec:
    // 0x214bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bf4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bf8: 0xc08449a  jal         func_211268
    ctx->pc = 0x214BF8u;
    SET_GPR_U32(ctx, 31, 0x214C00u);
    ctx->pc = 0x214BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214BF8u;
            // 0x214bfc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C00u; }
        if (ctx->pc != 0x214C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C00u; }
        if (ctx->pc != 0x214C00u) { return; }
    }
    ctx->pc = 0x214C00u;
label_214c00:
    // 0x214c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c0c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214C0Cu;
    SET_GPR_U32(ctx, 31, 0x214C14u);
    ctx->pc = 0x214C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214C0Cu;
            // 0x214c10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C14u; }
        if (ctx->pc != 0x214C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C14u; }
        if (ctx->pc != 0x214C14u) { return; }
    }
    ctx->pc = 0x214C14u;
label_214c14:
    // 0x214c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c20: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214C20u;
    SET_GPR_U32(ctx, 31, 0x214C28u);
    ctx->pc = 0x214C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214C20u;
            // 0x214c24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C28u; }
        if (ctx->pc != 0x214C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C28u; }
        if (ctx->pc != 0x214C28u) { return; }
    }
    ctx->pc = 0x214C28u;
label_214c28:
    // 0x214c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c34: 0xc08449a  jal         func_211268
    ctx->pc = 0x214C34u;
    SET_GPR_U32(ctx, 31, 0x214C3Cu);
    ctx->pc = 0x214C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214C34u;
            // 0x214c38: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C3Cu; }
        if (ctx->pc != 0x214C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214C3Cu; }
        if (ctx->pc != 0x214C3Cu) { return; }
    }
    ctx->pc = 0x214C3Cu;
label_214c3c:
    // 0x214c3c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x214c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214c40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x214c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c44: 0xc0852ca  jal         func_214B28
    ctx->pc = 0x214C44u;
    SET_GPR_U32(ctx, 31, 0x214C4Cu);
    ctx->pc = 0x214C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214C44u;
            // 0x214c48: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214B28u;
    goto label_214b28;
    ctx->pc = 0x214C4Cu;
label_214c4c:
    // 0x214c4c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x214c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214c58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214c5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214c60: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214c60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214c64: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214c68: 0x3e00008  jr          $ra
    ctx->pc = 0x214C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214C68u;
            // 0x214c6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214C70u;
label_214c70:
    // 0x214c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214c74: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x214c74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214c78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x214c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214c80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214c84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214c90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x214c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214c98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x214c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c9c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x214c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x214ca0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214ca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ca4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x214ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214ca8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214cac: 0xc084612  jal         func_211848
    ctx->pc = 0x214CACu;
    SET_GPR_U32(ctx, 31, 0x214CB4u);
    ctx->pc = 0x214CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CACu;
            // 0x214cb0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CB4u; }
        if (ctx->pc != 0x214CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CB4u; }
        if (ctx->pc != 0x214CB4u) { return; }
    }
    ctx->pc = 0x214CB4u;
label_214cb4:
    // 0x214cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cc0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x214CC0u;
    SET_GPR_U32(ctx, 31, 0x214CC8u);
    ctx->pc = 0x214CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CC0u;
            // 0x214cc4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CC8u; }
        if (ctx->pc != 0x214CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CC8u; }
        if (ctx->pc != 0x214CC8u) { return; }
    }
    ctx->pc = 0x214CC8u;
label_214cc8:
    // 0x214cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cd4: 0xc084612  jal         func_211848
    ctx->pc = 0x214CD4u;
    SET_GPR_U32(ctx, 31, 0x214CDCu);
    ctx->pc = 0x214CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CD4u;
            // 0x214cd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CDCu; }
        if (ctx->pc != 0x214CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CDCu; }
        if (ctx->pc != 0x214CDCu) { return; }
    }
    ctx->pc = 0x214CDCu;
label_214cdc:
    // 0x214cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ce4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ce8: 0xc084612  jal         func_211848
    ctx->pc = 0x214CE8u;
    SET_GPR_U32(ctx, 31, 0x214CF0u);
    ctx->pc = 0x214CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CE8u;
            // 0x214cec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CF0u; }
        if (ctx->pc != 0x214CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214CF0u; }
        if (ctx->pc != 0x214CF0u) { return; }
    }
    ctx->pc = 0x214CF0u;
label_214cf0:
    // 0x214cf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cf4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cfc: 0xc0845c2  jal         func_211708
    ctx->pc = 0x214CFCu;
    SET_GPR_U32(ctx, 31, 0x214D04u);
    ctx->pc = 0x214D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214CFCu;
            // 0x214d00: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D04u; }
        if (ctx->pc != 0x214D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D04u; }
        if (ctx->pc != 0x214D04u) { return; }
    }
    ctx->pc = 0x214D04u;
label_214d04:
    // 0x214d04: 0xc0852ca  jal         func_214B28
    ctx->pc = 0x214D04u;
    SET_GPR_U32(ctx, 31, 0x214D0Cu);
    ctx->pc = 0x214D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214D04u;
            // 0x214d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214B28u;
    goto label_214b28;
    ctx->pc = 0x214D0Cu;
label_214d0c:
    // 0x214d0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x214d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x214d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214d14: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x214d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x214d18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214d1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214d20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214d24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214d28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x214D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214D2Cu;
            // 0x214d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214D34u;
    // 0x214d34: 0x0  nop
    ctx->pc = 0x214d34u;
    // NOP
    ctx->pc = 0x214d38u;
}
