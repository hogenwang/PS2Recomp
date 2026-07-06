#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB780
// Address: 0x1cb780 - 0x1cb8b0
void sub_001CB780_0x1cb780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB780_0x1cb780");
#endif

    switch (ctx->pc) {
        case 0x1cb780u: goto label_1cb780;
        case 0x1cb784u: goto label_1cb784;
        case 0x1cb788u: goto label_1cb788;
        case 0x1cb78cu: goto label_1cb78c;
        case 0x1cb790u: goto label_1cb790;
        case 0x1cb794u: goto label_1cb794;
        case 0x1cb798u: goto label_1cb798;
        case 0x1cb79cu: goto label_1cb79c;
        case 0x1cb7a0u: goto label_1cb7a0;
        case 0x1cb7a4u: goto label_1cb7a4;
        case 0x1cb7a8u: goto label_1cb7a8;
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b0u: goto label_1cb7b0;
        case 0x1cb7b4u: goto label_1cb7b4;
        case 0x1cb7b8u: goto label_1cb7b8;
        case 0x1cb7bcu: goto label_1cb7bc;
        case 0x1cb7c0u: goto label_1cb7c0;
        case 0x1cb7c4u: goto label_1cb7c4;
        case 0x1cb7c8u: goto label_1cb7c8;
        case 0x1cb7ccu: goto label_1cb7cc;
        case 0x1cb7d0u: goto label_1cb7d0;
        case 0x1cb7d4u: goto label_1cb7d4;
        case 0x1cb7d8u: goto label_1cb7d8;
        case 0x1cb7dcu: goto label_1cb7dc;
        case 0x1cb7e0u: goto label_1cb7e0;
        case 0x1cb7e4u: goto label_1cb7e4;
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb7ecu: goto label_1cb7ec;
        case 0x1cb7f0u: goto label_1cb7f0;
        case 0x1cb7f4u: goto label_1cb7f4;
        case 0x1cb7f8u: goto label_1cb7f8;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb800u: goto label_1cb800;
        case 0x1cb804u: goto label_1cb804;
        case 0x1cb808u: goto label_1cb808;
        case 0x1cb80cu: goto label_1cb80c;
        case 0x1cb810u: goto label_1cb810;
        case 0x1cb814u: goto label_1cb814;
        case 0x1cb818u: goto label_1cb818;
        case 0x1cb81cu: goto label_1cb81c;
        case 0x1cb820u: goto label_1cb820;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb828u: goto label_1cb828;
        case 0x1cb82cu: goto label_1cb82c;
        case 0x1cb830u: goto label_1cb830;
        case 0x1cb834u: goto label_1cb834;
        case 0x1cb838u: goto label_1cb838;
        case 0x1cb83cu: goto label_1cb83c;
        case 0x1cb840u: goto label_1cb840;
        case 0x1cb844u: goto label_1cb844;
        case 0x1cb848u: goto label_1cb848;
        case 0x1cb84cu: goto label_1cb84c;
        case 0x1cb850u: goto label_1cb850;
        case 0x1cb854u: goto label_1cb854;
        case 0x1cb858u: goto label_1cb858;
        case 0x1cb85cu: goto label_1cb85c;
        case 0x1cb860u: goto label_1cb860;
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb868u: goto label_1cb868;
        case 0x1cb86cu: goto label_1cb86c;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb874u: goto label_1cb874;
        case 0x1cb878u: goto label_1cb878;
        case 0x1cb87cu: goto label_1cb87c;
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb884u: goto label_1cb884;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb88cu: goto label_1cb88c;
        case 0x1cb890u: goto label_1cb890;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb89cu: goto label_1cb89c;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8a8u: goto label_1cb8a8;
        case 0x1cb8acu: goto label_1cb8ac;
        default: break;
    }

    ctx->pc = 0x1cb780u;

label_1cb780:
    // 0x1cb780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb784:
    // 0x1cb784: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1cb788:
    if (ctx->pc == 0x1CB788u) {
        ctx->pc = 0x1CB788u;
            // 0x1cb788: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CB78Cu;
        goto label_1cb78c;
    }
    ctx->pc = 0x1CB784u;
    {
        const bool branch_taken_0x1cb784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB784u;
            // 0x1cb788: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb784) {
            ctx->pc = 0x1CB7A8u;
            goto label_1cb7a8;
        }
    }
    ctx->pc = 0x1CB78Cu;
label_1cb78c:
    // 0x1cb78c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb790:
    // 0x1cb790: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb794:
    // 0x1cb794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb798:
    // 0x1cb798: 0x2484ba68  addiu       $a0, $a0, -0x4598
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949480));
label_1cb79c:
    // 0x1cb79c: 0x24a5b9c8  addiu       $a1, $a1, -0x4638
    ctx->pc = 0x1cb79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
label_1cb7a0:
    // 0x1cb7a0: 0x8072c9a  j           func_1CB268
