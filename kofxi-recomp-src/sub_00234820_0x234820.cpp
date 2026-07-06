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

// Function: sub_00234820
// Address: 0x234820 - 0x234ac8
void sub_00234820_0x234820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234820_0x234820");
#endif

    switch (ctx->pc) {
        case 0x234820u: goto label_234820;
        case 0x234824u: goto label_234824;
        case 0x234828u: goto label_234828;
        case 0x23482cu: goto label_23482c;
        case 0x234830u: goto label_234830;
        case 0x234834u: goto label_234834;
        case 0x234838u: goto label_234838;
        case 0x23483cu: goto label_23483c;
        case 0x234840u: goto label_234840;
        case 0x234844u: goto label_234844;
        case 0x234848u: goto label_234848;
        case 0x23484cu: goto label_23484c;
        case 0x234850u: goto label_234850;
        case 0x234854u: goto label_234854;
        case 0x234858u: goto label_234858;
        case 0x23485cu: goto label_23485c;
        case 0x234860u: goto label_234860;
        case 0x234864u: goto label_234864;
        case 0x234868u: goto label_234868;
        case 0x23486cu: goto label_23486c;
        case 0x234870u: goto label_234870;
        case 0x234874u: goto label_234874;
        case 0x234878u: goto label_234878;
        case 0x23487cu: goto label_23487c;
        case 0x234880u: goto label_234880;
        case 0x234884u: goto label_234884;
        case 0x234888u: goto label_234888;
        case 0x23488cu: goto label_23488c;
        case 0x234890u: goto label_234890;
        case 0x234894u: goto label_234894;
        case 0x234898u: goto label_234898;
        case 0x23489cu: goto label_23489c;
        case 0x2348a0u: goto label_2348a0;
        case 0x2348a4u: goto label_2348a4;
        case 0x2348a8u: goto label_2348a8;
        case 0x2348acu: goto label_2348ac;
        case 0x2348b0u: goto label_2348b0;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348bcu: goto label_2348bc;
        case 0x2348c0u: goto label_2348c0;
        case 0x2348c4u: goto label_2348c4;
        case 0x2348c8u: goto label_2348c8;
        case 0x2348ccu: goto label_2348cc;
        case 0x2348d0u: goto label_2348d0;
        case 0x2348d4u: goto label_2348d4;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348dcu: goto label_2348dc;
        case 0x2348e0u: goto label_2348e0;
        case 0x2348e4u: goto label_2348e4;
        case 0x2348e8u: goto label_2348e8;
        case 0x2348ecu: goto label_2348ec;
        case 0x2348f0u: goto label_2348f0;
        case 0x2348f4u: goto label_2348f4;
        case 0x2348f8u: goto label_2348f8;
        case 0x2348fcu: goto label_2348fc;
        case 0x234900u: goto label_234900;
        case 0x234904u: goto label_234904;
        case 0x234908u: goto label_234908;
        case 0x23490cu: goto label_23490c;
        case 0x234910u: goto label_234910;
        case 0x234914u: goto label_234914;
        case 0x234918u: goto label_234918;
        case 0x23491cu: goto label_23491c;
        case 0x234920u: goto label_234920;
        case 0x234924u: goto label_234924;
        case 0x234928u: goto label_234928;
        case 0x23492cu: goto label_23492c;
        case 0x234930u: goto label_234930;
        case 0x234934u: goto label_234934;
        case 0x234938u: goto label_234938;
        case 0x23493cu: goto label_23493c;
        case 0x234940u: goto label_234940;
        case 0x234944u: goto label_234944;
        case 0x234948u: goto label_234948;
        case 0x23494cu: goto label_23494c;
        case 0x234950u: goto label_234950;
        case 0x234954u: goto label_234954;
        case 0x234958u: goto label_234958;
        case 0x23495cu: goto label_23495c;
        case 0x234960u: goto label_234960;
        case 0x234964u: goto label_234964;
        case 0x234968u: goto label_234968;
        case 0x23496cu: goto label_23496c;
        case 0x234970u: goto label_234970;
        case 0x234974u: goto label_234974;
        case 0x234978u: goto label_234978;
        case 0x23497cu: goto label_23497c;
        case 0x234980u: goto label_234980;
        case 0x234984u: goto label_234984;
        case 0x234988u: goto label_234988;
        case 0x23498cu: goto label_23498c;
        case 0x234990u: goto label_234990;
        case 0x234994u: goto label_234994;
        case 0x234998u: goto label_234998;
        case 0x23499cu: goto label_23499c;
        case 0x2349a0u: goto label_2349a0;
        case 0x2349a4u: goto label_2349a4;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349acu: goto label_2349ac;
        case 0x2349b0u: goto label_2349b0;
        case 0x2349b4u: goto label_2349b4;
        case 0x2349b8u: goto label_2349b8;
        case 0x2349bcu: goto label_2349bc;
        case 0x2349c0u: goto label_2349c0;
        case 0x2349c4u: goto label_2349c4;
        case 0x2349c8u: goto label_2349c8;
        case 0x2349ccu: goto label_2349cc;
        case 0x2349d0u: goto label_2349d0;
        case 0x2349d4u: goto label_2349d4;
        case 0x2349d8u: goto label_2349d8;
        case 0x2349dcu: goto label_2349dc;
        case 0x2349e0u: goto label_2349e0;
        case 0x2349e4u: goto label_2349e4;
        case 0x2349e8u: goto label_2349e8;
        case 0x2349ecu: goto label_2349ec;
        case 0x2349f0u: goto label_2349f0;
        case 0x2349f4u: goto label_2349f4;
        case 0x2349f8u: goto label_2349f8;
        case 0x2349fcu: goto label_2349fc;
        case 0x234a00u: goto label_234a00;
        case 0x234a04u: goto label_234a04;
        case 0x234a08u: goto label_234a08;
        case 0x234a0cu: goto label_234a0c;
        case 0x234a10u: goto label_234a10;
        case 0x234a14u: goto label_234a14;
        case 0x234a18u: goto label_234a18;
        case 0x234a1cu: goto label_234a1c;
        case 0x234a20u: goto label_234a20;
        case 0x234a24u: goto label_234a24;
        case 0x234a28u: goto label_234a28;
        case 0x234a2cu: goto label_234a2c;
        case 0x234a30u: goto label_234a30;
        case 0x234a34u: goto label_234a34;
        case 0x234a38u: goto label_234a38;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a40u: goto label_234a40;
        case 0x234a44u: goto label_234a44;
        case 0x234a48u: goto label_234a48;
        case 0x234a4cu: goto label_234a4c;
        case 0x234a50u: goto label_234a50;
        case 0x234a54u: goto label_234a54;
        case 0x234a58u: goto label_234a58;
        case 0x234a5cu: goto label_234a5c;
        case 0x234a60u: goto label_234a60;
        case 0x234a64u: goto label_234a64;
        case 0x234a68u: goto label_234a68;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a70u: goto label_234a70;
        case 0x234a74u: goto label_234a74;
        case 0x234a78u: goto label_234a78;
        case 0x234a7cu: goto label_234a7c;
        case 0x234a80u: goto label_234a80;
        case 0x234a84u: goto label_234a84;
        case 0x234a88u: goto label_234a88;
        case 0x234a8cu: goto label_234a8c;
        case 0x234a90u: goto label_234a90;
        case 0x234a94u: goto label_234a94;
        case 0x234a98u: goto label_234a98;
        case 0x234a9cu: goto label_234a9c;
        case 0x234aa0u: goto label_234aa0;
        case 0x234aa4u: goto label_234aa4;
        case 0x234aa8u: goto label_234aa8;
        case 0x234aacu: goto label_234aac;
        case 0x234ab0u: goto label_234ab0;
        case 0x234ab4u: goto label_234ab4;
        case 0x234ab8u: goto label_234ab8;
        case 0x234abcu: goto label_234abc;
        case 0x234ac0u: goto label_234ac0;
        case 0x234ac4u: goto label_234ac4;
        default: break;
    }

    ctx->pc = 0x234820u;

