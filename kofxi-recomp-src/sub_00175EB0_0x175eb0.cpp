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

// Function: sub_00175EB0
// Address: 0x175eb0 - 0x175ee0
void sub_00175EB0_0x175eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175EB0_0x175eb0");
#endif

    ctx->pc = 0x175eb0u;

    // 0x175eb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175eb4: 0xac40a208  sw          $zero, -0x5DF8($v0)
    ctx->pc = 0x175eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943240), GPR_U32(ctx, 0));
    // 0x175eb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175ebc: 0xac40a20c  sw          $zero, -0x5DF4($v0)
    ctx->pc = 0x175ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943244), GPR_U32(ctx, 0));
    // 0x175ec0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175ec4: 0xac40a210  sw          $zero, -0x5DF0($v0)
    ctx->pc = 0x175ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943248), GPR_U32(ctx, 0));
    // 0x175ec8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175ecc: 0xac40a200  sw          $zero, -0x5E00($v0)
    ctx->pc = 0x175eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943232), GPR_U32(ctx, 0));
    // 0x175ed0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x175ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x175ed4: 0x805d834  j           func_1760D0
    ctx->pc = 0x175ED4u;
    ctx->pc = 0x175ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175ED4u;
    // 0x175ed8: 0xac40a204  sw          $zero, -0x5DFC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943236), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1760D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1760D0u, 0x175ED4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x175EDCu;
    // 0x175edc: 0x0  nop
    ctx->pc = 0x175edcu;
    // NOP
    if (ctx->pc == 0x175edcu) { ctx->pc = 0x175ee0u; }
}
