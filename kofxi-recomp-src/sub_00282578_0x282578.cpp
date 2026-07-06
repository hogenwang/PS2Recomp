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

// Function: sub_00282578
// Address: 0x282578 - 0x2825b8
void sub_00282578_0x282578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282578_0x282578");
#endif

    switch (ctx->pc) {
        case 0x282590u: goto label_282590;
        case 0x2825a0u: goto label_2825a0;
        default: break;
    }

    ctx->pc = 0x282578u;

    // 0x282578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28257c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282588: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x282588u;
    SET_GPR_U32(ctx, 31, 0x282590u);
    ctx->pc = 0x28258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282588u;
    // 0x28258c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x282588u, 0x282590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282590u;
label_282590:
    // 0x282590: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x282590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x282594: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x282594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x282598: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x282598u;
    SET_GPR_U32(ctx, 31, 0x2825A0u);
    ctx->pc = 0x28259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282598u;
    // 0x28259c: 0x24a52630  addiu       $a1, $a1, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5B0u, 0x282598u, 0x2825A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2825A0u;
label_2825a0:
    // 0x2825a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2825a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2825a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2825a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2825ac: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2825ACu;
    ctx->pc = 0x2825B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2825ACu;
    // 0x2825b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2825B4u;
    // 0x2825b4: 0x0  nop
    ctx->pc = 0x2825b4u;
    // NOP
    if (ctx->pc == 0x2825b4u) { ctx->pc = 0x2825b8u; }
}
