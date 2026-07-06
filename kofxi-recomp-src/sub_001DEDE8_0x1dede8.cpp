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

// Function: sub_001DEDE8
// Address: 0x1dede8 - 0x1dee38
void sub_001DEDE8_0x1dede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEDE8_0x1dede8");
#endif

    switch (ctx->pc) {
        case 0x1dee0cu: goto label_1dee0c;
        case 0x1dee20u: goto label_1dee20;
        default: break;
    }

    ctx->pc = 0x1dede8u;

    // 0x1dede8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dede8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dedec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dedecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dedf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dedf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dedf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dedf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dedf8: 0x8e0203f0  lw          $v0, 0x3F0($s0)
    ctx->pc = 0x1dedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
    // 0x1dedfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEDFCu;
    {
        const bool branch_taken_0x1dedfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDFCu;
        // 0x1dee00: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedfc) {
            ctx->pc = 0x1DEE18u;
            goto label_1dee18;
        }
    }
    ctx->pc = 0x1DEE04u;
    // 0x1dee04: 0xc077b8e  jal         func_1DEE38
    ctx->pc = 0x1DEE04u;
    SET_GPR_U32(ctx, 31, 0x1DEE0Cu);
    ctx->pc = 0x1DEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE38u, 0x1DEE04u, 0x1DEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEE0Cu;
label_1dee0c:
    // 0x1dee0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEE0Cu;
    {
        const bool branch_taken_0x1dee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEE0Cu;
        // 0x1dee10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee0c) {
            ctx->pc = 0x1DEE24u;
            goto label_1dee24;
        }
    }
    ctx->pc = 0x1DEE14u;
    // 0x1dee14: 0x0  nop
    ctx->pc = 0x1dee14u;
    // NOP
label_1dee18:
    // 0x1dee18: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DEE18u;
    SET_GPR_U32(ctx, 31, 0x1DEE20u);
    ctx->pc = 0x1DEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEE18u;
    // 0x1dee1c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DEE18u, 0x1DEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEE20u;
label_1dee20:
    // 0x1dee20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dee24:
    // 0x1dee24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dee24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dee28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dee2c: 0x8077bba  j           func_1DEEE8
    ctx->pc = 0x1DEE2Cu;
    ctx->pc = 0x1DEE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEE2Cu;
    // 0x1dee30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEEE8u, 0x1DEE2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DEE34u;
    // 0x1dee34: 0x0  nop
    ctx->pc = 0x1dee34u;
    // NOP
}
