#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E24A0
// Address: 0x1e24a0 - 0x1e27f0
void sub_001E24A0_0x1e24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E24A0_0x1e24a0");
#endif

    switch (ctx->pc) {
        case 0x1e24b4u: goto label_1e24b4;
        case 0x1e24ccu: goto label_1e24cc;
        case 0x1e24e0u: goto label_1e24e0;
        case 0x1e24f8u: goto label_1e24f8;
        case 0x1e2518u: goto label_1e2518;
        case 0x1e256cu: goto label_1e256c;
        case 0x1e25a0u: goto label_1e25a0;
        case 0x1e25c0u: goto label_1e25c0;
        case 0x1e25dcu: goto label_1e25dc;
        case 0x1e2608u: goto label_1e2608;
        case 0x1e2610u: goto label_1e2610;
        case 0x1e2630u: goto label_1e2630;
        case 0x1e2648u: goto label_1e2648;
        case 0x1e2670u: goto label_1e2670;
        case 0x1e2680u: goto label_1e2680;
        case 0x1e2694u: goto label_1e2694;
        case 0x1e26b0u: goto label_1e26b0;
        case 0x1e26c0u: goto label_1e26c0;
        case 0x1e26d8u: goto label_1e26d8;
        case 0x1e26f4u: goto label_1e26f4;
        case 0x1e2720u: goto label_1e2720;
        case 0x1e2728u: goto label_1e2728;
        case 0x1e2748u: goto label_1e2748;
        case 0x1e2760u: goto label_1e2760;
        case 0x1e2788u: goto label_1e2788;
        case 0x1e2798u: goto label_1e2798;
        case 0x1e27acu: goto label_1e27ac;
        case 0x1e27c8u: goto label_1e27c8;
        case 0x1e27d8u: goto label_1e27d8;
        default: break;
    }

    ctx->pc = 0x1e24a0u;

    // 0x1e24a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e24a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e24a4: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1e24a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x1e24a8: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1e24a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1e24ac: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E24ACu;
    SET_GPR_U32(ctx, 31, 0x1E24B4u);
    ctx->pc = 0x1E24B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24ACu;
            // 0x1e24b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24B4u; }
        if (ctx->pc != 0x1E24B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24B4u; }
        if (ctx->pc != 0x1E24B4u) { return; }
    }
    ctx->pc = 0x1E24B4u;
label_1e24b4:
    // 0x1e24b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e24b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e24b8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E24B8u;
    {
        const bool branch_taken_0x1e24b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E24BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24B8u;
            // 0x1e24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24b8) {
            ctx->pc = 0x1E24D8u;
            goto label_1e24d8;
        }
    }
    ctx->pc = 0x1E24C0u;
    // 0x1e24c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e24c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e24c4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E24C4u;
    SET_GPR_U32(ctx, 31, 0x1E24CCu);
    ctx->pc = 0x1E24C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24C4u;
            // 0x1e24c8: 0x2484d538  addiu       $a0, $a0, -0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24CCu; }
        if (ctx->pc != 0x1E24CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24CCu; }
        if (ctx->pc != 0x1E24CCu) { return; }
    }
    ctx->pc = 0x1E24CCu;
label_1e24cc:
    // 0x1e24cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E24CCu;
    {
        const bool branch_taken_0x1e24cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24CCu;
            // 0x1e24d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24cc) {
            ctx->pc = 0x1E2504u;
            goto label_1e2504;
        }
    }
    ctx->pc = 0x1E24D4u;
    // 0x1e24d4: 0x0  nop
    ctx->pc = 0x1e24d4u;
    // NOP
label_1e24d8:
    // 0x1e24d8: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E24D8u;
    SET_GPR_U32(ctx, 31, 0x1E24E0u);
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24E0u; }
        if (ctx->pc != 0x1E24E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24E0u; }
        if (ctx->pc != 0x1E24E0u) { return; }
    }
    ctx->pc = 0x1E24E0u;
