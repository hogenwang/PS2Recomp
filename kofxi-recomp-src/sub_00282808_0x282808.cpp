#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282808
// Address: 0x282808 - 0x282a80
void sub_00282808_0x282808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282808_0x282808");
#endif

    switch (ctx->pc) {
        case 0x282808u: goto label_282808;
        case 0x28280cu: goto label_28280c;
        case 0x282810u: goto label_282810;
        case 0x282814u: goto label_282814;
        case 0x282818u: goto label_282818;
        case 0x28281cu: goto label_28281c;
        case 0x282820u: goto label_282820;
        case 0x282824u: goto label_282824;
        case 0x282828u: goto label_282828;
        case 0x28282cu: goto label_28282c;
        case 0x282830u: goto label_282830;
        case 0x282834u: goto label_282834;
        case 0x282838u: goto label_282838;
        case 0x28283cu: goto label_28283c;
        case 0x282840u: goto label_282840;
        case 0x282844u: goto label_282844;
        case 0x282848u: goto label_282848;
        case 0x28284cu: goto label_28284c;
        case 0x282850u: goto label_282850;
        case 0x282854u: goto label_282854;
        case 0x282858u: goto label_282858;
        case 0x28285cu: goto label_28285c;
        case 0x282860u: goto label_282860;
        case 0x282864u: goto label_282864;
        case 0x282868u: goto label_282868;
        case 0x28286cu: goto label_28286c;
        case 0x282870u: goto label_282870;
        case 0x282874u: goto label_282874;
        case 0x282878u: goto label_282878;
        case 0x28287cu: goto label_28287c;
        case 0x282880u: goto label_282880;
        case 0x282884u: goto label_282884;
        case 0x282888u: goto label_282888;
        case 0x28288cu: goto label_28288c;
        case 0x282890u: goto label_282890;
        case 0x282894u: goto label_282894;
        case 0x282898u: goto label_282898;
        case 0x28289cu: goto label_28289c;
        case 0x2828a0u: goto label_2828a0;
        case 0x2828a4u: goto label_2828a4;
        case 0x2828a8u: goto label_2828a8;
        case 0x2828acu: goto label_2828ac;
        case 0x2828b0u: goto label_2828b0;
        case 0x2828b4u: goto label_2828b4;
        case 0x2828b8u: goto label_2828b8;
        case 0x2828bcu: goto label_2828bc;
        case 0x2828c0u: goto label_2828c0;
        case 0x2828c4u: goto label_2828c4;
        case 0x2828c8u: goto label_2828c8;
        case 0x2828ccu: goto label_2828cc;
        case 0x2828d0u: goto label_2828d0;
        case 0x2828d4u: goto label_2828d4;
        case 0x2828d8u: goto label_2828d8;
        case 0x2828dcu: goto label_2828dc;
        case 0x2828e0u: goto label_2828e0;
        case 0x2828e4u: goto label_2828e4;
        case 0x2828e8u: goto label_2828e8;
        case 0x2828ecu: goto label_2828ec;
        case 0x2828f0u: goto label_2828f0;
        case 0x2828f4u: goto label_2828f4;
        case 0x2828f8u: goto label_2828f8;
        case 0x2828fcu: goto label_2828fc;
        case 0x282900u: goto label_282900;
        case 0x282904u: goto label_282904;
        case 0x282908u: goto label_282908;
        case 0x28290cu: goto label_28290c;
        case 0x282910u: goto label_282910;
        case 0x282914u: goto label_282914;
        case 0x282918u: goto label_282918;
        case 0x28291cu: goto label_28291c;
        case 0x282920u: goto label_282920;
        case 0x282924u: goto label_282924;
        case 0x282928u: goto label_282928;
        case 0x28292cu: goto label_28292c;
        case 0x282930u: goto label_282930;
        case 0x282934u: goto label_282934;
        case 0x282938u: goto label_282938;
        case 0x28293cu: goto label_28293c;
        case 0x282940u: goto label_282940;
        case 0x282944u: goto label_282944;
        case 0x282948u: goto label_282948;
        case 0x28294cu: goto label_28294c;
        case 0x282950u: goto label_282950;
        case 0x282954u: goto label_282954;
        case 0x282958u: goto label_282958;
        case 0x28295cu: goto label_28295c;
        case 0x282960u: goto label_282960;
        case 0x282964u: goto label_282964;
        case 0x282968u: goto label_282968;
        case 0x28296cu: goto label_28296c;
        case 0x282970u: goto label_282970;
        case 0x282974u: goto label_282974;
        case 0x282978u: goto label_282978;
        case 0x28297cu: goto label_28297c;
        case 0x282980u: goto label_282980;
        case 0x282984u: goto label_282984;
        case 0x282988u: goto label_282988;
        case 0x28298cu: goto label_28298c;
        case 0x282990u: goto label_282990;
        case 0x282994u: goto label_282994;
        case 0x282998u: goto label_282998;
        case 0x28299cu: goto label_28299c;
        case 0x2829a0u: goto label_2829a0;
        case 0x2829a4u: goto label_2829a4;
        case 0x2829a8u: goto label_2829a8;
        case 0x2829acu: goto label_2829ac;
        case 0x2829b0u: goto label_2829b0;
        case 0x2829b4u: goto label_2829b4;
        case 0x2829b8u: goto label_2829b8;
        case 0x2829bcu: goto label_2829bc;
        case 0x2829c0u: goto label_2829c0;
        case 0x2829c4u: goto label_2829c4;
        case 0x2829c8u: goto label_2829c8;
        case 0x2829ccu: goto label_2829cc;
        case 0x2829d0u: goto label_2829d0;
        case 0x2829d4u: goto label_2829d4;
        case 0x2829d8u: goto label_2829d8;
        case 0x2829dcu: goto label_2829dc;
        case 0x2829e0u: goto label_2829e0;
        case 0x2829e4u: goto label_2829e4;
        case 0x2829e8u: goto label_2829e8;
        case 0x2829ecu: goto label_2829ec;
        case 0x2829f0u: goto label_2829f0;
        case 0x2829f4u: goto label_2829f4;
        case 0x2829f8u: goto label_2829f8;
        case 0x2829fcu: goto label_2829fc;
        case 0x282a00u: goto label_282a00;
        case 0x282a04u: goto label_282a04;
        case 0x282a08u: goto label_282a08;
        case 0x282a0cu: goto label_282a0c;
        case 0x282a10u: goto label_282a10;
        case 0x282a14u: goto label_282a14;
        case 0x282a18u: goto label_282a18;
        case 0x282a1cu: goto label_282a1c;
        case 0x282a20u: goto label_282a20;
        case 0x282a24u: goto label_282a24;
        case 0x282a28u: goto label_282a28;
        case 0x282a2cu: goto label_282a2c;
        case 0x282a30u: goto label_282a30;
        case 0x282a34u: goto label_282a34;
        case 0x282a38u: goto label_282a38;
        case 0x282a3cu: goto label_282a3c;
        case 0x282a40u: goto label_282a40;
        case 0x282a44u: goto label_282a44;
        case 0x282a48u: goto label_282a48;
        case 0x282a4cu: goto label_282a4c;
        case 0x282a50u: goto label_282a50;
        case 0x282a54u: goto label_282a54;
        case 0x282a58u: goto label_282a58;
        case 0x282a5cu: goto label_282a5c;
        case 0x282a60u: goto label_282a60;
        case 0x282a64u: goto label_282a64;
        case 0x282a68u: goto label_282a68;
        case 0x282a6cu: goto label_282a6c;
        case 0x282a70u: goto label_282a70;
        case 0x282a74u: goto label_282a74;
        case 0x282a78u: goto label_282a78;
        case 0x282a7cu: goto label_282a7c;
        default: break;
    }

    ctx->pc = 0x282808u;

