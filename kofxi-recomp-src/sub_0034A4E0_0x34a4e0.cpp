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

// Function: sub_0034A4E0
// Address: 0x34a4e0 - 0x34a590
void sub_0034A4E0_0x34a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A4E0_0x34a4e0");
#endif

    switch (ctx->pc) {
        case 0x34a50cu: goto label_34a50c;
        case 0x34a518u: goto label_34a518;
        case 0x34a544u: goto label_34a544;
        case 0x34a550u: goto label_34a550;
        default: break;
    }

    ctx->pc = 0x34a4e0u;

    // 0x34a4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a4e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a4e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a4ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a4f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34a4f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a4f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a4f8: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x34a4f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x34a4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34a500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a504: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34a504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a508: 0x2652ef90  addiu       $s2, $s2, -0x1070
    ctx->pc = 0x34a508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294963088));
label_34a50c:
    // 0x34a50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a510: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A510u;
    SET_GPR_U32(ctx, 31, 0x34A518u);
    ctx->pc = 0x34A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A510u;
    // 0x34a514: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429B0u, 0x34A510u, 0x34A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A518u;
label_34a518:
    // 0x34a518: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A518u;
    {
        const bool branch_taken_0x34a518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a518) {
            ctx->pc = 0x34A51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A518u;
            // 0x34a51c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A52Cu;
            goto label_34a52c;
        }
    }
    ctx->pc = 0x34A520u;
    // 0x34a520: 0x36020001  ori         $v0, $s0, 0x1
    ctx->pc = 0x34a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x34a524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34A524u;
    {
        const bool branch_taken_0x34a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A524u;
        // 0x34a528: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a524) {
            ctx->pc = 0x34A538u;
            goto label_34a538;
        }
    }
    ctx->pc = 0x34A52Cu;
label_34a52c:
    // 0x34a52c: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x34a52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a530: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34A530u;
    {
        const bool branch_taken_0x34a530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A530u;
        // 0x34a534: 0x26520022  addiu       $s2, $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a530) {
            ctx->pc = 0x34A50Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a50c;
        }
    }
    ctx->pc = 0x34A538u;
label_34a538:
    // 0x34a538: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x34a538u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x34a53c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34a53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a540: 0x2673ece0  addiu       $s3, $s3, -0x1320
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962400));
label_34a544:
    // 0x34a544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a548: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A548u;
    SET_GPR_U32(ctx, 31, 0x34A550u);
    ctx->pc = 0x34A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A548u;
    // 0x34a54c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429B0u, 0x34A548u, 0x34A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A550u;
label_34a550:
    // 0x34a550: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A550u;
    {
        const bool branch_taken_0x34a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a550) {
            ctx->pc = 0x34A554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A550u;
            // 0x34a554: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A564u;
            goto label_34a564;
        }
    }
    ctx->pc = 0x34A558u;
    // 0x34a558: 0x36020002  ori         $v0, $s0, 0x2
    ctx->pc = 0x34a558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x34a55c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34A55Cu;
    {
        const bool branch_taken_0x34a55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A55Cu;
        // 0x34a560: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a55c) {
            ctx->pc = 0x34A570u;
            goto label_34a570;
        }
    }
    ctx->pc = 0x34A564u;
label_34a564:
    // 0x34a564: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x34a564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a568: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34A568u;
    {
        const bool branch_taken_0x34a568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A568u;
        // 0x34a56c: 0x26730022  addiu       $s3, $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a568) {
            ctx->pc = 0x34A544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a544;
        }
    }
    ctx->pc = 0x34A570u;
label_34a570:
    // 0x34a570: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34a570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a574: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34a578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a57c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a588: 0x3e00008  jr          $ra
    ctx->pc = 0x34A588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A588u;
        // 0x34a58c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A590u;
}
