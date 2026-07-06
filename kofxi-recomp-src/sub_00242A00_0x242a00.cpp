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

// Function: sub_00242A00
// Address: 0x242a00 - 0x242a38
void sub_00242A00_0x242a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A00_0x242a00");
#endif

    ctx->pc = 0x242a00u;

    // 0x242a00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x242a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x242a04: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x242a04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x242a08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x242a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242A0Cu;
    {
        const bool branch_taken_0x242a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242a0c) {
            ctx->pc = 0x242A1Cu;
            goto label_242a1c;
        }
    }
    ctx->pc = 0x242A14u;
    // 0x242a14: 0x8090a6c  j           func_2429B0
    ctx->pc = 0x242A14u;
    ctx->pc = 0x2429B0u;
    sub_002429B0_0x2429b0(rdram, ctx, runtime); return;
    ctx->pc = 0x242A1Cu;
label_242a1c:
    // 0x242a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x242A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A24u;
    // 0x242a24: 0x0  nop
    ctx->pc = 0x242a24u;
    // NOP
    // 0x242a28: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x242a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x242A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A2Cu;
        // 0x242a30: 0xac40fed8  sw          $zero, -0x128($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A34u;
    // 0x242a34: 0x0  nop
    ctx->pc = 0x242a34u;
    // NOP
    if (ctx->pc == 0x242a34u) { ctx->pc = 0x242a38u; }
}
