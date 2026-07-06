#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E5B8
// Address: 0x21e5b8 - 0x21e7f8
void sub_0021E5B8_0x21e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E5B8_0x21e5b8");
#endif

    switch (ctx->pc) {
        case 0x21e60cu: goto label_21e60c;
        case 0x21e61cu: goto label_21e61c;
        case 0x21e634u: goto label_21e634;
        case 0x21e680u: goto label_21e680;
        case 0x21e68cu: goto label_21e68c;
        case 0x21e6acu: goto label_21e6ac;
        case 0x21e6bcu: goto label_21e6bc;
        case 0x21e6f0u: goto label_21e6f0;
        case 0x21e704u: goto label_21e704;
        case 0x21e73cu: goto label_21e73c;
        case 0x21e744u: goto label_21e744;
        case 0x21e748u: goto label_21e748;
        case 0x21e778u: goto label_21e778;
        case 0x21e7a0u: goto label_21e7a0;
        case 0x21e7b4u: goto label_21e7b4;
        case 0x21e7c4u: goto label_21e7c4;
        case 0x21e7e8u: goto label_21e7e8;
        default: break;
    }

    ctx->pc = 0x21e5b8u;

    // 0x21e5b8: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x21e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x21e5bc: 0xffb00430  sd          $s0, 0x430($sp)
    ctx->pc = 0x21e5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 16));
    // 0x21e5c0: 0xffb10438  sd          $s1, 0x438($sp)
    ctx->pc = 0x21e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 17));
    // 0x21e5c4: 0xffb20440  sd          $s2, 0x440($sp)
    ctx->pc = 0x21e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 18));
    // 0x21e5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5cc: 0xffb50458  sd          $s5, 0x458($sp)
    ctx->pc = 0x21e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 21));
    // 0x21e5d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21e5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5d4: 0xffb60460  sd          $s6, 0x460($sp)
    ctx->pc = 0x21e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 22));
    // 0x21e5d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21e5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5dc: 0xffb30448  sd          $s3, 0x448($sp)
    ctx->pc = 0x21e5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 19));
    // 0x21e5e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21e5e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5e4: 0xffb40450  sd          $s4, 0x450($sp)
    ctx->pc = 0x21e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x21e5e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21e5e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5ec: 0xffb70468  sd          $s7, 0x468($sp)
    ctx->pc = 0x21e5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 23));
    // 0x21e5f0: 0xffbe0470  sd          $fp, 0x470($sp)
    ctx->pc = 0x21e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 30));
    // 0x21e5f4: 0xffbf0478  sd          $ra, 0x478($sp)
    ctx->pc = 0x21e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 31));
    // 0x21e5f8: 0xafa50420  sw          $a1, 0x420($sp)
    ctx->pc = 0x21e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 5));
    // 0x21e5fc: 0x4c00015  bltz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x21E5FCu;
    {
        const bool branch_taken_0x21e5fc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x21E600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5FCu;
            // 0x21e600: 0xafa70424  sw          $a3, 0x424($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5fc) {
            ctx->pc = 0x21E654u;
            goto label_21e654;
        }
    }
    ctx->pc = 0x21E604u;
    // 0x21e604: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x21e604u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x21e608: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x21e608u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
label_21e60c:
    // 0x21e60c: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x21E60Cu;
    {
        const bool branch_taken_0x21e60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E60Cu;
            // 0x21e610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e60c) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E614u;
    // 0x21e614: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E614u;
    SET_GPR_U32(ctx, 31, 0x21E61Cu);
    ctx->pc = 0x21E618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E614u;
            // 0x21e618: 0x26851c48  addiu       $a1, $s4, 0x1C48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 7240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (runtime->hasFunction(0x12A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E61Cu; }
        if (ctx->pc != 0x21E61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7C0_0x12a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E61Cu; }
        if (ctx->pc != 0x21E61Cu) { return; }
    }
    ctx->pc = 0x21E61Cu;
