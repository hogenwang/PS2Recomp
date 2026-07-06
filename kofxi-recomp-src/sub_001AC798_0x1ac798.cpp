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

// Function: sub_001AC798
// Address: 0x1ac798 - 0x1ac910
void sub_001AC798_0x1ac798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC798_0x1ac798");
#endif

    switch (ctx->pc) {
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7a0u: goto label_1ac7a0;
        case 0x1ac7a4u: goto label_1ac7a4;
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac7b4u: goto label_1ac7b4;
        case 0x1ac7b8u: goto label_1ac7b8;
        case 0x1ac7bcu: goto label_1ac7bc;
        case 0x1ac7c0u: goto label_1ac7c0;
        case 0x1ac7c4u: goto label_1ac7c4;
        case 0x1ac7c8u: goto label_1ac7c8;
        case 0x1ac7ccu: goto label_1ac7cc;
        case 0x1ac7d0u: goto label_1ac7d0;
        case 0x1ac7d4u: goto label_1ac7d4;
        case 0x1ac7d8u: goto label_1ac7d8;
        case 0x1ac7dcu: goto label_1ac7dc;
        case 0x1ac7e0u: goto label_1ac7e0;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7e8u: goto label_1ac7e8;
        case 0x1ac7ecu: goto label_1ac7ec;
        case 0x1ac7f0u: goto label_1ac7f0;
        case 0x1ac7f4u: goto label_1ac7f4;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac804u: goto label_1ac804;
        case 0x1ac808u: goto label_1ac808;
        case 0x1ac80cu: goto label_1ac80c;
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac814u: goto label_1ac814;
        case 0x1ac818u: goto label_1ac818;
        case 0x1ac81cu: goto label_1ac81c;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac824u: goto label_1ac824;
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac82cu: goto label_1ac82c;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac834u: goto label_1ac834;
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        default: break;
    }

    ctx->pc = 0x1ac798u;

label_1ac798:
    // 0x1ac798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac79c:
    // 0x1ac79c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac7a0:
    // 0x1ac7a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ac7a4:
    // 0x1ac7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7a8:
    // 0x1ac7a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ac7ac:
    // 0x1ac7ac: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1ac7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1ac7b0:
    // 0x1ac7b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ac7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ac7b4:
    // 0x1ac7b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ac7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1ac7b8:
    // 0x1ac7b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ac7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ac7bc:
    // 0x1ac7bc: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_1ac7c0:
    if (ctx->pc == 0x1AC7C0u) {
        ctx->pc = 0x1AC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7BCu;
        // 0x1ac7c0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7C4u;
        goto label_1ac7c4;
    }
    ctx->pc = 0x1AC7BCu;
    {
        const bool branch_taken_0x1ac7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7BCu;
        // 0x1ac7c0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7bc) {
            ctx->pc = 0x1AC8CCu;
            goto label_1ac8cc;
        }
    }
    ctx->pc = 0x1AC7C4u;
label_1ac7c4:
    // 0x1ac7c4: 0xc06f700  jal         func_1BDC00
label_1ac7c8:
    if (ctx->pc == 0x1AC7C8u) {
        ctx->pc = 0x1AC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C4u;
        // 0x1ac7c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7CCu;
        goto label_1ac7cc;
    }
    ctx->pc = 0x1AC7C4u;
    SET_GPR_U32(ctx, 31, 0x1AC7CCu);
    ctx->pc = 0x1AC7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7C4u;
    // 0x1ac7c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AC7C4u, 0x1AC7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7CCu;
label_1ac7cc:
    // 0x1ac7cc: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_1ac7d0:
    if (ctx->pc == 0x1AC7D0u) {
        ctx->pc = 0x1AC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7CCu;
        // 0x1ac7d0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7D4u;
        goto label_1ac7d4;
    }
    ctx->pc = 0x1AC7CCu;
    {
        const bool branch_taken_0x1ac7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac7cc) {
            ctx->pc = 0x1AC7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC7CCu;
            // 0x1ac7d0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC8CCu;
            goto label_1ac8cc;
        }
    }
    ctx->pc = 0x1AC7D4u;
