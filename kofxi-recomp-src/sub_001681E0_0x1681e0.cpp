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

// Function: sub_001681E0
// Address: 0x1681e0 - 0x168240
void sub_001681E0_0x1681e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001681E0_0x1681e0");
#endif

    switch (ctx->pc) {
        case 0x1681f0u: goto label_1681f0;
        default: break;
    }

    ctx->pc = 0x1681e0u;

    // 0x1681e0: 0xa08003e8  sb          $zero, 0x3E8($a0)
    ctx->pc = 0x1681e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1000), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1681e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681e8: 0xa08003e9  sb          $zero, 0x3E9($a0)
    ctx->pc = 0x1681e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1001), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681ec: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1681ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1681f0:
    // 0x1681f0: 0xa08003c0  sb          $zero, 0x3C0($a0)
    ctx->pc = 0x1681f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 960), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1681f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1681f8: 0xa08003c1  sb          $zero, 0x3C1($a0)
    ctx->pc = 0x1681f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 961), (uint8_t)GPR_U32(ctx, 0));
    // 0x1681fc: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1681fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x168200: 0xa08003c2  sb          $zero, 0x3C2($a0)
    ctx->pc = 0x168200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 962), (uint8_t)GPR_U32(ctx, 0));
    // 0x168204: 0xa08003c3  sb          $zero, 0x3C3($a0)
    ctx->pc = 0x168204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 963), (uint8_t)GPR_U32(ctx, 0));
    // 0x168208: 0xa48003be  sh          $zero, 0x3BE($a0)
    ctx->pc = 0x168208u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 958), (uint16_t)GPR_U32(ctx, 0));
    // 0x16820c: 0xa08003c4  sb          $zero, 0x3C4($a0)
    ctx->pc = 0x16820cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 964), (uint8_t)GPR_U32(ctx, 0));
    // 0x168210: 0xac8003b0  sw          $zero, 0x3B0($a0)
    ctx->pc = 0x168210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 0));
    // 0x168214: 0xac8003b4  sw          $zero, 0x3B4($a0)
    ctx->pc = 0x168214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 948), GPR_U32(ctx, 0));
    // 0x168218: 0xa48503b8  sh          $a1, 0x3B8($a0)
    ctx->pc = 0x168218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 952), (uint16_t)GPR_U32(ctx, 5));
    // 0x16821c: 0xa48503ba  sh          $a1, 0x3BA($a0)
    ctx->pc = 0x16821cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 954), (uint16_t)GPR_U32(ctx, 5));
    // 0x168220: 0xa48003bc  sh          $zero, 0x3BC($a0)
    ctx->pc = 0x168220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 956), (uint16_t)GPR_U32(ctx, 0));
    // 0x168224: 0xa48003c6  sh          $zero, 0x3C6($a0)
    ctx->pc = 0x168224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 966), (uint16_t)GPR_U32(ctx, 0));
    // 0x168228: 0xa08003c8  sb          $zero, 0x3C8($a0)
    ctx->pc = 0x168228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 968), (uint8_t)GPR_U32(ctx, 0));
    // 0x16822c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16822Cu;
    {
        const bool branch_taken_0x16822c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16822Cu;
        // 0x168230: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16822c) {
            ctx->pc = 0x1681F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1681f0;
        }
    }
    ctx->pc = 0x168234u;
    // 0x168234: 0x3e00008  jr          $ra
    ctx->pc = 0x168234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16823Cu;
    // 0x16823c: 0x0  nop
    ctx->pc = 0x16823cu;
    // NOP
    if (ctx->pc == 0x16823cu) { ctx->pc = 0x168240u; }
}
