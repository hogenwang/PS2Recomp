#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD5A8
// Address: 0x1fd5a8 - 0x1fd698
void sub_001FD5A8_0x1fd5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD5A8_0x1fd5a8");
#endif

    switch (ctx->pc) {
        case 0x1fd5ccu: goto label_1fd5cc;
        case 0x1fd5ecu: goto label_1fd5ec;
        case 0x1fd5f8u: goto label_1fd5f8;
        case 0x1fd608u: goto label_1fd608;
        case 0x1fd624u: goto label_1fd624;
        case 0x1fd630u: goto label_1fd630;
        case 0x1fd644u: goto label_1fd644;
        case 0x1fd660u: goto label_1fd660;
        case 0x1fd680u: goto label_1fd680;
        default: break;
    }

    ctx->pc = 0x1fd5a8u;

    // 0x1fd5a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd5ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fd5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd5b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd5b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd5c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd5c4: 0xc07f62e  jal         func_1FD8B8
    ctx->pc = 0x1FD5C4u;
    SET_GPR_U32(ctx, 31, 0x1FD5CCu);
    ctx->pc = 0x1FD5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5C4u;
            // 0x1fd5c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B8u;
    if (runtime->hasFunction(0x1FD8B8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5CCu; }
        if (ctx->pc != 0x1FD5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD8B8_0x1fd8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5CCu; }
        if (ctx->pc != 0x1FD5CCu) { return; }
    }
    ctx->pc = 0x1FD5CCu;
label_1fd5cc:
    // 0x1fd5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1fd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fd5d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fd5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fd5d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD5D8u;
    {
        const bool branch_taken_0x1fd5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5D8u;
            // 0x1fd5dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5d8) {
            ctx->pc = 0x1FD600u;
            goto label_1fd600;
        }
    }
    ctx->pc = 0x1FD5E0u;
    // 0x1fd5e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd5e4: 0xc07f606  jal         func_1FD818
    ctx->pc = 0x1FD5E4u;
    SET_GPR_U32(ctx, 31, 0x1FD5ECu);
    ctx->pc = 0x1FD5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5E4u;
            // 0x1fd5e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD818u;
    if (runtime->hasFunction(0x1FD818u)) {
        auto targetFn = runtime->lookupFunction(0x1FD818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5ECu; }
        if (ctx->pc != 0x1FD5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD818_0x1fd818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5ECu; }
        if (ctx->pc != 0x1FD5ECu) { return; }
    }
    ctx->pc = 0x1FD5ECu;
label_1fd5ec:
    // 0x1fd5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5f0: 0xc07f5a6  jal         func_1FD698
    ctx->pc = 0x1FD5F0u;
    SET_GPR_U32(ctx, 31, 0x1FD5F8u);
    ctx->pc = 0x1FD5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5F0u;
            // 0x1fd5f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD698u;
    if (runtime->hasFunction(0x1FD698u)) {
        auto targetFn = runtime->lookupFunction(0x1FD698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5F8u; }
        if (ctx->pc != 0x1FD5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD698_0x1fd698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5F8u; }
        if (ctx->pc != 0x1FD5F8u) { return; }
    }
    ctx->pc = 0x1FD5F8u;
label_1fd5f8:
    // 0x1fd5f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD5F8u;
    {
        const bool branch_taken_0x1fd5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5F8u;
            // 0x1fd5fc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5f8) {
            ctx->pc = 0x1FD610u;
            goto label_1fd610;
        }
    }
    ctx->pc = 0x1FD600u;
label_1fd600:
    // 0x1fd600: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FD600u;
    SET_GPR_U32(ctx, 31, 0x1FD608u);
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD608u; }
        if (ctx->pc != 0x1FD608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD608u; }
        if (ctx->pc != 0x1FD608u) { return; }
    }
    ctx->pc = 0x1FD608u;
