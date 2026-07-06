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

// Function: sub_00128FB0
// Address: 0x128fb0 - 0x128fd8
void sub_00128FB0_0x128fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128FB0_0x128fb0");
#endif

    ctx->pc = 0x128fb0u;

    // 0x128fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128fb4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x128fb4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128fbc: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x128fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x128fc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x128fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fc4: 0x8dc4bde8  lw          $a0, -0x4218($t6)
    ctx->pc = 0x128fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294950376)));
    // 0x128fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128fcc: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x128fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128fd0: 0x804a3f6  j           func_128FD8
    ctx->pc = 0x128FD0u;
    ctx->pc = 0x128FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128FD0u;
    // 0x128fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128FD8u;
    sub_00128FD8_0x128fd8(rdram, ctx, runtime); return;
    ctx->pc = 0x128FD8u;
}
