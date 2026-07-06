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

// Function: sub_001F85C0
// Address: 0x1f85c0 - 0x1f8658
void sub_001F85C0_0x1f85c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F85C0_0x1f85c0");
#endif

    switch (ctx->pc) {
        case 0x1f85ecu: goto label_1f85ec;
        case 0x1f85fcu: goto label_1f85fc;
        case 0x1f861cu: goto label_1f861c;
        case 0x1f8630u: goto label_1f8630;
        default: break;
    }

    ctx->pc = 0x1f85c0u;

    // 0x1f85c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f85c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f85c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f85c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f85c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f85cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f85ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f85d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f85d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f85d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f85d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f85dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f85dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f85e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f85e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f85e4: 0xc07e196  jal         func_1F8658
    ctx->pc = 0x1F85E4u;
    SET_GPR_U32(ctx, 31, 0x1F85ECu);
    ctx->pc = 0x1F85E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F85E4u;
    // 0x1f85e8: 0x2453174c  addiu       $s3, $v0, 0x174C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8658u, 0x1F85E4u, 0x1F85ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85ECu;
label_1f85ec:
    // 0x1f85ec: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F85ECu;
    {
        const bool branch_taken_0x1f85ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85ECu;
        // 0x1f85f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85ec) {
            ctx->pc = 0x1F863Cu;
            goto label_1f863c;
        }
    }
    ctx->pc = 0x1F85F4u;
    // 0x1f85f4: 0xc07e1b0  jal         func_1F86C0
    ctx->pc = 0x1F85F4u;
    SET_GPR_U32(ctx, 31, 0x1F85FCu);
    ctx->pc = 0x1F86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F86C0u, 0x1F85F4u, 0x1F85FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85FCu;
label_1f85fc:
    // 0x1f85fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f85fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8604: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8604u;
    {
        const bool branch_taken_0x1f8604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8604u;
        // 0x1f8608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8604) {
            ctx->pc = 0x1F8628u;
            goto label_1f8628;
        }
    }
    ctx->pc = 0x1F860Cu;
    // 0x1f860c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f860cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f8610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8614: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1F8614u;
    SET_GPR_U32(ctx, 31, 0x1F861Cu);
    ctx->pc = 0x1F8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8614u;
    // 0x1f8618: 0x34a50206  ori         $a1, $a1, 0x206 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)518);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F8614u, 0x1F861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F861Cu;
label_1f861c:
    // 0x1f861c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F861Cu;
    {
        const bool branch_taken_0x1f861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F861Cu;
        // 0x1f8620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f861c) {
            ctx->pc = 0x1F863Cu;
            goto label_1f863c;
        }
    }
    ctx->pc = 0x1F8624u;
    // 0x1f8624: 0x0  nop
    ctx->pc = 0x1f8624u;
    // NOP
label_1f8628:
    // 0x1f8628: 0xc07e1c0  jal         func_1F8700
    ctx->pc = 0x1F8628u;
    SET_GPR_U32(ctx, 31, 0x1F8630u);
    ctx->pc = 0x1F862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8628u;
    // 0x1f862c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8700u, 0x1F8628u, 0x1F8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8630u;
label_1f8630:
    // 0x1f8630: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1f8630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f8634: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1f8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1f8638: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f863c:
    // 0x1f863c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f863cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f8648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f864c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f864cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8650: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8650u;
        // 0x1f8654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8658u;
}
