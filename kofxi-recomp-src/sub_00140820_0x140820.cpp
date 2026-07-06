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

// Function: sub_00140820
// Address: 0x140820 - 0x14083c
void sub_00140820_0x140820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140820_0x140820");
#endif

    switch (ctx->pc) {
        case 0x140828u: goto label_140828;
        case 0x140830u: goto label_140830;
        default: break;
    }

    ctx->pc = 0x140820u;

    // 0x140820: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140820u;
    SET_GPR_U32(ctx, 31, 0x140828u);
    ctx->pc = 0x140824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140820u;
    // 0x140824: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140820u, 0x140828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140828u;
label_140828:
    // 0x140828: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x140828u;
    {
        const bool branch_taken_0x140828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140828) {
            ctx->pc = 0x1408B4u;
            return;
        }
    }
    ctx->pc = 0x140830u;
label_140830:
    // 0x140830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140834: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x140834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x140838: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x140838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
}
