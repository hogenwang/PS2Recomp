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

// Function: sub_001BE778
// Address: 0x1be778 - 0x1be8a0
void sub_001BE778_0x1be778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE778_0x1be778");
#endif

    switch (ctx->pc) {
        case 0x1be778u: goto label_1be778;
        case 0x1be77cu: goto label_1be77c;
        case 0x1be780u: goto label_1be780;
        case 0x1be784u: goto label_1be784;
        case 0x1be788u: goto label_1be788;
        case 0x1be78cu: goto label_1be78c;
        case 0x1be790u: goto label_1be790;
        case 0x1be794u: goto label_1be794;
        case 0x1be798u: goto label_1be798;
        case 0x1be79cu: goto label_1be79c;
        case 0x1be7a0u: goto label_1be7a0;
        case 0x1be7a4u: goto label_1be7a4;
        case 0x1be7a8u: goto label_1be7a8;
        case 0x1be7acu: goto label_1be7ac;
        case 0x1be7b0u: goto label_1be7b0;
        case 0x1be7b4u: goto label_1be7b4;
        case 0x1be7b8u: goto label_1be7b8;
        case 0x1be7bcu: goto label_1be7bc;
        case 0x1be7c0u: goto label_1be7c0;
        case 0x1be7c4u: goto label_1be7c4;
        case 0x1be7c8u: goto label_1be7c8;
        case 0x1be7ccu: goto label_1be7cc;
        case 0x1be7d0u: goto label_1be7d0;
        case 0x1be7d4u: goto label_1be7d4;
        case 0x1be7d8u: goto label_1be7d8;
        case 0x1be7dcu: goto label_1be7dc;
        case 0x1be7e0u: goto label_1be7e0;
        case 0x1be7e4u: goto label_1be7e4;
        case 0x1be7e8u: goto label_1be7e8;
        case 0x1be7ecu: goto label_1be7ec;
        case 0x1be7f0u: goto label_1be7f0;
        case 0x1be7f4u: goto label_1be7f4;
        case 0x1be7f8u: goto label_1be7f8;
        case 0x1be7fcu: goto label_1be7fc;
        case 0x1be800u: goto label_1be800;
        case 0x1be804u: goto label_1be804;
        case 0x1be808u: goto label_1be808;
        case 0x1be80cu: goto label_1be80c;
        case 0x1be810u: goto label_1be810;
        case 0x1be814u: goto label_1be814;
        case 0x1be818u: goto label_1be818;
        case 0x1be81cu: goto label_1be81c;
        case 0x1be820u: goto label_1be820;
        case 0x1be824u: goto label_1be824;
        case 0x1be828u: goto label_1be828;
        case 0x1be82cu: goto label_1be82c;
        case 0x1be830u: goto label_1be830;
        case 0x1be834u: goto label_1be834;
        case 0x1be838u: goto label_1be838;
        case 0x1be83cu: goto label_1be83c;
        case 0x1be840u: goto label_1be840;
        case 0x1be844u: goto label_1be844;
        case 0x1be848u: goto label_1be848;
        case 0x1be84cu: goto label_1be84c;
        case 0x1be850u: goto label_1be850;
        case 0x1be854u: goto label_1be854;
        case 0x1be858u: goto label_1be858;
        case 0x1be85cu: goto label_1be85c;
        case 0x1be860u: goto label_1be860;
        case 0x1be864u: goto label_1be864;
        case 0x1be868u: goto label_1be868;
        case 0x1be86cu: goto label_1be86c;
        case 0x1be870u: goto label_1be870;
        case 0x1be874u: goto label_1be874;
        case 0x1be878u: goto label_1be878;
        case 0x1be87cu: goto label_1be87c;
        case 0x1be880u: goto label_1be880;
        case 0x1be884u: goto label_1be884;
        case 0x1be888u: goto label_1be888;
        case 0x1be88cu: goto label_1be88c;
        case 0x1be890u: goto label_1be890;
        case 0x1be894u: goto label_1be894;
        case 0x1be898u: goto label_1be898;
        case 0x1be89cu: goto label_1be89c;
        default: break;
    }

    ctx->pc = 0x1be778u;

