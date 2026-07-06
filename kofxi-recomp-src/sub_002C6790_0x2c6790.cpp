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

// Function: sub_002C6790
// Address: 0x2c6790 - 0x2c68e8
void sub_002C6790_0x2c6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6790_0x2c6790");
#endif

    switch (ctx->pc) {
        case 0x2c6790u: goto label_2c6790;
        case 0x2c6794u: goto label_2c6794;
        case 0x2c6798u: goto label_2c6798;
        case 0x2c679cu: goto label_2c679c;
        case 0x2c67a0u: goto label_2c67a0;
        case 0x2c67a4u: goto label_2c67a4;
        case 0x2c67a8u: goto label_2c67a8;
        case 0x2c67acu: goto label_2c67ac;
        case 0x2c67b0u: goto label_2c67b0;
        case 0x2c67b4u: goto label_2c67b4;
        case 0x2c67b8u: goto label_2c67b8;
        case 0x2c67bcu: goto label_2c67bc;
        case 0x2c67c0u: goto label_2c67c0;
        case 0x2c67c4u: goto label_2c67c4;
        case 0x2c67c8u: goto label_2c67c8;
        case 0x2c67ccu: goto label_2c67cc;
        case 0x2c67d0u: goto label_2c67d0;
        case 0x2c67d4u: goto label_2c67d4;
        case 0x2c67d8u: goto label_2c67d8;
        case 0x2c67dcu: goto label_2c67dc;
        case 0x2c67e0u: goto label_2c67e0;
        case 0x2c67e4u: goto label_2c67e4;
        case 0x2c67e8u: goto label_2c67e8;
        case 0x2c67ecu: goto label_2c67ec;
        case 0x2c67f0u: goto label_2c67f0;
        case 0x2c67f4u: goto label_2c67f4;
        case 0x2c67f8u: goto label_2c67f8;
        case 0x2c67fcu: goto label_2c67fc;
        case 0x2c6800u: goto label_2c6800;
        case 0x2c6804u: goto label_2c6804;
        case 0x2c6808u: goto label_2c6808;
        case 0x2c680cu: goto label_2c680c;
        case 0x2c6810u: goto label_2c6810;
        case 0x2c6814u: goto label_2c6814;
        case 0x2c6818u: goto label_2c6818;
        case 0x2c681cu: goto label_2c681c;
        case 0x2c6820u: goto label_2c6820;
        case 0x2c6824u: goto label_2c6824;
        case 0x2c6828u: goto label_2c6828;
        case 0x2c682cu: goto label_2c682c;
        case 0x2c6830u: goto label_2c6830;
        case 0x2c6834u: goto label_2c6834;
        case 0x2c6838u: goto label_2c6838;
        case 0x2c683cu: goto label_2c683c;
        case 0x2c6840u: goto label_2c6840;
        case 0x2c6844u: goto label_2c6844;
        case 0x2c6848u: goto label_2c6848;
        case 0x2c684cu: goto label_2c684c;
        case 0x2c6850u: goto label_2c6850;
        case 0x2c6854u: goto label_2c6854;
        case 0x2c6858u: goto label_2c6858;
        case 0x2c685cu: goto label_2c685c;
        case 0x2c6860u: goto label_2c6860;
        case 0x2c6864u: goto label_2c6864;
        case 0x2c6868u: goto label_2c6868;
        case 0x2c686cu: goto label_2c686c;
        case 0x2c6870u: goto label_2c6870;
        case 0x2c6874u: goto label_2c6874;
        case 0x2c6878u: goto label_2c6878;
        case 0x2c687cu: goto label_2c687c;
        case 0x2c6880u: goto label_2c6880;
        case 0x2c6884u: goto label_2c6884;
        case 0x2c6888u: goto label_2c6888;
        case 0x2c688cu: goto label_2c688c;
        case 0x2c6890u: goto label_2c6890;
        case 0x2c6894u: goto label_2c6894;
        case 0x2c6898u: goto label_2c6898;
        case 0x2c689cu: goto label_2c689c;
        case 0x2c68a0u: goto label_2c68a0;
        case 0x2c68a4u: goto label_2c68a4;
        case 0x2c68a8u: goto label_2c68a8;
        case 0x2c68acu: goto label_2c68ac;
        case 0x2c68b0u: goto label_2c68b0;
        case 0x2c68b4u: goto label_2c68b4;
        case 0x2c68b8u: goto label_2c68b8;
        case 0x2c68bcu: goto label_2c68bc;
        case 0x2c68c0u: goto label_2c68c0;
        case 0x2c68c4u: goto label_2c68c4;
        case 0x2c68c8u: goto label_2c68c8;
        case 0x2c68ccu: goto label_2c68cc;
        case 0x2c68d0u: goto label_2c68d0;
        case 0x2c68d4u: goto label_2c68d4;
        case 0x2c68d8u: goto label_2c68d8;
        case 0x2c68dcu: goto label_2c68dc;
        case 0x2c68e0u: goto label_2c68e0;
        case 0x2c68e4u: goto label_2c68e4;
        default: break;
    }

    ctx->pc = 0x2c6790u;

