#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC7F8
// Address: 0x1bc7f8 - 0x1bcb48
void sub_001BC7F8_0x1bc7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC7F8_0x1bc7f8");
#endif

    switch (ctx->pc) {
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc7fcu: goto label_1bc7fc;
        case 0x1bc800u: goto label_1bc800;
        case 0x1bc804u: goto label_1bc804;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc80cu: goto label_1bc80c;
        case 0x1bc810u: goto label_1bc810;
        case 0x1bc814u: goto label_1bc814;
        case 0x1bc818u: goto label_1bc818;
        case 0x1bc81cu: goto label_1bc81c;
        case 0x1bc820u: goto label_1bc820;
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc828u: goto label_1bc828;
        case 0x1bc82cu: goto label_1bc82c;
        case 0x1bc830u: goto label_1bc830;
        case 0x1bc834u: goto label_1bc834;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc83cu: goto label_1bc83c;
        case 0x1bc840u: goto label_1bc840;
        case 0x1bc844u: goto label_1bc844;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc84cu: goto label_1bc84c;
        case 0x1bc850u: goto label_1bc850;
        case 0x1bc854u: goto label_1bc854;
        case 0x1bc858u: goto label_1bc858;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc860u: goto label_1bc860;
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc868u: goto label_1bc868;
        case 0x1bc86cu: goto label_1bc86c;
        case 0x1bc870u: goto label_1bc870;
        case 0x1bc874u: goto label_1bc874;
        case 0x1bc878u: goto label_1bc878;
        case 0x1bc87cu: goto label_1bc87c;
        case 0x1bc880u: goto label_1bc880;
        case 0x1bc884u: goto label_1bc884;
        case 0x1bc888u: goto label_1bc888;
        case 0x1bc88cu: goto label_1bc88c;
        case 0x1bc890u: goto label_1bc890;
        case 0x1bc894u: goto label_1bc894;
        case 0x1bc898u: goto label_1bc898;
        case 0x1bc89cu: goto label_1bc89c;
        case 0x1bc8a0u: goto label_1bc8a0;
        case 0x1bc8a4u: goto label_1bc8a4;
        case 0x1bc8a8u: goto label_1bc8a8;
        case 0x1bc8acu: goto label_1bc8ac;
        case 0x1bc8b0u: goto label_1bc8b0;
        case 0x1bc8b4u: goto label_1bc8b4;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8bcu: goto label_1bc8bc;
        case 0x1bc8c0u: goto label_1bc8c0;
        case 0x1bc8c4u: goto label_1bc8c4;
        case 0x1bc8c8u: goto label_1bc8c8;
        case 0x1bc8ccu: goto label_1bc8cc;
        case 0x1bc8d0u: goto label_1bc8d0;
        case 0x1bc8d4u: goto label_1bc8d4;
        case 0x1bc8d8u: goto label_1bc8d8;
        case 0x1bc8dcu: goto label_1bc8dc;
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8e4u: goto label_1bc8e4;
        case 0x1bc8e8u: goto label_1bc8e8;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc8f0u: goto label_1bc8f0;
        case 0x1bc8f4u: goto label_1bc8f4;
        case 0x1bc8f8u: goto label_1bc8f8;
        case 0x1bc8fcu: goto label_1bc8fc;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc904u: goto label_1bc904;
        case 0x1bc908u: goto label_1bc908;
        case 0x1bc90cu: goto label_1bc90c;
        case 0x1bc910u: goto label_1bc910;
        case 0x1bc914u: goto label_1bc914;
        case 0x1bc918u: goto label_1bc918;
        case 0x1bc91cu: goto label_1bc91c;
        case 0x1bc920u: goto label_1bc920;
        case 0x1bc924u: goto label_1bc924;
        case 0x1bc928u: goto label_1bc928;
        case 0x1bc92cu: goto label_1bc92c;
        case 0x1bc930u: goto label_1bc930;
        case 0x1bc934u: goto label_1bc934;
        case 0x1bc938u: goto label_1bc938;
        case 0x1bc93cu: goto label_1bc93c;
        case 0x1bc940u: goto label_1bc940;
        case 0x1bc944u: goto label_1bc944;
        case 0x1bc948u: goto label_1bc948;
        case 0x1bc94cu: goto label_1bc94c;
        case 0x1bc950u: goto label_1bc950;
        case 0x1bc954u: goto label_1bc954;
        case 0x1bc958u: goto label_1bc958;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc960u: goto label_1bc960;
        case 0x1bc964u: goto label_1bc964;
        case 0x1bc968u: goto label_1bc968;
        case 0x1bc96cu: goto label_1bc96c;
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc974u: goto label_1bc974;
        case 0x1bc978u: goto label_1bc978;
        case 0x1bc97cu: goto label_1bc97c;
        case 0x1bc980u: goto label_1bc980;
        case 0x1bc984u: goto label_1bc984;
        case 0x1bc988u: goto label_1bc988;
        case 0x1bc98cu: goto label_1bc98c;
        case 0x1bc990u: goto label_1bc990;
        case 0x1bc994u: goto label_1bc994;
        case 0x1bc998u: goto label_1bc998;
        case 0x1bc99cu: goto label_1bc99c;
        case 0x1bc9a0u: goto label_1bc9a0;
        case 0x1bc9a4u: goto label_1bc9a4;
        case 0x1bc9a8u: goto label_1bc9a8;
        case 0x1bc9acu: goto label_1bc9ac;
        case 0x1bc9b0u: goto label_1bc9b0;
        case 0x1bc9b4u: goto label_1bc9b4;
        case 0x1bc9b8u: goto label_1bc9b8;
        case 0x1bc9bcu: goto label_1bc9bc;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9c4u: goto label_1bc9c4;
        case 0x1bc9c8u: goto label_1bc9c8;
        case 0x1bc9ccu: goto label_1bc9cc;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9d4u: goto label_1bc9d4;
        case 0x1bc9d8u: goto label_1bc9d8;
        case 0x1bc9dcu: goto label_1bc9dc;
        case 0x1bc9e0u: goto label_1bc9e0;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bc9e8u: goto label_1bc9e8;
        case 0x1bc9ecu: goto label_1bc9ec;
        case 0x1bc9f0u: goto label_1bc9f0;
        case 0x1bc9f4u: goto label_1bc9f4;
        case 0x1bc9f8u: goto label_1bc9f8;
        case 0x1bc9fcu: goto label_1bc9fc;
        case 0x1bca00u: goto label_1bca00;
        case 0x1bca04u: goto label_1bca04;
        case 0x1bca08u: goto label_1bca08;
        case 0x1bca0cu: goto label_1bca0c;
        case 0x1bca10u: goto label_1bca10;
        case 0x1bca14u: goto label_1bca14;
        case 0x1bca18u: goto label_1bca18;
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca20u: goto label_1bca20;
        case 0x1bca24u: goto label_1bca24;
        case 0x1bca28u: goto label_1bca28;
        case 0x1bca2cu: goto label_1bca2c;
        case 0x1bca30u: goto label_1bca30;
        case 0x1bca34u: goto label_1bca34;
        case 0x1bca38u: goto label_1bca38;
        case 0x1bca3cu: goto label_1bca3c;
        case 0x1bca40u: goto label_1bca40;
        case 0x1bca44u: goto label_1bca44;
        case 0x1bca48u: goto label_1bca48;
        case 0x1bca4cu: goto label_1bca4c;
        case 0x1bca50u: goto label_1bca50;
        case 0x1bca54u: goto label_1bca54;
        case 0x1bca58u: goto label_1bca58;
        case 0x1bca5cu: goto label_1bca5c;
        case 0x1bca60u: goto label_1bca60;
        case 0x1bca64u: goto label_1bca64;
        case 0x1bca68u: goto label_1bca68;
        case 0x1bca6cu: goto label_1bca6c;
        case 0x1bca70u: goto label_1bca70;
        case 0x1bca74u: goto label_1bca74;
        case 0x1bca78u: goto label_1bca78;
        case 0x1bca7cu: goto label_1bca7c;
        case 0x1bca80u: goto label_1bca80;
        case 0x1bca84u: goto label_1bca84;
        case 0x1bca88u: goto label_1bca88;
        case 0x1bca8cu: goto label_1bca8c;
        case 0x1bca90u: goto label_1bca90;
        case 0x1bca94u: goto label_1bca94;
        case 0x1bca98u: goto label_1bca98;
        case 0x1bca9cu: goto label_1bca9c;
        case 0x1bcaa0u: goto label_1bcaa0;
        case 0x1bcaa4u: goto label_1bcaa4;
        case 0x1bcaa8u: goto label_1bcaa8;
        case 0x1bcaacu: goto label_1bcaac;
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcab4u: goto label_1bcab4;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac0u: goto label_1bcac0;
        case 0x1bcac4u: goto label_1bcac4;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcaccu: goto label_1bcacc;
        case 0x1bcad0u: goto label_1bcad0;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcae4u: goto label_1bcae4;
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaecu: goto label_1bcaec;
        case 0x1bcaf0u: goto label_1bcaf0;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcafcu: goto label_1bcafc;
        case 0x1bcb00u: goto label_1bcb00;
        case 0x1bcb04u: goto label_1bcb04;
        case 0x1bcb08u: goto label_1bcb08;
        case 0x1bcb0cu: goto label_1bcb0c;
        case 0x1bcb10u: goto label_1bcb10;
        case 0x1bcb14u: goto label_1bcb14;
        case 0x1bcb18u: goto label_1bcb18;
        case 0x1bcb1cu: goto label_1bcb1c;
        case 0x1bcb20u: goto label_1bcb20;
        case 0x1bcb24u: goto label_1bcb24;
        case 0x1bcb28u: goto label_1bcb28;
        case 0x1bcb2cu: goto label_1bcb2c;
        case 0x1bcb30u: goto label_1bcb30;
        case 0x1bcb34u: goto label_1bcb34;
        case 0x1bcb38u: goto label_1bcb38;
        case 0x1bcb3cu: goto label_1bcb3c;
        case 0x1bcb40u: goto label_1bcb40;
        case 0x1bcb44u: goto label_1bcb44;
        default: break;
    }

    ctx->pc = 0x1bc7f8u;

