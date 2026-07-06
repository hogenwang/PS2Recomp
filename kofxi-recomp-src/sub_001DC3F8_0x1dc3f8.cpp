#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC3F8
// Address: 0x1dc3f8 - 0x1dc428
void sub_001DC3F8_0x1dc3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC3F8_0x1dc3f8");
#endif

    switch (ctx->pc) {
        case 0x1dc408u: goto label_1dc408;
        default: break;
    }

    ctx->pc = 0x1dc3f8u;

    // 0x1dc3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc400: 0xc075608  jal         func_1D5820
    ctx->pc = 0x1DC400u;
    SET_GPR_U32(ctx, 31, 0x1DC408u);
    ctx->pc = 0x1D5820u;
    if (runtime->hasFunction(0x1D5820u)) {
        auto targetFn = runtime->lookupFunction(0x1D5820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC408u; }
        if (ctx->pc != 0x1DC408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5820_0x1d5820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC408u; }
        if (ctx->pc != 0x1DC408u) { return; }
    }
    ctx->pc = 0x1DC408u;
label_1dc408:
    // 0x1dc408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc40c: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1dc40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1dc410: 0x24a580e0  addiu       $a1, $a1, -0x7F20
    ctx->pc = 0x1dc410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934752));
    // 0x1dc414: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1dc414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dc418: 0x24063840  addiu       $a2, $zero, 0x3840
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14400));
    // 0x1dc41c: 0x807401c  j           func_1D0070
    ctx->pc = 0x1DC41Cu;
    ctx->pc = 0x1DC420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC41Cu;
            // 0x1dc420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0070u;
    {
        auto targetFn = runtime->lookupFunction(0x1D0070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1DC424u;
    // 0x1dc424: 0x0  nop
    ctx->pc = 0x1dc424u;
    // NOP
    ctx->pc = 0x1dc428u;
}
