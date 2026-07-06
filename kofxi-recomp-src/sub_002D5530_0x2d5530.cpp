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

// Function: sub_002D5530
// Address: 0x2d5530 - 0x2d55c0
void sub_002D5530_0x2d5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5530_0x2d5530");
#endif

    switch (ctx->pc) {
        case 0x2d555cu: goto label_2d555c;
        case 0x2d556cu: goto label_2d556c;
        default: break;
    }

    ctx->pc = 0x2d5530u;

    // 0x2d5530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d5534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d553c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5540: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d5540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5544: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5548: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d5548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d554c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5554: 0xc0b22ec  jal         func_2C8BB0
    ctx->pc = 0x2D5554u;
    SET_GPR_U32(ctx, 31, 0x2D555Cu);
    ctx->pc = 0x2D5558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5554u;
    // 0x2d5558: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BB0u, 0x2D5554u, 0x2D555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D555Cu;
label_2d555c:
    // 0x2d555c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D555Cu;
    {
        const bool branch_taken_0x2d555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D555Cu;
        // 0x2d5560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d555c) {
            ctx->pc = 0x2D55A0u;
            goto label_2d55a0;
        }
    }
    ctx->pc = 0x2D5564u;
    // 0x2d5564: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x2D5564u;
    SET_GPR_U32(ctx, 31, 0x2D556Cu);
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x2D5564u, 0x2D556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D556Cu;
label_2d556c:
    // 0x2d556c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D556Cu;
    {
        const bool branch_taken_0x2d556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d556c) {
            ctx->pc = 0x2D5570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D556Cu;
            // 0x2d5570: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55A4u;
            goto label_2d55a4;
        }
    }
    ctx->pc = 0x2D5574u;
    // 0x2d5574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d557c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d557cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5584: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d5584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5588: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d558c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d558cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d5594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5598: 0x80b1b1a  j           func_2C6C68
    ctx->pc = 0x2D5598u;
    ctx->pc = 0x2D559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5598u;
    // 0x2d559c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C68u, 0x2D5598u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D55A0u;
label_2d55a0:
    // 0x2d55a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d55a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d55a4:
    // 0x2d55a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d55a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d55a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d55a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d55ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d55acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d55b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d55b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d55b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D55B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55B4u;
        // 0x2d55b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D55BCu;
    // 0x2d55bc: 0x0  nop
    ctx->pc = 0x2d55bcu;
    // NOP
}
