#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D65F0
// Address: 0x2d65f0 - 0x2d66d0
void sub_002D65F0_0x2d65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D65F0_0x2d65f0");
#endif

    switch (ctx->pc) {
        case 0x2d65f0u: goto label_2d65f0;
        case 0x2d65f4u: goto label_2d65f4;
        case 0x2d65f8u: goto label_2d65f8;
        case 0x2d65fcu: goto label_2d65fc;
        case 0x2d6600u: goto label_2d6600;
        case 0x2d6604u: goto label_2d6604;
        case 0x2d6608u: goto label_2d6608;
        case 0x2d660cu: goto label_2d660c;
        case 0x2d6610u: goto label_2d6610;
        case 0x2d6614u: goto label_2d6614;
        case 0x2d6618u: goto label_2d6618;
        case 0x2d661cu: goto label_2d661c;
        case 0x2d6620u: goto label_2d6620;
        case 0x2d6624u: goto label_2d6624;
        case 0x2d6628u: goto label_2d6628;
        case 0x2d662cu: goto label_2d662c;
        case 0x2d6630u: goto label_2d6630;
        case 0x2d6634u: goto label_2d6634;
        case 0x2d6638u: goto label_2d6638;
        case 0x2d663cu: goto label_2d663c;
        case 0x2d6640u: goto label_2d6640;
        case 0x2d6644u: goto label_2d6644;
        case 0x2d6648u: goto label_2d6648;
        case 0x2d664cu: goto label_2d664c;
        case 0x2d6650u: goto label_2d6650;
        case 0x2d6654u: goto label_2d6654;
        case 0x2d6658u: goto label_2d6658;
        case 0x2d665cu: goto label_2d665c;
        case 0x2d6660u: goto label_2d6660;
        case 0x2d6664u: goto label_2d6664;
        case 0x2d6668u: goto label_2d6668;
        case 0x2d666cu: goto label_2d666c;
        case 0x2d6670u: goto label_2d6670;
        case 0x2d6674u: goto label_2d6674;
        case 0x2d6678u: goto label_2d6678;
        case 0x2d667cu: goto label_2d667c;
        case 0x2d6680u: goto label_2d6680;
        case 0x2d6684u: goto label_2d6684;
        case 0x2d6688u: goto label_2d6688;
        case 0x2d668cu: goto label_2d668c;
        case 0x2d6690u: goto label_2d6690;
        case 0x2d6694u: goto label_2d6694;
        case 0x2d6698u: goto label_2d6698;
        case 0x2d669cu: goto label_2d669c;
        case 0x2d66a0u: goto label_2d66a0;
        case 0x2d66a4u: goto label_2d66a4;
        case 0x2d66a8u: goto label_2d66a8;
        case 0x2d66acu: goto label_2d66ac;
        case 0x2d66b0u: goto label_2d66b0;
        case 0x2d66b4u: goto label_2d66b4;
        case 0x2d66b8u: goto label_2d66b8;
        case 0x2d66bcu: goto label_2d66bc;
        case 0x2d66c0u: goto label_2d66c0;
        case 0x2d66c4u: goto label_2d66c4;
        case 0x2d66c8u: goto label_2d66c8;
        case 0x2d66ccu: goto label_2d66cc;
        default: break;
    }

    ctx->pc = 0x2d65f0u;

label_2d65f0:
    // 0x2d65f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d65f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d65f4:
    // 0x2d65f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d65f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d65f8:
    // 0x2d65f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d65f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d65fc:
    // 0x2d65fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d65fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2d6600:
    // 0x2d6600: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d6600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d6604:
    // 0x2d6604: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d6608:
    // 0x2d6608: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d6608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2d660c:
    // 0x2d660c: 0xc0b59b4  jal         func_2D66D0
label_2d6610:
    if (ctx->pc == 0x2D6610u) {
        ctx->pc = 0x2D6610u;
            // 0x2d6610: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D6614u;
        goto label_2d6614;
    }
    ctx->pc = 0x2D660Cu;
    SET_GPR_U32(ctx, 31, 0x2D6614u);
    ctx->pc = 0x2D6610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D660Cu;
            // 0x2d6610: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (runtime->hasFunction(0x2D66D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D66D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6614u; }
        if (ctx->pc != 0x2D6614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D66D0_0x2d66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6614u; }
        if (ctx->pc != 0x2D6614u) { return; }
    }
    ctx->pc = 0x2D6614u;