label_1ac7d4:
    // 0x1ac7d4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1ac7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1ac7d8:
    // 0x1ac7d8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1ac7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1ac7dc:
    // 0x1ac7dc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1ac7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1ac7e0:
    // 0x1ac7e0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1ac7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1ac7e4:
    // 0x1ac7e4: 0x40f809  jalr        $v0
label_1ac7e8:
    if (ctx->pc == 0x1AC7E8u) {
        ctx->pc = 0x1AC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E4u;
        // 0x1ac7e8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7ECu;
        goto label_1ac7ec;
    }
    ctx->pc = 0x1AC7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC7ECu);
        ctx->pc = 0x1AC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E4u;
        // 0x1ac7e8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC7E4u, 0x1AC7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC7ECu;
label_1ac7ec:
    // 0x1ac7ec: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1ac7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ac7f0:
    // 0x1ac7f0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1ac7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ac7f4:
    // 0x1ac7f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ac7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac7f8:
    // 0x1ac7f8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1ac7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1ac7fc:
    // 0x1ac7fc: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x1ac7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1ac800:
    // 0x1ac800: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1ac800u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1ac804:
    // 0x1ac804: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x1ac804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ac808:
    // 0x1ac808: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ac808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ac80c:
    // 0x1ac80c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x1ac80cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1ac810:
    // 0x1ac810: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1ac810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1ac814:
    // 0x1ac814: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ac818:
    // 0x1ac818: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1ac818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ac81c:
    // 0x1ac81c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x1ac81cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_1ac820:
    // 0x1ac820: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x1ac820u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1ac824:
    // 0x1ac824: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_1ac828:
    if (ctx->pc == 0x1AC828u) {
        ctx->pc = 0x1AC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC824u;
        // 0x1ac828: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC82Cu;
        goto label_1ac82c;
    }
    ctx->pc = 0x1AC824u;
    {
        const bool branch_taken_0x1ac824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1AC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC824u;
        // 0x1ac828: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac824) {
            ctx->pc = 0x1AC880u;
            goto label_1ac880;
        }
    }
    ctx->pc = 0x1AC82Cu;
label_1ac82c:
    // 0x1ac82c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1ac82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1ac830:
    // 0x1ac830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ac830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac834:
    // 0x1ac834: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ac834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1ac838:
    // 0x1ac838: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ac83c:
    // 0x1ac83c: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_1ac840:
    if (ctx->pc == 0x1AC840u) {
        ctx->pc = 0x1AC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC83Cu;
        // 0x1ac840: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC844u;
        goto label_1ac844;
    }
    ctx->pc = 0x1AC83Cu;
    {
        const bool branch_taken_0x1ac83c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC83Cu;
        // 0x1ac840: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac83c) {
            ctx->pc = 0x1AC8ACu;
            goto label_1ac8ac;
        }
    }
    ctx->pc = 0x1AC844u;
label_1ac844:
    // 0x1ac844: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ac844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac848:
    // 0x1ac848: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x1ac848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1ac84c:
    // 0x1ac84c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ac84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ac850:
    // 0x1ac850: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x1ac850u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1ac854:
    // 0x1ac854: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1ac854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1ac858:
    // 0x1ac858: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x1ac858u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ac85c:
    // 0x1ac85c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1ac85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1ac860:
    // 0x1ac860: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x1ac860u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_1ac864:
    // 0x1ac864: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1ac864u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1ac868:
    // 0x1ac868: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1ac868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1ac86c:
    // 0x1ac86c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_1ac870:
    if (ctx->pc == 0x1AC870u) {
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC874u;
        goto label_1ac874;
    }
    ctx->pc = 0x1AC86Cu;
    {
        const bool branch_taken_0x1ac86c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac86c) {
            ctx->pc = 0x1AC848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac848;
        }
    }
    ctx->pc = 0x1AC874u;
label_1ac874:
    // 0x1ac874: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ac878:
    if (ctx->pc == 0x1AC878u) {
        ctx->pc = 0x1AC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC874u;
        // 0x1ac878: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC87Cu;
        goto label_1ac87c;
    }
    ctx->pc = 0x1AC874u;
    {
        const bool branch_taken_0x1ac874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC874u;
        // 0x1ac878: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac874) {
            ctx->pc = 0x1AC8ACu;
            goto label_1ac8ac;
        }
    }
    ctx->pc = 0x1AC87Cu;
