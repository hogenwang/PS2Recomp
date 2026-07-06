#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4800
// Address: 0x1e4800 - 0x1e4a58
void sub_001E4800_0x1e4800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4800_0x1e4800");
#endif

    switch (ctx->pc) {
        case 0x1e4800u: goto label_1e4800;
        case 0x1e4804u: goto label_1e4804;
        case 0x1e4808u: goto label_1e4808;
        case 0x1e480cu: goto label_1e480c;
        case 0x1e4810u: goto label_1e4810;
        case 0x1e4814u: goto label_1e4814;
        case 0x1e4818u: goto label_1e4818;
        case 0x1e481cu: goto label_1e481c;
        case 0x1e4820u: goto label_1e4820;
        case 0x1e4824u: goto label_1e4824;
        case 0x1e4828u: goto label_1e4828;
        case 0x1e482cu: goto label_1e482c;
        case 0x1e4830u: goto label_1e4830;
        case 0x1e4834u: goto label_1e4834;
        case 0x1e4838u: goto label_1e4838;
        case 0x1e483cu: goto label_1e483c;
        case 0x1e4840u: goto label_1e4840;
        case 0x1e4844u: goto label_1e4844;
        case 0x1e4848u: goto label_1e4848;
        case 0x1e484cu: goto label_1e484c;
        case 0x1e4850u: goto label_1e4850;
        case 0x1e4854u: goto label_1e4854;
        case 0x1e4858u: goto label_1e4858;
        case 0x1e485cu: goto label_1e485c;
        case 0x1e4860u: goto label_1e4860;
        case 0x1e4864u: goto label_1e4864;
        case 0x1e4868u: goto label_1e4868;
        case 0x1e486cu: goto label_1e486c;
        case 0x1e4870u: goto label_1e4870;
        case 0x1e4874u: goto label_1e4874;
        case 0x1e4878u: goto label_1e4878;
        case 0x1e487cu: goto label_1e487c;
        case 0x1e4880u: goto label_1e4880;
        case 0x1e4884u: goto label_1e4884;
        case 0x1e4888u: goto label_1e4888;
        case 0x1e488cu: goto label_1e488c;
        case 0x1e4890u: goto label_1e4890;
        case 0x1e4894u: goto label_1e4894;
        case 0x1e4898u: goto label_1e4898;
        case 0x1e489cu: goto label_1e489c;
        case 0x1e48a0u: goto label_1e48a0;
        case 0x1e48a4u: goto label_1e48a4;
        case 0x1e48a8u: goto label_1e48a8;
        case 0x1e48acu: goto label_1e48ac;
        case 0x1e48b0u: goto label_1e48b0;
        case 0x1e48b4u: goto label_1e48b4;
        case 0x1e48b8u: goto label_1e48b8;
        case 0x1e48bcu: goto label_1e48bc;
        case 0x1e48c0u: goto label_1e48c0;
        case 0x1e48c4u: goto label_1e48c4;
        case 0x1e48c8u: goto label_1e48c8;
        case 0x1e48ccu: goto label_1e48cc;
        case 0x1e48d0u: goto label_1e48d0;
        case 0x1e48d4u: goto label_1e48d4;
        case 0x1e48d8u: goto label_1e48d8;
        case 0x1e48dcu: goto label_1e48dc;
        case 0x1e48e0u: goto label_1e48e0;
        case 0x1e48e4u: goto label_1e48e4;
        case 0x1e48e8u: goto label_1e48e8;
        case 0x1e48ecu: goto label_1e48ec;
        case 0x1e48f0u: goto label_1e48f0;
        case 0x1e48f4u: goto label_1e48f4;
        case 0x1e48f8u: goto label_1e48f8;
        case 0x1e48fcu: goto label_1e48fc;
        case 0x1e4900u: goto label_1e4900;
        case 0x1e4904u: goto label_1e4904;
        case 0x1e4908u: goto label_1e4908;
        case 0x1e490cu: goto label_1e490c;
        case 0x1e4910u: goto label_1e4910;
        case 0x1e4914u: goto label_1e4914;
        case 0x1e4918u: goto label_1e4918;
        case 0x1e491cu: goto label_1e491c;
        case 0x1e4920u: goto label_1e4920;
        case 0x1e4924u: goto label_1e4924;
        case 0x1e4928u: goto label_1e4928;
        case 0x1e492cu: goto label_1e492c;
        case 0x1e4930u: goto label_1e4930;
        case 0x1e4934u: goto label_1e4934;
        case 0x1e4938u: goto label_1e4938;
        case 0x1e493cu: goto label_1e493c;
        case 0x1e4940u: goto label_1e4940;
        case 0x1e4944u: goto label_1e4944;
        case 0x1e4948u: goto label_1e4948;
        case 0x1e494cu: goto label_1e494c;
        case 0x1e4950u: goto label_1e4950;
        case 0x1e4954u: goto label_1e4954;
        case 0x1e4958u: goto label_1e4958;
        case 0x1e495cu: goto label_1e495c;
        case 0x1e4960u: goto label_1e4960;
        case 0x1e4964u: goto label_1e4964;
        case 0x1e4968u: goto label_1e4968;
        case 0x1e496cu: goto label_1e496c;
        case 0x1e4970u: goto label_1e4970;
        case 0x1e4974u: goto label_1e4974;
        case 0x1e4978u: goto label_1e4978;
        case 0x1e497cu: goto label_1e497c;
        case 0x1e4980u: goto label_1e4980;
        case 0x1e4984u: goto label_1e4984;
        case 0x1e4988u: goto label_1e4988;
        case 0x1e498cu: goto label_1e498c;
        case 0x1e4990u: goto label_1e4990;
        case 0x1e4994u: goto label_1e4994;
        case 0x1e4998u: goto label_1e4998;
        case 0x1e499cu: goto label_1e499c;
        case 0x1e49a0u: goto label_1e49a0;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49a8u: goto label_1e49a8;
        case 0x1e49acu: goto label_1e49ac;
        case 0x1e49b0u: goto label_1e49b0;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49b8u: goto label_1e49b8;
        case 0x1e49bcu: goto label_1e49bc;
        case 0x1e49c0u: goto label_1e49c0;
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49c8u: goto label_1e49c8;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e49d4u: goto label_1e49d4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49dcu: goto label_1e49dc;
        case 0x1e49e0u: goto label_1e49e0;
        case 0x1e49e4u: goto label_1e49e4;
        case 0x1e49e8u: goto label_1e49e8;
        case 0x1e49ecu: goto label_1e49ec;
        case 0x1e49f0u: goto label_1e49f0;
        case 0x1e49f4u: goto label_1e49f4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        case 0x1e4a20u: goto label_1e4a20;
        case 0x1e4a24u: goto label_1e4a24;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a2cu: goto label_1e4a2c;
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a50u: goto label_1e4a50;
        case 0x1e4a54u: goto label_1e4a54;
        default: break;
    }

    ctx->pc = 0x1e4800u;

