#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2570
// Address: 0x1a2570 - 0x1a28b0
void sub_001A2570_0x1a2570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2570_0x1a2570");
#endif

    switch (ctx->pc) {
        case 0x1a25f0u: goto label_1a25f0;
        default: break;
    }

    ctx->pc = 0x1a2570u;

    // 0x1a2570: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a2570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a2574: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2578: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1a257c: 0x2442ea20  addiu       $v0, $v0, -0x15E0
    ctx->pc = 0x1a257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x1a2580: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a2580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1a2584: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a2584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a2588: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1a2588u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a258c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a2590: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a2590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a2594: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1a2594u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2598: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a2598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a259c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a259cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a25a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a25a4: 0x309300ff  andi        $s3, $a0, 0xFF
    ctx->pc = 0x1a25a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a25a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a25ac: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1a25acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1a25b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a25b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a25b4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1a25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1a25b8: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1a25b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a25bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a25c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a25c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a25c4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a25c8: 0x1381c0  sll         $s0, $s3, 7
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1a25cc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a25d0: 0x128940  sll         $s1, $s2, 5
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1a25d4: 0x24429600  addiu       $v0, $v0, -0x6A00
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940160));
    // 0x1a25d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a25e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a25e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25e4: 0x222b821  addu        $s7, $s1, $v0
    ctx->pc = 0x1a25e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a25e8: 0xc0474de  jal         func_11D378
    ctx->pc = 0x1A25E8u;
    SET_GPR_U32(ctx, 31, 0x1A25F0u);
    ctx->pc = 0x1A25ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25E8u;
            // 0x1a25ec: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D378u;
    if (runtime->hasFunction(0x11D378u)) {
        auto targetFn = runtime->lookupFunction(0x11D378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25F0u; }
        if (ctx->pc != 0x1A25F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D378_0x11d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25F0u; }
        if (ctx->pc != 0x1A25F0u) { return; }
    }
    ctx->pc = 0x1A25F0u;
label_1a25f0:
    // 0x1a25f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A25F0u;
    {
        const bool branch_taken_0x1a25f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a25f0) {
            ctx->pc = 0x1A25F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25F0u;
            // 0x1a25f4: 0x92e20000  lbu         $v0, 0x0($s7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2600u;
            goto label_1a2600;
        }
    }
    ctx->pc = 0x1A25F8u;
    // 0x1a25f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1A25F8u;
    {
        const bool branch_taken_0x1a25f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25F8u;
            // 0x1a25fc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25f8) {
            ctx->pc = 0x1A26FCu;
            goto label_1a26fc;
        }
    }
    ctx->pc = 0x1A2600u;
label_1a2600:
    // 0x1a2600: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A2600u;
    {
        const bool branch_taken_0x1a2600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2600) {
            ctx->pc = 0x1A26FCu;
            goto label_1a26fc;
        }
    }
    ctx->pc = 0x1A2608u;
    // 0x1a2608: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a260c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a260cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a2610: 0x2442ea08  addiu       $v0, $v0, -0x15F8
    ctx->pc = 0x1a2610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961672));
    // 0x1a2614: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a2614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a2618: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a2618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a261c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a2620: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a2620u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2624: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A2624u;
    {
        const bool branch_taken_0x1a2624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2624) {
            ctx->pc = 0x1A26CCu;
            goto label_1a26cc;
        }
    }
    ctx->pc = 0x1A262Cu;
    // 0x1a262c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a262cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a2630: 0x24429607  addiu       $v0, $v0, -0x69F9
    ctx->pc = 0x1a2630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940167));
    // 0x1a2634: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a2634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a2638: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a263c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1a263cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2640: 0x28410030  slti        $at, $v0, 0x30
    ctx->pc = 0x1a2640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1a2644: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2644u;
    {
        const bool branch_taken_0x1a2644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2644) {
            ctx->pc = 0x1A2648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2644u;
            // 0x1a2648: 0x284100c1  slti        $at, $v0, 0xC1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2654u;
            goto label_1a2654;
        }
    }
    ctx->pc = 0x1A264Cu;
    // 0x1a264c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A264Cu;
    {
        const bool branch_taken_0x1a264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A264Cu;
            // 0x1a2650: 0x64040010  daddiu      $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a264c) {
            ctx->pc = 0x1A2660u;
            goto label_1a2660;
        }
    }
    ctx->pc = 0x1A2654u;
