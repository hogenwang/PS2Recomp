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

// Function: sub_0015C870
// Address: 0x15c870 - 0x15ca40
void sub_0015C870_0x15c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C870_0x15c870");
#endif

    switch (ctx->pc) {
        case 0x15c870u: goto label_15c870;
        case 0x15c874u: goto label_15c874;
        case 0x15c878u: goto label_15c878;
        case 0x15c87cu: goto label_15c87c;
        case 0x15c880u: goto label_15c880;
        case 0x15c884u: goto label_15c884;
        case 0x15c888u: goto label_15c888;
        case 0x15c88cu: goto label_15c88c;
        case 0x15c890u: goto label_15c890;
        case 0x15c894u: goto label_15c894;
        case 0x15c898u: goto label_15c898;
        case 0x15c89cu: goto label_15c89c;
        case 0x15c8a0u: goto label_15c8a0;
        case 0x15c8a4u: goto label_15c8a4;
        case 0x15c8a8u: goto label_15c8a8;
        case 0x15c8acu: goto label_15c8ac;
        case 0x15c8b0u: goto label_15c8b0;
        case 0x15c8b4u: goto label_15c8b4;
        case 0x15c8b8u: goto label_15c8b8;
        case 0x15c8bcu: goto label_15c8bc;
        case 0x15c8c0u: goto label_15c8c0;
        case 0x15c8c4u: goto label_15c8c4;
        case 0x15c8c8u: goto label_15c8c8;
        case 0x15c8ccu: goto label_15c8cc;
        case 0x15c8d0u: goto label_15c8d0;
        case 0x15c8d4u: goto label_15c8d4;
        case 0x15c8d8u: goto label_15c8d8;
        case 0x15c8dcu: goto label_15c8dc;
        case 0x15c8e0u: goto label_15c8e0;
        case 0x15c8e4u: goto label_15c8e4;
        case 0x15c8e8u: goto label_15c8e8;
        case 0x15c8ecu: goto label_15c8ec;
        case 0x15c8f0u: goto label_15c8f0;
        case 0x15c8f4u: goto label_15c8f4;
        case 0x15c8f8u: goto label_15c8f8;
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c900u: goto label_15c900;
        case 0x15c904u: goto label_15c904;
        case 0x15c908u: goto label_15c908;
        case 0x15c90cu: goto label_15c90c;
        case 0x15c910u: goto label_15c910;
        case 0x15c914u: goto label_15c914;
        case 0x15c918u: goto label_15c918;
        case 0x15c91cu: goto label_15c91c;
        case 0x15c920u: goto label_15c920;
        case 0x15c924u: goto label_15c924;
        case 0x15c928u: goto label_15c928;
        case 0x15c92cu: goto label_15c92c;
        case 0x15c930u: goto label_15c930;
        case 0x15c934u: goto label_15c934;
        case 0x15c938u: goto label_15c938;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c940u: goto label_15c940;
        case 0x15c944u: goto label_15c944;
        case 0x15c948u: goto label_15c948;
        case 0x15c94cu: goto label_15c94c;
        case 0x15c950u: goto label_15c950;
        case 0x15c954u: goto label_15c954;
        case 0x15c958u: goto label_15c958;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c960u: goto label_15c960;
        case 0x15c964u: goto label_15c964;
        case 0x15c968u: goto label_15c968;
        case 0x15c96cu: goto label_15c96c;
        case 0x15c970u: goto label_15c970;
        case 0x15c974u: goto label_15c974;
        case 0x15c978u: goto label_15c978;
        case 0x15c97cu: goto label_15c97c;
        case 0x15c980u: goto label_15c980;
        case 0x15c984u: goto label_15c984;
        case 0x15c988u: goto label_15c988;
        case 0x15c98cu: goto label_15c98c;
        case 0x15c990u: goto label_15c990;
        case 0x15c994u: goto label_15c994;
        case 0x15c998u: goto label_15c998;
        case 0x15c99cu: goto label_15c99c;
        case 0x15c9a0u: goto label_15c9a0;
        case 0x15c9a4u: goto label_15c9a4;
        case 0x15c9a8u: goto label_15c9a8;
        case 0x15c9acu: goto label_15c9ac;
        case 0x15c9b0u: goto label_15c9b0;
        case 0x15c9b4u: goto label_15c9b4;
        case 0x15c9b8u: goto label_15c9b8;
        case 0x15c9bcu: goto label_15c9bc;
        case 0x15c9c0u: goto label_15c9c0;
        case 0x15c9c4u: goto label_15c9c4;
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15c9ccu: goto label_15c9cc;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9d4u: goto label_15c9d4;
        case 0x15c9d8u: goto label_15c9d8;
        case 0x15c9dcu: goto label_15c9dc;
        case 0x15c9e0u: goto label_15c9e0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15c9e8u: goto label_15c9e8;
        case 0x15c9ecu: goto label_15c9ec;
        case 0x15c9f0u: goto label_15c9f0;
        case 0x15c9f4u: goto label_15c9f4;
        case 0x15c9f8u: goto label_15c9f8;
        case 0x15c9fcu: goto label_15c9fc;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca04u: goto label_15ca04;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca0cu: goto label_15ca0c;
        case 0x15ca10u: goto label_15ca10;
        case 0x15ca14u: goto label_15ca14;
        case 0x15ca18u: goto label_15ca18;
        case 0x15ca1cu: goto label_15ca1c;
        case 0x15ca20u: goto label_15ca20;
        case 0x15ca24u: goto label_15ca24;
        case 0x15ca28u: goto label_15ca28;
        case 0x15ca2cu: goto label_15ca2c;
        case 0x15ca30u: goto label_15ca30;
        case 0x15ca34u: goto label_15ca34;
        case 0x15ca38u: goto label_15ca38;
        case 0x15ca3cu: goto label_15ca3c;
        default: break;
    }

    ctx->pc = 0x15c870u;