label_21e61c:
    // 0x21e61c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21e61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e624: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x21E624u;
    {
        const bool branch_taken_0x21e624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E624u;
            // 0x21e628: 0x26651c50  addiu       $a1, $s3, 0x1C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 7248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e624) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E62Cu;
    // 0x21e62c: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E62Cu;
    SET_GPR_U32(ctx, 31, 0x21E634u);
    ctx->pc = 0x12A7C0u;
    if (runtime->hasFunction(0x12A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E634u; }
        if (ctx->pc != 0x21E634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7C0_0x12a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E634u; }
        if (ctx->pc != 0x21E634u) { return; }
    }
    ctx->pc = 0x21E634u;
label_21e634:
    // 0x21e634: 0x251682a  slt         $t5, $s2, $s1
    ctx->pc = 0x21e634u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21e638: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x21e638u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e63c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21e63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21e640: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x21e640u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E644u;
    {
        const bool branch_taken_0x21e644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E644u;
            // 0x21e648: 0x232782a  slt         $t7, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e644) {
            ctx->pc = 0x21E654u;
            goto label_21e654;
        }
    }
    ctx->pc = 0x21E64Cu;
    // 0x21e64c: 0x11e0ffef  beqz        $t7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21E64Cu;
    {
        const bool branch_taken_0x21e64c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E64Cu;
            // 0x21e650: 0x1cd800b  movn        $s0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e64c) {
            ctx->pc = 0x21E60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e60c;
        }
    }
    ctx->pc = 0x21E654u;
label_21e654:
    // 0x21e654: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x21E654u;
    {
        const bool branch_taken_0x21e654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e654) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E65Cu;
    // 0x21e65c: 0x12a0002e  beqz        $s5, . + 4 + (0x2E << 2)
    ctx->pc = 0x21E65Cu;
    {
        const bool branch_taken_0x21e65c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E65Cu;
            // 0x21e660: 0x3c0e003f  lui         $t6, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e65c) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E664u;
    // 0x21e664: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x21e664u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x21e668: 0x95cd1c58  lhu         $t5, 0x1C58($t6)
    ctx->pc = 0x21e668u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 7256)));
    // 0x21e66c: 0x27b70410  addiu       $s7, $sp, 0x410
    ctx->pc = 0x21e66cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x21e670: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x21e670u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
    // 0x21e674: 0x8fae0420  lw          $t6, 0x420($sp)
    ctx->pc = 0x21e674u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x21e678: 0xa7ad0410  sh          $t5, 0x410($sp)
    ctx->pc = 0x21e678u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1040), (uint16_t)GPR_U32(ctx, 13));
    // 0x21e67c: 0x1eea021  addu        $s4, $t7, $t6
    ctx->pc = 0x21e67cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_21e680:
    // 0x21e680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e684: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E684u;
    SET_GPR_U32(ctx, 31, 0x21E68Cu);
    ctx->pc = 0x21E688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E684u;
            // 0x21e688: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (runtime->hasFunction(0x12A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x12A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E68Cu; }
        if (ctx->pc != 0x21E68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A7C0_0x12a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E68Cu; }
        if (ctx->pc != 0x21E68Cu) { return; }
    }
    ctx->pc = 0x21E68Cu;
label_21e68c:
    // 0x21e68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21e68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e690: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21e690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e694: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21E694u;
    {
        const bool branch_taken_0x21e694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E694u;
            // 0x21e698: 0x55782b  sltu        $t7, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e694) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E69Cu;
    // 0x21e69c: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x21E69Cu;
    {
        const bool branch_taken_0x21e69c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e69c) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E6A4u;
    // 0x21e6a4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x21E6A4u;
    SET_GPR_U32(ctx, 31, 0x21E6ACu);
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6ACu; }
        if (ctx->pc != 0x21E6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6ACu; }
        if (ctx->pc != 0x21E6ACu) { return; }
    }
    ctx->pc = 0x21E6ACu;
label_21e6ac:
    // 0x21e6ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x21e6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21e6b0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x21e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x21e6b4: 0xc04a726  jal         func_129C98
    ctx->pc = 0x21E6B4u;
    SET_GPR_U32(ctx, 31, 0x21E6BCu);
    ctx->pc = 0x21E6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6B4u;
            // 0x21e6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6BCu; }
        if (ctx->pc != 0x21E6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6BCu; }
        if (ctx->pc != 0x21E6BCu) { return; }
    }
    ctx->pc = 0x21E6BCu;
label_21e6bc:
    // 0x21e6bc: 0x509023  subu        $s2, $v0, $s0
    ctx->pc = 0x21e6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21e6c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21e6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6c4: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x21e6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21e6c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21e6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21e6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6d4: 0x27c61c08  addiu       $a2, $fp, 0x1C08
    ctx->pc = 0x21e6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 7176));
    // 0x21e6d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21E6D8u;
    {
        const bool branch_taken_0x21e6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6D8u;
            // 0x21e6dc: 0x55782b  sltu        $t7, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6d8) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E6E0u;
    // 0x21e6e0: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21E6E0u;
    {
        const bool branch_taken_0x21e6e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e6e0) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E6E8u;
    // 0x21e6e8: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21E6E8u;
    SET_GPR_U32(ctx, 31, 0x21E6F0u);
    ctx->pc = 0x21E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6E8u;
            // 0x21e6ec: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (runtime->hasFunction(0x2262C0u)) {
        auto targetFn = runtime->lookupFunction(0x2262C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6F0u; }
        if (ctx->pc != 0x21E6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002262C0_0x2262c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E6F0u; }
        if (ctx->pc != 0x21E6F0u) { return; }
    }
    ctx->pc = 0x21E6F0u;
