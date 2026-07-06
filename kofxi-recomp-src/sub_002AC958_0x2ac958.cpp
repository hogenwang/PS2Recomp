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

// Function: sub_002AC958
// Address: 0x2ac958 - 0x2aca80
void sub_002AC958_0x2ac958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC958_0x2ac958");
#endif

    switch (ctx->pc) {
        case 0x2ac98cu: goto label_2ac98c;
        case 0x2ac994u: goto label_2ac994;
        case 0x2ac9a0u: goto label_2ac9a0;
        case 0x2ac9a8u: goto label_2ac9a8;
        case 0x2ac9c8u: goto label_2ac9c8;
        case 0x2ac9d0u: goto label_2ac9d0;
        case 0x2ac9e8u: goto label_2ac9e8;
        case 0x2ac9f8u: goto label_2ac9f8;
        case 0x2aca18u: goto label_2aca18;
        case 0x2aca2cu: goto label_2aca2c;
        case 0x2aca40u: goto label_2aca40;
        case 0x2aca5cu: goto label_2aca5c;
        default: break;
    }

    ctx->pc = 0x2ac958u;

    // 0x2ac958: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ac958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ac95c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ac95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ac960: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ac960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ac964: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ac964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ac968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac96c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ac96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ac970: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ac970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ac974: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ac974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac978: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ac978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ac97c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ac97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ac980: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ac980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ac984: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2AC984u;
    SET_GPR_U32(ctx, 31, 0x2AC98Cu);
    ctx->pc = 0x2AC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC984u;
    // 0x2ac988: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x2AC984u, 0x2AC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC98Cu;
label_2ac98c:
    // 0x2ac98c: 0xc0a63ae  jal         func_298EB8
    ctx->pc = 0x2AC98Cu;
    SET_GPR_U32(ctx, 31, 0x2AC994u);
    ctx->pc = 0x2AC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC98Cu;
    // 0x2ac990: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EB8u, 0x2AC98Cu, 0x2AC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC994u;
label_2ac994:
    // 0x2ac994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ac994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac998: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AC998u;
    SET_GPR_U32(ctx, 31, 0x2AC9A0u);
    ctx->pc = 0x2AC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC998u;
    // 0x2ac99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AC998u, 0x2AC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC9A0u;
label_2ac9a0:
    // 0x2ac9a0: 0xc0a5afa  jal         func_296BE8
    ctx->pc = 0x2AC9A0u;
    SET_GPR_U32(ctx, 31, 0x2AC9A8u);
    ctx->pc = 0x2AC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9A0u;
    // 0x2ac9a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BE8u, 0x2AC9A0u, 0x2AC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC9A8u;
label_2ac9a8:
    // 0x2ac9a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ac9a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9ac: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ac9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac9b0: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2ac9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2ac9b4: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AC9B4u;
    {
        const bool branch_taken_0x2ac9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9B4u;
        // 0x2ac9b8: 0x245200a8  addiu       $s2, $v0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac9b4) {
            ctx->pc = 0x2ACA54u;
            goto label_2aca54;
        }
    }
    ctx->pc = 0x2AC9BCu;
    // 0x2ac9bc: 0x27b50004  addiu       $s5, $sp, 0x4
    ctx->pc = 0x2ac9bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2ac9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9c4: 0x0  nop
    ctx->pc = 0x2ac9c4u;
    // NOP
label_2ac9c8:
    // 0x2ac9c8: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AC9C8u;
    SET_GPR_U32(ctx, 31, 0x2AC9D0u);
    ctx->pc = 0x2AC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9C8u;
    // 0x2ac9cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AC9C8u, 0x2AC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC9D0u;
label_2ac9d0:
    // 0x2ac9d0: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x2ac9d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2ac9d4: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2ac9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ac9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9dc: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2ac9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ac9e0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AC9E0u;
    SET_GPR_U32(ctx, 31, 0x2AC9E8u);
    ctx->pc = 0x2AC9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9E0u;
    // 0x2ac9e4: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AC9E0u, 0x2AC9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC9E8u;
label_2ac9e8:
    // 0x2ac9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ac9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac9f0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AC9F0u;
    SET_GPR_U32(ctx, 31, 0x2AC9F8u);
    ctx->pc = 0x2AC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC9F0u;
    // 0x2ac9f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AC9F0u, 0x2AC9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC9F8u;
label_2ac9f8:
    // 0x2ac9f8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2ac9f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca00: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2aca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2aca04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aca08: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2aca08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aca0c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x2aca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2aca10: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2ACA10u;
    SET_GPR_U32(ctx, 31, 0x2ACA18u);
    ctx->pc = 0x2ACA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA10u;
    // 0x2aca14: 0x8c66006c  lw          $a2, 0x6C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2ACA10u, 0x2ACA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA18u;
label_2aca18:
    // 0x2aca18: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2aca18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2aca1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca20: 0x8ca60090  lw          $a2, 0x90($a1)
    ctx->pc = 0x2aca20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x2aca24: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2ACA24u;
    SET_GPR_U32(ctx, 31, 0x2ACA2Cu);
    ctx->pc = 0x2ACA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA24u;
    // 0x2aca28: 0x24a50094  addiu       $a1, $a1, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2ACA24u, 0x2ACA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA2Cu;
label_2aca2c:
    // 0x2aca2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2aca2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2aca34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca38: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2ACA38u;
    SET_GPR_U32(ctx, 31, 0x2ACA40u);
    ctx->pc = 0x2ACA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA38u;
    // 0x2aca3c: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2ACA38u, 0x2ACA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA40u;
label_2aca40:
    // 0x2aca40: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2aca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2aca44: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2aca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x2aca48: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2aca48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2aca4c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2ACA4Cu;
    {
        const bool branch_taken_0x2aca4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA4Cu;
        // 0x2aca50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aca4c) {
            ctx->pc = 0x2AC9C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac9c8;
        }
    }
    ctx->pc = 0x2ACA54u;
label_2aca54:
    // 0x2aca54: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2ACA54u;
    SET_GPR_U32(ctx, 31, 0x2ACA5Cu);
    ctx->pc = 0x2ACA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACA54u;
    // 0x2aca58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2ACA54u, 0x2ACA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACA5Cu;
label_2aca5c:
    // 0x2aca5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2aca5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aca60: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2aca60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aca64: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2aca64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aca68: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2aca68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aca6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2aca6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aca70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2aca70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aca74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2aca74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aca78: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACA78u;
        // 0x2aca7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA80u;
}
