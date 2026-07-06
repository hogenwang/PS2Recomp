#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002157D8
// Address: 0x2157d8 - 0x215a90
void sub_002157D8_0x2157d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002157D8_0x2157d8");
#endif

    switch (ctx->pc) {
        case 0x2157f4u: goto label_2157f4;
        case 0x215804u: goto label_215804;
        case 0x215814u: goto label_215814;
        case 0x215824u: goto label_215824;
        case 0x215834u: goto label_215834;
        case 0x215844u: goto label_215844;
        case 0x215854u: goto label_215854;
        case 0x215870u: goto label_215870;
        case 0x2158b4u: goto label_2158b4;
        case 0x2158c8u: goto label_2158c8;
        case 0x2158dcu: goto label_2158dc;
        case 0x2158f0u: goto label_2158f0;
        case 0x215904u: goto label_215904;
        case 0x215918u: goto label_215918;
        case 0x21592cu: goto label_21592c;
        case 0x21593cu: goto label_21593c;
        case 0x215954u: goto label_215954;
        case 0x215980u: goto label_215980;
        case 0x2159c4u: goto label_2159c4;
        case 0x2159d8u: goto label_2159d8;
        case 0x2159ecu: goto label_2159ec;
        case 0x215a00u: goto label_215a00;
        case 0x215a14u: goto label_215a14;
        case 0x215a28u: goto label_215a28;
        case 0x215a3cu: goto label_215a3c;
        case 0x215a4cu: goto label_215a4c;
        case 0x215a60u: goto label_215a60;
        default: break;
    }

    ctx->pc = 0x2157d8u;

label_2157d8:
    // 0x2157d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2157d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2157dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2157dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2157e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2157e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2157e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2157e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2157e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2157ec: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2157ECu;
    SET_GPR_U32(ctx, 31, 0x2157F4u);
    ctx->pc = 0x2157F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157ECu;
            // 0x2157f0: 0x24840af8  addiu       $a0, $a0, 0xAF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157F4u; }
        if (ctx->pc != 0x2157F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157F4u; }
        if (ctx->pc != 0x2157F4u) { return; }
    }
    ctx->pc = 0x2157F4u;
label_2157f4:
    // 0x2157f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2157f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2157f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2157f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2157fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2157FCu;
    SET_GPR_U32(ctx, 31, 0x215804u);
    ctx->pc = 0x215800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2157FCu;
            // 0x215800: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215804u; }
        if (ctx->pc != 0x215804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215804u; }
        if (ctx->pc != 0x215804u) { return; }
    }
    ctx->pc = 0x215804u;
label_215804:
    // 0x215804: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215808: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x215808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21580c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21580Cu;
    SET_GPR_U32(ctx, 31, 0x215814u);
    ctx->pc = 0x215810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21580Cu;
            // 0x215810: 0x24840b18  addiu       $a0, $a0, 0xB18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215814u; }
        if (ctx->pc != 0x215814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215814u; }
        if (ctx->pc != 0x215814u) { return; }
    }
    ctx->pc = 0x215814u;
label_215814:
    // 0x215814: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x215814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x215818: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21581c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21581Cu;
    SET_GPR_U32(ctx, 31, 0x215824u);
    ctx->pc = 0x215820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21581Cu;
            // 0x215820: 0x24840b28  addiu       $a0, $a0, 0xB28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215824u; }
        if (ctx->pc != 0x215824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215824u; }
        if (ctx->pc != 0x215824u) { return; }
    }
    ctx->pc = 0x215824u;
label_215824:
    // 0x215824: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x215824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x215828: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21582c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21582Cu;
    SET_GPR_U32(ctx, 31, 0x215834u);
    ctx->pc = 0x215830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21582Cu;
            // 0x215830: 0x24840858  addiu       $a0, $a0, 0x858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215834u; }
        if (ctx->pc != 0x215834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215834u; }
        if (ctx->pc != 0x215834u) { return; }
    }
    ctx->pc = 0x215834u;