label_234820:
    // 0x234820: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x234820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_234824:
    // 0x234824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234828:
    // 0x234828: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x234828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
label_23482c:
    // 0x23482c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x23482cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_234830:
    // 0x234830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234834:
    // 0x234834: 0xffb50130  sd          $s5, 0x130($sp)
    ctx->pc = 0x234834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 21));
label_234838:
    // 0x234838: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x234838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
label_23483c:
    // 0x23483c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_234840:
    // 0x234840: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x234840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_234844:
    // 0x234844: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x234844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
label_234848:
    // 0x234848: 0xffb30110  sd          $s3, 0x110($sp)
    ctx->pc = 0x234848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 19));
label_23484c:
    // 0x23484c: 0xc049cb6  jal         func_1272D8
label_234850:
    if (ctx->pc == 0x234850u) {
        ctx->pc = 0x234850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23484Cu;
        // 0x234850: 0xffb100f0  sd          $s1, 0xF0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234854u;
        goto label_234854;
    }
    ctx->pc = 0x23484Cu;
    SET_GPR_U32(ctx, 31, 0x234854u);
    ctx->pc = 0x234850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23484Cu;
    // 0x234850: 0xffb100f0  sd          $s1, 0xF0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x23484Cu, 0x234854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234854u;
label_234854:
    // 0x234854: 0xc08c682  jal         func_231A08
