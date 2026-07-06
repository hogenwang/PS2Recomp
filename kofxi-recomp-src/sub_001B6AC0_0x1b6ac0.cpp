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

// Function: sub_001B6AC0
// Address: 0x1b6ac0 - 0x1b6b30
void sub_001B6AC0_0x1b6ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6AC0_0x1b6ac0");
#endif

    switch (ctx->pc) {
        case 0x1b6af4u: goto label_1b6af4;
        case 0x1b6b0cu: goto label_1b6b0c;
        default: break;
    }

    ctx->pc = 0x1b6ac0u;

    // 0x1b6ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6ad0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ad4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6ad8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b6ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6adc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b6adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b6ae0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b6ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ae4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b6ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b6ae8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b6aec: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6AECu;
    SET_GPR_U32(ctx, 31, 0x1B6AF4u);
    ctx->pc = 0x1B6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6AECu;
    // 0x1b6af0: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B6AECu, 0x1B6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6AF4u;
label_1b6af4:
    // 0x1b6af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6af8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6afc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b6afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b6b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b04: 0xc06dacc  jal         func_1B6B30
    ctx->pc = 0x1B6B04u;
    SET_GPR_U32(ctx, 31, 0x1B6B0Cu);
    ctx->pc = 0x1B6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B04u;
    // 0x1b6b08: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6B30u, 0x1B6B04u, 0x1B6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B0Cu;
label_1b6b0c:
    // 0x1b6b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6b14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6b18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b6b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6b1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b6b1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6b20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b6b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b6b24: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6B24u;
    ctx->pc = 0x1B6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B24u;
    // 0x1b6b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B6B2Cu;
    // 0x1b6b2c: 0x0  nop
    ctx->pc = 0x1b6b2cu;
    // NOP
    if (ctx->pc == 0x1b6b2cu) { ctx->pc = 0x1b6b30u; }
}