label_215834:
    // 0x215834: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x215838: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x215838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x21583c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21583Cu;
    SET_GPR_U32(ctx, 31, 0x215844u);
    ctx->pc = 0x215840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21583Cu;
            // 0x215840: 0x24840b38  addiu       $a0, $a0, 0xB38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215844u; }
        if (ctx->pc != 0x215844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215844u; }
        if (ctx->pc != 0x215844u) { return; }
    }
    ctx->pc = 0x215844u;
label_215844:
    // 0x215844: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x215844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x215848: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21584c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21584Cu;
    SET_GPR_U32(ctx, 31, 0x215854u);
    ctx->pc = 0x215850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21584Cu;
            // 0x215850: 0x24840b48  addiu       $a0, $a0, 0xB48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215854u; }
        if (ctx->pc != 0x215854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215854u; }
        if (ctx->pc != 0x215854u) { return; }
    }
    ctx->pc = 0x215854u;
label_215854:
    // 0x215854: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x215854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x215858: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x215858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21585c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21585cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215860: 0x24840b58  addiu       $a0, $a0, 0xB58
    ctx->pc = 0x215860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2904));
    // 0x215864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215868: 0x8043e52  j           func_10F948
    ctx->pc = 0x215868u;
    ctx->pc = 0x21586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215868u;
            // 0x21586c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x215870u;
label_215870:
    // 0x215870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215874: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215874u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215878: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21587c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21587cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x215880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215888: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21588c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21588cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215890: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215894: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215898: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x215898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21589c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21589cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2158a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158a4: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x2158a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2158a8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2158a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2158ac: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2158ACu;
    SET_GPR_U32(ctx, 31, 0x2158B4u);
    ctx->pc = 0x2158B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158ACu;
            // 0x2158b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158B4u; }
        if (ctx->pc != 0x2158B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158B4u; }
        if (ctx->pc != 0x2158B4u) { return; }
    }
    ctx->pc = 0x2158B4u;
label_2158b4:
    // 0x2158b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2158b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2158b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158bc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2158bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2158c0: 0xc08449a  jal         func_211268
    ctx->pc = 0x2158C0u;
    SET_GPR_U32(ctx, 31, 0x2158C8u);
    ctx->pc = 0x2158C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158C0u;
            // 0x2158c4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158C8u; }
        if (ctx->pc != 0x2158C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158C8u; }
        if (ctx->pc != 0x2158C8u) { return; }
    }
    ctx->pc = 0x2158C8u;
label_2158c8:
    // 0x2158c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2158c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2158ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2158d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2158d4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2158D4u;
    SET_GPR_U32(ctx, 31, 0x2158DCu);
    ctx->pc = 0x2158D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158D4u;
            // 0x2158d8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158DCu; }
        if (ctx->pc != 0x2158DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158DCu; }
        if (ctx->pc != 0x2158DCu) { return; }
    }
    ctx->pc = 0x2158DCu;
label_2158dc:
    // 0x2158dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2158dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2158e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2158e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2158e8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2158E8u;
    SET_GPR_U32(ctx, 31, 0x2158F0u);
    ctx->pc = 0x2158ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158E8u;
            // 0x2158ec: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158F0u; }
        if (ctx->pc != 0x2158F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158F0u; }
        if (ctx->pc != 0x2158F0u) { return; }
    }
    ctx->pc = 0x2158F0u;
label_2158f0:
    // 0x2158f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2158f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2158f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158f8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2158fc: 0xc08449a  jal         func_211268
    ctx->pc = 0x2158FCu;
    SET_GPR_U32(ctx, 31, 0x215904u);
    ctx->pc = 0x215900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2158FCu;
            // 0x215900: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215904u; }
        if (ctx->pc != 0x215904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215904u; }
        if (ctx->pc != 0x215904u) { return; }
    }
    ctx->pc = 0x215904u;
