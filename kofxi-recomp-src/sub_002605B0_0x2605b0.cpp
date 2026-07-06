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

// Function: sub_002605B0
// Address: 0x2605b0 - 0x260730
void sub_002605B0_0x2605b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002605B0_0x2605b0");
#endif

    switch (ctx->pc) {
        case 0x2605d4u: goto label_2605d4;
        case 0x2605f0u: goto label_2605f0;
        case 0x26060cu: goto label_26060c;
        case 0x26061cu: goto label_26061c;
        case 0x260638u: goto label_260638;
        case 0x260650u: goto label_260650;
        case 0x2606a0u: goto label_2606a0;
        case 0x2606c4u: goto label_2606c4;
        case 0x2606dcu: goto label_2606dc;
        case 0x2606f4u: goto label_2606f4;
        default: break;
    }

    ctx->pc = 0x2605b0u;

    // 0x2605b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2605b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2605b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2605b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2605b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2605b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2605bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2605bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2605c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605c4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2605C4u;
    {
        const bool branch_taken_0x2605c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2605C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605C4u;
        // 0x2605c8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605c4) {
            ctx->pc = 0x2605F8u;
            goto label_2605f8;
        }
    }
    ctx->pc = 0x2605CCu;
    // 0x2605cc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2605CCu;
    SET_GPR_U32(ctx, 31, 0x2605D4u);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2605CCu, 0x2605D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605D4u;
label_2605d4:
    // 0x2605d4: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x2605d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2605d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2605D8u;
    {
        const bool branch_taken_0x2605d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2605DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605D8u;
        // 0x2605dc: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605d8) {
            ctx->pc = 0x26060Cu;
            goto label_26060c;
        }
    }
    ctx->pc = 0x2605E0u;
    // 0x2605e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2605e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605e4: 0x248417f0  addiu       $a0, $a0, 0x17F0
    ctx->pc = 0x2605e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6128));
    // 0x2605e8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2605E8u;
    SET_GPR_U32(ctx, 31, 0x2605F0u);
    ctx->pc = 0x2605ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2605E8u;
    // 0x2605ec: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2605E8u, 0x2605F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605F0u;
label_2605f0:
    // 0x2605f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2605F0u;
    {
        const bool branch_taken_0x2605f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2605f0) {
            ctx->pc = 0x26060Cu;
            goto label_26060c;
        }
    }
    ctx->pc = 0x2605F8u;
label_2605f8:
    // 0x2605f8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2605f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2605fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2605fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260600: 0x248417f0  addiu       $a0, $a0, 0x17F0
    ctx->pc = 0x260600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6128));
    // 0x260604: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x260604u;
    SET_GPR_U32(ctx, 31, 0x26060Cu);
    ctx->pc = 0x260608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260604u;
    // 0x260608: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x260604u, 0x26060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26060Cu;
label_26060c:
    // 0x26060c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x26060Cu;
    {
        const bool branch_taken_0x26060c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x260610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26060Cu;
        // 0x260610: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26060c) {
            ctx->pc = 0x260640u;
            goto label_260640;
        }
    }
    ctx->pc = 0x260614u;
    // 0x260614: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x260614u;
    SET_GPR_U32(ctx, 31, 0x26061Cu);
    ctx->pc = 0x260618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260614u;
    // 0x260618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x260614u, 0x26061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26061Cu;
label_26061c:
    // 0x26061c: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x26061cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x260620: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x260620u;
    {
        const bool branch_taken_0x260620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260620u;
        // 0x260624: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260620) {
            ctx->pc = 0x260650u;
            goto label_260650;
        }
    }
    ctx->pc = 0x260628u;
    // 0x260628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x260628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26062c: 0x248418f0  addiu       $a0, $a0, 0x18F0
    ctx->pc = 0x26062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6384));
    // 0x260630: 0xc04a966  jal         func_12A598
    ctx->pc = 0x260630u;
    SET_GPR_U32(ctx, 31, 0x260638u);
    ctx->pc = 0x260634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260630u;
    // 0x260634: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x260630u, 0x260638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260638u;
label_260638:
    // 0x260638: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x260638u;
    {
        const bool branch_taken_0x260638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260638u;
        // 0x26063c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260638) {
            ctx->pc = 0x260654u;
            goto label_260654;
        }
    }
    ctx->pc = 0x260640u;
label_260640:
    // 0x260640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260644: 0x248418f0  addiu       $a0, $a0, 0x18F0
    ctx->pc = 0x260644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6384));
    // 0x260648: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x260648u;
    SET_GPR_U32(ctx, 31, 0x260650u);
    ctx->pc = 0x26064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260648u;
    // 0x26064c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x260648u, 0x260650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260650u;
