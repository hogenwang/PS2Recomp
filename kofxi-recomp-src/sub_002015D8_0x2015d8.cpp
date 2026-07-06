#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002015D8
// Address: 0x2015d8 - 0x2017a8
void sub_002015D8_0x2015d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015D8_0x2015d8");
#endif

    switch (ctx->pc) {
        case 0x2015fcu: goto label_2015fc;
        case 0x20160cu: goto label_20160c;
        case 0x201620u: goto label_201620;
        case 0x201644u: goto label_201644;
        case 0x20164cu: goto label_20164c;
        case 0x201654u: goto label_201654;
        case 0x20165cu: goto label_20165c;
        case 0x201678u: goto label_201678;
        case 0x201690u: goto label_201690;
        case 0x2016c0u: goto label_2016c0;
        case 0x2016dcu: goto label_2016dc;
        case 0x201700u: goto label_201700;
        case 0x201710u: goto label_201710;
        case 0x201718u: goto label_201718;
        case 0x201734u: goto label_201734;
        case 0x20175cu: goto label_20175c;
        case 0x201764u: goto label_201764;
        default: break;
    }

    ctx->pc = 0x2015d8u;

    // 0x2015d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2015d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2015dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2015dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2015e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2015e4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x2015e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x2015e8: 0x261018f8  addiu       $s0, $s0, 0x18F8
    ctx->pc = 0x2015e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6392));
    // 0x2015ec: 0x24060508  addiu       $a2, $zero, 0x508
    ctx->pc = 0x2015ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x2015f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2015f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2015f4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2015F4u;
    SET_GPR_U32(ctx, 31, 0x2015FCu);
    ctx->pc = 0x2015F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2015F4u;
            // 0x2015f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015FCu; }
        if (ctx->pc != 0x2015FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2015FCu; }
        if (ctx->pc != 0x2015FCu) { return; }
    }
    ctx->pc = 0x2015FCu;
label_2015fc:
    // 0x2015fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2015fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201600: 0x0  nop
    ctx->pc = 0x201600u;
    // NOP
    // 0x201604: 0xc08064e  jal         func_201938
    ctx->pc = 0x201604u;
    SET_GPR_U32(ctx, 31, 0x20160Cu);
    ctx->pc = 0x201608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201604u;
            // 0x201608: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201938u;
    if (runtime->hasFunction(0x201938u)) {
        auto targetFn = runtime->lookupFunction(0x201938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20160Cu; }
        if (ctx->pc != 0x20160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201938_0x201938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20160Cu; }
        if (ctx->pc != 0x20160Cu) { return; }
    }
    ctx->pc = 0x20160Cu;
label_20160c:
    // 0x20160c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20160cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201610: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x201610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201614: 0x8073a4a  j           func_1CE928
    ctx->pc = 0x201614u;
    ctx->pc = 0x201618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201614u;
            // 0x201618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE928u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x20161Cu;
    // 0x20161c: 0x0  nop
    ctx->pc = 0x20161cu;
    // NOP
label_201620:
    // 0x201620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201624: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x201624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x201628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20162c: 0x245018f0  addiu       $s0, $v0, 0x18F0
    ctx->pc = 0x20162cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6384));
    // 0x201630: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x201630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201634: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x201634u;
    {
        const bool branch_taken_0x201634 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x201638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201634u;
            // 0x201638: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201634) {
            ctx->pc = 0x201668u;
            goto label_201668;
        }
    }
    ctx->pc = 0x20163Cu;
    // 0x20163c: 0xc0807aa  jal         func_201EA8
    ctx->pc = 0x20163Cu;
    SET_GPR_U32(ctx, 31, 0x201644u);
    ctx->pc = 0x201EA8u;
    if (runtime->hasFunction(0x201EA8u)) {
        auto targetFn = runtime->lookupFunction(0x201EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201644u; }
        if (ctx->pc != 0x201644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201EA8_0x201ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201644u; }
        if (ctx->pc != 0x201644u) { return; }
    }
    ctx->pc = 0x201644u;
label_201644:
    // 0x201644: 0xc08015a  jal         func_200568
    ctx->pc = 0x201644u;
    SET_GPR_U32(ctx, 31, 0x20164Cu);
    ctx->pc = 0x200568u;
    if (runtime->hasFunction(0x200568u)) {
        auto targetFn = runtime->lookupFunction(0x200568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20164Cu; }
        if (ctx->pc != 0x20164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200568_0x200568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20164Cu; }
        if (ctx->pc != 0x20164Cu) { return; }
    }
    ctx->pc = 0x20164Cu;
