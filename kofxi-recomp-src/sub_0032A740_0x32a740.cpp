#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A740
// Address: 0x32a740 - 0x32a750
void sub_0032A740_0x32a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A740_0x32a740");
#endif

    ctx->pc = 0x32a740u;

    // 0x32a740: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x32a740u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32a744: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x32a744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x32a748: 0x3e00008  jr          $ra
    ctx->pc = 0x32A748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A748u;
            // 0x32a74c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A750u;
    ctx->pc = 0x32a750u;
}