label_15c870:
    // 0x15c870: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15c874:
    // 0x15c874: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15c874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c878:
    // 0x15c878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15c87c:
    // 0x15c87c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c880:
    // 0x15c880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c884:
    // 0x15c884: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15c884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c888:
    // 0x15c888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c88c:
    // 0x15c88c: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x15c88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_15c890:
    // 0x15c890: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x15c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
label_15c894:
    // 0x15c894: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x15c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_15c898:
    // 0x15c898: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x15c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
label_15c89c:
    // 0x15c89c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15c89cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15c8a0:
    // 0x15c8a0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x15c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
label_15c8a4:
    // 0x15c8a4: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x15c8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_15c8a8:
    // 0x15c8a8: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x15c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
label_15c8ac:
    // 0x15c8ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c8b0:
    // 0x15c8b0: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x15c8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
label_15c8b4:
    // 0x15c8b4: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x15c8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_15c8b8:
    // 0x15c8b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15c8bc:
    if (ctx->pc == 0x15C8BCu) {
        ctx->pc = 0x15C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8B8u;
        // 0x15c8bc: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8C0u;
        goto label_15c8c0;
    }
    ctx->pc = 0x15C8B8u;
    {
        const bool branch_taken_0x15c8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8B8u;
        // 0x15c8bc: 0xffab0088  sd          $t3, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8b8) {
            ctx->pc = 0x15C8C8u;
            goto label_15c8c8;
        }
    }
    ctx->pc = 0x15C8C0u;
label_15c8c0:
    // 0x15c8c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_15c8c4:
    if (ctx->pc == 0x15C8C4u) {
        ctx->pc = 0x15C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8C0u;
        // 0x15c8c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8C8u;
        goto label_15c8c8;
    }
    ctx->pc = 0x15C8C0u;
    {
        const bool branch_taken_0x15c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8C0u;
        // 0x15c8c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8c0) {
            ctx->pc = 0x15C8D4u;
            goto label_15c8d4;
        }
    }
    ctx->pc = 0x15C8C8u;
label_15c8c8:
    // 0x15c8c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15c8cc:
    // 0x15c8cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c8d0:
    // 0x15c8d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x15c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_15c8d4:
    // 0x15c8d4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x15c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15c8d8:
    // 0x15c8d8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15c8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_15c8dc:
    // 0x15c8dc: 0x434023  subu        $t0, $v0, $v1
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c8e0:
    // 0x15c8e0: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x15c8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