label_234858:
    if (ctx->pc == 0x234858u) {
        ctx->pc = 0x23485Cu;
        goto label_23485c;
    }
    ctx->pc = 0x234854u;
    SET_GPR_U32(ctx, 31, 0x23485Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x234854u, 0x23485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23485Cu;
label_23485c:
    // 0x23485c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23485cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234860:
    // 0x234860: 0xc08d4e4  jal         func_235390
label_234864:
    if (ctx->pc == 0x234864u) {
        ctx->pc = 0x234864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234860u;
        // 0x234864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234868u;
        goto label_234868;
    }
    ctx->pc = 0x234860u;
    SET_GPR_U32(ctx, 31, 0x234868u);
    ctx->pc = 0x234864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234860u;
    // 0x234864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235390u, 0x234860u, 0x234868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234868u;
label_234868:
    // 0x234868: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x234868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23486c:
    // 0x23486c: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_234870:
    if (ctx->pc == 0x234870u) {
        ctx->pc = 0x234870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23486Cu;
        // 0x234870: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234874u;
        goto label_234874;
    }
    ctx->pc = 0x23486Cu;
    {
        const bool branch_taken_0x23486c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23486Cu;
        // 0x234870: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23486c) {
            ctx->pc = 0x234968u;
            goto label_234968;
        }
    }
    ctx->pc = 0x234874u;
label_234874:
    // 0x234874: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x234874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234878:
    // 0x234878: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_23487c:
    // 0x23487c: 0x90530001  lbu         $s3, 0x1($v0)
    ctx->pc = 0x23487cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_234880:
    // 0x234880: 0x16630015  bne         $s3, $v1, . + 4 + (0x15 << 2)
label_234884:
    if (ctx->pc == 0x234884u) {
        ctx->pc = 0x234884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234880u;
        // 0x234884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234888u;
        goto label_234888;
    }
    ctx->pc = 0x234880u;
    {
        const bool branch_taken_0x234880 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x234884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234880u;
        // 0x234884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234880) {
            ctx->pc = 0x2348D8u;
            goto label_2348d8;
        }
    }
    ctx->pc = 0x234888u;
label_234888:
    // 0x234888: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23488c:
    // 0x23488c: 0xc090f82  jal         func_243E08
label_234890:
    if (ctx->pc == 0x234890u) {
        ctx->pc = 0x234890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23488Cu;
        // 0x234890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234894u;
        goto label_234894;
    }
    ctx->pc = 0x23488Cu;
    SET_GPR_U32(ctx, 31, 0x234894u);
    ctx->pc = 0x234890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23488Cu;
    // 0x234890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E08u, 0x23488Cu, 0x234894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234894u;