label_1bc7f8:
    // 0x1bc7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bc7fc:
    // 0x1bc7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc800:
    // 0x1bc800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc804:
    // 0x1bc804: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bc804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1bc808:
    // 0x1bc808: 0xc06d89c  jal         func_1B6270
label_1bc80c:
    if (ctx->pc == 0x1BC80Cu) {
        ctx->pc = 0x1BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC808u;
        // 0x1bc80c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC810u;
        goto label_1bc810;
    }
    ctx->pc = 0x1BC808u;
    SET_GPR_U32(ctx, 31, 0x1BC810u);
    ctx->pc = 0x1BC80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC808u;
    // 0x1bc80c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6270u, 0x1BC808u, 0x1BC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC810u;
label_1bc810:
    // 0x1bc810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc814:
    // 0x1bc814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc818:
    // 0x1bc818: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1bc81c:
    if (ctx->pc == 0x1BC81Cu) {
        ctx->pc = 0x1BC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC818u;
        // 0x1bc81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC820u;
        goto label_1bc820;
    }
    ctx->pc = 0x1BC818u;
    {
        const bool branch_taken_0x1bc818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC818u;
        // 0x1bc81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc818) {
            ctx->pc = 0x1BC838u;
            goto label_1bc838;
        }
    }
    ctx->pc = 0x1BC820u;