label_1be778:
    // 0x1be778: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1be778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1be77c:
    // 0x1be77c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1be77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1be780:
    // 0x1be780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be784:
    // 0x1be784: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x1be784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_1be788:
    // 0x1be788: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1be788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be78c:
    // 0x1be78c: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x1be78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_1be790:
    // 0x1be790: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1be790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1be794:
    // 0x1be794: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1be794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1be798:
    // 0x1be798: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x1be798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1be79c:
    // 0x1be79c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_1be7a0:
    if (ctx->pc == 0x1BE7A0u) {
        ctx->pc = 0x1BE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE79Cu;
        // 0x1be7a0: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7A4u;
        goto label_1be7a4;
    }
    ctx->pc = 0x1BE79Cu;
    {
        const bool branch_taken_0x1be79c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE79Cu;
        // 0x1be7a0: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be79c) {
            ctx->pc = 0x1BE7B0u;
            goto label_1be7b0;
        }
    }
    ctx->pc = 0x1BE7A4u;
label_1be7a4:
    // 0x1be7a4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be7a8:
    // 0x1be7a8: 0x10000032  b           . + 4 + (0x32 << 2)
label_1be7ac:
    if (ctx->pc == 0x1BE7ACu) {
        ctx->pc = 0x1BE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7A8u;
        // 0x1be7ac: 0x24848af8  addiu       $a0, $a0, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7B0u;
        goto label_1be7b0;
    }
    ctx->pc = 0x1BE7A8u;
    {
        const bool branch_taken_0x1be7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7A8u;
        // 0x1be7ac: 0x24848af8  addiu       $a0, $a0, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7a8) {
            ctx->pc = 0x1BE874u;
            goto label_1be874;
        }
    }
    ctx->pc = 0x1BE7B0u;
label_1be7b0:
    // 0x1be7b0: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x1be7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1be7b4:
    // 0x1be7b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1be7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1be7b8:
    // 0x1be7b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1be7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be7bc:
    // 0x1be7bc: 0xc06fa46  jal         func_1BE918
label_1be7c0:
    if (ctx->pc == 0x1BE7C0u) {
        ctx->pc = 0x1BE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7BCu;
        // 0x1be7c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7C4u;
        goto label_1be7c4;
    }
    ctx->pc = 0x1BE7BCu;
    SET_GPR_U32(ctx, 31, 0x1BE7C4u);
    ctx->pc = 0x1BE7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7BCu;
    // 0x1be7c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BE7BCu, 0x1BE7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7C4u;
label_1be7c4:
    // 0x1be7c4: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1be7c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1be7c8:
    // 0x1be7c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1be7cc:
    if (ctx->pc == 0x1BE7CCu) {
        ctx->pc = 0x1BE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7C8u;
        // 0x1be7cc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7D0u;
        goto label_1be7d0;
    }
    ctx->pc = 0x1BE7C8u;
    {
        const bool branch_taken_0x1be7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7C8u;
        // 0x1be7cc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7c8) {
            ctx->pc = 0x1BE7D8u;
            goto label_1be7d8;
        }
    }
    ctx->pc = 0x1BE7D0u;
label_1be7d0:
    // 0x1be7d0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1be7d4:
    if (ctx->pc == 0x1BE7D4u) {
        ctx->pc = 0x1BE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7D0u;
        // 0x1be7d4: 0x24848af8  addiu       $a0, $a0, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7D8u;
        goto label_1be7d8;
    }
    ctx->pc = 0x1BE7D0u;
    {
        const bool branch_taken_0x1be7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7D0u;
        // 0x1be7d4: 0x24848af8  addiu       $a0, $a0, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7d0) {
            ctx->pc = 0x1BE874u;
            goto label_1be874;
        }
    }
    ctx->pc = 0x1BE7D8u;
label_1be7d8:
    // 0x1be7d8: 0xc06fa28  jal         func_1BE8A0
label_1be7dc:
    if (ctx->pc == 0x1BE7DCu) {
        ctx->pc = 0x1BE7E0u;
        goto label_1be7e0;
    }
    ctx->pc = 0x1BE7D8u;
    SET_GPR_U32(ctx, 31, 0x1BE7E0u);
    ctx->pc = 0x1BE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A0u, 0x1BE7D8u, 0x1BE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE7E0u;
label_1be7e0:
    // 0x1be7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be7e4:
    // 0x1be7e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1be7e8:
    if (ctx->pc == 0x1BE7E8u) {
        ctx->pc = 0x1BE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7E4u;
        // 0x1be7e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7ECu;
        goto label_1be7ec;
    }
    ctx->pc = 0x1BE7E4u;
    {
        const bool branch_taken_0x1be7e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7E4u;
        // 0x1be7e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7e4) {
            ctx->pc = 0x1BE7F8u;
            goto label_1be7f8;
        }
    }
    ctx->pc = 0x1BE7ECu;
