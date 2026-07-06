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

// Function: sub_002A1EC0
// Address: 0x2a1ec0 - 0x2a1f28
void sub_002A1EC0_0x2a1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1EC0_0x2a1ec0");
#endif

    switch (ctx->pc) {
        case 0x2a1eecu: goto label_2a1eec;
        case 0x2a1f08u: goto label_2a1f08;
        default: break;
    }

    ctx->pc = 0x2a1ec0u;

    // 0x2a1ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a1ec4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a1ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a1ec8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a1ecc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a1eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ed0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a1ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1ed4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a1ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1edc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ee0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a1ee4: 0xc0aa5e8  jal         func_2A97A0
    ctx->pc = 0x2A1EE4u;
    SET_GPR_U32(ctx, 31, 0x2A1EECu);
    ctx->pc = 0x2A1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1EE4u;
    // 0x2a1ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A97A0u, 0x2A1EE4u, 0x2A1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EECu;
label_2a1eec:
    // 0x2a1eec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ef0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a1ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ef4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2a1ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ef8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a1ef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f00: 0xc0a71cc  jal         func_29C730
    ctx->pc = 0x2A1F00u;
    SET_GPR_U32(ctx, 31, 0x2A1F08u);
    ctx->pc = 0x2A1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F00u;
    // 0x2a1f04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C730u, 0x2A1F00u, 0x2A1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F08u;
label_2a1f08:
    // 0x2a1f08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1f0c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a1f0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1f10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1f10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1f14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a1f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F1Cu;
        // 0x2a1f20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1F24u;
    // 0x2a1f24: 0x0  nop
    ctx->pc = 0x2a1f24u;
    // NOP
    if (ctx->pc == 0x2a1f24u) { ctx->pc = 0x2a1f28u; }
}
