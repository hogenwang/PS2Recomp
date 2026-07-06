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

// Function: sub_001A1C70
// Address: 0x1a1c70 - 0x1a1d10
void sub_001A1C70_0x1a1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1C70_0x1a1c70");
#endif

    switch (ctx->pc) {
        case 0x1a1cdcu: goto label_1a1cdc;
        case 0x1a1ce4u: goto label_1a1ce4;
        case 0x1a1cecu: goto label_1a1cec;
        default: break;
    }

    ctx->pc = 0x1a1c70u;

    // 0x1a1c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1c74: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1c7c: 0xa0409780  sb          $zero, -0x6880($v0)
    ctx->pc = 0x1a1c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1c80: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1c84: 0xa0409738  sb          $zero, -0x68C8($v0)
    ctx->pc = 0x1a1c84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1c88: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1c8c: 0xa0409770  sb          $zero, -0x6890($v0)
    ctx->pc = 0x1a1c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940528), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1c90: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1c94: 0xa0409758  sb          $zero, -0x68A8($v0)
    ctx->pc = 0x1a1c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940504), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1c98: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1c9c: 0xa0409750  sb          $zero, -0x68B0($v0)
    ctx->pc = 0x1a1c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940496), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1ca0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1ca4: 0xa0409760  sb          $zero, -0x68A0($v0)
    ctx->pc = 0x1a1ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940512), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1ca8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1cac: 0xac40e4a0  sw          $zero, -0x1B60($v0)
    ctx->pc = 0x1a1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960288), GPR_U32(ctx, 0));
    // 0x1a1cb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1cb4: 0xac40e498  sw          $zero, -0x1B68($v0)
    ctx->pc = 0x1a1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960280), GPR_U32(ctx, 0));
    // 0x1a1cb8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1cbc: 0xa0409748  sb          $zero, -0x68B8($v0)
    ctx->pc = 0x1a1cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940488), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1cc0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1cc4: 0xac40d590  sw          $zero, -0x2A70($v0)
    ctx->pc = 0x1a1cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956432), GPR_U32(ctx, 0));
    // 0x1a1cc8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1ccc: 0xa04095c0  sb          $zero, -0x6A40($v0)
    ctx->pc = 0x1a1cccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1cd0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1cd4: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x1A1CD4u;
    SET_GPR_U32(ctx, 31, 0x1A1CDCu);
    ctx->pc = 0x1A1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CD4u;
    // 0x1a1cd8: 0xa04095c8  sb          $zero, -0x6A38($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940104), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x1A1CD4u, 0x1A1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CDCu;
label_1a1cdc:
    // 0x1a1cdc: 0xc0d0420  jal         func_341080
    ctx->pc = 0x1A1CDCu;
    SET_GPR_U32(ctx, 31, 0x1A1CE4u);
    ctx->pc = 0x341080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341080u, 0x1A1CDCu, 0x1A1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CE4u;
label_1a1ce4:
    // 0x1a1ce4: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x1A1CE4u;
    SET_GPR_U32(ctx, 31, 0x1A1CECu);
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x1A1CE4u, 0x1A1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CECu;
label_1a1cec:
    // 0x1a1cec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1cf0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1cf4: 0xa080da58  sb          $zero, -0x25A8($a0)
    ctx->pc = 0x1a1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957656), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1cf8: 0xa060da59  sb          $zero, -0x25A7($v1)
    ctx->pc = 0x1a1cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957657), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D00u;
        // 0x1a1d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1D08u;
    // 0x1a1d08: 0x0  nop
    ctx->pc = 0x1a1d08u;
    // NOP
    // 0x1a1d0c: 0x0  nop
    ctx->pc = 0x1a1d0cu;
    // NOP
}
