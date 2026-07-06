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

// Function: sub_0021EF78
// Address: 0x21ef78 - 0x21efa8
void sub_0021EF78_0x21ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EF78_0x21ef78");
#endif

    ctx->pc = 0x21ef78u;

    // 0x21ef78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ef7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ef80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21ef84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef88: 0x8087bee  j           func_21EFB8
    ctx->pc = 0x21EF88u;
    ctx->pc = 0x21EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF88u;
    // 0x21ef8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFB8u;
    sub_0021EFB8_0x21efb8(rdram, ctx, runtime); return;
    ctx->pc = 0x21EF90u;
    // 0x21ef90: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ef90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ef94: 0x25efb7e8  addiu       $t7, $t7, -0x4818
    ctx->pc = 0x21ef94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948840));
    // 0x21ef98: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x21ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x21ef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF9Cu;
        // 0x21efa0: 0xade00004  sw          $zero, 0x4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EFA4u;
    // 0x21efa4: 0x0  nop
    ctx->pc = 0x21efa4u;
    // NOP
    if (ctx->pc == 0x21efa4u) { ctx->pc = 0x21efa8u; }
}