label_1e24e0:
    // 0x1e24e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e24e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e24e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e24e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e24e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E24E8u;
    {
        const bool branch_taken_0x1e24e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24E8u;
            // 0x1e24ec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24e8) {
            ctx->pc = 0x1E2504u;
            goto label_1e2504;
        }
    }
    ctx->pc = 0x1E24F0u;
    // 0x1e24f0: 0xc07ec64  jal         func_1FB190
    ctx->pc = 0x1E24F0u;
    SET_GPR_U32(ctx, 31, 0x1E24F8u);
    ctx->pc = 0x1FB190u;
    if (runtime->hasFunction(0x1FB190u)) {
        auto targetFn = runtime->lookupFunction(0x1FB190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24F8u; }
        if (ctx->pc != 0x1E24F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB190_0x1fb190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24F8u; }
        if (ctx->pc != 0x1E24F8u) { return; }
    }
    ctx->pc = 0x1E24F8u;
label_1e24f8:
    // 0x1e24f8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e24fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2500: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e2500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2504:
    // 0x1e2504: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1e2504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e2508: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1e2508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e250c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E250Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E250Cu;
            // 0x1e2510: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2514u;
    // 0x1e2514: 0x0  nop
    ctx->pc = 0x1e2514u;
    // NOP
label_1e2518:
    // 0x1e2518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e251c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2528: 0x8078952  j           func_1E2548
    ctx->pc = 0x1E2528u;
    ctx->pc = 0x1E252Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2528u;
            // 0x1e252c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2548u;
    goto label_1e2548;
    ctx->pc = 0x1E2530u;
    // 0x1e2530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2534: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e2534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e253c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2540: 0x8078952  j           func_1E2548
    ctx->pc = 0x1E2540u;
    ctx->pc = 0x1E2544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2540u;
            // 0x1e2544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2548u;
    goto label_1e2548;
    ctx->pc = 0x1E2548u;
label_1e2548:
    // 0x1e2548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e254c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e254cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2550: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e2558: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e2558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e255c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e2560: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e2560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e2564: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2564u;
    SET_GPR_U32(ctx, 31, 0x1E256Cu);
    ctx->pc = 0x1E2568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2564u;
            // 0x1e2568: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E256Cu; }
        if (ctx->pc != 0x1E256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E256Cu; }
        if (ctx->pc != 0x1E256Cu) { return; }
    }
    ctx->pc = 0x1E256Cu;
label_1e256c:
    // 0x1e256c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x1e256cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x1e2570: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2578: 0x2484d568  addiu       $a0, $a0, -0x2A98
    ctx->pc = 0x1e2578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956392));
    // 0x1e257c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2580: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2580u;
    {
        const bool branch_taken_0x1e2580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2580u;
            // 0x1e2584: 0x10302b  sltu        $a2, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2580) {
            ctx->pc = 0x1E25A0u;
            goto label_1e25a0;
        }
    }
    ctx->pc = 0x1E2588u;
    // 0x1e2588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e258c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e258cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e2590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2594: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e2594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2598: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E2598u;
    ctx->pc = 0x1E259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2598u;
            // 0x1e259c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E25A0u;
label_1e25a0:
    // 0x1e25a0: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1e25a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e25a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e25a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e25a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e25ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e25acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e25b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e25b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e25b4: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E25B4u;
    ctx->pc = 0x1E25B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25B4u;
            // 0x1e25b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    if (runtime->hasFunction(0x1FAD00u)) {
        auto targetFn = runtime->lookupFunction(0x1FAD00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E25BCu;
    // 0x1e25bc: 0x0  nop
    ctx->pc = 0x1e25bcu;
    // NOP
label_1e25c0:
    // 0x1e25c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e25c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e25c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e25c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e25c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e25ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e25d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e25d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e25d4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E25D4u;
    SET_GPR_U32(ctx, 31, 0x1E25DCu);
    ctx->pc = 0x1E25D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25D4u;
            // 0x1e25d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25DCu; }
        if (ctx->pc != 0x1E25DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E25DCu; }
        if (ctx->pc != 0x1E25DCu) { return; }
    }
    ctx->pc = 0x1E25DCu;