label_1be7ec:
    // 0x1be7ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be7f0:
    // 0x1be7f0: 0x10000020  b           . + 4 + (0x20 << 2)
label_1be7f4:
    if (ctx->pc == 0x1BE7F4u) {
        ctx->pc = 0x1BE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7F0u;
        // 0x1be7f4: 0x24848b18  addiu       $a0, $a0, -0x74E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE7F8u;
        goto label_1be7f8;
    }
    ctx->pc = 0x1BE7F0u;
    {
        const bool branch_taken_0x1be7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7F0u;
        // 0x1be7f4: 0x24848b18  addiu       $a0, $a0, -0x74E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7f0) {
            ctx->pc = 0x1BE874u;
            goto label_1be874;
        }
    }
    ctx->pc = 0x1BE7F8u;
label_1be7f8:
    // 0x1be7f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1be7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1be7fc:
    // 0x1be7fc: 0xc06f9b4  jal         func_1BE6D0
label_1be800:
    if (ctx->pc == 0x1BE800u) {
        ctx->pc = 0x1BE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7FCu;
        // 0x1be800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE804u;
        goto label_1be804;
    }
    ctx->pc = 0x1BE7FCu;
    SET_GPR_U32(ctx, 31, 0x1BE804u);
    ctx->pc = 0x1BE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE7FCu;
    // 0x1be800: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BE7FCu, 0x1BE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE804u;
label_1be804:
    // 0x1be804: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1be808:
    if (ctx->pc == 0x1BE808u) {
        ctx->pc = 0x1BE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE804u;
        // 0x1be808: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE80Cu;
        goto label_1be80c;
    }
    ctx->pc = 0x1BE804u;
    {
        const bool branch_taken_0x1be804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE804u;
        // 0x1be808: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be804) {
            ctx->pc = 0x1BE820u;
            goto label_1be820;
        }
    }
    ctx->pc = 0x1BE80Cu;
label_1be80c:
    // 0x1be80c: 0xc06fa42  jal         func_1BE908
label_1be810:
    if (ctx->pc == 0x1BE810u) {
        ctx->pc = 0x1BE810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE80Cu;
        // 0x1be810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE814u;
        goto label_1be814;
    }
    ctx->pc = 0x1BE80Cu;
    SET_GPR_U32(ctx, 31, 0x1BE814u);
    ctx->pc = 0x1BE810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE80Cu;
    // 0x1be810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE908u, 0x1BE80Cu, 0x1BE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE814u;
label_1be814:
    // 0x1be814: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be818:
    // 0x1be818: 0x10000016  b           . + 4 + (0x16 << 2)
label_1be81c:
    if (ctx->pc == 0x1BE81Cu) {
        ctx->pc = 0x1BE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE818u;
        // 0x1be81c: 0x24848b60  addiu       $a0, $a0, -0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE820u;
        goto label_1be820;
    }
    ctx->pc = 0x1BE818u;
    {
        const bool branch_taken_0x1be818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE818u;
        // 0x1be81c: 0x24848b60  addiu       $a0, $a0, -0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be818) {
            ctx->pc = 0x1BE874u;
            goto label_1be874;
        }
    }
    ctx->pc = 0x1BE820u;
label_1be820:
    // 0x1be820: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1be820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1be824:
    // 0x1be824: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1be828:
    if (ctx->pc == 0x1BE828u) {
        ctx->pc = 0x1BE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE824u;
        // 0x1be828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE82Cu;
        goto label_1be82c;
    }
    ctx->pc = 0x1BE824u;
    {
        const bool branch_taken_0x1be824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE824u;
        // 0x1be828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be824) {
            ctx->pc = 0x1BE840u;
            goto label_1be840;
        }
    }
    ctx->pc = 0x1BE82Cu;
label_1be82c:
    // 0x1be82c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be830:
    // 0x1be830: 0x40f809  jalr        $v0
label_1be834:
    if (ctx->pc == 0x1BE834u) {
        ctx->pc = 0x1BE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE830u;
        // 0x1be834: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE838u;
        goto label_1be838;
    }
    ctx->pc = 0x1BE830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE838u);
        ctx->pc = 0x1BE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE830u;
        // 0x1be834: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE830u, 0x1BE838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE838u;
