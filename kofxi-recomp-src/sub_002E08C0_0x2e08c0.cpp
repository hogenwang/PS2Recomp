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

// Function: sub_002E08C0
// Address: 0x2e08c0 - 0x2e0920
void sub_002E08C0_0x2e08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E08C0_0x2e08c0");
#endif

    ctx->pc = 0x2e08c0u;

    // 0x2e08c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e08c4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2e08c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e08c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e08cc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2e08ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08d0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2e08d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08d4: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2e08d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e08d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e08dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e08dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08e0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e08e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08e4: 0x80b81d4  j           func_2E0750
    ctx->pc = 0x2E08E4u;
    ctx->pc = 0x2E08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08E4u;
    // 0x2e08e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0750u;
    sub_002E0750_0x2e0750(rdram, ctx, runtime); return;
    ctx->pc = 0x2E08ECu;
    // 0x2e08ec: 0x0  nop
    ctx->pc = 0x2e08ecu;
    // NOP
    // 0x2e08f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e08f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e08f4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2e08f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e08f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e08f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e08fc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2e08fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0900: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2e0900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0904: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2e0904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e090c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e090cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0910: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2e0910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0914: 0x80b81f8  j           func_2E07E0
    ctx->pc = 0x2E0914u;
    ctx->pc = 0x2E0918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0914u;
    // 0x2e0918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07E0u;
    sub_002E07E0_0x2e07e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E091Cu;
    // 0x2e091c: 0x0  nop
    ctx->pc = 0x2e091cu;
    // NOP
    if (ctx->pc == 0x2e091cu) { ctx->pc = 0x2e0920u; }
}
