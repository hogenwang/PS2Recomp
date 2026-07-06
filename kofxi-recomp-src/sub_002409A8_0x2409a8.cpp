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

// Function: sub_002409A8
// Address: 0x2409a8 - 0x240ab0
void sub_002409A8_0x2409a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002409A8_0x2409a8");
#endif

    switch (ctx->pc) {
        case 0x2409a8u: goto label_2409a8;
        case 0x2409acu: goto label_2409ac;
        case 0x2409b0u: goto label_2409b0;
        case 0x2409b4u: goto label_2409b4;
        case 0x2409b8u: goto label_2409b8;
        case 0x2409bcu: goto label_2409bc;
        case 0x2409c0u: goto label_2409c0;
        case 0x2409c4u: goto label_2409c4;
        case 0x2409c8u: goto label_2409c8;
        case 0x2409ccu: goto label_2409cc;
        case 0x2409d0u: goto label_2409d0;
        case 0x2409d4u: goto label_2409d4;
        case 0x2409d8u: goto label_2409d8;
        case 0x2409dcu: goto label_2409dc;
        case 0x2409e0u: goto label_2409e0;
        case 0x2409e4u: goto label_2409e4;
        case 0x2409e8u: goto label_2409e8;
        case 0x2409ecu: goto label_2409ec;
        case 0x2409f0u: goto label_2409f0;
        case 0x2409f4u: goto label_2409f4;
        case 0x2409f8u: goto label_2409f8;
        case 0x2409fcu: goto label_2409fc;
        case 0x240a00u: goto label_240a00;
        case 0x240a04u: goto label_240a04;
        case 0x240a08u: goto label_240a08;
        case 0x240a0cu: goto label_240a0c;
        case 0x240a10u: goto label_240a10;
        case 0x240a14u: goto label_240a14;
        case 0x240a18u: goto label_240a18;
        case 0x240a1cu: goto label_240a1c;
        case 0x240a20u: goto label_240a20;
        case 0x240a24u: goto label_240a24;
        case 0x240a28u: goto label_240a28;
        case 0x240a2cu: goto label_240a2c;
        case 0x240a30u: goto label_240a30;
        case 0x240a34u: goto label_240a34;
        case 0x240a38u: goto label_240a38;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a40u: goto label_240a40;
        case 0x240a44u: goto label_240a44;
        case 0x240a48u: goto label_240a48;
        case 0x240a4cu: goto label_240a4c;
        case 0x240a50u: goto label_240a50;
        case 0x240a54u: goto label_240a54;
        case 0x240a58u: goto label_240a58;
        case 0x240a5cu: goto label_240a5c;
        case 0x240a60u: goto label_240a60;
        case 0x240a64u: goto label_240a64;
        case 0x240a68u: goto label_240a68;
        case 0x240a6cu: goto label_240a6c;
        case 0x240a70u: goto label_240a70;
        case 0x240a74u: goto label_240a74;
        case 0x240a78u: goto label_240a78;
        case 0x240a7cu: goto label_240a7c;
        case 0x240a80u: goto label_240a80;
        case 0x240a84u: goto label_240a84;
        case 0x240a88u: goto label_240a88;
        case 0x240a8cu: goto label_240a8c;
        case 0x240a90u: goto label_240a90;
        case 0x240a94u: goto label_240a94;
        case 0x240a98u: goto label_240a98;
        case 0x240a9cu: goto label_240a9c;
        case 0x240aa0u: goto label_240aa0;
        case 0x240aa4u: goto label_240aa4;
        case 0x240aa8u: goto label_240aa8;
        case 0x240aacu: goto label_240aac;
        default: break;
    }

    ctx->pc = 0x2409a8u;