label_234894:
    // 0x234894: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x234894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_234898:
    // 0x234898: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_23489c:
    if (ctx->pc == 0x23489Cu) {
        ctx->pc = 0x23489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234898u;
        // 0x23489c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348A0u;
        goto label_2348a0;
    }
    ctx->pc = 0x234898u;
    {
        const bool branch_taken_0x234898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234898u;
        // 0x23489c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234898) {
            ctx->pc = 0x2348A8u;
            goto label_2348a8;
        }
    }
    ctx->pc = 0x2348A0u;
label_2348a0:
    // 0x2348a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2348a4:
    if (ctx->pc == 0x2348A4u) {
        ctx->pc = 0x2348A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348A0u;
        // 0x2348a4: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348A8u;
        goto label_2348a8;
    }
    ctx->pc = 0x2348A0u;
    {
        const bool branch_taken_0x2348a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348A0u;
        // 0x2348a4: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348a0) {
            ctx->pc = 0x2348ACu;
            goto label_2348ac;
        }
    }
    ctx->pc = 0x2348A8u;
label_2348a8:
    // 0x2348a8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2348a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2348ac:
    // 0x2348ac: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2348acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2348b0:
    // 0x2348b0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2348b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2348b4:
    // 0x2348b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2348b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2348b8:
    // 0x2348b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2348b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2348bc:
    // 0x2348bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2348bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2348c0:
    // 0x2348c0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_2348c4:
    if (ctx->pc == 0x2348C4u) {
        ctx->pc = 0x2348C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348C0u;
        // 0x2348c4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348C8u;
        goto label_2348c8;
    }
    ctx->pc = 0x2348C0u;
    {
        const bool branch_taken_0x2348c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2348C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348C0u;
        // 0x2348c4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348c0) {
            ctx->pc = 0x234954u;
            goto label_234954;
        }
    }
    ctx->pc = 0x2348C8u;
label_2348c8:
    // 0x2348c8: 0xc090c82  jal         func_243208
label_2348cc:
    if (ctx->pc == 0x2348CCu) {
        ctx->pc = 0x2348CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348C8u;
        // 0x2348cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348D0u;
        goto label_2348d0;
    }
    ctx->pc = 0x2348C8u;
    SET_GPR_U32(ctx, 31, 0x2348D0u);
    ctx->pc = 0x2348CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348C8u;
    // 0x2348cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x2348C8u, 0x2348D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348D0u;
label_2348d0:
    // 0x2348d0: 0x10000021  b           . + 4 + (0x21 << 2)
label_2348d4:
    if (ctx->pc == 0x2348D4u) {
        ctx->pc = 0x2348D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348D0u;
        // 0x2348d4: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348D8u;
        goto label_2348d8;
    }
    ctx->pc = 0x2348D0u;
    {
        const bool branch_taken_0x2348d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348D0u;
        // 0x2348d4: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348d0) {
            ctx->pc = 0x234958u;
            goto label_234958;
        }
    }
    ctx->pc = 0x2348D8u;
label_2348d8:
    // 0x2348d8: 0xc08a136  jal         func_2284D8
label_2348dc:
    if (ctx->pc == 0x2348DCu) {
        ctx->pc = 0x2348DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348D8u;
        // 0x2348dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348E0u;
        goto label_2348e0;
    }
    ctx->pc = 0x2348D8u;
    SET_GPR_U32(ctx, 31, 0x2348E0u);
    ctx->pc = 0x2348DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348D8u;
    // 0x2348dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2284D8u, 0x2348D8u, 0x2348E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348E0u;
label_2348e0:
    // 0x2348e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2348e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2348e4:
    // 0x2348e4: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2348e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2348e8:
    // 0x2348e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2348e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2348ec:
    // 0x2348ec: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2348ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2348f0:
    // 0x2348f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2348f4:
    if (ctx->pc == 0x2348F4u) {
        ctx->pc = 0x2348F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348F0u;
        // 0x2348f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348F8u;
        goto label_2348f8;
    }
    ctx->pc = 0x2348F0u;
    {
        const bool branch_taken_0x2348f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348F0u;
        // 0x2348f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348f0) {
            ctx->pc = 0x234938u;
            goto label_234938;
        }
    }
    ctx->pc = 0x2348F8u;
