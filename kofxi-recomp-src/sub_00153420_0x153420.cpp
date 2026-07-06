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

// Function: sub_00153420
// Address: 0x153420 - 0x153470
void sub_00153420_0x153420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153420_0x153420");
#endif

    switch (ctx->pc) {
        case 0x153438u: goto label_153438;
        default: break;
    }

    ctx->pc = 0x153420u;

    // 0x153420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15342c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15342cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153430: 0xc054cd0  jal         func_153340
    ctx->pc = 0x153430u;
    SET_GPR_U32(ctx, 31, 0x153438u);
    ctx->pc = 0x153434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153430u;
    // 0x153434: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153340u, 0x153430u, 0x153438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153438u;
label_153438:
    // 0x153438: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x153438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15343c: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x15343cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x153440: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x153440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x153444: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153444u;
    {
        const bool branch_taken_0x153444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x153444) {
            ctx->pc = 0x153448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153444u;
            // 0x153448: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153458u;
            goto label_153458;
        }
    }
    ctx->pc = 0x15344Cu;
    // 0x15344c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x153450: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153454: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x153454u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_153458:
    // 0x153458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15345c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15345cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153460: 0x3e00008  jr          $ra
    ctx->pc = 0x153460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153460u;
        // 0x153464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153468u;
    // 0x153468: 0x0  nop
    ctx->pc = 0x153468u;
    // NOP
    // 0x15346c: 0x0  nop
    ctx->pc = 0x15346cu;
    // NOP
    if (ctx->pc == 0x15346cu) { ctx->pc = 0x153470u; }
}
