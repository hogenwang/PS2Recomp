#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00250B28
// Address: 0x250b28 - 0x250b50
void sub_00250B28_0x250b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250B28_0x250b28");
#endif

    switch (ctx->pc) {
        case 0x250b38u: goto label_250b38;
        default: break;
    }

    ctx->pc = 0x250b28u;

    // 0x250b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250b30: 0xc08c682  jal         func_231A08
    ctx->pc = 0x250B30u;
    SET_GPR_U32(ctx, 31, 0x250B38u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B38u; }
        if (ctx->pc != 0x250B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250B38u; }
        if (ctx->pc != 0x250B38u) { return; }
    }
    ctx->pc = 0x250B38u;
label_250b38:
    // 0x250b38: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x250b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x250b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x250b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250b44: 0x0  nop
    ctx->pc = 0x250b44u;
    // NOP
    // 0x250b48: 0x808c698  j           func_231A60
    ctx->pc = 0x250B48u;
    ctx->pc = 0x250B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250B48u;
            // 0x250b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x250B50u;
    ctx->pc = 0x250b50u;
}
