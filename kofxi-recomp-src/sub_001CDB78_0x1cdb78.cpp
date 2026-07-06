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

// Function: sub_001CDB78
// Address: 0x1cdb78 - 0x1cdb90
void sub_001CDB78_0x1cdb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDB78_0x1cdb78");
#endif

    ctx->pc = 0x1cdb78u;

    // 0x1cdb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdb7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cdb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdb80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb88: 0x8073696  j           func_1CDA58
    ctx->pc = 0x1CDB88u;
    ctx->pc = 0x1CDB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB88u;
    // 0x1cdb8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA58u, 0x1CDB88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDB90u;
}