label_282808:
    // 0x282808: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x282808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_28280c:
    // 0x28280c: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x28280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_282810:
    // 0x282810: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x282810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_282814:
    // 0x282814: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x282814u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_282818:
    // 0x282818: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x282818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_28281c:
    // 0x28281c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x28281cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_282820:
    // 0x282820: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x282820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_282824:
    // 0x282824: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x282824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_282828:
    // 0x282828: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x282828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_28282c:
    // 0x28282c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x28282cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_282830:
    // 0x282830: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x282830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_282834:
    // 0x282834: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x282834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_282838:
    // 0x282838: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x282838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_28283c:
    // 0x28283c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28283cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_282840:
    // 0x282840: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x282840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_282844:
    // 0x282844: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x282844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_282848:
    // 0x282848: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_28284c:
    if (ctx->pc == 0x28284Cu) {
        ctx->pc = 0x28284Cu;
            // 0x28284c: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->pc = 0x282850u;
        goto label_282850;
    }
    ctx->pc = 0x282848u;
    {
        const bool branch_taken_0x282848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282848u;
            // 0x28284c: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282848) {
            ctx->pc = 0x28285Cu;
            goto label_28285c;
        }
    }
    ctx->pc = 0x282850u;
label_282850:
    // 0x282850: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x282850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_282854:
    // 0x282854: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_282858:
    if (ctx->pc == 0x282858u) {
        ctx->pc = 0x282858u;
            // 0x282858: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28285Cu;
        goto label_28285c;
    }
    ctx->pc = 0x282854u;
    {
        const bool branch_taken_0x282854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282854u;
            // 0x282858: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282854) {
            ctx->pc = 0x282878u;
            goto label_282878;
        }
    }
    ctx->pc = 0x28285Cu;
