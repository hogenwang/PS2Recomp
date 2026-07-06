#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029C730
// Address: 0x29c730 - 0x29c820
void sub_0029C730_0x29c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C730_0x29c730");
#endif

    switch (ctx->pc) {
        case 0x29c778u: goto label_29c778;
        case 0x29c788u: goto label_29c788;
        case 0x29c79cu: goto label_29c79c;
        case 0x29c7acu: goto label_29c7ac;
        case 0x29c7c4u: goto label_29c7c4;
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7f4u: goto label_29c7f4;
        default: break;
    }

    ctx->pc = 0x29c730u;

    // 0x29c730: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x29c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x29c734: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x29c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x29c738: 0xffb50140  sd          $s5, 0x140($sp)
    ctx->pc = 0x29c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x29c73c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x29c73cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c740: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x29c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x29c744: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29c744u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c748: 0xffb30120  sd          $s3, 0x120($sp)
    ctx->pc = 0x29c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x29c74c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29c74cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c750: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x29c750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x29c754: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29c754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c758: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x29c758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x29c75c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c75cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c760: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x29c760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x29c764: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c768: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C768u;
    {
        const bool branch_taken_0x29c768 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C768u;
            // 0x29c76c: 0xffb10100  sd          $s1, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c768) {
            ctx->pc = 0x29C790u;
            goto label_29c790;
        }
    }
    ctx->pc = 0x29C770u;
    // 0x29c770: 0xc0a6cc6  jal         func_29B318
    ctx->pc = 0x29C770u;
    SET_GPR_U32(ctx, 31, 0x29C778u);
    ctx->pc = 0x29C774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C770u;
            // 0x29c774: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B318u;
    if (runtime->hasFunction(0x29B318u)) {
        auto targetFn = runtime->lookupFunction(0x29B318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C778u; }
        if (ctx->pc != 0x29C778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B318_0x29b318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C778u; }
        if (ctx->pc != 0x29C778u) { return; }
    }
    ctx->pc = 0x29C778u;
label_29c778:
    // 0x29c778: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29c778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29c77c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c780: 0xc0a6cde  jal         func_29B378
    ctx->pc = 0x29C780u;
    SET_GPR_U32(ctx, 31, 0x29C788u);
    ctx->pc = 0x29C784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C780u;
            // 0x29c784: 0x24a5b128  addiu       $a1, $a1, -0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B378u;
    if (runtime->hasFunction(0x29B378u)) {
        auto targetFn = runtime->lookupFunction(0x29B378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C788u; }
        if (ctx->pc != 0x29C788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B378_0x29b378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C788u; }
        if (ctx->pc != 0x29C788u) { return; }
    }
    ctx->pc = 0x29C788u;
label_29c788:
    // 0x29c788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C788u;
    {
        const bool branch_taken_0x29c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C788u;
            // 0x29c78c: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c788) {
            ctx->pc = 0x29C79Cu;
            goto label_29c79c;
        }
    }
    ctx->pc = 0x29C790u;
label_29c790:
    // 0x29c790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c794: 0xc0a6db0  jal         func_29B6C0
    ctx->pc = 0x29C794u;
    SET_GPR_U32(ctx, 31, 0x29C79Cu);
    ctx->pc = 0x29C798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C794u;
            // 0x29c798: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B6C0u;
    if (runtime->hasFunction(0x29B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C79Cu; }
        if (ctx->pc != 0x29C79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B6C0_0x29b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C79Cu; }
        if (ctx->pc != 0x29C79Cu) { return; }
    }
    ctx->pc = 0x29C79Cu;
label_29c79c:
    // 0x29c79c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C79Cu;
    {
        const bool branch_taken_0x29c79c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C79Cu;
            // 0x29c7a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c79c) {
            ctx->pc = 0x29C7B8u;
            goto label_29c7b8;
        }
    }
    ctx->pc = 0x29C7A4u;
    // 0x29c7a4: 0xc0a6ce2  jal         func_29B388
    ctx->pc = 0x29C7A4u;
    SET_GPR_U32(ctx, 31, 0x29C7ACu);
    ctx->pc = 0x29C7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7A4u;
            // 0x29c7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B388u;
    if (runtime->hasFunction(0x29B388u)) {
        auto targetFn = runtime->lookupFunction(0x29B388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7ACu; }
        if (ctx->pc != 0x29C7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B388_0x29b388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7ACu; }
        if (ctx->pc != 0x29C7ACu) { return; }
    }
    ctx->pc = 0x29C7ACu;