label_15c8e4:
    // 0x15c8e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_15c8e8:
    if (ctx->pc == 0x15C8E8u) {
        ctx->pc = 0x15C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8E4u;
        // 0x15c8e8: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8ECu;
        goto label_15c8ec;
    }
    ctx->pc = 0x15C8E4u;
    {
        const bool branch_taken_0x15c8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8e4) {
            ctx->pc = 0x15C8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C8E4u;
            // 0x15c8e8: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C914u;
            goto label_15c914;
        }
    }
    ctx->pc = 0x15C8ECu;
label_15c8ec:
    // 0x15c8ec: 0x3242efff  andi        $v0, $s2, 0xEFFF
    ctx->pc = 0x15c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)61439);
label_15c8f0:
    // 0x15c8f0: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x15c8f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_15c8f4:
    // 0x15c8f4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x15c8f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15c8f8:
    // 0x15c8f8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15c8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_15c8fc:
    // 0x15c8fc: 0x85070008  lh          $a3, 0x8($t0)
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_15c900:
    // 0x15c900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c904:
    // 0x15c904: 0xc0571f0  jal         func_15C7C0
label_15c908:
    if (ctx->pc == 0x15C908u) {
        ctx->pc = 0x15C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C904u;
        // 0x15c908: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C90Cu;
        goto label_15c90c;
    }
    ctx->pc = 0x15C904u;
    SET_GPR_U32(ctx, 31, 0x15C90Cu);
    ctx->pc = 0x15C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C904u;
    // 0x15c908: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7C0u, 0x15C904u, 0x15C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C90Cu;
label_15c90c:
    // 0x15c90c: 0x10000040  b           . + 4 + (0x40 << 2)
label_15c910:
    if (ctx->pc == 0x15C910u) {
        ctx->pc = 0x15C914u;
        goto label_15c914;
    }
    ctx->pc = 0x15C90Cu;
    {
        const bool branch_taken_0x15c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c90c) {
            ctx->pc = 0x15CA10u;
            goto label_15ca10;
        }
    }
    ctx->pc = 0x15C914u;
label_15c914:
    // 0x15c914: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_15c918:
    // 0x15c918: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_15c91c:
    if (ctx->pc == 0x15C91Cu) {
        ctx->pc = 0x15C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C918u;
        // 0x15c91c: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C920u;
        goto label_15c920;
    }
    ctx->pc = 0x15C918u;
    {
        const bool branch_taken_0x15c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c918) {
            ctx->pc = 0x15C91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C918u;
            // 0x15c91c: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C928u;
            goto label_15c928;
        }
    }
    ctx->pc = 0x15C920u;
label_15c920:
    // 0x15c920: 0x1000000d  b           . + 4 + (0xD << 2)
label_15c924:
    if (ctx->pc == 0x15C924u) {
        ctx->pc = 0x15C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C920u;
        // 0x15c924: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C928u;
        goto label_15c928;
    }
    ctx->pc = 0x15C920u;
    {
        const bool branch_taken_0x15c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C920u;
        // 0x15c924: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c920) {
            ctx->pc = 0x15C958u;
            goto label_15c958;
        }
    }
    ctx->pc = 0x15C928u;
label_15c928:
    // 0x15c928: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15c928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_15c92c:
    // 0x15c92c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15c930:
    // 0x15c930: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x15c930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15c934:
    // 0x15c934: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15c934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15c938:
    // 0x15c938: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x15c938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_15c93c:
    // 0x15c93c: 0x2442e940  addiu       $v0, $v0, -0x16C0
    ctx->pc = 0x15c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
label_15c940:
    // 0x15c940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c944:
    // 0x15c944: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c948:
    // 0x15c948: 0x40f809  jalr        $v0
label_15c94c:
    if (ctx->pc == 0x15C94Cu) {
        ctx->pc = 0x15C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C948u;
        // 0x15c94c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C950u;
        goto label_15c950;
    }
    ctx->pc = 0x15C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C950u);
        ctx->pc = 0x15C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C948u;
        // 0x15c94c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C948u, 0x15C950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C950u;