label_28285c:
    // 0x28285c: 0xc0af004  jal         func_2BC010
label_282860:
    if (ctx->pc == 0x282860u) {
        ctx->pc = 0x282860u;
            // 0x282860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282864u;
        goto label_282864;
    }
    ctx->pc = 0x28285Cu;
    SET_GPR_U32(ctx, 31, 0x282864u);
    ctx->pc = 0x282860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28285Cu;
            // 0x282860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282864u; }
        if (ctx->pc != 0x282864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282864u; }
        if (ctx->pc != 0x282864u) { return; }
    }
    ctx->pc = 0x282864u;
label_282864:
    // 0x282864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x282864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282868:
    // 0x282868: 0x12000079  beqz        $s0, . + 4 + (0x79 << 2)
label_28286c:
    if (ctx->pc == 0x28286Cu) {
        ctx->pc = 0x28286Cu;
            // 0x28286c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282870u;
        goto label_282870;
    }
    ctx->pc = 0x282868u;
    {
        const bool branch_taken_0x282868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282868u;
            // 0x28286c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282868) {
            ctx->pc = 0x282A50u;
            goto label_282a50;
        }
    }
    ctx->pc = 0x282870u;
label_282870:
    // 0x282870: 0x10000002  b           . + 4 + (0x2 << 2)
label_282874:
    if (ctx->pc == 0x282874u) {
        ctx->pc = 0x282874u;
            // 0x282874: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x282878u;
        goto label_282878;
    }
    ctx->pc = 0x282870u;
    {
        const bool branch_taken_0x282870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282870u;
            // 0x282874: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282870) {
            ctx->pc = 0x28287Cu;
            goto label_28287c;
        }
    }
    ctx->pc = 0x282878u;
label_282878:
    // 0x282878: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x282878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28287c:
    // 0x28287c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_282880:
    if (ctx->pc == 0x282880u) {
        ctx->pc = 0x282880u;
            // 0x282880: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x282884u;
        goto label_282884;
    }
    ctx->pc = 0x28287Cu;
    {
        const bool branch_taken_0x28287c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x282880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28287Cu;
            // 0x282880: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28287c) {
            ctx->pc = 0x282894u;
            goto label_282894;
        }
    }
    ctx->pc = 0x282884u;
label_282884:
    // 0x282884: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x282884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_282888:
    // 0x282888: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x282888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_28288c:
    // 0x28288c: 0x10000002  b           . + 4 + (0x2 << 2)
label_282890:
    if (ctx->pc == 0x282890u) {
        ctx->pc = 0x282890u;
            // 0x282890: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x282894u;
        goto label_282894;
    }
    ctx->pc = 0x28288Cu;
    {
        const bool branch_taken_0x28288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28288Cu;
            // 0x282890: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28288c) {
            ctx->pc = 0x282898u;
            goto label_282898;
        }
    }
    ctx->pc = 0x282894u;