label_21e6f0:
    // 0x21e6f0: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21e6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21e6f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e6f8: 0x25e41c60  addiu       $a0, $t7, 0x1C60
    ctx->pc = 0x21e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 7264));
    // 0x21e6fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21E6FCu;
    SET_GPR_U32(ctx, 31, 0x21E704u);
    ctx->pc = 0x21E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E6FCu;
            // 0x21e700: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E704u; }
        if (ctx->pc != 0x21E704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E704u; }
        if (ctx->pc != 0x21E704u) { return; }
    }
    ctx->pc = 0x21E704u;
label_21e704:
    // 0x21e704: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x21e704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x21e708: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x21e708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
    // 0x21e70c: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x21e70cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21e710: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x21E710u;
    {
        const bool branch_taken_0x21e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E710u;
            // 0x21e714: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e710) {
            ctx->pc = 0x21E680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e680;
        }
    }
    ctx->pc = 0x21E718u;
label_21e718:
    // 0x21e718: 0x16c00017  bnez        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x21E718u;
    {
        const bool branch_taken_0x21e718 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E718u;
            // 0x21e71c: 0x8fae0424  lw          $t6, 0x424($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e718) {
            ctx->pc = 0x21E778u;
            goto label_21e778;
        }
    }
    ctx->pc = 0x21E720u;
    // 0x21e720: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e724: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21e724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21e728: 0x24841c88  addiu       $a0, $a0, 0x1C88
    ctx->pc = 0x21e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7304));
    // 0x21e72c: 0x24e71ca0  addiu       $a3, $a3, 0x1CA0
    ctx->pc = 0x21e72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7328));
    // 0x21e730: 0x2405014b  addiu       $a1, $zero, 0x14B
    ctx->pc = 0x21e730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
    // 0x21e734: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21E734u;
    SET_GPR_U32(ctx, 31, 0x21E73Cu);
    ctx->pc = 0x21E738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E734u;
            // 0x21e738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E73Cu; }
        if (ctx->pc != 0x21E73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E73Cu; }
        if (ctx->pc != 0x21E73Cu) { return; }
    }
    ctx->pc = 0x21E73Cu;
label_21e73c:
    // 0x21e73c: 0xc089fc0  jal         func_227F00
    ctx->pc = 0x21E73Cu;
    SET_GPR_U32(ctx, 31, 0x21E744u);
    ctx->pc = 0x21E740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E73Cu;
            // 0x21e740: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227F00u;
    if (runtime->hasFunction(0x227F00u)) {
        auto targetFn = runtime->lookupFunction(0x227F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E744u; }
        if (ctx->pc != 0x21E744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227F00_0x227f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E744u; }
        if (ctx->pc != 0x21E744u) { return; }
    }
    ctx->pc = 0x21E744u;
label_21e744:
    // 0x21e744: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e748:
    // 0x21e748: 0xdfb00430  ld          $s0, 0x430($sp)
    ctx->pc = 0x21e748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x21e74c: 0xdfb10438  ld          $s1, 0x438($sp)
    ctx->pc = 0x21e74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x21e750: 0xdfb20440  ld          $s2, 0x440($sp)
    ctx->pc = 0x21e750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x21e754: 0xdfb30448  ld          $s3, 0x448($sp)
    ctx->pc = 0x21e754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x21e758: 0xdfb40450  ld          $s4, 0x450($sp)
    ctx->pc = 0x21e758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x21e75c: 0xdfb50458  ld          $s5, 0x458($sp)
    ctx->pc = 0x21e75cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x21e760: 0xdfb60460  ld          $s6, 0x460($sp)
    ctx->pc = 0x21e760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x21e764: 0xdfb70468  ld          $s7, 0x468($sp)
    ctx->pc = 0x21e764u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x21e768: 0xdfbe0470  ld          $fp, 0x470($sp)
    ctx->pc = 0x21e768u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x21e76c: 0xdfbf0478  ld          $ra, 0x478($sp)
    ctx->pc = 0x21e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1144)));
    // 0x21e770: 0x3e00008  jr          $ra
    ctx->pc = 0x21E770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E770u;
            // 0x21e774: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E778u;