label_15c950:
    // 0x15c950: 0x1000002f  b           . + 4 + (0x2F << 2)
label_15c954:
    if (ctx->pc == 0x15C954u) {
        ctx->pc = 0x15C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C950u;
        // 0x15c954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C958u;
        goto label_15c958;
    }
    ctx->pc = 0x15C950u;
    {
        const bool branch_taken_0x15c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C950u;
        // 0x15c954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c950) {
            ctx->pc = 0x15CA10u;
            goto label_15ca10;
        }
    }
    ctx->pc = 0x15C958u;
label_15c958:
    // 0x15c958: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x15c958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_15c95c:
    // 0x15c95c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15c95cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_15c960:
    // 0x15c960: 0x286100e0  slti        $at, $v1, 0xE0
    ctx->pc = 0x15c960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)224) ? 1 : 0);
label_15c964:
    // 0x15c964: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_15c968:
    if (ctx->pc == 0x15C968u) {
        ctx->pc = 0x15C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C964u;
        // 0x15c968: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C96Cu;
        goto label_15c96c;
    }
    ctx->pc = 0x15C964u;
    {
        const bool branch_taken_0x15c964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C964u;
        // 0x15c968: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c964) {
            ctx->pc = 0x15C9D0u;
            goto label_15c9d0;
        }
    }
    ctx->pc = 0x15C96Cu;
label_15c96c:
    // 0x15c96c: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x15c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_15c970:
    // 0x15c970: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15c974:
    if (ctx->pc == 0x15C974u) {
        ctx->pc = 0x15C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C970u;
        // 0x15c974: 0x28610060  slti        $at, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C978u;
        goto label_15c978;
    }
    ctx->pc = 0x15C970u;
    {
        const bool branch_taken_0x15c970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c970) {
            ctx->pc = 0x15C974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C970u;
            // 0x15c974: 0x28610060  slti        $at, $v1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C988u;
            goto label_15c988;
        }
    }
    ctx->pc = 0x15C978u;
label_15c978:
    // 0x15c978: 0x9202059c  lbu         $v0, 0x59C($s0)
    ctx->pc = 0x15c978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
label_15c97c:
    // 0x15c97c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x15c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_15c980:
    // 0x15c980: 0xa202059c  sb          $v0, 0x59C($s0)
    ctx->pc = 0x15c980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1436), (uint8_t)GPR_U32(ctx, 2));
label_15c984:
    // 0x15c984: 0x28610060  slti        $at, $v1, 0x60
    ctx->pc = 0x15c984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
label_15c988:
    // 0x15c988: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
label_15c98c:
    if (ctx->pc == 0x15C98Cu) {
        ctx->pc = 0x15C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C988u;
        // 0x15c98c: 0x9202059c  lbu         $v0, 0x59C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C990u;
        goto label_15c990;
    }
    ctx->pc = 0x15C988u;
    {
        const bool branch_taken_0x15c988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c988) {
            ctx->pc = 0x15C98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C988u;
            // 0x15c98c: 0x9202059c  lbu         $v0, 0x59C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C9C4u;
            goto label_15c9c4;
        }
    }
    ctx->pc = 0x15C990u;
label_15c990:
    // 0x15c990: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_15c994:
    // 0x15c994: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15c994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_15c998:
    // 0x15c998: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15c998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15c99c:
    // 0x15c99c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x15c99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15c9a0:
    // 0x15c9a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15c9a4:
    // 0x15c9a4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x15c9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_15c9a8:
    // 0x15c9a8: 0x2442ea20  addiu       $v0, $v0, -0x15E0
    ctx->pc = 0x15c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961696));
label_15c9ac:
    // 0x15c9ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c9b0:
    // 0x15c9b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c9b4:
    // 0x15c9b4: 0x40f809  jalr        $v0
label_15c9b8:
    if (ctx->pc == 0x15C9B8u) {
        ctx->pc = 0x15C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9B4u;
        // 0x15c9b8: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9BCu;
        goto label_15c9bc;
    }
    ctx->pc = 0x15C9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C9BCu);
        ctx->pc = 0x15C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9B4u;
        // 0x15c9b8: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9B4u, 0x15C9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C9BCu;