label_282894:
    // 0x282894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282898:
    // 0x282898: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x282898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28289c:
    // 0x28289c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2828a0:
    // 0x2828a0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2828a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2828a4:
    // 0x2828a4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2828a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2828a8:
    // 0x2828a8: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2828ac:
    // 0x2828ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2828acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2828b0:
    // 0x2828b0: 0xc0a0554  jal         func_281550
label_2828b4:
    if (ctx->pc == 0x2828B4u) {
        ctx->pc = 0x2828B4u;
            // 0x2828b4: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->pc = 0x2828B8u;
        goto label_2828b8;
    }
    ctx->pc = 0x2828B0u;
    SET_GPR_U32(ctx, 31, 0x2828B8u);
    ctx->pc = 0x2828B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2828B0u;
            // 0x2828b4: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (runtime->hasFunction(0x281550u)) {
        auto targetFn = runtime->lookupFunction(0x281550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828B8u; }
        if (ctx->pc != 0x2828B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281550_0x281550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828B8u; }
        if (ctx->pc != 0x2828B8u) { return; }
    }
    ctx->pc = 0x2828B8u;
label_2828b8:
    // 0x2828b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2828b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2828bc:
    // 0x2828bc: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x2828bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_2828c0:
    // 0x2828c0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_2828c4:
    if (ctx->pc == 0x2828C4u) {
        ctx->pc = 0x2828C4u;
            // 0x2828c4: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2828C8u;
        goto label_2828c8;
    }
    ctx->pc = 0x2828C0u;
    {
        const bool branch_taken_0x2828c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2828C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2828C0u;
            // 0x2828c4: 0xafa6000c  sw          $a2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828c0) {
            ctx->pc = 0x282A10u;
            goto label_282a10;
        }
    }
    ctx->pc = 0x2828C8u;
label_2828c8:
    // 0x2828c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2828c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2828cc:
    // 0x2828cc: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_2828d0:
    if (ctx->pc == 0x2828D0u) {
        ctx->pc = 0x2828D0u;
            // 0x2828d0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2828D4u;
        goto label_2828d4;
    }
    ctx->pc = 0x2828CCu;
    {
        const bool branch_taken_0x2828cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2828D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2828CCu;
            // 0x2828d0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828cc) {
            ctx->pc = 0x2828E0u;
            goto label_2828e0;
        }
    }
    ctx->pc = 0x2828D4u;
label_2828d4:
    // 0x2828d4: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x2828d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2828d8:
    // 0x2828d8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2828dc:
    if (ctx->pc == 0x2828DCu) {
        ctx->pc = 0x2828DCu;
            // 0x2828dc: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2828E0u;
        goto label_2828e0;
    }
    ctx->pc = 0x2828D8u;
    {
        const bool branch_taken_0x2828d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2828D8u;
            // 0x2828dc: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828d8) {
            ctx->pc = 0x28291Cu;
            goto label_28291c;
        }
    }
    ctx->pc = 0x2828E0u;
label_2828e0:
    // 0x2828e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2828e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2828e4:
    // 0x2828e4: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
label_2828e8:
    if (ctx->pc == 0x2828E8u) {
        ctx->pc = 0x2828E8u;
            // 0x2828e8: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x2828ECu;
        goto label_2828ec;
    }
    ctx->pc = 0x2828E4u;
    {
        const bool branch_taken_0x2828e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2828E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2828E4u;
            // 0x2828e8: 0x24050084  addiu       $a1, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828e4) {
            ctx->pc = 0x2828F4u;
            goto label_2828f4;
        }
    }
    ctx->pc = 0x2828ECu;
label_2828ec:
    // 0x2828ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_2828f0:
    if (ctx->pc == 0x2828F0u) {
        ctx->pc = 0x2828F0u;
            // 0x2828f0: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x2828F4u;
        goto label_2828f4;
    }
    ctx->pc = 0x2828ECu;
    {
        const bool branch_taken_0x2828ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2828ECu;
            // 0x2828f0: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828ec) {
            ctx->pc = 0x28291Cu;
            goto label_28291c;
        }
    }
    ctx->pc = 0x2828F4u;
