#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA7B8
// Address: 0x1ba7b8 - 0x1ba860
void sub_001BA7B8_0x1ba7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA7B8_0x1ba7b8");
#endif

    switch (ctx->pc) {
        case 0x1ba7b8u: goto label_1ba7b8;
        case 0x1ba7bcu: goto label_1ba7bc;
        case 0x1ba7c0u: goto label_1ba7c0;
        case 0x1ba7c4u: goto label_1ba7c4;
        case 0x1ba7c8u: goto label_1ba7c8;
        case 0x1ba7ccu: goto label_1ba7cc;
        case 0x1ba7d0u: goto label_1ba7d0;
        case 0x1ba7d4u: goto label_1ba7d4;
        case 0x1ba7d8u: goto label_1ba7d8;
        case 0x1ba7dcu: goto label_1ba7dc;
        case 0x1ba7e0u: goto label_1ba7e0;
        case 0x1ba7e4u: goto label_1ba7e4;
        case 0x1ba7e8u: goto label_1ba7e8;
        case 0x1ba7ecu: goto label_1ba7ec;
        case 0x1ba7f0u: goto label_1ba7f0;
        case 0x1ba7f4u: goto label_1ba7f4;
        case 0x1ba7f8u: goto label_1ba7f8;
        case 0x1ba7fcu: goto label_1ba7fc;
        case 0x1ba800u: goto label_1ba800;
        case 0x1ba804u: goto label_1ba804;
        case 0x1ba808u: goto label_1ba808;
        case 0x1ba80cu: goto label_1ba80c;
        case 0x1ba810u: goto label_1ba810;
        case 0x1ba814u: goto label_1ba814;
        case 0x1ba818u: goto label_1ba818;
        case 0x1ba81cu: goto label_1ba81c;
        case 0x1ba820u: goto label_1ba820;
        case 0x1ba824u: goto label_1ba824;
        case 0x1ba828u: goto label_1ba828;
        case 0x1ba82cu: goto label_1ba82c;
        case 0x1ba830u: goto label_1ba830;
        case 0x1ba834u: goto label_1ba834;
        case 0x1ba838u: goto label_1ba838;
        case 0x1ba83cu: goto label_1ba83c;
        case 0x1ba840u: goto label_1ba840;
        case 0x1ba844u: goto label_1ba844;
        case 0x1ba848u: goto label_1ba848;
        case 0x1ba84cu: goto label_1ba84c;
        case 0x1ba850u: goto label_1ba850;
        case 0x1ba854u: goto label_1ba854;
        case 0x1ba858u: goto label_1ba858;
        case 0x1ba85cu: goto label_1ba85c;
        default: break;
    }

    ctx->pc = 0x1ba7b8u;

label_1ba7b8:
    // 0x1ba7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ba7bc:
    // 0x1ba7bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1ba7c0:
    if (ctx->pc == 0x1BA7C0u) {
        ctx->pc = 0x1BA7C0u;
            // 0x1ba7c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1BA7C4u;
        goto label_1ba7c4;
    }
    ctx->pc = 0x1BA7BCu;
    {
        const bool branch_taken_0x1ba7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7BCu;
            // 0x1ba7c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7bc) {
            ctx->pc = 0x1BA7CCu;
            goto label_1ba7cc;
        }
    }
    ctx->pc = 0x1BA7C4u;
label_1ba7c4:
    // 0x1ba7c4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
label_1ba7c8:
    if (ctx->pc == 0x1BA7C8u) {
        ctx->pc = 0x1BA7C8u;
            // 0x1ba7c8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1BA7CCu;
        goto label_1ba7cc;
    }
    ctx->pc = 0x1BA7C4u;
    {
        const bool branch_taken_0x1ba7c4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1BA7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7C4u;
            // 0x1ba7c8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7c4) {
            ctx->pc = 0x1BA7E0u;
            goto label_1ba7e0;
        }
    }
    ctx->pc = 0x1BA7CCu;
label_1ba7cc:
    // 0x1ba7cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ba7d0:
    // 0x1ba7d0: 0xc06ba0a  jal         func_1AE828
label_1ba7d4:
    if (ctx->pc == 0x1BA7D4u) {
        ctx->pc = 0x1BA7D4u;
            // 0x1ba7d4: 0x24848478  addiu       $a0, $a0, -0x7B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935672));
        ctx->pc = 0x1BA7D8u;
        goto label_1ba7d8;
    }
    ctx->pc = 0x1BA7D0u;
    SET_GPR_U32(ctx, 31, 0x1BA7D8u);
    ctx->pc = 0x1BA7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7D0u;
            // 0x1ba7d4: 0x24848478  addiu       $a0, $a0, -0x7B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7D8u; }
        if (ctx->pc != 0x1BA7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA7D8u; }
        if (ctx->pc != 0x1BA7D8u) { return; }
    }
    ctx->pc = 0x1BA7D8u;
label_1ba7d8:
    // 0x1ba7d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ba7dc:
    if (ctx->pc == 0x1BA7DCu) {
        ctx->pc = 0x1BA7DCu;
            // 0x1ba7dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BA7E0u;
        goto label_1ba7e0;
    }
    ctx->pc = 0x1BA7D8u;
    {
        const bool branch_taken_0x1ba7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7D8u;
            // 0x1ba7dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7d8) {
            ctx->pc = 0x1BA814u;
            goto label_1ba814;
        }
    }
    ctx->pc = 0x1BA7E0u;
