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

// Function: sub_002679A8
// Address: 0x2679a8 - 0x267af8
void sub_002679A8_0x2679a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002679A8_0x2679a8");
#endif

    switch (ctx->pc) {
        case 0x2679a8u: goto label_2679a8;
        case 0x2679acu: goto label_2679ac;
        case 0x2679b0u: goto label_2679b0;
        case 0x2679b4u: goto label_2679b4;
        case 0x2679b8u: goto label_2679b8;
        case 0x2679bcu: goto label_2679bc;
        case 0x2679c0u: goto label_2679c0;
        case 0x2679c4u: goto label_2679c4;
        case 0x2679c8u: goto label_2679c8;
        case 0x2679ccu: goto label_2679cc;
        case 0x2679d0u: goto label_2679d0;
        case 0x2679d4u: goto label_2679d4;
        case 0x2679d8u: goto label_2679d8;
        case 0x2679dcu: goto label_2679dc;
        case 0x2679e0u: goto label_2679e0;
        case 0x2679e4u: goto label_2679e4;
        case 0x2679e8u: goto label_2679e8;
        case 0x2679ecu: goto label_2679ec;
        case 0x2679f0u: goto label_2679f0;
        case 0x2679f4u: goto label_2679f4;
        case 0x2679f8u: goto label_2679f8;
        case 0x2679fcu: goto label_2679fc;
        case 0x267a00u: goto label_267a00;
        case 0x267a04u: goto label_267a04;
        case 0x267a08u: goto label_267a08;
        case 0x267a0cu: goto label_267a0c;
        case 0x267a10u: goto label_267a10;
        case 0x267a14u: goto label_267a14;
        case 0x267a18u: goto label_267a18;
        case 0x267a1cu: goto label_267a1c;
        case 0x267a20u: goto label_267a20;
        case 0x267a24u: goto label_267a24;
        case 0x267a28u: goto label_267a28;
        case 0x267a2cu: goto label_267a2c;
        case 0x267a30u: goto label_267a30;
        case 0x267a34u: goto label_267a34;
        case 0x267a38u: goto label_267a38;
        case 0x267a3cu: goto label_267a3c;
        case 0x267a40u: goto label_267a40;
        case 0x267a44u: goto label_267a44;
        case 0x267a48u: goto label_267a48;
        case 0x267a4cu: goto label_267a4c;
        case 0x267a50u: goto label_267a50;
        case 0x267a54u: goto label_267a54;
        case 0x267a58u: goto label_267a58;
        case 0x267a5cu: goto label_267a5c;
        case 0x267a60u: goto label_267a60;
        case 0x267a64u: goto label_267a64;
        case 0x267a68u: goto label_267a68;
        case 0x267a6cu: goto label_267a6c;
        case 0x267a70u: goto label_267a70;
        case 0x267a74u: goto label_267a74;
        case 0x267a78u: goto label_267a78;
        case 0x267a7cu: goto label_267a7c;
        case 0x267a80u: goto label_267a80;
        case 0x267a84u: goto label_267a84;
        case 0x267a88u: goto label_267a88;
        case 0x267a8cu: goto label_267a8c;
        case 0x267a90u: goto label_267a90;
        case 0x267a94u: goto label_267a94;
        case 0x267a98u: goto label_267a98;
        case 0x267a9cu: goto label_267a9c;
        case 0x267aa0u: goto label_267aa0;
        case 0x267aa4u: goto label_267aa4;
        case 0x267aa8u: goto label_267aa8;
        case 0x267aacu: goto label_267aac;
        case 0x267ab0u: goto label_267ab0;
        case 0x267ab4u: goto label_267ab4;
        case 0x267ab8u: goto label_267ab8;
        case 0x267abcu: goto label_267abc;
        case 0x267ac0u: goto label_267ac0;
        case 0x267ac4u: goto label_267ac4;
        case 0x267ac8u: goto label_267ac8;
        case 0x267accu: goto label_267acc;
        case 0x267ad0u: goto label_267ad0;
        case 0x267ad4u: goto label_267ad4;
        case 0x267ad8u: goto label_267ad8;
        case 0x267adcu: goto label_267adc;
        case 0x267ae0u: goto label_267ae0;
        case 0x267ae4u: goto label_267ae4;
        case 0x267ae8u: goto label_267ae8;
        case 0x267aecu: goto label_267aec;
        case 0x267af0u: goto label_267af0;
        case 0x267af4u: goto label_267af4;
        default: break;
    }

    ctx->pc = 0x2679a8u;