label_2409a8:
    // 0x2409a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2409a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2409ac:
    // 0x2409ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2409acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2409b0:
    // 0x2409b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2409b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2409b4:
    // 0x2409b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2409b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2409b8:
    // 0x2409b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2409b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2409bc:
    // 0x2409bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2409bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2409c0:
    // 0x2409c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2409c4:
    // 0x2409c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2409c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2409c8:
    // 0x2409c8: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x2409c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_2409cc:
    // 0x2409cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2409ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2409d0:
    // 0x2409d0: 0x26105ab8  addiu       $s0, $s0, 0x5AB8
    ctx->pc = 0x2409d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23224));
label_2409d4:
    // 0x2409d4: 0xae440160  sw          $a0, 0x160($s2)
    ctx->pc = 0x2409d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 4));
label_2409d8:
    // 0x2409d8: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x2409d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2409dc:
    // 0x2409dc: 0x8e424e0c  lw          $v0, 0x4E0C($s2)
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19980)));
label_2409e0:
    // 0x2409e0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2409e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2409e4:
    // 0x2409e4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2409e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2409e8:
    // 0x2409e8: 0xc0903b8  jal         func_240EE0
label_2409ec:
    if (ctx->pc == 0x2409ECu) {
        ctx->pc = 0x2409ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409E8u;
        // 0x2409ec: 0xae424e0c  sw          $v0, 0x4E0C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 19980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409F0u;
        goto label_2409f0;
    }
    ctx->pc = 0x2409E8u;
    SET_GPR_U32(ctx, 31, 0x2409F0u);
    ctx->pc = 0x2409ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409E8u;
    // 0x2409ec: 0xae424e0c  sw          $v0, 0x4E0C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 19980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240EE0u, 0x2409E8u, 0x2409F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2409F0u;
label_2409f0:
    // 0x2409f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2409f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2409f4:
    // 0x2409f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2409f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2409f8:
    // 0x2409f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2409f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2409fc:
    // 0x2409fc: 0xc08b5ac  jal         func_22D6B0
label_240a00:
    if (ctx->pc == 0x240A00u) {
        ctx->pc = 0x240A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2409FCu;
        // 0x240a00: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A04u;
        goto label_240a04;
    }
    ctx->pc = 0x2409FCu;
    SET_GPR_U32(ctx, 31, 0x240A04u);
    ctx->pc = 0x240A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2409FCu;
    // 0x240a00: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2409FCu, 0x240A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A04u;
label_240a04:
    // 0x240a04: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x240a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_240a08:
    // 0x240a08: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x240a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_240a0c:
    // 0x240a0c: 0x2451fe90  addiu       $s1, $v0, -0x170
    ctx->pc = 0x240a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_240a10:
    // 0x240a10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x240a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240a14:
    // 0x240a14: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x240a14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_240a18:
    // 0x240a18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x240a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_240a1c:
    // 0x240a1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_240a20:
    if (ctx->pc == 0x240A20u) {
        ctx->pc = 0x240A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A1Cu;
        // 0x240a20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A24u;
        goto label_240a24;
    }
    ctx->pc = 0x240A1Cu;
    {
        const bool branch_taken_0x240a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a1c) {
            ctx->pc = 0x240A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A1Cu;
            // 0x240a20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240A34u;
            goto label_240a34;
        }
    }
    ctx->pc = 0x240A24u;
label_240a24:
    // 0x240a24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x240a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_240a28:
    // 0x240a28: 0x40f809  jalr        $v0
label_240a2c:
    if (ctx->pc == 0x240A2Cu) {
        ctx->pc = 0x240A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A28u;
        // 0x240a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A30u;
        goto label_240a30;
    }
    ctx->pc = 0x240A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240A30u);
        ctx->pc = 0x240A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A28u;
        // 0x240a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240A28u, 0x240A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240A30u;
label_240a30:
    // 0x240a30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x240a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_240a34:
    // 0x240a34: 0x601fff6  bgez        $s0, . + 4 + (-0xA << 2)
