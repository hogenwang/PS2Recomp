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

// Function: sub_001AB790
// Address: 0x1ab790 - 0x1ab908
void sub_001AB790_0x1ab790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB790_0x1ab790");
#endif

    switch (ctx->pc) {
        case 0x1ab7b4u: goto label_1ab7b4;
        case 0x1ab800u: goto label_1ab800;
        case 0x1ab830u: goto label_1ab830;
        case 0x1ab860u: goto label_1ab860;
        case 0x1ab890u: goto label_1ab890;
        case 0x1ab8c0u: goto label_1ab8c0;
        default: break;
    }

    ctx->pc = 0x1ab790u;

    // 0x1ab790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab798: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ab798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab7a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ab7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ab7a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ab7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ab7ac: 0xc06ac96  jal         func_1AB258
    ctx->pc = 0x1AB7ACu;
    SET_GPR_U32(ctx, 31, 0x1AB7B4u);
    ctx->pc = 0x1AB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7ACu;
    // 0x1ab7b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB258u, 0x1AB7ACu, 0x1AB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7B4u;
label_1ab7b4:
    // 0x1ab7b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1ab7b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab7b8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1ab7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab7bc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1ab7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ab7c0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1ab7c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab7c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ab7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ab7cc: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB7CCu;
    {
        const bool branch_taken_0x1ab7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7CCu;
        // 0x1ab7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7cc) {
            ctx->pc = 0x1AB7F8u;
            goto label_1ab7f8;
        }
    }
    ctx->pc = 0x1AB7D4u;
    // 0x1ab7d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab7e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ab7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab7e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab7ec: 0x806acfe  j           func_1AB3F8
    ctx->pc = 0x1AB7ECu;
    ctx->pc = 0x1AB7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7ECu;
    // 0x1ab7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3F8u, 0x1AB7ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AB7F4u;
    // 0x1ab7f4: 0x0  nop
    ctx->pc = 0x1ab7f4u;
    // NOP
label_1ab7f8:
    // 0x1ab7f8: 0xc06b244  jal         func_1AC910
    ctx->pc = 0x1AB7F8u;
    SET_GPR_U32(ctx, 31, 0x1AB800u);
    ctx->pc = 0x1AB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7F8u;
    // 0x1ab7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC910u, 0x1AB7F8u, 0x1AB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB800u;
label_1ab800:
    // 0x1ab800: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB800u;
    {
        const bool branch_taken_0x1ab800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB800u;
        // 0x1ab804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab800) {
            ctx->pc = 0x1AB828u;
            goto label_1ab828;
        }
    }
    ctx->pc = 0x1AB808u;
    // 0x1ab808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab80c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab814: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ab814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab818: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab81c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab820: 0x806b1a8  j           func_1AC6A0
    ctx->pc = 0x1AB820u;
    ctx->pc = 0x1AB824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB820u;
    // 0x1ab824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC6A0u, 0x1AB820u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AB828u;
label_1ab828:
    // 0x1ab828: 0xc06b446  jal         func_1AD118
    ctx->pc = 0x1AB828u;
    SET_GPR_U32(ctx, 31, 0x1AB830u);
    ctx->pc = 0x1AB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB828u;
    // 0x1ab82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD118u, 0x1AB828u, 0x1AB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB830u;
label_1ab830:
    // 0x1ab830: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB830u;
    {
        const bool branch_taken_0x1ab830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB830u;
        // 0x1ab834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab830) {
            ctx->pc = 0x1AB858u;
            goto label_1ab858;
        }
    }
    ctx->pc = 0x1AB838u;
    // 0x1ab838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab83c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab844: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ab844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab848: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab84c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab850: 0x806b2da  j           func_1ACB68
    ctx->pc = 0x1AB850u;
    ctx->pc = 0x1AB854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB850u;
    // 0x1ab854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACB68u, 0x1AB850u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AB858u;
label_1ab858:
    // 0x1ab858: 0xc06a788  jal         func_1A9E20
    ctx->pc = 0x1AB858u;
    SET_GPR_U32(ctx, 31, 0x1AB860u);
    ctx->pc = 0x1AB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB858u;
    // 0x1ab85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9E20u, 0x1AB858u, 0x1AB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB860u;
label_1ab860:
    // 0x1ab860: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB860u;
    {
        const bool branch_taken_0x1ab860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB860u;
        // 0x1ab864: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab860) {
            ctx->pc = 0x1AB888u;
            goto label_1ab888;
        }
    }
    ctx->pc = 0x1AB868u;
    // 0x1ab868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab874: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ab874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab878: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab87c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab880: 0x806a7e6  j           func_1A9F98
    ctx->pc = 0x1AB880u;
    ctx->pc = 0x1AB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB880u;
    // 0x1ab884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9F98u, 0x1AB880u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AB888u;
label_1ab888:
    // 0x1ab888: 0xc06a9ca  jal         func_1AA728
    ctx->pc = 0x1AB888u;
    SET_GPR_U32(ctx, 31, 0x1AB890u);
    ctx->pc = 0x1AB88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB888u;
    // 0x1ab88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA728u, 0x1AB888u, 0x1AB890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB890u;
label_1ab890:
    // 0x1ab890: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB890u;
    {
        const bool branch_taken_0x1ab890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB890u;
        // 0x1ab894: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab890) {
            ctx->pc = 0x1AB8B8u;
            goto label_1ab8b8;
        }
    }
    ctx->pc = 0x1AB898u;
    // 0x1ab898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab89c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab89cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ab8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab8ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab8b0: 0x806aa24  j           func_1AA890
    ctx->pc = 0x1AB8B0u;
    ctx->pc = 0x1AB8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8B0u;
    // 0x1ab8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA890u, 0x1AB8B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AB8B8u;
label_1ab8b8:
    // 0x1ab8b8: 0xc06a646  jal         func_1A9918
    ctx->pc = 0x1AB8B8u;
    SET_GPR_U32(ctx, 31, 0x1AB8C0u);
    ctx->pc = 0x1AB8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8B8u;
    // 0x1ab8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9918u, 0x1AB8B8u, 0x1AB8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8C0u;
label_1ab8c0:
    // 0x1ab8c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB8C0u;
    {
        const bool branch_taken_0x1ab8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8C0u;
        // 0x1ab8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8c0) {
            ctx->pc = 0x1AB8E8u;
            goto label_1ab8e8;
        }
    }
    ctx->pc = 0x1AB8C8u;
    // 0x1ab8c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab8cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ab8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ab8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab8dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab8e0: 0x806a61a  j           func_1A9868
    ctx->pc = 0x1AB8E0u;
    ctx->pc = 0x1AB8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8E0u;
    // 0x1ab8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9868u, 0x1AB8E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AB8E8u;
label_1ab8e8:
    // 0x1ab8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab8ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab8f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab8f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8FCu;
        // 0x1ab900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB904u;
    // 0x1ab904: 0x0  nop
    ctx->pc = 0x1ab904u;
    // NOP
    if (ctx->pc == 0x1ab904u) { ctx->pc = 0x1ab908u; }
}
