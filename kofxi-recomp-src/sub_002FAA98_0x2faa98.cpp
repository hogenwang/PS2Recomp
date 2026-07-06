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

// Function: sub_002FAA98
// Address: 0x2faa98 - 0x2faad8
void sub_002FAA98_0x2faa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAA98_0x2faa98");
#endif

    switch (ctx->pc) {
        case 0x2faab0u: goto label_2faab0;
        default: break;
    }

    ctx->pc = 0x2faa98u;

    // 0x2faa98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2faa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2faa9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2faa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2faaa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2faaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2faaa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2faaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaa8: 0xc0ac0a8  jal         func_2B02A0
    ctx->pc = 0x2FAAA8u;
    SET_GPR_U32(ctx, 31, 0x2FAAB0u);
    ctx->pc = 0x2FAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAA8u;
    // 0x2faaac: 0x8e040170  lw          $a0, 0x170($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B02A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B02A0u, 0x2FAAA8u, 0x2FAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAB0u;
label_2faab0:
    // 0x2faab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2faab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faab4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAAB4u;
    {
        const bool branch_taken_0x2faab4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2FAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAB4u;
        // 0x2faab8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faab4) {
            ctx->pc = 0x2FAAC4u;
            goto label_2faac4;
        }
    }
    ctx->pc = 0x2FAABCu;
    // 0x2faabc: 0x2402f82e  addiu       $v0, $zero, -0x7D2
    ctx->pc = 0x2faabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965294));
    // 0x2faac0: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x2faac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_2faac4:
    // 0x2faac4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2faac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2faac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faacc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAACCu;
        // 0x2faad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAAD4u;
    // 0x2faad4: 0x0  nop
    ctx->pc = 0x2faad4u;
    // NOP
    if (ctx->pc == 0x2faad4u) { ctx->pc = 0x2faad8u; }
}