label_1cb7a4:
    if (ctx->pc == 0x1CB7A4u) {
        ctx->pc = 0x1CB7A4u;
            // 0x1cb7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB7A8u;
        goto label_1cb7a8;
    }
    ctx->pc = 0x1CB7A0u;
    ctx->pc = 0x1CB7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7A0u;
            // 0x1cb7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    if (runtime->hasFunction(0x1CB268u)) {
        auto targetFn = runtime->lookupFunction(0x1CB268u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB7A8u;
label_1cb7a8:
    // 0x1cb7a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cb7ac:
    // 0x1cb7ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1cb7b0:
    if (ctx->pc == 0x1CB7B0u) {
        ctx->pc = 0x1CB7B0u;
            // 0x1cb7b0: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = 0x1CB7B4u;
        goto label_1cb7b4;
    }
    ctx->pc = 0x1CB7ACu;
    {
        const bool branch_taken_0x1cb7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7ac) {
            ctx->pc = 0x1CB7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7ACu;
            // 0x1cb7b0: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB7D0u;
            goto label_1cb7d0;
        }
    }
    ctx->pc = 0x1CB7B4u;
label_1cb7b4:
    // 0x1cb7b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cb7b8:
    // 0x1cb7b8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cb7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cb7bc:
    // 0x1cb7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb7c0:
    // 0x1cb7c0: 0x2484ba78  addiu       $a0, $a0, -0x4588
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949496));
label_1cb7c4:
    // 0x1cb7c4: 0x24a5ba48  addiu       $a1, $a1, -0x45B8
    ctx->pc = 0x1cb7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
label_1cb7c8:
    // 0x1cb7c8: 0x8072c9a  j           func_1CB268
label_1cb7cc:
    if (ctx->pc == 0x1CB7CCu) {
        ctx->pc = 0x1CB7CCu;
            // 0x1cb7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB7D0u;
        goto label_1cb7d0;
    }
    ctx->pc = 0x1CB7C8u;
    ctx->pc = 0x1CB7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7C8u;
            // 0x1cb7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    if (runtime->hasFunction(0x1CB268u)) {
        auto targetFn = runtime->lookupFunction(0x1CB268u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB7D0u;
label_1cb7d0:
    // 0x1cb7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb7d4:
    // 0x1cb7d4: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1cb7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_1cb7d8:
    // 0x1cb7d8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1cb7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1cb7dc:
    // 0x1cb7dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cb7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1cb7e0:
    // 0x1cb7e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1cb7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1cb7e4:
    // 0x1cb7e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cb7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1cb7e8:
    // 0x1cb7e8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1cb7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_1cb7ec:
    // 0x1cb7ec: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1cb7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_1cb7f0:
    // 0x1cb7f0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1cb7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_1cb7f4:
    // 0x1cb7f4: 0x3e00008  jr          $ra
label_1cb7f8:
    if (ctx->pc == 0x1CB7F8u) {
        ctx->pc = 0x1CB7F8u;
            // 0x1cb7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB7FCu;
        goto label_1cb7fc;
    }
    ctx->pc = 0x1CB7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB7F4u;
            // 0x1cb7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB7FCu;
label_1cb7fc:
    // 0x1cb7fc: 0x0  nop
    ctx->pc = 0x1cb7fcu;
    // NOP
label_1cb800:
    // 0x1cb800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cb804:
    // 0x1cb804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb808:
    // 0x1cb808: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_1cb80c:
    if (ctx->pc == 0x1CB80Cu) {
        ctx->pc = 0x1CB80Cu;
            // 0x1cb80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CB810u;
        goto label_1cb810;
    }
    ctx->pc = 0x1CB808u;
    {
        const bool branch_taken_0x1cb808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB808u;
            // 0x1cb80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb808) {
            ctx->pc = 0x1CB818u;
            goto label_1cb818;
        }
    }
    ctx->pc = 0x1CB810u;
label_1cb810:
    // 0x1cb810: 0x1000000b  b           . + 4 + (0xB << 2)
label_1cb814:
    if (ctx->pc == 0x1CB814u) {
        ctx->pc = 0x1CB814u;
            // 0x1cb814: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x1CB818u;
        goto label_1cb818;
    }
    ctx->pc = 0x1CB810u;
    {
        const bool branch_taken_0x1cb810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB810u;
            // 0x1cb814: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb810) {
            ctx->pc = 0x1CB840u;
            goto label_1cb840;
        }
    }
    ctx->pc = 0x1CB818u;
label_1cb818:
    // 0x1cb818: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_1cb81c:
    if (ctx->pc == 0x1CB81Cu) {
        ctx->pc = 0x1CB81Cu;
            // 0x1cb81c: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x1CB820u;
        goto label_1cb820;
    }
    ctx->pc = 0x1CB818u;
    {
        const bool branch_taken_0x1cb818 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb818) {
            ctx->pc = 0x1CB81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB818u;
            // 0x1cb81c: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB828u;
            goto label_1cb828;
        }
    }
    ctx->pc = 0x1CB820u;