label_1e25dc:
    // 0x1e25dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e25dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e25e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e25e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e25e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25e8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E25E8u;
    {
        const bool branch_taken_0x1e25e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E25ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25E8u;
            // 0x1e25ec: 0x2484d5a8  addiu       $a0, $a0, -0x2A58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25e8) {
            ctx->pc = 0x1E2608u;
            goto label_1e2608;
        }
    }
    ctx->pc = 0x1E25F0u;
    // 0x1e25f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e25f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e25f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e25f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e25f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e25f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e25fc: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E25FCu;
    ctx->pc = 0x1E2600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E25FCu;
            // 0x1e2600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2604u;
    // 0x1e2604: 0x0  nop
    ctx->pc = 0x1e2604u;
    // NOP
label_1e2608:
    // 0x1e2608: 0xc07dcde  jal         func_1F7378
    ctx->pc = 0x1E2608u;
    SET_GPR_U32(ctx, 31, 0x1E2610u);
    ctx->pc = 0x1E260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2608u;
            // 0x1e260c: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7378u;
    if (runtime->hasFunction(0x1F7378u)) {
        auto targetFn = runtime->lookupFunction(0x1F7378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2610u; }
        if (ctx->pc != 0x1E2610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7378_0x1f7378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2610u; }
        if (ctx->pc != 0x1E2610u) { return; }
    }
    ctx->pc = 0x1E2610u;
label_1e2610:
    // 0x1e2610: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2614: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2614u;
    {
        const bool branch_taken_0x1e2614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2614u;
            // 0x1e2618: 0x2484d5d8  addiu       $a0, $a0, -0x2A28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2614) {
            ctx->pc = 0x1E2630u;
            goto label_1e2630;
        }
    }
    ctx->pc = 0x1E261Cu;
    // 0x1e261c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e261cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2628: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E2628u;
    ctx->pc = 0x1E262Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2628u;
            // 0x1e262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2630u;
label_1e2630:
    // 0x1e2630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e263c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E263Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E263Cu;
            // 0x1e2640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2644u;
    // 0x1e2644: 0x0  nop
    ctx->pc = 0x1e2644u;
    // NOP
label_1e2648:
    // 0x1e2648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e264c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2654: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1e2654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e2658: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2658u;
    {
        const bool branch_taken_0x1e2658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2658u;
            // 0x1e265c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2658) {
            ctx->pc = 0x1E2670u;
            goto label_1e2670;
        }
    }
    ctx->pc = 0x1E2660u;
    // 0x1e2660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2664: 0x807b6ec  j           func_1EDBB0
    ctx->pc = 0x1E2664u;
    ctx->pc = 0x1E2668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2664u;
            // 0x1e2668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDBB0u;
    {
        auto targetFn = runtime->lookupFunction(0x1EDBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E266Cu;
    // 0x1e266c: 0x0  nop
    ctx->pc = 0x1e266cu;
    // NOP
label_1e2670:
    // 0x1e2670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2674: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2674u;
            // 0x1e2678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E267Cu;
    // 0x1e267c: 0x0  nop
    ctx->pc = 0x1e267cu;
    // NOP
label_1e2680:
    // 0x1e2680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e2684: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1e2684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1e2688: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1e2688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e268c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E268Cu;
    SET_GPR_U32(ctx, 31, 0x1E2694u);
    ctx->pc = 0x1E2690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E268Cu;
            // 0x1e2690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2694u; }
        if (ctx->pc != 0x1E2694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2694u; }
        if (ctx->pc != 0x1E2694u) { return; }
    }
    ctx->pc = 0x1E2694u;
label_1e2694:
    // 0x1e2694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2698: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e2698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e269c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E269Cu;
    {
        const bool branch_taken_0x1e269c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E26A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E269Cu;
            // 0x1e26a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e269c) {
            ctx->pc = 0x1E26B8u;
            goto label_1e26b8;
        }
    }
    ctx->pc = 0x1E26A4u;
    // 0x1e26a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e26a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e26a8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E26A8u;
    SET_GPR_U32(ctx, 31, 0x1E26B0u);
    ctx->pc = 0x1E26ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26A8u;
            // 0x1e26ac: 0x2484d600  addiu       $a0, $a0, -0x2A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26B0u; }
        if (ctx->pc != 0x1E26B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26B0u; }
        if (ctx->pc != 0x1E26B0u) { return; }
    }
    ctx->pc = 0x1E26B0u;