label_20164c:
    // 0x20164c: 0xc08078e  jal         func_201E38
    ctx->pc = 0x20164Cu;
    SET_GPR_U32(ctx, 31, 0x201654u);
    ctx->pc = 0x201E38u;
    if (runtime->hasFunction(0x201E38u)) {
        auto targetFn = runtime->lookupFunction(0x201E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201654u; }
        if (ctx->pc != 0x201654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201E38_0x201e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201654u; }
        if (ctx->pc != 0x201654u) { return; }
    }
    ctx->pc = 0x201654u;
label_201654:
    // 0x201654: 0xc073a54  jal         func_1CE950
    ctx->pc = 0x201654u;
    SET_GPR_U32(ctx, 31, 0x20165Cu);
    ctx->pc = 0x1CE950u;
    if (runtime->hasFunction(0x1CE950u)) {
        auto targetFn = runtime->lookupFunction(0x1CE950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20165Cu; }
        if (ctx->pc != 0x20165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE950_0x1ce950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20165Cu; }
        if (ctx->pc != 0x20165Cu) { return; }
    }
    ctx->pc = 0x20165Cu;
label_20165c:
    // 0x20165c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201664: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_201668:
    // 0x201668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20166c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201670: 0x3e00008  jr          $ra
    ctx->pc = 0x201670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201670u;
            // 0x201674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201678u;
label_201678:
    // 0x201678: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x201678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20167c: 0x24421900  addiu       $v0, $v0, 0x1900
    ctx->pc = 0x20167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6400));
    // 0x201680: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x201680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x201684: 0x3e00008  jr          $ra
    ctx->pc = 0x201684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201684u;
            // 0x201688: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20168Cu;
    // 0x20168c: 0x0  nop
    ctx->pc = 0x20168cu;
    // NOP
label_201690:
    // 0x201690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201698: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x201698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20169c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2016a0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2016a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2016a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2016a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2016a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2016ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2016acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2016b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2016b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2016b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2016b8: 0xc0805ea  jal         func_2017A8
    ctx->pc = 0x2016B8u;
    SET_GPR_U32(ctx, 31, 0x2016C0u);
    ctx->pc = 0x2016BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2016B8u;
            // 0x2016bc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2017A8u;
    if (runtime->hasFunction(0x2017A8u)) {
        auto targetFn = runtime->lookupFunction(0x2017A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2016C0u; }
        if (ctx->pc != 0x2016C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002017A8_0x2017a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2016C0u; }
        if (ctx->pc != 0x2016C0u) { return; }
    }
    ctx->pc = 0x2016C0u;
label_2016c0:
    // 0x2016c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2016c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2016c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2016c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016cc: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2016CCu;
    {
        const bool branch_taken_0x2016cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2016CCu;
            // 0x2016d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016cc) {
            ctx->pc = 0x201784u;
            goto label_201784;
        }
    }
    ctx->pc = 0x2016D4u;
    // 0x2016d4: 0xc080626  jal         func_201898
    ctx->pc = 0x2016D4u;
    SET_GPR_U32(ctx, 31, 0x2016DCu);
    ctx->pc = 0x201898u;
    if (runtime->hasFunction(0x201898u)) {
        auto targetFn = runtime->lookupFunction(0x201898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2016DCu; }
        if (ctx->pc != 0x2016DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201898_0x201898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2016DCu; }
        if (ctx->pc != 0x2016DCu) { return; }
    }
    ctx->pc = 0x2016DCu;
label_2016dc:
    // 0x2016dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2016dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2016e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2016e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2016e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016e8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2016E8u;
    {
        const bool branch_taken_0x2016e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2016ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2016E8u;
            // 0x2016ec: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016e8) {
            ctx->pc = 0x201708u;
            goto label_201708;
        }
    }
    ctx->pc = 0x2016F0u;
    // 0x2016f0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2016f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2016f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2016f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016f8: 0xc08063e  jal         func_2018F8
    ctx->pc = 0x2016F8u;
    SET_GPR_U32(ctx, 31, 0x201700u);
    ctx->pc = 0x2016FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2016F8u;
            // 0x2016fc: 0x24c6f200  addiu       $a2, $a2, -0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    if (runtime->hasFunction(0x2018F8u)) {
        auto targetFn = runtime->lookupFunction(0x2018F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201700u; }
        if (ctx->pc != 0x201700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002018F8_0x2018f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201700u; }
        if (ctx->pc != 0x201700u) { return; }
    }
    ctx->pc = 0x201700u;
label_201700:
    // 0x201700: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x201700u;
    {
        const bool branch_taken_0x201700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201700u;
            // 0x201704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201700) {
            ctx->pc = 0x201784u;
            goto label_201784;
        }
    }
    ctx->pc = 0x201708u;
