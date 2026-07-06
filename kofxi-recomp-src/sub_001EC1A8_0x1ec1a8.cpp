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

// Function: sub_001EC1A8
// Address: 0x1ec1a8 - 0x1ec1f8
void sub_001EC1A8_0x1ec1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC1A8_0x1ec1a8");
#endif

    switch (ctx->pc) {
        case 0x1ec1d8u: goto label_1ec1d8;
        default: break;
    }

    ctx->pc = 0x1ec1a8u;

    // 0x1ec1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec1ac: 0x28a20801  slti        $v0, $a1, 0x801
    ctx->pc = 0x1ec1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x1ec1b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec1b4: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x1ec1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1ec1b8: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x1ec1b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1ec1bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ec1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec1c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ec1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1c8: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x1ec1cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec1d0: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1EC1D0u;
    SET_GPR_U32(ctx, 31, 0x1EC1D8u);
    ctx->pc = 0x1EC1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1D0u;
    // 0x1ec1d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F78u, 0x1EC1D0u, 0x1EC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC1D8u;
label_1ec1d8:
    // 0x1ec1d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec1e0: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x1ec1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x1ec1e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec1e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec1e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec1e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec1ec: 0x807b388  j           func_1ECE20
    ctx->pc = 0x1EC1ECu;
    ctx->pc = 0x1EC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC1ECu;
    // 0x1ec1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE20u;
    sub_001ECE20_0x1ece20(rdram, ctx, runtime); return;
    ctx->pc = 0x1EC1F4u;
    // 0x1ec1f4: 0x0  nop
    ctx->pc = 0x1ec1f4u;
    // NOP
}
