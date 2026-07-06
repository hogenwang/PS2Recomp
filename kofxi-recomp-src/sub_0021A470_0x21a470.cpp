#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A470
// Address: 0x21a470 - 0x21a6f0
void sub_0021A470_0x21a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A470_0x21a470");
#endif

    switch (ctx->pc) {
        case 0x21a48cu: goto label_21a48c;
        case 0x21a49cu: goto label_21a49c;
        case 0x21a4acu: goto label_21a4ac;
        case 0x21a4bcu: goto label_21a4bc;
        case 0x21a4ccu: goto label_21a4cc;
        case 0x21a4dcu: goto label_21a4dc;
        case 0x21a4ecu: goto label_21a4ec;
        case 0x21a510u: goto label_21a510;
        case 0x21a554u: goto label_21a554;
        case 0x21a568u: goto label_21a568;
        case 0x21a57cu: goto label_21a57c;
        case 0x21a590u: goto label_21a590;
        case 0x21a5a4u: goto label_21a5a4;
        case 0x21a5b8u: goto label_21a5b8;
        case 0x21a5ccu: goto label_21a5cc;
        case 0x21a5dcu: goto label_21a5dc;
        case 0x21a600u: goto label_21a600;
        case 0x21a644u: goto label_21a644;
        case 0x21a658u: goto label_21a658;
        case 0x21a66cu: goto label_21a66c;
        case 0x21a680u: goto label_21a680;
        case 0x21a694u: goto label_21a694;
        case 0x21a6a8u: goto label_21a6a8;
        case 0x21a6bcu: goto label_21a6bc;
        case 0x21a6c4u: goto label_21a6c4;
        default: break;
    }

    ctx->pc = 0x21a470u;

label_21a470:
    // 0x21a470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21a47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a480: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a484: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A484u;
    SET_GPR_U32(ctx, 31, 0x21A48Cu);
    ctx->pc = 0x21A488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A484u;
            // 0x21a488: 0x24841440  addiu       $a0, $a0, 0x1440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A48Cu; }
        if (ctx->pc != 0x21A48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A48Cu; }
        if (ctx->pc != 0x21A48Cu) { return; }
    }
    ctx->pc = 0x21A48Cu;
label_21a48c:
    // 0x21a48c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a494: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A494u;
    SET_GPR_U32(ctx, 31, 0x21A49Cu);
    ctx->pc = 0x21A498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A494u;
            // 0x21a498: 0x24841460  addiu       $a0, $a0, 0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A49Cu; }
        if (ctx->pc != 0x21A49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A49Cu; }
        if (ctx->pc != 0x21A49Cu) { return; }
    }
    ctx->pc = 0x21A49Cu;
label_21a49c:
    // 0x21a49c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x21a49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21a4a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a4a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A4A4u;
    SET_GPR_U32(ctx, 31, 0x21A4ACu);
    ctx->pc = 0x21A4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A4A4u;
            // 0x21a4a8: 0x24841470  addiu       $a0, $a0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4ACu; }
        if (ctx->pc != 0x21A4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4ACu; }
        if (ctx->pc != 0x21A4ACu) { return; }
    }
    ctx->pc = 0x21A4ACu;
label_21a4ac:
    // 0x21a4ac: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x21a4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x21a4b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a4b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A4B4u;
    SET_GPR_U32(ctx, 31, 0x21A4BCu);
    ctx->pc = 0x21A4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A4B4u;
            // 0x21a4b8: 0x24841480  addiu       $a0, $a0, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4BCu; }
        if (ctx->pc != 0x21A4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4BCu; }
        if (ctx->pc != 0x21A4BCu) { return; }
    }
    ctx->pc = 0x21A4BCu;
label_21a4bc:
    // 0x21a4bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a4c0: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x21a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x21a4c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A4C4u;
    SET_GPR_U32(ctx, 31, 0x21A4CCu);
    ctx->pc = 0x21A4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A4C4u;
            // 0x21a4c8: 0x24841490  addiu       $a0, $a0, 0x1490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4CCu; }
        if (ctx->pc != 0x21A4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4CCu; }
        if (ctx->pc != 0x21A4CCu) { return; }
    }
    ctx->pc = 0x21A4CCu;
label_21a4cc:
    // 0x21a4cc: 0x8e050228  lw          $a1, 0x228($s0)
    ctx->pc = 0x21a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x21a4d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a4d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A4D4u;
    SET_GPR_U32(ctx, 31, 0x21A4DCu);
    ctx->pc = 0x21A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A4D4u;
            // 0x21a4d8: 0x248411d0  addiu       $a0, $a0, 0x11D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4DCu; }
        if (ctx->pc != 0x21A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4DCu; }
        if (ctx->pc != 0x21A4DCu) { return; }
    }
    ctx->pc = 0x21A4DCu;
