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

// Function: sub_0018B4F0
// Address: 0x18b4f0 - 0x18b570
void sub_0018B4F0_0x18b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B4F0_0x18b4f0");
#endif

    switch (ctx->pc) {
        case 0x18b508u: goto label_18b508;
        default: break;
    }

    ctx->pc = 0x18b4f0u;

    // 0x18b4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b500: 0xc062804  jal         func_18A010
    ctx->pc = 0x18B500u;
    SET_GPR_U32(ctx, 31, 0x18B508u);
    ctx->pc = 0x18B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B500u;
    // 0x18b504: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x18B500u, 0x18B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B508u;
label_18b508:
    // 0x18b508: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x18b508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x18b50c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x18b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x18b510: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18b510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18b514: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x18b514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
    // 0x18b518: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x18b518u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b51c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x18b51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b520: 0x50850010  beql        $a0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18B520u;
    {
        const bool branch_taken_0x18b520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x18b520) {
            ctx->pc = 0x18B524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B520u;
            // 0x18b524: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B564u;
            goto label_18b564;
        }
    }
    ctx->pc = 0x18B528u;
    // 0x18b528: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x18b528u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x18b52c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18b52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x18b530: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B530u;
    {
        const bool branch_taken_0x18b530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b530) {
            ctx->pc = 0x18B534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B530u;
            // 0x18b534: 0xa4082a  slt         $at, $a1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B54Cu;
            goto label_18b54c;
        }
    }
    ctx->pc = 0x18B538u;
    // 0x18b538: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x18b538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18b53c: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B53Cu;
    {
        const bool branch_taken_0x18b53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b53c) {
            ctx->pc = 0x18B540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B53Cu;
            // 0x18b540: 0x8e030498  lw          $v1, 0x498($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B558u;
            goto label_18b558;
        }
    }
    ctx->pc = 0x18B544u;
    // 0x18b544: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18B544u;
    {
        const bool branch_taken_0x18b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b544) {
            ctx->pc = 0x18B560u;
            goto label_18b560;
        }
    }
    ctx->pc = 0x18B54Cu;
label_18b54c:
    // 0x18b54c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B54Cu;
    {
        const bool branch_taken_0x18b54c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b54c) {
            ctx->pc = 0x18B560u;
            goto label_18b560;
        }
    }
    ctx->pc = 0x18B554u;
    // 0x18b554: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x18b554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_18b558:
    // 0x18b558: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18b558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18b55c: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x18b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
label_18b560:
    // 0x18b560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18b564:
    // 0x18b564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b568: 0x3e00008  jr          $ra
    ctx->pc = 0x18B568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B568u;
        // 0x18b56c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B570u;
}