label_21e778:
    // 0x21e778: 0x11c0001d  beqz        $t6, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E778u;
    {
        const bool branch_taken_0x21e778 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E778u;
            // 0x21e77c: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e778) {
            ctx->pc = 0x21E7F0u;
            goto label_21e7f0;
        }
    }
    ctx->pc = 0x21E780u;
    // 0x21e780: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21e780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21e784: 0x25f0b8e8  addiu       $s0, $t7, -0x4718
    ctx->pc = 0x21e784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949096));
    // 0x21e788: 0x24c61c08  addiu       $a2, $a2, 0x1C08
    ctx->pc = 0x21e788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7176));
    // 0x21e78c: 0x8faf0420  lw          $t7, 0x420($sp)
    ctx->pc = 0x21e78cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x21e790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e794: 0x8de50004  lw          $a1, 0x4($t7)
    ctx->pc = 0x21e794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x21e798: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21E798u;
    SET_GPR_U32(ctx, 31, 0x21E7A0u);
    ctx->pc = 0x21E79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E798u;
            // 0x21e79c: 0x8de70000  lw          $a3, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (runtime->hasFunction(0x2262C0u)) {
        auto targetFn = runtime->lookupFunction(0x2262C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7A0u; }
        if (ctx->pc != 0x21E7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002262C0_0x2262c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7A0u; }
        if (ctx->pc != 0x21E7A0u) { return; }
    }
    ctx->pc = 0x21E7A0u;
label_21e7a0:
    // 0x21e7a0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7a8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21e7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e7ac: 0xc049c22  jal         func_127088
    ctx->pc = 0x21E7ACu;
    SET_GPR_U32(ctx, 31, 0x21E7B4u);
    ctx->pc = 0x21E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7ACu;
            // 0x21e7b0: 0x24a51cb8  addiu       $a1, $a1, 0x1CB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7B4u; }
        if (ctx->pc != 0x21E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7B4u; }
        if (ctx->pc != 0x21E7B4u) { return; }
    }
    ctx->pc = 0x21E7B4u;
label_21e7b4:
    // 0x21e7b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21E7B4u;
    {
        const bool branch_taken_0x21e7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7B4u;
            // 0x21e7b8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7b4) {
            ctx->pc = 0x21E7F0u;
            goto label_21e7f0;
        }
    }
    ctx->pc = 0x21E7BCu;
    // 0x21e7bc: 0xc087ab4  jal         func_21EAD0
    ctx->pc = 0x21E7BCu;
    SET_GPR_U32(ctx, 31, 0x21E7C4u);
    ctx->pc = 0x21E7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7BCu;
            // 0x21e7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21EAD0u;
    if (runtime->hasFunction(0x21EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x21EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7C4u; }
        if (ctx->pc != 0x21E7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021EAD0_0x21ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7C4u; }
        if (ctx->pc != 0x21E7C4u) { return; }
    }
    ctx->pc = 0x21E7C4u;
label_21e7c4:
    // 0x21e7c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e7c8: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x21e7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21e7cc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21e7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21e7d0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21e7d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7d4: 0x24841c88  addiu       $a0, $a0, 0x1C88
    ctx->pc = 0x21e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7304));
    // 0x21e7d8: 0x24e71cc0  addiu       $a3, $a3, 0x1CC0
    ctx->pc = 0x21e7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7360));
    // 0x21e7dc: 0x2405015b  addiu       $a1, $zero, 0x15B
    ctx->pc = 0x21e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x21e7e0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21E7E0u;
    SET_GPR_U32(ctx, 31, 0x21E7E8u);
    ctx->pc = 0x21E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7E0u;
            // 0x21e7e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7E8u; }
        if (ctx->pc != 0x21E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E7E8u; }
        if (ctx->pc != 0x21E7E8u) { return; }
    }
    ctx->pc = 0x21E7E8u;
label_21e7e8:
    // 0x21e7e8: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x21E7E8u;
    {
        const bool branch_taken_0x21e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e7e8) {
            ctx->pc = 0x21E73Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e73c;
        }
    }
    ctx->pc = 0x21E7F0u;
label_21e7f0:
    // 0x21e7f0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x21E7F0u;
    {
        const bool branch_taken_0x21e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E7F0u;
            // 0x21e7f4: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7f0) {
            ctx->pc = 0x21E748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e748;
        }
    }
    ctx->pc = 0x21E7F8u;
    ctx->pc = 0x21e7f8u;
}
