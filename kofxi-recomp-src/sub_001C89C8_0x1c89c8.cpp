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

// Function: sub_001C89C8
// Address: 0x1c89c8 - 0x1c8aa8
void sub_001C89C8_0x1c89c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C89C8_0x1c89c8");
#endif

    switch (ctx->pc) {
        case 0x1c89c8u: goto label_1c89c8;
        case 0x1c89ccu: goto label_1c89cc;
        case 0x1c89d0u: goto label_1c89d0;
        case 0x1c89d4u: goto label_1c89d4;
        case 0x1c89d8u: goto label_1c89d8;
        case 0x1c89dcu: goto label_1c89dc;
        case 0x1c89e0u: goto label_1c89e0;
        case 0x1c89e4u: goto label_1c89e4;
        case 0x1c89e8u: goto label_1c89e8;
        case 0x1c89ecu: goto label_1c89ec;
        case 0x1c89f0u: goto label_1c89f0;
        case 0x1c89f4u: goto label_1c89f4;
        case 0x1c89f8u: goto label_1c89f8;
        case 0x1c89fcu: goto label_1c89fc;
        case 0x1c8a00u: goto label_1c8a00;
        case 0x1c8a04u: goto label_1c8a04;
        case 0x1c8a08u: goto label_1c8a08;
        case 0x1c8a0cu: goto label_1c8a0c;
        case 0x1c8a10u: goto label_1c8a10;
        case 0x1c8a14u: goto label_1c8a14;
        case 0x1c8a18u: goto label_1c8a18;
        case 0x1c8a1cu: goto label_1c8a1c;
        case 0x1c8a20u: goto label_1c8a20;
        case 0x1c8a24u: goto label_1c8a24;
        case 0x1c8a28u: goto label_1c8a28;
        case 0x1c8a2cu: goto label_1c8a2c;
        case 0x1c8a30u: goto label_1c8a30;
        case 0x1c8a34u: goto label_1c8a34;
        case 0x1c8a38u: goto label_1c8a38;
        case 0x1c8a3cu: goto label_1c8a3c;
        case 0x1c8a40u: goto label_1c8a40;
        case 0x1c8a44u: goto label_1c8a44;
        case 0x1c8a48u: goto label_1c8a48;
        case 0x1c8a4cu: goto label_1c8a4c;
        case 0x1c8a50u: goto label_1c8a50;
        case 0x1c8a54u: goto label_1c8a54;
        case 0x1c8a58u: goto label_1c8a58;
        case 0x1c8a5cu: goto label_1c8a5c;
        case 0x1c8a60u: goto label_1c8a60;
        case 0x1c8a64u: goto label_1c8a64;
        case 0x1c8a68u: goto label_1c8a68;
        case 0x1c8a6cu: goto label_1c8a6c;
        case 0x1c8a70u: goto label_1c8a70;
        case 0x1c8a74u: goto label_1c8a74;
        case 0x1c8a78u: goto label_1c8a78;
        case 0x1c8a7cu: goto label_1c8a7c;
        case 0x1c8a80u: goto label_1c8a80;
        case 0x1c8a84u: goto label_1c8a84;
        case 0x1c8a88u: goto label_1c8a88;
        case 0x1c8a8cu: goto label_1c8a8c;
        case 0x1c8a90u: goto label_1c8a90;
        case 0x1c8a94u: goto label_1c8a94;
        case 0x1c8a98u: goto label_1c8a98;
        case 0x1c8a9cu: goto label_1c8a9c;
        case 0x1c8aa0u: goto label_1c8aa0;
        case 0x1c8aa4u: goto label_1c8aa4;
        default: break;
    }

    ctx->pc = 0x1c89c8u;

label_1c89c8:
    // 0x1c89c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c89c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c89cc:
    // 0x1c89cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c89ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c89d0:
    // 0x1c89d0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_1c89d4:
    // 0x1c89d4: 0x8e425320  lw          $v0, 0x5320($s2)
    ctx->pc = 0x1c89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21280)));