label_2828f4:
    // 0x2828f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2828f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2828f8:
    // 0x2828f8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2828f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2828fc:
    // 0x2828fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2828fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_282900:
    // 0x282900: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x282900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_282904:
    // 0x282904: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x282904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_282908:
    // 0x282908: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28290c:
    if (ctx->pc == 0x28290Cu) {
        ctx->pc = 0x28290Cu;
            // 0x28290c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x282910u;
        goto label_282910;
    }
    ctx->pc = 0x282908u;
    {
        const bool branch_taken_0x282908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282908u;
            // 0x28290c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282908) {
            ctx->pc = 0x282930u;
            goto label_282930;
        }
    }
    ctx->pc = 0x282910u;
label_282910:
    // 0x282910: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x282910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_282914:
    // 0x282914: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x282914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_282918:
    // 0x282918: 0x2406007d  addiu       $a2, $zero, 0x7D
    ctx->pc = 0x282918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_28291c:
    // 0x28291c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28291cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282920:
    // 0x282920: 0xc0a5648  jal         func_295920
label_282924:
    if (ctx->pc == 0x282924u) {
        ctx->pc = 0x282924u;
            // 0x282924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282928u;
        goto label_282928;
    }
    ctx->pc = 0x282920u;
    SET_GPR_U32(ctx, 31, 0x282928u);
    ctx->pc = 0x282924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282920u;
            // 0x282924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282928u; }
        if (ctx->pc != 0x282928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282928u; }
        if (ctx->pc != 0x282928u) { return; }
    }
    ctx->pc = 0x282928u;
label_282928:
    // 0x282928: 0x10000039  b           . + 4 + (0x39 << 2)
label_28292c:
    if (ctx->pc == 0x28292Cu) {
        ctx->pc = 0x282930u;
        goto label_282930;
    }
    ctx->pc = 0x282928u;
    {
        const bool branch_taken_0x282928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282928) {
            ctx->pc = 0x282A10u;
            goto label_282a10;
        }
    }
    ctx->pc = 0x282930u;
label_282930:
    // 0x282930: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
label_282934:
    if (ctx->pc == 0x282934u) {
        ctx->pc = 0x282934u;
            // 0x282934: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x282938u;
        goto label_282938;
    }
    ctx->pc = 0x282930u;
    {
        const bool branch_taken_0x282930 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x282934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282930u;
            // 0x282934: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282930) {
            ctx->pc = 0x282950u;
            goto label_282950;
        }
    }
    ctx->pc = 0x282938u;
label_282938:
    // 0x282938: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x282938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28293c:
    // 0x28293c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_282940:
    // 0x282940: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x282940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_282944:
    // 0x282944: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x282944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_282948:
    // 0x282948: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x282948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_28294c:
    // 0x28294c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x28294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_282950:
    // 0x282950: 0x1000000f  b           . + 4 + (0xF << 2)
label_282954:
    if (ctx->pc == 0x282954u) {
        ctx->pc = 0x282954u;
            // 0x282954: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x282958u;
        goto label_282958;
    }
    ctx->pc = 0x282950u;
    {
        const bool branch_taken_0x282950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282950u;
            // 0x282954: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282950) {
            ctx->pc = 0x282990u;
            goto label_282990;
        }
    }
    ctx->pc = 0x282958u;
label_282958:
    // 0x282958: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x282958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_28295c:
    // 0x28295c: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x28295cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_282960:
    // 0x282960: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x282960u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_282964:
    // 0x282964: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x282964u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_282968:
    // 0x282968: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28296c:
    // 0x28296c: 0x2c0f809  jalr        $s6
label_282970:
    if (ctx->pc == 0x282970u) {
        ctx->pc = 0x282970u;
            // 0x282970: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282974u;
        goto label_282974;
    }
    ctx->pc = 0x28296Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x282974u);
        ctx->pc = 0x282970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28296Cu;
            // 0x282970: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x282974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x282974u; }
            if (ctx->pc != 0x282974u) { return; }
        }
        }
    }
    ctx->pc = 0x282974u;
label_282974:
    // 0x282974: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_282978:
    if (ctx->pc == 0x282978u) {
        ctx->pc = 0x282978u;
            // 0x282978: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x28297Cu;
        goto label_28297c;
    }
    ctx->pc = 0x282974u;
    {
        const bool branch_taken_0x282974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282974u;
            // 0x282978: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282974) {
            ctx->pc = 0x2829ECu;
            goto label_2829ec;
        }
    }
    ctx->pc = 0x28297Cu;