label_21a4dc:
    // 0x21a4dc: 0x8e05022c  lw          $a1, 0x22C($s0)
    ctx->pc = 0x21a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x21a4e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a4e4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21A4E4u;
    SET_GPR_U32(ctx, 31, 0x21A4ECu);
    ctx->pc = 0x21A4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A4E4u;
            // 0x21a4e8: 0x248411e0  addiu       $a0, $a0, 0x11E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4ECu; }
        if (ctx->pc != 0x21A4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A4ECu; }
        if (ctx->pc != 0x21A4ECu) { return; }
    }
    ctx->pc = 0x21A4ECu;
label_21a4ec:
    // 0x21a4ec: 0x26100230  addiu       $s0, $s0, 0x230
    ctx->pc = 0x21a4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x21a4f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a4f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21a4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a500: 0x248411f0  addiu       $a0, $a0, 0x11F0
    ctx->pc = 0x21a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4592));
    // 0x21a504: 0x8043e52  j           func_10F948
    ctx->pc = 0x21A504u;
    ctx->pc = 0x21A508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A504u;
            // 0x21a508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21A50Cu;
    // 0x21a50c: 0x0  nop
    ctx->pc = 0x21a50cu;
    // NOP
label_21a510:
    // 0x21a510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a514: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a514u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a518: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21a51c: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21a520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a528: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a52c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21a52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a530: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21a530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21a534: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21a534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a538: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21a53c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21a53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a540: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a544: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21a544u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21a548: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21a548u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a54c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21A54Cu;
    SET_GPR_U32(ctx, 31, 0x21A554u);
    ctx->pc = 0x21A550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A54Cu;
            // 0x21a550: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A554u; }
        if (ctx->pc != 0x21A554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A554u; }
        if (ctx->pc != 0x21A554u) { return; }
    }
    ctx->pc = 0x21A554u;
label_21a554:
    // 0x21a554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a55c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a560: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A560u;
    SET_GPR_U32(ctx, 31, 0x21A568u);
    ctx->pc = 0x21A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A560u;
            // 0x21a564: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A568u; }
        if (ctx->pc != 0x21A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A568u; }
        if (ctx->pc != 0x21A568u) { return; }
    }
    ctx->pc = 0x21A568u;
label_21a568:
    // 0x21a568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a56c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a570: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a574: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A574u;
    SET_GPR_U32(ctx, 31, 0x21A57Cu);
    ctx->pc = 0x21A578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A574u;
            // 0x21a578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A57Cu; }
        if (ctx->pc != 0x21A57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A57Cu; }
        if (ctx->pc != 0x21A57Cu) { return; }
    }
    ctx->pc = 0x21A57Cu;
label_21a57c:
    // 0x21a57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a584: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a588: 0xc08449a  jal         func_211268
    ctx->pc = 0x21A588u;
    SET_GPR_U32(ctx, 31, 0x21A590u);
    ctx->pc = 0x21A58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A588u;
            // 0x21a58c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A590u; }
        if (ctx->pc != 0x21A590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A590u; }
        if (ctx->pc != 0x21A590u) { return; }
    }
    ctx->pc = 0x21A590u;
label_21a590:
    // 0x21a590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a598: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a59c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A59Cu;
    SET_GPR_U32(ctx, 31, 0x21A5A4u);
    ctx->pc = 0x21A5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A59Cu;
            // 0x21a5a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5A4u; }
        if (ctx->pc != 0x21A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5A4u; }
        if (ctx->pc != 0x21A5A4u) { return; }
    }
    ctx->pc = 0x21A5A4u;
label_21a5a4:
    // 0x21a5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5b0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21A5B0u;
    SET_GPR_U32(ctx, 31, 0x21A5B8u);
    ctx->pc = 0x21A5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5B0u;
            // 0x21a5b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5B8u; }
        if (ctx->pc != 0x21A5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5B8u; }
        if (ctx->pc != 0x21A5B8u) { return; }
    }
    ctx->pc = 0x21A5B8u;
label_21a5b8:
    // 0x21a5b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21a5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5c4: 0xc08449a  jal         func_211268
    ctx->pc = 0x21A5C4u;
    SET_GPR_U32(ctx, 31, 0x21A5CCu);
    ctx->pc = 0x21A5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5C4u;
            // 0x21a5c8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5CCu; }
        if (ctx->pc != 0x21A5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5CCu; }
        if (ctx->pc != 0x21A5CCu) { return; }
    }
    ctx->pc = 0x21A5CCu;
