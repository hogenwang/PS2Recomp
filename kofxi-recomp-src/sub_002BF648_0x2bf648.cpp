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

// Function: sub_002BF648
// Address: 0x2bf648 - 0x2bf6d8
void sub_002BF648_0x2bf648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF648_0x2bf648");
#endif

    switch (ctx->pc) {
        case 0x2bf674u: goto label_2bf674;
        case 0x2bf67cu: goto label_2bf67c;
        case 0x2bf690u: goto label_2bf690;
        case 0x2bf69cu: goto label_2bf69c;
        case 0x2bf6acu: goto label_2bf6ac;
        case 0x2bf6b4u: goto label_2bf6b4;
        default: break;
    }

    ctx->pc = 0x2bf648u;

    // 0x2bf648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf64c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bf650: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bf650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bf654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bf654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf658: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bf658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bf65c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bf65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bf664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf668: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bf668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bf66c: 0xc0a308c  jal         func_28C230
    ctx->pc = 0x2BF66Cu;
    SET_GPR_U32(ctx, 31, 0x2BF674u);
    ctx->pc = 0x2BF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF66Cu;
    // 0x2bf670: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C230u, 0x2BF66Cu, 0x2BF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF674u;
label_2bf674:
    // 0x2bf674: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x2BF674u;
    SET_GPR_U32(ctx, 31, 0x2BF67Cu);
    ctx->pc = 0x2BF678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF674u;
    // 0x2bf678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x2BF674u, 0x2BF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF67Cu;
label_2bf67c:
    // 0x2bf67c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf680: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF680u;
    {
        const bool branch_taken_0x2bf680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf680) {
            ctx->pc = 0x2BF684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF680u;
            // 0x2bf684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF6B8u;
            goto label_2bf6b8;
        }
    }
    ctx->pc = 0x2BF688u;
    // 0x2bf688: 0xc0afc50  jal         func_2BF140
    ctx->pc = 0x2BF688u;
    SET_GPR_U32(ctx, 31, 0x2BF690u);
    ctx->pc = 0x2BF68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF688u;
    // 0x2bf68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF140u, 0x2BF688u, 0x2BF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF690u;
label_2bf690:
    // 0x2bf690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf694: 0xc0a5dc0  jal         func_297700
    ctx->pc = 0x2BF694u;
    SET_GPR_U32(ctx, 31, 0x2BF69Cu);
    ctx->pc = 0x2BF698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF694u;
    // 0x2bf698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297700u, 0x2BF694u, 0x2BF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF69Cu;
label_2bf69c:
    // 0x2bf69c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bf69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6a4: 0xc0a150e  jal         func_285438
    ctx->pc = 0x2BF6A4u;
    SET_GPR_U32(ctx, 31, 0x2BF6ACu);
    ctx->pc = 0x2BF6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6A4u;
    // 0x2bf6a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x2BF6A4u, 0x2BF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6ACu;
label_2bf6ac:
    // 0x2bf6ac: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2BF6ACu;
    SET_GPR_U32(ctx, 31, 0x2BF6B4u);
    ctx->pc = 0x2BF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6ACu;
    // 0x2bf6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2BF6ACu, 0x2BF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6B4u;
label_2bf6b4:
    // 0x2bf6b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bf6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bf6b8:
    // 0x2bf6b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bf6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf6bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bf6bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf6c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf6c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6CCu;
        // 0x2bf6d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF6D4u;
    // 0x2bf6d4: 0x0  nop
    ctx->pc = 0x2bf6d4u;
    // NOP
}
