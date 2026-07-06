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

// Function: sub_0024C8D0
// Address: 0x24c8d0 - 0x24cb98
void sub_0024C8D0_0x24c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C8D0_0x24c8d0");
#endif

    switch (ctx->pc) {
        case 0x24c948u: goto label_24c948;
        case 0x24c958u: goto label_24c958;
        case 0x24c98cu: goto label_24c98c;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9ccu: goto label_24c9cc;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24c9fcu: goto label_24c9fc;
        case 0x24ca1cu: goto label_24ca1c;
        case 0x24ca28u: goto label_24ca28;
        case 0x24ca38u: goto label_24ca38;
        case 0x24ca48u: goto label_24ca48;
        case 0x24ca80u: goto label_24ca80;
        case 0x24ca8cu: goto label_24ca8c;
        case 0x24cac8u: goto label_24cac8;
        case 0x24cad4u: goto label_24cad4;
        case 0x24cae0u: goto label_24cae0;
        case 0x24caecu: goto label_24caec;
        case 0x24cb18u: goto label_24cb18;
        case 0x24cb24u: goto label_24cb24;
        case 0x24cb30u: goto label_24cb30;
        case 0x24cb3cu: goto label_24cb3c;
        default: break;
    }

    ctx->pc = 0x24c8d0u;

    // 0x24c8d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24c8d4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24c8d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24c8dc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x24c8e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24c8e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c8e4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24c8e8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24c8ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24c8f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24c8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24c8f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24c8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c8fc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x24c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x24c900: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C900u;
    {
        const bool branch_taken_0x24c900 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C900u;
        // 0x24c904: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c900) {
            ctx->pc = 0x24C924u;
            goto label_24c924;
        }
    }
    ctx->pc = 0x24C908u;
    // 0x24c908: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24c90c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C90Cu;
    {
        const bool branch_taken_0x24c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C90Cu;
        // 0x24c910: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c90c) {
            ctx->pc = 0x24C920u;
            goto label_24c920;
        }
    }
    ctx->pc = 0x24C914u;
    // 0x24c914: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24c914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24c918: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24c91c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x24c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_24c920:
    // 0x24c920: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24c920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24c924:
    // 0x24c924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c928: 0x12e20005  beq         $s7, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C928u;
    {
        const bool branch_taken_0x24c928 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C928u;
        // 0x24c92c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c928) {
            ctx->pc = 0x24C940u;
            goto label_24c940;
        }
    }
    ctx->pc = 0x24C930u;
    // 0x24c930: 0x12e20038  beq         $s7, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x24C930u;
    {
        const bool branch_taken_0x24c930 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c930) {
            ctx->pc = 0x24CA14u;
            goto label_24ca14;
        }
    }
    ctx->pc = 0x24C938u;
    // 0x24c938: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x24C938u;
    {
        const bool branch_taken_0x24c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C938u;
        // 0x24c93c: 0xae770014  sw          $s7, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c938) {
            ctx->pc = 0x24CB68u;
            goto label_24cb68;
        }
    }
    ctx->pc = 0x24C940u;
label_24c940:
    // 0x24c940: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C940u;
    SET_GPR_U32(ctx, 31, 0x24C948u);
    ctx->pc = 0x24C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C940u;
    // 0x24c944: 0x8e640044  lw          $a0, 0x44($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C940u, 0x24C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C948u;
label_24c948:
    // 0x24c948: 0x9675001a  lhu         $s5, 0x1A($s3)
    ctx->pc = 0x24c948u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24c94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c950: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24C950u;
    SET_GPR_U32(ctx, 31, 0x24C958u);
    ctx->pc = 0x24C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C950u;
    // 0x24c954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24C950u, 0x24C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C958u;
label_24c958:
    // 0x24c958: 0x8e740058  lw          $s4, 0x58($s3)
    ctx->pc = 0x24c958u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x24c95c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c960: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24c960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24c964: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x24c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x24c968: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x24c968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24c96c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x24c96cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x24c970: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24c970u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24c974: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24c974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24c978: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24c978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c97c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24C97Cu;
    {
        const bool branch_taken_0x24c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C97Cu;
        // 0x24c980: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c97c) {
            ctx->pc = 0x24C9B8u;
            goto label_24c9b8;
        }
    }
    ctx->pc = 0x24C984u;
    // 0x24c984: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C984u;
    SET_GPR_U32(ctx, 31, 0x24C98Cu);
    ctx->pc = 0x24C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C984u;
    // 0x24c988: 0x8e640044  lw          $a0, 0x44($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C984u, 0x24C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C98Cu;
