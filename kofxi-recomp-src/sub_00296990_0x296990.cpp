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

// Function: sub_00296990
// Address: 0x296990 - 0x296bc8
void sub_00296990_0x296990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296990_0x296990");
#endif

    switch (ctx->pc) {
        case 0x296a08u: goto label_296a08;
        case 0x296a1cu: goto label_296a1c;
        case 0x296a24u: goto label_296a24;
        case 0x296a30u: goto label_296a30;
        case 0x296a38u: goto label_296a38;
        case 0x296a64u: goto label_296a64;
        case 0x296a74u: goto label_296a74;
        case 0x296a8cu: goto label_296a8c;
        case 0x296aa0u: goto label_296aa0;
        case 0x296ab8u: goto label_296ab8;
        case 0x296ac0u: goto label_296ac0;
        case 0x296ad4u: goto label_296ad4;
        case 0x296ae4u: goto label_296ae4;
        case 0x296b08u: goto label_296b08;
        case 0x296b40u: goto label_296b40;
        case 0x296b80u: goto label_296b80;
        case 0x296b90u: goto label_296b90;
        default: break;
    }

    ctx->pc = 0x296990u;

    // 0x296990: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x296990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x296994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x296994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296998: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x296998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x29699c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x29699cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969a0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x2969a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2969a4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2969a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969a8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2969a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2969ac: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2969acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969b0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2969b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2969b4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2969b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969b8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2969b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2969bc: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2969bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969c0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2969c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2969c4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2969c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2969c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2969c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2969cc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2969ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2969d0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2969d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2969d4: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2969d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2969d8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x2969d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x2969dc: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x2969dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x2969e0: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x2969e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x2969e4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2969e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2969e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2969e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2969ec: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x2969ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2969f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2969F0u;
    {
        const bool branch_taken_0x2969f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2969F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969F0u;
        // 0x2969f4: 0x8c54000c  lw          $s4, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969f0) {
            ctx->pc = 0x296A00u;
            goto label_296a00;
        }
    }
    ctx->pc = 0x2969F8u;
    // 0x2969f8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2969F8u;
    {
        const bool branch_taken_0x2969f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969F8u;
        // 0x2969fc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2969f8) {
            ctx->pc = 0x296B98u;
            goto label_296b98;
        }
    }
    ctx->pc = 0x296A00u;
label_296a00:
    // 0x296a00: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x296A00u;
    SET_GPR_U32(ctx, 31, 0x296A08u);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x296A00u, 0x296A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A08u;
label_296a08:
    // 0x296a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a0c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x296A0Cu;
    {
        const bool branch_taken_0x296a0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x296A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A0Cu;
        // 0x296a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a0c) {
            ctx->pc = 0x296A30u;
            goto label_296a30;
        }
    }
    ctx->pc = 0x296A14u;
    // 0x296a14: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x296A14u;
    {
        const bool branch_taken_0x296a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A14u;
        // 0x296a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a14) {
            ctx->pc = 0x296B98u;
            goto label_296b98;
        }
    }
    ctx->pc = 0x296A1Cu;
label_296a1c:
    // 0x296a1c: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x296A1Cu;
    SET_GPR_U32(ctx, 31, 0x296A24u);
    ctx->pc = 0x296A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A1Cu;
    // 0x296a20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x296A1Cu, 0x296A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A24u;
label_296a24:
    // 0x296a24: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x296A24u;
    {
        const bool branch_taken_0x296a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A24u;
        // 0x296a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a24) {
            ctx->pc = 0x296B98u;
            goto label_296b98;
        }
    }
    ctx->pc = 0x296A2Cu;
    // 0x296a2c: 0x0  nop
    ctx->pc = 0x296a2cu;
    // NOP
label_296a30:
    // 0x296a30: 0xc0a5102  jal         func_294408
    ctx->pc = 0x296A30u;
    SET_GPR_U32(ctx, 31, 0x296A38u);
    ctx->pc = 0x296A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A30u;
    // 0x296a34: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x296A30u, 0x296A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A38u;
