#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC838
// Address: 0x1dc838 - 0x1dc938
void sub_001DC838_0x1dc838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC838_0x1dc838");
#endif

    switch (ctx->pc) {
        case 0x1dc838u: goto label_1dc838;
        case 0x1dc83cu: goto label_1dc83c;
        case 0x1dc840u: goto label_1dc840;
        case 0x1dc844u: goto label_1dc844;
        case 0x1dc848u: goto label_1dc848;
        case 0x1dc84cu: goto label_1dc84c;
        case 0x1dc850u: goto label_1dc850;
        case 0x1dc854u: goto label_1dc854;
        case 0x1dc858u: goto label_1dc858;
        case 0x1dc85cu: goto label_1dc85c;
        case 0x1dc860u: goto label_1dc860;
        case 0x1dc864u: goto label_1dc864;
        case 0x1dc868u: goto label_1dc868;
        case 0x1dc86cu: goto label_1dc86c;
        case 0x1dc870u: goto label_1dc870;
        case 0x1dc874u: goto label_1dc874;
        case 0x1dc878u: goto label_1dc878;
        case 0x1dc87cu: goto label_1dc87c;
        case 0x1dc880u: goto label_1dc880;
        case 0x1dc884u: goto label_1dc884;
        case 0x1dc888u: goto label_1dc888;
        case 0x1dc88cu: goto label_1dc88c;
        case 0x1dc890u: goto label_1dc890;
        case 0x1dc894u: goto label_1dc894;
        case 0x1dc898u: goto label_1dc898;
        case 0x1dc89cu: goto label_1dc89c;
        case 0x1dc8a0u: goto label_1dc8a0;
        case 0x1dc8a4u: goto label_1dc8a4;
        case 0x1dc8a8u: goto label_1dc8a8;
        case 0x1dc8acu: goto label_1dc8ac;
        case 0x1dc8b0u: goto label_1dc8b0;
        case 0x1dc8b4u: goto label_1dc8b4;
        case 0x1dc8b8u: goto label_1dc8b8;
        case 0x1dc8bcu: goto label_1dc8bc;
        case 0x1dc8c0u: goto label_1dc8c0;
        case 0x1dc8c4u: goto label_1dc8c4;
        case 0x1dc8c8u: goto label_1dc8c8;
        case 0x1dc8ccu: goto label_1dc8cc;
        case 0x1dc8d0u: goto label_1dc8d0;
        case 0x1dc8d4u: goto label_1dc8d4;
        case 0x1dc8d8u: goto label_1dc8d8;
        case 0x1dc8dcu: goto label_1dc8dc;
        case 0x1dc8e0u: goto label_1dc8e0;
        case 0x1dc8e4u: goto label_1dc8e4;
        case 0x1dc8e8u: goto label_1dc8e8;
        case 0x1dc8ecu: goto label_1dc8ec;
        case 0x1dc8f0u: goto label_1dc8f0;
        case 0x1dc8f4u: goto label_1dc8f4;
        case 0x1dc8f8u: goto label_1dc8f8;
        case 0x1dc8fcu: goto label_1dc8fc;
        case 0x1dc900u: goto label_1dc900;
        case 0x1dc904u: goto label_1dc904;
        case 0x1dc908u: goto label_1dc908;
        case 0x1dc90cu: goto label_1dc90c;
        case 0x1dc910u: goto label_1dc910;
        case 0x1dc914u: goto label_1dc914;
        case 0x1dc918u: goto label_1dc918;
        case 0x1dc91cu: goto label_1dc91c;
        case 0x1dc920u: goto label_1dc920;
        case 0x1dc924u: goto label_1dc924;
        case 0x1dc928u: goto label_1dc928;
        case 0x1dc92cu: goto label_1dc92c;
        case 0x1dc930u: goto label_1dc930;
        case 0x1dc934u: goto label_1dc934;
        default: break;
    }

    ctx->pc = 0x1dc838u;

label_1dc838:
    // 0x1dc838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dc83c:
    // 0x1dc83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dc840:
    // 0x1dc840: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dc840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dc844:
    // 0x1dc844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1dc848:
    // 0x1dc848: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_1dc84c:
    if (ctx->pc == 0x1DC84Cu) {
        ctx->pc = 0x1DC84Cu;
            // 0x1dc84c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1DC850u;
        goto label_1dc850;
    }
    ctx->pc = 0x1DC848u;
    {
        const bool branch_taken_0x1dc848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC848u;
            // 0x1dc84c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc848) {
            ctx->pc = 0x1DC870u;
            goto label_1dc870;
        }
    }
    ctx->pc = 0x1DC850u;
