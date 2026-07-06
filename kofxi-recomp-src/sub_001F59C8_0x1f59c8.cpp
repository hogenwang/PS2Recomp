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

// Function: sub_001F59C8
// Address: 0x1f59c8 - 0x1f5a30
void sub_001F59C8_0x1f59c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F59C8_0x1f59c8");
#endif

    switch (ctx->pc) {
        case 0x1f59dcu: goto label_1f59dc;
        default: break;
    }

    ctx->pc = 0x1f59c8u;

    // 0x1f59c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f59c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f59cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f59d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f59d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f59d4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1F59D4u;
    SET_GPR_U32(ctx, 31, 0x1F59DCu);
    ctx->pc = 0x1F59D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59D4u;
    // 0x1f59d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1F59D4u, 0x1F59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59DCu;
label_1f59dc:
    // 0x1f59dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1f59dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1f59e0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1f59e4: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1f59e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x1f59e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1f59ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x1f59f0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f59f4: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1f59f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x1f59f8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x1f59f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x1f59fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1f59fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1f5a00: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x1f5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x1f5a04: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f5a08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f5a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f5a0c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1f5a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1f5a10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f5a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5a14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f5a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5a1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f5a20: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f5a24: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1F5A24u;
    ctx->pc = 0x1F5A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A24u;
    // 0x1f5a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5A2Cu;
    // 0x1f5a2c: 0x0  nop
    ctx->pc = 0x1f5a2cu;
    // NOP
    if (ctx->pc == 0x1f5a2cu) { ctx->pc = 0x1f5a30u; }
}