label_1bc820:
    // 0x1bc820: 0x84860042  lh          $a2, 0x42($a0)
    ctx->pc = 0x1bc820u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
label_1bc824:
    // 0x1bc824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc828:
    // 0x1bc828: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc82c:
    // 0x1bc82c: 0x806e75a  j           func_1B9D68
label_1bc830:
    if (ctx->pc == 0x1BC830u) {
        ctx->pc = 0x1BC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC82Cu;
        // 0x1bc830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC834u;
        goto label_1bc834;
    }
    ctx->pc = 0x1BC82Cu;
    ctx->pc = 0x1BC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC82Cu;
    // 0x1bc830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    sub_001B9D68_0x1b9d68(rdram, ctx, runtime); return;
    ctx->pc = 0x1BC834u;
label_1bc834:
    // 0x1bc834: 0x0  nop
    ctx->pc = 0x1bc834u;
    // NOP
label_1bc838:
    // 0x1bc838: 0x86060042  lh          $a2, 0x42($s0)
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_1bc83c:
    // 0x1bc83c: 0xc06e75a  jal         func_1B9D68
label_1bc840:
    if (ctx->pc == 0x1BC840u) {
        ctx->pc = 0x1BC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC83Cu;
        // 0x1bc840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC844u;
        goto label_1bc844;
    }
    ctx->pc = 0x1BC83Cu;
    SET_GPR_U32(ctx, 31, 0x1BC844u);
    ctx->pc = 0x1BC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC83Cu;
    // 0x1bc840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D68u, 0x1BC83Cu, 0x1BC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC844u;
label_1bc844:
    // 0x1bc844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc848:
    // 0x1bc848: 0x84860044  lh          $a2, 0x44($a0)
    ctx->pc = 0x1bc848u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
label_1bc84c:
    // 0x1bc84c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc850:
    // 0x1bc850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc854:
    // 0x1bc854: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bc854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc858:
    // 0x1bc858: 0x806e75a  j           func_1B9D68
label_1bc85c:
    if (ctx->pc == 0x1BC85Cu) {
        ctx->pc = 0x1BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC858u;
        // 0x1bc85c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC860u;
        goto label_1bc860;
    }
    ctx->pc = 0x1BC858u;
    ctx->pc = 0x1BC85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC858u;
    // 0x1bc85c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    sub_001B9D68_0x1b9d68(rdram, ctx, runtime); return;
    ctx->pc = 0x1BC860u;
label_1bc860:
    // 0x1bc860: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bc860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1bc864:
    // 0x1bc864: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1bc864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1bc868:
    // 0x1bc868: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bc868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc86c:
    // 0x1bc86c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1bc86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1bc870:
    // 0x1bc870: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1bc870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1bc874:
    // 0x1bc874: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1bc874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1bc878:
    // 0x1bc878: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1bc878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_1bc87c:
    // 0x1bc87c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1bc87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_1bc880:
    // 0x1bc880: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1bc880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1bc884:
    // 0x1bc884: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1bc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_1bc888:
    // 0x1bc888: 0x82820098  lb          $v0, 0x98($s4)
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
label_1bc88c:
    // 0x1bc88c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1bc88cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1bc890:
    // 0x1bc890: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_1bc894:
    if (ctx->pc == 0x1BC894u) {
        ctx->pc = 0x1BC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC890u;
        // 0x1bc894: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC898u;
        goto label_1bc898;
    }
    ctx->pc = 0x1BC890u;
    {
        const bool branch_taken_0x1bc890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC890u;
        // 0x1bc894: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc890) {
            ctx->pc = 0x1BCB1Cu;
            goto label_1bcb1c;
        }
    }
    ctx->pc = 0x1BC898u;
label_1bc898:
    // 0x1bc898: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bc898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc89c:
    // 0x1bc89c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1bc89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1bc8a0:
    // 0x1bc8a0: 0xa7a00042  sh          $zero, 0x42($sp)
    ctx->pc = 0x1bc8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
