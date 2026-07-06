#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152790
// Address: 0x152790 - 0x1527b0
void sub_00152790_0x152790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152790_0x152790");
#endif

    ctx->pc = 0x152790u;

    // 0x152790: 0x90860079  lbu         $a2, 0x79($a0)
    ctx->pc = 0x152790u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 121)));
    // 0x152794: 0xc48c007c  lwc1        $f12, 0x7C($a0)
    ctx->pc = 0x152794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x152798: 0xc48d0080  lwc1        $f13, 0x80($a0)
    ctx->pc = 0x152798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15279c: 0x2485008c  addiu       $a1, $a0, 0x8C
    ctx->pc = 0x15279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x1527a0: 0x805472c  j           func_151CB0
    ctx->pc = 0x1527A0u;
    ctx->pc = 0x1527A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527A0u;
    // 0x1527a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CB0u;
    sub_00151CB0_0x151cb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1527A8u;
    // 0x1527a8: 0x0  nop
    ctx->pc = 0x1527a8u;
    // NOP
    // 0x1527ac: 0x0  nop
    ctx->pc = 0x1527acu;
    // NOP
}
