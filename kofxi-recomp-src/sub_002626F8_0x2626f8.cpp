#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002626F8
// Address: 0x2626f8 - 0x262718
void sub_002626F8_0x2626f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002626F8_0x2626f8");
#endif

    ctx->pc = 0x2626f8u;

    // 0x2626f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2626f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2626fc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2626fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x262700: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x262700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x262704: 0xac441a00  sw          $a0, 0x1A00($v0)
    ctx->pc = 0x262704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6656), GPR_U32(ctx, 4));
    // 0x262708: 0xac651a04  sw          $a1, 0x1A04($v1)
    ctx->pc = 0x262708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6660), GPR_U32(ctx, 5));
    // 0x26270c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26270cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262710: 0x3e00008  jr          $ra
    ctx->pc = 0x262710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262710u;
            // 0x262714: 0xace61a08  sw          $a2, 0x1A08($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6664), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262718u;
    ctx->pc = 0x262718u;
}
