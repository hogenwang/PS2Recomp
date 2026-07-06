#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7740
// Address: 0x1a7740 - 0x1a77f0
void sub_001A7740_0x1a7740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7740_0x1a7740");
#endif

    switch (ctx->pc) {
        case 0x1a7740u: goto label_1a7740;
        case 0x1a7744u: goto label_1a7744;
        case 0x1a7748u: goto label_1a7748;
        case 0x1a774cu: goto label_1a774c;
        case 0x1a7750u: goto label_1a7750;
        case 0x1a7754u: goto label_1a7754;
        case 0x1a7758u: goto label_1a7758;
        case 0x1a775cu: goto label_1a775c;
        case 0x1a7760u: goto label_1a7760;
        case 0x1a7764u: goto label_1a7764;
        case 0x1a7768u: goto label_1a7768;
        case 0x1a776cu: goto label_1a776c;
        case 0x1a7770u: goto label_1a7770;
        case 0x1a7774u: goto label_1a7774;
        case 0x1a7778u: goto label_1a7778;
        case 0x1a777cu: goto label_1a777c;
        case 0x1a7780u: goto label_1a7780;
        case 0x1a7784u: goto label_1a7784;
        case 0x1a7788u: goto label_1a7788;
        case 0x1a778cu: goto label_1a778c;
        case 0x1a7790u: goto label_1a7790;
        case 0x1a7794u: goto label_1a7794;
        case 0x1a7798u: goto label_1a7798;
        case 0x1a779cu: goto label_1a779c;
        case 0x1a77a0u: goto label_1a77a0;
        case 0x1a77a4u: goto label_1a77a4;
        case 0x1a77a8u: goto label_1a77a8;
        case 0x1a77acu: goto label_1a77ac;
        case 0x1a77b0u: goto label_1a77b0;
        case 0x1a77b4u: goto label_1a77b4;
        case 0x1a77b8u: goto label_1a77b8;
        case 0x1a77bcu: goto label_1a77bc;
        case 0x1a77c0u: goto label_1a77c0;
        case 0x1a77c4u: goto label_1a77c4;
        case 0x1a77c8u: goto label_1a77c8;
        case 0x1a77ccu: goto label_1a77cc;
        case 0x1a77d0u: goto label_1a77d0;
        case 0x1a77d4u: goto label_1a77d4;
        case 0x1a77d8u: goto label_1a77d8;
        case 0x1a77dcu: goto label_1a77dc;
        case 0x1a77e0u: goto label_1a77e0;
        case 0x1a77e4u: goto label_1a77e4;
        case 0x1a77e8u: goto label_1a77e8;
        case 0x1a77ecu: goto label_1a77ec;
        default: break;
    }

    ctx->pc = 0x1a7740u;

label_1a7740:
    // 0x1a7740: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a7740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
label_1a7744:
    // 0x1a7744: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a7744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
label_1a7748:
    // 0x1a7748: 0x24a2f840  addiu       $v0, $a1, -0x7C0
    ctx->pc = 0x1a7748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965312));
label_1a774c:
    // 0x1a774c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1a774cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1a7750:
    // 0x1a7750: 0xac62fc40  sw          $v0, -0x3C0($v1)
    ctx->pc = 0x1a7750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966336), GPR_U32(ctx, 2));
label_1a7754:
    // 0x1a7754: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x1a7754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_1a7758:
    // 0x1a7758: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x1a7758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_1a775c:
    // 0x1a775c: 0x0  nop
    ctx->pc = 0x1a775cu;
    // NOP
label_1a7760:
    // 0x1a7760: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a7760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a7764:
    // 0x1a7764: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a7764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a7768:
    // 0x1a7768: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1a7768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1a776c:
    // 0x1a776c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1a776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1a7770:
    // 0x1a7770: 0x0  nop
    ctx->pc = 0x1a7770u;
    // NOP
