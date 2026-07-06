#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029C640
// Address: 0x29c640 - 0x29c730
void sub_0029C640_0x29c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C640_0x29c640");
#endif

    switch (ctx->pc) {
        case 0x29c688u: goto label_29c688;
        case 0x29c698u: goto label_29c698;
        case 0x29c6acu: goto label_29c6ac;
        case 0x29c6bcu: goto label_29c6bc;
        case 0x29c6dcu: goto label_29c6dc;
        case 0x29c6f0u: goto label_29c6f0;
        case 0x29c704u: goto label_29c704;
        default: break;
    }

    ctx->pc = 0x29c640u;

    // 0x29c640: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x29c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x29c644: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x29c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x29c648: 0xffb50140  sd          $s5, 0x140($sp)
    ctx->pc = 0x29c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x29c64c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x29c64cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c650: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x29c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x29c654: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x29c654u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c658: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x29c658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x29c65c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x29c65cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c660: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x29c660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x29c664: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29c664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c668: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x29c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x29c66c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c66cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c670: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x29c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x29c674: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c678: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C678u;
    {
        const bool branch_taken_0x29c678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C678u;
            // 0x29c67c: 0xffb10100  sd          $s1, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c678) {
            ctx->pc = 0x29C6A0u;
            goto label_29c6a0;
        }
    }
    ctx->pc = 0x29C680u;
    // 0x29c680: 0xc0a6cd2  jal         func_29B348
    ctx->pc = 0x29C680u;
    SET_GPR_U32(ctx, 31, 0x29C688u);
    ctx->pc = 0x29C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C680u;
            // 0x29c684: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B348u;
    if (runtime->hasFunction(0x29B348u)) {
        auto targetFn = runtime->lookupFunction(0x29B348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C688u; }
        if (ctx->pc != 0x29C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B348_0x29b348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C688u; }
        if (ctx->pc != 0x29C688u) { return; }
    }
    ctx->pc = 0x29C688u;
label_29c688:
    // 0x29c688: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29c688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29c68c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c690: 0xc0a6cde  jal         func_29B378
    ctx->pc = 0x29C690u;
    SET_GPR_U32(ctx, 31, 0x29C698u);
    ctx->pc = 0x29C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C690u;
            // 0x29c694: 0x24a5b128  addiu       $a1, $a1, -0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B378u;
    if (runtime->hasFunction(0x29B378u)) {
        auto targetFn = runtime->lookupFunction(0x29B378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C698u; }
        if (ctx->pc != 0x29C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B378_0x29b378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C698u; }
        if (ctx->pc != 0x29C698u) { return; }
    }
    ctx->pc = 0x29C698u;
label_29c698:
    // 0x29c698: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C698u;
    {
        const bool branch_taken_0x29c698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C698u;
            // 0x29c69c: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c698) {
            ctx->pc = 0x29C6ACu;
            goto label_29c6ac;
        }
    }
    ctx->pc = 0x29C6A0u;
label_29c6a0:
    // 0x29c6a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6a4: 0xc0a6db0  jal         func_29B6C0
    ctx->pc = 0x29C6A4u;
    SET_GPR_U32(ctx, 31, 0x29C6ACu);
    ctx->pc = 0x29C6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6A4u;
            // 0x29c6a8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6C0u;
    if (runtime->hasFunction(0x29B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6ACu; }
        if (ctx->pc != 0x29C6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B6C0_0x29b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6ACu; }
        if (ctx->pc != 0x29C6ACu) { return; }
    }
    ctx->pc = 0x29C6ACu;
