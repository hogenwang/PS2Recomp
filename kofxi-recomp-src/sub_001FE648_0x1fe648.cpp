#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE648
// Address: 0x1fe648 - 0x1fe7b0
void sub_001FE648_0x1fe648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE648_0x1fe648");
#endif

    switch (ctx->pc) {
        case 0x1fe680u: goto label_1fe680;
        case 0x1fe6b8u: goto label_1fe6b8;
        case 0x1fe6f8u: goto label_1fe6f8;
        case 0x1fe71cu: goto label_1fe71c;
        case 0x1fe730u: goto label_1fe730;
        case 0x1fe758u: goto label_1fe758;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe768u: goto label_1fe768;
        case 0x1fe780u: goto label_1fe780;
        case 0x1fe788u: goto label_1fe788;
        case 0x1fe794u: goto label_1fe794;
        default: break;
    }

    ctx->pc = 0x1fe648u;

    // 0x1fe648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe654: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe658: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fe65c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fe65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe660: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fe660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fe664: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fe664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe668: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fe668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fe66c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1fe66cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe670: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fe674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fe678: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FE678u;
    SET_GPR_U32(ctx, 31, 0x1FE680u);
    ctx->pc = 0x1FE67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE678u;
            // 0x1fe67c: 0x263021a8  addiu       $s0, $s1, 0x21A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE680u; }
        if (ctx->pc != 0x1FE680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE680u; }
        if (ctx->pc != 0x1FE680u) { return; }
    }
    ctx->pc = 0x1FE680u;
label_1fe680:
    // 0x1fe680: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fe680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fe684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe688: 0x34a50191  ori         $a1, $a1, 0x191
    ctx->pc = 0x1fe688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)401);
    // 0x1fe68c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE68Cu;
    {
        const bool branch_taken_0x1fe68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE68Cu;
            // 0x1fe690: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe68c) {
            ctx->pc = 0x1FE6B8u;
            goto label_1fe6b8;
        }
    }
    ctx->pc = 0x1FE694u;
    // 0x1fe694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe69c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe69cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe6a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe6a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe6a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe6a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe6a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe6a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe6ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fe6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe6b0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FE6B0u;
    ctx->pc = 0x1FE6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6B0u;
            // 0x1fe6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FE6B8u;
label_1fe6b8:
    // 0x1fe6b8: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1fe6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fe6bc: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE6BCu;
    {
        const bool branch_taken_0x1fe6bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6BCu;
            // 0x1fe6c0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6bc) {
            ctx->pc = 0x1FE6F8u;
            goto label_1fe6f8;
        }
    }
    ctx->pc = 0x1FE6C4u;
    // 0x1fe6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe6cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fe6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe6d8: 0x34a50602  ori         $a1, $a1, 0x602
    ctx->pc = 0x1fe6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1538);
    // 0x1fe6dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe6dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe6e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe6e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe6e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe6e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe6e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fe6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe6ec: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FE6ECu;
    ctx->pc = 0x1FE6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE6ECu;
            // 0x1fe6f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FE6F4u;
    // 0x1fe6f4: 0x0  nop
    ctx->pc = 0x1fe6f4u;
    // NOP
label_1fe6f8:
    // 0x1fe6f8: 0x158100  sll         $s0, $s5, 4
    ctx->pc = 0x1fe6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1fe6fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe700: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe704: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1fe704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe708: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fe708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1fe70c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe714: 0xc07fa66  jal         func_1FE998
    ctx->pc = 0x1FE714u;
    SET_GPR_U32(ctx, 31, 0x1FE71Cu);
    ctx->pc = 0x1FE718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE714u;
            // 0x1fe718: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE998u;
    if (runtime->hasFunction(0x1FE998u)) {
        auto targetFn = runtime->lookupFunction(0x1FE998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE71Cu; }
        if (ctx->pc != 0x1FE71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE998_0x1fe998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE71Cu; }
        if (ctx->pc != 0x1FE71Cu) { return; }
    }
    ctx->pc = 0x1FE71Cu;
label_1fe71c:
    // 0x1fe71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe724: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fe724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe728: 0xc07a9f6  jal         func_1EA7D8
    ctx->pc = 0x1FE728u;
    SET_GPR_U32(ctx, 31, 0x1FE730u);
    ctx->pc = 0x1FE72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE728u;
            // 0x1fe72c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA7D8u;
    if (runtime->hasFunction(0x1EA7D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EA7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE730u; }
        if (ctx->pc != 0x1FE730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA7D8_0x1ea7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE730u; }
        if (ctx->pc != 0x1FE730u) { return; }
    }
    ctx->pc = 0x1FE730u;
label_1fe730:
    // 0x1fe730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe73c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe73cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe740: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe744: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe748: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe74c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fe74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe750: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE750u;
            // 0x1fe754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE758u;
label_1fe758:
    // 0x1fe758: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE758u;
            // 0x1fe75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE760u;
label_1fe760:
    // 0x1fe760: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE760u;
            // 0x1fe764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE768u;
label_1fe768:
    // 0x1fe768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe76c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fe778: 0xc07f9ec  jal         func_1FE7B0
    ctx->pc = 0x1FE778u;
    SET_GPR_U32(ctx, 31, 0x1FE780u);
    ctx->pc = 0x1FE77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE778u;
            // 0x1fe77c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE7B0u;
    if (runtime->hasFunction(0x1FE7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE780u; }
        if (ctx->pc != 0x1FE780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE7B0_0x1fe7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE780u; }
        if (ctx->pc != 0x1FE780u) { return; }
    }
    ctx->pc = 0x1FE780u;
label_1fe780:
    // 0x1fe780: 0xc07fa30  jal         func_1FE8C0
    ctx->pc = 0x1FE780u;
    SET_GPR_U32(ctx, 31, 0x1FE788u);
    ctx->pc = 0x1FE784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE780u;
            // 0x1fe784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8C0u;
    if (runtime->hasFunction(0x1FE8C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE788u; }
        if (ctx->pc != 0x1FE788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE8C0_0x1fe8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE788u; }
        if (ctx->pc != 0x1FE788u) { return; }
    }
    ctx->pc = 0x1FE788u;
label_1fe788:
    // 0x1fe788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe78c: 0xc07fa0e  jal         func_1FE838
    ctx->pc = 0x1FE78Cu;
    SET_GPR_U32(ctx, 31, 0x1FE794u);
    ctx->pc = 0x1FE790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE78Cu;
            // 0x1fe790: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE838u;
    if (runtime->hasFunction(0x1FE838u)) {
        auto targetFn = runtime->lookupFunction(0x1FE838u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE794u; }
        if (ctx->pc != 0x1FE794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE838_0x1fe838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE794u; }
        if (ctx->pc != 0x1FE794u) { return; }
    }
    ctx->pc = 0x1FE794u;
label_1fe794:
    // 0x1fe794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe798: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe79c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7A4u;
            // 0x1fe7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE7ACu;
    // 0x1fe7ac: 0x0  nop
    ctx->pc = 0x1fe7acu;
    // NOP
    ctx->pc = 0x1fe7b0u;
}
