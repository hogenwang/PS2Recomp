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

// Function: sub_002294D0
// Address: 0x2294d0 - 0x229588
void sub_002294D0_0x2294d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002294D0_0x2294d0");
#endif

    ctx->pc = 0x2294d0u;

    // 0x2294d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2294d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294d4: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2294D4u;
    {
        const bool branch_taken_0x2294d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294D4u;
        // 0x2294d8: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294d4) {
            ctx->pc = 0x229580u;
            goto label_229580;
        }
    }
    ctx->pc = 0x2294DCu;
    // 0x2294dc: 0x8c43a734  lw          $v1, -0x58CC($v0)
    ctx->pc = 0x2294dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944564)));
    // 0x2294e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2294E0u;
    {
        const bool branch_taken_0x2294e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2294E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294E0u;
        // 0x2294e4: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294e0) {
            ctx->pc = 0x2294F4u;
            goto label_2294f4;
        }
    }
    ctx->pc = 0x2294E8u;
    // 0x2294e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2294e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2294ec: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x2294ECu;
    ctx->pc = 0x2294F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2294ECu;
    // 0x2294f0: 0x24844458  addiu       $a0, $a0, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x2294F4u;
label_2294f4:
    // 0x2294f4: 0x8c43a768  lw          $v1, -0x5898($v0)
    ctx->pc = 0x2294f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944616)));
    // 0x2294f8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2294F8u;
    {
        const bool branch_taken_0x2294f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2294FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294F8u;
        // 0x2294fc: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294f8) {
            ctx->pc = 0x229580u;
            goto label_229580;
        }
    }
    ctx->pc = 0x229500u;
    // 0x229500: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x229500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x229504: 0x8c62a73c  lw          $v0, -0x58C4($v1)
    ctx->pc = 0x229504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944572)));
    // 0x229508: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x229508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x22950c: 0x8c83a728  lw          $v1, -0x58D8($a0)
    ctx->pc = 0x22950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944552)));
    // 0x229510: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x229510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x229514: 0x8ca4a740  lw          $a0, -0x58C0($a1)
    ctx->pc = 0x229514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944576)));
    // 0x229518: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x229518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x22951c: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x22951cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229520: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x229520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x229524: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x229524u;
    {
        const bool branch_taken_0x229524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229524u;
        // 0x229528: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229524) {
            ctx->pc = 0x229538u;
            goto label_229538;
        }
    }
    ctx->pc = 0x22952Cu;
    // 0x22952c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22952cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x229530: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x229530u;
    ctx->pc = 0x229534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229530u;
    // 0x229534: 0x24844368  addiu       $a0, $a0, 0x4368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x229538u;
label_229538:
    // 0x229538: 0x8c62a744  lw          $v0, -0x58BC($v1)
    ctx->pc = 0x229538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944580)));
    // 0x22953c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x22953cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x229540: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x229540u;
    {
        const bool branch_taken_0x229540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229540) {
            ctx->pc = 0x229544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229540u;
            // 0x229544: 0x3c0401c1  lui         $a0, 0x1C1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229554u;
            goto label_229554;
        }
    }
    ctx->pc = 0x229548u;
    // 0x229548: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x229548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22954c: 0x808a2b4  j           func_228AD0
    ctx->pc = 0x22954Cu;
    ctx->pc = 0x229550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22954Cu;
    // 0x229550: 0x24844390  addiu       $a0, $a0, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AD0u;
    sub_00228AD0_0x228ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x229554u;
label_229554:
    // 0x229554: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x229554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x229558: 0x8c83a748  lw          $v1, -0x58B8($a0)
    ctx->pc = 0x229558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944584)));
    // 0x22955c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229560: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x229560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229564: 0x2cc30004  sltiu       $v1, $a2, 0x4
    ctx->pc = 0x229564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x229568: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x229568u;
    {
        const bool branch_taken_0x229568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x229568) {
            ctx->pc = 0x229578u;
            goto label_229578;
        }
    }
    ctx->pc = 0x229570u;
    // 0x229570: 0x808a72e  j           func_229CB8
    ctx->pc = 0x229570u;
    ctx->pc = 0x229574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229570u;
    // 0x229574: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229CB8u, 0x229570u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x229578u;
label_229578:
    // 0x229578: 0x808a80a  j           func_22A028
    ctx->pc = 0x229578u;
    ctx->pc = 0x22957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229578u;
    // 0x22957c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A028u, 0x229578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x229580u;
label_229580:
    // 0x229580: 0x3e00008  jr          $ra
    ctx->pc = 0x229580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229588u;
}
