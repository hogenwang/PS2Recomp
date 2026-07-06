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

// Function: sub_0010FF30
// Address: 0x10ff30 - 0x10ffa8
void sub_0010FF30_0x10ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FF30_0x10ff30");
#endif

    ctx->pc = 0x10ff30u;

    // 0x10ff30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10ff30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff34: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10FF34u;
    {
        const bool branch_taken_0x10ff34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF34u;
        // 0x10ff38: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff34) {
            ctx->pc = 0x10FF74u;
            goto label_10ff74;
        }
    }
    ctx->pc = 0x10FF3Cu;
    // 0x10ff3c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x10ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x10ff40: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x10ff40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10ff44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10ff44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10ff48: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x10ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x10ff4c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x10ff4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10ff50: 0x248467d8  addiu       $a0, $a0, 0x67D8
    ctx->pc = 0x10ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26584));
    // 0x10ff54: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x10ff54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10ff58: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10ff5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ff60: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x10ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x10ff64: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x10ff64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x10ff68: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x10ff68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FF6Cu;
    {
        const bool branch_taken_0x10ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF6Cu;
        // 0x10ff70: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff6c) {
            ctx->pc = 0x10FF9Cu;
            goto label_10ff9c;
        }
    }
    ctx->pc = 0x10FF74u;
label_10ff74:
    // 0x10ff74: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10ff78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x10ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x10ff7c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x10ff7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10ff80: 0x248467d8  addiu       $a0, $a0, 0x67D8
    ctx->pc = 0x10ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26584));
    // 0x10ff84: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x10ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10ff88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ff8c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x10ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x10ff90: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x10ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x10ff94: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x10ff94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff98: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x10ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10ff9c:
    // 0x10ff9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ffa0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFA0u;
        // 0x10ffa4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFA8u;
}
