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

// Function: sub_001699C0
// Address: 0x1699c0 - 0x169cd0
void sub_001699C0_0x1699c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001699C0_0x1699c0");
#endif

    switch (ctx->pc) {
        case 0x169a14u: goto label_169a14;
        case 0x169a38u: goto label_169a38;
        case 0x169a5cu: goto label_169a5c;
        case 0x169a94u: goto label_169a94;
        case 0x169af4u: goto label_169af4;
        case 0x169b54u: goto label_169b54;
        case 0x169bc0u: goto label_169bc0;
        case 0x169bccu: goto label_169bcc;
        case 0x169c38u: goto label_169c38;
        case 0x169c44u: goto label_169c44;
        case 0x169cb0u: goto label_169cb0;
        default: break;
    }

    ctx->pc = 0x1699c0u;

    // 0x1699c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1699c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1699c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1699c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1699c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1699c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1699cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1699ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1699d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1699d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1699d4: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x1699d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x1699d8: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1699d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1699dc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1699dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1699e0: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1699E0u;
    {
        const bool branch_taken_0x1699e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699E0u;
        // 0x1699e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699e0) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x1699E8u;
    // 0x1699e8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1699e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1699ec: 0x504000a7  beql        $v0, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1699ECu;
    {
        const bool branch_taken_0x1699ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1699ec) {
            ctx->pc = 0x1699F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1699ECu;
            // 0x1699f0: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169C8Cu;
            goto label_169c8c;
        }
    }
    ctx->pc = 0x1699F4u;
    // 0x1699f4: 0x822204f1  lb          $v0, 0x4F1($s1)
    ctx->pc = 0x1699f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1265)));
    // 0x1699f8: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1699F8u;
    {
        const bool branch_taken_0x1699f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1699f8) {
            ctx->pc = 0x1699FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1699F8u;
            // 0x1699fc: 0x822204f2  lb          $v0, 0x4F2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1266)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169A1Cu;
            goto label_169a1c;
        }
    }
    ctx->pc = 0x169A00u;
    // 0x169a00: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169a04: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x169a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x169a08: 0x24a52a30  addiu       $a1, $a1, 0x2A30
    ctx->pc = 0x169a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10800));
    // 0x169a0c: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169A0Cu;
    SET_GPR_U32(ctx, 31, 0x169A14u);
    ctx->pc = 0x169A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A0Cu;
    // 0x169a10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169A0Cu, 0x169A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A14u;
label_169a14:
    // 0x169a14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x169A14u;
    {
        const bool branch_taken_0x169a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A14u;
        // 0x169a18: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a14) {
            ctx->pc = 0x169A60u;
            goto label_169a60;
        }
    }
    ctx->pc = 0x169A1Cu;
label_169a1c:
    // 0x169a1c: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169A1Cu;
    {
        const bool branch_taken_0x169a1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x169a1c) {
            ctx->pc = 0x169A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169A1Cu;
            // 0x169a20: 0x822204f3  lb          $v0, 0x4F3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1267)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169A40u;
            goto label_169a40;
        }
    }
    ctx->pc = 0x169A24u;
    // 0x169a24: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169a28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x169a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x169a2c: 0x24a52970  addiu       $a1, $a1, 0x2970
    ctx->pc = 0x169a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10608));
    // 0x169a30: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169A30u;
    SET_GPR_U32(ctx, 31, 0x169A38u);
    ctx->pc = 0x169A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A30u;
    // 0x169a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169A30u, 0x169A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A38u;
label_169a38:
    // 0x169a38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x169A38u;
    {
        const bool branch_taken_0x169a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A38u;
        // 0x169a3c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a38) {
            ctx->pc = 0x169A60u;
            goto label_169a60;
        }
    }
    ctx->pc = 0x169A40u;