label_2348f8:
    // 0x2348f8: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x2348f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_2348fc:
    // 0x2348fc: 0x0  nop
    ctx->pc = 0x2348fcu;
    // NOP
label_234900:
    // 0x234900: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x234900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_234904:
    // 0x234904: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_234908:
    if (ctx->pc == 0x234908u) {
        ctx->pc = 0x234908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234904u;
        // 0x234908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23490Cu;
        goto label_23490c;
    }
    ctx->pc = 0x234904u;
    {
        const bool branch_taken_0x234904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234904u;
        // 0x234908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234904) {
            ctx->pc = 0x234924u;
            goto label_234924;
        }
    }
    ctx->pc = 0x23490Cu;
label_23490c:
    // 0x23490c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x23490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_234910:
    // 0x234910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234914:
    // 0x234914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x234914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234918:
    // 0x234918: 0x40f809  jalr        $v0
label_23491c:
    if (ctx->pc == 0x23491Cu) {
        ctx->pc = 0x23491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234918u;
        // 0x23491c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234920u;
        goto label_234920;
    }
    ctx->pc = 0x234918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234920u);
        ctx->pc = 0x23491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234918u;
        // 0x23491c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234918u, 0x234920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234920u;
label_234920:
    // 0x234920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234924:
    // 0x234924: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x234924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_234928:
    // 0x234928: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_23492c:
    // 0x23492c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x23492cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_234930:
    // 0x234930: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_234934:
    if (ctx->pc == 0x234934u) {
        ctx->pc = 0x234934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234930u;
        // 0x234934: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234938u;
        goto label_234938;
    }
    ctx->pc = 0x234930u;
    {
        const bool branch_taken_0x234930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234930) {
            ctx->pc = 0x234934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234930u;
            // 0x234934: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234900;
        }
    }
    ctx->pc = 0x234938u;
label_234938:
    // 0x234938: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_23493c:
    if (ctx->pc == 0x23493Cu) {
        ctx->pc = 0x23493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234938u;
        // 0x23493c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234940u;
        goto label_234940;
    }
    ctx->pc = 0x234938u;
    {
        const bool branch_taken_0x234938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234938) {
            ctx->pc = 0x23493Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234938u;
            // 0x23493c: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234958u;
            goto label_234958;
        }
    }
    ctx->pc = 0x234940u;
label_234940:
    // 0x234940: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_234944:
    // 0x234944: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x234944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_234948:
    // 0x234948: 0x24a54ae8  addiu       $a1, $a1, 0x4AE8
    ctx->pc = 0x234948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19176));
label_23494c:
    // 0x23494c: 0xc08b5ac  jal         func_22D6B0
label_234950:
    if (ctx->pc == 0x234950u) {
        ctx->pc = 0x234950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23494Cu;
        // 0x234950: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234954u;
        goto label_234954;
    }
    ctx->pc = 0x23494Cu;
    SET_GPR_U32(ctx, 31, 0x234954u);
    ctx->pc = 0x234950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23494Cu;
    // 0x234950: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23494Cu, 0x234954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234954u;
label_234954:
    // 0x234954: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x234954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_234958:
    // 0x234958: 0x5600ffc7  bnel        $s0, $zero, . + 4 + (-0x39 << 2)
label_23495c:
    if (ctx->pc == 0x23495Cu) {
        ctx->pc = 0x23495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234958u;
        // 0x23495c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234960u;
        goto label_234960;
    }
    ctx->pc = 0x234958u;
    {
        const bool branch_taken_0x234958 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x234958) {
            ctx->pc = 0x23495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234958u;
            // 0x23495c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234878;
        }
    }
    ctx->pc = 0x234960u;