label_1bc8a4:
    // 0x1bc8a4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1bc8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8a8:
    // 0x1bc8a8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1bc8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1bc8ac:
    // 0x1bc8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8b0:
    // 0x1bc8b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc8b4:
    // 0x1bc8b4: 0x60f809  jalr        $v1
label_1bc8b8:
    if (ctx->pc == 0x1BC8B8u) {
        ctx->pc = 0x1BC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8B4u;
        // 0x1bc8b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8BCu;
        goto label_1bc8bc;
    }
    ctx->pc = 0x1BC8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BC8BCu);
        ctx->pc = 0x1BC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8B4u;
        // 0x1bc8b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC8B4u, 0x1BC8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC8BCu;
label_1bc8bc:
    // 0x1bc8bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc8c0:
    // 0x1bc8c0: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x1bc8c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bc8c4:
    // 0x1bc8c4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1bc8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1bc8c8:
    // 0x1bc8c8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1bc8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1bc8cc:
    // 0x1bc8cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8d0:
    // 0x1bc8d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc8d4:
    // 0x1bc8d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1bc8d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1bc8d8:
    // 0x1bc8d8: 0x60f809  jalr        $v1
label_1bc8dc:
    if (ctx->pc == 0x1BC8DCu) {
        ctx->pc = 0x1BC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D8u;
        // 0x1bc8dc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8E0u;
        goto label_1bc8e0;
    }
    ctx->pc = 0x1BC8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BC8E0u);
        ctx->pc = 0x1BC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D8u;
        // 0x1bc8dc: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC8D8u, 0x1BC8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC8E0u;
label_1bc8e0:
    // 0x1bc8e0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x1bc8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bc8e4:
    // 0x1bc8e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1bc8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc8e8:
    // 0x1bc8e8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bc8ec:
    // 0x1bc8ec: 0xc06b75e  jal         func_1ADD78
label_1bc8f0:
    if (ctx->pc == 0x1BC8F0u) {
        ctx->pc = 0x1BC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8ECu;
        // 0x1bc8f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8F4u;
        goto label_1bc8f4;
    }
    ctx->pc = 0x1BC8ECu;
    SET_GPR_U32(ctx, 31, 0x1BC8F4u);
    ctx->pc = 0x1BC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8ECu;
    // 0x1bc8f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADD78u, 0x1BC8ECu, 0x1BC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8F4u;
label_1bc8f4:
    // 0x1bc8f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1bc8f8:
    if (ctx->pc == 0x1BC8F8u) {
        ctx->pc = 0x1BC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8F4u;
        // 0x1bc8f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8FCu;
        goto label_1bc8fc;
    }
    ctx->pc = 0x1BC8F4u;
    {
        const bool branch_taken_0x1bc8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8F4u;
        // 0x1bc8f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8f4) {
            ctx->pc = 0x1BC940u;
            goto label_1bc940;
        }
    }
    ctx->pc = 0x1BC8FCu;
label_1bc8fc:
    // 0x1bc8fc: 0xc06ed86  jal         func_1BB618
label_1bc900:
    if (ctx->pc == 0x1BC900u) {
        ctx->pc = 0x1BC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8FCu;
        // 0x1bc900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC904u;
        goto label_1bc904;
    }
    ctx->pc = 0x1BC8FCu;
    SET_GPR_U32(ctx, 31, 0x1BC904u);
    ctx->pc = 0x1BC900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8FCu;
    // 0x1bc900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB618u, 0x1BC8FCu, 0x1BC904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC904u;
label_1bc904:
    // 0x1bc904: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bc904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc908:
    // 0x1bc908: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bc908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bc90c:
    // 0x1bc90c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc910:
    // 0x1bc910: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bc910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bc914:
    // 0x1bc914: 0x40f809  jalr        $v0
label_1bc918:
    if (ctx->pc == 0x1BC918u) {
        ctx->pc = 0x1BC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC914u;
        // 0x1bc918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC91Cu;
        goto label_1bc91c;
    }
    ctx->pc = 0x1BC914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC91Cu);
        ctx->pc = 0x1BC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC914u;
        // 0x1bc918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC914u, 0x1BC91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC91Cu;
label_1bc91c:
    // 0x1bc91c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bc91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc920:
    // 0x1bc920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc924:
    // 0x1bc924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc928:
    // 0x1bc928: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bc928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bc92c:
    // 0x1bc92c: 0x40f809  jalr        $v0
label_1bc930:
    if (ctx->pc == 0x1BC930u) {
        ctx->pc = 0x1BC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC92Cu;
        // 0x1bc930: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC934u;
        goto label_1bc934;
    }
    ctx->pc = 0x1BC92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC934u);
        ctx->pc = 0x1BC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC92Cu;
        // 0x1bc930: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC92Cu, 0x1BC934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC934u;
label_1bc934:
    // 0x1bc934: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1bc938:
    if (ctx->pc == 0x1BC938u) {
        ctx->pc = 0x1BC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC934u;
        // 0x1bc938: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC93Cu;
        goto label_1bc93c;
    }
    ctx->pc = 0x1BC934u;
    {
        const bool branch_taken_0x1bc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC934u;
        // 0x1bc938: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc934) {
            ctx->pc = 0x1BCB20u;
            goto label_1bcb20;
        }
    }
    ctx->pc = 0x1BC93Cu;
