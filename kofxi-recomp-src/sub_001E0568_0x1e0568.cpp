#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0568
// Address: 0x1e0568 - 0x1e0780
void sub_001E0568_0x1e0568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0568_0x1e0568");
#endif

    switch (ctx->pc) {
        case 0x1e0588u: goto label_1e0588;
        case 0x1e05b4u: goto label_1e05b4;
        case 0x1e05e0u: goto label_1e05e0;
        case 0x1e0638u: goto label_1e0638;
        case 0x1e0640u: goto label_1e0640;
        case 0x1e0654u: goto label_1e0654;
        case 0x1e066cu: goto label_1e066c;
        case 0x1e0680u: goto label_1e0680;
        case 0x1e06a0u: goto label_1e06a0;
        case 0x1e06b0u: goto label_1e06b0;
        case 0x1e06ccu: goto label_1e06cc;
        case 0x1e06f0u: goto label_1e06f0;
        case 0x1e0738u: goto label_1e0738;
        case 0x1e074cu: goto label_1e074c;
        case 0x1e0770u: goto label_1e0770;
        default: break;
    }

    ctx->pc = 0x1e0568u;

    // 0x1e0568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e056c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1e056cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1e0570: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e0570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0574: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e0574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e0578: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e0578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e057c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e057cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0580: 0xc07fc42  jal         func_1FF108
    ctx->pc = 0x1E0580u;
    SET_GPR_U32(ctx, 31, 0x1E0588u);
    ctx->pc = 0x1E0584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0580u;
            // 0x1e0584: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF108u;
    if (runtime->hasFunction(0x1FF108u)) {
        auto targetFn = runtime->lookupFunction(0x1FF108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0588u; }
        if (ctx->pc != 0x1E0588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF108_0x1ff108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0588u; }
        if (ctx->pc != 0x1E0588u) { return; }
    }
    ctx->pc = 0x1E0588u;
label_1e0588:
    // 0x1e0588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e058c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0590: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E0590u;
    {
        const bool branch_taken_0x1e0590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E0594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0590u;
            // 0x1e0594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0590) {
            ctx->pc = 0x1E05C8u;
            goto label_1e05c8;
        }
    }
    ctx->pc = 0x1E0598u;
    // 0x1e0598: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e059c: 0x5604000b  bnel        $s0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E059Cu;
    {
        const bool branch_taken_0x1e059c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e059c) {
            ctx->pc = 0x1E05A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E059Cu;
            // 0x1e05a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E05CCu;
            goto label_1e05cc;
        }
    }
    ctx->pc = 0x1E05A4u;
    // 0x1e05a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e05a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05a8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1e05a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1e05ac: 0xc080000  jal         func_200000
    ctx->pc = 0x1E05ACu;
    SET_GPR_U32(ctx, 31, 0x1E05B4u);
    ctx->pc = 0x1E05B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05ACu;
            // 0x1e05b0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200000u;
    if (runtime->hasFunction(0x200000u)) {
        auto targetFn = runtime->lookupFunction(0x200000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05B4u; }
        if (ctx->pc != 0x1E05B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200000_0x200000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E05B4u; }
        if (ctx->pc != 0x1E05B4u) { return; }
    }
    ctx->pc = 0x1E05B4u;
label_1e05b4:
    // 0x1e05b4: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E05B4u;
    {
        const bool branch_taken_0x1e05b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E05B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05B4u;
            // 0x1e05b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05b4) {
            ctx->pc = 0x1E05C8u;
            goto label_1e05c8;
        }
    }
    ctx->pc = 0x1E05BCu;
    // 0x1e05bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e05c0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1e05c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1e05c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e05c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e05c8:
    // 0x1e05c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e05c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e05cc:
    // 0x1e05cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e05ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e05d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e05d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e05d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05D4u;
            // 0x1e05d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E05DCu;
    // 0x1e05dc: 0x0  nop
    ctx->pc = 0x1e05dcu;
    // NOP
label_1e05e0:
    // 0x1e05e0: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x1e05e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1e05e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e05e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e05e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e05e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05ec: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x1e05ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e05f0: 0x24c70007  addiu       $a3, $a2, 0x7
    ctx->pc = 0x1e05f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1e05f4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1e05f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05f8: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x1e05f8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1e05fc: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x1e05fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1e0600: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1e0600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1e0604: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1e0604u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1e0608: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e0608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e060c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e0610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e0610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e0614: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1e0614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1e0618: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e061c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e061cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0620: 0x14880002  bne         $a0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0620u;
    {
        const bool branch_taken_0x1e0620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x1E0624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0620u;
            // 0x1e0624: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0620) {
            ctx->pc = 0x1E062Cu;
            goto label_1e062c;
        }
    }
    ctx->pc = 0x1E0628u;
    // 0x1e0628: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e062c:
    // 0x1e062c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E062Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0634u;
    // 0x1e0634: 0x0  nop
    ctx->pc = 0x1e0634u;
    // NOP
label_1e0638:
    // 0x1e0638: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0638u;
            // 0x1e063c: 0x8c8200b8  lw          $v0, 0xB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0640u;
label_1e0640:
    // 0x1e0640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e064c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E064Cu;
    SET_GPR_U32(ctx, 31, 0x1E0654u);
    ctx->pc = 0x1E0650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E064Cu;
            // 0x1e0650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0654u; }
        if (ctx->pc != 0x1E0654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0654u; }
        if (ctx->pc != 0x1E0654u) { return; }
    }
    ctx->pc = 0x1E0654u;
