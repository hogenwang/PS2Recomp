#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CAF0
// Address: 0x14caf0 - 0x14cb20
void sub_0014CAF0_0x14caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CAF0_0x14caf0");
#endif

    ctx->pc = 0x14caf0u;

    // 0x14caf0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14caf4: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x14caf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x14caf8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14cafc: 0x2463e350  addiu       $v1, $v1, -0x1CB0
    ctx->pc = 0x14cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959952));
    // 0x14cb00: 0xa044e068  sb          $a0, -0x1F98($v0)
    ctx->pc = 0x14cb00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294959208), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cb04: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x14cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14cb08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14cb08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cb0c: 0x80532e0  j           func_14CB80
    ctx->pc = 0x14CB0Cu;
    ctx->pc = 0x14CB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB0Cu;
            // 0x14cb10: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CB80u;
    if (runtime->hasFunction(0x14CB80u)) {
        auto targetFn = runtime->lookupFunction(0x14CB80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0014CB80_0x14cb80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14CB14u;
    // 0x14cb14: 0x0  nop
    ctx->pc = 0x14cb14u;
    // NOP
    // 0x14cb18: 0x0  nop
    ctx->pc = 0x14cb18u;
    // NOP
    // 0x14cb1c: 0x0  nop
    ctx->pc = 0x14cb1cu;
    // NOP
    ctx->pc = 0x14cb20u;
}
