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

// Function: sub_001F8BF0
// Address: 0x1f8bf0 - 0x1f8c18
void sub_001F8BF0_0x1f8bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8BF0_0x1f8bf0");
#endif

    ctx->pc = 0x1f8bf0u;

    // 0x1f8bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8bf4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f8bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8bfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f8bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8c00: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1f8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1f8c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8c08: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1f8c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1f8c0c: 0x807f63c  j           func_1FD8F0
    ctx->pc = 0x1F8C0Cu;
    ctx->pc = 0x1F8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C0Cu;
    // 0x1f8c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8F0u, 0x1F8C0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F8C14u;
    // 0x1f8c14: 0x0  nop
    ctx->pc = 0x1f8c14u;
    // NOP
    if (ctx->pc == 0x1f8c14u) { ctx->pc = 0x1f8c18u; }
}