label_1e4800:
    // 0x1e4800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4804:
    // 0x1e4804: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e4804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4808:
    // 0x1e4808: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e4808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1e480c:
    // 0x1e480c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e480cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4810:
    // 0x1e4810: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e4810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1e4814:
    // 0x1e4814: 0x26110398  addiu       $s1, $s0, 0x398
    ctx->pc = 0x1e4814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 920));
label_1e4818:
    // 0x1e4818: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e4818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1e481c:
    // 0x1e481c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1e4820:
    // 0x1e4820: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e4820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e4824:
    // 0x1e4824: 0x8e120380  lw          $s2, 0x380($s0)
    ctx->pc = 0x1e4824u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_1e4828:
    // 0x1e4828: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e4828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e482c:
    // 0x1e482c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e4830:
    // 0x1e4830: 0x40f809  jalr        $v0
label_1e4834:
    if (ctx->pc == 0x1E4834u) {
        ctx->pc = 0x1E4834u;
            // 0x1e4834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4838u;
        goto label_1e4838;
    }
    ctx->pc = 0x1E4830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4838u);
        ctx->pc = 0x1E4834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4830u;
            // 0x1e4834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4838u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4838u; }
            if (ctx->pc != 0x1E4838u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4838u;
label_1e4838:
    // 0x1e4838: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e4838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1e483c:
    // 0x1e483c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1e483cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_1e4840:
    // 0x1e4840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e4840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4844:
    // 0x1e4844: 0x24a5dee0  addiu       $a1, $a1, -0x2120
    ctx->pc = 0x1e4844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958816));
