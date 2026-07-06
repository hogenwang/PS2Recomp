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

// Function: sub_001BA088
// Address: 0x1ba088 - 0x1ba0c8
void sub_001BA088_0x1ba088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA088_0x1ba088");
#endif

    switch (ctx->pc) {
        case 0x1ba0a4u: goto label_1ba0a4;
        case 0x1ba0b0u: goto label_1ba0b0;
        default: break;
    }

    ctx->pc = 0x1ba088u;

    // 0x1ba088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba09c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA09Cu;
    SET_GPR_U32(ctx, 31, 0x1BA0A4u);
    ctx->pc = 0x1BA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA09Cu;
    // 0x1ba0a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA09Cu, 0x1BA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0A4u;
label_1ba0a4:
    // 0x1ba0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0a8: 0xc06e832  jal         func_1BA0C8
    ctx->pc = 0x1BA0A8u;
    SET_GPR_U32(ctx, 31, 0x1BA0B0u);
    ctx->pc = 0x1BA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA0A8u;
    // 0x1ba0ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA0C8u, 0x1BA0A8u, 0x1BA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0B0u;
label_1ba0b0:
    // 0x1ba0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba0bc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BA0BCu;
    ctx->pc = 0x1BA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA0BCu;
    // 0x1ba0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA0C4u;
    // 0x1ba0c4: 0x0  nop
    ctx->pc = 0x1ba0c4u;
    // NOP
}
