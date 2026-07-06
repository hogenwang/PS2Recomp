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

// Function: sub_0021E7F8
// Address: 0x21e7f8 - 0x21e908
void sub_0021E7F8_0x21e7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E7F8_0x21e7f8");
#endif

    switch (ctx->pc) {
        case 0x21e82cu: goto label_21e82c;
        case 0x21e854u: goto label_21e854;
        case 0x21e85cu: goto label_21e85c;
        case 0x21e860u: goto label_21e860;
        case 0x21e884u: goto label_21e884;
        case 0x21e8b4u: goto label_21e8b4;
        case 0x21e8d0u: goto label_21e8d0;
        case 0x21e8f4u: goto label_21e8f4;
        default: break;
    }

    ctx->pc = 0x21e7f8u;

    // 0x21e7f8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x21e7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x21e7fc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21e7fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21e800: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x21e800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x21e804: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e808: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x21e808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x21e80c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21e810: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x21e810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x21e814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e818: 0x25f1b8e8  addiu       $s1, $t7, -0x4718
    ctx->pc = 0x21e818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949096));
    // 0x21e81c: 0x24a51c08  addiu       $a1, $a1, 0x1C08
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7176));
    // 0x21e820: 0x24c61cf0  addiu       $a2, $a2, 0x1CF0
    ctx->pc = 0x21e820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7408));
    // 0x21e824: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21E824u;
    SET_GPR_U32(ctx, 31, 0x21E82Cu);
    ctx->pc = 0x21E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E824u;
    // 0x21e828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21E824u, 0x21E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E82Cu;
label_21e82c:
    // 0x21e82c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e830: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x21e830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x21e834: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21e834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21e838: 0x24841cf8  addiu       $a0, $a0, 0x1CF8
    ctx->pc = 0x21e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7416));
    // 0x21e83c: 0x24e71d10  addiu       $a3, $a3, 0x1D10
    ctx->pc = 0x21e83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7440));
    // 0x21e840: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x21e840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x21e844: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x21E844u;
    {
        const bool branch_taken_0x21e844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E844u;
        // 0x21e848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e844) {
            ctx->pc = 0x21E874u;
            goto label_21e874;
        }
    }
    ctx->pc = 0x21E84Cu;
    // 0x21e84c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21E84Cu;
    SET_GPR_U32(ctx, 31, 0x21E854u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21E84Cu, 0x21E854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E854u;
label_21e854:
    // 0x21e854: 0xc089fc0  jal         func_227F00
    ctx->pc = 0x21E854u;
    SET_GPR_U32(ctx, 31, 0x21E85Cu);
    ctx->pc = 0x21E858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E854u;
    // 0x21e858: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F00u, 0x21E854u, 0x21E85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E85Cu;
label_21e85c:
    // 0x21e85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e860:
    // 0x21e860: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x21e860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x21e864: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x21e864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x21e868: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x21e868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x21e86c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E86Cu;
        // 0x21e870: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E874u;
label_21e874:
    // 0x21e874: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e87c: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E87Cu;
    SET_GPR_U32(ctx, 31, 0x21E884u);
    ctx->pc = 0x21E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E87Cu;
    // 0x21e880: 0x24a51d30  addiu       $a1, $a1, 0x1D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7C0u, 0x21E87Cu, 0x21E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E884u;
label_21e884:
    // 0x21e884: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e888: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21e888u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21e88c: 0x24841cf8  addiu       $a0, $a0, 0x1CF8
    ctx->pc = 0x21e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7416));
    // 0x21e890: 0x24e71d38  addiu       $a3, $a3, 0x1D38
    ctx->pc = 0x21e890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7480));
    // 0x21e894: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x21e894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e898: 0x24050178  addiu       $a1, $zero, 0x178
    ctx->pc = 0x21e898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
    // 0x21e89c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E89Cu;
    {
        const bool branch_taken_0x21e89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E89Cu;
        // 0x21e8a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e89c) {
            ctx->pc = 0x21E8ECu;
            goto label_21e8ec;
        }
    }
    ctx->pc = 0x21E8A4u;
    // 0x21e8a4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21e8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8ac: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E8ACu;
    SET_GPR_U32(ctx, 31, 0x21E8B4u);
    ctx->pc = 0x21E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E8ACu;
    // 0x21e8b0: 0x24a51d68  addiu       $a1, $a1, 0x1D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7C0u, 0x21E8ACu, 0x21E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8B4u;
label_21e8b4:
    // 0x21e8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21E8C0u;
    {
        const bool branch_taken_0x21e8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8C0u;
        // 0x21e8c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8c0) {
            ctx->pc = 0x21E8FCu;
            goto label_21e8fc;
        }
    }
    ctx->pc = 0x21E8C8u;
    // 0x21e8c8: 0xc08796e  jal         func_21E5B8
    ctx->pc = 0x21E8C8u;
    SET_GPR_U32(ctx, 31, 0x21E8D0u);
    ctx->pc = 0x21E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E5B8u, 0x21E8C8u, 0x21E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8D0u;
label_21e8d0:
    // 0x21e8d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e8d4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21e8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21e8d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x21e8d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8dc: 0x24841cf8  addiu       $a0, $a0, 0x1CF8
    ctx->pc = 0x21e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7416));
    // 0x21e8e0: 0x24050184  addiu       $a1, $zero, 0x184
    ctx->pc = 0x21e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x21e8e4: 0x24e71d80  addiu       $a3, $a3, 0x1D80
    ctx->pc = 0x21e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7552));
    // 0x21e8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e8ec:
    // 0x21e8ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21E8ECu;
    SET_GPR_U32(ctx, 31, 0x21E8F4u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21E8ECu, 0x21E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8F4u;
label_21e8f4:
    // 0x21e8f4: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x21E8F4u;
    {
        const bool branch_taken_0x21e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e8f4) {
            ctx->pc = 0x21E854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e854;
        }
    }
    ctx->pc = 0x21E8FCu;
label_21e8fc:
    // 0x21e8fc: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x21E8FCu;
    {
        const bool branch_taken_0x21e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8FCu;
        // 0x21e900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8fc) {
            ctx->pc = 0x21E860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e860;
        }
    }
    ctx->pc = 0x21E904u;
    // 0x21e904: 0x0  nop
    ctx->pc = 0x21e904u;
    // NOP
    if (ctx->pc == 0x21e904u) { ctx->pc = 0x21e908u; }
}