label_1dc850:
    // 0x1dc850: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x1dc850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_1dc854:
    // 0x1dc854: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1dc854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1dc858:
    // 0x1dc858: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1dc858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_1dc85c:
    // 0x1dc85c: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x1dc85cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1dc860:
    // 0x1dc860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dc860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dc864:
    // 0x1dc864: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1dc864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1dc868:
    // 0x1dc868: 0x10000018  b           . + 4 + (0x18 << 2)
label_1dc86c:
    if (ctx->pc == 0x1DC86Cu) {
        ctx->pc = 0x1DC86Cu;
            // 0x1dc86c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->pc = 0x1DC870u;
        goto label_1dc870;
    }
    ctx->pc = 0x1DC868u;
    {
        const bool branch_taken_0x1dc868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC868u;
            // 0x1dc86c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc868) {
            ctx->pc = 0x1DC8CCu;
            goto label_1dc8cc;
        }
    }
    ctx->pc = 0x1DC870u;
label_1dc870:
    // 0x1dc870: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1dc874:
    if (ctx->pc == 0x1DC874u) {
        ctx->pc = 0x1DC874u;
            // 0x1dc874: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DC878u;
        goto label_1dc878;
    }
    ctx->pc = 0x1DC870u;
    {
        const bool branch_taken_0x1dc870 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1DC874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC870u;
            // 0x1dc874: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc870) {
            ctx->pc = 0x1DC880u;
            goto label_1dc880;
        }
    }
    ctx->pc = 0x1DC878u;
label_1dc878:
    // 0x1dc878: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1dc878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dc87c:
    // 0x1dc87c: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x1dc87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_1dc880:
    // 0x1dc880: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1dc884:
    if (ctx->pc == 0x1DC884u) {
        ctx->pc = 0x1DC888u;
        goto label_1dc888;
    }
    ctx->pc = 0x1DC880u;
    {
        const bool branch_taken_0x1dc880 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1dc880) {
            ctx->pc = 0x1DC890u;
            goto label_1dc890;
        }
    }
    ctx->pc = 0x1DC888u;
label_1dc888:
    // 0x1dc888: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1dc888u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_1dc88c:
    // 0x1dc88c: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x1dc88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
label_1dc890:
    // 0x1dc890: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_1dc894:
    if (ctx->pc == 0x1DC894u) {
        ctx->pc = 0x1DC898u;
        goto label_1dc898;
    }
    ctx->pc = 0x1DC890u;
    {
        const bool branch_taken_0x1dc890 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1dc890) {
            ctx->pc = 0x1DC8A0u;
            goto label_1dc8a0;
        }
    }
    ctx->pc = 0x1DC898u;
label_1dc898:
    // 0x1dc898: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x1dc898u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_1dc89c:
    // 0x1dc89c: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1dc89cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_1dc8a0:
    // 0x1dc8a0: 0xc048082  jal         func_120208
label_1dc8a4:
    if (ctx->pc == 0x1DC8A4u) {
        ctx->pc = 0x1DC8A8u;
        goto label_1dc8a8;
    }
    ctx->pc = 0x1DC8A0u;
    SET_GPR_U32(ctx, 31, 0x1DC8A8u);
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8A8u; }
        if (ctx->pc != 0x1DC8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8A8u; }
        if (ctx->pc != 0x1DC8A8u) { return; }
    }
    ctx->pc = 0x1DC8A8u;
label_1dc8a8:
    // 0x1dc8a8: 0x1027fe  dsrl32      $a0, $s0, 31
    ctx->pc = 0x1dc8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 31));
label_1dc8ac:
    // 0x1dc8ac: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x1dc8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
label_1dc8b0:
    // 0x1dc8b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8b4:
    // 0x1dc8b4: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x1dc8b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
label_1dc8b8:
    // 0x1dc8b8: 0xc04818c  jal         func_120630
label_1dc8bc:
    if (ctx->pc == 0x1DC8BCu) {
        ctx->pc = 0x1DC8BCu;
            // 0x1dc8bc: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->pc = 0x1DC8C0u;
        goto label_1dc8c0;
    }
    ctx->pc = 0x1DC8B8u;
    SET_GPR_U32(ctx, 31, 0x1DC8C0u);
    ctx->pc = 0x1DC8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8B8u;
            // 0x1dc8bc: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8C0u; }
        if (ctx->pc != 0x1DC8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8C0u; }
        if (ctx->pc != 0x1DC8C0u) { return; }
    }
    ctx->pc = 0x1DC8C0u;
