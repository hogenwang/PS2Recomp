#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A780
// Address: 0x21a780 - 0x21aa38
void sub_0021A780_0x21a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A780_0x21a780");
#endif

    switch (ctx->pc) {
        case 0x21a79cu: goto label_21a79c;
        case 0x21a7acu: goto label_21a7ac;
        case 0x21a7bcu: goto label_21a7bc;
        case 0x21a7ccu: goto label_21a7cc;
        case 0x21a7dcu: goto label_21a7dc;
        case 0x21a7ecu: goto label_21a7ec;
        case 0x21a7fcu: goto label_21a7fc;
        case 0x21a80cu: goto label_21a80c;
        case 0x21a830u: goto label_21a830;
        case 0x21a874u: goto label_21a874;
        case 0x21a888u: goto label_21a888;
        case 0x21a89cu: goto label_21a89c;
        case 0x21a8b0u: goto label_21a8b0;
        case 0x21a8c4u: goto label_21a8c4;
        case 0x21a8d8u: goto label_21a8d8;
        case 0x21a8ecu: goto label_21a8ec;
        case 0x21a900u: goto label_21a900;
        case 0x21a910u: goto label_21a910;
        case 0x21a938u: goto label_21a938;
        case 0x21a97cu: goto label_21a97c;
        case 0x21a990u: goto label_21a990;
        case 0x21a9a4u: goto label_21a9a4;
        case 0x21a9b8u: goto label_21a9b8;
        case 0x21a9ccu: goto label_21a9cc;
        case 0x21a9e0u: goto label_21a9e0;
        case 0x21a9f4u: goto label_21a9f4;
        case 0x21aa08u: goto label_21aa08;
        case 0x21aa10u: goto label_21aa10;
        default: break;
    }

    ctx->pc = 0x21a780u;

label_21a780:
    // 0x21a780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a788: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a790: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a794: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A794u;
    SET_GPR_U32(ctx, 31, 0x21A79Cu);
    ctx->pc = 0x21A798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A794u;
            // 0x21a798: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A79Cu; }
        if (ctx->pc != 0x21A79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A79Cu; }
        if (ctx->pc != 0x21A79Cu) { return; }
    }
    ctx->pc = 0x21A79Cu;
label_21a79c:
    // 0x21a79c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a7a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A7A4u;
    SET_GPR_U32(ctx, 31, 0x21A7ACu);
    ctx->pc = 0x21A7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7A4u;
            // 0x21a7a8: 0x24841460  addiu       $a0, $a0, 0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7ACu; }
        if (ctx->pc != 0x21A7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7ACu; }
        if (ctx->pc != 0x21A7ACu) { return; }
    }
    ctx->pc = 0x21A7ACu;
label_21a7ac:
    // 0x21a7ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a7b0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x21a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x21a7b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A7B4u;
    SET_GPR_U32(ctx, 31, 0x21A7BCu);
    ctx->pc = 0x21A7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7B4u;
            // 0x21a7b8: 0x248412c0  addiu       $a0, $a0, 0x12C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7BCu; }
        if (ctx->pc != 0x21A7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7BCu; }
        if (ctx->pc != 0x21A7BCu) { return; }
    }
    ctx->pc = 0x21A7BCu;
label_21a7bc:
    // 0x21a7bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a7c0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x21a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x21a7c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A7C4u;
    SET_GPR_U32(ctx, 31, 0x21A7CCu);
    ctx->pc = 0x21A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7C4u;
            // 0x21a7c8: 0x248414e0  addiu       $a0, $a0, 0x14E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7CCu; }
        if (ctx->pc != 0x21A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7CCu; }
        if (ctx->pc != 0x21A7CCu) { return; }
    }
    ctx->pc = 0x21A7CCu;
label_21a7cc:
    // 0x21a7cc: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x21a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x21a7d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a7d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A7D4u;
    SET_GPR_U32(ctx, 31, 0x21A7DCu);
    ctx->pc = 0x21A7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7D4u;
            // 0x21a7d8: 0x24841470  addiu       $a0, $a0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7DCu; }
        if (ctx->pc != 0x21A7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7DCu; }
        if (ctx->pc != 0x21A7DCu) { return; }
    }
    ctx->pc = 0x21A7DCu;
label_21a7dc:
    // 0x21a7dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a7e0: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x21a7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x21a7e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A7E4u;
    SET_GPR_U32(ctx, 31, 0x21A7ECu);
    ctx->pc = 0x21A7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7E4u;
            // 0x21a7e8: 0x24841490  addiu       $a0, $a0, 0x1490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7ECu; }
        if (ctx->pc != 0x21A7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7ECu; }
        if (ctx->pc != 0x21A7ECu) { return; }
    }
    ctx->pc = 0x21A7ECu;
label_21a7ec:
    // 0x21a7ec: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x21a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x21a7f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a7f4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A7F4u;
    SET_GPR_U32(ctx, 31, 0x21A7FCu);
    ctx->pc = 0x21A7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7F4u;
            // 0x21a7f8: 0x248411d0  addiu       $a0, $a0, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7FCu; }
        if (ctx->pc != 0x21A7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7FCu; }
        if (ctx->pc != 0x21A7FCu) { return; }
    }
    ctx->pc = 0x21A7FCu;
