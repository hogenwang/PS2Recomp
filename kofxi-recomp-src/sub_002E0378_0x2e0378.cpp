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

// Function: sub_002E0378
// Address: 0x2e0378 - 0x2e03b0
void sub_002E0378_0x2e0378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0378_0x2e0378");
#endif

    ctx->pc = 0x2e0378u;

    // 0x2e0378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e037c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0384: 0x80b80be  j           func_2E02F8
    ctx->pc = 0x2E0384u;
    ctx->pc = 0x2E0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0384u;
    // 0x2e0388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E02F8u;
    sub_002E02F8_0x2e02f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2E038Cu;
    // 0x2e038c: 0x0  nop
    ctx->pc = 0x2e038cu;
    // NOP
    // 0x2e0390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0394: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e0394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e039c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e039cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e03a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e03a4: 0x80b80be  j           func_2E02F8
    ctx->pc = 0x2E03A4u;
    ctx->pc = 0x2E03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03A4u;
    // 0x2e03a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E02F8u;
    sub_002E02F8_0x2e02f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2E03ACu;
    // 0x2e03ac: 0x0  nop
    ctx->pc = 0x2e03acu;
    // NOP
    if (ctx->pc == 0x2e03acu) { ctx->pc = 0x2e03b0u; }
}
