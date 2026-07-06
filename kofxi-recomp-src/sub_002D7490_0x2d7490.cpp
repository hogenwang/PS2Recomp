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

// Function: sub_002D7490
// Address: 0x2d7490 - 0x2d74e8
void sub_002D7490_0x2d7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7490_0x2d7490");
#endif

    switch (ctx->pc) {
        case 0x2d74b8u: goto label_2d74b8;
        case 0x2d74ccu: goto label_2d74cc;
        default: break;
    }

    ctx->pc = 0x2d7490u;

    // 0x2d7490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7494: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d7494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d7498: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d7498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d749c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d74a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d74a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d74a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d74a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d74a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d74a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d74ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d74acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d74b0: 0xc0b5cf2  jal         func_2D73C8
    ctx->pc = 0x2D74B0u;
    SET_GPR_U32(ctx, 31, 0x2D74B8u);
    ctx->pc = 0x2D74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D74B0u;
    // 0x2d74b4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73C8u, 0x2D74B0u, 0x2D74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74B8u;
label_2d74b8:
    // 0x2d74b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d74b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d74bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D74BCu;
    {
        const bool branch_taken_0x2d74bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D74C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74BCu;
        // 0x2d74c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d74bc) {
            ctx->pc = 0x2D74D0u;
            goto label_2d74d0;
        }
    }
    ctx->pc = 0x2D74C4u;
    // 0x2d74c4: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2D74C4u;
    SET_GPR_U32(ctx, 31, 0x2D74CCu);
    ctx->pc = 0x2D74C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D74C4u;
    // 0x2d74c8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8260u, 0x2D74C4u, 0x2D74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74CCu;
label_2d74cc:
    // 0x2d74cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d74ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d74d0:
    // 0x2d74d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d74d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d74d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d74d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d74d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d74d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d74dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d74dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d74e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D74E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D74E0u;
        // 0x2d74e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D74E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D74E8u;
}