label_15c9bc:
    // 0x15c9bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15c9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c9c0:
    // 0x15c9c0: 0x9202059c  lbu         $v0, 0x59C($s0)
    ctx->pc = 0x15c9c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1436)));
label_15c9c4:
    // 0x15c9c4: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x15c9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
label_15c9c8:
    // 0x15c9c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_15c9cc:
    if (ctx->pc == 0x15C9CCu) {
        ctx->pc = 0x15C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C8u;
        // 0x15c9cc: 0xa202059c  sb          $v0, 0x59C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1436), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9D0u;
        goto label_15c9d0;
    }
    ctx->pc = 0x15C9C8u;
    {
        const bool branch_taken_0x15c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C8u;
        // 0x15c9cc: 0xa202059c  sb          $v0, 0x59C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1436), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9c8) {
            ctx->pc = 0x15CA10u;
            goto label_15ca10;
        }
    }
    ctx->pc = 0x15C9D0u;
label_15c9d0:
    // 0x15c9d0: 0x2463ff20  addiu       $v1, $v1, -0xE0
    ctx->pc = 0x15c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
label_15c9d4:
    // 0x15c9d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15c9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c9d8:
    // 0x15c9d8: 0x960700ea  lhu         $a3, 0xEA($s0)
    ctx->pc = 0x15c9d8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
label_15c9dc:
    // 0x15c9dc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x15c9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15c9e0:
    // 0x15c9e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15c9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15c9e4:
    // 0x15c9e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15c9e8:
    // 0x15c9e8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15c9ec:
    // 0x15c9ec: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15c9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_15c9f0:
    // 0x15c9f0: 0x24420c50  addiu       $v0, $v0, 0xC50
    ctx->pc = 0x15c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3152));
label_15c9f4:
    // 0x15c9f4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x15c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_15c9f8:
    // 0x15c9f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c9fc:
    // 0x15c9fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ca00:
    // 0x15ca00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca04:
    // 0x15ca04: 0x40f809  jalr        $v0
label_15ca08:
    if (ctx->pc == 0x15CA08u) {
        ctx->pc = 0x15CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA04u;
        // 0x15ca08: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA0Cu;
        goto label_15ca0c;
    }
    ctx->pc = 0x15CA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CA0Cu);
        ctx->pc = 0x15CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA04u;
        // 0x15ca08: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA04u, 0x15CA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA0Cu;
label_15ca0c:
    // 0x15ca0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ca0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ca10:
    // 0x15ca10: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_15ca14:
    if (ctx->pc == 0x15CA14u) {
        ctx->pc = 0x15CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA10u;
        // 0x15ca14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA18u;
        goto label_15ca18;
    }
    ctx->pc = 0x15CA10u;
    {
        const bool branch_taken_0x15ca10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ca10) {
            ctx->pc = 0x15CA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CA10u;
            // 0x15ca14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CA24u;
            goto label_15ca24;
        }
    }
    ctx->pc = 0x15CA18u;
label_15ca18:
    // 0x15ca18: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_15ca1c:
    // 0x15ca1c: 0xa452060a  sh          $s2, 0x60A($v0)
    ctx->pc = 0x15ca1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1546), (uint16_t)GPR_U32(ctx, 18));
label_15ca20:
    // 0x15ca20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15ca20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ca24:
    // 0x15ca24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ca24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15ca28:
    // 0x15ca28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ca28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15ca2c:
    // 0x15ca2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ca2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ca30:
    // 0x15ca30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ca30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15ca34:
    // 0x15ca34: 0x3e00008  jr          $ra
label_15ca38:
    if (ctx->pc == 0x15CA38u) {
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA3Cu;
        goto label_15ca3c;
    }
    ctx->pc = 0x15CA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CA3Cu;
label_15ca3c:
    // 0x15ca3c: 0x0  nop
    ctx->pc = 0x15ca3cu;
    // NOP
    if (ctx->pc == 0x15ca3cu) { ctx->pc = 0x15ca40u; }
}