label_1a2654:
    // 0x1a2654: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2654u;
    {
        const bool branch_taken_0x1a2654 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2654) {
            ctx->pc = 0x1A2658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2654u;
            // 0x1a2658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2660u;
            goto label_1a2660;
        }
    }
    ctx->pc = 0x1A265Cu;
    // 0x1a265c: 0x64040040  daddiu      $a0, $zero, 0x40
    ctx->pc = 0x1a265cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_1a2660:
    // 0x1a2660: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a2664: 0x24429606  addiu       $v0, $v0, -0x69FA
    ctx->pc = 0x1a2664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940166));
    // 0x1a2668: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a2668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a266c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a2670: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1a2670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2674: 0x28410030  slti        $at, $v0, 0x30
    ctx->pc = 0x1a2674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1a2678: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2678u;
    {
        const bool branch_taken_0x1a2678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2678) {
            ctx->pc = 0x1A267Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2678u;
            // 0x1a267c: 0x284100c1  slti        $at, $v0, 0xC1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A268Cu;
            goto label_1a268c;
        }
    }
    ctx->pc = 0x1A2680u;
    // 0x1a2680: 0x34820080  ori         $v0, $a0, 0x80
    ctx->pc = 0x1a2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1a2684: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2684u;
    {
        const bool branch_taken_0x1a2684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2684u;
            // 0x1a2688: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2684) {
            ctx->pc = 0x1A269Cu;
            goto label_1a269c;
        }
    }
    ctx->pc = 0x1A268Cu;
label_1a268c:
    // 0x1a268c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A268Cu;
    {
        const bool branch_taken_0x1a268c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a268c) {
            ctx->pc = 0x1A269Cu;
            goto label_1a269c;
        }
    }
    ctx->pc = 0x1A2694u;
    // 0x1a2694: 0x34820020  ori         $v0, $a0, 0x20
    ctx->pc = 0x1a2694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1a2698: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a2698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a269c:
    // 0x1a269c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a269cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a26a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a26a4: 0x24639602  addiu       $v1, $v1, -0x69FE
    ctx->pc = 0x1a26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940162));
    // 0x1a26a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a26ac: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a26acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a26b0: 0x90750000  lbu         $s5, 0x0($v1)
    ctx->pc = 0x1a26b0u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a26b4: 0x16a2000a  bne         $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A26B4u;
    {
        const bool branch_taken_0x1a26b4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a26b4) {
            ctx->pc = 0x1A26E0u;
            goto label_1a26e0;
        }
    }
    ctx->pc = 0x1A26BCu;
    // 0x1a26bc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1a26bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a26c0: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x1a26c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x1a26c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A26C4u;
    {
        const bool branch_taken_0x1a26c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A26C4u;
            // 0x1a26c8: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26c4) {
            ctx->pc = 0x1A26E0u;
            goto label_1a26e0;
        }
    }
    ctx->pc = 0x1A26CCu;