label_169a40:
    // 0x169a40: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169A40u;
    {
        const bool branch_taken_0x169a40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x169a40) {
            ctx->pc = 0x169A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169A40u;
            // 0x169a44: 0x8e230494  lw          $v1, 0x494($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169A64u;
            goto label_169a64;
        }
    }
    ctx->pc = 0x169A48u;
    // 0x169a48: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169a4c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x169a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169a50: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x169a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x169a54: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169A54u;
    SET_GPR_U32(ctx, 31, 0x169A5Cu);
    ctx->pc = 0x169A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A54u;
    // 0x169a58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169A54u, 0x169A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A5Cu;
label_169a5c:
    // 0x169a5c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169a5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_169a60:
    // 0x169a60: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x169a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
label_169a64:
    // 0x169a64: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x169a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x169a68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x169a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x169a6c: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x169A6Cu;
    {
        const bool branch_taken_0x169a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169a6c) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169A74u;
    // 0x169a74: 0x8e2304a0  lw          $v1, 0x4A0($s1)
    ctx->pc = 0x169a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1184)));
    // 0x169a78: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x169a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x169a7c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x169A7Cu;
    {
        const bool branch_taken_0x169a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a7c) {
            ctx->pc = 0x169A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169A7Cu;
            // 0x169a80: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169ADCu;
            goto label_169adc;
        }
    }
    ctx->pc = 0x169A84u;
    // 0x169a84: 0xa620039a  sh          $zero, 0x39A($s1)
    ctx->pc = 0x169a84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x169a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a8c: 0xc05a668  jal         func_1699A0
    ctx->pc = 0x169A8Cu;
    SET_GPR_U32(ctx, 31, 0x169A94u);
    ctx->pc = 0x169A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A8Cu;
    // 0x169a90: 0xa620039c  sh          $zero, 0x39C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 924), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699A0u, 0x169A8Cu, 0x169A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A94u;
