#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F18E8
// Address: 0x2f18e8 - 0x2f1910
void sub_002F18E8_0x2f18e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F18E8_0x2f18e8");
#endif

    ctx->pc = 0x2f18e8u;

    // 0x2f18e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f18e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f18ec: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x2f18ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f18f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f18f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f18f4: 0x24061022  addiu       $a2, $zero, 0x1022
    ctx->pc = 0x2f18f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4130));
    // 0x2f18f8: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2f18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2f18fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f18fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1904: 0x80bc5f0  j           func_2F17C0
    ctx->pc = 0x2F1904u;
    ctx->pc = 0x2F1908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1904u;
            // 0x2f1908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17C0u;
    {
        auto targetFn = runtime->lookupFunction(0x2F17C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2F190Cu;
    // 0x2f190c: 0x0  nop
    ctx->pc = 0x2f190cu;
    // NOP
    ctx->pc = 0x2f1910u;
}
