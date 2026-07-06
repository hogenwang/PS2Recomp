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

// Function: sub_001BC080
// Address: 0x1bc080 - 0x1bc0c0
void sub_001BC080_0x1bc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC080_0x1bc080");
#endif

    switch (ctx->pc) {
        case 0x1bc09cu: goto label_1bc09c;
        case 0x1bc0a8u: goto label_1bc0a8;
        default: break;
    }

    ctx->pc = 0x1bc080u;

    // 0x1bc080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc08c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc094: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BC094u;
    SET_GPR_U32(ctx, 31, 0x1BC09Cu);
    ctx->pc = 0x1BC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC094u;
    // 0x1bc098: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BC094u, 0x1BC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC09Cu;
label_1bc09c:
    // 0x1bc09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0a0: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x1BC0A0u;
    SET_GPR_U32(ctx, 31, 0x1BC0A8u);
    ctx->pc = 0x1BC0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0A0u;
    // 0x1bc0a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x1BC0A0u, 0x1BC0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0A8u;
label_1bc0a8:
    // 0x1bc0a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc0b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc0b4: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BC0B4u;
    ctx->pc = 0x1BC0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0B4u;
    // 0x1bc0b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BC0BCu;
    // 0x1bc0bc: 0x0  nop
    ctx->pc = 0x1bc0bcu;
    // NOP
}