label_28297c:
    // 0x28297c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28297cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282980:
    // 0x282980: 0xc0af10e  jal         func_2BC438
label_282984:
    if (ctx->pc == 0x282984u) {
        ctx->pc = 0x282984u;
            // 0x282984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282988u;
        goto label_282988;
    }
    ctx->pc = 0x282980u;
    SET_GPR_U32(ctx, 31, 0x282988u);
    ctx->pc = 0x282984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282980u;
            // 0x282984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282988u; }
        if (ctx->pc != 0x282988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282988u; }
        if (ctx->pc != 0x282988u) { return; }
    }
    ctx->pc = 0x282988u;
label_282988:
    // 0x282988: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_28298c:
    if (ctx->pc == 0x28298Cu) {
        ctx->pc = 0x28298Cu;
            // 0x28298c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x282990u;
        goto label_282990;
    }
    ctx->pc = 0x282988u;
    {
        const bool branch_taken_0x282988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282988u;
            // 0x28298c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282988) {
            ctx->pc = 0x282A10u;
            goto label_282a10;
        }
    }
    ctx->pc = 0x282990u;
label_282990:
    // 0x282990: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x282990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_282994:
    // 0x282994: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x282994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282998:
    // 0x282998: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x282998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_28299c:
    // 0x28299c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2829a0:
    if (ctx->pc == 0x2829A0u) {
        ctx->pc = 0x2829A0u;
            // 0x2829a0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->pc = 0x2829A4u;
        goto label_2829a4;
    }
    ctx->pc = 0x28299Cu;
    {
        const bool branch_taken_0x28299c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28299Cu;
            // 0x2829a0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28299c) {
            ctx->pc = 0x2829D8u;
            goto label_2829d8;
        }
    }
    ctx->pc = 0x2829A4u;
label_2829a4:
    // 0x2829a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2829a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2829a8:
    // 0x2829a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2829ac:
    if (ctx->pc == 0x2829ACu) {
        ctx->pc = 0x2829ACu;
            // 0x2829ac: 0xdfa50018  ld          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x2829B0u;
        goto label_2829b0;
    }
    ctx->pc = 0x2829A8u;
    {
        const bool branch_taken_0x2829a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2829ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829A8u;
            // 0x2829ac: 0xdfa50018  ld          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829a8) {
            ctx->pc = 0x2829C4u;
            goto label_2829c4;
        }
    }
    ctx->pc = 0x2829B0u;
label_2829b0:
    // 0x2829b0: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2829b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2829b4:
    // 0x2829b4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_2829b8:
    if (ctx->pc == 0x2829B8u) {
        ctx->pc = 0x2829B8u;
            // 0x2829b8: 0xe43823  subu        $a3, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->pc = 0x2829BCu;
        goto label_2829bc;
    }
    ctx->pc = 0x2829B4u;
    {
        const bool branch_taken_0x2829b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2829B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829B4u;
            // 0x2829b8: 0xe43823  subu        $a3, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829b4) {
            ctx->pc = 0x2829D8u;
            goto label_2829d8;
        }
    }
    ctx->pc = 0x2829BCu;
label_2829bc:
    // 0x2829bc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2829c0:
    if (ctx->pc == 0x2829C0u) {
        ctx->pc = 0x2829C0u;
            // 0x2829c0: 0xdfa60018  ld          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x2829C4u;
        goto label_2829c4;
    }
    ctx->pc = 0x2829BCu;
    {
        const bool branch_taken_0x2829bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829BCu;
            // 0x2829c0: 0xdfa60018  ld          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829bc) {
            ctx->pc = 0x282968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282968;
        }
    }
    ctx->pc = 0x2829C4u;
label_2829c4:
    // 0x2829c4: 0xc0a0542  jal         func_281508
