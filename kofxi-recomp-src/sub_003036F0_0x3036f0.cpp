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

// Function: sub_003036F0
// Address: 0x3036f0 - 0x303750
void sub_003036F0_0x3036f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003036F0_0x3036f0");
#endif

    ctx->pc = 0x3036f0u;

    // 0x3036f0: 0xa080003c  sb          $zero, 0x3C($a0)
    ctx->pc = 0x3036f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x3036f4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x3036f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x3036f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3036f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3036fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3036fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303700: 0xa4800038  sh          $zero, 0x38($a0)
    ctx->pc = 0x303700u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x303704: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x303704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x303708: 0xa480003a  sh          $zero, 0x3A($a0)
    ctx->pc = 0x303708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x30370c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30370cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x303710: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x303710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x303714: 0xa086003d  sb          $a2, 0x3D($a0)
    ctx->pc = 0x303714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 6));
    // 0x303718: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x303718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x30371c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x30371cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x303720: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x303720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x303724: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x303724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x303728: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x303728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x30372c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x30372cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x303730: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x303730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x303734: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x303734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x303738: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x303738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x30373c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x30373cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x303740: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x303740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x303744: 0x3e00008  jr          $ra
    ctx->pc = 0x303744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303744u;
        // 0x303748: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30374Cu;
    // 0x30374c: 0x0  nop
    ctx->pc = 0x30374cu;
    // NOP
    if (ctx->pc == 0x30374cu) { ctx->pc = 0x303750u; }
}