label_2679a8:
    // 0x2679a8: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x2679a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
label_2679ac:
    // 0x2679ac: 0xffb203d0  sd          $s2, 0x3D0($sp)
    ctx->pc = 0x2679acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 18));
label_2679b0:
    // 0x2679b0: 0xffb103c0  sd          $s1, 0x3C0($sp)
    ctx->pc = 0x2679b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 17));
label_2679b4:
    // 0x2679b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2679b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2679b8:
    // 0x2679b8: 0xffb003b0  sd          $s0, 0x3B0($sp)
    ctx->pc = 0x2679b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 16));
label_2679bc:
    // 0x2679bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2679bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2679c0:
    // 0x2679c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2679c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2679c4:
    // 0x2679c4: 0xffbf03f0  sd          $ra, 0x3F0($sp)
    ctx->pc = 0x2679c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 31));
label_2679c8:
    // 0x2679c8: 0xffb303e0  sd          $s3, 0x3E0($sp)
    ctx->pc = 0x2679c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 992), GPR_U64(ctx, 19));
label_2679cc:
    // 0x2679cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2679ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2679d0:
    // 0x2679d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2679d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2679d4:
    // 0x2679d4: 0xc049cb6  jal         func_1272D8
label_2679d8:
    if (ctx->pc == 0x2679D8u) {
        ctx->pc = 0x2679D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679D4u;
        // 0x2679d8: 0x240600a8  addiu       $a2, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679DCu;
        goto label_2679dc;
    }
    ctx->pc = 0x2679D4u;
    SET_GPR_U32(ctx, 31, 0x2679DCu);
    ctx->pc = 0x2679D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679D4u;
    // 0x2679d8: 0x240600a8  addiu       $a2, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2679D4u, 0x2679DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679DCu;
label_2679dc:
    // 0x2679dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2679dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2679e0:
    // 0x2679e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2679e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2679e4:
    // 0x2679e4: 0xc04a966  jal         func_12A598
label_2679e8:
    if (ctx->pc == 0x2679E8u) {
        ctx->pc = 0x2679E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679E4u;
        // 0x2679e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679ECu;
        goto label_2679ec;
    }
    ctx->pc = 0x2679E4u;
    SET_GPR_U32(ctx, 31, 0x2679ECu);
    ctx->pc = 0x2679E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679E4u;
    // 0x2679e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2679E4u, 0x2679ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679ECu;
label_2679ec:
    // 0x2679ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2679ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2679f0:
    // 0x2679f0: 0x3405c0a8  ori         $a1, $zero, 0xC0A8
    ctx->pc = 0x2679f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49320);
label_2679f4:
    // 0x2679f4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2679f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2679f8:
    // 0x2679f8: 0x34a56978  ori         $a1, $a1, 0x6978
    ctx->pc = 0x2679f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27000);
label_2679fc:
    // 0x2679fc: 0xc097bf2  jal         func_25EFC8
label_267a00:
    if (ctx->pc == 0x267A00u) {
        ctx->pc = 0x267A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679FCu;
        // 0x267a00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A04u;
        goto label_267a04;
    }
    ctx->pc = 0x2679FCu;
    SET_GPR_U32(ctx, 31, 0x267A04u);
    ctx->pc = 0x267A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679FCu;
    // 0x267a00: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x2679FCu, 0x267A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A04u;
label_267a04:
    // 0x267a04: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_267a08:
    if (ctx->pc == 0x267A08u) {
        ctx->pc = 0x267A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A04u;
        // 0x267a08: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A0Cu;
        goto label_267a0c;
    }
    ctx->pc = 0x267A04u;
    {
        const bool branch_taken_0x267a04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A04u;
        // 0x267a08: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a04) {
            ctx->pc = 0x267A1Cu;
            goto label_267a1c;
        }
    }
    ctx->pc = 0x267A0Cu;
label_267a0c:
    // 0x267a0c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_267a10:
    // 0x267a10: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x267a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_267a14:
    // 0x267a14: 0x10000026  b           . + 4 + (0x26 << 2)
label_267a18:
    if (ctx->pc == 0x267A18u) {
        ctx->pc = 0x267A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A14u;
        // 0x267a18: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A1Cu;
        goto label_267a1c;
    }
    ctx->pc = 0x267A14u;
    {
        const bool branch_taken_0x267a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A14u;
        // 0x267a18: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a14) {
            ctx->pc = 0x267AB0u;
            goto label_267ab0;
        }
    }
    ctx->pc = 0x267A1Cu;