label_2829c8:
    if (ctx->pc == 0x2829C8u) {
        ctx->pc = 0x2829C8u;
            // 0x2829c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2829CCu;
        goto label_2829cc;
    }
    ctx->pc = 0x2829C4u;
    SET_GPR_U32(ctx, 31, 0x2829CCu);
    ctx->pc = 0x2829C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2829C4u;
            // 0x2829c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281508u;
    if (runtime->hasFunction(0x281508u)) {
        auto targetFn = runtime->lookupFunction(0x281508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829CCu; }
        if (ctx->pc != 0x2829CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281508_0x281508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829CCu; }
        if (ctx->pc != 0x2829CCu) { return; }
    }
    ctx->pc = 0x2829CCu;
label_2829cc:
    // 0x2829cc: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
label_2829d0:
    if (ctx->pc == 0x2829D0u) {
        ctx->pc = 0x2829D0u;
            // 0x2829d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2829D4u;
        goto label_2829d4;
    }
    ctx->pc = 0x2829CCu;
    {
        const bool branch_taken_0x2829cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829CCu;
            // 0x2829d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829cc) {
            ctx->pc = 0x282958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282958;
        }
    }
    ctx->pc = 0x2829D4u;
label_2829d4:
    // 0x2829d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2829d8:
    // 0x2829d8: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_2829dc:
    if (ctx->pc == 0x2829DCu) {
        ctx->pc = 0x2829DCu;
            // 0x2829dc: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x2829E0u;
        goto label_2829e0;
    }
    ctx->pc = 0x2829D8u;
    {
        const bool branch_taken_0x2829d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2829d8) {
            ctx->pc = 0x2829DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2829D8u;
            // 0x2829dc: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2829E0u;
            goto label_2829e0;
        }
    }
    ctx->pc = 0x2829E0u;
label_2829e0:
    // 0x2829e0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2829e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2829e4:
    // 0x2829e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2829e8:
    if (ctx->pc == 0x2829E8u) {
        ctx->pc = 0x2829E8u;
            // 0x2829e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2829ECu;
        goto label_2829ec;
    }
    ctx->pc = 0x2829E4u;
    {
        const bool branch_taken_0x2829e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829E4u;
            // 0x2829e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829e4) {
            ctx->pc = 0x282A50u;
            goto label_282a50;
        }
    }
    ctx->pc = 0x2829ECu;
label_2829ec:
    // 0x2829ec: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x2829ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2829f0:
    // 0x2829f0: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2829f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2829f4:
    // 0x2829f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2829f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2829f8:
    // 0x2829f8: 0xc0a5648  jal         func_295920
label_2829fc:
    if (ctx->pc == 0x2829FCu) {
        ctx->pc = 0x2829FCu;
            // 0x2829fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282A00u;
        goto label_282a00;
    }
    ctx->pc = 0x2829F8u;
    SET_GPR_U32(ctx, 31, 0x282A00u);
    ctx->pc = 0x2829FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2829F8u;
            // 0x2829fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A00u; }
        if (ctx->pc != 0x282A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A00u; }
        if (ctx->pc != 0x282A00u) { return; }
    }
    ctx->pc = 0x282A00u;
label_282a00:
    // 0x282a00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x282a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_282a04:
    // 0x282a04: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x282a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_282a08:
    // 0x282a08: 0xc0a0738  jal         func_281CE0
label_282a0c:
    if (ctx->pc == 0x282A0Cu) {
        ctx->pc = 0x282A0Cu;
            // 0x282a0c: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x282A10u;
        goto label_282a10;
    }
    ctx->pc = 0x282A08u;
    SET_GPR_U32(ctx, 31, 0x282A10u);
    ctx->pc = 0x282A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A08u;
            // 0x282a0c: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A10u; }
        if (ctx->pc != 0x282A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281CE0_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A10u; }
        if (ctx->pc != 0x282A10u) { return; }
    }
    ctx->pc = 0x282A10u;
label_282a10:
    // 0x282a10: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_282a14:
    if (ctx->pc == 0x282A14u) {
        ctx->pc = 0x282A14u;
            // 0x282a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282A18u;
        goto label_282a18;
    }
    ctx->pc = 0x282A10u;
    {
        const bool branch_taken_0x282a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A10u;
            // 0x282a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a10) {
            ctx->pc = 0x282A50u;
            goto label_282a50;
        }
    }
    ctx->pc = 0x282A18u;