label_24c98c:
    // 0x24c98c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x24c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x24c990: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24c994: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x24c994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24c998: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24c998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x24c99c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24c9a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24c9a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c9a8: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x24c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x24c9ac: 0x9675001a  lhu         $s5, 0x1A($s3)
    ctx->pc = 0x24c9acu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24c9b0: 0x8e740058  lw          $s4, 0x58($s3)
    ctx->pc = 0x24c9b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x24c9b4: 0x0  nop
    ctx->pc = 0x24c9b4u;
    // NOP
label_24c9b8:
    // 0x24c9b8: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C9B8u;
    SET_GPR_U32(ctx, 31, 0x24C9C0u);
    ctx->pc = 0x24C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9B8u;
    // 0x24c9bc: 0x8e640044  lw          $a0, 0x44($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C9B8u, 0x24C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9C0u;
label_24c9c0:
    // 0x24c9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9c4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24C9C4u;
    SET_GPR_U32(ctx, 31, 0x24C9CCu);
    ctx->pc = 0x24C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9C4u;
    // 0x24c9c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24C9C4u, 0x24C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9CCu;
label_24c9cc:
    // 0x24c9cc: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x24c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x24c9d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24c9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24c9d4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24c9d8: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x24c9d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x24c9dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24c9e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24c9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24c9e4: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x24c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x24c9e8: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C9E8u;
    SET_GPR_U32(ctx, 31, 0x24C9F0u);
    ctx->pc = 0x24C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9E8u;
    // 0x24c9ec: 0x8e640044  lw          $a0, 0x44($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C9E8u, 0x24C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9F0u;
label_24c9f0:
    // 0x24c9f0: 0x9664001a  lhu         $a0, 0x1A($s3)
    ctx->pc = 0x24c9f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24c9f4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24C9F4u;
    SET_GPR_U32(ctx, 31, 0x24C9FCu);
    ctx->pc = 0x24C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9F4u;
    // 0x24c9f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24C9F4u, 0x24C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9FCu;
label_24c9fc:
    // 0x24c9fc: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x24c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x24ca00: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24ca00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24ca04: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x24ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x24ca08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24ca0c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x24CA0Cu;
    {
        const bool branch_taken_0x24ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA0Cu;
        // 0x24ca10: 0x2048024  and         $s0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca0c) {
            ctx->pc = 0x24CB58u;
            goto label_24cb58;
        }
    }
    ctx->pc = 0x24CA14u;
label_24ca14:
    // 0x24ca14: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CA14u;
    SET_GPR_U32(ctx, 31, 0x24CA1Cu);
    ctx->pc = 0x24CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA14u;
    // 0x24ca18: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CA14u, 0x24CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA1Cu;
label_24ca1c:
    // 0x24ca1c: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x24ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x24ca20: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CA20u;
    SET_GPR_U32(ctx, 31, 0x24CA28u);
    ctx->pc = 0x24CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA20u;
    // 0x24ca24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CA20u, 0x24CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA28u;
label_24ca28:
    // 0x24ca28: 0x96760018  lhu         $s6, 0x18($s3)
    ctx->pc = 0x24ca28u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x24ca2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24ca2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca30: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24CA30u;
    SET_GPR_U32(ctx, 31, 0x24CA38u);
    ctx->pc = 0x24CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA30u;
    // 0x24ca34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24CA30u, 0x24CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA38u;
label_24ca38:
    // 0x24ca38: 0x9675001a  lhu         $s5, 0x1A($s3)
    ctx->pc = 0x24ca38u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24ca3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24ca3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca40: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24CA40u;
    SET_GPR_U32(ctx, 31, 0x24CA48u);
    ctx->pc = 0x24CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA40u;
    // 0x24ca44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24CA40u, 0x24CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA48u;
label_24ca48:
    // 0x24ca48: 0x8e740058  lw          $s4, 0x58($s3)
    ctx->pc = 0x24ca48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x24ca4c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24ca4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24ca50: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x24ca50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24ca54: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x24ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x24ca58: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24ca58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24ca5c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x24ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x24ca60: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x24ca60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x24ca64: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24ca64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24ca68: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24ca6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ca70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CA70u;
    {
        const bool branch_taken_0x24ca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA70u;
        // 0x24ca74: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca70) {
            ctx->pc = 0x24CAC0u;
            goto label_24cac0;
        }
    }
    ctx->pc = 0x24CA78u;
    // 0x24ca78: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CA78u;
    SET_GPR_U32(ctx, 31, 0x24CA80u);
    ctx->pc = 0x24CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA78u;
    // 0x24ca7c: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CA78u, 0x24CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA80u;
