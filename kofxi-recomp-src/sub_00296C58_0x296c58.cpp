#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00296C58
// Address: 0x296c58 - 0x296c68
void sub_00296C58_0x296c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296C58_0x296c58");
#endif

    switch (ctx->pc) {
        case 0x296c60u: goto label_296c60;
        default: break;
    }

    ctx->pc = 0x296c58u;

    // 0x296c58: 0x3e00008  jr          $ra
    ctx->pc = 0x296C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C58u;
            // 0x296c5c: 0xdc820088  ld          $v0, 0x88($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296C60u;
label_296c60:
    // 0x296c60: 0x3e00008  jr          $ra
    ctx->pc = 0x296C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296C60u;
            // 0x296c64: 0xfc850088  sd          $a1, 0x88($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296C68u;
    ctx->pc = 0x296c68u;
}