label_282a18:
    // 0x282a18: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_282a1c:
    if (ctx->pc == 0x282A1Cu) {
        ctx->pc = 0x282A20u;
        goto label_282a20;
    }
    ctx->pc = 0x282A18u;
    {
        const bool branch_taken_0x282a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a18) {
            ctx->pc = 0x282A2Cu;
            goto label_282a2c;
        }
    }
    ctx->pc = 0x282A20u;
label_282a20:
    // 0x282a20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x282a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_282a24:
    // 0x282a24: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_282a28:
    if (ctx->pc == 0x282A28u) {
        ctx->pc = 0x282A28u;
            // 0x282a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282A2Cu;
        goto label_282a2c;
    }
    ctx->pc = 0x282A24u;
    {
        const bool branch_taken_0x282a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x282A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A24u;
            // 0x282a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a24) {
            ctx->pc = 0x282A50u;
            goto label_282a50;
        }
    }
    ctx->pc = 0x282A2Cu;
label_282a2c:
    // 0x282a2c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_282a30:
    if (ctx->pc == 0x282A30u) {
        ctx->pc = 0x282A30u;
            // 0x282a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282A34u;
        goto label_282a34;
    }
    ctx->pc = 0x282A2Cu;
    {
        const bool branch_taken_0x282a2c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A2Cu;
            // 0x282a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a2c) {
            ctx->pc = 0x282A44u;
            goto label_282a44;
        }
    }
    ctx->pc = 0x282A34u;
label_282a34:
    // 0x282a34: 0xc0af16c  jal         func_2BC5B0
label_282a38:
    if (ctx->pc == 0x282A38u) {
        ctx->pc = 0x282A38u;
            // 0x282a38: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282A3Cu;
        goto label_282a3c;
    }
    ctx->pc = 0x282A34u;
    SET_GPR_U32(ctx, 31, 0x282A3Cu);
    ctx->pc = 0x282A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A34u;
            // 0x282a38: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A3Cu; }
        if (ctx->pc != 0x282A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A3Cu; }
        if (ctx->pc != 0x282A3Cu) { return; }
    }
    ctx->pc = 0x282A3Cu;
label_282a3c:
    // 0x282a3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_282a40:
    if (ctx->pc == 0x282A40u) {
        ctx->pc = 0x282A40u;
            // 0x282a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282A44u;
        goto label_282a44;
    }
    ctx->pc = 0x282A3Cu;
    {
        const bool branch_taken_0x282a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A3Cu;
            // 0x282a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a3c) {
            ctx->pc = 0x282A50u;
            goto label_282a50;
        }
    }
    ctx->pc = 0x282A44u;
label_282a44:
    // 0x282a44: 0xc0af176  jal         func_2BC5D8
label_282a48:
    if (ctx->pc == 0x282A48u) {
        ctx->pc = 0x282A48u;
            // 0x282a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282A4Cu;
        goto label_282a4c;
    }
    ctx->pc = 0x282A44u;
    SET_GPR_U32(ctx, 31, 0x282A4Cu);
    ctx->pc = 0x282A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282A44u;
            // 0x282a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A4Cu; }
        if (ctx->pc != 0x282A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A4Cu; }
        if (ctx->pc != 0x282A4Cu) { return; }
    }
    ctx->pc = 0x282A4Cu;
label_282a4c:
    // 0x282a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282a50:
    // 0x282a50: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x282a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_282a54:
    // 0x282a54: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x282a54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_282a58:
    // 0x282a58: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x282a58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_282a5c:
    // 0x282a5c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x282a5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_282a60:
    // 0x282a60: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x282a60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_282a64:
    // 0x282a64: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x282a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_282a68:
    // 0x282a68: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x282a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_282a6c:
    // 0x282a6c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x282a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_282a70:
    // 0x282a70: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x282a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_282a74:
    // 0x282a74: 0x3e00008  jr          $ra
label_282a78:
    if (ctx->pc == 0x282A78u) {
        ctx->pc = 0x282A78u;
            // 0x282a78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x282A7Cu;
        goto label_282a7c;
    }
    ctx->pc = 0x282A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282A74u;
            // 0x282a78: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282A7Cu;
label_282a7c:
    // 0x282a7c: 0x0  nop
    ctx->pc = 0x282a7cu;
    // NOP
    ctx->pc = 0x282a80u;
}