label_24ca80:
    // 0x24ca80: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x24ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x24ca84: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CA84u;
    SET_GPR_U32(ctx, 31, 0x24CA8Cu);
    ctx->pc = 0x24CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA84u;
    // 0x24ca88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CA84u, 0x24CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA8Cu;
label_24ca8c:
    // 0x24ca8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24ca8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24ca90: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x24ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x24ca94: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x24ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x24ca98: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24ca98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24ca9c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x24ca9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x24caa0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24caa0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24caa4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24caa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24caa8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24caac: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x24caacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x24cab0: 0x9675001a  lhu         $s5, 0x1A($s3)
    ctx->pc = 0x24cab0u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24cab4: 0x8e740058  lw          $s4, 0x58($s3)
    ctx->pc = 0x24cab4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x24cab8: 0x96760018  lhu         $s6, 0x18($s3)
    ctx->pc = 0x24cab8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x24cabc: 0x0  nop
    ctx->pc = 0x24cabcu;
    // NOP
label_24cac0:
    // 0x24cac0: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CAC0u;
    SET_GPR_U32(ctx, 31, 0x24CAC8u);
    ctx->pc = 0x24CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAC0u;
    // 0x24cac4: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CAC0u, 0x24CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAC8u;
label_24cac8:
    // 0x24cac8: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x24cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x24cacc: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CACCu;
    SET_GPR_U32(ctx, 31, 0x24CAD4u);
    ctx->pc = 0x24CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CACCu;
    // 0x24cad0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CACCu, 0x24CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAD4u;
label_24cad4:
    // 0x24cad4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24cad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cad8: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24CAD8u;
    SET_GPR_U32(ctx, 31, 0x24CAE0u);
    ctx->pc = 0x24CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAD8u;
    // 0x24cadc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24CAD8u, 0x24CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAE0u;
label_24cae0:
    // 0x24cae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24cae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cae4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24CAE4u;
    SET_GPR_U32(ctx, 31, 0x24CAECu);
    ctx->pc = 0x24CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAE4u;
    // 0x24cae8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24CAE4u, 0x24CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAECu;
label_24caec:
    // 0x24caec: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24caecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24caf0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x24caf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24caf4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x24caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x24caf8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24caf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24cafc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x24cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x24cb00: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x24cb00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x24cb04: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24cb04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24cb08: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24cb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24cb0c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x24cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x24cb10: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CB10u;
    SET_GPR_U32(ctx, 31, 0x24CB18u);
    ctx->pc = 0x24CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB10u;
    // 0x24cb14: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CB10u, 0x24CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB18u;
label_24cb18:
    // 0x24cb18: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x24cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x24cb1c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24CB1Cu;
    SET_GPR_U32(ctx, 31, 0x24CB24u);
    ctx->pc = 0x24CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB1Cu;
    // 0x24cb20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24CB1Cu, 0x24CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB24u;
label_24cb24:
    // 0x24cb24: 0x96640018  lhu         $a0, 0x18($s3)
    ctx->pc = 0x24cb24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x24cb28: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24CB28u;
    SET_GPR_U32(ctx, 31, 0x24CB30u);
    ctx->pc = 0x24CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB28u;
    // 0x24cb2c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24CB28u, 0x24CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB30u;
label_24cb30:
    // 0x24cb30: 0x9664001a  lhu         $a0, 0x1A($s3)
    ctx->pc = 0x24cb30u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x24cb34: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24CB34u;
    SET_GPR_U32(ctx, 31, 0x24CB3Cu);
    ctx->pc = 0x24CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB34u;
    // 0x24cb38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24CB34u, 0x24CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB3Cu;
label_24cb3c:
    // 0x24cb3c: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x24cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x24cb40: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24cb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24cb44: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x24cb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24cb48: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x24cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24cb4c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24cb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24cb50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24cb54: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x24cb54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_24cb58:
    // 0x24cb58: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24cb58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24cb5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24cb60: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x24cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x24cb64: 0xae770014  sw          $s7, 0x14($s3)
    ctx->pc = 0x24cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 23));
label_24cb68:
    // 0x24cb68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24cb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24cb6c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24cb6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24cb70: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24cb70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24cb74: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24cb74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24cb78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24cb78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24cb7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24cb7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cb80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24cb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cb84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24cb84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cb88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x24CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB8Cu;
        // 0x24cb90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CB94u;
    // 0x24cb94: 0x0  nop
    ctx->pc = 0x24cb94u;
    // NOP
}