label_234960:
    // 0x234960: 0x10000002  b           . + 4 + (0x2 << 2)
label_234964:
    if (ctx->pc == 0x234964u) {
        ctx->pc = 0x234964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234960u;
        // 0x234964: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234968u;
        goto label_234968;
    }
    ctx->pc = 0x234960u;
    {
        const bool branch_taken_0x234960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234960u;
        // 0x234964: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234960) {
            ctx->pc = 0x23496Cu;
            goto label_23496c;
        }
    }
    ctx->pc = 0x234968u;
label_234968:
    // 0x234968: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_23496c:
    // 0x23496c: 0x3c130023  lui         $s3, 0x23
    ctx->pc = 0x23496cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
label_234970:
    // 0x234970: 0x2451ff10  addiu       $s1, $v0, -0xF0
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
label_234974:
    // 0x234974: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x234974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_234978:
    // 0x234978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x234978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23497c:
    // 0x23497c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_234980:
    if (ctx->pc == 0x234980u) {
        ctx->pc = 0x234980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23497Cu;
        // 0x234980: 0x26654a50  addiu       $a1, $s3, 0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 19024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234984u;
        goto label_234984;
    }
    ctx->pc = 0x23497Cu;
    {
        const bool branch_taken_0x23497c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23497Cu;
        // 0x234980: 0x26654a50  addiu       $a1, $s3, 0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 19024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23497c) {
            ctx->pc = 0x234990u;
            goto label_234990;
        }
    }
    ctx->pc = 0x234984u;
label_234984:
    // 0x234984: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x234984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_234988:
    // 0x234988: 0x40f809  jalr        $v0
label_23498c:
    if (ctx->pc == 0x23498Cu) {
        ctx->pc = 0x23498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234988u;
        // 0x23498c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234990u;
        goto label_234990;
    }
    ctx->pc = 0x234988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234990u);
        ctx->pc = 0x23498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234988u;
        // 0x23498c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234988u, 0x234990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234990u;
label_234990:
    // 0x234990: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x234990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_234994:
    // 0x234994: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_234998:
    if (ctx->pc == 0x234998u) {
        ctx->pc = 0x234998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234994u;
        // 0x234998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23499Cu;
        goto label_23499c;
    }
    ctx->pc = 0x234994u;
    {
        const bool branch_taken_0x234994 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x234998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234994u;
        // 0x234998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234994) {
            ctx->pc = 0x234978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234978;
        }
    }
    ctx->pc = 0x23499Cu;
label_23499c:
    // 0x23499c: 0x9642002c  lhu         $v0, 0x2C($s2)
    ctx->pc = 0x23499cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2349a0:
    // 0x2349a0: 0x8e85fcc0  lw          $a1, -0x340($s4)
    ctx->pc = 0x2349a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966464)));
label_2349a4:
    // 0x2349a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2349a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2349a8:
    // 0x2349a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2349a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2349ac:
    // 0x2349ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2349acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2349b0:
    // 0x2349b0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2349b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2349b4:
    // 0x2349b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2349b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2349b8:
    // 0x2349b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2349bc:
    if (ctx->pc == 0x2349BCu) {
        ctx->pc = 0x2349BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B8u;
        // 0x2349bc: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349C0u;
        goto label_2349c0;
    }
    ctx->pc = 0x2349B8u;
    {
        const bool branch_taken_0x2349b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2349BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B8u;
        // 0x2349bc: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349b8) {
            ctx->pc = 0x2349D8u;
            goto label_2349d8;
        }
    }
    ctx->pc = 0x2349C0u;
label_2349c0:
    // 0x2349c0: 0x9642002c  lhu         $v0, 0x2C($s2)
    ctx->pc = 0x2349c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2349c4:
    // 0x2349c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2349c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2349c8:
    // 0x2349c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2349c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2349cc:
    // 0x2349cc: 0xc090c82  jal         func_243208
