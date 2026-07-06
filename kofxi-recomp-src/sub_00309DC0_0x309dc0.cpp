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

// Function: sub_00309DC0
// Address: 0x309dc0 - 0x309e20
void sub_00309DC0_0x309dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309DC0_0x309dc0");
#endif

    switch (ctx->pc) {
        case 0x309dc8u: goto label_309dc8;
        default: break;
    }

    ctx->pc = 0x309dc0u;

    // 0x309dc0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x309dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dc4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x309dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_309dc8:
    // 0x309dc8: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x309dc8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x309dcc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x309dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x309dd0: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x309dd0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309dd4: 0x7c870020  sq          $a3, 0x20($a0)
    ctx->pc = 0x309dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 7));
    // 0x309dd8: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x309dd8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x309ddc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x309ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x309de0: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x309de0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309de4: 0x7c870050  sq          $a3, 0x50($a0)
    ctx->pc = 0x309de4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 7));
    // 0x309de8: 0x95060004  lhu         $a2, 0x4($t0)
    ctx->pc = 0x309de8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x309dec: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x309decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x309df0: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x309df0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x309df4: 0x7c870080  sq          $a3, 0x80($a0)
    ctx->pc = 0x309df4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 7));
    // 0x309df8: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x309df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x309dfc: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x309dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x309e00: 0x2063ffff  addi        $v1, $v1, -0x1
    ctx->pc = 0x309e00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x309e04: 0x1403fff0  bne         $zero, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x309E04u;
    {
        const bool branch_taken_0x309e04 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x309e04) {
            ctx->pc = 0x309DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309dc8;
        }
    }
    ctx->pc = 0x309E0Cu;
    // 0x309e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x309E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309E14u;
    // 0x309e14: 0x0  nop
    ctx->pc = 0x309e14u;
    // NOP
    // 0x309e18: 0x0  nop
    ctx->pc = 0x309e18u;
    // NOP
    // 0x309e1c: 0x0  nop
    ctx->pc = 0x309e1cu;
    // NOP
}
