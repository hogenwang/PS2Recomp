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

// Function: sub_001B69D8
// Address: 0x1b69d8 - 0x1b6a48
void sub_001B69D8_0x1b69d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B69D8_0x1b69d8");
#endif

    switch (ctx->pc) {
        case 0x1b6a0cu: goto label_1b6a0c;
        case 0x1b6a24u: goto label_1b6a24;
        default: break;
    }

    ctx->pc = 0x1b69d8u;

    // 0x1b69d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b69d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b69dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b69dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b69e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b69e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b69e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b69e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b69e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b69ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b69f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b69f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b69f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b69f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b69f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b69fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b6a00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b6a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b6a04: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6A04u;
    SET_GPR_U32(ctx, 31, 0x1B6A0Cu);
    ctx->pc = 0x1B6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A04u;
    // 0x1b6a08: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B6A04u, 0x1B6A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A0Cu;
label_1b6a0c:
    // 0x1b6a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b6a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a18: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b6a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a1c: 0xc06da92  jal         func_1B6A48
    ctx->pc = 0x1B6A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6A24u);
    ctx->pc = 0x1B6A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A1Cu;
    // 0x1b6a20: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6A48u, 0x1B6A1Cu, 0x1B6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A24u;
label_1b6a24:
    // 0x1b6a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6a2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b6a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6a34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b6a34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6a38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b6a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b6a3c: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6A3Cu;
    ctx->pc = 0x1B6A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A3Cu;
    // 0x1b6a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    ctx->pc = 0x1B6A44u;
    // 0x1b6a44: 0x0  nop
    ctx->pc = 0x1b6a44u;
    // NOP
}
