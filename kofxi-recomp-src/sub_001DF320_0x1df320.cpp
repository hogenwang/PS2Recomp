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

// Function: sub_001DF320
// Address: 0x1df320 - 0x1df390
void sub_001DF320_0x1df320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF320_0x1df320");
#endif

    switch (ctx->pc) {
        case 0x1df33cu: goto label_1df33c;
        case 0x1df36cu: goto label_1df36c;
        default: break;
    }

    ctx->pc = 0x1df320u;

    // 0x1df320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df324: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1df324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1df328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df32c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1df32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1df330: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1df334: 0xc078ee4  jal         func_1E3B90
    ctx->pc = 0x1DF334u;
    SET_GPR_U32(ctx, 31, 0x1DF33Cu);
    ctx->pc = 0x1DF338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF334u;
    // 0x1df338: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3B90u, 0x1DF334u, 0x1DF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF33Cu;
label_1df33c:
    // 0x1df33c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df340: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1df340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df348: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df34c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF34Cu;
    {
        const bool branch_taken_0x1df34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF34Cu;
        // 0x1df350: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df34c) {
            ctx->pc = 0x1DF360u;
            goto label_1df360;
        }
    }
    ctx->pc = 0x1DF354u;
    // 0x1df354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df358: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF358u;
    {
        const bool branch_taken_0x1df358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF358u;
        // 0x1df35c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df358) {
            ctx->pc = 0x1DF364u;
            goto label_1df364;
        }
    }
    ctx->pc = 0x1DF360u;
label_1df360:
    // 0x1df360: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x1df360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_1df364:
    // 0x1df364: 0xc0792d4  jal         func_1E4B50
    ctx->pc = 0x1DF364u;
    SET_GPR_U32(ctx, 31, 0x1DF36Cu);
    ctx->pc = 0x1E4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4B50u, 0x1DF364u, 0x1DF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF36Cu;
label_1df36c:
    // 0x1df36c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1df36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df370: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1df370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1df374: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1df374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df378: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1df378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x1df37c: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x1df37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x1df380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1df380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df384: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1df384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df388: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF388u;
        // 0x1df38c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF390u;
}
