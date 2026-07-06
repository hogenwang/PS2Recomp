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

// Function: sub_001F4608
// Address: 0x1f4608 - 0x1f46d0
void sub_001F4608_0x1f4608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4608_0x1f4608");
#endif

    switch (ctx->pc) {
        case 0x1f4624u: goto label_1f4624;
        case 0x1f4658u: goto label_1f4658;
        case 0x1f46a0u: goto label_1f46a0;
        default: break;
    }

    ctx->pc = 0x1f4608u;

    // 0x1f4608: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1f4608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1f460c: 0x24a39ab0  addiu       $v1, $a1, -0x6550
    ctx->pc = 0x1f460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941360));
    // 0x1f4610: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1f4610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f4614: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f4618: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1f4618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f461c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F461Cu;
    {
        const bool branch_taken_0x1f461c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f461c) {
            ctx->pc = 0x1F4620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F461Cu;
            // 0x1f4620: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4630u;
            goto label_1f4630;
        }
    }
    ctx->pc = 0x1F4624u;
label_1f4624:
    // 0x1f4624: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4624u;
        // 0x1f4628: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F462Cu;
    // 0x1f462c: 0x0  nop
    ctx->pc = 0x1f462cu;
    // NOP
label_1f4630:
    // 0x1f4630: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4630u;
    {
        const bool branch_taken_0x1f4630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4630u;
        // 0x1f4634: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4630) {
            ctx->pc = 0x1F4648u;
            goto label_1f4648;
        }
    }
    ctx->pc = 0x1F4638u;
    // 0x1f4638: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f463c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F463Cu;
    {
        const bool branch_taken_0x1f463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f463c) {
            ctx->pc = 0x1F46C4u;
            goto label_1f46c4;
        }
    }
    ctx->pc = 0x1F4644u;
    // 0x1f4644: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1f4644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_1f4648:
    // 0x1f4648: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f4648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f464c: 0x24449ad8  addiu       $a0, $v0, -0x6528
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941400));
    // 0x1f4650: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f4650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f4654: 0x0  nop
    ctx->pc = 0x1f4654u;
    // NOP
label_1f4658:
    // 0x1f4658: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F4658u;
    {
        const bool branch_taken_0x1f4658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4658u;
        // 0x1f465c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4658) {
            ctx->pc = 0x1F4624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4624;
        }
    }
    ctx->pc = 0x1F4660u;
    // 0x1f4660: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f4660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f4664: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1f4664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f4668: 0x0  nop
    ctx->pc = 0x1f4668u;
    // NOP
    // 0x1f466c: 0x0  nop
    ctx->pc = 0x1f466cu;
    // NOP
    // 0x1f4670: 0x0  nop
    ctx->pc = 0x1f4670u;
    // NOP
    // 0x1f4674: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F4674u;
    {
        const bool branch_taken_0x1f4674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4674) {
            ctx->pc = 0x1F4678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4674u;
            // 0x1f4678: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4658;
        }
    }
    ctx->pc = 0x1F467Cu;
    // 0x1f467c: 0x24a29ab0  addiu       $v0, $a1, -0x6550
    ctx->pc = 0x1f467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941360));
    // 0x1f4680: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x1f4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f4684: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F4684u;
    {
        const bool branch_taken_0x1f4684 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4684u;
        // 0x1f4688: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4684) {
            ctx->pc = 0x1F46C4u;
            goto label_1f46c4;
        }
    }
    ctx->pc = 0x1F468Cu;
    // 0x1f468c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1f4690: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f4690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4694: 0x24449ae0  addiu       $a0, $v0, -0x6520
    ctx->pc = 0x1f4694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941408));
    // 0x1f4698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f4698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f469c: 0x0  nop
    ctx->pc = 0x1f469cu;
    // NOP
label_1f46a0:
    // 0x1f46a0: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1F46A0u;
    {
        const bool branch_taken_0x1f46a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46A0u;
        // 0x1f46a4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f46a0) {
            ctx->pc = 0x1F4624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f4624;
        }
    }
    ctx->pc = 0x1F46A8u;
    // 0x1f46a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f46ac: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1f46acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f46b0: 0x0  nop
    ctx->pc = 0x1f46b0u;
    // NOP
    // 0x1f46b4: 0x0  nop
    ctx->pc = 0x1f46b4u;
    // NOP
    // 0x1f46b8: 0x0  nop
    ctx->pc = 0x1f46b8u;
    // NOP
    // 0x1f46bc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F46BCu;
    {
        const bool branch_taken_0x1f46bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f46bc) {
            ctx->pc = 0x1F46C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F46BCu;
            // 0x1f46c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F46A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f46a0;
        }
    }
    ctx->pc = 0x1F46C4u;
label_1f46c4:
    // 0x1f46c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F46C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F46C4u;
        // 0x1f46c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F46C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F46CCu;
    // 0x1f46cc: 0x0  nop
    ctx->pc = 0x1f46ccu;
    // NOP
    if (ctx->pc == 0x1f46ccu) { ctx->pc = 0x1f46d0u; }
}