label_1e4848:
    // 0x1e4848: 0x24c6dee8  addiu       $a2, $a2, -0x2118
    ctx->pc = 0x1e4848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958824));
label_1e484c:
    // 0x1e484c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e4850:
    // 0x1e4850: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1e4854:
    if (ctx->pc == 0x1E4854u) {
        ctx->pc = 0x1E4854u;
            // 0x1e4854: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E4858u;
        goto label_1e4858;
    }
    ctx->pc = 0x1E4850u;
    {
        const bool branch_taken_0x1e4850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4850u;
            // 0x1e4854: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4850) {
            ctx->pc = 0x1E4870u;
            goto label_1e4870;
        }
    }
    ctx->pc = 0x1E4858u;
label_1e4858:
    // 0x1e4858: 0x8e020384  lw          $v0, 0x384($s0)
    ctx->pc = 0x1e4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
label_1e485c:
    // 0x1e485c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1e485cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_1e4860:
    // 0x1e4860: 0xc07340e  jal         func_1CD038
label_1e4864:
    if (ctx->pc == 0x1E4864u) {
        ctx->pc = 0x1E4864u;
            // 0x1e4864: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4868u;
        goto label_1e4868;
    }
    ctx->pc = 0x1E4860u;
    SET_GPR_U32(ctx, 31, 0x1E4868u);
    ctx->pc = 0x1E4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4860u;
            // 0x1e4864: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD038u;
    if (runtime->hasFunction(0x1CD038u)) {
        auto targetFn = runtime->lookupFunction(0x1CD038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4868u; }
        if (ctx->pc != 0x1E4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD038_0x1cd038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4868u; }
        if (ctx->pc != 0x1E4868u) { return; }
    }
    ctx->pc = 0x1E4868u;
label_1e4868:
    // 0x1e4868: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e486c:
    if (ctx->pc == 0x1E486Cu) {
        ctx->pc = 0x1E486Cu;
            // 0x1e486c: 0x2613038c  addiu       $s3, $s0, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
        ctx->pc = 0x1E4870u;
        goto label_1e4870;
    }
    ctx->pc = 0x1E4868u;
    {
        const bool branch_taken_0x1e4868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4868u;
            // 0x1e486c: 0x2613038c  addiu       $s3, $s0, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4868) {
            ctx->pc = 0x1E4888u;
            goto label_1e4888;
        }
    }
    ctx->pc = 0x1E4870u;
label_1e4870:
    // 0x1e4870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4874:
    // 0x1e4874: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e4874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1e4878:
    // 0x1e4878: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e4878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e487c:
    // 0x1e487c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1e4880:
    if (ctx->pc == 0x1E4880u) {
        ctx->pc = 0x1E4880u;
            // 0x1e4880: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1E4884u;
        goto label_1e4884;
    }
    ctx->pc = 0x1E487Cu;
    {
        const bool branch_taken_0x1e487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E487Cu;
            // 0x1e4880: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e487c) {
            ctx->pc = 0x1E4930u;
            goto label_1e4930;
        }
    }
    ctx->pc = 0x1E4884u;
label_1e4884:
    // 0x1e4884: 0x0  nop
    ctx->pc = 0x1e4884u;
    // NOP
label_1e4888:
    // 0x1e4888: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e488c:
    // 0x1e488c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1e4890:
    if (ctx->pc == 0x1E4890u) {
        ctx->pc = 0x1E4890u;
            // 0x1e4890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4894u;
        goto label_1e4894;
    }
    ctx->pc = 0x1E488Cu;
    {
        const bool branch_taken_0x1e488c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E488Cu;
            // 0x1e4890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e488c) {
            ctx->pc = 0x1E4910u;
            goto label_1e4910;
        }
    }
    ctx->pc = 0x1E4894u;