label_1a26cc:
    // 0x1a26cc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a26d0: 0x24429602  addiu       $v0, $v0, -0x69FE
    ctx->pc = 0x1a26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940162));
    // 0x1a26d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a26d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a26dc: 0x90550000  lbu         $s5, 0x0($v0)
    ctx->pc = 0x1a26dcu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a26e0:
    // 0x1a26e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a26e4: 0x24429603  addiu       $v0, $v0, -0x69FD
    ctx->pc = 0x1a26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940163));
    // 0x1a26e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a26e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a26ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a26f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1a26f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a26f4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a26f8: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1a26f8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a26fc:
    // 0x1a26fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2700: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a2700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a2704: 0x2442ea08  addiu       $v0, $v0, -0x15F8
    ctx->pc = 0x1a2704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961672));
    // 0x1a2708: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a2708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a270c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a270cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a2710: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1a2710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a2714: 0x24429601  addiu       $v0, $v0, -0x69FF
    ctx->pc = 0x1a2714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940161));
    // 0x1a2718: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a2718u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a271c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a2720: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a2724: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1a2724u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a2728: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1a272c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A272Cu;
    {
        const bool branch_taken_0x1a272c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a272c) {
            ctx->pc = 0x1A2730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A272Cu;
            // 0x1a2730: 0x96850000  lhu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A273Cu;
            goto label_1a273c;
        }
    }
    ctx->pc = 0x1A2734u;
    // 0x1a2734: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a2734u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2738: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x1a2738u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1a273c:
    // 0x1a273c: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x1a273cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x1a2740: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x1a2740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1a2744: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1a2744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2748: 0xa6850004  sh          $a1, 0x4($s4)
    ctx->pc = 0x1a2748u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a274c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a2750: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x1a2750u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a2754: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a2754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a2758: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x1a2758u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a275c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x1a275cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1a2760: 0x3884ffff  xori        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a2760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)65535);
    // 0x1a2764: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x1a2764u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a2768: 0x96850004  lhu         $a1, 0x4($s4)
    ctx->pc = 0x1a2768u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a276c: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x1a276cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a2770: 0x38a5ffff  xori        $a1, $a1, 0xFFFF
    ctx->pc = 0x1a2770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)65535);
    // 0x1a2774: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1a2774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1a2778: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A2778u;
    {
        const bool branch_taken_0x1a2778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2778u;
            // 0x1a277c: 0xa6840002  sh          $a0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2778) {
            ctx->pc = 0x1A27FCu;
            goto label_1a27fc;
        }
    }
    ctx->pc = 0x1A2780u;
    // 0x1a2780: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a2780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a2784: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1a2784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a2788: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x1a2788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x1a278c: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A278Cu;
    {
        const bool branch_taken_0x1a278c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a278c) {
            ctx->pc = 0x1A2790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A278Cu;
            // 0x1a2790: 0x96830004  lhu         $v1, 0x4($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2800u;
            goto label_1a2800;
        }
    }
    ctx->pc = 0x1A2794u;
    // 0x1a2794: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x1a2794u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a2798: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1a2798u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a279c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1a279cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1a27a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A27A0u;
    {
        const bool branch_taken_0x1a27a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27a0) {
            ctx->pc = 0x1A27A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27A0u;
            // 0x1a27a4: 0xa6800006  sh          $zero, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A27BCu;
            goto label_1a27bc;
        }
    }
    ctx->pc = 0x1A27A8u;
    // 0x1a27a8: 0xa680000a  sh          $zero, 0xA($s4)
    ctx->pc = 0x1a27a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a27ac: 0xa6800008  sh          $zero, 0x8($s4)
    ctx->pc = 0x1a27acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a27b0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1a27b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a27b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A27B4u;
    {
        const bool branch_taken_0x1a27b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27B4u;
            // 0x1a27b8: 0xa6820006  sh          $v0, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27b4) {
            ctx->pc = 0x1A2870u;
            goto label_1a2870;
        }
    }
    ctx->pc = 0x1A27BCu;
label_1a27bc:
    // 0x1a27bc: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x1a27bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1a27c0: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x1a27c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1a27c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A27C4u;
    {
        const bool branch_taken_0x1a27c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27c4) {
            ctx->pc = 0x1A27C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27C4u;
            // 0x1a27c8: 0x86820008  lh          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A27D8u;
            goto label_1a27d8;
        }
    }
    ctx->pc = 0x1A27CCu;
    // 0x1a27cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a27d0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A27D0u;
    {
        const bool branch_taken_0x1a27d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27D0u;
            // 0x1a27d4: 0xa682000a  sh          $v0, 0xA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27d0) {
            ctx->pc = 0x1A2870u;
            goto label_1a2870;
        }
    }
    ctx->pc = 0x1A27D8u;
