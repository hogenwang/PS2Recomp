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

// Function: sub_002A3408
// Address: 0x2a3408 - 0x2a3520
void sub_002A3408_0x2a3408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3408_0x2a3408");
#endif

    switch (ctx->pc) {
        case 0x2a3408u: goto label_2a3408;
        case 0x2a340cu: goto label_2a340c;
        case 0x2a3410u: goto label_2a3410;
        case 0x2a3414u: goto label_2a3414;
        case 0x2a3418u: goto label_2a3418;
        case 0x2a341cu: goto label_2a341c;
        case 0x2a3420u: goto label_2a3420;
        case 0x2a3424u: goto label_2a3424;
        case 0x2a3428u: goto label_2a3428;
        case 0x2a342cu: goto label_2a342c;
        case 0x2a3430u: goto label_2a3430;
        case 0x2a3434u: goto label_2a3434;
        case 0x2a3438u: goto label_2a3438;
        case 0x2a343cu: goto label_2a343c;
        case 0x2a3440u: goto label_2a3440;
        case 0x2a3444u: goto label_2a3444;
        case 0x2a3448u: goto label_2a3448;
        case 0x2a344cu: goto label_2a344c;
        case 0x2a3450u: goto label_2a3450;
        case 0x2a3454u: goto label_2a3454;
        case 0x2a3458u: goto label_2a3458;
        case 0x2a345cu: goto label_2a345c;
        case 0x2a3460u: goto label_2a3460;
        case 0x2a3464u: goto label_2a3464;
        case 0x2a3468u: goto label_2a3468;
        case 0x2a346cu: goto label_2a346c;
        case 0x2a3470u: goto label_2a3470;
        case 0x2a3474u: goto label_2a3474;
        case 0x2a3478u: goto label_2a3478;
        case 0x2a347cu: goto label_2a347c;
        case 0x2a3480u: goto label_2a3480;
        case 0x2a3484u: goto label_2a3484;
        case 0x2a3488u: goto label_2a3488;
        case 0x2a348cu: goto label_2a348c;
        case 0x2a3490u: goto label_2a3490;
        case 0x2a3494u: goto label_2a3494;
        case 0x2a3498u: goto label_2a3498;
        case 0x2a349cu: goto label_2a349c;
        case 0x2a34a0u: goto label_2a34a0;
        case 0x2a34a4u: goto label_2a34a4;
        case 0x2a34a8u: goto label_2a34a8;
        case 0x2a34acu: goto label_2a34ac;
        case 0x2a34b0u: goto label_2a34b0;
        case 0x2a34b4u: goto label_2a34b4;
        case 0x2a34b8u: goto label_2a34b8;
        case 0x2a34bcu: goto label_2a34bc;
        case 0x2a34c0u: goto label_2a34c0;
        case 0x2a34c4u: goto label_2a34c4;
        case 0x2a34c8u: goto label_2a34c8;
        case 0x2a34ccu: goto label_2a34cc;
        case 0x2a34d0u: goto label_2a34d0;
        case 0x2a34d4u: goto label_2a34d4;
        case 0x2a34d8u: goto label_2a34d8;
        case 0x2a34dcu: goto label_2a34dc;
        case 0x2a34e0u: goto label_2a34e0;
        case 0x2a34e4u: goto label_2a34e4;
        case 0x2a34e8u: goto label_2a34e8;
        case 0x2a34ecu: goto label_2a34ec;
        case 0x2a34f0u: goto label_2a34f0;
        case 0x2a34f4u: goto label_2a34f4;
        case 0x2a34f8u: goto label_2a34f8;
        case 0x2a34fcu: goto label_2a34fc;
        case 0x2a3500u: goto label_2a3500;
        case 0x2a3504u: goto label_2a3504;
        case 0x2a3508u: goto label_2a3508;
        case 0x2a350cu: goto label_2a350c;
        case 0x2a3510u: goto label_2a3510;
        case 0x2a3514u: goto label_2a3514;
        case 0x2a3518u: goto label_2a3518;
        case 0x2a351cu: goto label_2a351c;
        default: break;
    }

    ctx->pc = 0x2a3408u;

label_2a3408:
    // 0x2a3408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a340c:
    // 0x2a340c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2a3410:
    if (ctx->pc == 0x2A3410u) {
        ctx->pc = 0x2A3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A340Cu;
        // 0x2a3410: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3414u;
        goto label_2a3414;
    }
    ctx->pc = 0x2A340Cu;
    {
        const bool branch_taken_0x2a340c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A340Cu;
        // 0x2a3410: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a340c) {
            ctx->pc = 0x2A3420u;
            goto label_2a3420;
        }
    }
    ctx->pc = 0x2A3414u;