label_1e26b0:
    // 0x1e26b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E26B0u;
    {
        const bool branch_taken_0x1e26b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26B0u;
            // 0x1e26b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26b0) {
            ctx->pc = 0x1E26C4u;
            goto label_1e26c4;
        }
    }
    ctx->pc = 0x1E26B8u;
label_1e26b8:
    // 0x1e26b8: 0xc078a0a  jal         func_1E2828
    ctx->pc = 0x1E26B8u;
    SET_GPR_U32(ctx, 31, 0x1E26C0u);
    ctx->pc = 0x1E2828u;
    if (runtime->hasFunction(0x1E2828u)) {
        auto targetFn = runtime->lookupFunction(0x1E2828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26C0u; }
        if (ctx->pc != 0x1E26C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2828_0x1e2828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26C0u; }
        if (ctx->pc != 0x1E26C0u) { return; }
    }
    ctx->pc = 0x1E26C0u;
label_1e26c0:
    // 0x1e26c0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1e26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1e26c4:
    // 0x1e26c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1e26c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e26c8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1e26c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e26cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E26CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E26D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26CCu;
            // 0x1e26d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E26D4u;
    // 0x1e26d4: 0x0  nop
    ctx->pc = 0x1e26d4u;
    // NOP
label_1e26d8:
    // 0x1e26d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e26d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e26dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e26dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e26e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e26e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e26e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e26e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e26ec: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E26ECu;
    SET_GPR_U32(ctx, 31, 0x1E26F4u);
    ctx->pc = 0x1E26F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26ECu;
            // 0x1e26f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26F4u; }
        if (ctx->pc != 0x1E26F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26F4u; }
        if (ctx->pc != 0x1E26F4u) { return; }
    }
    ctx->pc = 0x1E26F4u;
label_1e26f4:
    // 0x1e26f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e26f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e26fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e26fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2700: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2700u;
    {
        const bool branch_taken_0x1e2700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2700u;
            // 0x1e2704: 0x2484d630  addiu       $a0, $a0, -0x29D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2700) {
            ctx->pc = 0x1E2720u;
            goto label_1e2720;
        }
    }
    ctx->pc = 0x1E2708u;
    // 0x1e2708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e270c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e270cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2714: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E2714u;
    ctx->pc = 0x1E2718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2714u;
            // 0x1e2718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E271Cu;
    // 0x1e271c: 0x0  nop
    ctx->pc = 0x1e271cu;
    // NOP
label_1e2720:
    // 0x1e2720: 0xc07dcfa  jal         func_1F73E8
    ctx->pc = 0x1E2720u;
    SET_GPR_U32(ctx, 31, 0x1E2728u);
    ctx->pc = 0x1E2724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2720u;
            // 0x1e2724: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F73E8u;
    if (runtime->hasFunction(0x1F73E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F73E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2728u; }
        if (ctx->pc != 0x1E2728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F73E8_0x1f73e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2728u; }
        if (ctx->pc != 0x1E2728u) { return; }
    }
    ctx->pc = 0x1E2728u;
label_1e2728:
    // 0x1e2728: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e272c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E272Cu;
    {
        const bool branch_taken_0x1e272c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E272Cu;
            // 0x1e2730: 0x2484d660  addiu       $a0, $a0, -0x29A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e272c) {
            ctx->pc = 0x1E2748u;
            goto label_1e2748;
        }
    }
    ctx->pc = 0x1E2734u;
    // 0x1e2734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e2738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e273c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e273cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2740: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E2740u;
    ctx->pc = 0x1E2744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2740u;
            // 0x1e2744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E2748u;