label_267a1c:
    // 0x267a1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x267a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267a20:
    // 0x267a20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_267a24:
    if (ctx->pc == 0x267A24u) {
        ctx->pc = 0x267A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A20u;
        // 0x267a24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A28u;
        goto label_267a28;
    }
    ctx->pc = 0x267A20u;
    {
        const bool branch_taken_0x267a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A20u;
        // 0x267a24: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a20) {
            ctx->pc = 0x267A60u;
            goto label_267a60;
        }
    }
    ctx->pc = 0x267A28u;
label_267a28:
    // 0x267a28: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x267a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_267a2c:
    // 0x267a2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x267a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267a30:
    // 0x267a30: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x267a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_267a34:
    // 0x267a34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x267a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267a38:
    // 0x267a38: 0xc0990f0  jal         func_2643C0
label_267a3c:
    if (ctx->pc == 0x267A3Cu) {
        ctx->pc = 0x267A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A38u;
        // 0x267a3c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A40u;
        goto label_267a40;
    }
    ctx->pc = 0x267A38u;
    SET_GPR_U32(ctx, 31, 0x267A40u);
    ctx->pc = 0x267A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A38u;
    // 0x267a3c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x267A38u, 0x267A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A40u;
label_267a40:
    // 0x267a40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x267a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_267a44:
    // 0x267a44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_267a48:
    if (ctx->pc == 0x267A48u) {
        ctx->pc = 0x267A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A44u;
        // 0x267a48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A4Cu;
        goto label_267a4c;
    }
    ctx->pc = 0x267A44u;
    {
        const bool branch_taken_0x267a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A44u;
        // 0x267a48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a44) {
            ctx->pc = 0x267A60u;
            goto label_267a60;
        }
    }
    ctx->pc = 0x267A4Cu;
label_267a4c:
    // 0x267a4c: 0x27b301b0  addiu       $s3, $sp, 0x1B0
    ctx->pc = 0x267a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_267a50:
    // 0x267a50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x267a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_267a54:
    // 0x267a54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x267a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_267a58:
    // 0x267a58: 0xc0990f0  jal         func_2643C0
label_267a5c:
    if (ctx->pc == 0x267A5Cu) {
        ctx->pc = 0x267A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A58u;
        // 0x267a5c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A60u;
        goto label_267a60;
    }
    ctx->pc = 0x267A58u;
    SET_GPR_U32(ctx, 31, 0x267A60u);
    ctx->pc = 0x267A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A58u;
    // 0x267a5c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x267A58u, 0x267A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A60u;
label_267a60:
    // 0x267a60: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x267a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_267a64:
    // 0x267a64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_267a68:
    if (ctx->pc == 0x267A68u) {
        ctx->pc = 0x267A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A64u;
        // 0x267a68: 0x27b002b0  addiu       $s0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A6Cu;
        goto label_267a6c;
    }
    ctx->pc = 0x267A64u;
    {
        const bool branch_taken_0x267a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A64u;
        // 0x267a68: 0x27b002b0  addiu       $s0, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a64) {
            ctx->pc = 0x267AC0u;
            goto label_267ac0;
        }
    }
    ctx->pc = 0x267A6Cu;
label_267a6c:
    // 0x267a6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x267a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267a70:
    // 0x267a70: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x267a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_267a74:
    // 0x267a74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x267a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267a78:
    // 0x267a78: 0xc0990f0  jal         func_2643C0
label_267a7c:
    if (ctx->pc == 0x267A7Cu) {
        ctx->pc = 0x267A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A78u;
        // 0x267a7c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A80u;
        goto label_267a80;
    }
    ctx->pc = 0x267A78u;
    SET_GPR_U32(ctx, 31, 0x267A80u);
    ctx->pc = 0x267A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267A78u;
    // 0x267a7c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x267A78u, 0x267A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267A80u;
label_267a80:
    // 0x267a80: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x267a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_267a84:
    // 0x267a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267a88:
    // 0x267a88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x267a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267a8c:
    // 0x267a8c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x267a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_267a90:
    // 0x267a90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x267a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267a94:
    // 0x267a94: 0x40f809  jalr        $v0