label_1dc8c0:
    // 0x1dc8c0: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x1dc8c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_1dc8c4:
    // 0x1dc8c4: 0x2182f  dsubu       $v1, $zero, $v0
    ctx->pc = 0x1dc8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_1dc8c8:
    // 0x1dc8c8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1dc8c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1dc8cc:
    // 0x1dc8cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc8d0:
    // 0x1dc8d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dc8d4:
    // 0x1dc8d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc8d8:
    // 0x1dc8d8: 0x3e00008  jr          $ra
label_1dc8dc:
    if (ctx->pc == 0x1DC8DCu) {
        ctx->pc = 0x1DC8DCu;
            // 0x1dc8dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DC8E0u;
        goto label_1dc8e0;
    }
    ctx->pc = 0x1DC8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8D8u;
            // 0x1dc8dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC8E0u;
label_1dc8e0:
    // 0x1dc8e0: 0x3e00008  jr          $ra
label_1dc8e4:
    if (ctx->pc == 0x1DC8E4u) {
        ctx->pc = 0x1DC8E4u;
            // 0x1dc8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8E8u;
        goto label_1dc8e8;
    }
    ctx->pc = 0x1DC8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8E0u;
            // 0x1dc8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC8E8u;
label_1dc8e8:
    // 0x1dc8e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1dc8ec:
    // 0x1dc8ec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dc8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1dc8f0:
    // 0x1dc8f0: 0xac44eadc  sw          $a0, -0x1524($v0)
    ctx->pc = 0x1dc8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961884), GPR_U32(ctx, 4));
label_1dc8f4:
    // 0x1dc8f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8f8:
    // 0x1dc8f8: 0x3e00008  jr          $ra
label_1dc8fc:
    if (ctx->pc == 0x1DC8FCu) {
        ctx->pc = 0x1DC8FCu;
            // 0x1dc8fc: 0xac65eae0  sw          $a1, -0x1520($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961888), GPR_U32(ctx, 5));
        ctx->pc = 0x1DC900u;
        goto label_1dc900;
    }
    ctx->pc = 0x1DC8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8F8u;
            // 0x1dc8fc: 0xac65eae0  sw          $a1, -0x1520($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC900u;
label_1dc900:
    // 0x1dc900: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dc900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1dc904:
    // 0x1dc904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1dc908:
    // 0x1dc908: 0x8c43eadc  lw          $v1, -0x1524($v0)
    ctx->pc = 0x1dc908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961884)));
label_1dc90c:
    // 0x1dc90c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dc90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc910:
    // 0x1dc910: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1dc914:
    if (ctx->pc == 0x1DC914u) {
        ctx->pc = 0x1DC914u;
            // 0x1dc914: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1DC918u;
        goto label_1dc918;
    }
    ctx->pc = 0x1DC910u;
    {
        const bool branch_taken_0x1dc910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC910u;
            // 0x1dc914: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc910) {
            ctx->pc = 0x1DC924u;
            goto label_1dc924;
        }
    }
    ctx->pc = 0x1DC918u;
label_1dc918:
    // 0x1dc918: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dc918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1dc91c:
    // 0x1dc91c: 0x60f809  jalr        $v1
label_1dc920:
    if (ctx->pc == 0x1DC920u) {
        ctx->pc = 0x1DC920u;
            // 0x1dc920: 0x8c44eae0  lw          $a0, -0x1520($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961888)));
        ctx->pc = 0x1DC924u;
        goto label_1dc924;
    }
    ctx->pc = 0x1DC91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC924u);
        ctx->pc = 0x1DC920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC91Cu;
            // 0x1dc920: 0x8c44eae0  lw          $a0, -0x1520($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961888)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC924u; }
            if (ctx->pc != 0x1DC924u) { return; }
        }
        }
    }
    ctx->pc = 0x1DC924u;
label_1dc924:
    // 0x1dc924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc928:
    // 0x1dc928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc92c:
    // 0x1dc92c: 0x3e00008  jr          $ra
label_1dc930:
    if (ctx->pc == 0x1DC930u) {
        ctx->pc = 0x1DC930u;
            // 0x1dc930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1DC934u;
        goto label_1dc934;
    }
    ctx->pc = 0x1DC92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC92Cu;
            // 0x1dc930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC934u;
label_1dc934:
    // 0x1dc934: 0x0  nop
    ctx->pc = 0x1dc934u;
    // NOP
    ctx->pc = 0x1dc938u;
}
