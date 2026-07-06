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

// Function: sub_002BF518
// Address: 0x2bf518 - 0x2bf5b8
void sub_002BF518_0x2bf518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF518_0x2bf518");
#endif

    switch (ctx->pc) {
        case 0x2bf544u: goto label_2bf544;
        case 0x2bf54cu: goto label_2bf54c;
        case 0x2bf560u: goto label_2bf560;
        case 0x2bf56cu: goto label_2bf56c;
        case 0x2bf580u: goto label_2bf580;
        case 0x2bf588u: goto label_2bf588;
        case 0x2bf598u: goto label_2bf598;
        default: break;
    }

    ctx->pc = 0x2bf518u;

    // 0x2bf518: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bf518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bf51c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bf520: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bf520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bf524: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bf524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf528: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bf528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bf52c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bf52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf534: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bf534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf538: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bf538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bf53c: 0xc0a308c  jal         func_28C230
    ctx->pc = 0x2BF53Cu;
    SET_GPR_U32(ctx, 31, 0x2BF544u);
    ctx->pc = 0x2BF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF53Cu;
    // 0x2bf540: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C230u, 0x2BF53Cu, 0x2BF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF544u;
label_2bf544:
    // 0x2bf544: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x2BF544u;
    SET_GPR_U32(ctx, 31, 0x2BF54Cu);
    ctx->pc = 0x2BF548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF544u;
    // 0x2bf548: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x2BF544u, 0x2BF54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF54Cu;
label_2bf54c:
    // 0x2bf54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf550: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BF550u;
    {
        const bool branch_taken_0x2bf550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF550u;
        // 0x2bf554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf550) {
            ctx->pc = 0x2BF59Cu;
            goto label_2bf59c;
        }
    }
    ctx->pc = 0x2BF558u;
    // 0x2bf558: 0xc0afd7a  jal         func_2BF5E8
    ctx->pc = 0x2BF558u;
    SET_GPR_U32(ctx, 31, 0x2BF560u);
    ctx->pc = 0x2BF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF558u;
    // 0x2bf55c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5E8u, 0x2BF558u, 0x2BF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF560u;
label_2bf560:
    // 0x2bf560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bf560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf564: 0xc0af66a  jal         func_2BD9A8
    ctx->pc = 0x2BF564u;
    SET_GPR_U32(ctx, 31, 0x2BF56Cu);
    ctx->pc = 0x2BF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF564u;
    // 0x2bf568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD9A8u, 0x2BF564u, 0x2BF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF56Cu;
label_2bf56c:
    // 0x2bf56c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF56Cu;
    {
        const bool branch_taken_0x2bf56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF56Cu;
        // 0x2bf570: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf56c) {
            ctx->pc = 0x2BF590u;
            goto label_2bf590;
        }
    }
    ctx->pc = 0x2BF574u;
    // 0x2bf574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf578: 0xc0a150e  jal         func_285438
    ctx->pc = 0x2BF578u;
    SET_GPR_U32(ctx, 31, 0x2BF580u);
    ctx->pc = 0x2BF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF578u;
    // 0x2bf57c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285438u, 0x2BF578u, 0x2BF580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF580u;
label_2bf580:
    // 0x2bf580: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2BF580u;
    SET_GPR_U32(ctx, 31, 0x2BF588u);
    ctx->pc = 0x2BF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF580u;
    // 0x2bf584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2BF580u, 0x2BF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF588u;
label_2bf588:
    // 0x2bf588: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF588u;
    {
        const bool branch_taken_0x2bf588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF588u;
        // 0x2bf58c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf588) {
            ctx->pc = 0x2BF59Cu;
            goto label_2bf59c;
        }
    }
    ctx->pc = 0x2BF590u;
label_2bf590:
    // 0x2bf590: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2BF590u;
    SET_GPR_U32(ctx, 31, 0x2BF598u);
    ctx->pc = 0x2BF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF590u;
    // 0x2bf594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2BF590u, 0x2BF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF598u;
label_2bf598:
    // 0x2bf598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf59c:
    // 0x2bf59c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bf59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf5a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bf5a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bf5a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bf5a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf5a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf5a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5B0u;
        // 0x2bf5b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF5B8u;
}