label_2c6790:
    // 0x2c6790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c6794:
    // 0x2c6794: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2c6794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c6798:
    // 0x2c6798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c679c:
    // 0x2c679c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2c679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2c67a0:
    // 0x2c67a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c67a4:
    // 0x2c67a4: 0x40f809  jalr        $v0
label_2c67a8:
    if (ctx->pc == 0x2C67A8u) {
        ctx->pc = 0x2C67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67A4u;
        // 0x2c67a8: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67ACu;
        goto label_2c67ac;
    }
    ctx->pc = 0x2C67A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C67ACu);
        ctx->pc = 0x2C67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67A4u;
        // 0x2c67a8: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C67A4u, 0x2C67ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C67ACu;
label_2c67ac:
    // 0x2c67ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c67acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c67b0:
    // 0x2c67b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c67b4:
    if (ctx->pc == 0x2C67B4u) {
        ctx->pc = 0x2C67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67B0u;
        // 0x2c67b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67B8u;
        goto label_2c67b8;
    }
    ctx->pc = 0x2C67B0u;
    {
        const bool branch_taken_0x2c67b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67B0u;
        // 0x2c67b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67b0) {
            ctx->pc = 0x2C67C8u;
            goto label_2c67c8;
        }
    }
    ctx->pc = 0x2C67B8u;
label_2c67b8:
    // 0x2c67b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c67b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c67bc:
    // 0x2c67bc: 0x80b21d8  j           func_2C8760
label_2c67c0:
    if (ctx->pc == 0x2C67C0u) {
        ctx->pc = 0x2C67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67BCu;
        // 0x2c67c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67C4u;
        goto label_2c67c4;
    }
    ctx->pc = 0x2C67BCu;
    ctx->pc = 0x2C67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C67BCu;
    // 0x2c67c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    sub_002C8760_0x2c8760(rdram, ctx, runtime); return;
    ctx->pc = 0x2C67C4u;
label_2c67c4:
    // 0x2c67c4: 0x0  nop
    ctx->pc = 0x2c67c4u;
    // NOP
label_2c67c8:
    // 0x2c67c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c67c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c67cc:
    // 0x2c67cc: 0x3e00008  jr          $ra
label_2c67d0:
    if (ctx->pc == 0x2C67D0u) {
        ctx->pc = 0x2C67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67CCu;
        // 0x2c67d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C67D4u;
        goto label_2c67d4;
    }
    ctx->pc = 0x2C67CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67CCu;
        // 0x2c67d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C67CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C67D4u;
label_2c67d4:
    // 0x2c67d4: 0x0  nop
    ctx->pc = 0x2c67d4u;
    // NOP
