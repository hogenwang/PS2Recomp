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

// Function: sub_002E0520
// Address: 0x2e0520 - 0x2e0750
void sub_002E0520_0x2e0520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0520_0x2e0520");
#endif

    switch (ctx->pc) {
        case 0x2e0550u: goto label_2e0550;
        case 0x2e0568u: goto label_2e0568;
        case 0x2e0580u: goto label_2e0580;
        case 0x2e05b4u: goto label_2e05b4;
        case 0x2e05d8u: goto label_2e05d8;
        case 0x2e05f0u: goto label_2e05f0;
        case 0x2e0608u: goto label_2e0608;
        case 0x2e0630u: goto label_2e0630;
        case 0x2e0664u: goto label_2e0664;
        case 0x2e067cu: goto label_2e067c;
        case 0x2e0698u: goto label_2e0698;
        case 0x2e06c0u: goto label_2e06c0;
        case 0x2e06f4u: goto label_2e06f4;
        case 0x2e070cu: goto label_2e070c;
        case 0x2e0728u: goto label_2e0728;
        default: break;
    }

    ctx->pc = 0x2e0520u;

    // 0x2e0520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0524: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e0524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e0528: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e0528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e052c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e0530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0534: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e0534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0538: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e0538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e053c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e053cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0540: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0544: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e0544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e0548: 0xc0b7de0  jal         func_2DF780
    ctx->pc = 0x2E0548u;
    SET_GPR_U32(ctx, 31, 0x2E0550u);
    ctx->pc = 0x2E054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0548u;
    // 0x2e054c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF780u, 0x2E0548u, 0x2E0550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0550u;
label_2e0550:
    // 0x2e0550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e0550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0554: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0558u;
    {
        const bool branch_taken_0x2e0558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0558u;
        // 0x2e055c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0558) {
            ctx->pc = 0x2E0570u;
            goto label_2e0570;
        }
    }
    ctx->pc = 0x2E0560u;
    // 0x2e0560: 0xc0b7ee4  jal         func_2DFB90
    ctx->pc = 0x2E0560u;
    SET_GPR_U32(ctx, 31, 0x2E0568u);
    ctx->pc = 0x2E0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0560u;
    // 0x2e0564: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFB90u, 0x2E0560u, 0x2E0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0568u;
label_2e0568:
    // 0x2e0568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0568u;
    {
        const bool branch_taken_0x2e0568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0568) {
            ctx->pc = 0x2E0578u;
            goto label_2e0578;
        }
    }
    ctx->pc = 0x2E0570u;
label_2e0570:
    // 0x2e0570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0570u;
    {
        const bool branch_taken_0x2e0570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0570u;
        // 0x2e0574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0570) {
            ctx->pc = 0x2E058Cu;
            goto label_2e058c;
        }
    }
    ctx->pc = 0x2E0578u;
label_2e0578:
    // 0x2e0578: 0xc0b7f12  jal         func_2DFC48
    ctx->pc = 0x2E0578u;
    SET_GPR_U32(ctx, 31, 0x2E0580u);
    ctx->pc = 0x2E057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0578u;
    // 0x2e057c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC48u, 0x2E0578u, 0x2E0580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0580u;
label_2e0580:
    // 0x2e0580: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0584: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e0584u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0588: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e058c:
    // 0x2e058c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e058cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0590: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0594: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e0594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0598: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e059c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E059Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E059Cu;
        // 0x2e05a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E059Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E05A4u;
    // 0x2e05a4: 0x0  nop
    ctx->pc = 0x2e05a4u;
    // NOP
    // 0x2e05a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e05a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e05ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e05acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e05b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e05b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e05b4:
    // 0x2e05b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e05b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e05b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e05b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e05bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e05c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e05c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e05cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e05d0: 0xc0b7fba  jal         func_2DFEE8
    ctx->pc = 0x2E05D0u;
    SET_GPR_U32(ctx, 31, 0x2E05D8u);
    ctx->pc = 0x2E05D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05D0u;
    // 0x2e05d4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEE8u, 0x2E05D0u, 0x2E05D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05D8u;
label_2e05d8:
    // 0x2e05d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e05d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e05dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E05E0u;
    {
        const bool branch_taken_0x2e05e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05E0u;
        // 0x2e05e4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05e0) {
            ctx->pc = 0x2E05F8u;
            goto label_2e05f8;
        }
    }
    ctx->pc = 0x2E05E8u;
    // 0x2e05e8: 0xc0b80be  jal         func_2E02F8
    ctx->pc = 0x2E05E8u;
    SET_GPR_U32(ctx, 31, 0x2E05F0u);
    ctx->pc = 0x2E05ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05E8u;
    // 0x2e05ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E02F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E02F8u, 0x2E05E8u, 0x2E05F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05F0u;
label_2e05f0:
    // 0x2e05f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E05F0u;
    {
        const bool branch_taken_0x2e05f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e05f0) {
            ctx->pc = 0x2E0600u;
            goto label_2e0600;
        }
    }
    ctx->pc = 0x2E05F8u;
label_2e05f8:
    // 0x2e05f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E05F8u;
    {
        const bool branch_taken_0x2e05f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05F8u;
        // 0x2e05fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05f8) {
            ctx->pc = 0x2E0614u;
            goto label_2e0614;
        }
    }
    ctx->pc = 0x2E0600u;
label_2e0600:
    // 0x2e0600: 0xc0b80ec  jal         func_2E03B0
    ctx->pc = 0x2E0600u;
    SET_GPR_U32(ctx, 31, 0x2E0608u);
    ctx->pc = 0x2E0604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0600u;
    // 0x2e0604: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E03B0u, 0x2E0600u, 0x2E0608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0608u;
