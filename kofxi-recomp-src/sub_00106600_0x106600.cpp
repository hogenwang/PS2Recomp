#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106600
// Address: 0x106600 - 0x1067a0
void sub_00106600_0x106600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106600_0x106600");
#endif

    switch (ctx->pc) {
        case 0x106670u: goto label_106670;
        case 0x106694u: goto label_106694;
        case 0x1066ccu: goto label_1066cc;
        case 0x1066d8u: goto label_1066d8;
        case 0x106730u: goto label_106730;
        case 0x10675cu: goto label_10675c;
        default: break;
    }

    ctx->pc = 0x106600u;

    // 0x106600: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x106600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x106604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106608: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x106608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10660c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x106610: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x106610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x106614: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x106614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106618: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x106618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10661c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x106620: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x106620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106624: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x106624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x106628: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x106628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10662c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10662cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x106630: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x106630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x106634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x106634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106638: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x106638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10663c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x10663cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106640: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x106640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x106644: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x106644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x106648: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x106648u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10664c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x10664cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x106650: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x106650u;
    {
        const bool branch_taken_0x106650 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x106654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106650u;
            // 0x106654: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106650) {
            ctx->pc = 0x106688u;
            goto label_106688;
        }
    }
    ctx->pc = 0x106658u;
    // 0x106658: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x106658u;
    {
        const bool branch_taken_0x106658 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x106658) {
            ctx->pc = 0x10665Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106658u;
            // 0x10665c: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106734u;
            goto label_106734;
        }
    }
    ctx->pc = 0x106660u;
    // 0x106660: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x106660u;
    {
        const bool branch_taken_0x106660 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x106660) {
            ctx->pc = 0x106664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106660u;
            // 0x106664: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106734u;
            goto label_106734;
        }
    }
    ctx->pc = 0x106668u;
    // 0x106668: 0xc041c56  jal         func_107158
    ctx->pc = 0x106668u;
    SET_GPR_U32(ctx, 31, 0x106670u);
    ctx->pc = 0x10666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106668u;
            // 0x10666c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106670u; }
        if (ctx->pc != 0x106670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106670u; }
        if (ctx->pc != 0x106670u) { return; }
    }
    ctx->pc = 0x106670u;
label_106670:
    // 0x106670: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x106670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106674: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x106674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x106678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x106678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10667c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x10667cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x106680: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x106680u;
    {
        const bool branch_taken_0x106680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106680u;
            // 0x106684: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106680) {
            ctx->pc = 0x106730u;
            goto label_106730;
        }
    }
    ctx->pc = 0x106688u;
label_106688:
    // 0x106688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10668c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10668Cu;
    SET_GPR_U32(ctx, 31, 0x106694u);
    ctx->pc = 0x106690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10668Cu;
            // 0x106690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106694u; }
        if (ctx->pc != 0x106694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106694u; }
        if (ctx->pc != 0x106694u) { return; }
    }
    ctx->pc = 0x106694u;
label_106694:
    // 0x106694: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x106694u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x106698: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x106698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10669c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x10669cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1066a0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1066a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1066a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1066a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066a8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1066a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1066ac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1066acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1066b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1066b4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1066b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066b8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1066b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066bc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1066bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066c0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1066c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066c4: 0xc041876  jal         func_1061D8
    ctx->pc = 0x1066C4u;
    SET_GPR_U32(ctx, 31, 0x1066CCu);
    ctx->pc = 0x1066C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1066C4u;
            // 0x1066c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061D8u;
    if (runtime->hasFunction(0x1061D8u)) {
        auto targetFn = runtime->lookupFunction(0x1061D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066CCu; }
        if (ctx->pc != 0x1066CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001061D8_0x1061d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066CCu; }
        if (ctx->pc != 0x1066CCu) { return; }
    }
    ctx->pc = 0x1066CCu;
label_1066cc:
    // 0x1066cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1066ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066d0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1066D0u;
    SET_GPR_U32(ctx, 31, 0x1066D8u);
    ctx->pc = 0x1066D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1066D0u;
            // 0x1066d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (runtime->hasFunction(0x107158u)) {
        auto targetFn = runtime->lookupFunction(0x107158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066D8u; }
        if (ctx->pc != 0x1066D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107158_0x107158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066D8u; }
        if (ctx->pc != 0x1066D8u) { return; }
    }
    ctx->pc = 0x1066D8u;
label_1066d8:
    // 0x1066d8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1066d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1066dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1066dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1066e0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1066e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1066e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1066e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1066ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1066f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1066f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1066f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066fc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1066fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106700: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x106700u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106704: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x106704u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106708: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x106708u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10670c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10670cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106710: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x106710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106714: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106718: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10671c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10671cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106720: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x106720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106724: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106728: 0x8041876  j           func_1061D8
    ctx->pc = 0x106728u;
    ctx->pc = 0x10672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106728u;
            // 0x10672c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061D8u;
    if (runtime->hasFunction(0x1061D8u)) {
        auto targetFn = runtime->lookupFunction(0x1061D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001061D8_0x1061d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x106730u;
label_106730:
    // 0x106730: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x106730u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_106734:
    // 0x106734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106738: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x106738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x10673c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x10673cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106740: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x106740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106744: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x106744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106748: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x106748u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10674c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x10674cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106750: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106754: 0xc041876  jal         func_1061D8
    ctx->pc = 0x106754u;
    SET_GPR_U32(ctx, 31, 0x10675Cu);
    ctx->pc = 0x106758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106754u;
            // 0x106758: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1061D8u;
    if (runtime->hasFunction(0x1061D8u)) {
        auto targetFn = runtime->lookupFunction(0x1061D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10675Cu; }
        if (ctx->pc != 0x10675Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001061D8_0x1061d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10675Cu; }
        if (ctx->pc != 0x10675Cu) { return; }
    }
    ctx->pc = 0x10675Cu;
label_10675c:
    // 0x10675c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106760: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106764: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x106764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x106768: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x106768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x10676c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106770: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x106770u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106774: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x106774u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106778: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x106778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10677c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10677cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106780: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106780u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106784: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106788: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x106788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10678c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10678cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106790: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106794: 0x3e00008  jr          $ra
    ctx->pc = 0x106794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106794u;
            // 0x106798: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10679Cu;
    // 0x10679c: 0x0  nop
    ctx->pc = 0x10679cu;
    // NOP
    ctx->pc = 0x1067a0u;
}
