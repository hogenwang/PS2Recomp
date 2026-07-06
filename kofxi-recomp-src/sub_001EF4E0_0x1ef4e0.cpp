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

// Function: sub_001EF4E0
// Address: 0x1ef4e0 - 0x1ef578
void sub_001EF4E0_0x1ef4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF4E0_0x1ef4e0");
#endif

    switch (ctx->pc) {
        case 0x1ef50cu: goto label_1ef50c;
        case 0x1ef52cu: goto label_1ef52c;
        default: break;
    }

    ctx->pc = 0x1ef4e0u;

    // 0x1ef4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef4e4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1ef4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1ef4e8: 0x2491090c  addiu       $s1, $a0, 0x90C
    ctx->pc = 0x1ef4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x1ef4ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ef4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1ef4f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ef4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4f4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ef4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ef4f8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ef4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ef4fc: 0x8c921fd4  lw          $s2, 0x1FD4($a0)
    ctx->pc = 0x1ef4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8148)));
    // 0x1ef500: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ef504: 0xc0760d8  jal         func_1D8360
    ctx->pc = 0x1EF504u;
    SET_GPR_U32(ctx, 31, 0x1EF50Cu);
    ctx->pc = 0x1EF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF504u;
    // 0x1ef508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8360u, 0x1EF504u, 0x1EF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF50Cu;
label_1ef50c:
    // 0x1ef50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef510: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1ef510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ef514: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1ef514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ef518: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF518u;
    {
        const bool branch_taken_0x1ef518 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF518u;
        // 0x1ef51c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef518) {
            ctx->pc = 0x1EF524u;
            goto label_1ef524;
        }
    }
    ctx->pc = 0x1EF520u;
    // 0x1ef520: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1ef520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1ef524:
    // 0x1ef524: 0xc0760f2  jal         func_1D83C8
    ctx->pc = 0x1EF524u;
    SET_GPR_U32(ctx, 31, 0x1EF52Cu);
    ctx->pc = 0x1D83C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83C8u, 0x1EF524u, 0x1EF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF52Cu;
label_1ef52c:
    // 0x1ef52c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ef52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef530: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef534: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF534u;
    {
        const bool branch_taken_0x1ef534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef534) {
            ctx->pc = 0x1EF538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF534u;
            // 0x1ef538: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF53Cu;
            goto label_1ef53c;
        }
    }
    ctx->pc = 0x1EF53Cu;
label_1ef53c:
    // 0x1ef53c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ef540: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF540u;
    {
        const bool branch_taken_0x1ef540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef540) {
            ctx->pc = 0x1EF544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF540u;
            // 0x1ef544: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF554u;
            goto label_1ef554;
        }
    }
    ctx->pc = 0x1EF548u;
    // 0x1ef548: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ef548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ef54c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1ef54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1ef550: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1ef550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1ef554:
    // 0x1ef554: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF554u;
    {
        const bool branch_taken_0x1ef554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF554u;
        // 0x1ef558: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef554) {
            ctx->pc = 0x1EF564u;
            goto label_1ef564;
        }
    }
    ctx->pc = 0x1EF55Cu;
    // 0x1ef55c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ef560: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1ef560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1ef564:
    // 0x1ef564: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1ef564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef568: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ef568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef56c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ef56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ef570: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF570u;
        // 0x1ef574: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF578u;
}