label_2e0608:
    // 0x2e0608: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e060c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e060cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0610: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e0614:
    // 0x2e0614: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0618: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e061c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e061cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0620: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0624: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0624u;
        // 0x2e0628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E062Cu;
    // 0x2e062c: 0x0  nop
    ctx->pc = 0x2e062cu;
    // NOP
label_2e0630:
    // 0x2e0630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e0638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e063c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0640: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e0640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0644: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e0644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0648: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2e0648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e064c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e0650: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e0650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0654: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e0658: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e0658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e065c: 0xc0b7e1c  jal         func_2DF870
    ctx->pc = 0x2E065Cu;
    SET_GPR_U32(ctx, 31, 0x2E0664u);
    ctx->pc = 0x2E0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E065Cu;
    // 0x2e0660: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF870u, 0x2E065Cu, 0x2E0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0664u;
label_2e0664:
    // 0x2e0664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0668: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e0668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e066c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E066Cu;
    {
        const bool branch_taken_0x2e066c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E066Cu;
        // 0x2e0670: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e066c) {
            ctx->pc = 0x2E0684u;
            goto label_2e0684;
        }
    }
    ctx->pc = 0x2E0674u;
    // 0x2e0674: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2E0674u;
    SET_GPR_U32(ctx, 31, 0x2E067Cu);
    ctx->pc = 0x2E0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0674u;
    // 0x2e0678: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2E0674u, 0x2E067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E067Cu;
label_2e067c:
    // 0x2e067c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E067Cu;
    {
        const bool branch_taken_0x2e067c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e067c) {
            ctx->pc = 0x2E0690u;
            goto label_2e0690;
        }
    }
    ctx->pc = 0x2E0684u;
label_2e0684:
    // 0x2e0684: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0684u;
    {
        const bool branch_taken_0x2e0684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0684u;
        // 0x2e0688: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0684) {
            ctx->pc = 0x2E06A4u;
            goto label_2e06a4;
        }
    }
    ctx->pc = 0x2E068Cu;
    // 0x2e068c: 0x0  nop
    ctx->pc = 0x2e068cu;
    // NOP
label_2e0690:
    // 0x2e0690: 0xc0b7f24  jal         func_2DFC90
    ctx->pc = 0x2E0690u;
    SET_GPR_U32(ctx, 31, 0x2E0698u);
    ctx->pc = 0x2E0694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0690u;
    // 0x2e0694: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC90u, 0x2E0690u, 0x2E0698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0698u;
label_2e0698:
    // 0x2e0698: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e069c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e069cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e06a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e06a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e06a4:
    // 0x2e06a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e06a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e06a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e06a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e06ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e06acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e06b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e06b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e06b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E06B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06B4u;
        // 0x2e06b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E06B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E06BCu;
    // 0x2e06bc: 0x0  nop
    ctx->pc = 0x2e06bcu;
    // NOP
label_2e06c0:
    // 0x2e06c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e06c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e06c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e06c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e06c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e06c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e06ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2e06d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06d4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2e06d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06d8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2e06d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e06dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e06e0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e06e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e06e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e06e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e06ec: 0xc0b7ff6  jal         func_2DFFD8
    ctx->pc = 0x2E06ECu;
    SET_GPR_U32(ctx, 31, 0x2E06F4u);
    ctx->pc = 0x2E06F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06ECu;
    // 0x2e06f0: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFFD8u, 0x2E06ECu, 0x2E06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06F4u;
label_2e06f4:
    // 0x2e06f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e06f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e06f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E06FCu;
    {
        const bool branch_taken_0x2e06fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06FCu;
        // 0x2e0700: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e06fc) {
            ctx->pc = 0x2E0714u;
            goto label_2e0714;
        }
    }
    ctx->pc = 0x2E0704u;
    // 0x2e0704: 0xc0b80de  jal         func_2E0378
    ctx->pc = 0x2E0704u;
    SET_GPR_U32(ctx, 31, 0x2E070Cu);
    ctx->pc = 0x2E0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0704u;
    // 0x2e0708: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0378u, 0x2E0704u, 0x2E070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E070Cu;
label_2e070c:
    // 0x2e070c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E070Cu;
    {
        const bool branch_taken_0x2e070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e070c) {
            ctx->pc = 0x2E0720u;
            goto label_2e0720;
        }
    }
    ctx->pc = 0x2E0714u;
label_2e0714:
    // 0x2e0714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0714u;
    {
        const bool branch_taken_0x2e0714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0714u;
        // 0x2e0718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0714) {
            ctx->pc = 0x2E0734u;
            goto label_2e0734;
        }
    }
    ctx->pc = 0x2E071Cu;
    // 0x2e071c: 0x0  nop
    ctx->pc = 0x2e071cu;
    // NOP
label_2e0720:
    // 0x2e0720: 0xc0b80fe  jal         func_2E03F8
    ctx->pc = 0x2E0720u;
    SET_GPR_U32(ctx, 31, 0x2E0728u);
    ctx->pc = 0x2E0724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0720u;
    // 0x2e0724: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E03F8u, 0x2E0720u, 0x2E0728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0728u;
label_2e0728:
    // 0x2e0728: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e0728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e072c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2e072cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2e0730: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e0730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e0734:
    // 0x2e0734: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e0734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0738: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e0738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e073c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e073cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0740: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e0740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0744: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0744u;
        // 0x2e0748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E074Cu;
    // 0x2e074c: 0x0  nop
    ctx->pc = 0x2e074cu;
    // NOP
}
