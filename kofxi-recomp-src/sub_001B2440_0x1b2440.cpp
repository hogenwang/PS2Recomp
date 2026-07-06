#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2440
// Address: 0x1b2440 - 0x1b2540
void sub_001B2440_0x1b2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2440_0x1b2440");
#endif

    switch (ctx->pc) {
        case 0x1b24a0u: goto label_1b24a0;
        case 0x1b24a8u: goto label_1b24a8;
        case 0x1b24bcu: goto label_1b24bc;
        case 0x1b24c8u: goto label_1b24c8;
        case 0x1b24f0u: goto label_1b24f0;
        case 0x1b2514u: goto label_1b2514;
        case 0x1b2524u: goto label_1b2524;
        default: break;
    }

    ctx->pc = 0x1b2440u;

    // 0x1b2440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b244c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2450: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b2450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2454: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2458: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b2458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b245c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2460: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b2460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2468: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2468u;
    {
        const bool branch_taken_0x1b2468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2468u;
            // 0x1b246c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2468) {
            ctx->pc = 0x1B2478u;
            goto label_1b2478;
        }
    }
    ctx->pc = 0x1B2470u;
    // 0x1b2470: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2470u;
    {
        const bool branch_taken_0x1b2470 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2470) {
            ctx->pc = 0x1B2474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2470u;
            // 0x1b2474: 0x8e300094  lw          $s0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B24A0u;
            goto label_1b24a0;
        }
    }
    ctx->pc = 0x1B2478u;
label_1b2478:
    // 0x1b2478: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b247c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b247cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2484: 0x24847cf8  addiu       $a0, $a0, 0x7CF8
    ctx->pc = 0x1b2484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31992));
    // 0x1b2488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b248c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b248cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2490: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2494: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b2494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2498: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B2498u;
    ctx->pc = 0x1B249Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2498u;
            // 0x1b249c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B24A0u;
label_1b24a0:
    // 0x1b24a0: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1B24A0u;
    SET_GPR_U32(ctx, 31, 0x1B24A8u);
    ctx->pc = 0x1B24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24A0u;
            // 0x1b24a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C62B8u;
    if (runtime->hasFunction(0x1C62B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24A8u; }
        if (ctx->pc != 0x1B24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C62B8_0x1c62b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24A8u; }
        if (ctx->pc != 0x1B24A8u) { return; }
    }
    ctx->pc = 0x1B24A8u;
label_1b24a8:
    // 0x1b24a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b24a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b24acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24b0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b24b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24b4: 0xc06c82a  jal         func_1B20A8
    ctx->pc = 0x1B24B4u;
    SET_GPR_U32(ctx, 31, 0x1B24BCu);
    ctx->pc = 0x1B24B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24B4u;
            // 0x1b24b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B20A8u;
    if (runtime->hasFunction(0x1B20A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B20A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24BCu; }
        if (ctx->pc != 0x1B24BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B20A8_0x1b20a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24BCu; }
        if (ctx->pc != 0x1B24BCu) { return; }
    }
    ctx->pc = 0x1B24BCu;
label_1b24bc:
    // 0x1b24bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b24bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24c0: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1B24C0u;
    SET_GPR_U32(ctx, 31, 0x1B24C8u);
    ctx->pc = 0x1B24C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24C0u;
            // 0x1b24c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24C8u; }
        if (ctx->pc != 0x1B24C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24C8u; }
        if (ctx->pc != 0x1B24C8u) { return; }
    }
    ctx->pc = 0x1B24C8u;
label_1b24c8:
    // 0x1b24c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b24c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b24ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b24d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b24d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b24d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b24d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b24d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b24d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b24dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b24dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b24e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b24e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b24e4: 0x806c898  j           func_1B2260
    ctx->pc = 0x1B24E4u;
    ctx->pc = 0x1B24E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24E4u;
            // 0x1b24e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2260u;
    if (runtime->hasFunction(0x1B2260u)) {
        auto targetFn = runtime->lookupFunction(0x1B2260u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B2260_0x1b2260(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B24ECu;
    // 0x1b24ec: 0x0  nop
    ctx->pc = 0x1b24ecu;
    // NOP
label_1b24f0:
    // 0x1b24f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b24f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b24f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b24f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b24f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b24fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2500: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2504: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2508: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b2508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b250c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B250Cu;
    SET_GPR_U32(ctx, 31, 0x1B2514u);
    ctx->pc = 0x1B2510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B250Cu;
            // 0x1b2510: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2514u; }
        if (ctx->pc != 0x1B2514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2514u; }
        if (ctx->pc != 0x1B2514u) { return; }
    }
    ctx->pc = 0x1B2514u;
label_1b2514:
    // 0x1b2514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b251c: 0xc06c950  jal         func_1B2540
    ctx->pc = 0x1B251Cu;
    SET_GPR_U32(ctx, 31, 0x1B2524u);
    ctx->pc = 0x1B2520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B251Cu;
            // 0x1b2520: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2540u;
    if (runtime->hasFunction(0x1B2540u)) {
        auto targetFn = runtime->lookupFunction(0x1B2540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2524u; }
        if (ctx->pc != 0x1B2524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2540_0x1b2540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2524u; }
        if (ctx->pc != 0x1B2524u) { return; }
    }
    ctx->pc = 0x1B2524u;
label_1b2524:
    // 0x1b2524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b252c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b252cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2530: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2534: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B2534u;
    ctx->pc = 0x1B2538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2534u;
            // 0x1b2538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B253Cu;
    // 0x1b253c: 0x0  nop
    ctx->pc = 0x1b253cu;
    // NOP
    ctx->pc = 0x1b2540u;
}