label_1e0654:
    // 0x1e0654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0658: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0658u;
    {
        const bool branch_taken_0x1e0658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0658u;
            // 0x1e065c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0658) {
            ctx->pc = 0x1E0678u;
            goto label_1e0678;
        }
    }
    ctx->pc = 0x1E0660u;
    // 0x1e0660: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e0660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e0664: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E0664u;
    SET_GPR_U32(ctx, 31, 0x1E066Cu);
    ctx->pc = 0x1E0668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0664u;
            // 0x1e0668: 0x2484cc98  addiu       $a0, $a0, -0x3368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E066Cu; }
        if (ctx->pc != 0x1E066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E066Cu; }
        if (ctx->pc != 0x1E066Cu) { return; }
    }
    ctx->pc = 0x1E066Cu;
label_1e066c:
    // 0x1e066c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E066Cu;
    {
        const bool branch_taken_0x1e066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E066Cu;
            // 0x1e0670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e066c) {
            ctx->pc = 0x1E06A0u;
            goto label_1e06a0;
        }
    }
    ctx->pc = 0x1E0674u;
    // 0x1e0674: 0x0  nop
    ctx->pc = 0x1e0674u;
    // NOP
label_1e0678:
    // 0x1e0678: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E0678u;
    SET_GPR_U32(ctx, 31, 0x1E0680u);
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0680u; }
        if (ctx->pc != 0x1E0680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0680u; }
        if (ctx->pc != 0x1E0680u) { return; }
    }
    ctx->pc = 0x1E0680u;
label_1e0680:
    // 0x1e0680: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0684: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0684u;
    {
        const bool branch_taken_0x1e0684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0684u;
            // 0x1e0688: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0684) {
            ctx->pc = 0x1E06A0u;
            goto label_1e06a0;
        }
    }
    ctx->pc = 0x1E068Cu;
    // 0x1e068c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e068cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0690: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0694: 0x807d560  j           func_1F5580
    ctx->pc = 0x1E0694u;
    ctx->pc = 0x1E0698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0694u;
            // 0x1e0698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5580u;
    {
        auto targetFn = runtime->lookupFunction(0x1F5580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E069Cu;
    // 0x1e069c: 0x0  nop
    ctx->pc = 0x1e069cu;
    // NOP
label_1e06a0:
    // 0x1e06a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e06a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e06a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e06a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e06a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E06A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E06ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06A8u;
            // 0x1e06ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E06B0u;
label_1e06b0:
    // 0x1e06b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e06b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e06b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e06b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e06bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e06c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e06c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e06c4: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E06C4u;
    SET_GPR_U32(ctx, 31, 0x1E06CCu);
    ctx->pc = 0x1E06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06C4u;
            // 0x1e06c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06CCu; }
        if (ctx->pc != 0x1E06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E06CCu; }
        if (ctx->pc != 0x1E06CCu) { return; }
    }
    ctx->pc = 0x1E06CCu;
label_1e06cc:
    // 0x1e06cc: 0x8c452578  lw          $a1, 0x2578($v0)
    ctx->pc = 0x1e06ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9592)));
    // 0x1e06d0: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1e06d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e06d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e06d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e06e0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E06E0u;
    {
        const bool branch_taken_0x1e06e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1E06E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06E0u;
            // 0x1e06e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06e0) {
            ctx->pc = 0x1E0714u;
            goto label_1e0714;
        }
    }
    ctx->pc = 0x1E06E8u;
    // 0x1e06e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e06e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06ec: 0x0  nop
    ctx->pc = 0x1e06ecu;
    // NOP
label_1e06f0:
    // 0x1e06f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e06f4: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E06F4u;
    {
        const bool branch_taken_0x1e06f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e06f4) {
            ctx->pc = 0x1E06F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E06F4u;
            // 0x1e06f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0708u;
            goto label_1e0708;
        }
    }
    ctx->pc = 0x1E06FCu;
    // 0x1e06fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1e06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1e0700: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0704: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e0708:
    // 0x1e0708: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1e0708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e070c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E070Cu;
    {
        const bool branch_taken_0x1e070c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E070Cu;
            // 0x1e0710: 0x246300f0  addiu       $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e070c) {
            ctx->pc = 0x1E06F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e06f0;
        }
    }
    ctx->pc = 0x1E0714u;
label_1e0714:
    // 0x1e0714: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0718: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e071c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e071cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0720: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1e0720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1e0724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e072c: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x1e072cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1e0730: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0730u;
            // 0x1e0734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0738u;
label_1e0738:
    // 0x1e0738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e073c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e073cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0740: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e0740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e0744: 0xc0788e6  jal         func_1E2398
    ctx->pc = 0x1E0744u;
    SET_GPR_U32(ctx, 31, 0x1E074Cu);
    ctx->pc = 0x1E0748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0744u;
            // 0x1e0748: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2398u;
    if (runtime->hasFunction(0x1E2398u)) {
        auto targetFn = runtime->lookupFunction(0x1E2398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E074Cu; }
        if (ctx->pc != 0x1E074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2398_0x1e2398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E074Cu; }
        if (ctx->pc != 0x1E074Cu) { return; }
    }
    ctx->pc = 0x1E074Cu;
label_1e074c:
    // 0x1e074c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1e074cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e0750: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e0750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0754: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e0754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e0758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e075c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e075cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e0760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0764: 0x8c422580  lw          $v0, 0x2580($v0)
    ctx->pc = 0x1e0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9600)));
    // 0x1e0768: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0768u;
            // 0x1e076c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0770u;
label_1e0770:
    // 0x1e0770: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1e0770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1e0774: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0774u;
            // 0x1e0778: 0x2442ccd0  addiu       $v0, $v0, -0x3330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E077Cu;
    // 0x1e077c: 0x0  nop
    ctx->pc = 0x1e077cu;
    // NOP
    ctx->pc = 0x1e0780u;
}
