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

// Function: sub_001BA9F0
// Address: 0x1ba9f0 - 0x1baa30
void sub_001BA9F0_0x1ba9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA9F0_0x1ba9f0");
#endif

    switch (ctx->pc) {
        case 0x1baa0cu: goto label_1baa0c;
        case 0x1baa18u: goto label_1baa18;
        default: break;
    }

    ctx->pc = 0x1ba9f0u;

    // 0x1ba9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba9fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1baa00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1baa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1baa04: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAA04u;
    SET_GPR_U32(ctx, 31, 0x1BAA0Cu);
    ctx->pc = 0x1BAA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA04u;
    // 0x1baa08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BAA04u, 0x1BAA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA0Cu;
label_1baa0c:
    // 0x1baa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa10: 0xc06ea8c  jal         func_1BAA30
    ctx->pc = 0x1BAA10u;
    SET_GPR_U32(ctx, 31, 0x1BAA18u);
    ctx->pc = 0x1BAA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA10u;
    // 0x1baa14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAA30u, 0x1BAA10u, 0x1BAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA18u;
label_1baa18:
    // 0x1baa18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1baa18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baa1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1baa1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1baa20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1baa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baa24: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BAA24u;
    ctx->pc = 0x1BAA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA24u;
    // 0x1baa28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BAA2Cu;
    // 0x1baa2c: 0x0  nop
    ctx->pc = 0x1baa2cu;
    // NOP
    if (ctx->pc == 0x1baa2cu) { ctx->pc = 0x1baa30u; }
}