label_1be838:
    // 0x1be838: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be83c:
    if (ctx->pc == 0x1BE83Cu) {
        ctx->pc = 0x1BE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE838u;
        // 0x1be83c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE840u;
        goto label_1be840;
    }
    ctx->pc = 0x1BE838u;
    {
        const bool branch_taken_0x1be838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE838u;
        // 0x1be83c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be838) {
            ctx->pc = 0x1BE858u;
            goto label_1be858;
        }
    }
    ctx->pc = 0x1BE840u;
label_1be840:
    // 0x1be840: 0xc06fa42  jal         func_1BE908
label_1be844:
    if (ctx->pc == 0x1BE844u) {
        ctx->pc = 0x1BE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE840u;
        // 0x1be844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE848u;
        goto label_1be848;
    }
    ctx->pc = 0x1BE840u;
    SET_GPR_U32(ctx, 31, 0x1BE848u);
    ctx->pc = 0x1BE844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE840u;
    // 0x1be844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE908u, 0x1BE840u, 0x1BE848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE848u;
label_1be848:
    // 0x1be848: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be84c:
    // 0x1be84c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1be850:
    if (ctx->pc == 0x1BE850u) {
        ctx->pc = 0x1BE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE84Cu;
        // 0x1be850: 0x24848b80  addiu       $a0, $a0, -0x7480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE854u;
        goto label_1be854;
    }
    ctx->pc = 0x1BE84Cu;
    {
        const bool branch_taken_0x1be84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE84Cu;
        // 0x1be850: 0x24848b80  addiu       $a0, $a0, -0x7480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be84c) {
            ctx->pc = 0x1BE874u;
            goto label_1be874;
        }
    }
    ctx->pc = 0x1BE854u;
label_1be854:
    // 0x1be854: 0x0  nop
    ctx->pc = 0x1be854u;
    // NOP
label_1be858:
    // 0x1be858: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1be858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be85c:
    // 0x1be85c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1be860:
    if (ctx->pc == 0x1BE860u) {
        ctx->pc = 0x1BE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE85Cu;
        // 0x1be860: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE864u;
        goto label_1be864;
    }
    ctx->pc = 0x1BE85Cu;
    {
        const bool branch_taken_0x1be85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be85c) {
            ctx->pc = 0x1BE860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE85Cu;
            // 0x1be860: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE880u;
            goto label_1be880;
        }
    }
    ctx->pc = 0x1BE864u;
label_1be864:
    // 0x1be864: 0xc06fa42  jal         func_1BE908
label_1be868:
    if (ctx->pc == 0x1BE868u) {
        ctx->pc = 0x1BE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE864u;
        // 0x1be868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE86Cu;
        goto label_1be86c;
    }
    ctx->pc = 0x1BE864u;
    SET_GPR_U32(ctx, 31, 0x1BE86Cu);
    ctx->pc = 0x1BE868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE864u;
    // 0x1be868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE908u, 0x1BE864u, 0x1BE86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE86Cu;
label_1be86c:
    // 0x1be86c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1be86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1be870:
    // 0x1be870: 0x24848b98  addiu       $a0, $a0, -0x7468
    ctx->pc = 0x1be870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937496));
label_1be874:
    // 0x1be874: 0xc06f838  jal         func_1BE0E0
label_1be878:
    if (ctx->pc == 0x1BE878u) {
        ctx->pc = 0x1BE87Cu;
        goto label_1be87c;
    }
    ctx->pc = 0x1BE874u;
    SET_GPR_U32(ctx, 31, 0x1BE87Cu);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BE874u, 0x1BE87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE87Cu;
label_1be87c:
    // 0x1be87c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be880:
    // 0x1be880: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1be880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1be884:
    // 0x1be884: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1be884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1be888:
    // 0x1be888: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x1be888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1be88c:
    // 0x1be88c: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x1be88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1be890:
    // 0x1be890: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x1be890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1be894:
    // 0x1be894: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x1be894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_1be898:
    // 0x1be898: 0x3e00008  jr          $ra
label_1be89c:
    if (ctx->pc == 0x1BE89Cu) {
        ctx->pc = 0x1BE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE898u;
        // 0x1be89c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE8A0u;
        goto label_fallthrough_0x1be898;
    }
    ctx->pc = 0x1BE898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE898u;
        // 0x1be89c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1be898:
    ctx->pc = 0x1BE8A0u;
}
