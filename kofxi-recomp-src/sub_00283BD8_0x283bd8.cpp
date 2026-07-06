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

// Function: sub_00283BD8
// Address: 0x283bd8 - 0x283c18
void sub_00283BD8_0x283bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283BD8_0x283bd8");
#endif

    switch (ctx->pc) {
        case 0x283c14u: goto label_283c14;
        default: break;
    }

    ctx->pc = 0x283bd8u;

    // 0x283bd8: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x283bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x283bdc: 0x30a500c0  andi        $a1, $a1, 0xC0
    ctx->pc = 0x283bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)192);
    // 0x283be0: 0x30e7002f  andi        $a3, $a3, 0x2F
    ctx->pc = 0x283be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)47);
    // 0x283be4: 0xa71825  or          $v1, $a1, $a3
    ctx->pc = 0x283be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x283be8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x283be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x283bec: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x283becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x283bf0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283BF0u;
    {
        const bool branch_taken_0x283bf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x283BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BF0u;
        // 0x283bf4: 0xa0820016  sb          $v0, 0x16($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bf0) {
            ctx->pc = 0x283C0Cu;
            goto label_283c0c;
        }
    }
    ctx->pc = 0x283BF8u;
    // 0x283bf8: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x283bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x283bfc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x283bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x283c00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283C00u;
    {
        const bool branch_taken_0x283c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C00u;
        // 0x283c04: 0x34620020  ori         $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c00) {
            ctx->pc = 0x283C0Cu;
            goto label_283c0c;
        }
    }
    ctx->pc = 0x283C08u;
    // 0x283c08: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x283c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
label_283c0c:
    // 0x283c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x283C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C0Cu;
        // 0x283c10: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283C14u;
label_283c14:
    // 0x283c14: 0x0  nop
    ctx->pc = 0x283c14u;
    // NOP
    if (ctx->pc == 0x283c14u) { ctx->pc = 0x283c18u; }
}
