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

// Function: sub_00309E20
// Address: 0x309e20 - 0x309e80
void sub_00309E20_0x309e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309E20_0x309e20");
#endif

    switch (ctx->pc) {
        case 0x309e28u: goto label_309e28;
        default: break;
    }

    ctx->pc = 0x309e20u;

    // 0x309e20: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x309e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309e24: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x309e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_309e28:
    // 0x309e28: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x309e28u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x309e2c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x309e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x309e30: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x309e30u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309e34: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x309e34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x309e38: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x309e38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x309e3c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x309e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x309e40: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x309e40u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309e44: 0x7c870030  sq          $a3, 0x30($a0)
    ctx->pc = 0x309e44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 7));
    // 0x309e48: 0x95060004  lhu         $a2, 0x4($t0)
    ctx->pc = 0x309e48u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x309e4c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x309e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x309e50: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x309e50u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309e54: 0x7c870050  sq          $a3, 0x50($a0)
    ctx->pc = 0x309e54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 7));
    // 0x309e58: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x309e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x309e5c: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x309e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x309e60: 0x2063ffff  addi        $v1, $v1, -0x1
    ctx->pc = 0x309e60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x309e64: 0x1403fff0  bne         $zero, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x309E64u;
    {
        const bool branch_taken_0x309e64 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x309e64) {
            ctx->pc = 0x309E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309e28;
        }
    }
    ctx->pc = 0x309E6Cu;
    // 0x309e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x309E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309E74u;
    // 0x309e74: 0x0  nop
    ctx->pc = 0x309e74u;
    // NOP
    // 0x309e78: 0x0  nop
    ctx->pc = 0x309e78u;
    // NOP
    // 0x309e7c: 0x0  nop
    ctx->pc = 0x309e7cu;
    // NOP
}
