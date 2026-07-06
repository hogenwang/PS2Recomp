#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227D10
// Address: 0x227d10 - 0x227d30
void sub_00227D10_0x227d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D10_0x227d10");
#endif

    switch (ctx->pc) {
        case 0x227d20u: goto label_227d20;
        default: break;
    }

    ctx->pc = 0x227d10u;

    // 0x227d10: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227d10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227d14: 0x8de2f200  lw          $v0, -0xE00($t7)
    ctx->pc = 0x227d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
    // 0x227d18: 0x3e00008  jr          $ra
    ctx->pc = 0x227D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D18u;
            // 0x227d1c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227D20u;
label_227d20:
    // 0x227d20: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227d20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227d24: 0x8deef200  lw          $t6, -0xE00($t7)
    ctx->pc = 0x227d24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
    // 0x227d28: 0x3e00008  jr          $ra
    ctx->pc = 0x227D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227D28u;
            // 0x227d2c: 0x8dc2032c  lw          $v0, 0x32C($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227D30u;
    ctx->pc = 0x227d30u;
}
