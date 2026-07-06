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

// Function: sub_001E7E78
// Address: 0x1e7e78 - 0x1e7ec8
void sub_001E7E78_0x1e7e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7E78_0x1e7e78");
#endif

    switch (ctx->pc) {
        case 0x1e7e8cu: goto label_1e7e8c;
        case 0x1e7eb4u: goto label_1e7eb4;
        default: break;
    }

    ctx->pc = 0x1e7e78u;

    // 0x1e7e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7e80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e7e84: 0xc06dba6  jal         func_1B6E98
    ctx->pc = 0x1E7E84u;
    SET_GPR_U32(ctx, 31, 0x1E7E8Cu);
    ctx->pc = 0x1E7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E84u;
    // 0x1e7e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E98u, 0x1E7E84u, 0x1E7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E8Cu;
label_1e7e8c:
    // 0x1e7e8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e98: 0x806dada  j           func_1B6B68
    ctx->pc = 0x1E7E98u;
    ctx->pc = 0x1E7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E98u;
    // 0x1e7e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B68u;
    sub_001B6B68_0x1b6b68(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7EA0u;
    // 0x1e7ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7ea8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e7eac: 0xc06dbcc  jal         func_1B6F30
    ctx->pc = 0x1E7EACu;
    SET_GPR_U32(ctx, 31, 0x1E7EB4u);
    ctx->pc = 0x1E7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7EACu;
    // 0x1e7eb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F30u, 0x1E7EACu, 0x1E7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7EB4u;
label_1e7eb4:
    // 0x1e7eb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ec0: 0x806daf6  j           func_1B6BD8
    ctx->pc = 0x1E7EC0u;
    ctx->pc = 0x1E7EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7EC0u;
    // 0x1e7ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BD8u;
    sub_001B6BD8_0x1b6bd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7EC8u;
}
