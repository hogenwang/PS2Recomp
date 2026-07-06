#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDB68
// Address: 0x1bdb68 - 0x1bdb90
void sub_001BDB68_0x1bdb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDB68_0x1bdb68");
#endif

    ctx->pc = 0x1bdb68u;

    // 0x1bdb68: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x1bdb68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1bdb6c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1bdb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb70: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1bdb70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1bdb74: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1bdb74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bdb78: 0x9483002c  lhu         $v1, 0x2C($a0)
    ctx->pc = 0x1bdb78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1bdb7c: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x1bdb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb80: 0x9482002e  lhu         $v0, 0x2E($a0)
    ctx->pc = 0x1bdb80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x1bdb84: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB84u;
            // 0x1bdb88: 0xa4c20002  sh          $v0, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDB8Cu;
    // 0x1bdb8c: 0x0  nop
    ctx->pc = 0x1bdb8cu;
    // NOP
    ctx->pc = 0x1bdb90u;
}
