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

// Function: sub_001BB280
// Address: 0x1bb280 - 0x1bb2d0
void sub_001BB280_0x1bb280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB280_0x1bb280");
#endif

    switch (ctx->pc) {
        case 0x1bb2a4u: goto label_1bb2a4;
        case 0x1bb2b4u: goto label_1bb2b4;
        default: break;
    }

    ctx->pc = 0x1bb280u;

    // 0x1bb280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bb294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bb298: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bb298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bb29c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB29Cu;
    SET_GPR_U32(ctx, 31, 0x1BB2A4u);
    ctx->pc = 0x1BB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB29Cu;
    // 0x1bb2a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB29Cu, 0x1BB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2A4u;
label_1bb2a4:
    // 0x1bb2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2ac: 0xc06ecc8  jal         func_1BB320
    ctx->pc = 0x1BB2ACu;
    SET_GPR_U32(ctx, 31, 0x1BB2B4u);
    ctx->pc = 0x1BB2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2ACu;
    // 0x1bb2b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB320u, 0x1BB2ACu, 0x1BB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2B4u;
label_1bb2b4:
    // 0x1bb2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb2bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bb2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb2c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bb2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb2c4: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB2C4u;
    ctx->pc = 0x1BB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2C4u;
    // 0x1bb2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB2CCu;
    // 0x1bb2cc: 0x0  nop
    ctx->pc = 0x1bb2ccu;
    // NOP
}
