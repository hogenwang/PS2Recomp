#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198380
// Address: 0x198380 - 0x198390
void sub_00198380_0x198380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198380_0x198380");
#endif

    ctx->pc = 0x198380u;

    // 0x198380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198384: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x198384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x198388: 0x3e00008  jr          $ra
    ctx->pc = 0x198388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198388u;
            // 0x19838c: 0xa064af65  sb          $a0, -0x509B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294946661), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198390u;
    ctx->pc = 0x198390u;
}
