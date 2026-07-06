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

// Function: sub_00336D00
// Address: 0x336d00 - 0x336d50
void sub_00336D00_0x336d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336D00_0x336d00");
#endif

    switch (ctx->pc) {
        case 0x336d1cu: goto label_336d1c;
        default: break;
    }

    ctx->pc = 0x336d00u;

    // 0x336d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336d04: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336d0c: 0x2484b268  addiu       $a0, $a0, -0x4D98
    ctx->pc = 0x336d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947432));
    // 0x336d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d14: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x336D14u;
    SET_GPR_U32(ctx, 31, 0x336D1Cu);
    ctx->pc = 0x336D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D14u;
    // 0x336d18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x336D14u, 0x336D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D1Cu;
label_336d1c:
    // 0x336d1c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336d20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x336d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336d24: 0xa060b268  sb          $zero, -0x4D98($v1)
    ctx->pc = 0x336d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947432), (uint8_t)GPR_U32(ctx, 0));
    // 0x336d28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x336d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x336d2c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336d30: 0xa064b269  sb          $a0, -0x4D97($v1)
    ctx->pc = 0x336d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947433), (uint8_t)GPR_U32(ctx, 4));
    // 0x336d34: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336d38: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x336d3c: 0xa085b26a  sb          $a1, -0x4D96($a0)
    ctx->pc = 0x336d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294947434), (uint8_t)GPR_U32(ctx, 5));
    // 0x336d40: 0xa065b26b  sb          $a1, -0x4D95($v1)
    ctx->pc = 0x336d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947435), (uint8_t)GPR_U32(ctx, 5));
    // 0x336d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336d48: 0x3e00008  jr          $ra
    ctx->pc = 0x336D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D48u;
        // 0x336d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336D50u;
}