label_240a38:
    if (ctx->pc == 0x240A38u) {
        ctx->pc = 0x240A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A34u;
        // 0x240a38: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A3Cu;
        goto label_240a3c;
    }
    ctx->pc = 0x240A34u;
    {
        const bool branch_taken_0x240a34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x240A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A34u;
        // 0x240a38: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a34) {
            ctx->pc = 0x240A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240a10;
        }
    }
    ctx->pc = 0x240A3Cu;
label_240a3c:
    // 0x240a3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x240a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_240a40:
    // 0x240a40: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x240a40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240a44:
    // 0x240a44: 0x2451fe90  addiu       $s1, $v0, -0x170
    ctx->pc = 0x240a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966928));
label_240a48:
    // 0x240a48: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x240a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_240a4c:
    // 0x240a4c: 0x0  nop
    ctx->pc = 0x240a4cu;
    // NOP
label_240a50:
    // 0x240a50: 0x8e42029c  lw          $v0, 0x29C($s2)
    ctx->pc = 0x240a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_240a54:
    // 0x240a54: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x240a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_240a58:
    // 0x240a58: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_240a5c:
    if (ctx->pc == 0x240A5Cu) {
        ctx->pc = 0x240A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A58u;
        // 0x240a5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A60u;
        goto label_240a60;
    }
    ctx->pc = 0x240A58u;
    {
        const bool branch_taken_0x240a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a58) {
            ctx->pc = 0x240A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A58u;
            // 0x240a5c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240A84u;
            goto label_240a84;
        }
    }
    ctx->pc = 0x240A60u;
label_240a60:
    // 0x240a60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x240a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_240a64:
    // 0x240a64: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x240a64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_240a68:
    // 0x240a68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x240a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_240a6c:
    // 0x240a6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_240a70:
    if (ctx->pc == 0x240A70u) {
        ctx->pc = 0x240A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A6Cu;
        // 0x240a70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A74u;
        goto label_240a74;
    }
    ctx->pc = 0x240A6Cu;
    {
        const bool branch_taken_0x240a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a6c) {
            ctx->pc = 0x240A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A6Cu;
            // 0x240a70: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240A84u;
            goto label_240a84;
        }
    }
    ctx->pc = 0x240A74u;
label_240a74:
    // 0x240a74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_240a78:
    // 0x240a78: 0x40f809  jalr        $v0
label_240a7c:
    if (ctx->pc == 0x240A7Cu) {
        ctx->pc = 0x240A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A78u;
        // 0x240a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A80u;
        goto label_240a80;
    }
    ctx->pc = 0x240A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240A80u);
        ctx->pc = 0x240A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A78u;
        // 0x240a7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240A78u, 0x240A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240A80u;
label_240a80:
    // 0x240a80: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x240a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_240a84:
    // 0x240a84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x240a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_240a88:
    // 0x240a88: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
label_240a8c:
    if (ctx->pc == 0x240A8Cu) {
        ctx->pc = 0x240A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A88u;
        // 0x240a8c: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240A90u;
        goto label_240a90;
    }
    ctx->pc = 0x240A88u;
    {
        const bool branch_taken_0x240a88 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x240A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A88u;
        // 0x240a8c: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a88) {
            ctx->pc = 0x240A50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240a50;
        }
    }
    ctx->pc = 0x240A90u;
label_240a90:
    // 0x240a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240a94:
    // 0x240a94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x240a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_240a98:
    // 0x240a98: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x240a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_240a9c:
    // 0x240a9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x240a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_240aa0:
    // 0x240aa0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x240aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240aa4:
    // 0x240aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240aa8:
    // 0x240aa8: 0x808f512  j           func_23D448
label_240aac:
    if (ctx->pc == 0x240AACu) {
        ctx->pc = 0x240AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AA8u;
        // 0x240aac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240AB0u;
        goto label_fallthrough_0x240aa8;
    }
    ctx->pc = 0x240AA8u;
    ctx->pc = 0x240AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240AA8u;
    // 0x240aac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D448u;
    sub_0023D448_0x23d448(rdram, ctx, runtime); return;
label_fallthrough_0x240aa8:
    ctx->pc = 0x240AB0u;
}