label_1bc93c:
    // 0x1bc93c: 0x0  nop
    ctx->pc = 0x1bc93cu;
    // NOP
label_1bc940:
    // 0x1bc940: 0x87b00040  lh          $s0, 0x40($sp)
    ctx->pc = 0x1bc940u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc944:
    // 0x1bc944: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bc944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bc948:
    // 0x1bc948: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1bc948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc94c:
    // 0x1bc94c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1bc94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bc950:
    // 0x1bc950: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1bc950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1bc954:
    // 0x1bc954: 0xc06b4f6  jal         func_1AD3D8
label_1bc958:
    if (ctx->pc == 0x1BC958u) {
        ctx->pc = 0x1BC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC954u;
        // 0x1bc958: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC95Cu;
        goto label_1bc95c;
    }
    ctx->pc = 0x1BC954u;
    SET_GPR_U32(ctx, 31, 0x1BC95Cu);
    ctx->pc = 0x1BC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC954u;
    // 0x1bc958: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD3D8u, 0x1BC954u, 0x1BC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC95Cu;
label_1bc95c:
    // 0x1bc95c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bc95cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc960:
    // 0x1bc960: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1bc964:
    if (ctx->pc == 0x1BC964u) {
        ctx->pc = 0x1BC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC960u;
        // 0x1bc964: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC968u;
        goto label_1bc968;
    }
    ctx->pc = 0x1BC960u;
    {
        const bool branch_taken_0x1bc960 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC960u;
        // 0x1bc964: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc960) {
            ctx->pc = 0x1BC97Cu;
            goto label_1bc97c;
        }
    }
    ctx->pc = 0x1BC968u;
label_1bc968:
    // 0x1bc968: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bc968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc96c:
    // 0x1bc96c: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x1bc96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_1bc970:
    // 0x1bc970: 0xc06b4f6  jal         func_1AD3D8
label_1bc974:
    if (ctx->pc == 0x1BC974u) {
        ctx->pc = 0x1BC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC970u;
        // 0x1bc974: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC978u;
        goto label_1bc978;
    }
    ctx->pc = 0x1BC970u;
    SET_GPR_U32(ctx, 31, 0x1BC978u);
    ctx->pc = 0x1BC974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC970u;
    // 0x1bc974: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD3D8u, 0x1BC970u, 0x1BC978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC978u;
label_1bc978:
    // 0x1bc978: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc97c:
    // 0x1bc97c: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_1bc980:
    // 0x1bc980: 0x87b60042  lh          $s6, 0x42($sp)
    ctx->pc = 0x1bc980u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_1bc984:
    // 0x1bc984: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_1bc988:
    if (ctx->pc == 0x1BC988u) {
        ctx->pc = 0x1BC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC984u;
        // 0x1bc988: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC98Cu;
        goto label_1bc98c;
    }
    ctx->pc = 0x1BC984u;
    {
        const bool branch_taken_0x1bc984 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC984u;
        // 0x1bc988: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc984) {
            ctx->pc = 0x1BC9C8u;
            goto label_1bc9c8;
        }
    }
    ctx->pc = 0x1BC98Cu;
label_1bc98c:
    // 0x1bc98c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_1bc990:
    if (ctx->pc == 0x1BC990u) {
        ctx->pc = 0x1BC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC98Cu;
        // 0x1bc990: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC994u;
        goto label_1bc994;
    }
    ctx->pc = 0x1BC98Cu;
    {
        const bool branch_taken_0x1bc98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC98Cu;
        // 0x1bc990: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc98c) {
            ctx->pc = 0x1BCA30u;
            goto label_1bca30;
        }
    }
    ctx->pc = 0x1BC994u;
label_1bc994:
    // 0x1bc994: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bc994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc998:
    // 0x1bc998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc99c:
    // 0x1bc99c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bc99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bc9a0:
    // 0x1bc9a0: 0x40f809  jalr        $v0
label_1bc9a4:
    if (ctx->pc == 0x1BC9A4u) {
        ctx->pc = 0x1BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A0u;
        // 0x1bc9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9A8u;
        goto label_1bc9a8;
    }
    ctx->pc = 0x1BC9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC9A8u);
        ctx->pc = 0x1BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A0u;
        // 0x1bc9a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC9A0u, 0x1BC9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC9A8u;
label_1bc9a8:
    // 0x1bc9a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc9ac:
    // 0x1bc9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9b0:
    // 0x1bc9b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc9b4:
    // 0x1bc9b4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bc9b8:
    // 0x1bc9b8: 0x40f809  jalr        $v0
label_1bc9bc:
    if (ctx->pc == 0x1BC9BCu) {
        ctx->pc = 0x1BC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9B8u;
        // 0x1bc9bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9C0u;
        goto label_1bc9c0;
    }
    ctx->pc = 0x1BC9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC9C0u);
        ctx->pc = 0x1BC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9B8u;
        // 0x1bc9bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC9B8u, 0x1BC9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC9C0u;
label_1bc9c0:
    // 0x1bc9c0: 0x10000044  b           . + 4 + (0x44 << 2)
