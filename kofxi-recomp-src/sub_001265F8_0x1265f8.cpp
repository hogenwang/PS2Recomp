#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001265F8
// Address: 0x1265f8 - 0x126618
void sub_001265F8_0x1265f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001265F8_0x1265f8");
#endif

    ctx->pc = 0x1265f8u;

    // 0x1265f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1265f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1265fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1265fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126604: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x126604u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x126608: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x126608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12660c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12660cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126610: 0x8049a24  j           func_126890
    ctx->pc = 0x126610u;
    ctx->pc = 0x126614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126610u;
            // 0x126614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    if (runtime->hasFunction(0x126890u)) {
        auto targetFn = runtime->lookupFunction(0x126890u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00126890_0x126890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x126618u;
    ctx->pc = 0x126618u;
}
