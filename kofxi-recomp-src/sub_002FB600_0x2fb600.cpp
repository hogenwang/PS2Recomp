#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FB600
// Address: 0x2fb600 - 0x2fb728
void sub_002FB600_0x2fb600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB600_0x2fb600");
#endif

    switch (ctx->pc) {
        case 0x2fb638u: goto label_2fb638;
        case 0x2fb644u: goto label_2fb644;
        case 0x2fb660u: goto label_2fb660;
        case 0x2fb668u: goto label_2fb668;
        case 0x2fb688u: goto label_2fb688;
        case 0x2fb69cu: goto label_2fb69c;
        case 0x2fb6b8u: goto label_2fb6b8;
        case 0x2fb6ecu: goto label_2fb6ec;
        default: break;
    }

    ctx->pc = 0x2fb600u;

    // 0x2fb600: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fb600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fb604: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2fb604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2fb608: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2fb608u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb60c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2fb60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2fb610: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2fb610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2fb614: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2fb614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb618: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2fb618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2fb61c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2fb61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2fb620: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb624: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2fb624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2fb628: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2fb628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2fb62c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2fb62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2fb630: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x2FB630u;
    SET_GPR_U32(ctx, 31, 0x2FB638u);
    ctx->pc = 0x2FB634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB630u;
            // 0x2fb634: 0xffb20040  sd          $s2, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (runtime->hasFunction(0x2BF130u)) {
        auto targetFn = runtime->lookupFunction(0x2BF130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB638u; }
        if (ctx->pc != 0x2FB638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF130_0x2bf130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB638u; }
        if (ctx->pc != 0x2FB638u) { return; }
    }
    ctx->pc = 0x2FB638u;
label_2fb638:
    // 0x2fb638: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2fb638u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb63c: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x2FB63Cu;
    SET_GPR_U32(ctx, 31, 0x2FB644u);
    ctx->pc = 0x2FB640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB63Cu;
            // 0x2fb640: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (runtime->hasFunction(0x28EB88u)) {
        auto targetFn = runtime->lookupFunction(0x28EB88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB644u; }
        if (ctx->pc != 0x2FB644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EB88_0x28eb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB644u; }
        if (ctx->pc != 0x2FB644u) { return; }
    }
    ctx->pc = 0x2FB644u;
label_2fb644:
    // 0x2fb644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fb644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb648: 0x1a200021  blez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FB648u;
    {
        const bool branch_taken_0x2fb648 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2FB64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB648u;
            // 0x2fb64c: 0x27b50008  addiu       $s5, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb648) {
            ctx->pc = 0x2FB6D0u;
            goto label_2fb6d0;
        }
    }
    ctx->pc = 0x2FB650u;
    // 0x2fb650: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2fb650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fb654: 0x27b30014  addiu       $s3, $sp, 0x14
    ctx->pc = 0x2fb654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2fb658: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x2fb658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2fb65c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fb65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fb660:
    // 0x2fb660: 0xc0a3af4  jal         func_28EBD0
    ctx->pc = 0x2FB660u;
    SET_GPR_U32(ctx, 31, 0x2FB668u);
    ctx->pc = 0x2FB664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB660u;
            // 0x2fb664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EBD0u;
    if (runtime->hasFunction(0x28EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x28EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB668u; }
        if (ctx->pc != 0x2FB668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EBD0_0x28ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB668u; }
        if (ctx->pc != 0x2FB668u) { return; }
    }
    ctx->pc = 0x2FB668u;
label_2fb668:
    // 0x2fb668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fb66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb670: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2fb670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb674: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2fb674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb678: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2fb678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb67c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2fb67cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb680: 0xc0a3b06  jal         func_28EC18
    ctx->pc = 0x2FB680u;
    SET_GPR_U32(ctx, 31, 0x2FB688u);
    ctx->pc = 0x2FB684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB680u;
            // 0x2fb684: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EC18u;
    if (runtime->hasFunction(0x28EC18u)) {
        auto targetFn = runtime->lookupFunction(0x28EC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB688u; }
        if (ctx->pc != 0x2FB688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028EC18_0x28ec18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB688u; }
        if (ctx->pc != 0x2FB688u) { return; }
    }
    ctx->pc = 0x2FB688u;