label_21a7fc:
    // 0x21a7fc: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x21a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x21a800: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a804: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A804u;
    SET_GPR_U32(ctx, 31, 0x21A80Cu);
    ctx->pc = 0x21A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A804u;
            // 0x21a808: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A80Cu; }
        if (ctx->pc != 0x21A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A80Cu; }
        if (ctx->pc != 0x21A80Cu) { return; }
    }
    ctx->pc = 0x21A80Cu;
label_21a80c:
    // 0x21a80c: 0x2610026c  addiu       $s0, $s0, 0x26C
    ctx->pc = 0x21a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
    // 0x21a810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a818: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a81c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a820: 0x248411f0  addiu       $a0, $a0, 0x11F0
    ctx->pc = 0x21a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4592));
    // 0x21a824: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A824u;
    ctx->pc = 0x21A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A824u;
            // 0x21a828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21A82Cu;
    // 0x21a82c: 0x0  nop
    ctx->pc = 0x21a82cu;
    // NOP
label_21a830:
    // 0x21a830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a834: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a838: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21a83c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21a840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a84c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21a84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a850: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21a854: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21a854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a858: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21a85c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21a85cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a860: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a864: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21a864u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21a868: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a86c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21A86Cu;
    SET_GPR_U32(ctx, 31, 0x21A874u);
    ctx->pc = 0x21A870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A86Cu;
            // 0x21a870: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A874u; }
        if (ctx->pc != 0x21A874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A874u; }
        if (ctx->pc != 0x21A874u) { return; }
    }
    ctx->pc = 0x21A874u;
label_21a874:
    // 0x21a874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a87c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a880: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21A880u;
    SET_GPR_U32(ctx, 31, 0x21A888u);
    ctx->pc = 0x21A884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A880u;
            // 0x21a884: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A888u; }
        if (ctx->pc != 0x21A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A888u; }
        if (ctx->pc != 0x21A888u) { return; }
    }
    ctx->pc = 0x21A888u;
label_21a888:
    // 0x21a888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a88c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a890: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a894: 0xc08449a  jal         func_211268
    ctx->pc = 0x21A894u;
    SET_GPR_U32(ctx, 31, 0x21A89Cu);
    ctx->pc = 0x21A898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A894u;
            // 0x21a898: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A89Cu; }
        if (ctx->pc != 0x21A89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A89Cu; }
        if (ctx->pc != 0x21A89Cu) { return; }
    }
    ctx->pc = 0x21A89Cu;
label_21a89c:
    // 0x21a89c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8a8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A8A8u;
    SET_GPR_U32(ctx, 31, 0x21A8B0u);
    ctx->pc = 0x21A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8A8u;
            // 0x21a8ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8B0u; }
        if (ctx->pc != 0x21A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8B0u; }
        if (ctx->pc != 0x21A8B0u) { return; }
    }
    ctx->pc = 0x21A8B0u;
label_21a8b0:
    // 0x21a8b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8bc: 0xc08449a  jal         func_211268
    ctx->pc = 0x21A8BCu;
    SET_GPR_U32(ctx, 31, 0x21A8C4u);
    ctx->pc = 0x21A8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8BCu;
            // 0x21a8c0: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8C4u; }
        if (ctx->pc != 0x21A8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8C4u; }
        if (ctx->pc != 0x21A8C4u) { return; }
    }
    ctx->pc = 0x21A8C4u;
label_21a8c4:
    // 0x21a8c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8d0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A8D0u;
    SET_GPR_U32(ctx, 31, 0x21A8D8u);
    ctx->pc = 0x21A8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8D0u;
            // 0x21a8d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8D8u; }
        if (ctx->pc != 0x21A8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8D8u; }
        if (ctx->pc != 0x21A8D8u) { return; }
    }
    ctx->pc = 0x21A8D8u;
label_21a8d8:
    // 0x21a8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8e4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A8E4u;
    SET_GPR_U32(ctx, 31, 0x21A8ECu);
    ctx->pc = 0x21A8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8E4u;
            // 0x21a8e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8ECu; }
        if (ctx->pc != 0x21A8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8ECu; }
        if (ctx->pc != 0x21A8ECu) { return; }
    }
    ctx->pc = 0x21A8ECu;
label_21a8ec:
    // 0x21a8ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a8f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8f8: 0xc08449a  jal         func_211268
    ctx->pc = 0x21A8F8u;
    SET_GPR_U32(ctx, 31, 0x21A900u);
    ctx->pc = 0x21A8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A8F8u;
            // 0x21a8fc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A900u; }
        if (ctx->pc != 0x21A900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A900u; }
        if (ctx->pc != 0x21A900u) { return; }
    }
    ctx->pc = 0x21A900u;
