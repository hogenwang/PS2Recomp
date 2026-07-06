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

// Function: sub_0010FFA8
// Address: 0x10ffa8 - 0x10fff8
void sub_0010FFA8_0x10ffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FFA8_0x10ffa8");
#endif

    ctx->pc = 0x10ffa8u;

    // 0x10ffa8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10ffa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ffac: 0x4c1000b  bgez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x10FFACu;
    {
        const bool branch_taken_0x10ffac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x10FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFACu;
        // 0x10ffb0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ffac) {
            ctx->pc = 0x10FFDCu;
            goto label_10ffdc;
        }
    }
    ctx->pc = 0x10FFB4u;
    // 0x10ffb4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x10ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x10ffb8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x10ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10ffbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10ffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10ffc0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10ffc4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x10ffc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x10ffc8: 0x8c6467e4  lw          $a0, 0x67E4($v1)
    ctx->pc = 0x10ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26596)));
    // 0x10ffcc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x10ffccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10ffd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10ffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFD4u;
        // 0x10ffd8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFDCu;
label_10ffdc:
    // 0x10ffdc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x10ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x10ffe0: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x10ffe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10ffe4: 0x8c8367ec  lw          $v1, 0x67EC($a0)
    ctx->pc = 0x10ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26604)));
    // 0x10ffe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ffec: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFECu;
        // 0x10fff0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFF4u;
    // 0x10fff4: 0x0  nop
    ctx->pc = 0x10fff4u;
    // NOP
}