label_169a94:
    // 0x169a94: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169a98: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x169a98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169a9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169aa0: 0x14620079  bne         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x169AA0u;
    {
        const bool branch_taken_0x169aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA0u;
        // 0x169aa4: 0x6410003d  daddiu      $s0, $zero, 0x3D (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)61);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169aa0) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169AA8u;
    // 0x169aa8: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x169aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169aac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169ab0: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169ab0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169ab4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x169ab8: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169abc: 0x14620072  bne         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x169ABCu;
    {
        const bool branch_taken_0x169abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169abc) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169AC4u;
    // 0x169ac4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x169ac8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169acc: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x169accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x169ad0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x169ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x169ad4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x169AD4u;
    {
        const bool branch_taken_0x169ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AD4u;
        // 0x169ad8: 0xac43bedc  sw          $v1, -0x4124($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ad4) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169ADCu;
label_169adc:
    // 0x169adc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x169ADCu;
    {
        const bool branch_taken_0x169adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169adc) {
            ctx->pc = 0x169AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169ADCu;
            // 0x169ae0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169B3Cu;
            goto label_169b3c;
        }
    }
    ctx->pc = 0x169AE4u;
    // 0x169ae4: 0xa620039a  sh          $zero, 0x39A($s1)
    ctx->pc = 0x169ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x169ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169aec: 0xc05a668  jal         func_1699A0
    ctx->pc = 0x169AECu;
    SET_GPR_U32(ctx, 31, 0x169AF4u);
    ctx->pc = 0x169AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AECu;
    // 0x169af0: 0xa620039c  sh          $zero, 0x39C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 924), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699A0u, 0x169AECu, 0x169AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AF4u;
label_169af4:
    // 0x169af4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169af8: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x169af8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169afc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169b00: 0x14620061  bne         $v1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x169B00u;
    {
        const bool branch_taken_0x169b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B00u;
        // 0x169b04: 0x6410003e  daddiu      $s0, $zero, 0x3E (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)62);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b00) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169B08u;
    // 0x169b08: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x169b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169b0c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169b10: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169b10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169b14: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x169b18: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x169b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169b1c: 0x1462005a  bne         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x169B1Cu;
    {
        const bool branch_taken_0x169b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169b1c) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169B24u;
    // 0x169b24: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x169b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x169b28: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169b2c: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x169b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x169b30: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x169b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x169b34: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x169B34u;
    {
        const bool branch_taken_0x169b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B34u;
        // 0x169b38: 0xac43bedc  sw          $v1, -0x4124($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b34) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169B3Cu;
label_169b3c:
    // 0x169b3c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x169B3Cu;
    {
        const bool branch_taken_0x169b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b3c) {
            ctx->pc = 0x169B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169B3Cu;
            // 0x169b40: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169B9Cu;
            goto label_169b9c;
        }
    }
    ctx->pc = 0x169B44u;
    // 0x169b44: 0xa620039a  sh          $zero, 0x39A($s1)
    ctx->pc = 0x169b44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x169b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b4c: 0xc05a668  jal         func_1699A0
    ctx->pc = 0x169B4Cu;
    SET_GPR_U32(ctx, 31, 0x169B54u);
    ctx->pc = 0x169B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B4Cu;
    // 0x169b50: 0xa620039c  sh          $zero, 0x39C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 924), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699A0u, 0x169B4Cu, 0x169B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B54u;
label_169b54:
    // 0x169b54: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169b58: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x169b58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169b5c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169b60: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x169B60u;
    {
        const bool branch_taken_0x169b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B60u;
        // 0x169b64: 0x641000a7  daddiu      $s0, $zero, 0xA7 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)167);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b60) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169B68u;
    // 0x169b68: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x169b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169b6c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169b70: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169b74: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x169b78: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x169b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169b7c: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x169B7Cu;
    {
        const bool branch_taken_0x169b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169b7c) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169B84u;
    // 0x169b84: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x169b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x169b88: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169b8c: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x169b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x169b90: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x169b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x169b94: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x169B94u;
    {
        const bool branch_taken_0x169b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B94u;
        // 0x169b98: 0xac43bedc  sw          $v1, -0x4124($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b94) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169B9Cu;
label_169b9c:
    // 0x169b9c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x169B9Cu;
    {
        const bool branch_taken_0x169b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b9c) {
            ctx->pc = 0x169BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169B9Cu;
            // 0x169ba0: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x169C14u;
            goto label_169c14;
        }
    }
    ctx->pc = 0x169BA4u;
    // 0x169ba4: 0xa620039a  sh          $zero, 0x39A($s1)
    ctx->pc = 0x169ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x169ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bac: 0xa620039c  sh          $zero, 0x39C($s1)
    ctx->pc = 0x169bacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 924), (uint16_t)GPR_U32(ctx, 0));
    // 0x169bb0: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x169bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169bb4: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x169bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x169bb8: 0xc06298c  jal         func_18A630
    ctx->pc = 0x169BB8u;
    SET_GPR_U32(ctx, 31, 0x169BC0u);
    ctx->pc = 0x169BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BB8u;
    // 0x169bbc: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A630u, 0x169BB8u, 0x169BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BC0u;
label_169bc0:
    // 0x169bc0: 0xa2220507  sb          $v0, 0x507($s1)
    ctx->pc = 0x169bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 2));
    // 0x169bc4: 0xc05a668  jal         func_1699A0
    ctx->pc = 0x169BC4u;
    SET_GPR_U32(ctx, 31, 0x169BCCu);
    ctx->pc = 0x169BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BC4u;
    // 0x169bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699A0u, 0x169BC4u, 0x169BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BCCu;
