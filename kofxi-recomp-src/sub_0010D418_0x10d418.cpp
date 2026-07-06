#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D418
// Address: 0x10d418 - 0x10d430
void sub_0010D418_0x10d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D418_0x10d418");
#endif

    ctx->pc = 0x10d418u;

    // 0x10d418: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x10d41c: 0xfca00048  sd          $zero, 0x48($a1)
    ctx->pc = 0x10d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
    // 0x10d420: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10d420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10d424: 0x3e00008  jr          $ra
    ctx->pc = 0x10D424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D424u;
            // 0x10d428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D42Cu;
    // 0x10d42c: 0x0  nop
    ctx->pc = 0x10d42cu;
    // NOP
    ctx->pc = 0x10d430u;
}