label_1bc9c4:
    if (ctx->pc == 0x1BC9C4u) {
        ctx->pc = 0x1BC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C0u;
        // 0x1bc9c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9C8u;
        goto label_1bc9c8;
    }
    ctx->pc = 0x1BC9C0u;
    {
        const bool branch_taken_0x1bc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C0u;
        // 0x1bc9c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9c0) {
            ctx->pc = 0x1BCAD4u;
            goto label_1bcad4;
        }
    }
    ctx->pc = 0x1BC9C8u;
label_1bc9c8:
    // 0x1bc9c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc9cc:
    // 0x1bc9cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bc9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9d0:
    // 0x1bc9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9d4:
    // 0x1bc9d4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bc9d8:
    // 0x1bc9d8: 0x40f809  jalr        $v0
label_1bc9dc:
    if (ctx->pc == 0x1BC9DCu) {
        ctx->pc = 0x1BC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9D8u;
        // 0x1bc9dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9E0u;
        goto label_1bc9e0;
    }
    ctx->pc = 0x1BC9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC9E0u);
        ctx->pc = 0x1BC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9D8u;
        // 0x1bc9dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC9D8u, 0x1BC9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC9E0u;
label_1bc9e0:
    // 0x1bc9e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bc9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9e4:
    // 0x1bc9e4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bc9e8:
    // 0x1bc9e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bc9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9ec:
    // 0x1bc9ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bc9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9f0:
    // 0x1bc9f0: 0xc07337e  jal         func_1CCDF8
label_1bc9f4:
    if (ctx->pc == 0x1BC9F4u) {
        ctx->pc = 0x1BC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9F0u;
        // 0x1bc9f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9F8u;
        goto label_1bc9f8;
    }
    ctx->pc = 0x1BC9F0u;
    SET_GPR_U32(ctx, 31, 0x1BC9F8u);
    ctx->pc = 0x1BC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9F0u;
    // 0x1bc9f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1BC9F0u, 0x1BC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9F8u;
label_1bc9f8:
    // 0x1bc9f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bc9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bc9fc:
    // 0x1bc9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bca00:
    // 0x1bca00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bca00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bca04:
    // 0x1bca04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bca08:
    // 0x1bca08: 0x40f809  jalr        $v0
label_1bca0c:
    if (ctx->pc == 0x1BCA0Cu) {
        ctx->pc = 0x1BCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA08u;
        // 0x1bca0c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA10u;
        goto label_1bca10;
    }
    ctx->pc = 0x1BCA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCA10u);
        ctx->pc = 0x1BCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA08u;
        // 0x1bca0c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA08u, 0x1BCA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCA10u;
label_1bca10:
    // 0x1bca10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bca14:
    // 0x1bca14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bca18:
    // 0x1bca18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bca18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bca1c:
    // 0x1bca1c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bca20:
    // 0x1bca20: 0x40f809  jalr        $v0
label_1bca24:
    if (ctx->pc == 0x1BCA24u) {
        ctx->pc = 0x1BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA20u;
        // 0x1bca24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA28u;
        goto label_1bca28;
    }
    ctx->pc = 0x1BCA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCA28u);
        ctx->pc = 0x1BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA20u;
        // 0x1bca24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA20u, 0x1BCA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCA28u;
label_1bca28:
    // 0x1bca28: 0x10000019  b           . + 4 + (0x19 << 2)
label_1bca2c:
    if (ctx->pc == 0x1BCA2Cu) {
        ctx->pc = 0x1BCA30u;
        goto label_1bca30;
    }
    ctx->pc = 0x1BCA28u;
    {
        const bool branch_taken_0x1bca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bca28) {
            ctx->pc = 0x1BCA90u;
            goto label_1bca90;
        }
    }
    ctx->pc = 0x1BCA30u;
label_1bca30:
    // 0x1bca30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bca34:
    // 0x1bca34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bca34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bca38:
    // 0x1bca38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bca3c:
    // 0x1bca3c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bca40:
    // 0x1bca40: 0x40f809  jalr        $v0
label_1bca44:
    if (ctx->pc == 0x1BCA44u) {
        ctx->pc = 0x1BCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA40u;
        // 0x1bca44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA48u;
        goto label_1bca48;
    }
    ctx->pc = 0x1BCA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCA48u);
        ctx->pc = 0x1BCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA40u;
        // 0x1bca44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA40u, 0x1BCA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCA48u;
label_1bca48:
    // 0x1bca48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bca48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bca4c:
    // 0x1bca4c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1bca4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bca50:
    // 0x1bca50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1bca50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1bca54:
    // 0x1bca54: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bca54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bca58:
    // 0x1bca58: 0xc07337e  jal         func_1CCDF8
label_1bca5c:
    if (ctx->pc == 0x1BCA5Cu) {
        ctx->pc = 0x1BCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA58u;
        // 0x1bca5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA60u;
        goto label_1bca60;
    }
    ctx->pc = 0x1BCA58u;
    SET_GPR_U32(ctx, 31, 0x1BCA60u);
    ctx->pc = 0x1BCA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA58u;
    // 0x1bca5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1BCA58u, 0x1BCA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA60u;
