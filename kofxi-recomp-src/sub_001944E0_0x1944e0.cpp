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

// Function: sub_001944E0
// Address: 0x1944e0 - 0x194560
void sub_001944E0_0x1944e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001944E0_0x1944e0");
#endif

    ctx->pc = 0x1944e0u;

    // 0x1944e0: 0x90830024  lbu         $v1, 0x24($a0)
    ctx->pc = 0x1944e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1944e4: 0x90a20026  lbu         $v0, 0x26($a1)
    ctx->pc = 0x1944e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x1944e8: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1944E8u;
    {
        const bool branch_taken_0x1944e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1944e8) {
            ctx->pc = 0x1944ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1944E8u;
            // 0x1944ec: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194550u;
            goto label_194550;
        }
    }
    ctx->pc = 0x1944F0u;
    // 0x1944f0: 0x90830025  lbu         $v1, 0x25($a0)
    ctx->pc = 0x1944f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x1944f4: 0x90a20027  lbu         $v0, 0x27($a1)
    ctx->pc = 0x1944f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x1944f8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1944F8u;
    {
        const bool branch_taken_0x1944f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1944f8) {
            ctx->pc = 0x19454Cu;
            goto label_19454c;
        }
    }
    ctx->pc = 0x194500u;
    // 0x194500: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x194500u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x194504: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x194504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x194508: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x194508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19450c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19450Cu;
    {
        const bool branch_taken_0x19450c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19450c) {
            ctx->pc = 0x194510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19450Cu;
            // 0x194510: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x194520u;
            goto label_194520;
        }
    }
    ctx->pc = 0x194514u;
    // 0x194514: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x194514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x194518: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x194518u;
    {
        const bool branch_taken_0x194518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194518u;
        // 0x19451c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194518) {
            ctx->pc = 0x194554u;
            goto label_194554;
        }
    }
    ctx->pc = 0x194520u;
label_194520:
    // 0x194520: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x194520u;
    {
        const bool branch_taken_0x194520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194520) {
            ctx->pc = 0x194534u;
            goto label_194534;
        }
    }
    ctx->pc = 0x194528u;
    // 0x194528: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x194528u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19452c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19452Cu;
    {
        const bool branch_taken_0x19452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19452Cu;
        // 0x194530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19452c) {
            ctx->pc = 0x194554u;
            goto label_194554;
        }
    }
    ctx->pc = 0x194534u;
label_194534:
    // 0x194534: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x194534u;
    {
        const bool branch_taken_0x194534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x194534) {
            ctx->pc = 0x194538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194534u;
            // 0x194538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194554u;
            goto label_194554;
        }
    }
    ctx->pc = 0x19453Cu;
    // 0x19453c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x19453cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x194540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194544u;
    {
        const bool branch_taken_0x194544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194544u;
        // 0x194548: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194544) {
            ctx->pc = 0x194554u;
            goto label_194554;
        }
    }
    ctx->pc = 0x19454Cu;
label_19454c:
    // 0x19454c: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x19454cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_194550:
    // 0x194550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194554:
    // 0x194554: 0x3e00008  jr          $ra
    ctx->pc = 0x194554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19455Cu;
    // 0x19455c: 0x0  nop
    ctx->pc = 0x19455cu;
    // NOP
    if (ctx->pc == 0x19455cu) { ctx->pc = 0x194560u; }
}
