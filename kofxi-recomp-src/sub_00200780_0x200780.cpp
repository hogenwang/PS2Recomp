#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200780
// Address: 0x200780 - 0x2007b8
void sub_00200780_0x200780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200780_0x200780");
#endif

    switch (ctx->pc) {
        case 0x200798u: goto label_200798;
        default: break;
    }

    ctx->pc = 0x200780u;

    // 0x200780: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x200784: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x200784u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x200788: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x200788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20078c: 0x3e00008  jr          $ra
    ctx->pc = 0x20078Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20078Cu;
            // 0x200790: 0xa0860001  sb          $a2, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200794u;
    // 0x200794: 0x0  nop
    ctx->pc = 0x200794u;
    // NOP
label_200798:
    // 0x200798: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x20079c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x20079cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2007a0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2007a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2007a4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2007a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2007a8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2007a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2007ac: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2007acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2007b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2007B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007B0u;
            // 0x2007b4: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2007B8u;
    ctx->pc = 0x2007b8u;
}
