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

// Function: sub_001B8050
// Address: 0x1b8050 - 0x1b8080
void sub_001B8050_0x1b8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8050_0x1b8050");
#endif

    switch (ctx->pc) {
        case 0x1b8064u: goto label_1b8064;
        case 0x1b806cu: goto label_1b806c;
        default: break;
    }

    ctx->pc = 0x1b8050u;

    // 0x1b8050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b805c: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B805Cu;
    SET_GPR_U32(ctx, 31, 0x1B8064u);
    ctx->pc = 0x1B8060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B805Cu;
    // 0x1b8060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B805Cu, 0x1B8064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8064u;
label_1b8064:
    // 0x1b8064: 0xc06e020  jal         func_1B8080
    ctx->pc = 0x1B8064u;
    SET_GPR_U32(ctx, 31, 0x1B806Cu);
    ctx->pc = 0x1B8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8064u;
    // 0x1b8068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8080u, 0x1B8064u, 0x1B806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B806Cu;
label_1b806c:
    // 0x1b806c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b806cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b8070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8074: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B8074u;
    ctx->pc = 0x1B8078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8074u;
    // 0x1b8078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B807Cu;
    // 0x1b807c: 0x0  nop
    ctx->pc = 0x1b807cu;
    // NOP
    if (ctx->pc == 0x1b807cu) { ctx->pc = 0x1b8080u; }
}