label_296a38:
    // 0x296a38: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x296A38u;
    {
        const bool branch_taken_0x296a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A38u;
        // 0x296a3c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a38) {
            ctx->pc = 0x296A1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296a1c;
        }
    }
    ctx->pc = 0x296A40u;
    // 0x296a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296a44: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x296a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x296a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296a4c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x296a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x296a50: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296A50u;
    {
        const bool branch_taken_0x296a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x296A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A50u;
        // 0x296a54: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a50) {
            ctx->pc = 0x296A64u;
            goto label_296a64;
        }
    }
    ctx->pc = 0x296A58u;
    // 0x296a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a5c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x296A5Cu;
    SET_GPR_U32(ctx, 31, 0x296A64u);
    ctx->pc = 0x296A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A5Cu;
    // 0x296a60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x296A5Cu, 0x296A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A64u;
label_296a64:
    // 0x296a64: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x296a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x296a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a6c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x296A6Cu;
    SET_GPR_U32(ctx, 31, 0x296A74u);
    ctx->pc = 0x296A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A6Cu;
    // 0x296a70: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x296A6Cu, 0x296A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A74u;
label_296a74:
    // 0x296a74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x296a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296a78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296A78u;
    {
        const bool branch_taken_0x296a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A78u;
        // 0x296a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a78) {
            ctx->pc = 0x296A8Cu;
            goto label_296a8c;
        }
    }
    ctx->pc = 0x296A80u;
    // 0x296a80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x296a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a84: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x296A84u;
    SET_GPR_U32(ctx, 31, 0x296A8Cu);
    ctx->pc = 0x296A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A84u;
    // 0x296a88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x296A84u, 0x296A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A8Cu;
label_296a8c:
    // 0x296a8c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x296a8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x296a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x296a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a98: 0xc0a5148  jal         func_294520
    ctx->pc = 0x296A98u;
    SET_GPR_U32(ctx, 31, 0x296AA0u);
    ctx->pc = 0x296A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A98u;
    // 0x296a9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x296A98u, 0x296AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AA0u;
label_296aa0:
    // 0x296aa0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x296aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296aa4: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x296aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x296aa8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x296AA8u;
    {
        const bool branch_taken_0x296aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296aa8) {
            ctx->pc = 0x296AF0u;
            goto label_296af0;
        }
    }
    ctx->pc = 0x296AB0u;
    // 0x296ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ab4: 0x0  nop
    ctx->pc = 0x296ab4u;
    // NOP
label_296ab8:
    // 0x296ab8: 0xc0a5102  jal         func_294408
    ctx->pc = 0x296AB8u;
    SET_GPR_U32(ctx, 31, 0x296AC0u);
    ctx->pc = 0x296ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AB8u;
    // 0x296abc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x296AB8u, 0x296AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AC0u;
label_296ac0:
    // 0x296ac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x296ac4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x296ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296acc: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x296ACCu;
    SET_GPR_U32(ctx, 31, 0x296AD4u);
    ctx->pc = 0x296AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296ACCu;
    // 0x296ad0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x296ACCu, 0x296AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AD4u;
label_296ad4:
    // 0x296ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ad8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x296ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296adc: 0xc0a5148  jal         func_294520
    ctx->pc = 0x296ADCu;
    SET_GPR_U32(ctx, 31, 0x296AE4u);
    ctx->pc = 0x296AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296ADCu;
    // 0x296ae0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x296ADCu, 0x296AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AE4u;
label_296ae4:
    // 0x296ae4: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x296ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x296ae8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x296AE8u;
    {
        const bool branch_taken_0x296ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AE8u;
        // 0x296aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ae8) {
            ctx->pc = 0x296AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296ab8;
        }
    }
    ctx->pc = 0x296AF0u;
