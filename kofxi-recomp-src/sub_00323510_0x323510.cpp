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

// Function: sub_00323510
// Address: 0x323510 - 0x323540
void sub_00323510_0x323510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323510_0x323510");
#endif

    switch (ctx->pc) {
        case 0x323528u: goto label_323528;
        default: break;
    }

    ctx->pc = 0x323510u;

    // 0x323510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32351c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32351cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323520: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323520u;
    SET_GPR_U32(ctx, 31, 0x323528u);
    ctx->pc = 0x323524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323520u;
    // 0x323524: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x323520u, 0x323528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323528u;
label_323528:
    // 0x323528: 0xa450000a  sh          $s0, 0xA($v0)
    ctx->pc = 0x323528u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 16));
    // 0x32352c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32352cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323534: 0x3e00008  jr          $ra
    ctx->pc = 0x323534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323534u;
        // 0x323538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32353Cu;
    // 0x32353c: 0x0  nop
    ctx->pc = 0x32353cu;
    // NOP
}