label_1a7774:
    // 0x1a7774: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_1a7778:
    if (ctx->pc == 0x1A7778u) {
        ctx->pc = 0x1A777Cu;
        goto label_1a777c;
    }
    ctx->pc = 0x1A7774u;
    {
        const bool branch_taken_0x1a7774 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1a7774) {
            ctx->pc = 0x1A7760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7760;
        }
    }
    ctx->pc = 0x1A777Cu;
label_1a777c:
    // 0x1a777c: 0x24a3f840  addiu       $v1, $a1, -0x7C0
    ctx->pc = 0x1a777cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965312));
label_1a7780:
    // 0x1a7780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7784:
    // 0x1a7784: 0x3e00008  jr          $ra
label_1a7788:
    if (ctx->pc == 0x1A7788u) {
        ctx->pc = 0x1A7788u;
            // 0x1a7788: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->pc = 0x1A778Cu;
        goto label_1a778c;
    }
    ctx->pc = 0x1A7784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7784u;
            // 0x1a7788: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A778Cu;
label_1a778c:
    // 0x1a778c: 0x0  nop
    ctx->pc = 0x1a778cu;
    // NOP
label_1a7790:
    // 0x1a7790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a7794:
    // 0x1a7794: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x1a7794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_1a7798:
    // 0x1a7798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a779c:
    // 0x1a779c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a779cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a77a0:
    // 0x1a77a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a77a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a77a4:
    // 0x1a77a4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1a77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1a77a8:
    // 0x1a77a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1a77ac:
    // 0x1a77ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a77b0:
    // 0x1a77b0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1a77b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a77b4:
    // 0x1a77b4: 0x40f809  jalr        $v0
label_1a77b8:
    if (ctx->pc == 0x1A77B8u) {
        ctx->pc = 0x1A77B8u;
            // 0x1a77b8: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x1A77BCu;
        goto label_1a77bc;
    }
    ctx->pc = 0x1A77B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A77BCu);
        ctx->pc = 0x1A77B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77B4u;
            // 0x1a77b8: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A77BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A77BCu; }
            if (ctx->pc != 0x1A77BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A77BCu;
label_1a77bc:
    // 0x1a77bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a77c0:
    if (ctx->pc == 0x1A77C0u) {
        ctx->pc = 0x1A77C0u;
            // 0x1a77c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1A77C4u;
        goto label_1a77c4;
    }
    ctx->pc = 0x1A77BCu;
    {
        const bool branch_taken_0x1a77bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A77C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77BCu;
            // 0x1a77c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77bc) {
            ctx->pc = 0x1A77E0u;
            goto label_1a77e0;
        }
    }
    ctx->pc = 0x1A77C4u;
label_1a77c4:
    // 0x1a77c4: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
label_1a77c8:
    // 0x1a77c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a77cc:
    // 0x1a77cc: 0x8c64fc40  lw          $a0, -0x3C0($v1)
    ctx->pc = 0x1a77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966336)));
label_1a77d0:
    // 0x1a77d0: 0xac70fc40  sw          $s0, -0x3C0($v1)
    ctx->pc = 0x1a77d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966336), GPR_U32(ctx, 16));
label_1a77d4:
    // 0x1a77d4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1a77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1a77d8:
    // 0x1a77d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a77dc:
    // 0x1a77dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a77dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a77e0:
    // 0x1a77e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a77e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a77e4:
    // 0x1a77e4: 0x3e00008  jr          $ra
label_1a77e8:
    if (ctx->pc == 0x1A77E8u) {
        ctx->pc = 0x1A77E8u;
            // 0x1a77e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A77ECu;
        goto label_1a77ec;
    }
    ctx->pc = 0x1A77E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77E4u;
            // 0x1a77e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A77ECu;
label_1a77ec:
    // 0x1a77ec: 0x0  nop
    ctx->pc = 0x1a77ecu;
    // NOP
    ctx->pc = 0x1a77f0u;
}