label_1ba7e0:
    // 0x1ba7e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ba7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ba7e4:
    // 0x1ba7e4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1ba7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1ba7e8:
    // 0x1ba7e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ba7ec:
    if (ctx->pc == 0x1BA7ECu) {
        ctx->pc = 0x1BA7ECu;
            // 0x1ba7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7F0u;
        goto label_1ba7f0;
    }
    ctx->pc = 0x1BA7E8u;
    {
        const bool branch_taken_0x1ba7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7E8u;
            // 0x1ba7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7e8) {
            ctx->pc = 0x1BA810u;
            goto label_1ba810;
        }
    }
    ctx->pc = 0x1BA7F0u;
label_1ba7f0:
    // 0x1ba7f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ba7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba7f4:
    // 0x1ba7f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ba7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ba7f8:
    // 0x1ba7f8: 0x40f809  jalr        $v0
label_1ba7fc:
    if (ctx->pc == 0x1BA7FCu) {
        ctx->pc = 0x1BA7FCu;
            // 0x1ba7fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BA800u;
        goto label_1ba800;
    }
    ctx->pc = 0x1BA7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BA800u);
        ctx->pc = 0x1BA7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7F8u;
            // 0x1ba7fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BA800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BA800u; }
            if (ctx->pc != 0x1BA800u) { return; }
        }
        }
    }
    ctx->pc = 0x1BA800u;
label_1ba800:
    // 0x1ba800: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1ba800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1ba804:
    // 0x1ba804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ba804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ba808:
    // 0x1ba808: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ba80c:
    if (ctx->pc == 0x1BA80Cu) {
        ctx->pc = 0x1BA80Cu;
            // 0x1ba80c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x1BA810u;
        goto label_1ba810;
    }
    ctx->pc = 0x1BA808u;
    {
        const bool branch_taken_0x1ba808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA808u;
            // 0x1ba80c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba808) {
            ctx->pc = 0x1BA814u;
            goto label_1ba814;
        }
    }
    ctx->pc = 0x1BA810u;
label_1ba810:
    // 0x1ba810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba814:
    // 0x1ba814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba818:
    // 0x1ba818: 0x3e00008  jr          $ra
label_1ba81c:
    if (ctx->pc == 0x1BA81Cu) {
        ctx->pc = 0x1BA81Cu;
            // 0x1ba81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BA820u;
        goto label_1ba820;
    }
    ctx->pc = 0x1BA818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA818u;
            // 0x1ba81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA820u;
label_1ba820:
    // 0x1ba820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ba824:
    // 0x1ba824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ba828:
    // 0x1ba828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba82c:
    // 0x1ba82c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1ba830:
    // 0x1ba830: 0xc06b49a  jal         func_1AD268
label_1ba834:
    if (ctx->pc == 0x1BA834u) {
        ctx->pc = 0x1BA834u;
            // 0x1ba834: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->pc = 0x1BA838u;
        goto label_1ba838;
    }
    ctx->pc = 0x1BA830u;
    SET_GPR_U32(ctx, 31, 0x1BA838u);
    ctx->pc = 0x1BA834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA830u;
            // 0x1ba834: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA838u; }
        if (ctx->pc != 0x1BA838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA838u; }
        if (ctx->pc != 0x1BA838u) { return; }
    }
    ctx->pc = 0x1BA838u;
label_1ba838:
    // 0x1ba838: 0xc06ea18  jal         func_1BA860
label_1ba83c:
    if (ctx->pc == 0x1BA83Cu) {
        ctx->pc = 0x1BA83Cu;
            // 0x1ba83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA840u;
        goto label_1ba840;
    }
    ctx->pc = 0x1BA838u;
    SET_GPR_U32(ctx, 31, 0x1BA840u);
    ctx->pc = 0x1BA83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA838u;
            // 0x1ba83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA860u;
    if (runtime->hasFunction(0x1BA860u)) {
        auto targetFn = runtime->lookupFunction(0x1BA860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA840u; }
        if (ctx->pc != 0x1BA840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA860_0x1ba860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA840u; }
        if (ctx->pc != 0x1BA840u) { return; }
    }
    ctx->pc = 0x1BA840u;
label_1ba840:
    // 0x1ba840: 0xc06b49c  jal         func_1AD270
label_1ba844:
    if (ctx->pc == 0x1BA844u) {
        ctx->pc = 0x1BA844u;
            // 0x1ba844: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1BA848u;
        goto label_1ba848;
    }
    ctx->pc = 0x1BA840u;
    SET_GPR_U32(ctx, 31, 0x1BA848u);
    ctx->pc = 0x1BA844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA840u;
            // 0x1ba844: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA848u; }
        if (ctx->pc != 0x1BA848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA848u; }
        if (ctx->pc != 0x1BA848u) { return; }
    }
    ctx->pc = 0x1BA848u;
label_1ba848:
    // 0x1ba848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba84c:
    // 0x1ba84c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1ba84cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1ba850:
    // 0x1ba850: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ba854:
    // 0x1ba854: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1ba854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ba858:
    // 0x1ba858: 0x3e00008  jr          $ra
label_1ba85c:
    if (ctx->pc == 0x1BA85Cu) {
        ctx->pc = 0x1BA85Cu;
            // 0x1ba85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BA860u;
        goto label_fallthrough_0x1ba858;
    }
    ctx->pc = 0x1BA858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA858u;
            // 0x1ba85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ba858:
    ctx->pc = 0x1BA860u;
    ctx->pc = 0x1ba860u;
}