label_215904:
    // 0x215904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21590c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21590cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215910: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215910u;
    SET_GPR_U32(ctx, 31, 0x215918u);
    ctx->pc = 0x215914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215910u;
            // 0x215914: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215918u; }
        if (ctx->pc != 0x215918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215918u; }
        if (ctx->pc != 0x215918u) { return; }
    }
    ctx->pc = 0x215918u;
label_215918:
    // 0x215918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21591c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21591cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215920: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x215920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215924: 0xc0844dc  jal         func_211370
    ctx->pc = 0x215924u;
    SET_GPR_U32(ctx, 31, 0x21592Cu);
    ctx->pc = 0x215928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215924u;
            // 0x215928: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21592Cu; }
        if (ctx->pc != 0x21592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21592Cu; }
        if (ctx->pc != 0x21592Cu) { return; }
    }
    ctx->pc = 0x21592Cu;
label_21592c:
    // 0x21592c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215934: 0xc0849ec  jal         func_2127B0
    ctx->pc = 0x215934u;
    SET_GPR_U32(ctx, 31, 0x21593Cu);
    ctx->pc = 0x215938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215934u;
            // 0x215938: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2127B0u;
    if (runtime->hasFunction(0x2127B0u)) {
        auto targetFn = runtime->lookupFunction(0x2127B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21593Cu; }
        if (ctx->pc != 0x21593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002127B0_0x2127b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21593Cu; }
        if (ctx->pc != 0x21593Cu) { return; }
    }
    ctx->pc = 0x21593Cu;
label_21593c:
    // 0x21593c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21593cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215940: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215940u;
    {
        const bool branch_taken_0x215940 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215940u;
            // 0x215944: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215940) {
            ctx->pc = 0x215958u;
            goto label_215958;
        }
    }
    ctx->pc = 0x215948u;
    // 0x215948: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x215948u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21594c: 0xc0855f6  jal         func_2157D8
    ctx->pc = 0x21594Cu;
    SET_GPR_U32(ctx, 31, 0x215954u);
    ctx->pc = 0x215950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21594Cu;
            // 0x215950: 0x28fa023  subu        $s4, $s4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2157D8u;
    goto label_2157d8;
    ctx->pc = 0x215954u;
label_215954:
    // 0x215954: 0x280782d  daddu       $t7, $s4, $zero
    ctx->pc = 0x215954u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_215958:
    // 0x215958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21595c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x21595cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21596c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21596cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215970: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215974: 0x3e00008  jr          $ra
    ctx->pc = 0x215974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215974u;
            // 0x215978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21597Cu;
    // 0x21597c: 0x0  nop
    ctx->pc = 0x21597cu;
    // NOP
label_215980:
    // 0x215980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215984: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x215984u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x215988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x215988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21598c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215994: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x215994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21599c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2159a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2159a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2159a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2159a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2159a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159ac: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2159acu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2159b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2159b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2159b4: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2159b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2159b8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2159b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159bc: 0xc084612  jal         func_211848
    ctx->pc = 0x2159BCu;
    SET_GPR_U32(ctx, 31, 0x2159C4u);
    ctx->pc = 0x2159C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159BCu;
            // 0x2159c0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159C4u; }
        if (ctx->pc != 0x2159C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159C4u; }
        if (ctx->pc != 0x2159C4u) { return; }
    }
    ctx->pc = 0x2159C4u;
label_2159c4:
    // 0x2159c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2159c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2159c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159cc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2159ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2159d0: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2159D0u;
    SET_GPR_U32(ctx, 31, 0x2159D8u);
    ctx->pc = 0x2159D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159D0u;
            // 0x2159d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159D8u; }
        if (ctx->pc != 0x2159D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159D8u; }
        if (ctx->pc != 0x2159D8u) { return; }
    }
    ctx->pc = 0x2159D8u;