label_2c67d8:
    // 0x2c67d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c67d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c67dc:
    // 0x2c67dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c67dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c67e0:
    // 0x2c67e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c67e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c67e4:
    // 0x2c67e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c67e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c67e8:
    // 0x2c67e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c67e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c67ec:
    // 0x2c67ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c67ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c67f0:
    // 0x2c67f0: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2c67f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2c67f4:
    // 0x2c67f4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c67f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c67f8:
    // 0x2c67f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c67f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c67fc:
    // 0x2c67fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c6800:
    // 0x2c6800: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2c6800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c6804:
    // 0x2c6804: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c6804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c6808:
    // 0x2c6808: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2c6808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c680c:
    // 0x2c680c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2c6810:
    // 0x2c6810: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c6810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c6814:
    // 0x2c6814: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2c6818:
    // 0x2c6818: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c6818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c681c:
    // 0x2c681c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6820:
    // 0x2c6820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c6820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c6824:
    // 0x2c6824: 0x40f809  jalr        $v0
label_2c6828:
    if (ctx->pc == 0x2C6828u) {
        ctx->pc = 0x2C6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6824u;
        // 0x2c6828: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C682Cu;
        goto label_2c682c;
    }
    ctx->pc = 0x2C6824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C682Cu);
        ctx->pc = 0x2C6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6824u;
        // 0x2c6828: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6824u, 0x2C682Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C682Cu;
label_2c682c:
    // 0x2c682c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c682cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6830:
    // 0x2c6830: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_2c6834:
    if (ctx->pc == 0x2C6834u) {
        ctx->pc = 0x2C6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6830u;
        // 0x2c6834: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6838u;
        goto label_2c6838;
    }
    ctx->pc = 0x2C6830u;
    {
        const bool branch_taken_0x2c6830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6830u;
        // 0x2c6834: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6830) {
            ctx->pc = 0x2C6870u;
            goto label_2c6870;
        }
    }
    ctx->pc = 0x2C6838u;
label_2c6838:
    // 0x2c6838: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2c6838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c683c:
    // 0x2c683c: 0xc0b5f44  jal         func_2D7D10
label_2c6840:
    if (ctx->pc == 0x2C6840u) {
        ctx->pc = 0x2C6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C683Cu;
        // 0x2c6840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6844u;
        goto label_2c6844;
    }
    ctx->pc = 0x2C683Cu;
    SET_GPR_U32(ctx, 31, 0x2C6844u);
    ctx->pc = 0x2C6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C683Cu;
    // 0x2c6840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D10u, 0x2C683Cu, 0x2C6844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6844u;
label_2c6844:
    // 0x2c6844: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2c6848:
    if (ctx->pc == 0x2C6848u) {
        ctx->pc = 0x2C6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6844u;
        // 0x2c6848: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C684Cu;
        goto label_2c684c;
    }
    ctx->pc = 0x2C6844u;
    {
        const bool branch_taken_0x2c6844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6844) {
            ctx->pc = 0x2C6848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6844u;
            // 0x2c6848: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C68C0u;
            goto label_2c68c0;
        }
    }
    ctx->pc = 0x2C684Cu;
label_2c684c:
    // 0x2c684c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6850:
    // 0x2c6850: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2c6850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2c6854:
    // 0x2c6854: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_2c6858:
    if (ctx->pc == 0x2C6858u) {
        ctx->pc = 0x2C6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6854u;
        // 0x2c6858: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C685Cu;
        goto label_2c685c;
    }
    ctx->pc = 0x2C6854u;
    {
        const bool branch_taken_0x2c6854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6854) {
            ctx->pc = 0x2C6858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6854u;
            // 0x2c6858: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6888u;
            goto label_2c6888;
        }
    }
    ctx->pc = 0x2C685Cu;
label_2c685c:
    // 0x2c685c: 0x60f809  jalr        $v1
label_2c6860:
    if (ctx->pc == 0x2C6860u) {
        ctx->pc = 0x2C6860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C685Cu;
        // 0x2c6860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6864u;
        goto label_2c6864;
    }
    ctx->pc = 0x2C685Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C6864u);
        ctx->pc = 0x2C6860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C685Cu;
        // 0x2c6860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C685Cu, 0x2C6864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C6864u;
label_2c6864:
    // 0x2c6864: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6868:
    // 0x2c6868: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2c686c:
    if (ctx->pc == 0x2C686Cu) {
        ctx->pc = 0x2C686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6868u;
        // 0x2c686c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6870u;
        goto label_2c6870;
    }
    ctx->pc = 0x2C6868u;
    {
        const bool branch_taken_0x2c6868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6868u;
        // 0x2c686c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6868) {
            ctx->pc = 0x2C6880u;
            goto label_2c6880;
        }
    }
    ctx->pc = 0x2C6870u;