label_1fd608:
    // 0x1fd608: 0xae000bb0  sw          $zero, 0xBB0($s0)
    ctx->pc = 0x1fd608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 0));
    // 0x1fd60c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fd610:
    // 0x1fd610: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD610u;
    {
        const bool branch_taken_0x1fd610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD610u;
            // 0x1fd614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd610) {
            ctx->pc = 0x1FD638u;
            goto label_1fd638;
        }
    }
    ctx->pc = 0x1FD618u;
    // 0x1fd618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd61c: 0xc07f60e  jal         func_1FD838
    ctx->pc = 0x1FD61Cu;
    SET_GPR_U32(ctx, 31, 0x1FD624u);
    ctx->pc = 0x1FD620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD61Cu;
            // 0x1fd620: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD838u;
    if (runtime->hasFunction(0x1FD838u)) {
        auto targetFn = runtime->lookupFunction(0x1FD838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD624u; }
        if (ctx->pc != 0x1FD624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD838_0x1fd838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD624u; }
        if (ctx->pc != 0x1FD624u) { return; }
    }
    ctx->pc = 0x1FD624u;
label_1fd624:
    // 0x1fd624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd628: 0xc07f5ce  jal         func_1FD738
    ctx->pc = 0x1FD628u;
    SET_GPR_U32(ctx, 31, 0x1FD630u);
    ctx->pc = 0x1FD62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD628u;
            // 0x1fd62c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD738u;
    if (runtime->hasFunction(0x1FD738u)) {
        auto targetFn = runtime->lookupFunction(0x1FD738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD630u; }
        if (ctx->pc != 0x1FD630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD738_0x1fd738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD630u; }
        if (ctx->pc != 0x1FD630u) { return; }
    }
    ctx->pc = 0x1FD630u;
label_1fd630:
    // 0x1fd630: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD630u;
    {
        const bool branch_taken_0x1fd630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD630u;
            // 0x1fd634: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd630) {
            ctx->pc = 0x1FD64Cu;
            goto label_1fd64c;
        }
    }
    ctx->pc = 0x1FD638u;
label_1fd638:
    // 0x1fd638: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1fd638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1fd63c: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FD63Cu;
    SET_GPR_U32(ctx, 31, 0x1FD644u);
    ctx->pc = 0x1FD640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD63Cu;
            // 0x1fd640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD644u; }
        if (ctx->pc != 0x1FD644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD644u; }
        if (ctx->pc != 0x1FD644u) { return; }
    }
    ctx->pc = 0x1FD644u;
label_1fd644:
    // 0x1fd644: 0xae000bb4  sw          $zero, 0xBB4($s0)
    ctx->pc = 0x1fd644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2996), GPR_U32(ctx, 0));
    // 0x1fd648: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1fd648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1fd64c:
    // 0x1fd64c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD64Cu;
    {
        const bool branch_taken_0x1fd64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD64Cu;
            // 0x1fd650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd64c) {
            ctx->pc = 0x1FD680u;
            goto label_1fd680;
        }
    }
    ctx->pc = 0x1FD654u;
    // 0x1fd654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd658: 0xc07f616  jal         func_1FD858
    ctx->pc = 0x1FD658u;
    SET_GPR_U32(ctx, 31, 0x1FD660u);
    ctx->pc = 0x1FD65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD658u;
            // 0x1fd65c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD858u;
    if (runtime->hasFunction(0x1FD858u)) {
        auto targetFn = runtime->lookupFunction(0x1FD858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD660u; }
        if (ctx->pc != 0x1FD660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD858_0x1fd858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD660u; }
        if (ctx->pc != 0x1FD660u) { return; }
    }
    ctx->pc = 0x1FD660u;
label_1fd660:
    // 0x1fd660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd674: 0x807f5f6  j           func_1FD7D8
    ctx->pc = 0x1FD674u;
    ctx->pc = 0x1FD678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD674u;
            // 0x1fd678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7D8u;
    if (runtime->hasFunction(0x1FD7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD7D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001FD7D8_0x1fd7d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FD67Cu;
    // 0x1fd67c: 0x0  nop
    ctx->pc = 0x1fd67cu;
    // NOP
label_1fd680:
    // 0x1fd680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd68c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD68Cu;
            // 0x1fd690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD694u;
    // 0x1fd694: 0x0  nop
    ctx->pc = 0x1fd694u;
    // NOP
    ctx->pc = 0x1fd698u;
}