label_2159d8:
    // 0x2159d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2159d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2159dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2159e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2159e4: 0xc084612  jal         func_211848
    ctx->pc = 0x2159E4u;
    SET_GPR_U32(ctx, 31, 0x2159ECu);
    ctx->pc = 0x2159E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159E4u;
            // 0x2159e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159ECu; }
        if (ctx->pc != 0x2159ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159ECu; }
        if (ctx->pc != 0x2159ECu) { return; }
    }
    ctx->pc = 0x2159ECu;
label_2159ec:
    // 0x2159ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2159ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2159f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2159f8: 0xc084612  jal         func_211848
    ctx->pc = 0x2159F8u;
    SET_GPR_U32(ctx, 31, 0x215A00u);
    ctx->pc = 0x2159FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2159F8u;
            // 0x2159fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A00u; }
        if (ctx->pc != 0x215A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A00u; }
        if (ctx->pc != 0x215A00u) { return; }
    }
    ctx->pc = 0x215A00u;
label_215a00:
    // 0x215a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a08: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x215a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x215a0c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x215A0Cu;
    SET_GPR_U32(ctx, 31, 0x215A14u);
    ctx->pc = 0x215A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A0Cu;
            // 0x215a10: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A14u; }
        if (ctx->pc != 0x215A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A14u; }
        if (ctx->pc != 0x215A14u) { return; }
    }
    ctx->pc = 0x215A14u;
label_215a14:
    // 0x215a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215a20: 0xc084612  jal         func_211848
    ctx->pc = 0x215A20u;
    SET_GPR_U32(ctx, 31, 0x215A28u);
    ctx->pc = 0x215A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A20u;
            // 0x215a24: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A28u; }
        if (ctx->pc != 0x215A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A28u; }
        if (ctx->pc != 0x215A28u) { return; }
    }
    ctx->pc = 0x215A28u;
label_215a28:
    // 0x215a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a34: 0xc084612  jal         func_211848
    ctx->pc = 0x215A34u;
    SET_GPR_U32(ctx, 31, 0x215A3Cu);
    ctx->pc = 0x215A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A34u;
            // 0x215a38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A3Cu; }
        if (ctx->pc != 0x215A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A3Cu; }
        if (ctx->pc != 0x215A3Cu) { return; }
    }
    ctx->pc = 0x215A3Cu;
label_215a3c:
    // 0x215a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x215a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a44: 0xc084a6a  jal         func_2129A8
    ctx->pc = 0x215A44u;
    SET_GPR_U32(ctx, 31, 0x215A4Cu);
    ctx->pc = 0x215A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215A44u;
            // 0x215a48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2129A8u;
    if (runtime->hasFunction(0x2129A8u)) {
        auto targetFn = runtime->lookupFunction(0x2129A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A4Cu; }
        if (ctx->pc != 0x215A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002129A8_0x2129a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A4Cu; }
        if (ctx->pc != 0x215A4Cu) { return; }
    }
    ctx->pc = 0x215A4Cu;
label_215a4c:
    // 0x215a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a50: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215A50u;
    {
        const bool branch_taken_0x215a50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x215A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215A50u;
            // 0x215a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a50) {
            ctx->pc = 0x215A68u;
            goto label_215a68;
        }
    }
    ctx->pc = 0x215A58u;
    // 0x215a58: 0xc0855f6  jal         func_2157D8
    ctx->pc = 0x215A58u;
    SET_GPR_U32(ctx, 31, 0x215A60u);
    ctx->pc = 0x2157D8u;
    goto label_2157d8;
    ctx->pc = 0x215A60u;
label_215a60:
    // 0x215a60: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x215a60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x215a64: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x215a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_215a68:
    // 0x215a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215a6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x215a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x215a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x215a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215a78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x215a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215a7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x215a7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215a80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x215a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215a84: 0x3e00008  jr          $ra
    ctx->pc = 0x215A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215A84u;
            // 0x215a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215A8Cu;
    // 0x215a8c: 0x0  nop
    ctx->pc = 0x215a8cu;
    // NOP
    ctx->pc = 0x215a90u;
}