label_1cb820:
    // 0x1cb820: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cb824:
    if (ctx->pc == 0x1CB824u) {
        ctx->pc = 0x1CB824u;
            // 0x1cb824: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x1CB828u;
        goto label_1cb828;
    }
    ctx->pc = 0x1CB820u;
    {
        const bool branch_taken_0x1cb820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB820u;
            // 0x1cb824: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb820) {
            ctx->pc = 0x1CB840u;
            goto label_1cb840;
        }
    }
    ctx->pc = 0x1CB828u;
label_1cb828:
    // 0x1cb828: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1cb82c:
    if (ctx->pc == 0x1CB82Cu) {
        ctx->pc = 0x1CB82Cu;
            // 0x1cb82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB830u;
        goto label_1cb830;
    }
    ctx->pc = 0x1CB828u;
    {
        const bool branch_taken_0x1cb828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb828) {
            ctx->pc = 0x1CB82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB828u;
            // 0x1cb82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB840u;
            goto label_1cb840;
        }
    }
    ctx->pc = 0x1CB830u;
label_1cb830:
    // 0x1cb830: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1cb834:
    // 0x1cb834: 0x40f809  jalr        $v0
label_1cb838:
    if (ctx->pc == 0x1CB838u) {
        ctx->pc = 0x1CB838u;
            // 0x1cb838: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1CB83Cu;
        goto label_1cb83c;
    }
    ctx->pc = 0x1CB834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB83Cu);
        ctx->pc = 0x1CB838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB834u;
            // 0x1cb838: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB83Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB83Cu; }
            if (ctx->pc != 0x1CB83Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CB83Cu;
label_1cb83c:
    // 0x1cb83c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb840:
    // 0x1cb840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb844:
    // 0x1cb844: 0x3e00008  jr          $ra
label_1cb848:
    if (ctx->pc == 0x1CB848u) {
        ctx->pc = 0x1CB848u;
            // 0x1cb848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CB84Cu;
        goto label_1cb84c;
    }
    ctx->pc = 0x1CB844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB844u;
            // 0x1cb848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB84Cu;
label_1cb84c:
    // 0x1cb84c: 0x0  nop
    ctx->pc = 0x1cb84cu;
    // NOP
label_1cb850:
    // 0x1cb850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cb854:
    // 0x1cb854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cb858:
    // 0x1cb858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb85c:
    // 0x1cb85c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cb860:
    // 0x1cb860: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb864:
    // 0x1cb864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cb868:
    // 0x1cb868: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cb868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cb86c:
    // 0x1cb86c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cb870:
    // 0x1cb870: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cb874:
    // 0x1cb874: 0xc0729fa  jal         func_1CA7E8
label_1cb878:
    if (ctx->pc == 0x1CB878u) {
        ctx->pc = 0x1CB878u;
            // 0x1cb878: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB87Cu;
        goto label_1cb87c;
    }
    ctx->pc = 0x1CB874u;
    SET_GPR_U32(ctx, 31, 0x1CB87Cu);
    ctx->pc = 0x1CB878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB874u;
            // 0x1cb878: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB87Cu; }
        if (ctx->pc != 0x1CB87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB87Cu; }
        if (ctx->pc != 0x1CB87Cu) { return; }
    }
    ctx->pc = 0x1CB87Cu;
label_1cb87c:
    // 0x1cb87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb880:
    // 0x1cb880: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cb884:
    // 0x1cb884: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cb884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb888:
    // 0x1cb888: 0xc072e2c  jal         func_1CB8B0
label_1cb88c:
    if (ctx->pc == 0x1CB88Cu) {
        ctx->pc = 0x1CB88Cu;
            // 0x1cb88c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB890u;
        goto label_1cb890;
    }
    ctx->pc = 0x1CB888u;
    SET_GPR_U32(ctx, 31, 0x1CB890u);
    ctx->pc = 0x1CB88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB888u;
            // 0x1cb88c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB8B0u;
    if (runtime->hasFunction(0x1CB8B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB890u; }
        if (ctx->pc != 0x1CB890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB8B0_0x1cb8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB890u; }
        if (ctx->pc != 0x1CB890u) { return; }
    }
    ctx->pc = 0x1CB890u;
label_1cb890:
    // 0x1cb890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb894:
    // 0x1cb894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cb898:
    // 0x1cb898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb89c:
    // 0x1cb89c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb89cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cb8a0:
    // 0x1cb8a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb8a4:
    // 0x1cb8a4: 0x8072a00  j           func_1CA800
label_1cb8a8:
    if (ctx->pc == 0x1CB8A8u) {
        ctx->pc = 0x1CB8A8u;
            // 0x1cb8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1CB8ACu;
        goto label_1cb8ac;
    }
    ctx->pc = 0x1CB8A4u;
    ctx->pc = 0x1CB8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB8A4u;
            // 0x1cb8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CB8ACu;
label_1cb8ac:
    // 0x1cb8ac: 0x0  nop
    ctx->pc = 0x1cb8acu;
    // NOP
    ctx->pc = 0x1cb8b0u;
}