label_260650:
    // 0x260650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260654:
    // 0x260654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x260654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260658: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26065c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26065cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260660: 0x3e00008  jr          $ra
    ctx->pc = 0x260660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260660u;
        // 0x260664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260668u;
    // 0x260668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x260668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26066c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260670: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x260670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x260674: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x260674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260678: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x260678u;
    {
        const bool branch_taken_0x260678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260678u;
        // 0x26067c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260678) {
            ctx->pc = 0x2606E4u;
            goto label_2606e4;
        }
    }
    ctx->pc = 0x260680u;
    // 0x260680: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x260680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260684: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x260684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x260688: 0x245117f0  addiu       $s1, $v0, 0x17F0
    ctx->pc = 0x260688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6128));
    // 0x26068c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x26068cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x260690: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x260690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x260694: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x260694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260698: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x260698u;
    SET_GPR_U32(ctx, 31, 0x2606A0u);
    ctx->pc = 0x26069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260698u;
    // 0x26069c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x260698u, 0x2606A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606A0u;
label_2606a0:
    // 0x2606a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2606A0u;
    {
        const bool branch_taken_0x2606a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2606A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606A0u;
        // 0x2606a4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606a0) {
            ctx->pc = 0x2606D0u;
            goto label_2606d0;
        }
    }
    ctx->pc = 0x2606A8u;
    // 0x2606a8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2606A8u;
    {
        const bool branch_taken_0x2606a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2606ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606A8u;
        // 0x2606ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606a8) {
            ctx->pc = 0x2606E4u;
            goto label_2606e4;
        }
    }
    ctx->pc = 0x2606B0u;
    // 0x2606b0: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x2606b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2606b4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x2606b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2606b8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2606b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2606bc: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x2606BCu;
    SET_GPR_U32(ctx, 31, 0x2606C4u);
    ctx->pc = 0x2606C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606BCu;
    // 0x2606c0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x2606BCu, 0x2606C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606C4u;
label_2606c4:
    // 0x2606c4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2606C4u;
    {
        const bool branch_taken_0x2606c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2606C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606C4u;
        // 0x2606c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606c4) {
            ctx->pc = 0x260718u;
            goto label_260718;
        }
    }
    ctx->pc = 0x2606CCu;
    // 0x2606cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2606ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2606d0:
    // 0x2606d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2606d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2606d4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2606D4u;
    SET_GPR_U32(ctx, 31, 0x2606DCu);
    ctx->pc = 0x2606D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606D4u;
    // 0x2606d8: 0x24a571e0  addiu       $a1, $a1, 0x71E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2606D4u, 0x2606DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606DCu;
label_2606dc:
    // 0x2606dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2606DCu;
    {
        const bool branch_taken_0x2606dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2606dc) {
            ctx->pc = 0x2606ECu;
            goto label_2606ec;
        }
    }
    ctx->pc = 0x2606E4u;
label_2606e4:
    // 0x2606e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2606E4u;
    {
        const bool branch_taken_0x2606e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2606E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606E4u;
        // 0x2606e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606e4) {
            ctx->pc = 0x260718u;
            goto label_260718;
        }
    }
    ctx->pc = 0x2606ECu;
label_2606ec:
    // 0x2606ec: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2606ECu;
    SET_GPR_U32(ctx, 31, 0x2606F4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2606ECu, 0x2606F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606F4u;
label_2606f4:
    // 0x2606f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2606f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2606f8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2606f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2606fc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2606FCu;
    {
        const bool branch_taken_0x2606fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606FCu;
        // 0x260700: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606fc) {
            ctx->pc = 0x260714u;
            goto label_260714;
        }
    }
    ctx->pc = 0x260704u;
    // 0x260704: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260704u;
    {
        const bool branch_taken_0x260704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260704u;
        // 0x260708: 0x2402fc19  addiu       $v0, $zero, -0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260704) {
            ctx->pc = 0x260718u;
            goto label_260718;
        }
    }
    ctx->pc = 0x26070Cu;
    // 0x26070c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26070Cu;
    {
        const bool branch_taken_0x26070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26070Cu;
        // 0x260710: 0x2402ffe6  addiu       $v0, $zero, -0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26070c) {
            ctx->pc = 0x260718u;
            goto label_260718;
        }
    }
    ctx->pc = 0x260714u;
label_260714:
    // 0x260714: 0x2402ffe5  addiu       $v0, $zero, -0x1B
    ctx->pc = 0x260714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
label_260718:
    // 0x260718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26071c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26071cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260724: 0x3e00008  jr          $ra
    ctx->pc = 0x260724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260724u;
        // 0x260728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26072Cu;
    // 0x26072c: 0x0  nop
    ctx->pc = 0x26072cu;
    // NOP
}