label_1a27d8:
    // 0x1a27d8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1a27d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a27dc: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A27DCu;
    {
        const bool branch_taken_0x1a27dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27dc) {
            ctx->pc = 0x1A27E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27DCu;
            // 0x1a27e0: 0x96820000  lhu         $v0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A27F0u;
            goto label_1a27f0;
        }
    }
    ctx->pc = 0x1A27E4u;
    // 0x1a27e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a27e8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A27E8u;
    {
        const bool branch_taken_0x1a27e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27E8u;
            // 0x1a27ec: 0xa6820008  sh          $v0, 0x8($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27e8) {
            ctx->pc = 0x1A2870u;
            goto label_1a2870;
        }
    }
    ctx->pc = 0x1A27F0u;
label_1a27f0:
    // 0x1a27f0: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x1a27f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a27f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A27F4u;
    {
        const bool branch_taken_0x1a27f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A27F4u;
            // 0x1a27f8: 0xa6800008  sh          $zero, 0x8($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27f4) {
            ctx->pc = 0x1A2870u;
            goto label_1a2870;
        }
    }
    ctx->pc = 0x1A27FCu;
label_1a27fc:
    // 0x1a27fc: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x1a27fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_1a2800:
    // 0x1a2800: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1a2800u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a2804: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1a2804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1a2808: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1a2808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1a280c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A280Cu;
    {
        const bool branch_taken_0x1a280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a280c) {
            ctx->pc = 0x1A2810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A280Cu;
            // 0x1a2810: 0xa6800006  sh          $zero, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2828u;
            goto label_1a2828;
        }
    }
    ctx->pc = 0x1A2814u;
    // 0x1a2814: 0xa680000a  sh          $zero, 0xA($s4)
    ctx->pc = 0x1a2814u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2818: 0xa6800008  sh          $zero, 0x8($s4)
    ctx->pc = 0x1a2818u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a281c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1a281cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a2820: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A2820u;
    {
        const bool branch_taken_0x1a2820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2820u;
            // 0x1a2824: 0xa6820006  sh          $v0, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2820) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2828u;
label_1a2828:
    // 0x1a2828: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x1a2828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1a282c: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x1a282cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1a2830: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2830u;
    {
        const bool branch_taken_0x1a2830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2830) {
            ctx->pc = 0x1A2834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2830u;
            // 0x1a2834: 0x86820008  lh          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2844u;
            goto label_1a2844;
        }
    }
    ctx->pc = 0x1A2838u;
    // 0x1a2838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a283c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A283Cu;
    {
        const bool branch_taken_0x1a283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A283Cu;
            // 0x1a2840: 0xa682000a  sh          $v0, 0xA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a283c) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A2844u;
label_1a2844:
    // 0x1a2844: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1a2844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a2848: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2848u;
    {
        const bool branch_taken_0x1a2848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2848) {
            ctx->pc = 0x1A284Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2848u;
            // 0x1a284c: 0x96820000  lhu         $v0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A285Cu;
            goto label_1a285c;
        }
    }
    ctx->pc = 0x1A2850u;
    // 0x1a2850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2854u;
    {
        const bool branch_taken_0x1a2854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2854u;
            // 0x1a2858: 0xa6820008  sh          $v0, 0x8($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2854) {
            ctx->pc = 0x1A2864u;
            goto label_1a2864;
        }
    }
    ctx->pc = 0x1A285Cu;
label_1a285c:
    // 0x1a285c: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x1a285cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a2860: 0xa6800008  sh          $zero, 0x8($s4)
    ctx->pc = 0x1a2860u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 0));
label_1a2864:
    // 0x1a2864: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x1a2864u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x1a2868: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1a2868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1a286c: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x1a286cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
label_1a2870:
    // 0x1a2870: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1a2870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2874: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a2874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a2878: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a2878u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a287c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a287cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a2880: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a2880u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2884: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a2884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2888: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a2888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a288c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a288cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2890: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a289c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A289Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A28A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A289Cu;
            // 0x1a28a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A28A4u;
    // 0x1a28a4: 0x0  nop
    ctx->pc = 0x1a28a4u;
    // NOP
    // 0x1a28a8: 0x0  nop
    ctx->pc = 0x1a28a8u;
    // NOP
    // 0x1a28ac: 0x0  nop
    ctx->pc = 0x1a28acu;
    // NOP
    ctx->pc = 0x1a28b0u;
}
