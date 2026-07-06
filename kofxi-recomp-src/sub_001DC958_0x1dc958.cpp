#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC958
// Address: 0x1dc958 - 0x1dc978
void sub_001DC958_0x1dc958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC958_0x1dc958");
#endif

    ctx->pc = 0x1dc958u;

    // 0x1dc958: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1dc958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1dc95c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc960: 0x2484ead8  addiu       $a0, $a0, -0x1528
    ctx->pc = 0x1dc960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961880));
    // 0x1dc964: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc968: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dc968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dc96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC96Cu;
            // 0x1dc970: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC974u;
    // 0x1dc974: 0x0  nop
    ctx->pc = 0x1dc974u;
    // NOP
    ctx->pc = 0x1dc978u;
}