label_2349d0:
    if (ctx->pc == 0x2349D0u) {
        ctx->pc = 0x2349D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349CCu;
        // 0x2349d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349D4u;
        goto label_2349d4;
    }
    ctx->pc = 0x2349CCu;
    SET_GPR_U32(ctx, 31, 0x2349D4u);
    ctx->pc = 0x2349D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349CCu;
    // 0x2349d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x2349CCu, 0x2349D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349D4u;
label_2349d4:
    // 0x2349d4: 0x0  nop
    ctx->pc = 0x2349d4u;
    // NOP
label_2349d8:
    // 0x2349d8: 0x9642002c  lhu         $v0, 0x2C($s2)
    ctx->pc = 0x2349d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_2349dc:
    // 0x2349dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2349dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2349e0:
    // 0x2349e0: 0x8e83fcc0  lw          $v1, -0x340($s4)
    ctx->pc = 0x2349e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966464)));
label_2349e4:
    // 0x2349e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2349e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2349e8:
    // 0x2349e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2349e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2349ec:
    // 0x2349ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2349ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2349f0:
    // 0x2349f0: 0xc0915fa  jal         func_2457E8
label_2349f4:
    if (ctx->pc == 0x2349F4u) {
        ctx->pc = 0x2349F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349F0u;
        // 0x2349f4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349F8u;
        goto label_2349f8;
    }
    ctx->pc = 0x2349F0u;
    SET_GPR_U32(ctx, 31, 0x2349F8u);
    ctx->pc = 0x2349F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349F0u;
    // 0x2349f4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2457E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2457E8u, 0x2349F0u, 0x2349F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349F8u;
label_2349f8:
    // 0x2349f8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2349f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2349fc:
    // 0x2349fc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_234a00:
    if (ctx->pc == 0x234A00u) {
        ctx->pc = 0x234A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349FCu;
        // 0x234a00: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A04u;
        goto label_234a04;
    }
    ctx->pc = 0x2349FCu;
    {
        const bool branch_taken_0x2349fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2349fc) {
            ctx->pc = 0x234A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2349FCu;
            // 0x234a00: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A10u;
            goto label_234a10;
        }
    }
    ctx->pc = 0x234A04u;
label_234a04:
    // 0x234a04: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x234a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_234a08:
    // 0x234a08: 0x10000003  b           . + 4 + (0x3 << 2)
label_234a0c:
    if (ctx->pc == 0x234A0Cu) {
        ctx->pc = 0x234A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A08u;
        // 0x234a0c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A10u;
        goto label_234a10;
    }
    ctx->pc = 0x234A08u;
    {
        const bool branch_taken_0x234a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A08u;
        // 0x234a0c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a08) {
            ctx->pc = 0x234A18u;
            goto label_234a18;
        }
    }
    ctx->pc = 0x234A10u;
label_234a10:
    // 0x234a10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_234a14:
    // 0x234a14: 0xac43fcd4  sw          $v1, -0x32C($v0)
    ctx->pc = 0x234a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966484), GPR_U32(ctx, 3));
label_234a18:
    // 0x234a18: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x234a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_234a1c:
    // 0x234a1c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x234a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_234a20:
    // 0x234a20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x234a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_234a24:
    // 0x234a24: 0xc08c698  jal         func_231A60
label_234a28:
    if (ctx->pc == 0x234A28u) {
        ctx->pc = 0x234A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A24u;
        // 0x234a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A2Cu;
        goto label_234a2c;
    }
    ctx->pc = 0x234A24u;
    SET_GPR_U32(ctx, 31, 0x234A2Cu);
    ctx->pc = 0x234A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A24u;
    // 0x234a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x234A24u, 0x234A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A2Cu;
label_234a2c:
    // 0x234a2c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x234a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_234a30:
    // 0x234a30: 0xdfb50130  ld          $s5, 0x130($sp)
    ctx->pc = 0x234a30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_234a34:
    // 0x234a34: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x234a34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_234a38:
    // 0x234a38: 0xdfb30110  ld          $s3, 0x110($sp)
    ctx->pc = 0x234a38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_234a3c:
    // 0x234a3c: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x234a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_234a40:
    // 0x234a40: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x234a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_234a44:
    // 0x234a44: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x234a44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_234a48:
    // 0x234a48: 0x3e00008  jr          $ra
