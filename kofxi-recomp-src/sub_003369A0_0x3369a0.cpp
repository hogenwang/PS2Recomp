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

// Function: sub_003369A0
// Address: 0x3369a0 - 0x336a10
void sub_003369A0_0x3369a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003369A0_0x3369a0");
#endif

    ctx->pc = 0x3369a0u;

    // 0x3369a0: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x3369a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3369a4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3369a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3369a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3369a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3369ac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3369ACu;
    {
        const bool branch_taken_0x3369ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3369ac) {
            ctx->pc = 0x3369B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3369ACu;
            // 0x3369b0: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3369D8u;
            goto label_3369d8;
        }
    }
    ctx->pc = 0x3369B4u;
    // 0x3369b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3369b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3369b8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3369b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3369bc: 0x9442ea22  lhu         $v0, -0x15DE($v0)
    ctx->pc = 0x3369bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961698)));
    // 0x3369c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3369c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3369c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3369C4u;
    {
        const bool branch_taken_0x3369c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3369c4) {
            ctx->pc = 0x3369D4u;
            goto label_3369d4;
        }
    }
    ctx->pc = 0x3369CCu;
    // 0x3369cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3369CCu;
    {
        const bool branch_taken_0x3369cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369CCu;
        // 0x3369d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369cc) {
            ctx->pc = 0x336A04u;
            goto label_336a04;
        }
    }
    ctx->pc = 0x3369D4u;
label_3369d4:
    // 0x3369d4: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3369d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_3369d8:
    // 0x3369d8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3369D8u;
    {
        const bool branch_taken_0x3369d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3369d8) {
            ctx->pc = 0x3369DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3369D8u;
            // 0x3369dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336A04u;
            goto label_336a04;
        }
    }
    ctx->pc = 0x3369E0u;
    // 0x3369e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3369e4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3369e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3369e8: 0x9442ea2e  lhu         $v0, -0x15D2($v0)
    ctx->pc = 0x3369e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961710)));
    // 0x3369ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3369ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3369f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3369F0u;
    {
        const bool branch_taken_0x3369f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3369f0) {
            ctx->pc = 0x336A00u;
            goto label_336a00;
        }
    }
    ctx->pc = 0x3369F8u;
    // 0x3369f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3369F8u;
    {
        const bool branch_taken_0x3369f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369F8u;
        // 0x3369fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369f8) {
            ctx->pc = 0x336A04u;
            goto label_336a04;
        }
    }
    ctx->pc = 0x336A00u;
label_336a00:
    // 0x336a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336a04:
    // 0x336a04: 0x3e00008  jr          $ra
    ctx->pc = 0x336A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336A0Cu;
    // 0x336a0c: 0x0  nop
    ctx->pc = 0x336a0cu;
    // NOP
}
