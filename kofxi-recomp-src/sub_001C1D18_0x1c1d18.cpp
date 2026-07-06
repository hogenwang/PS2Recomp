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

// Function: sub_001C1D18
// Address: 0x1c1d18 - 0x1c1d40
void sub_001C1D18_0x1c1d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1D18_0x1c1d18");
#endif

    switch (ctx->pc) {
        case 0x1c1d2cu: goto label_1c1d2c;
        default: break;
    }

    ctx->pc = 0x1c1d18u;

    // 0x1c1d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1d20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1d24: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1C1D24u;
    SET_GPR_U32(ctx, 31, 0x1C1D2Cu);
    ctx->pc = 0x1C1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D24u;
    // 0x1c1d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1C1D24u, 0x1C1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D2Cu;
label_1c1d2c:
    // 0x1c1d2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1d30: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c1d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1d38: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1C1D38u;
    ctx->pc = 0x1C1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D38u;
    // 0x1c1d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1D40u;
}
