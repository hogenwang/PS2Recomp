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

// Function: sub_001E7DE8
// Address: 0x1e7de8 - 0x1e7e60
void sub_001E7DE8_0x1e7de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7DE8_0x1e7de8");
#endif

    switch (ctx->pc) {
        case 0x1e7e1cu: goto label_1e7e1c;
        case 0x1e7e34u: goto label_1e7e34;
        default: break;
    }

    ctx->pc = 0x1e7de8u;

    // 0x1e7de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7df8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e7df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7e00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e7e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e7e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e7e08: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e7e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e7e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e7e10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e7e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e7e14: 0xc06dada  jal         func_1B6B68
    ctx->pc = 0x1E7E14u;
    SET_GPR_U32(ctx, 31, 0x1E7E1Cu);
    ctx->pc = 0x1E7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E14u;
    // 0x1e7e18: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6B68u, 0x1E7E14u, 0x1E7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E1Cu;
label_1e7e1c:
    // 0x1e7e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e7e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1e7e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e2c: 0xc06da76  jal         func_1B69D8
    ctx->pc = 0x1E7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E34u);
    ctx->pc = 0x1E7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E2Cu;
    // 0x1e7e30: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B69D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B69D8u, 0x1E7E2Cu, 0x1E7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E34u;
label_1e7e34:
    // 0x1e7e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e7e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e7e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7e44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7e48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7e4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e7e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e7e50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e7e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e7e54: 0x806dc04  j           func_1B7010
    ctx->pc = 0x1E7E54u;
    ctx->pc = 0x1E7E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E54u;
    // 0x1e7e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    sub_001B7010_0x1b7010(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7E5Cu;
    // 0x1e7e5c: 0x0  nop
    ctx->pc = 0x1e7e5cu;
    // NOP
}