label_29c7ac:
    // 0x29c7ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7b0: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x29C7B0u;
    {
        const bool branch_taken_0x29c7b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c7b0) {
            ctx->pc = 0x29C7E4u;
            goto label_29c7e4;
        }
    }
    ctx->pc = 0x29C7B8u;
label_29c7b8:
    // 0x29c7b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29c7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7bc: 0xc0a713c  jal         func_29C4F0
    ctx->pc = 0x29C7BCu;
    SET_GPR_U32(ctx, 31, 0x29C7C4u);
    ctx->pc = 0x29C7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7BCu;
            // 0x29c7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C4F0u;
    if (runtime->hasFunction(0x29C4F0u)) {
        auto targetFn = runtime->lookupFunction(0x29C4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7C4u; }
        if (ctx->pc != 0x29C7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C4F0_0x29c4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7C4u; }
        if (ctx->pc != 0x29C7C4u) { return; }
    }
    ctx->pc = 0x29C7C4u;
label_29c7c4:
    // 0x29c7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7c8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C7C8u;
    {
        const bool branch_taken_0x29c7c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7C8u;
            // 0x29c7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c7c8) {
            ctx->pc = 0x29C7E4u;
            goto label_29c7e4;
        }
    }
    ctx->pc = 0x29C7D0u;
    // 0x29c7d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29c7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29c7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7d8: 0xc0a6dc8  jal         func_29B720
    ctx->pc = 0x29C7D8u;
    SET_GPR_U32(ctx, 31, 0x29C7E0u);
    ctx->pc = 0x29C7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7D8u;
            // 0x29c7dc: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B720u;
    if (runtime->hasFunction(0x29B720u)) {
        auto targetFn = runtime->lookupFunction(0x29B720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7E0u; }
        if (ctx->pc != 0x29C7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B720_0x29b720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7E0u; }
        if (ctx->pc != 0x29C7E0u) { return; }
    }
    ctx->pc = 0x29C7E0u;
label_29c7e0:
    // 0x29c7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c7e4:
    // 0x29c7e4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C7E4u;
    {
        const bool branch_taken_0x29c7e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7E4u;
            // 0x29c7e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c7e4) {
            ctx->pc = 0x29C7F8u;
            goto label_29c7f8;
        }
    }
    ctx->pc = 0x29C7ECu;
    // 0x29c7ec: 0xc0a6d8e  jal         func_29B638
    ctx->pc = 0x29C7ECu;
    SET_GPR_U32(ctx, 31, 0x29C7F4u);
    ctx->pc = 0x29C7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C7ECu;
            // 0x29c7f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B638u;
    if (runtime->hasFunction(0x29B638u)) {
        auto targetFn = runtime->lookupFunction(0x29B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7F4u; }
        if (ctx->pc != 0x29C7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B638_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C7F4u; }
        if (ctx->pc != 0x29C7F4u) { return; }
    }
    ctx->pc = 0x29C7F4u;
label_29c7f4:
    // 0x29c7f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c7f8:
    // 0x29c7f8: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x29c7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x29c7fc: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x29c7fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x29c800: 0xdfb50140  ld          $s5, 0x140($sp)
    ctx->pc = 0x29c800u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29c804: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x29c804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29c808: 0xdfb30120  ld          $s3, 0x120($sp)
    ctx->pc = 0x29c808u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29c80c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x29c80cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29c810: 0xdfb10100  ld          $s1, 0x100($sp)
    ctx->pc = 0x29c810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29c814: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x29c814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29c818: 0x3e00008  jr          $ra
    ctx->pc = 0x29C818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C818u;
            // 0x29c81c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C820u;
    ctx->pc = 0x29c820u;
}