label_1e4894:
    // 0x1e4894: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e4894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4898:
    // 0x1e4898: 0xc049c48  jal         func_127120
label_1e489c:
    if (ctx->pc == 0x1E489Cu) {
        ctx->pc = 0x1E489Cu;
            // 0x1e489c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1E48A0u;
        goto label_1e48a0;
    }
    ctx->pc = 0x1E4898u;
    SET_GPR_U32(ctx, 31, 0x1E48A0u);
    ctx->pc = 0x1E489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4898u;
            // 0x1e489c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48A0u; }
        if (ctx->pc != 0x1E48A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48A0u; }
        if (ctx->pc != 0x1E48A0u) { return; }
    }
    ctx->pc = 0x1E48A0u;
label_1e48a0:
    // 0x1e48a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e48a4:
    // 0x1e48a4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1e48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1e48a8:
    // 0x1e48a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e48ac:
    // 0x1e48ac: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1e48acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e48b0:
    // 0x1e48b0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e48b4:
    // 0x1e48b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e48b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e48b8:
    // 0x1e48b8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1e48b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1e48bc:
    // 0x1e48bc: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x1e48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_1e48c0:
    // 0x1e48c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e48c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e48c4:
    // 0x1e48c4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1e48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1e48c8:
    // 0x1e48c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e48c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e48cc:
    // 0x1e48cc: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x1e48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_1e48d0:
    // 0x1e48d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e48d4:
    // 0x1e48d4: 0x40f809  jalr        $v0
label_1e48d8:
    if (ctx->pc == 0x1E48D8u) {
        ctx->pc = 0x1E48D8u;
            // 0x1e48d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1E48DCu;
        goto label_1e48dc;
    }
    ctx->pc = 0x1E48D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E48DCu);
        ctx->pc = 0x1E48D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48D4u;
            // 0x1e48d8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E48DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E48DCu; }
            if (ctx->pc != 0x1E48DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E48DCu;
label_1e48dc:
    // 0x1e48dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e48e0:
    // 0x1e48e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e48e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e48e4:
    // 0x1e48e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e48e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e48e8:
    // 0x1e48e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1e48ec:
    // 0x1e48ec: 0x40f809  jalr        $v0
label_1e48f0:
    if (ctx->pc == 0x1E48F0u) {
        ctx->pc = 0x1E48F0u;
            // 0x1e48f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E48F4u;
        goto label_1e48f4;
    }
    ctx->pc = 0x1E48ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E48F4u);
        ctx->pc = 0x1E48F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48ECu;
            // 0x1e48f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E48F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E48F4u; }
            if (ctx->pc != 0x1E48F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E48F4u;
label_1e48f4:
    // 0x1e48f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e48f8:
    // 0x1e48f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1e48fc:
    // 0x1e48fc: 0x40f809  jalr        $v0
label_1e4900:
    if (ctx->pc == 0x1E4900u) {
        ctx->pc = 0x1E4900u;
            // 0x1e4900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4904u;
        goto label_1e4904;
    }
    ctx->pc = 0x1E48FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4904u);
        ctx->pc = 0x1E4900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48FCu;
            // 0x1e4900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4904u; }
            if (ctx->pc != 0x1E4904u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4904u;
label_1e4904:
    // 0x1e4904: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4908:
    if (ctx->pc == 0x1E4908u) {
        ctx->pc = 0x1E4908u;
            // 0x1e4908: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1E490Cu;
        goto label_1e490c;
    }
    ctx->pc = 0x1E4904u;
    {
        const bool branch_taken_0x1e4904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4904u;
            // 0x1e4908: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4904) {
            ctx->pc = 0x1E4934u;
            goto label_1e4934;
        }
    }
    ctx->pc = 0x1E490Cu;
label_1e490c:
    // 0x1e490c: 0x0  nop
    ctx->pc = 0x1e490cu;
    // NOP
label_1e4910:
    // 0x1e4910: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1e4910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1e4914:
    // 0x1e4914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4918:
    // 0x1e4918: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e491c:
    // 0x1e491c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4920:
    // 0x1e4920: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e4920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1e4924:
    // 0x1e4924: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e4924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1e4928:
    // 0x1e4928: 0xc079296  jal         func_1E4A58