label_2a3414:
    // 0x2a3414: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a3418:
    // 0x2a3418: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a341c:
    if (ctx->pc == 0x2A341Cu) {
        ctx->pc = 0x2A3420u;
        goto label_2a3420;
    }
    ctx->pc = 0x2A3418u;
    {
        const bool branch_taken_0x2a3418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3418) {
            ctx->pc = 0x2A3428u;
            goto label_2a3428;
        }
    }
    ctx->pc = 0x2A3420u;
label_2a3420:
    // 0x2a3420: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3424:
    if (ctx->pc == 0x2A3424u) {
        ctx->pc = 0x2A3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3420u;
        // 0x2a3424: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3428u;
        goto label_2a3428;
    }
    ctx->pc = 0x2A3420u;
    {
        const bool branch_taken_0x2a3420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3420u;
        // 0x2a3424: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3420) {
            ctx->pc = 0x2A3430u;
            goto label_2a3430;
        }
    }
    ctx->pc = 0x2A3428u;
label_2a3428:
    // 0x2a3428: 0x40f809  jalr        $v0
label_2a342c:
    if (ctx->pc == 0x2A342Cu) {
        ctx->pc = 0x2A3430u;
        goto label_2a3430;
    }
    ctx->pc = 0x2A3428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3430u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3428u, 0x2A3430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A3430u;
label_2a3430:
    // 0x2a3430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3434:
    // 0x2a3434: 0x3e00008  jr          $ra
label_2a3438:
    if (ctx->pc == 0x2A3438u) {
        ctx->pc = 0x2A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3434u;
        // 0x2a3438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A343Cu;
        goto label_2a343c;
    }
    ctx->pc = 0x2A3434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3434u;
        // 0x2a3438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A343Cu;
label_2a343c:
    // 0x2a343c: 0x0  nop
    ctx->pc = 0x2a343cu;
    // NOP
label_2a3440:
    // 0x2a3440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a3444:
    // 0x2a3444: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a3444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a3448:
    // 0x2a3448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a344c:
    // 0x2a344c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a344cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3450:
    // 0x2a3450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a3454:
    // 0x2a3454: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_2a3458:
    if (ctx->pc == 0x2A3458u) {
        ctx->pc = 0x2A345Cu;
        goto label_2a345c;
    }
    ctx->pc = 0x2A3454u;
    {
        const bool branch_taken_0x2a3454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3454) {
            ctx->pc = 0x2A346Cu;
            goto label_2a346c;
        }
    }
    ctx->pc = 0x2A345Cu;
label_2a345c:
    // 0x2a345c: 0xc0a8d8a  jal         func_2A3628
label_2a3460:
    if (ctx->pc == 0x2A3460u) {
        ctx->pc = 0x2A3464u;
        goto label_2a3464;
    }
    ctx->pc = 0x2A345Cu;
    SET_GPR_U32(ctx, 31, 0x2A3464u);
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2A345Cu, 0x2A3464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3464u;
label_2a3464:
    // 0x2a3464: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_2a3468:
    if (ctx->pc == 0x2A3468u) {
        ctx->pc = 0x2A3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3464u;
        // 0x2a3468: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A346Cu;
        goto label_2a346c;
    }
    ctx->pc = 0x2A3464u;
    {
        const bool branch_taken_0x2a3464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3464u;
        // 0x2a3468: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3464) {
            ctx->pc = 0x2A3454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3454;
        }
    }
    ctx->pc = 0x2A346Cu;
label_2a346c:
    // 0x2a346c: 0xc0a8bf6  jal         func_2A2FD8
label_2a3470:
    if (ctx->pc == 0x2A3470u) {
        ctx->pc = 0x2A3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A346Cu;
        // 0x2a3470: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3474u;
        goto label_2a3474;
    }
    ctx->pc = 0x2A346Cu;
    SET_GPR_U32(ctx, 31, 0x2A3474u);
    ctx->pc = 0x2A3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A346Cu;
    // 0x2a3470: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2A346Cu, 0x2A3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3474u;
label_2a3474:
    // 0x2a3474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3478:
    // 0x2a3478: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_2a347c:
    if (ctx->pc == 0x2A347Cu) {
        ctx->pc = 0x2A347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3478u;
        // 0x2a347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3480u;
        goto label_2a3480;
    }
    ctx->pc = 0x2A3478u;
    {
        const bool branch_taken_0x2a3478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3478) {
            ctx->pc = 0x2A347Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3478u;
            // 0x2a347c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3488u;
            goto label_2a3488;
        }
    }
    ctx->pc = 0x2A3480u;
label_2a3480:
    // 0x2a3480: 0x10000021  b           . + 4 + (0x21 << 2)
label_2a3484:
    if (ctx->pc == 0x2A3484u) {
        ctx->pc = 0x2A3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3480u;
        // 0x2a3484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3488u;
        goto label_2a3488;
    }
    ctx->pc = 0x2A3480u;
    {
        const bool branch_taken_0x2a3480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3480u;
        // 0x2a3484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3480) {
            ctx->pc = 0x2A3508u;
            goto label_2a3508;
        }
    }
    ctx->pc = 0x2A3488u;