label_169bcc:
    // 0x169bcc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169bd0: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x169bd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169bd4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169bd8: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x169BD8u;
    {
        const bool branch_taken_0x169bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD8u;
        // 0x169bdc: 0x64100046  daddiu      $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)70);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bd8) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169BE0u;
    // 0x169be0: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169be4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169be8: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169be8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169bec: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x169bf0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169bf4: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x169BF4u;
    {
        const bool branch_taken_0x169bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169bf4) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169BFCu;
    // 0x169bfc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x169bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x169c00: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169c04: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x169c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x169c08: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x169c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x169c0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x169C0Cu;
    {
        const bool branch_taken_0x169c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C0Cu;
        // 0x169c10: 0xac43bedc  sw          $v1, -0x4124($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c0c) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169C14u;
label_169c14:
    // 0x169c14: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x169C14u;
    {
        const bool branch_taken_0x169c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c14) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169C1Cu;
    // 0x169c1c: 0xa620039a  sh          $zero, 0x39A($s1)
    ctx->pc = 0x169c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x169c20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169c24: 0xa620039c  sh          $zero, 0x39C($s1)
    ctx->pc = 0x169c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 924), (uint16_t)GPR_U32(ctx, 0));
    // 0x169c28: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x169c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169c2c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x169c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x169c30: 0xc06298c  jal         func_18A630
    ctx->pc = 0x169C30u;
    SET_GPR_U32(ctx, 31, 0x169C38u);
    ctx->pc = 0x169C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C30u;
    // 0x169c34: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A630u, 0x169C30u, 0x169C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C38u;
label_169c38:
    // 0x169c38: 0xa2220507  sb          $v0, 0x507($s1)
    ctx->pc = 0x169c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1287), (uint8_t)GPR_U32(ctx, 2));
    // 0x169c3c: 0xc05a668  jal         func_1699A0
    ctx->pc = 0x169C3Cu;
    SET_GPR_U32(ctx, 31, 0x169C44u);
    ctx->pc = 0x169C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C3Cu;
    // 0x169c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699A0u, 0x169C3Cu, 0x169C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C44u;
label_169c44:
    // 0x169c44: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169c48: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x169c48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x169c4c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169c50: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x169C50u;
    {
        const bool branch_taken_0x169c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x169C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C50u;
        // 0x169c54: 0x64100046  daddiu      $s0, $zero, 0x46 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)70);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c50) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169C58u;
    // 0x169c58: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x169c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x169c5c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x169c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x169c60: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x169c60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x169c64: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x169c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x169c68: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x169c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x169c6c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169C6Cu;
    {
        const bool branch_taken_0x169c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169c6c) {
            ctx->pc = 0x169C88u;
            goto label_169c88;
        }
    }
    ctx->pc = 0x169C74u;
    // 0x169c74: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x169c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x169c78: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x169c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x169c7c: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x169c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x169c80: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x169c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x169c84: 0xac43bedc  sw          $v1, -0x4124($v0)
    ctx->pc = 0x169c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950620), GPR_U32(ctx, 3));
label_169c88:
    // 0x169c88: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x169c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_169c8c:
    // 0x169c8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x169c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x169c90: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169C90u;
    {
        const bool branch_taken_0x169c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x169c90) {
            ctx->pc = 0x169C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169C90u;
            // 0x169c94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169CB4u;
            goto label_169cb4;
        }
    }
    ctx->pc = 0x169C98u;
    // 0x169c98: 0xa620039a  sh          $zero, 0x39A($s1)
    ctx->pc = 0x169c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x169c9c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x169c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x169ca0: 0xa626039c  sh          $a2, 0x39C($s1)
    ctx->pc = 0x169ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 924), (uint16_t)GPR_U32(ctx, 6));
    // 0x169ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ca8: 0xc06266c  jal         func_1899B0
    ctx->pc = 0x169CA8u;
    SET_GPR_U32(ctx, 31, 0x169CB0u);
    ctx->pc = 0x169CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CA8u;
    // 0x169cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1899B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1899B0u, 0x169CA8u, 0x169CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CB0u;
label_169cb0:
    // 0x169cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169cb4:
    // 0x169cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x169CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CC0u;
        // 0x169cc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169CC8u;
    // 0x169cc8: 0x0  nop
    ctx->pc = 0x169cc8u;
    // NOP
    // 0x169ccc: 0x0  nop
    ctx->pc = 0x169cccu;
    // NOP
}
