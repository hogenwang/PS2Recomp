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

// Function: sub_002AC750
// Address: 0x2ac750 - 0x2ac7e0
void sub_002AC750_0x2ac750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC750_0x2ac750");
#endif

    switch (ctx->pc) {
        case 0x2ac788u: goto label_2ac788;
        default: break;
    }

    ctx->pc = 0x2ac750u;

    // 0x2ac750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ac750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ac754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ac754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac758: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ac758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ac75c: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x2ac75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x2ac760: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ac760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ac764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac768: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ac768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ac76c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ac76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ac770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac774: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x2ac774u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac778: 0x8e130030  lw          $s3, 0x30($s0)
    ctx->pc = 0x2ac778u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ac77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac780: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AC780u;
    SET_GPR_U32(ctx, 31, 0x2AC788u);
    ctx->pc = 0x2AC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC780u;
    // 0x2ac784: 0x8e120034  lw          $s2, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AC780u, 0x2AC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC788u;
label_2ac788:
    // 0x2ac788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac78c: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x2ac78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x2ac790: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x2ac790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x2ac794: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ac794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ac798: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2ac798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2ac79c: 0xae330048  sw          $s3, 0x48($s1)
    ctx->pc = 0x2ac79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
    // 0x2ac7a0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ac7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac7a4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2ac7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2ac7a8: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2ac7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2ac7ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ac7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ac7b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ac7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac7b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ac7b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac7b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ac7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac7c0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2ac7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2ac7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7C4u;
        // 0x2ac7c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC7CCu;
    // 0x2ac7cc: 0x0  nop
    ctx->pc = 0x2ac7ccu;
    // NOP
    // 0x2ac7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7D0u;
        // 0x2ac7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC7D8u;
    // 0x2ac7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7D8u;
        // 0x2ac7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC7E0u;
}
