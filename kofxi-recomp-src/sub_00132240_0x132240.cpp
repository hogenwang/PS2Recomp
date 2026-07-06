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

// Function: sub_00132240
// Address: 0x132240 - 0x132290
void sub_00132240_0x132240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132240_0x132240");
#endif

    switch (ctx->pc) {
        case 0x13224cu: goto label_13224c;
        default: break;
    }

    ctx->pc = 0x132240u;

    // 0x132240: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x132240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x132244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132248: 0x24845aa0  addiu       $a0, $a0, 0x5AA0
    ctx->pc = 0x132248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23200));
label_13224c:
    // 0x13224c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x13224cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x132250: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x132250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x132254: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x132254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x132258: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x132258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x13225c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x13225cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x132260: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x132260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x132264: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x132264u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x132268: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x132268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x13226c: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x13226cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x132270: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x132270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x132274: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x132274u;
    {
        const bool branch_taken_0x132274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x132278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132274u;
        // 0x132278: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132274) {
            ctx->pc = 0x13224Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13224c;
        }
    }
    ctx->pc = 0x13227Cu;
    // 0x13227c: 0x3e00008  jr          $ra
    ctx->pc = 0x13227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132284u;
    // 0x132284: 0x0  nop
    ctx->pc = 0x132284u;
    // NOP
    // 0x132288: 0x0  nop
    ctx->pc = 0x132288u;
    // NOP
    // 0x13228c: 0x0  nop
    ctx->pc = 0x13228cu;
    // NOP
    if (ctx->pc == 0x13228cu) { ctx->pc = 0x132290u; }
}