label_21a5cc:
    // 0x21a5cc: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21a5ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a5d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5d4: 0xc08691c  jal         func_21A470
    ctx->pc = 0x21A5D4u;
    SET_GPR_U32(ctx, 31, 0x21A5DCu);
    ctx->pc = 0x21A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5D4u;
            // 0x21a5d8: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A470u;
    goto label_21a470;
    ctx->pc = 0x21A5DCu;
label_21a5dc:
    // 0x21a5dc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21a5dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a5e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a5e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a5ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21a5ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a5f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21a5f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a5f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A5F8u;
            // 0x21a5fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A600u;
label_21a600:
    // 0x21a600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a604: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a604u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a608: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21a60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a610: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a61c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21a620: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21a620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a624: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21a628: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a62c: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21a630: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a634: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21a634u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a638: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21a638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a63c: 0xc084582  jal         func_211608
    ctx->pc = 0x21A63Cu;
    SET_GPR_U32(ctx, 31, 0x21A644u);
    ctx->pc = 0x21A640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A63Cu;
            // 0x21a640: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A644u; }
        if (ctx->pc != 0x21A644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A644u; }
        if (ctx->pc != 0x21A644u) { return; }
    }
    ctx->pc = 0x21A644u;
label_21a644:
    // 0x21a644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a64c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a650: 0xc084612  jal         func_211848
    ctx->pc = 0x21A650u;
    SET_GPR_U32(ctx, 31, 0x21A658u);
    ctx->pc = 0x21A654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A650u;
            // 0x21a654: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A658u; }
        if (ctx->pc != 0x21A658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A658u; }
        if (ctx->pc != 0x21A658u) { return; }
    }
    ctx->pc = 0x21A658u;
label_21a658:
    // 0x21a658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a65c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a660: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a664: 0xc084612  jal         func_211848
    ctx->pc = 0x21A664u;
    SET_GPR_U32(ctx, 31, 0x21A66Cu);
    ctx->pc = 0x21A668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A664u;
            // 0x21a668: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A66Cu; }
        if (ctx->pc != 0x21A66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A66Cu; }
        if (ctx->pc != 0x21A66Cu) { return; }
    }
    ctx->pc = 0x21A66Cu;
label_21a66c:
    // 0x21a66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a670: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a674: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a678: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21A678u;
    SET_GPR_U32(ctx, 31, 0x21A680u);
    ctx->pc = 0x21A67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A678u;
            // 0x21a67c: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A680u; }
        if (ctx->pc != 0x21A680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A680u; }
        if (ctx->pc != 0x21A680u) { return; }
    }
    ctx->pc = 0x21A680u;
label_21a680:
    // 0x21a680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a684: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a688: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a68c: 0xc084612  jal         func_211848
    ctx->pc = 0x21A68Cu;
    SET_GPR_U32(ctx, 31, 0x21A694u);
    ctx->pc = 0x21A690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A68Cu;
            // 0x21a690: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A694u; }
        if (ctx->pc != 0x21A694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A694u; }
        if (ctx->pc != 0x21A694u) { return; }
    }
    ctx->pc = 0x21A694u;
label_21a694:
    // 0x21a694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a698: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a69c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6a0: 0xc084612  jal         func_211848
    ctx->pc = 0x21A6A0u;
    SET_GPR_U32(ctx, 31, 0x21A6A8u);
    ctx->pc = 0x21A6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6A0u;
            // 0x21a6a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6A8u; }
        if (ctx->pc != 0x21A6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6A8u; }
        if (ctx->pc != 0x21A6A8u) { return; }
    }
    ctx->pc = 0x21A6A8u;
label_21a6a8:
    // 0x21a6a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21a6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21a6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6b4: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21A6B4u;
    SET_GPR_U32(ctx, 31, 0x21A6BCu);
    ctx->pc = 0x21A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6B4u;
            // 0x21a6b8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6BCu; }
        if (ctx->pc != 0x21A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A6BCu; }
        if (ctx->pc != 0x21A6BCu) { return; }
    }
    ctx->pc = 0x21A6BCu;
label_21a6bc:
    // 0x21a6bc: 0xc08691c  jal         func_21A470
    ctx->pc = 0x21A6BCu;
    SET_GPR_U32(ctx, 31, 0x21A6C4u);
    ctx->pc = 0x21A6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6BCu;
            // 0x21a6c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A470u;
    goto label_21a470;
    ctx->pc = 0x21A6C4u;
label_21a6c4:
    // 0x21a6c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a6cc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21a6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a6d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21a6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a6dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21a6dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a6e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21a6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A6E4u;
            // 0x21a6e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A6ECu;
    // 0x21a6ec: 0x0  nop
    ctx->pc = 0x21a6ecu;
    // NOP
    ctx->pc = 0x21a6f0u;
}