label_1e492c:
    if (ctx->pc == 0x1E492Cu) {
        ctx->pc = 0x1E492Cu;
            // 0x1e492c: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x1E4930u;
        goto label_1e4930;
    }
    ctx->pc = 0x1E4928u;
    SET_GPR_U32(ctx, 31, 0x1E4930u);
    ctx->pc = 0x1E492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4928u;
            // 0x1e492c: 0xae250008  sw          $a1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4A58u;
    if (runtime->hasFunction(0x1E4A58u)) {
        auto targetFn = runtime->lookupFunction(0x1E4A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4930u; }
        if (ctx->pc != 0x1E4930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4A58_0x1e4a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4930u; }
        if (ctx->pc != 0x1E4930u) { return; }
    }
    ctx->pc = 0x1E4930u;
label_1e4930:
    // 0x1e4930: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e4930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4934:
    // 0x1e4934: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e4934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4938:
    // 0x1e4938: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e4938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e493c:
    // 0x1e493c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e493cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1e4940:
    // 0x1e4940: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e4940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4944:
    // 0x1e4944: 0x3e00008  jr          $ra
label_1e4948:
    if (ctx->pc == 0x1E4948u) {
        ctx->pc = 0x1E4948u;
            // 0x1e4948: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E494Cu;
        goto label_1e494c;
    }
    ctx->pc = 0x1E4944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4944u;
            // 0x1e4948: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E494Cu;
label_1e494c:
    // 0x1e494c: 0x0  nop
    ctx->pc = 0x1e494cu;
    // NOP
label_1e4950:
    // 0x1e4950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e4954:
    // 0x1e4954: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1e4958:
    // 0x1e4958: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e495c:
    // 0x1e495c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e495cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e4960:
    // 0x1e4960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e4960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1e4964:
    // 0x1e4964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e4968:
    // 0x1e4968: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1e4968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e496c:
    // 0x1e496c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e496cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e4970:
    // 0x1e4970: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e4970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e4974:
    // 0x1e4974: 0x2490038c  addiu       $s0, $a0, 0x38C
    ctx->pc = 0x1e4974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 908));
label_1e4978:
    // 0x1e4978: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e497c:
    if (ctx->pc == 0x1E497Cu) {
        ctx->pc = 0x1E497Cu;
            // 0x1e497c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4980u;
        goto label_1e4980;
    }
    ctx->pc = 0x1E4978u;
    {
        const bool branch_taken_0x1e4978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E497Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4978u;
            // 0x1e497c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4978) {
            ctx->pc = 0x1E498Cu;
            goto label_1e498c;
        }
    }
    ctx->pc = 0x1E4980u;
label_1e4980:
    // 0x1e4980: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e4984:
    // 0x1e4984: 0xc079afa  jal         func_1E6BE8
label_1e4988:
    if (ctx->pc == 0x1E4988u) {
        ctx->pc = 0x1E4988u;
            // 0x1e4988: 0x2484def0  addiu       $a0, $a0, -0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958832));
        ctx->pc = 0x1E498Cu;
        goto label_1e498c;
    }
    ctx->pc = 0x1E4984u;
    SET_GPR_U32(ctx, 31, 0x1E498Cu);
    ctx->pc = 0x1E4988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4984u;
            // 0x1e4988: 0x2484def0  addiu       $a0, $a0, -0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E498Cu; }
        if (ctx->pc != 0x1E498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E498Cu; }
        if (ctx->pc != 0x1E498Cu) { return; }
    }
    ctx->pc = 0x1E498Cu;
label_1e498c:
    // 0x1e498c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1e498cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1e4990:
    // 0x1e4990: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1e4990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1e4994:
    // 0x1e4994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e4998:
    // 0x1e4998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e499c:
    // 0x1e499c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e499cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e49a0:
    // 0x1e49a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e49a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e49a4:
    // 0x1e49a4: 0x3e00008  jr          $ra