label_21a900:
    // 0x21a900: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21a900u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21a904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a908: 0xc0869e0  jal         func_21A780
    ctx->pc = 0x21A908u;
    SET_GPR_U32(ctx, 31, 0x21A910u);
    ctx->pc = 0x21A90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A908u;
            // 0x21a90c: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A780u;
    goto label_21a780;
    ctx->pc = 0x21A910u;
label_21a910:
    // 0x21a910: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21a910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a91c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a920: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21a920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a924: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21a924u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a928: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21a928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a92c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A92Cu;
            // 0x21a930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A934u;
    // 0x21a934: 0x0  nop
    ctx->pc = 0x21a934u;
    // NOP
label_21a938:
    // 0x21a938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a93c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a940: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21a944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a94c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a954: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21a958: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21a958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a95c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21a960: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a964: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21a964u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21a968: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a96c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a970: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21a970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a974: 0xc084582  jal         func_211608
    ctx->pc = 0x21A974u;
    SET_GPR_U32(ctx, 31, 0x21A97Cu);
    ctx->pc = 0x21A978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A974u;
            // 0x21a978: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A97Cu; }
        if (ctx->pc != 0x21A97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A97Cu; }
        if (ctx->pc != 0x21A97Cu) { return; }
    }
    ctx->pc = 0x21A97Cu;
label_21a97c:
    // 0x21a97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a980: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a984: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a988: 0xc084582  jal         func_211608
    ctx->pc = 0x21A988u;
    SET_GPR_U32(ctx, 31, 0x21A990u);
    ctx->pc = 0x21A98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A988u;
            // 0x21a98c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A990u; }
        if (ctx->pc != 0x21A990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A990u; }
        if (ctx->pc != 0x21A990u) { return; }
    }
    ctx->pc = 0x21A990u;
label_21a990:
    // 0x21a990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a998: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a99c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21A99Cu;
    SET_GPR_U32(ctx, 31, 0x21A9A4u);
    ctx->pc = 0x21A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A99Cu;
            // 0x21a9a0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9A4u; }
        if (ctx->pc != 0x21A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9A4u; }
        if (ctx->pc != 0x21A9A4u) { return; }
    }
    ctx->pc = 0x21A9A4u;
label_21a9a4:
    // 0x21a9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9b0: 0xc084612  jal         func_211848
    ctx->pc = 0x21A9B0u;
    SET_GPR_U32(ctx, 31, 0x21A9B8u);
    ctx->pc = 0x21A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9B0u;
            // 0x21a9b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9B8u; }
        if (ctx->pc != 0x21A9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9B8u; }
        if (ctx->pc != 0x21A9B8u) { return; }
    }
    ctx->pc = 0x21A9B8u;
label_21a9b8:
    // 0x21a9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9c4: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21A9C4u;
    SET_GPR_U32(ctx, 31, 0x21A9CCu);
    ctx->pc = 0x21A9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9C4u;
            // 0x21a9c8: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9CCu; }
        if (ctx->pc != 0x21A9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9CCu; }
        if (ctx->pc != 0x21A9CCu) { return; }
    }
    ctx->pc = 0x21A9CCu;
label_21a9cc:
    // 0x21a9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9d8: 0xc084612  jal         func_211848
    ctx->pc = 0x21A9D8u;
    SET_GPR_U32(ctx, 31, 0x21A9E0u);
    ctx->pc = 0x21A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9D8u;
            // 0x21a9dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9E0u; }
        if (ctx->pc != 0x21A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9E0u; }
        if (ctx->pc != 0x21A9E0u) { return; }
    }
    ctx->pc = 0x21A9E0u;
label_21a9e0:
    // 0x21a9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9ec: 0xc084612  jal         func_211848
    ctx->pc = 0x21A9ECu;
    SET_GPR_U32(ctx, 31, 0x21A9F4u);
    ctx->pc = 0x21A9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A9ECu;
            // 0x21a9f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9F4u; }
        if (ctx->pc != 0x21A9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9F4u; }
        if (ctx->pc != 0x21A9F4u) { return; }
    }
    ctx->pc = 0x21A9F4u;
label_21a9f4:
    // 0x21a9f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa00: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21AA00u;
    SET_GPR_U32(ctx, 31, 0x21AA08u);
    ctx->pc = 0x21AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA00u;
            // 0x21aa04: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA08u; }
        if (ctx->pc != 0x21AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA08u; }
        if (ctx->pc != 0x21AA08u) { return; }
    }
    ctx->pc = 0x21AA08u;
label_21aa08:
    // 0x21aa08: 0xc0869e0  jal         func_21A780
    ctx->pc = 0x21AA08u;
    SET_GPR_U32(ctx, 31, 0x21AA10u);
    ctx->pc = 0x21AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA08u;
            // 0x21aa0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A780u;
    goto label_21a780;
    ctx->pc = 0x21AA10u;
label_21aa10:
    // 0x21aa10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21aa14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21aa14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aa18: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21aa1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21aa1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21aa20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21aa20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aa24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21aa24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21aa28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21aa28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21aa2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21aa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21aa30: 0x3e00008  jr          $ra
    ctx->pc = 0x21AA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21AA30u;
            // 0x21aa34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AA38u;
    ctx->pc = 0x21aa38u;
}