label_2fb688:
    // 0x2fb688: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FB688u;
    {
        const bool branch_taken_0x2fb688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB688u;
            // 0x2fb68c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb688) {
            ctx->pc = 0x2FB6C0u;
            goto label_2fb6c0;
        }
    }
    ctx->pc = 0x2FB690u;
    // 0x2fb690: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x2fb690u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fb694: 0xc0a3d5c  jal         func_28F570
    ctx->pc = 0x2FB694u;
    SET_GPR_U32(ctx, 31, 0x2FB69Cu);
    ctx->pc = 0x2FB698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB694u;
            // 0x2fb698: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F570u;
    if (runtime->hasFunction(0x28F570u)) {
        auto targetFn = runtime->lookupFunction(0x28F570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB69Cu; }
        if (ctx->pc != 0x2FB69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F570_0x28f570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB69Cu; }
        if (ctx->pc != 0x2FB69Cu) { return; }
    }
    ctx->pc = 0x2FB69Cu;
label_2fb69c:
    // 0x2fb69c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB69Cu;
    {
        const bool branch_taken_0x2fb69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB69Cu;
            // 0x2fb6a0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb69c) {
            ctx->pc = 0x2FB6ACu;
            goto label_2fb6ac;
        }
    }
    ctx->pc = 0x2FB6A4u;
    // 0x2fb6a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fb6a8: 0x24422d48  addiu       $v0, $v0, 0x2D48
    ctx->pc = 0x2fb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11592));
label_2fb6ac:
    // 0x2fb6ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb6b0: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2FB6B0u;
    SET_GPR_U32(ctx, 31, 0x2FB6B8u);
    ctx->pc = 0x2FB6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6B0u;
            // 0x2fb6b4: 0x24a52d58  addiu       $a1, $a1, 0x2D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B8u; }
        if (ctx->pc != 0x2FB6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B8u; }
        if (ctx->pc != 0x2FB6B8u) { return; }
    }
    ctx->pc = 0x2FB6B8u;
label_2fb6b8:
    // 0x2fb6b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB6B8u;
    {
        const bool branch_taken_0x2fb6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb6b8) {
            ctx->pc = 0x2FB6D0u;
            goto label_2fb6d0;
        }
    }
    ctx->pc = 0x2FB6C0u;
label_2fb6c0:
    // 0x2fb6c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb6c4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2fb6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2fb6c8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2FB6C8u;
    {
        const bool branch_taken_0x2fb6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6C8u;
            // 0x2fb6cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6c8) {
            ctx->pc = 0x2FB660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fb660;
        }
    }
    ctx->pc = 0x2FB6D0u;
label_2fb6d0:
    // 0x2fb6d0: 0x16110003  bne         $s0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB6D0u;
    {
        const bool branch_taken_0x2fb6d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2FB6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6D0u;
            // 0x2fb6d4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6d0) {
            ctx->pc = 0x2FB6E0u;
            goto label_2fb6e0;
        }
    }
    ctx->pc = 0x2FB6D8u;
    // 0x2fb6d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB6D8u;
    {
        const bool branch_taken_0x2fb6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6D8u;
            // 0x2fb6dc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb6d8) {
            ctx->pc = 0x2FB6F4u;
            goto label_2fb6f4;
        }
    }
    ctx->pc = 0x2FB6E0u;
label_2fb6e0:
    // 0x2fb6e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2fb6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb6e4: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x2FB6E4u;
    SET_GPR_U32(ctx, 31, 0x2FB6ECu);
    ctx->pc = 0x2FB6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6E4u;
            // 0x2fb6e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6ECu; }
        if (ctx->pc != 0x2FB6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6ECu; }
        if (ctx->pc != 0x2FB6ECu) { return; }
    }
    ctx->pc = 0x2FB6ECu;
label_2fb6ec:
    // 0x2fb6ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb6f0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2fb6f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2fb6f4:
    // 0x2fb6f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fb6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb6f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2fb6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fb6fc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2fb6fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fb700: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2fb700u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fb704: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2fb704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb708: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2fb708u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fb70c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2fb70cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb710: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2fb710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb714: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2fb714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb718: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2fb718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB71Cu;
            // 0x2fb720: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB724u;
    // 0x2fb724: 0x0  nop
    ctx->pc = 0x2fb724u;
    // NOP
    ctx->pc = 0x2fb728u;
}
