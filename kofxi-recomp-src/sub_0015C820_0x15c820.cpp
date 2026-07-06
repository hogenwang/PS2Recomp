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

// Function: sub_0015C820
// Address: 0x15c820 - 0x15c870
void sub_0015C820_0x15c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C820_0x15c820");
#endif

    ctx->pc = 0x15c820u;

    // 0x15c820: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15C820u;
    {
        const bool branch_taken_0x15c820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c820) {
            ctx->pc = 0x15C864u;
            goto label_15c864;
        }
    }
    ctx->pc = 0x15C828u;
    // 0x15c828: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c82c: 0x90634060  lbu         $v1, 0x4060($v1)
    ctx->pc = 0x15c82cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x15c830: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x15c830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x15c834: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C834u;
    {
        const bool branch_taken_0x15c834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C834u;
        // 0x15c838: 0x8c890010  lw          $t1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c834) {
            ctx->pc = 0x15C85Cu;
            goto label_15c85c;
        }
    }
    ctx->pc = 0x15C83Cu;
    // 0x15c83c: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x15c83cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c840: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x15c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c844: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x15c844u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x15c848: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15c848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15c84c: 0x24e73fe0  addiu       $a3, $a3, 0x3FE0
    ctx->pc = 0x15c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16352));
    // 0x15c850: 0xa0644060  sb          $a0, 0x4060($v1)
    ctx->pc = 0x15c850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16480), (uint8_t)GPR_U32(ctx, 4));
    // 0x15c854: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x15c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x15c858: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x15c858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_15c85c:
    // 0x15c85c: 0xa52505ec  sh          $a1, 0x5EC($t1)
    ctx->pc = 0x15c85cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1516), (uint16_t)GPR_U32(ctx, 5));
    // 0x15c860: 0xa52605ee  sh          $a2, 0x5EE($t1)
    ctx->pc = 0x15c860u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1518), (uint16_t)GPR_U32(ctx, 6));
label_15c864:
    // 0x15c864: 0x3e00008  jr          $ra
    ctx->pc = 0x15C864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C86Cu;
    // 0x15c86c: 0x0  nop
    ctx->pc = 0x15c86cu;
    // NOP
}