label_2c6870:
    // 0x2c6870: 0xc0b21d8  jal         func_2C8760
label_2c6874:
    if (ctx->pc == 0x2C6874u) {
        ctx->pc = 0x2C6878u;
        goto label_2c6878;
    }
    ctx->pc = 0x2C6870u;
    SET_GPR_U32(ctx, 31, 0x2C6878u);
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2C6870u, 0x2C6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6878u;
label_2c6878:
    // 0x2c6878: 0x10000011  b           . + 4 + (0x11 << 2)
label_2c687c:
    if (ctx->pc == 0x2C687Cu) {
        ctx->pc = 0x2C687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6878u;
        // 0x2c687c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6880u;
        goto label_2c6880;
    }
    ctx->pc = 0x2C6878u;
    {
        const bool branch_taken_0x2c6878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6878u;
        // 0x2c687c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6878) {
            ctx->pc = 0x2C68C0u;
            goto label_2c68c0;
        }
    }
    ctx->pc = 0x2C6880u;
label_2c6880:
    // 0x2c6880: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2c6880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c6884:
    // 0x2c6884: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2c6884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2c6888:
    // 0x2c6888: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c6888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c688c:
    // 0x2c688c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c6890:
    // 0x2c6890: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c6890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c6894:
    // 0x2c6894: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2c6894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c6898:
    // 0x2c6898: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c6898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c689c:
    // 0x2c689c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c689cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c68a0:
    // 0x2c68a0: 0x40f809  jalr        $v0
label_2c68a4:
    if (ctx->pc == 0x2C68A4u) {
        ctx->pc = 0x2C68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68A0u;
        // 0x2c68a4: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C68A8u;
        goto label_2c68a8;
    }
    ctx->pc = 0x2C68A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C68A8u);
        ctx->pc = 0x2C68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68A0u;
        // 0x2c68a4: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C68A0u, 0x2C68A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C68A8u;
label_2c68a8:
    // 0x2c68a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c68a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c68ac:
    // 0x2c68ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2c68b0:
    if (ctx->pc == 0x2C68B0u) {
        ctx->pc = 0x2C68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68ACu;
        // 0x2c68b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C68B4u;
        goto label_2c68b4;
    }
    ctx->pc = 0x2C68ACu;
    {
        const bool branch_taken_0x2c68ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68ACu;
        // 0x2c68b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68ac) {
            ctx->pc = 0x2C68BCu;
            goto label_2c68bc;
        }
    }
    ctx->pc = 0x2C68B4u;
label_2c68b4:
    // 0x2c68b4: 0xc0b21d8  jal         func_2C8760
label_2c68b8:
    if (ctx->pc == 0x2C68B8u) {
        ctx->pc = 0x2C68BCu;
        goto label_2c68bc;
    }
    ctx->pc = 0x2C68B4u;
    SET_GPR_U32(ctx, 31, 0x2C68BCu);
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2C68B4u, 0x2C68BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68BCu;
label_2c68bc:
    // 0x2c68bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c68bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c68c0:
    // 0x2c68c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c68c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c68c4:
    // 0x2c68c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c68c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c68c8:
    // 0x2c68c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c68c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c68cc:
    // 0x2c68cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c68ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c68d0:
    // 0x2c68d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c68d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c68d4:
    // 0x2c68d4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c68d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c68d8:
    // 0x2c68d8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c68d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c68dc:
    // 0x2c68dc: 0x3e00008  jr          $ra
label_2c68e0:
    if (ctx->pc == 0x2C68E0u) {
        ctx->pc = 0x2C68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68DCu;
        // 0x2c68e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C68E4u;
        goto label_2c68e4;
    }
    ctx->pc = 0x2C68DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C68E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68DCu;
        // 0x2c68e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C68DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C68E4u;
label_2c68e4:
    // 0x2c68e4: 0x0  nop
    ctx->pc = 0x2c68e4u;
    // NOP
}