label_1e2748:
    // 0x1e2748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e274c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e274cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2754: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2754u;
            // 0x1e2758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E275Cu;
    // 0x1e275c: 0x0  nop
    ctx->pc = 0x1e275cu;
    // NOP
label_1e2760:
    // 0x1e2760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2764: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e276c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1e276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e2770: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2770u;
    {
        const bool branch_taken_0x1e2770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2770u;
            // 0x1e2774: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2770) {
            ctx->pc = 0x1E2788u;
            goto label_1e2788;
        }
    }
    ctx->pc = 0x1E2778u;
    // 0x1e2778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e277c: 0x807b6e6  j           func_1EDB98
    ctx->pc = 0x1E277Cu;
    ctx->pc = 0x1E2780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E277Cu;
            // 0x1e2780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDB98u;
    {
        auto targetFn = runtime->lookupFunction(0x1EDB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E2784u;
    // 0x1e2784: 0x0  nop
    ctx->pc = 0x1e2784u;
    // NOP
label_1e2788:
    // 0x1e2788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e278c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E278Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E278Cu;
            // 0x1e2790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2794u;
    // 0x1e2794: 0x0  nop
    ctx->pc = 0x1e2794u;
    // NOP
label_1e2798:
    // 0x1e2798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e279c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1e279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1e27a0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1e27a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e27a4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E27A4u;
    SET_GPR_U32(ctx, 31, 0x1E27ACu);
    ctx->pc = 0x1E27A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27A4u;
            // 0x1e27a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27ACu; }
        if (ctx->pc != 0x1E27ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27ACu; }
        if (ctx->pc != 0x1E27ACu) { return; }
    }
    ctx->pc = 0x1E27ACu;
label_1e27ac:
    // 0x1e27ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e27acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e27b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e27b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27b4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E27B4u;
    {
        const bool branch_taken_0x1e27b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E27B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27B4u;
            // 0x1e27b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27b4) {
            ctx->pc = 0x1E27D0u;
            goto label_1e27d0;
        }
    }
    ctx->pc = 0x1E27BCu;
    // 0x1e27bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e27bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e27c0: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E27C0u;
    SET_GPR_U32(ctx, 31, 0x1E27C8u);
    ctx->pc = 0x1E27C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27C0u;
            // 0x1e27c4: 0x2484d690  addiu       $a0, $a0, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27C8u; }
        if (ctx->pc != 0x1E27C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27C8u; }
        if (ctx->pc != 0x1E27C8u) { return; }
    }
    ctx->pc = 0x1E27C8u;
label_1e27c8:
    // 0x1e27c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E27C8u;
    {
        const bool branch_taken_0x1e27c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27C8u;
            // 0x1e27cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27c8) {
            ctx->pc = 0x1E27DCu;
            goto label_1e27dc;
        }
    }
    ctx->pc = 0x1E27D0u;
label_1e27d0:
    // 0x1e27d0: 0xc078a0a  jal         func_1E2828
    ctx->pc = 0x1E27D0u;
    SET_GPR_U32(ctx, 31, 0x1E27D8u);
    ctx->pc = 0x1E2828u;
    if (runtime->hasFunction(0x1E2828u)) {
        auto targetFn = runtime->lookupFunction(0x1E2828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27D8u; }
        if (ctx->pc != 0x1E27D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2828_0x1e2828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27D8u; }
        if (ctx->pc != 0x1E27D8u) { return; }
    }
    ctx->pc = 0x1E27D8u;
label_1e27d8:
    // 0x1e27d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e27dc:
    // 0x1e27dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1e27dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e27e0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1e27e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e27e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E27E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E27E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27E4u;
            // 0x1e27e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E27ECu;
    // 0x1e27ec: 0x0  nop
    ctx->pc = 0x1e27ecu;
    // NOP
    ctx->pc = 0x1e27f0u;
}