label_296af0:
    // 0x296af0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x296AF0u;
    {
        const bool branch_taken_0x296af0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x296AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296AF0u;
        // 0x296af4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296af0) {
            ctx->pc = 0x296B30u;
            goto label_296b30;
        }
    }
    ctx->pc = 0x296AF8u;
    // 0x296af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x296af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296afc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x296AFCu;
    {
        const bool branch_taken_0x296afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296afc) {
            ctx->pc = 0x296B30u;
            goto label_296b30;
        }
    }
    ctx->pc = 0x296B04u;
    // 0x296b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296b08:
    // 0x296b08: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x296B08u;
    {
        const bool branch_taken_0x296b08 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B08u;
        // 0x296b0c: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b08) {
            ctx->pc = 0x296B1Cu;
            goto label_296b1c;
        }
    }
    ctx->pc = 0x296B10u;
    // 0x296b10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x296b10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296b14: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x296b14u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296b18: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x296b18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_296b1c:
    // 0x296b1c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x296b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x296b20: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x296B20u;
    {
        const bool branch_taken_0x296b20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B20u;
        // 0x296b24: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b20) {
            ctx->pc = 0x296B30u;
            goto label_296b30;
        }
    }
    ctx->pc = 0x296B28u;
    // 0x296b28: 0x1604fff7  bne         $s0, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x296B28u;
    {
        const bool branch_taken_0x296b28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x296b28) {
            ctx->pc = 0x296B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296b08;
        }
    }
    ctx->pc = 0x296B30u;
label_296b30:
    // 0x296b30: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x296B30u;
    {
        const bool branch_taken_0x296b30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B30u;
        // 0x296b34: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b30) {
            ctx->pc = 0x296B68u;
            goto label_296b68;
        }
    }
    ctx->pc = 0x296B38u;
    // 0x296b38: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x296B38u;
    {
        const bool branch_taken_0x296b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x296B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B38u;
        // 0x296b3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b38) {
            ctx->pc = 0x296B68u;
            goto label_296b68;
        }
    }
    ctx->pc = 0x296B40u;
label_296b40:
    // 0x296b40: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x296B40u;
    {
        const bool branch_taken_0x296b40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B40u;
        // 0x296b44: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b40) {
            ctx->pc = 0x296B54u;
            goto label_296b54;
        }
    }
    ctx->pc = 0x296B48u;
    // 0x296b48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x296b48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296b4c: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x296b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296b50: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x296b50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_296b54:
    // 0x296b54: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x296b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x296b58: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x296B58u;
    {
        const bool branch_taken_0x296b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B58u;
        // 0x296b5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b58) {
            ctx->pc = 0x296B68u;
            goto label_296b68;
        }
    }
    ctx->pc = 0x296B60u;
    // 0x296b60: 0x1604fff7  bne         $s0, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x296B60u;
    {
        const bool branch_taken_0x296b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x296b60) {
            ctx->pc = 0x296B40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296b40;
        }
    }
    ctx->pc = 0x296B68u;
label_296b68:
    // 0x296b68: 0x1660ffb1  bnez        $s3, . + 4 + (-0x4F << 2)
    ctx->pc = 0x296B68u;
    {
        const bool branch_taken_0x296b68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x296B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B68u;
        // 0x296b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b68) {
            ctx->pc = 0x296A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296a30;
        }
    }
    ctx->pc = 0x296B70u;
    // 0x296b70: 0x1680ffaf  bnez        $s4, . + 4 + (-0x51 << 2)
    ctx->pc = 0x296B70u;
    {
        const bool branch_taken_0x296b70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x296b70) {
            ctx->pc = 0x296A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296a30;
        }
    }
    ctx->pc = 0x296B78u;
    // 0x296b78: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x296B78u;
    SET_GPR_U32(ctx, 31, 0x296B80u);
    ctx->pc = 0x296B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B78u;
    // 0x296b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x296B78u, 0x296B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B80u;
label_296b80:
    // 0x296b80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x296b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b88: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296B88u;
    SET_GPR_U32(ctx, 31, 0x296B90u);
    ctx->pc = 0x296B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B88u;
    // 0x296b8c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296B88u, 0x296B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B90u;
label_296b90:
    // 0x296b90: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x296b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x296b94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x296b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_296b98:
    // 0x296b98: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x296b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x296b9c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x296b9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x296ba0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x296ba0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x296ba4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x296ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x296ba8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x296ba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x296bac: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x296bacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x296bb0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x296bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296bb4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x296bb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296bb8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x296bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296bbc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x296bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x296BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BC0u;
        // 0x296bc4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296BC8u;
}
