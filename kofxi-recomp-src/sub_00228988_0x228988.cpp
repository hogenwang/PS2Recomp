#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228988
// Address: 0x228988 - 0x2289a8
void sub_00228988_0x228988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228988_0x228988");
#endif

    ctx->pc = 0x228988u;

    // 0x228988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22898c: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x22898cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x228990: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x228990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228994: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x228994u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x228998: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22899c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2289a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2289A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2289A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2289A0u;
            // 0x2289a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2289A8u;
    ctx->pc = 0x2289a8u;
}