label_267a98:
    if (ctx->pc == 0x267A98u) {
        ctx->pc = 0x267A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A94u;
        // 0x267a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267A9Cu;
        goto label_267a9c;
    }
    ctx->pc = 0x267A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x267A9Cu);
        ctx->pc = 0x267A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A94u;
        // 0x267a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A94u, 0x267A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267A9Cu;
label_267a9c:
    // 0x267a9c: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
label_267aa0:
    if (ctx->pc == 0x267AA0u) {
        ctx->pc = 0x267AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A9Cu;
        // 0x267aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AA4u;
        goto label_267aa4;
    }
    ctx->pc = 0x267A9Cu;
    {
        const bool branch_taken_0x267a9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x267AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A9Cu;
        // 0x267aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a9c) {
            ctx->pc = 0x267ADCu;
            goto label_267adc;
        }
    }
    ctx->pc = 0x267AA4u;
label_267aa4:
    // 0x267aa4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x267aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_267aa8:
    // 0x267aa8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x267aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_267aac:
    // 0x267aac: 0x24a57b58  addiu       $a1, $a1, 0x7B58
    ctx->pc = 0x267aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31576));
label_267ab0:
    // 0x267ab0: 0xc08b5ac  jal         func_22D6B0
label_267ab4:
    if (ctx->pc == 0x267AB4u) {
        ctx->pc = 0x267AB8u;
        goto label_267ab8;
    }
    ctx->pc = 0x267AB0u;
    SET_GPR_U32(ctx, 31, 0x267AB8u);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x267AB0u, 0x267AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AB8u;
label_267ab8:
    // 0x267ab8: 0x10000008  b           . + 4 + (0x8 << 2)
label_267abc:
    if (ctx->pc == 0x267ABCu) {
        ctx->pc = 0x267ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AB8u;
        // 0x267abc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AC0u;
        goto label_267ac0;
    }
    ctx->pc = 0x267AB8u;
    {
        const bool branch_taken_0x267ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AB8u;
        // 0x267abc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ab8) {
            ctx->pc = 0x267ADCu;
            goto label_267adc;
        }
    }
    ctx->pc = 0x267AC0u;
label_267ac0:
    // 0x267ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267ac4:
    // 0x267ac4: 0xc09816c  jal         func_2605B0
label_267ac8:
    if (ctx->pc == 0x267AC8u) {
        ctx->pc = 0x267AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AC4u;
        // 0x267ac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267ACCu;
        goto label_267acc;
    }
    ctx->pc = 0x267AC4u;
    SET_GPR_U32(ctx, 31, 0x267ACCu);
    ctx->pc = 0x267AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AC4u;
    // 0x267ac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2605B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2605B0u, 0x267AC4u, 0x267ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267ACCu;
label_267acc:
    // 0x267acc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x267accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_267ad0:
    // 0x267ad0: 0xc09a152  jal         func_268548
label_267ad4:
    if (ctx->pc == 0x267AD4u) {
        ctx->pc = 0x267AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AD0u;
        // 0x267ad4: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AD8u;
        goto label_267ad8;
    }
    ctx->pc = 0x267AD0u;
    SET_GPR_U32(ctx, 31, 0x267AD8u);
    ctx->pc = 0x267AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267AD0u;
    // 0x267ad4: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268548u, 0x267AD0u, 0x267AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267AD8u;
label_267ad8:
    // 0x267ad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267adc:
    // 0x267adc: 0xdfbf03f0  ld          $ra, 0x3F0($sp)
    ctx->pc = 0x267adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
label_267ae0:
    // 0x267ae0: 0xdfb303e0  ld          $s3, 0x3E0($sp)
    ctx->pc = 0x267ae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 992)));
label_267ae4:
    // 0x267ae4: 0xdfb203d0  ld          $s2, 0x3D0($sp)
    ctx->pc = 0x267ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 976)));
label_267ae8:
    // 0x267ae8: 0xdfb103c0  ld          $s1, 0x3C0($sp)
    ctx->pc = 0x267ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 960)));
label_267aec:
    // 0x267aec: 0xdfb003b0  ld          $s0, 0x3B0($sp)
    ctx->pc = 0x267aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 944)));
label_267af0:
    // 0x267af0: 0x3e00008  jr          $ra
label_267af4:
    if (ctx->pc == 0x267AF4u) {
        ctx->pc = 0x267AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AF0u;
        // 0x267af4: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267AF8u;
        goto label_fallthrough_0x267af0;
    }
    ctx->pc = 0x267AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267AF0u;
        // 0x267af4: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x267af0:
    ctx->pc = 0x267AF8u;
}
