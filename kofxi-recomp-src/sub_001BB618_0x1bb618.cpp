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

// Function: sub_001BB618
// Address: 0x1bb618 - 0x1bb658
void sub_001BB618_0x1bb618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB618_0x1bb618");
#endif

    switch (ctx->pc) {
        case 0x1bb634u: goto label_1bb634;
        case 0x1bb640u: goto label_1bb640;
        default: break;
    }

    ctx->pc = 0x1bb618u;

    // 0x1bb618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb62c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB62Cu;
    SET_GPR_U32(ctx, 31, 0x1BB634u);
    ctx->pc = 0x1BB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB62Cu;
    // 0x1bb630: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB62Cu, 0x1BB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB634u;
label_1bb634:
    // 0x1bb634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb638: 0xc06ed96  jal         func_1BB658
    ctx->pc = 0x1BB638u;
    SET_GPR_U32(ctx, 31, 0x1BB640u);
    ctx->pc = 0x1BB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB638u;
    // 0x1bb63c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB658u, 0x1BB638u, 0x1BB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB640u;
label_1bb640:
    // 0x1bb640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb64c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB64Cu;
    ctx->pc = 0x1BB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB64Cu;
    // 0x1bb650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB654u;
    // 0x1bb654: 0x0  nop
    ctx->pc = 0x1bb654u;
    // NOP
}