label_2d6614:
    // 0x2d6614: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2d6618:
    if (ctx->pc == 0x2D6618u) {
        ctx->pc = 0x2D6618u;
            // 0x2d6618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D661Cu;
        goto label_2d661c;
    }
    ctx->pc = 0x2D6614u;
    {
        const bool branch_taken_0x2d6614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6614u;
            // 0x2d6618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6614) {
            ctx->pc = 0x2D6644u;
            goto label_2d6644;
        }
    }
    ctx->pc = 0x2D661Cu;
label_2d661c:
    // 0x2d661c: 0x200f809  jalr        $s0
label_2d6620:
    if (ctx->pc == 0x2D6620u) {
        ctx->pc = 0x2D6624u;
        goto label_2d6624;
    }
    ctx->pc = 0x2D661Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2D6624u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D6624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D6624u; }
            if (ctx->pc != 0x2D6624u) { return; }
        }
        }
    }
    ctx->pc = 0x2D6624u;
label_2d6624:
    // 0x2d6624: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2d6628:
    if (ctx->pc == 0x2D6628u) {
        ctx->pc = 0x2D6628u;
            // 0x2d6628: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D662Cu;
        goto label_2d662c;
    }
    ctx->pc = 0x2D6624u;
    {
        const bool branch_taken_0x2d6624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6624u;
            // 0x2d6628: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6624) {
            ctx->pc = 0x2D6638u;
            goto label_2d6638;
        }
    }
    ctx->pc = 0x2D662Cu;
label_2d662c:
    // 0x2d662c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d6630:
    if (ctx->pc == 0x2D6630u) {
        ctx->pc = 0x2D6630u;
            // 0x2d6630: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->pc = 0x2D6634u;
        goto label_2d6634;
    }
    ctx->pc = 0x2D662Cu;
    {
        const bool branch_taken_0x2d662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D662Cu;
            // 0x2d6630: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d662c) {
            ctx->pc = 0x2D6644u;
            goto label_2d6644;
        }
    }
    ctx->pc = 0x2D6634u;
label_2d6634:
    // 0x2d6634: 0x0  nop
    ctx->pc = 0x2d6634u;
    // NOP
label_2d6638:
    // 0x2d6638: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d6638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d663c:
    // 0x2d663c: 0xc0b3d4c  jal         func_2CF530
label_2d6640:
    if (ctx->pc == 0x2D6640u) {
        ctx->pc = 0x2D6640u;
            // 0x2d6640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D6644u;
        goto label_2d6644;
    }
    ctx->pc = 0x2D663Cu;
    SET_GPR_U32(ctx, 31, 0x2D6644u);
    ctx->pc = 0x2D6640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D663Cu;
            // 0x2d6640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF530u;
    if (runtime->hasFunction(0x2CF530u)) {
        auto targetFn = runtime->lookupFunction(0x2CF530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6644u; }
        if (ctx->pc != 0x2D6644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF530_0x2cf530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6644u; }
        if (ctx->pc != 0x2D6644u) { return; }
    }
    ctx->pc = 0x2D6644u;
label_2d6644:
    // 0x2d6644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6648:
    // 0x2d6648: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d6648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d664c:
    // 0x2d664c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d664cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6650:
    // 0x2d6650: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d6650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d6654:
    // 0x2d6654: 0x3e00008  jr          $ra
label_2d6658:
    if (ctx->pc == 0x2D6658u) {
        ctx->pc = 0x2D6658u;
            // 0x2d6658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D665Cu;
        goto label_2d665c;
    }
    ctx->pc = 0x2D6654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6654u;
            // 0x2d6658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D665Cu;
label_2d665c:
    // 0x2d665c: 0x0  nop
    ctx->pc = 0x2d665cu;
    // NOP
label_2d6660:
    // 0x2d6660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d6664:
    // 0x2d6664: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d6664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2d6668:
    // 0x2d6668: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d6668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d666c:
    // 0x2d666c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d6670:
    // 0x2d6670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d6670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6674:
    // 0x2d6674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6678:
    // 0x2d6678: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d667c:
    // 0x2d667c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2d6680:
    // 0x2d6680: 0xc0b59b4  jal         func_2D66D0
