#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D830
// Address: 0x22d830 - 0x22d850
void sub_0022D830_0x22d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D830_0x22d830");
#endif

    ctx->pc = 0x22d830u;

    // 0x22d830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d834: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x22d834u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x22d838: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x22d838u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d83c: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x22d83cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x22d840: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22d840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22d844: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22d848: 0x3e00008  jr          $ra
    ctx->pc = 0x22D848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D848u;
            // 0x22d84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D850u;
    ctx->pc = 0x22d850u;
}