label_1bca60:
    // 0x1bca60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bca64:
    // 0x1bca64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bca64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bca68:
    // 0x1bca68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bca6c:
    // 0x1bca6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bca70:
    // 0x1bca70: 0x40f809  jalr        $v0
label_1bca74:
    if (ctx->pc == 0x1BCA74u) {
        ctx->pc = 0x1BCA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA70u;
        // 0x1bca74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA78u;
        goto label_1bca78;
    }
    ctx->pc = 0x1BCA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCA78u);
        ctx->pc = 0x1BCA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA70u;
        // 0x1bca74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA70u, 0x1BCA78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCA78u;
label_1bca78:
    // 0x1bca78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bca7c:
    // 0x1bca7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bca80:
    // 0x1bca80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bca80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bca84:
    // 0x1bca84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1bca84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1bca88:
    // 0x1bca88: 0x40f809  jalr        $v0
label_1bca8c:
    if (ctx->pc == 0x1BCA8Cu) {
        ctx->pc = 0x1BCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA88u;
        // 0x1bca8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA90u;
        goto label_1bca90;
    }
    ctx->pc = 0x1BCA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCA90u);
        ctx->pc = 0x1BCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA88u;
        // 0x1bca8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA88u, 0x1BCA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCA90u;
label_1bca90:
    // 0x1bca90: 0xc06d830  jal         func_1B60C0
label_1bca94:
    if (ctx->pc == 0x1BCA94u) {
        ctx->pc = 0x1BCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA90u;
        // 0x1bca94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA98u;
        goto label_1bca98;
    }
    ctx->pc = 0x1BCA90u;
    SET_GPR_U32(ctx, 31, 0x1BCA98u);
    ctx->pc = 0x1BCA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA90u;
    // 0x1bca94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B60C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B60C0u, 0x1BCA90u, 0x1BCA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA98u;
label_1bca98:
    // 0x1bca98: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x1bca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_1bca9c:
    // 0x1bca9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bca9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bcaa0:
    // 0x1bcaa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bcaa4:
    // 0x1bcaa4: 0xc06d484  jal         func_1B5210
label_1bcaa8:
    if (ctx->pc == 0x1BCAA8u) {
        ctx->pc = 0x1BCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAA4u;
        // 0x1bcaa8: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAACu;
        goto label_1bcaac;
    }
    ctx->pc = 0x1BCAA4u;
    SET_GPR_U32(ctx, 31, 0x1BCAACu);
    ctx->pc = 0x1BCAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAA4u;
    // 0x1bcaa8: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5210u, 0x1BCAA4u, 0x1BCAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAACu;
label_1bcaac:
    // 0x1bcaac: 0xc06d478  jal         func_1B51E0
label_1bcab0:
    if (ctx->pc == 0x1BCAB0u) {
        ctx->pc = 0x1BCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAACu;
        // 0x1bcab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAB4u;
        goto label_1bcab4;
    }
    ctx->pc = 0x1BCAACu;
    SET_GPR_U32(ctx, 31, 0x1BCAB4u);
    ctx->pc = 0x1BCAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAACu;
    // 0x1bcab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B51E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B51E0u, 0x1BCAACu, 0x1BCAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAB4u;
label_1bcab4:
    // 0x1bcab4: 0xc06d748  jal         func_1B5D20
label_1bcab8:
    if (ctx->pc == 0x1BCAB8u) {
        ctx->pc = 0x1BCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAB4u;
        // 0x1bcab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCABCu;
        goto label_1bcabc;
    }
    ctx->pc = 0x1BCAB4u;
    SET_GPR_U32(ctx, 31, 0x1BCABCu);
    ctx->pc = 0x1BCAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAB4u;
    // 0x1bcab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5D20u, 0x1BCAB4u, 0x1BCABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCABCu;
label_1bcabc:
    // 0x1bcabc: 0xc06d446  jal         func_1B5118
label_1bcac0:
    if (ctx->pc == 0x1BCAC0u) {
        ctx->pc = 0x1BCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCABCu;
        // 0x1bcac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAC4u;
        goto label_1bcac4;
    }
    ctx->pc = 0x1BCABCu;
    SET_GPR_U32(ctx, 31, 0x1BCAC4u);
    ctx->pc = 0x1BCAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCABCu;
    // 0x1bcac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5118u, 0x1BCABCu, 0x1BCAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAC4u;
label_1bcac4:
    // 0x1bcac4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bcac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcac8:
    // 0x1bcac8: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_1bcacc:
    if (ctx->pc == 0x1BCACCu) {
        ctx->pc = 0x1BCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAC8u;
        // 0x1bcacc: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAD0u;
        goto label_1bcad0;
    }
    ctx->pc = 0x1BCAC8u;
    {
        const bool branch_taken_0x1bcac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bcac8) {
            ctx->pc = 0x1BCACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCAC8u;
            // 0x1bcacc: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCAE8u;
            goto label_1bcae8;
        }
    }
    ctx->pc = 0x1BCAD0u;
label_1bcad0:
    // 0x1bcad0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bcad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bcad4:
    // 0x1bcad4: 0xc06ed86  jal         func_1BB618