label_1c89d8:
    // 0x1c89d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c89d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c89dc:
    // 0x1c89dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c89e0:
    // 0x1c89e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c89e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c89e4:
    // 0x1c89e4: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_1c89e8:
    if (ctx->pc == 0x1C89E8u) {
        ctx->pc = 0x1C89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89E4u;
        // 0x1c89e8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89ECu;
        goto label_1c89ec;
    }
    ctx->pc = 0x1C89E4u;
    {
        const bool branch_taken_0x1c89e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89E4u;
        // 0x1c89e8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89e4) {
            ctx->pc = 0x1C8A60u;
            goto label_1c8a60;
        }
    }
    ctx->pc = 0x1C89ECu;
label_1c89ec:
    // 0x1c89ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c89f0:
    // 0x1c89f0: 0x24505380  addiu       $s0, $v0, 0x5380
    ctx->pc = 0x1c89f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
label_1c89f4:
    // 0x1c89f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c89f8:
    // 0x1c89f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c89fc:
    if (ctx->pc == 0x1C89FCu) {
        ctx->pc = 0x1C89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89F8u;
        // 0x1c89fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A00u;
        goto label_1c8a00;
    }
    ctx->pc = 0x1C89F8u;
    {
        const bool branch_taken_0x1c89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89F8u;
        // 0x1c89fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89f8) {
            ctx->pc = 0x1C8A08u;
            goto label_1c8a08;
        }
    }
    ctx->pc = 0x1C8A00u;
label_1c8a00:
    // 0x1c8a00: 0xc073482  jal         func_1CD208
label_1c8a04:
    if (ctx->pc == 0x1C8A04u) {
        ctx->pc = 0x1C8A08u;
        goto label_1c8a08;
    }
    ctx->pc = 0x1C8A00u;
    SET_GPR_U32(ctx, 31, 0x1C8A08u);
    ctx->pc = 0x1CD208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD208u, 0x1C8A00u, 0x1C8A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A08u;
label_1c8a08:
    // 0x1c8a08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c8a0c:
    // 0x1c8a0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c8a10:
    if (ctx->pc == 0x1C8A10u) {
        ctx->pc = 0x1C8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A0Cu;
        // 0x1c8a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A14u;
        goto label_1c8a14;
    }
    ctx->pc = 0x1C8A0Cu;
    {
        const bool branch_taken_0x1c8a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A0Cu;
        // 0x1c8a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a0c) {
            ctx->pc = 0x1C8A24u;
            goto label_1c8a24;
        }
    }
    ctx->pc = 0x1C8A14u;
label_1c8a14:
    // 0x1c8a14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c8a18:
    // 0x1c8a18: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1c8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1c8a1c:
    // 0x1c8a1c: 0x60f809  jalr        $v1
label_1c8a20:
    if (ctx->pc == 0x1C8A20u) {
        ctx->pc = 0x1C8A24u;
        goto label_1c8a24;
    }
    ctx->pc = 0x1C8A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8A24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8A1Cu, 0x1C8A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8A24u;
label_1c8a24:
    // 0x1c8a24: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c8a28:
    // 0x1c8a28: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1c8a2c:
    if (ctx->pc == 0x1C8A2Cu) {
        ctx->pc = 0x1C8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A28u;
        // 0x1c8a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A30u;
        goto label_1c8a30;
    }
    ctx->pc = 0x1C8A28u;
    {
        const bool branch_taken_0x1c8a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a28) {
            ctx->pc = 0x1C8A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8A28u;
            // 0x1c8a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A3Cu;
            goto label_1c8a3c;
        }
    }
    ctx->pc = 0x1C8A30u;
label_1c8a30:
    // 0x1c8a30: 0xc073680  jal         func_1CDA00
label_1c8a34:
    if (ctx->pc == 0x1C8A34u) {
        ctx->pc = 0x1C8A38u;
        goto label_1c8a38;
    }
    ctx->pc = 0x1C8A30u;
    SET_GPR_U32(ctx, 31, 0x1C8A38u);
    ctx->pc = 0x1CDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA00u, 0x1C8A30u, 0x1C8A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A38u;