label_2d6684:
    if (ctx->pc == 0x2D6684u) {
        ctx->pc = 0x2D6684u;
            // 0x2d6684: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D6688u;
        goto label_2d6688;
    }
    ctx->pc = 0x2D6680u;
    SET_GPR_U32(ctx, 31, 0x2D6688u);
    ctx->pc = 0x2D6684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6680u;
            // 0x2d6684: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (runtime->hasFunction(0x2D66D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D66D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6688u; }
        if (ctx->pc != 0x2D6688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D66D0_0x2d66d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6688u; }
        if (ctx->pc != 0x2D6688u) { return; }
    }
    ctx->pc = 0x2D6688u;
label_2d6688:
    // 0x2d6688: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2d668c:
    if (ctx->pc == 0x2D668Cu) {
        ctx->pc = 0x2D668Cu;
            // 0x2d668c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D6690u;
        goto label_2d6690;
    }
    ctx->pc = 0x2D6688u;
    {
        const bool branch_taken_0x2d6688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6688u;
            // 0x2d668c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6688) {
            ctx->pc = 0x2D66B4u;
            goto label_2d66b4;
        }
    }
    ctx->pc = 0x2D6690u;
label_2d6690:
    // 0x2d6690: 0x200f809  jalr        $s0
label_2d6694:
    if (ctx->pc == 0x2D6694u) {
        ctx->pc = 0x2D6698u;
        goto label_2d6698;
    }
    ctx->pc = 0x2D6690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2D6698u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D6698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D6698u; }
            if (ctx->pc != 0x2D6698u) { return; }
        }
        }
    }
    ctx->pc = 0x2D6698u;
label_2d6698:
    // 0x2d6698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d669c:
    if (ctx->pc == 0x2D669Cu) {
        ctx->pc = 0x2D669Cu;
            // 0x2d669c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D66A0u;
        goto label_2d66a0;
    }
    ctx->pc = 0x2D6698u;
    {
        const bool branch_taken_0x2d6698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D669Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6698u;
            // 0x2d669c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6698) {
            ctx->pc = 0x2D66A8u;
            goto label_2d66a8;
        }
    }
    ctx->pc = 0x2D66A0u;
label_2d66a0:
    // 0x2d66a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2d66a4:
    if (ctx->pc == 0x2D66A4u) {
        ctx->pc = 0x2D66A4u;
            // 0x2d66a4: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->pc = 0x2D66A8u;
        goto label_2d66a8;
    }
    ctx->pc = 0x2D66A0u;
    {
        const bool branch_taken_0x2d66a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D66A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D66A0u;
            // 0x2d66a4: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66a0) {
            ctx->pc = 0x2D66B4u;
            goto label_2d66b4;
        }
    }
    ctx->pc = 0x2D66A8u;
label_2d66a8:
    // 0x2d66a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d66a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d66ac:
    // 0x2d66ac: 0xc0b3d5a  jal         func_2CF568
label_2d66b0:
    if (ctx->pc == 0x2D66B0u) {
        ctx->pc = 0x2D66B0u;
            // 0x2d66b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D66B4u;
        goto label_2d66b4;
    }
    ctx->pc = 0x2D66ACu;
    SET_GPR_U32(ctx, 31, 0x2D66B4u);
    ctx->pc = 0x2D66B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D66ACu;
            // 0x2d66b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF568u;
    if (runtime->hasFunction(0x2CF568u)) {
        auto targetFn = runtime->lookupFunction(0x2CF568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66B4u; }
        if (ctx->pc != 0x2D66B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF568_0x2cf568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66B4u; }
        if (ctx->pc != 0x2D66B4u) { return; }
    }
    ctx->pc = 0x2D66B4u;
label_2d66b4:
    // 0x2d66b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d66b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d66b8:
    // 0x2d66b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d66b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d66bc:
    // 0x2d66bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d66bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d66c0:
    // 0x2d66c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d66c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d66c4:
    // 0x2d66c4: 0x3e00008  jr          $ra
label_2d66c8:
    if (ctx->pc == 0x2D66C8u) {
        ctx->pc = 0x2D66C8u;
            // 0x2d66c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D66CCu;
        goto label_2d66cc;
    }
    ctx->pc = 0x2D66C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D66C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D66C4u;
            // 0x2d66c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D66CCu;
label_2d66cc:
    // 0x2d66cc: 0x0  nop
    ctx->pc = 0x2d66ccu;
    // NOP
    ctx->pc = 0x2d66d0u;
}
