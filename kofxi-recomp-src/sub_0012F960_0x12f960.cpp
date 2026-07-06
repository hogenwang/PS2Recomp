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

// Function: sub_0012F960
// Address: 0x12f960 - 0x12f9c0
void sub_0012F960_0x12f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F960_0x12f960");
#endif

    switch (ctx->pc) {
        case 0x12f96cu: goto label_12f96c;
        case 0x12f978u: goto label_12f978;
        default: break;
    }

    ctx->pc = 0x12f960u;

    // 0x12f960: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x12f964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12f964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f968: 0x24a55510  addiu       $a1, $a1, 0x5510
    ctx->pc = 0x12f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21776));
label_12f96c:
    // 0x12f96c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12f96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f970: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f974: 0x0  nop
    ctx->pc = 0x12f974u;
    // NOP
label_12f978:
    // 0x12f978: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x12f978u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f97c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12f97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12f980: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x12f980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f984: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x12f984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x12f988: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x12f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12f98c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F98Cu;
    {
        const bool branch_taken_0x12f98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f98c) {
            ctx->pc = 0x12F978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f978;
        }
    }
    ctx->pc = 0x12F994u;
    // 0x12f994: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12f994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12f998: 0x28e30006  slti        $v1, $a3, 0x6
    ctx->pc = 0x12f998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x12f99c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x12F99Cu;
    {
        const bool branch_taken_0x12f99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F99Cu;
        // 0x12f9a0: 0x24a50016  addiu       $a1, $a1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f99c) {
            ctx->pc = 0x12F96Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f96c;
        }
    }
    ctx->pc = 0x12F9A4u;
    // 0x12f9a4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x12f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12f9a8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f9ac: 0xa0805598  sb          $zero, 0x5598($a0)
    ctx->pc = 0x12f9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21912), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9B0u;
        // 0x12f9b4: 0xa0605508  sb          $zero, 0x5508($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 21768), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F9B8u;
    // 0x12f9b8: 0x0  nop
    ctx->pc = 0x12f9b8u;
    // NOP
    // 0x12f9bc: 0x0  nop
    ctx->pc = 0x12f9bcu;
    // NOP
    if (ctx->pc == 0x12f9bcu) { ctx->pc = 0x12f9c0u; }
}