label_2a3488:
    // 0x2a3488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a348c:
    // 0x2a348c: 0xc049cb6  jal         func_1272D8
label_2a3490:
    if (ctx->pc == 0x2A3490u) {
        ctx->pc = 0x2A3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A348Cu;
        // 0x2a3490: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3494u;
        goto label_2a3494;
    }
    ctx->pc = 0x2A348Cu;
    SET_GPR_U32(ctx, 31, 0x2A3494u);
    ctx->pc = 0x2A3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A348Cu;
    // 0x2a3490: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2A348Cu, 0x2A3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3494u;
label_2a3494:
    // 0x2a3494: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a3494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a3498:
    // 0x2a3498: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2a3498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2a349c:
    // 0x2a349c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2a349cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2a34a0:
    // 0x2a34a0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2a34a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2a34a4:
    // 0x2a34a4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2a34a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2a34a8:
    // 0x2a34a8: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2a34a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2a34ac:
    // 0x2a34ac: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2a34acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2a34b0:
    // 0x2a34b0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2a34b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a34b4:
    // 0x2a34b4: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x2a34b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a34b8:
    // 0x2a34b8: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x2a34b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a34bc:
    // 0x2a34bc: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x2a34bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a34c0:
    // 0x2a34c0: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x2a34c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a34c4:
    // 0x2a34c4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2a34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_2a34c8:
    // 0x2a34c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2a34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2a34cc:
    // 0x2a34cc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2a34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2a34d0:
    // 0x2a34d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2a34d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2a34d4:
    // 0x2a34d4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2a34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2a34d8:
    // 0x2a34d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2a34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2a34dc:
    // 0x2a34dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2a34e0:
    if (ctx->pc == 0x2A34E0u) {
        ctx->pc = 0x2A34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34DCu;
        // 0x2a34e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A34E4u;
        goto label_2a34e4;
    }
    ctx->pc = 0x2A34DCu;
    {
        const bool branch_taken_0x2a34dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34DCu;
        // 0x2a34e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34dc) {
            ctx->pc = 0x2A3504u;
            goto label_2a3504;
        }
    }
    ctx->pc = 0x2A34E4u;
label_2a34e4:
    // 0x2a34e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a34e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a34e8:
    // 0x2a34e8: 0x40f809  jalr        $v0
label_2a34ec:
    if (ctx->pc == 0x2A34ECu) {
        ctx->pc = 0x2A34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34E8u;
        // 0x2a34ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A34F0u;
        goto label_2a34f0;
    }
    ctx->pc = 0x2A34E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A34F0u);
        ctx->pc = 0x2A34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34E8u;
        // 0x2a34ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A34E8u, 0x2A34F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A34F0u;
label_2a34f0:
    // 0x2a34f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a34f4:
    if (ctx->pc == 0x2A34F4u) {
        ctx->pc = 0x2A34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34F0u;
        // 0x2a34f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A34F8u;
        goto label_2a34f8;
    }
    ctx->pc = 0x2A34F0u;
    {
        const bool branch_taken_0x2a34f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34F0u;
        // 0x2a34f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34f0) {
            ctx->pc = 0x2A3508u;
            goto label_2a3508;
        }
    }
    ctx->pc = 0x2A34F8u;
label_2a34f8:
    // 0x2a34f8: 0xc0a8c0a  jal         func_2A3028
label_2a34fc:
    if (ctx->pc == 0x2A34FCu) {
        ctx->pc = 0x2A34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34F8u;
        // 0x2a34fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3500u;
        goto label_2a3500;
    }
    ctx->pc = 0x2A34F8u;
    SET_GPR_U32(ctx, 31, 0x2A3500u);
    ctx->pc = 0x2A34FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A34F8u;
    // 0x2a34fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A34F8u, 0x2A3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3500u;
label_2a3500:
    // 0x2a3500: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a3500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3504:
    // 0x2a3504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a3508:
    // 0x2a3508: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a350c:
    // 0x2a350c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a350cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3510:
    // 0x2a3510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3514:
    // 0x2a3514: 0x3e00008  jr          $ra
label_2a3518:
    if (ctx->pc == 0x2A3518u) {
        ctx->pc = 0x2A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3514u;
        // 0x2a3518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A351Cu;
        goto label_2a351c;
    }
    ctx->pc = 0x2A3514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3514u;
        // 0x2a3518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A351Cu;
label_2a351c:
    // 0x2a351c: 0x0  nop
    ctx->pc = 0x2a351cu;
    // NOP
    if (ctx->pc == 0x2a351cu) { ctx->pc = 0x2a3520u; }
}
