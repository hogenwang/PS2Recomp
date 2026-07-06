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

// Function: sub_002CF4B8
// Address: 0x2cf4b8 - 0x2cf530
void sub_002CF4B8_0x2cf4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF4B8_0x2cf4b8");
#endif

    switch (ctx->pc) {
        case 0x2cf4c8u: goto label_2cf4c8;
        case 0x2cf514u: goto label_2cf514;
        default: break;
    }

    ctx->pc = 0x2cf4b8u;

    // 0x2cf4b8: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2cf4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cf4bc: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2CF4BCu;
    {
        const bool branch_taken_0x2cf4bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4BCu;
        // 0x2cf4c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4bc) {
            ctx->pc = 0x2CF4F4u;
            goto label_2cf4f4;
        }
    }
    ctx->pc = 0x2CF4C4u;
    // 0x2cf4c4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2cf4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2cf4c8:
    // 0x2cf4c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cf4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf4cc: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF4CCu;
    {
        const bool branch_taken_0x2cf4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4CCu;
        // 0x2cf4d0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4cc) {
            ctx->pc = 0x2CF4E8u;
            goto label_2cf4e8;
        }
    }
    ctx->pc = 0x2CF4D4u;
    // 0x2cf4d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cf4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cf4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4DCu;
        // 0x2cf4e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF4E4u;
    // 0x2cf4e4: 0x0  nop
    ctx->pc = 0x2cf4e4u;
    // NOP
label_2cf4e8:
    // 0x2cf4e8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2cf4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2cf4ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CF4ECu;
    {
        const bool branch_taken_0x2cf4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4ECu;
        // 0x2cf4f0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4ec) {
            ctx->pc = 0x2CF4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf4c8;
        }
    }
    ctx->pc = 0x2CF4F4u;
label_2cf4f4:
    // 0x2cf4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4F4u;
        // 0x2cf4f8: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF4FCu;
    // 0x2cf4fc: 0x0  nop
    ctx->pc = 0x2cf4fcu;
    // NOP
    // 0x2cf500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf50c: 0xc0b3dd4  jal         func_2CF750
    ctx->pc = 0x2CF50Cu;
    SET_GPR_U32(ctx, 31, 0x2CF514u);
    ctx->pc = 0x2CF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF50Cu;
    // 0x2cf510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF750u, 0x2CF50Cu, 0x2CF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF514u;
label_2cf514:
    // 0x2cf514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf518: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2cf518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2cf51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf524: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cf524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cf528: 0x80b608e  j           func_2D8238
    ctx->pc = 0x2CF528u;
    ctx->pc = 0x2CF52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF528u;
    // 0x2cf52c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    sub_002D8238_0x2d8238(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF530u;
}
