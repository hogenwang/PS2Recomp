#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031F460
// Address: 0x31f460 - 0x31f480
void sub_0031F460_0x31f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F460_0x31f460");
#endif

    ctx->pc = 0x31f460u;

    // 0x31f460: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31f460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31f464: 0x24420378  addiu       $v0, $v0, 0x378
    ctx->pc = 0x31f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
    // 0x31f468: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x31f468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31f46c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x31f46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f470: 0x3e00008  jr          $ra
    ctx->pc = 0x31F470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F470u;
            // 0x31f474: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31F478u;
    // 0x31f478: 0x0  nop
    ctx->pc = 0x31f478u;
    // NOP
    // 0x31f47c: 0x0  nop
    ctx->pc = 0x31f47cu;
    // NOP
    ctx->pc = 0x31f480u;
}