label_1e49a8:
    if (ctx->pc == 0x1E49A8u) {
        ctx->pc = 0x1E49A8u;
            // 0x1e49a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E49ACu;
        goto label_1e49ac;
    }
    ctx->pc = 0x1E49A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E49A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49A4u;
            // 0x1e49a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E49ACu;
label_1e49ac:
    // 0x1e49ac: 0x0  nop
    ctx->pc = 0x1e49acu;
    // NOP
label_1e49b0:
    // 0x1e49b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e49b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e49b4:
    // 0x1e49b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e49b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e49b8:
    // 0x1e49b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e49b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1e49bc:
    // 0x1e49bc: 0x24430398  addiu       $v1, $v0, 0x398
    ctx->pc = 0x1e49bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 920));
label_1e49c0:
    // 0x1e49c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e49c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1e49c4:
    // 0x1e49c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e49c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e49c8:
    // 0x1e49c8: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e49cc:
    // 0x1e49cc: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_1e49d0:
    if (ctx->pc == 0x1E49D0u) {
        ctx->pc = 0x1E49D0u;
            // 0x1e49d0: 0x8c5000a8  lw          $s0, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->pc = 0x1E49D4u;
        goto label_1e49d4;
    }
    ctx->pc = 0x1E49CCu;
    {
        const bool branch_taken_0x1e49cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E49D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49CCu;
            // 0x1e49d0: 0x8c5000a8  lw          $s0, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49cc) {
            ctx->pc = 0x1E49F0u;
            goto label_1e49f0;
        }
    }
    ctx->pc = 0x1E49D4u;
label_1e49d4:
    // 0x1e49d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e49d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e49d8:
    // 0x1e49d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e49d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e49dc:
    // 0x1e49dc: 0xc080692  jal         func_201A48
label_1e49e0:
    if (ctx->pc == 0x1E49E0u) {
        ctx->pc = 0x1E49E0u;
            // 0x1e49e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E49E4u;
        goto label_1e49e4;
    }
    ctx->pc = 0x1E49DCu;
    SET_GPR_U32(ctx, 31, 0x1E49E4u);
    ctx->pc = 0x1E49E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49DCu;
            // 0x1e49e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201A48u;
    if (runtime->hasFunction(0x201A48u)) {
        auto targetFn = runtime->lookupFunction(0x201A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49E4u; }
        if (ctx->pc != 0x1E49E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201A48_0x201a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49E4u; }
        if (ctx->pc != 0x1E49E4u) { return; }
    }
    ctx->pc = 0x1E49E4u;
label_1e49e4:
    // 0x1e49e4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1e49e8:
    if (ctx->pc == 0x1E49E8u) {
        ctx->pc = 0x1E49E8u;
            // 0x1e49e8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E49ECu;
        goto label_1e49ec;
    }
    ctx->pc = 0x1E49E4u;
    {
        const bool branch_taken_0x1e49e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49E4u;
            // 0x1e49e8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49e4) {
            ctx->pc = 0x1E4A4Cu;
            goto label_1e4a4c;
        }
    }
    ctx->pc = 0x1E49ECu;
label_1e49ec:
    // 0x1e49ec: 0x0  nop
    ctx->pc = 0x1e49ecu;
    // NOP
label_1e49f0:
    // 0x1e49f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e49f4:
    // 0x1e49f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1e49f8:
    // 0x1e49f8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1e49f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_1e49fc:
    // 0x1e49fc: 0x24a5df28  addiu       $a1, $a1, -0x20D8
    ctx->pc = 0x1e49fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958888));
label_1e4a00:
    // 0x1e4a00: 0x24c6df30  addiu       $a2, $a2, -0x20D0
    ctx->pc = 0x1e4a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958896));
label_1e4a04:
    // 0x1e4a04: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1e4a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e4a08:
    // 0x1e4a08: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1e4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_1e4a0c:
    // 0x1e4a0c: 0xc07340e  jal         func_1CD038
