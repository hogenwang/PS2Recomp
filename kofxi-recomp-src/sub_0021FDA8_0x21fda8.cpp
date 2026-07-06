#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021FDA8
// Address: 0x21fda8 - 0x21fdc0
void sub_0021FDA8_0x21fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FDA8_0x21fda8");
#endif

    ctx->pc = 0x21fda8u;

    // 0x21fda8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21fda8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21fdac: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x21fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x21fdb0: 0x25efc268  addiu       $t7, $t7, -0x3D98
    ctx->pc = 0x21fdb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294951528));
    // 0x21fdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x21FDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDB4u;
            // 0x21fdb8: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FDBCu;
    // 0x21fdbc: 0x0  nop
    ctx->pc = 0x21fdbcu;
    // NOP
    ctx->pc = 0x21fdc0u;
}