label_1bcad8:
    if (ctx->pc == 0x1BCAD8u) {
        ctx->pc = 0x1BCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAD4u;
        // 0x1bcad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCADCu;
        goto label_1bcadc;
    }
    ctx->pc = 0x1BCAD4u;
    SET_GPR_U32(ctx, 31, 0x1BCADCu);
    ctx->pc = 0x1BCAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAD4u;
    // 0x1bcad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB618u, 0x1BCAD4u, 0x1BCADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCADCu;
label_1bcadc:
    // 0x1bcadc: 0x10000010  b           . + 4 + (0x10 << 2)
label_1bcae0:
    if (ctx->pc == 0x1BCAE0u) {
        ctx->pc = 0x1BCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCADCu;
        // 0x1bcae0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAE4u;
        goto label_1bcae4;
    }
    ctx->pc = 0x1BCADCu;
    {
        const bool branch_taken_0x1bcadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCADCu;
        // 0x1bcae0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcadc) {
            ctx->pc = 0x1BCB20u;
            goto label_1bcb20;
        }
    }
    ctx->pc = 0x1BCAE4u;
label_1bcae4:
    // 0x1bcae4: 0x0  nop
    ctx->pc = 0x1bcae4u;
    // NOP
label_1bcae8:
    // 0x1bcae8: 0xc06d45c  jal         func_1B5170
label_1bcaec:
    if (ctx->pc == 0x1BCAECu) {
        ctx->pc = 0x1BCAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAE8u;
        // 0x1bcaec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAF0u;
        goto label_1bcaf0;
    }
    ctx->pc = 0x1BCAE8u;
    SET_GPR_U32(ctx, 31, 0x1BCAF0u);
    ctx->pc = 0x1BCAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAE8u;
    // 0x1bcaec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5170u, 0x1BCAE8u, 0x1BCAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAF0u;
label_1bcaf0:
    // 0x1bcaf0: 0xc06d8b4  jal         func_1B62D0
label_1bcaf4:
    if (ctx->pc == 0x1BCAF4u) {
        ctx->pc = 0x1BCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAF0u;
        // 0x1bcaf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAF8u;
        goto label_1bcaf8;
    }
    ctx->pc = 0x1BCAF0u;
    SET_GPR_U32(ctx, 31, 0x1BCAF8u);
    ctx->pc = 0x1BCAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAF0u;
    // 0x1bcaf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62D0u, 0x1BCAF0u, 0x1BCAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAF8u;
label_1bcaf8:
    // 0x1bcaf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bcaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bcafc:
    // 0x1bcafc: 0xc06d884  jal         func_1B6210
label_1bcb00:
    if (ctx->pc == 0x1BCB00u) {
        ctx->pc = 0x1BCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAFCu;
        // 0x1bcb00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB04u;
        goto label_1bcb04;
    }
    ctx->pc = 0x1BCAFCu;
    SET_GPR_U32(ctx, 31, 0x1BCB04u);
    ctx->pc = 0x1BCB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAFCu;
    // 0x1bcb00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6210u, 0x1BCAFCu, 0x1BCB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB04u;
label_1bcb04:
    // 0x1bcb04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bcb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb08:
    // 0x1bcb08: 0xc06d88c  jal         func_1B6230
label_1bcb0c:
    if (ctx->pc == 0x1BCB0Cu) {
        ctx->pc = 0x1BCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB08u;
        // 0x1bcb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB10u;
        goto label_1bcb10;
    }
    ctx->pc = 0x1BCB08u;
    SET_GPR_U32(ctx, 31, 0x1BCB10u);
    ctx->pc = 0x1BCB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB08u;
    // 0x1bcb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6230u, 0x1BCB08u, 0x1BCB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB10u;
label_1bcb10:
    // 0x1bcb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bcb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb14:
    // 0x1bcb14: 0xc06d888  jal         func_1B6220
label_1bcb18:
    if (ctx->pc == 0x1BCB18u) {
        ctx->pc = 0x1BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB14u;
        // 0x1bcb18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB1Cu;
        goto label_1bcb1c;
    }
    ctx->pc = 0x1BCB14u;
    SET_GPR_U32(ctx, 31, 0x1BCB1Cu);
    ctx->pc = 0x1BCB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB14u;
    // 0x1bcb18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6220u, 0x1BCB14u, 0x1BCB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB1Cu;
label_1bcb1c:
    // 0x1bcb1c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1bcb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bcb20:
    // 0x1bcb20: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1bcb20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1bcb24:
    // 0x1bcb24: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1bcb24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bcb28:
    // 0x1bcb28: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1bcb28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1bcb2c:
    // 0x1bcb2c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1bcb2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bcb30:
    // 0x1bcb30: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1bcb30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1bcb34:
    // 0x1bcb34: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1bcb34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1bcb38:
    // 0x1bcb38: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1bcb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1bcb3c:
    // 0x1bcb3c: 0x3e00008  jr          $ra
label_1bcb40:
    if (ctx->pc == 0x1BCB40u) {
        ctx->pc = 0x1BCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB3Cu;
        // 0x1bcb40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB44u;
        goto label_1bcb44;
    }
    ctx->pc = 0x1BCB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB3Cu;
        // 0x1bcb40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCB44u;
label_1bcb44:
    // 0x1bcb44: 0x0  nop
    ctx->pc = 0x1bcb44u;
    // NOP
}