label_1e4a10:
    if (ctx->pc == 0x1E4A10u) {
        ctx->pc = 0x1E4A10u;
            // 0x1e4a10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4A14u;
        goto label_1e4a14;
    }
    ctx->pc = 0x1E4A0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A14u);
    ctx->pc = 0x1E4A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A0Cu;
            // 0x1e4a10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD038u;
    if (runtime->hasFunction(0x1CD038u)) {
        auto targetFn = runtime->lookupFunction(0x1CD038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A14u; }
        if (ctx->pc != 0x1E4A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD038_0x1cd038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A14u; }
        if (ctx->pc != 0x1E4A14u) { return; }
    }
    ctx->pc = 0x1E4A14u;
label_1e4a14:
    // 0x1e4a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a18:
    // 0x1e4a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a1c:
    // 0x1e4a1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e4a20:
    if (ctx->pc == 0x1E4A20u) {
        ctx->pc = 0x1E4A20u;
            // 0x1e4a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A24u;
        goto label_1e4a24;
    }
    ctx->pc = 0x1E4A1Cu;
    {
        const bool branch_taken_0x1e4a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A1Cu;
            // 0x1e4a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a1c) {
            ctx->pc = 0x1E4A38u;
            goto label_1e4a38;
        }
    }
    ctx->pc = 0x1E4A24u;
label_1e4a24:
    // 0x1e4a24: 0xc080692  jal         func_201A48
label_1e4a28:
    if (ctx->pc == 0x1E4A28u) {
        ctx->pc = 0x1E4A2Cu;
        goto label_1e4a2c;
    }
    ctx->pc = 0x1E4A24u;
    SET_GPR_U32(ctx, 31, 0x1E4A2Cu);
    ctx->pc = 0x201A48u;
    if (runtime->hasFunction(0x201A48u)) {
        auto targetFn = runtime->lookupFunction(0x201A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A2Cu; }
        if (ctx->pc != 0x1E4A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201A48_0x201a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A2Cu; }
        if (ctx->pc != 0x1E4A2Cu) { return; }
    }
    ctx->pc = 0x1E4A2Cu;
label_1e4a2c:
    // 0x1e4a2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e4a30:
    if (ctx->pc == 0x1E4A30u) {
        ctx->pc = 0x1E4A30u;
            // 0x1e4a30: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E4A34u;
        goto label_1e4a34;
    }
    ctx->pc = 0x1E4A2Cu;
    {
        const bool branch_taken_0x1e4a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A2Cu;
            // 0x1e4a30: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a2c) {
            ctx->pc = 0x1E4A4Cu;
            goto label_1e4a4c;
        }
    }
    ctx->pc = 0x1E4A34u;
label_1e4a34:
    // 0x1e4a34: 0x0  nop
    ctx->pc = 0x1e4a34u;
    // NOP
label_1e4a38:
    // 0x1e4a38: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4a3c:
    // 0x1e4a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a40:
    // 0x1e4a40: 0xc080692  jal         func_201A48
label_1e4a44:
    if (ctx->pc == 0x1E4A44u) {
        ctx->pc = 0x1E4A44u;
            // 0x1e4a44: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1E4A48u;
        goto label_1e4a48;
    }
    ctx->pc = 0x1E4A40u;
    SET_GPR_U32(ctx, 31, 0x1E4A48u);
    ctx->pc = 0x1E4A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A40u;
            // 0x1e4a44: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201A48u;
    if (runtime->hasFunction(0x201A48u)) {
        auto targetFn = runtime->lookupFunction(0x201A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A48u; }
        if (ctx->pc != 0x1E4A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201A48_0x201a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A48u; }
        if (ctx->pc != 0x1E4A48u) { return; }
    }
    ctx->pc = 0x1E4A48u;
label_1e4a48:
    // 0x1e4a48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e4a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4a4c:
    // 0x1e4a4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e4a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1e4a50:
    // 0x1e4a50: 0x3e00008  jr          $ra
label_1e4a54:
    if (ctx->pc == 0x1E4A54u) {
        ctx->pc = 0x1E4A54u;
            // 0x1e4a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4A58u;
        goto label_fallthrough_0x1e4a50;
    }
    ctx->pc = 0x1E4A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A50u;
            // 0x1e4a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4a50:
    ctx->pc = 0x1E4A58u;
    ctx->pc = 0x1e4a58u;
}