label_29c6ac:
    // 0x29c6ac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C6ACu;
    {
        const bool branch_taken_0x29c6ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6ACu;
            // 0x29c6b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6ac) {
            ctx->pc = 0x29C6C8u;
            goto label_29c6c8;
        }
    }
    ctx->pc = 0x29C6B4u;
    // 0x29c6b4: 0xc0a6ce2  jal         func_29B388
    ctx->pc = 0x29C6B4u;
    SET_GPR_U32(ctx, 31, 0x29C6BCu);
    ctx->pc = 0x29C6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6B4u;
            // 0x29c6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B388u;
    if (runtime->hasFunction(0x29B388u)) {
        auto targetFn = runtime->lookupFunction(0x29B388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6BCu; }
        if (ctx->pc != 0x29C6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B388_0x29b388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6BCu; }
        if (ctx->pc != 0x29C6BCu) { return; }
    }
    ctx->pc = 0x29C6BCu;
label_29c6bc:
    // 0x29c6bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6c0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x29C6C0u;
    {
        const bool branch_taken_0x29c6c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c6c0) {
            ctx->pc = 0x29C6F4u;
            goto label_29c6f4;
        }
    }
    ctx->pc = 0x29C6C8u;
label_29c6c8:
    // 0x29c6c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29c6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29c6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x29c6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6d4: 0xc0a6de6  jal         func_29B798
    ctx->pc = 0x29C6D4u;
    SET_GPR_U32(ctx, 31, 0x29C6DCu);
    ctx->pc = 0x29C6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6D4u;
            // 0x29c6d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B798u;
    if (runtime->hasFunction(0x29B798u)) {
        auto targetFn = runtime->lookupFunction(0x29B798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6DCu; }
        if (ctx->pc != 0x29C6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B798_0x29b798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6DCu; }
        if (ctx->pc != 0x29C6DCu) { return; }
    }
    ctx->pc = 0x29C6DCu;
label_29c6dc:
    // 0x29c6dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6e0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C6E0u;
    {
        const bool branch_taken_0x29c6e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6E0u;
            // 0x29c6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6e0) {
            ctx->pc = 0x29C6F4u;
            goto label_29c6f4;
        }
    }
    ctx->pc = 0x29C6E8u;
    // 0x29c6e8: 0xc0a713c  jal         func_29C4F0
    ctx->pc = 0x29C6E8u;
    SET_GPR_U32(ctx, 31, 0x29C6F0u);
    ctx->pc = 0x29C6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6E8u;
            // 0x29c6ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C4F0u;
    if (runtime->hasFunction(0x29C4F0u)) {
        auto targetFn = runtime->lookupFunction(0x29C4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6F0u; }
        if (ctx->pc != 0x29C6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C4F0_0x29c4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C6F0u; }
        if (ctx->pc != 0x29C6F0u) { return; }
    }
    ctx->pc = 0x29C6F0u;
label_29c6f0:
    // 0x29c6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c6f4:
    // 0x29c6f4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C6F4u;
    {
        const bool branch_taken_0x29c6f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6F4u;
            // 0x29c6f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6f4) {
            ctx->pc = 0x29C708u;
            goto label_29c708;
        }
    }
    ctx->pc = 0x29C6FCu;
    // 0x29c6fc: 0xc0a6d8e  jal         func_29B638
    ctx->pc = 0x29C6FCu;
    SET_GPR_U32(ctx, 31, 0x29C704u);
    ctx->pc = 0x29C700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C6FCu;
            // 0x29c700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B638u;
    if (runtime->hasFunction(0x29B638u)) {
        auto targetFn = runtime->lookupFunction(0x29B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C704u; }
        if (ctx->pc != 0x29C704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B638_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C704u; }
        if (ctx->pc != 0x29C704u) { return; }
    }
    ctx->pc = 0x29C704u;
label_29c704:
    // 0x29c704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c708:
    // 0x29c708: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x29c708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x29c70c: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x29c70cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x29c710: 0xdfb50140  ld          $s5, 0x140($sp)
    ctx->pc = 0x29c710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29c714: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x29c714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29c718: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x29c718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29c71c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x29c71cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29c720: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x29c720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29c724: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x29c724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29c728: 0x3e00008  jr          $ra
    ctx->pc = 0x29C728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C728u;
            // 0x29c72c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C730u;
    ctx->pc = 0x29c730u;
}