label_1ac87c:
    // 0x1ac87c: 0x0  nop
    ctx->pc = 0x1ac87cu;
    // NOP
label_1ac880:
    // 0x1ac880: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_1ac884:
    if (ctx->pc == 0x1AC884u) {
        ctx->pc = 0x1AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC880u;
        // 0x1ac884: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC888u;
        goto label_1ac888;
    }
    ctx->pc = 0x1AC880u;
    {
        const bool branch_taken_0x1ac880 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC880u;
        // 0x1ac884: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac880) {
            ctx->pc = 0x1AC8ACu;
            goto label_1ac8ac;
        }
    }
    ctx->pc = 0x1AC888u;
label_1ac888:
    // 0x1ac888: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x1ac888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1ac88c:
    // 0x1ac88c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ac88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ac890:
    // 0x1ac890: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ac894:
    // 0x1ac894: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ac894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1ac898:
    // 0x1ac898: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1ac898u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac89c:
    // 0x1ac89c: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x1ac89cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1ac8a0:
    // 0x1ac8a0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_1ac8a4:
    if (ctx->pc == 0x1AC8A4u) {
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8A8u;
        goto label_1ac8a8;
    }
    ctx->pc = 0x1AC8A0u;
    {
        const bool branch_taken_0x1ac8a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8a0) {
            ctx->pc = 0x1AC888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac888;
        }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1ac8a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1ac8ac:
    // 0x1ac8ac: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ac8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ac8b0:
    // 0x1ac8b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac8b4:
    // 0x1ac8b4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1ac8b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1ac8b8:
    // 0x1ac8b8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ac8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1ac8bc:
    // 0x1ac8bc: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x1ac8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ac8c0:
    // 0x1ac8c0: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x1ac8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1ac8c4:
    // 0x1ac8c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ac8c8:
    // 0x1ac8c8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1ac8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1ac8cc:
    // 0x1ac8cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ac8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac8d0:
    // 0x1ac8d0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1ac8d4:
    if (ctx->pc == 0x1AC8D4u) {
        ctx->pc = 0x1AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8D0u;
        // 0x1ac8d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8D8u;
        goto label_1ac8d8;
    }
    ctx->pc = 0x1AC8D0u;
    {
        const bool branch_taken_0x1ac8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac8d0) {
            ctx->pc = 0x1AC8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC8D0u;
            // 0x1ac8d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC8F8u;
            goto label_1ac8f8;
        }
    }
    ctx->pc = 0x1AC8D8u;
label_1ac8d8:
    // 0x1ac8d8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1ac8dc:
    // 0x1ac8dc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1ac8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1ac8e0:
    // 0x1ac8e0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1ac8e4:
    // 0x1ac8e4: 0x60f809  jalr        $v1
label_1ac8e8:
    if (ctx->pc == 0x1AC8E8u) {
        ctx->pc = 0x1AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8E4u;
        // 0x1ac8e8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8ECu;
        goto label_1ac8ec;
    }
    ctx->pc = 0x1AC8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC8ECu);
        ctx->pc = 0x1AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8E4u;
        // 0x1ac8e8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC8E4u, 0x1AC8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC8ECu;
label_1ac8ec:
    // 0x1ac8ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac8f0:
    // 0x1ac8f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ac8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ac8f4:
    // 0x1ac8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac8f8:
    // 0x1ac8f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ac8fc:
    // 0x1ac8fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac900:
    // 0x1ac900: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ac900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ac904:
    // 0x1ac904: 0x3e00008  jr          $ra
label_1ac908:
    if (ctx->pc == 0x1AC908u) {
        ctx->pc = 0x1AC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC904u;
        // 0x1ac908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC90Cu;
        goto label_1ac90c;
    }
    ctx->pc = 0x1AC904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC904u;
        // 0x1ac908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC90Cu;
label_1ac90c:
    // 0x1ac90c: 0x0  nop
    ctx->pc = 0x1ac90cu;
    // NOP
}