label_234a4c:
    if (ctx->pc == 0x234A4Cu) {
        ctx->pc = 0x234A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A48u;
        // 0x234a4c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A50u;
        goto label_234a50;
    }
    ctx->pc = 0x234A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A48u;
        // 0x234a4c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234A50u;
label_234a50:
    // 0x234a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234a54:
    // 0x234a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234a58:
    // 0x234a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234a5c:
    // 0x234a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234a60:
    // 0x234a60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x234a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_234a64:
    // 0x234a64: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x234a64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_234a68:
    // 0x234a68: 0x16250011  bne         $s1, $a1, . + 4 + (0x11 << 2)
label_234a6c:
    if (ctx->pc == 0x234A6Cu) {
        ctx->pc = 0x234A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A68u;
        // 0x234a6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A70u;
        goto label_234a70;
    }
    ctx->pc = 0x234A68u;
    {
        const bool branch_taken_0x234a68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x234A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A68u;
        // 0x234a6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a68) {
            ctx->pc = 0x234AB0u;
            goto label_234ab0;
        }
    }
    ctx->pc = 0x234A70u;
label_234a70:
    // 0x234a70: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x234a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_234a74:
    // 0x234a74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234a78:
    // 0x234a78: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x234a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_234a7c:
    // 0x234a7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x234a7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234a80:
    // 0x234a80: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x234a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_234a84:
    // 0x234a84: 0xc090d8e  jal         func_243638
label_234a88:
    if (ctx->pc == 0x234A88u) {
        ctx->pc = 0x234A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A84u;
        // 0x234a88: 0x8e080034  lw          $t0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A8Cu;
        goto label_234a8c;
    }
    ctx->pc = 0x234A84u;
    SET_GPR_U32(ctx, 31, 0x234A8Cu);
    ctx->pc = 0x234A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A84u;
    // 0x234a88: 0x8e080034  lw          $t0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x234A84u, 0x234A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A8Cu;
label_234a8c:
    // 0x234a8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_234a90:
    if (ctx->pc == 0x234A90u) {
        ctx->pc = 0x234A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A8Cu;
        // 0x234a90: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A94u;
        goto label_234a94;
    }
    ctx->pc = 0x234A8Cu;
    {
        const bool branch_taken_0x234a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A8Cu;
        // 0x234a90: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a8c) {
            ctx->pc = 0x234AACu;
            goto label_234aac;
        }
    }
    ctx->pc = 0x234A94u;
label_234a94:
    // 0x234a94: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x234a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_234a98:
    // 0x234a98: 0x24a54b10  addiu       $a1, $a1, 0x4B10
    ctx->pc = 0x234a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19216));
label_234a9c:
    // 0x234a9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x234a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234aa0:
    // 0x234aa0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x234aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234aa4:
    // 0x234aa4: 0xc08b5ac  jal         func_22D6B0
label_234aa8:
    if (ctx->pc == 0x234AA8u) {
        ctx->pc = 0x234AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AA4u;
        // 0x234aa8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AACu;
        goto label_234aac;
    }
    ctx->pc = 0x234AA4u;
    SET_GPR_U32(ctx, 31, 0x234AACu);
    ctx->pc = 0x234AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AA4u;
    // 0x234aa8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x234AA4u, 0x234AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234AACu;
label_234aac:
    // 0x234aac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234ab0:
    // 0x234ab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234ab4:
    // 0x234ab4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x234ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234ab8:
    // 0x234ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234abc:
    // 0x234abc: 0x3e00008  jr          $ra
label_234ac0:
    if (ctx->pc == 0x234AC0u) {
        ctx->pc = 0x234AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ABCu;
        // 0x234ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AC4u;
        goto label_234ac4;
    }
    ctx->pc = 0x234ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ABCu;
        // 0x234ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234AC4u;
label_234ac4:
    // 0x234ac4: 0x0  nop
    ctx->pc = 0x234ac4u;
    // NOP
}