label_1c8a38:
    // 0x1c8a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c8a3c:
    // 0x1c8a3c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1c8a40:
    // 0x1c8a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8a44:
    // 0x1c8a44: 0xc049cb6  jal         func_1272D8
label_1c8a48:
    if (ctx->pc == 0x1C8A48u) {
        ctx->pc = 0x1C8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A44u;
        // 0x1c8a48: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A4Cu;
        goto label_1c8a4c;
    }
    ctx->pc = 0x1C8A44u;
    SET_GPR_U32(ctx, 31, 0x1C8A4Cu);
    ctx->pc = 0x1C8A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A44u;
    // 0x1c8a48: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C8A44u, 0x1C8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A4Cu;
label_1c8a4c:
    // 0x1c8a4c: 0x8e435320  lw          $v1, 0x5320($s2)
    ctx->pc = 0x1c8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21280)));
label_1c8a50:
    // 0x1c8a50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c8a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c8a54:
    // 0x1c8a54: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c8a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c8a58:
    // 0x1c8a58: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
label_1c8a5c:
    if (ctx->pc == 0x1C8A5Cu) {
        ctx->pc = 0x1C8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A58u;
        // 0x1c8a5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A60u;
        goto label_1c8a60;
    }
    ctx->pc = 0x1C8A58u;
    {
        const bool branch_taken_0x1c8a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a58) {
            ctx->pc = 0x1C8A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8A58u;
            // 0x1c8a5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C89F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c89f8;
        }
    }
    ctx->pc = 0x1C8A60u;
label_1c8a60:
    // 0x1c8a60: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c8a64:
    // 0x1c8a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8a68:
    // 0x1c8a68: 0x24515334  addiu       $s1, $v0, 0x5334
    ctx->pc = 0x1c8a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21300));
label_1c8a6c:
    // 0x1c8a6c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1c8a70:
    // 0x1c8a70: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_1c8a74:
    if (ctx->pc == 0x1C8A74u) {
        ctx->pc = 0x1C8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A70u;
        // 0x1c8a74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A78u;
        goto label_1c8a78;
    }
    ctx->pc = 0x1C8A70u;
    {
        const bool branch_taken_0x1c8a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A70u;
        // 0x1c8a74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a70) {
            ctx->pc = 0x1C8A94u;
            goto label_1c8a94;
        }
    }
    ctx->pc = 0x1C8A78u;
label_1c8a78:
    // 0x1c8a78: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c8a78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1c8a7c:
    // 0x1c8a7c: 0x2610532c  addiu       $s0, $s0, 0x532C
    ctx->pc = 0x1c8a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21292));
label_1c8a80:
    // 0x1c8a80: 0xc0454a2  jal         func_115288
label_1c8a84:
    if (ctx->pc == 0x1C8A84u) {
        ctx->pc = 0x1C8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A80u;
        // 0x1c8a84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A88u;
        goto label_1c8a88;
    }
    ctx->pc = 0x1C8A80u;
    SET_GPR_U32(ctx, 31, 0x1C8A88u);
    ctx->pc = 0x1C8A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A80u;
    // 0x1c8a84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115288u, 0x1C8A80u, 0x1C8A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A88u;
label_1c8a88:
    // 0x1c8a88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c8a8c:
    // 0x1c8a8c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1c8a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c8a90:
    // 0x1c8a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8a94:
    // 0x1c8a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c8a98:
    // 0x1c8a98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8a9c:
    // 0x1c8a9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c8aa0:
    // 0x1c8aa0: 0x3e00008  jr          $ra
label_1c8aa4:
    if (ctx->pc == 0x1C8AA4u) {
        ctx->pc = 0x1C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA0u;
        // 0x1c8aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8AA8u;
        goto label_fallthrough_0x1c8aa0;
    }
    ctx->pc = 0x1C8AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA0u;
        // 0x1c8aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8aa0:
    ctx->pc = 0x1C8AA8u;
}
