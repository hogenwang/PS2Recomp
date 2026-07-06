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

// Function: sub_001F5960
// Address: 0x1f5960 - 0x1f59c8
void sub_001F5960_0x1f5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5960_0x1f5960");
#endif

    switch (ctx->pc) {
        case 0x1f5974u: goto label_1f5974;
        default: break;
    }

    ctx->pc = 0x1f5960u;

    // 0x1f5960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f5964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f5968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f596c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1F596Cu;
    SET_GPR_U32(ctx, 31, 0x1F5974u);
    ctx->pc = 0x1F5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F596Cu;
    // 0x1f5970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1F596Cu, 0x1F5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5974u;
label_1f5974:
    // 0x1f5974: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1f5974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5978: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1f5978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1f597c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1f597cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x1f5980: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1f5980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1f5984: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5984u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x1f5988: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f598c: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1f598cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x1f5990: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1f5990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1f5994: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1f5994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1f5998: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x1f5998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x1f599c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f599cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f59a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f59a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f59a4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1f59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1f59a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f59a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f59ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f59acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f59b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f59b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f59b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f59b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f59b8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f59b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f59bc: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1F59BCu;
    ctx->pc = 0x1F59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59BCu;
    // 0x1f59c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F59C4u;
    // 0x1f59c4: 0x0  nop
    ctx->pc = 0x1f59c4u;
    // NOP
    if (ctx->pc == 0x1f59c4u) { ctx->pc = 0x1f59c8u; }
}
