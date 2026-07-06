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

// Function: sub_00261678
// Address: 0x261678 - 0x2616b8
void sub_00261678_0x261678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261678_0x261678");
#endif

    ctx->pc = 0x261678u;

    // 0x261678: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x261678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x26167c: 0x8c8319f0  lw          $v1, 0x19F0($a0)
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6640)));
    // 0x261680: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x261680u;
    {
        const bool branch_taken_0x261680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x261684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261680u;
        // 0x261684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261680) {
            ctx->pc = 0x2616ACu;
            goto label_2616ac;
        }
    }
    ctx->pc = 0x261688u;
    // 0x261688: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x26168c: 0x8c6419f4  lw          $a0, 0x19F4($v1)
    ctx->pc = 0x26168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6644)));
    // 0x261690: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261690u;
    {
        const bool branch_taken_0x261690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x261694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261690u;
        // 0x261694: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261690) {
            ctx->pc = 0x2616ACu;
            goto label_2616ac;
        }
    }
    ctx->pc = 0x261698u;
    // 0x261698: 0x8c6419f8  lw          $a0, 0x19F8($v1)
    ctx->pc = 0x261698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6648)));
    // 0x26169c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26169Cu;
    {
        const bool branch_taken_0x26169c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2616A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26169Cu;
        // 0x2616a0: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26169c) {
            ctx->pc = 0x2616ACu;
            goto label_2616ac;
        }
    }
    ctx->pc = 0x2616A4u;
    // 0x2616a4: 0x8c6219fc  lw          $v0, 0x19FC($v1)
    ctx->pc = 0x2616a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6652)));
    // 0x2616a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2616a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2616ac:
    // 0x2616ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2616ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2616ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2616B4u;
    // 0x2616b4: 0x0  nop
    ctx->pc = 0x2616b4u;
    // NOP
}