label_201708:
    // 0x201708: 0xc0805fe  jal         func_2017F8
    ctx->pc = 0x201708u;
    SET_GPR_U32(ctx, 31, 0x201710u);
    ctx->pc = 0x20170Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201708u;
            // 0x20170c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2017F8u;
    if (runtime->hasFunction(0x2017F8u)) {
        auto targetFn = runtime->lookupFunction(0x2017F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201710u; }
        if (ctx->pc != 0x201710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002017F8_0x2017f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201710u; }
        if (ctx->pc != 0x201710u) { return; }
    }
    ctx->pc = 0x201710u;
label_201710:
    // 0x201710: 0xc0807ac  jal         func_201EB0
    ctx->pc = 0x201710u;
    SET_GPR_U32(ctx, 31, 0x201718u);
    ctx->pc = 0x201EB0u;
    if (runtime->hasFunction(0x201EB0u)) {
        auto targetFn = runtime->lookupFunction(0x201EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201718u; }
        if (ctx->pc != 0x201718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201EB0_0x201eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201718u; }
        if (ctx->pc != 0x201718u) { return; }
    }
    ctx->pc = 0x201718u;
label_201718:
    // 0x201718: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x201718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x20171c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201720: 0x24c6f230  addiu       $a2, $a2, -0xDD0
    ctx->pc = 0x201720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963760));
    // 0x201724: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x201724u;
    {
        const bool branch_taken_0x201724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201724u;
            // 0x201728: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201724) {
            ctx->pc = 0x201754u;
            goto label_201754;
        }
    }
    ctx->pc = 0x20172Cu;
    // 0x20172c: 0xc08015c  jal         func_200570
    ctx->pc = 0x20172Cu;
    SET_GPR_U32(ctx, 31, 0x201734u);
    ctx->pc = 0x201730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20172Cu;
            // 0x201730: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200570u;
    if (runtime->hasFunction(0x200570u)) {
        auto targetFn = runtime->lookupFunction(0x200570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201734u; }
        if (ctx->pc != 0x201734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200570_0x200570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201734u; }
        if (ctx->pc != 0x201734u) { return; }
    }
    ctx->pc = 0x201734u;
label_201734:
    // 0x201734: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x201738: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x201738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20173c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x201740: 0x244818f8  addiu       $t0, $v0, 0x18F8
    ctx->pc = 0x201740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 6392));
    // 0x201744: 0x24c6f250  addiu       $a2, $a2, -0xDB0
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963792));
    // 0x201748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20174c: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x20174Cu;
    {
        const bool branch_taken_0x20174c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x201750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20174Cu;
            // 0x201750: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20174c) {
            ctx->pc = 0x201770u;
            goto label_201770;
        }
    }
    ctx->pc = 0x201754u;
label_201754:
    // 0x201754: 0xc08063e  jal         func_2018F8
    ctx->pc = 0x201754u;
    SET_GPR_U32(ctx, 31, 0x20175Cu);
    ctx->pc = 0x2018F8u;
    if (runtime->hasFunction(0x2018F8u)) {
        auto targetFn = runtime->lookupFunction(0x2018F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20175Cu; }
        if (ctx->pc != 0x20175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002018F8_0x2018f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20175Cu; }
        if (ctx->pc != 0x20175Cu) { return; }
    }
    ctx->pc = 0x20175Cu;
label_20175c:
    // 0x20175c: 0xc08062a  jal         func_2018A8
    ctx->pc = 0x20175Cu;
    SET_GPR_U32(ctx, 31, 0x201764u);
    ctx->pc = 0x201760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20175Cu;
            // 0x201760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2018A8u;
    if (runtime->hasFunction(0x2018A8u)) {
        auto targetFn = runtime->lookupFunction(0x2018A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201764u; }
        if (ctx->pc != 0x201764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002018A8_0x2018a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201764u; }
        if (ctx->pc != 0x201764u) { return; }
    }
    ctx->pc = 0x201764u;
label_201764:
    // 0x201764: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x201764u;
    {
        const bool branch_taken_0x201764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201764u;
            // 0x201768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201764) {
            ctx->pc = 0x201784u;
            goto label_201784;
        }
    }
    ctx->pc = 0x20176Cu;
    // 0x20176c: 0x0  nop
    ctx->pc = 0x20176cu;
    // NOP
label_201770:
    // 0x201770: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x201770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x201774: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x201774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201778: 0xae470030  sw          $a3, 0x30($s2)
    ctx->pc = 0x201778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 7));
    // 0x20177c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x201780: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x201780u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_201784:
    // 0x201784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20178c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20178cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201790: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x201790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201794: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x201794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201798: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x201798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20179c: 0x3e00008  jr          $ra
    ctx->pc = 0x20179Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2017A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20179Cu;
            // 0x2017a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2017A4u;
    // 0x2017a4: 0x0  nop
    ctx->pc = 0x2017a4u;
    // NOP
    ctx->pc = 0x2017a8u;
}
