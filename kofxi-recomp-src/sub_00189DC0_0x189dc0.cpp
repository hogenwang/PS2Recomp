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

// Function: sub_00189DC0
// Address: 0x189dc0 - 0x189e10
void sub_00189DC0_0x189dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189DC0_0x189dc0");
#endif

    switch (ctx->pc) {
        case 0x189decu: goto label_189dec;
        default: break;
    }

    ctx->pc = 0x189dc0u;

    // 0x189dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189dc4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x189dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x189dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dd4: 0x8c840498  lw          $a0, 0x498($a0)
    ctx->pc = 0x189dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x189dd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x189dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x189ddc: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x189DDCu;
    {
        const bool branch_taken_0x189ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189ddc) {
            ctx->pc = 0x189DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189DDCu;
            // 0x189de0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189DFCu;
            goto label_189dfc;
        }
    }
    ctx->pc = 0x189DE4u;
    // 0x189de4: 0xc0587d0  jal         func_161F40
    ctx->pc = 0x189DE4u;
    SET_GPR_U32(ctx, 31, 0x189DECu);
    ctx->pc = 0x189DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DE4u;
    // 0x189de8: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161F40u, 0x189DE4u, 0x189DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DECu;
label_189dec:
    // 0x189dec: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x189decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x189df0: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x189df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x189df4: 0xae030498  sw          $v1, 0x498($s0)
    ctx->pc = 0x189df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
    // 0x189df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189dfc:
    // 0x189dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189e00: 0x3e00008  jr          $ra
    ctx->pc = 0x189E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E00u;
        // 0x189e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189E08u;
    // 0x189e08: 0x0  nop
    ctx->pc = 0x189e08u;
    // NOP
    // 0x189e0c: 0x0  nop
    ctx->pc = 0x189e0cu;
    // NOP
}
