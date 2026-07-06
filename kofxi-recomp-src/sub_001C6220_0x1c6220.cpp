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

// Function: sub_001C6220
// Address: 0x1c6220 - 0x1c6250
void sub_001C6220_0x1c6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6220_0x1c6220");
#endif

    switch (ctx->pc) {
        case 0x1c6234u: goto label_1c6234;
        case 0x1c623cu: goto label_1c623c;
        default: break;
    }

    ctx->pc = 0x1c6220u;

    // 0x1c6220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c622c: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C622Cu;
    SET_GPR_U32(ctx, 31, 0x1C6234u);
    ctx->pc = 0x1C6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C622Cu;
    // 0x1c6230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C622Cu, 0x1C6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6234u;
label_1c6234:
    // 0x1c6234: 0xc071894  jal         func_1C6250
    ctx->pc = 0x1C6234u;
    SET_GPR_U32(ctx, 31, 0x1C623Cu);
    ctx->pc = 0x1C6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6234u;
    // 0x1c6238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6250u, 0x1C6234u, 0x1C623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C623Cu;
label_1c623c:
    // 0x1c623c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c623cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6240: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6244: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C6244u;
    ctx->pc = 0x1C6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6244u;
    // 0x1c6248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C624Cu;
    // 0x1c624c: 0x0  nop
    ctx->pc = 0x1c624cu;
    // NOP
}
