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

// Function: sub_00203DA0
// Address: 0x203da0 - 0x203e40
void sub_00203DA0_0x203da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203DA0_0x203da0");
#endif

    switch (ctx->pc) {
        case 0x203db0u: goto label_203db0;
        case 0x203db8u: goto label_203db8;
        default: break;
    }

    ctx->pc = 0x203da0u;

    // 0x203da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203da8: 0xc080f2c  jal         func_203CB0
    ctx->pc = 0x203DA8u;
    SET_GPR_U32(ctx, 31, 0x203DB0u);
    ctx->pc = 0x203CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203CB0u, 0x203DA8u, 0x203DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DB0u;
label_203db0:
    // 0x203db0: 0xc080f48  jal         func_203D20
    ctx->pc = 0x203DB0u;
    SET_GPR_U32(ctx, 31, 0x203DB8u);
    ctx->pc = 0x203D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D20u, 0x203DB0u, 0x203DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203DB8u;
label_203db8:
    // 0x203db8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203dbc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x203dbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203dc0: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203dc4: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x203dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x203dc8: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x203dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x203dcc: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x203dccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x203dd0: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x203dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x203dd4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x203dd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x203dd8: 0xa08e0ad0  sb          $t6, 0xAD0($a0)
    ctx->pc = 0x203dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2768), (uint8_t)GPR_U32(ctx, 14));
    // 0x203ddc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203de0: 0x8c6d9bf8  lw          $t5, -0x6408($v1)
    ctx->pc = 0x203de0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203de4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x203de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x203de8: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x203de8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    // 0x203dec: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x203decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x203df0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x203df0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x203df4: 0xa1ae0af8  sb          $t6, 0xAF8($t5)
    ctx->pc = 0x203df4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2808), (uint8_t)GPR_U32(ctx, 14));
    // 0x203df8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203dfc: 0x8d089bf8  lw          $t0, -0x6408($t0)
    ctx->pc = 0x203dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941688)));
    // 0x203e00: 0xa10e0b20  sb          $t6, 0xB20($t0)
    ctx->pc = 0x203e00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2848), (uint8_t)GPR_U32(ctx, 14));
    // 0x203e04: 0x8ce79bf8  lw          $a3, -0x6408($a3)
    ctx->pc = 0x203e04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941688)));
    // 0x203e08: 0xacec0900  sw          $t4, 0x900($a3)
    ctx->pc = 0x203e08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2304), GPR_U32(ctx, 12));
    // 0x203e0c: 0x8cc69bf8  lw          $a2, -0x6408($a2)
    ctx->pc = 0x203e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941688)));
    // 0x203e10: 0xa0cb08b0  sb          $t3, 0x8B0($a2)
    ctx->pc = 0x203e10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2224), (uint8_t)GPR_U32(ctx, 11));
    // 0x203e14: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x203e18: 0xacaa08b4  sw          $t2, 0x8B4($a1)
    ctx->pc = 0x203e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2228), GPR_U32(ctx, 10));
    // 0x203e1c: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x203e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x203e20: 0xac8a08b8  sw          $t2, 0x8B8($a0)
    ctx->pc = 0x203e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2232), GPR_U32(ctx, 10));
    // 0x203e24: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x203e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203e28: 0xac690a94  sw          $t1, 0xA94($v1)
    ctx->pc = 0x203e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2708), GPR_U32(ctx, 9));
    // 0x203e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203e30: 0x3e00008  jr          $ra
    ctx->pc = 0x203E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E30u;
        // 0x203e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203E38u;
    // 0x203e38: 0x0  nop
    ctx->pc = 0x203e38u;
    // NOP
    // 0x203e3c: 0x0  nop
    ctx->pc = 0x203e3cu;
    // NOP
    if (ctx->pc == 0x203e3cu) { ctx->pc = 0x203e40u; }
}
