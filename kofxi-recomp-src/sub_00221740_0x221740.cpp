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

// Function: sub_00221740
// Address: 0x221740 - 0x221870
void sub_00221740_0x221740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221740_0x221740");
#endif

    switch (ctx->pc) {
        case 0x221740u: goto label_221740;
        case 0x221744u: goto label_221744;
        case 0x221748u: goto label_221748;
        case 0x22174cu: goto label_22174c;
        case 0x221750u: goto label_221750;
        case 0x221754u: goto label_221754;
        case 0x221758u: goto label_221758;
        case 0x22175cu: goto label_22175c;
        case 0x221760u: goto label_221760;
        case 0x221764u: goto label_221764;
        case 0x221768u: goto label_221768;
        case 0x22176cu: goto label_22176c;
        case 0x221770u: goto label_221770;
        case 0x221774u: goto label_221774;
        case 0x221778u: goto label_221778;
        case 0x22177cu: goto label_22177c;
        case 0x221780u: goto label_221780;
        case 0x221784u: goto label_221784;
        case 0x221788u: goto label_221788;
        case 0x22178cu: goto label_22178c;
        case 0x221790u: goto label_221790;
        case 0x221794u: goto label_221794;
        case 0x221798u: goto label_221798;
        case 0x22179cu: goto label_22179c;
        case 0x2217a0u: goto label_2217a0;
        case 0x2217a4u: goto label_2217a4;
        case 0x2217a8u: goto label_2217a8;
        case 0x2217acu: goto label_2217ac;
        case 0x2217b0u: goto label_2217b0;
        case 0x2217b4u: goto label_2217b4;
        case 0x2217b8u: goto label_2217b8;
        case 0x2217bcu: goto label_2217bc;
        case 0x2217c0u: goto label_2217c0;
        case 0x2217c4u: goto label_2217c4;
        case 0x2217c8u: goto label_2217c8;
        case 0x2217ccu: goto label_2217cc;
        case 0x2217d0u: goto label_2217d0;
        case 0x2217d4u: goto label_2217d4;
        case 0x2217d8u: goto label_2217d8;
        case 0x2217dcu: goto label_2217dc;
        case 0x2217e0u: goto label_2217e0;
        case 0x2217e4u: goto label_2217e4;
        case 0x2217e8u: goto label_2217e8;
        case 0x2217ecu: goto label_2217ec;
        case 0x2217f0u: goto label_2217f0;
        case 0x2217f4u: goto label_2217f4;
        case 0x2217f8u: goto label_2217f8;
        case 0x2217fcu: goto label_2217fc;
        case 0x221800u: goto label_221800;
        case 0x221804u: goto label_221804;
        case 0x221808u: goto label_221808;
        case 0x22180cu: goto label_22180c;
        case 0x221810u: goto label_221810;
        case 0x221814u: goto label_221814;
        case 0x221818u: goto label_221818;
        case 0x22181cu: goto label_22181c;
        case 0x221820u: goto label_221820;
        case 0x221824u: goto label_221824;
        case 0x221828u: goto label_221828;
        case 0x22182cu: goto label_22182c;
        case 0x221830u: goto label_221830;
        case 0x221834u: goto label_221834;
        case 0x221838u: goto label_221838;
        case 0x22183cu: goto label_22183c;
        case 0x221840u: goto label_221840;
        case 0x221844u: goto label_221844;
        case 0x221848u: goto label_221848;
        case 0x22184cu: goto label_22184c;
        case 0x221850u: goto label_221850;
        case 0x221854u: goto label_221854;
        case 0x221858u: goto label_221858;
        case 0x22185cu: goto label_22185c;
        case 0x221860u: goto label_221860;
        case 0x221864u: goto label_221864;
        case 0x221868u: goto label_221868;
        case 0x22186cu: goto label_22186c;
        default: break;
    }

    ctx->pc = 0x221740u;

label_221740:
    // 0x221740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_221744:
    // 0x221744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_221748:
    // 0x221748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x221748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_22174c:
    // 0x22174c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_221750:
    if (ctx->pc == 0x221750u) {
        ctx->pc = 0x221750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22174Cu;
        // 0x221750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221754u;
        goto label_221754;
    }
    ctx->pc = 0x22174Cu;
    {
        const bool branch_taken_0x22174c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22174Cu;
        // 0x221750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22174c) {
            ctx->pc = 0x221780u;
            goto label_221780;
        }
    }
    ctx->pc = 0x221754u;
label_221754:
    // 0x221754: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221758:
    // 0x221758: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221758u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_22175c:
    // 0x22175c: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x22175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
label_221760:
    // 0x221760: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
label_221764:
    // 0x221764: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x221764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_221768:
    // 0x221768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22176c:
    // 0x22176c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x22176cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
label_221770:
    // 0x221770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221774:
    // 0x221774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_221778:
    // 0x221778: 0x8089794  j           func_225E50
label_22177c:
    if (ctx->pc == 0x22177Cu) {
        ctx->pc = 0x22177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221778u;
        // 0x22177c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221780u;
        goto label_221780;
    }
    ctx->pc = 0x221778u;
    ctx->pc = 0x22177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221778u;
    // 0x22177c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    ctx->pc = 0x221780u;
label_221780:
    // 0x221780: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x221780u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_221784:
    // 0x221784: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x221784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_221788:
    // 0x221788: 0x15cf0009  bne         $t6, $t7, . + 4 + (0x9 << 2)
label_22178c:
    if (ctx->pc == 0x22178Cu) {
        ctx->pc = 0x22178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221788u;
        // 0x22178c: 0x240f0006  addiu       $t7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221790u;
        goto label_221790;
    }
    ctx->pc = 0x221788u;
    {
        const bool branch_taken_0x221788 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x22178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221788u;
        // 0x22178c: 0x240f0006  addiu       $t7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221788) {
            ctx->pc = 0x2217B0u;
            goto label_2217b0;
        }
    }
    ctx->pc = 0x221790u;
label_221790:
    // 0x221790: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221794:
    // 0x221794: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_221798:
    // 0x221798: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x221798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
label_22179c:
    // 0x22179c: 0x25082ab0  addiu       $t0, $t0, 0x2AB0
    ctx->pc = 0x22179cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10928));
label_2217a0:
    // 0x2217a0: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x2217a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2217a4:
    // 0x2217a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2217a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2217a8:
    // 0x2217a8: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_2217ac:
    if (ctx->pc == 0x2217ACu) {
        ctx->pc = 0x2217ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217A8u;
        // 0x2217ac: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217B0u;
        goto label_2217b0;
    }
    ctx->pc = 0x2217A8u;
    {
        const bool branch_taken_0x2217a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217A8u;
        // 0x2217ac: 0x2407d8ee  addiu       $a3, $zero, -0x2712 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217a8) {
            ctx->pc = 0x221770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221770;
        }
    }
    ctx->pc = 0x2217B0u;
label_2217b0:
    // 0x2217b0: 0x15cf0007  bne         $t6, $t7, . + 4 + (0x7 << 2)
label_2217b4:
    if (ctx->pc == 0x2217B4u) {
        ctx->pc = 0x2217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217B0u;
        // 0x2217b4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217B8u;
        goto label_2217b8;
    }
    ctx->pc = 0x2217B0u;
    {
        const bool branch_taken_0x2217b0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217B0u;
        // 0x2217b4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217b0) {
            ctx->pc = 0x2217D0u;
            goto label_2217d0;
        }
    }
    ctx->pc = 0x2217B8u;
label_2217b8:
    // 0x2217b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2217b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2217bc:
    // 0x2217bc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2217bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2217c0:
    // 0x2217c0: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x2217c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
label_2217c4:
    // 0x2217c4: 0x25082ab0  addiu       $t0, $t0, 0x2AB0
    ctx->pc = 0x2217c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10928));
label_2217c8:
    // 0x2217c8: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_2217cc:
    if (ctx->pc == 0x2217CCu) {
        ctx->pc = 0x2217CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217C8u;
        // 0x2217cc: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217D0u;
        goto label_2217d0;
    }
    ctx->pc = 0x2217C8u;
    {
        const bool branch_taken_0x2217c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217C8u;
        // 0x2217cc: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217c8) {
            ctx->pc = 0x2217A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2217a4;
        }
    }
    ctx->pc = 0x2217D0u;
label_2217d0:
    // 0x2217d0: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
label_2217d4:
    if (ctx->pc == 0x2217D4u) {
        ctx->pc = 0x2217D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217D0u;
        // 0x2217d4: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217D8u;
        goto label_2217d8;
    }
    ctx->pc = 0x2217D0u;
    {
        const bool branch_taken_0x2217d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2217D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217D0u;
        // 0x2217d4: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217d0) {
            ctx->pc = 0x2217ECu;
            goto label_2217ec;
        }
    }
    ctx->pc = 0x2217D8u;
label_2217d8:
    // 0x2217d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2217d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2217dc:
    // 0x2217dc: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x2217dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
label_2217e0:
    // 0x2217e0: 0x25082ab0  addiu       $t0, $t0, 0x2AB0
    ctx->pc = 0x2217e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10928));
label_2217e4:
    // 0x2217e4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_2217e8:
    if (ctx->pc == 0x2217E8u) {
        ctx->pc = 0x2217E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217E4u;
        // 0x2217e8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217ECu;
        goto label_2217ec;
    }
    ctx->pc = 0x2217E4u;
    {
        const bool branch_taken_0x2217e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217E4u;
        // 0x2217e8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217e4) {
            ctx->pc = 0x2217A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2217a4;
        }
    }
    ctx->pc = 0x2217ECu;
label_2217ec:
    // 0x2217ec: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
label_2217f0:
    if (ctx->pc == 0x2217F0u) {
        ctx->pc = 0x2217F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217ECu;
        // 0x2217f0: 0x240f0008  addiu       $t7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217F4u;
        goto label_2217f4;
    }
    ctx->pc = 0x2217ECu;
    {
        const bool branch_taken_0x2217ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2217F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217ECu;
        // 0x2217f0: 0x240f0008  addiu       $t7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217ec) {
            ctx->pc = 0x22180Cu;
            goto label_22180c;
        }
    }
    ctx->pc = 0x2217F4u;
label_2217f4:
    // 0x2217f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2217f8:
    // 0x2217f8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2217f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_2217fc:
    // 0x2217fc: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x2217fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
label_221800:
    // 0x221800: 0x25082a60  addiu       $t0, $t0, 0x2A60
    ctx->pc = 0x221800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10848));
label_221804:
    // 0x221804: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_221808:
    if (ctx->pc == 0x221808u) {
        ctx->pc = 0x221808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221804u;
        // 0x221808: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22180Cu;
        goto label_22180c;
    }
    ctx->pc = 0x221804u;
    {
        const bool branch_taken_0x221804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221804u;
        // 0x221808: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221804) {
            ctx->pc = 0x2217A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2217a4;
        }
    }
    ctx->pc = 0x22180Cu;
label_22180c:
    // 0x22180c: 0x15cf0007  bne         $t6, $t7, . + 4 + (0x7 << 2)
label_221810:
    if (ctx->pc == 0x221810u) {
        ctx->pc = 0x221810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22180Cu;
        // 0x221810: 0x240f0005  addiu       $t7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221814u;
        goto label_221814;
    }
    ctx->pc = 0x22180Cu;
    {
        const bool branch_taken_0x22180c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x221810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22180Cu;
        // 0x221810: 0x240f0005  addiu       $t7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22180c) {
            ctx->pc = 0x22182Cu;
            goto label_22182c;
        }
    }
    ctx->pc = 0x221814u;
label_221814:
    // 0x221814: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221818:
    // 0x221818: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221818u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_22181c:
    // 0x22181c: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x22181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
label_221820:
    // 0x221820: 0x25082a60  addiu       $t0, $t0, 0x2A60
    ctx->pc = 0x221820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10848));
label_221824:
    // 0x221824: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_221828:
    if (ctx->pc == 0x221828u) {
        ctx->pc = 0x221828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221824u;
        // 0x221828: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22182Cu;
        goto label_22182c;
    }
    ctx->pc = 0x221824u;
    {
        const bool branch_taken_0x221824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221824u;
        // 0x221828: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221824) {
            ctx->pc = 0x2217A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2217a4;
        }
    }
    ctx->pc = 0x22182Cu;
label_22182c:
    // 0x22182c: 0x55cf0007  bnel        $t6, $t7, . + 4 + (0x7 << 2)
label_221830:
    if (ctx->pc == 0x221830u) {
        ctx->pc = 0x221830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22182Cu;
        // 0x221830: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221834u;
        goto label_221834;
    }
    ctx->pc = 0x22182Cu;
    {
        const bool branch_taken_0x22182c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x22182c) {
            ctx->pc = 0x221830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22182Cu;
            // 0x221830: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22184Cu;
            goto label_22184c;
        }
    }
    ctx->pc = 0x221834u;
label_221834:
    // 0x221834: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_221838:
    // 0x221838: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_22183c:
    // 0x22183c: 0x24842aa0  addiu       $a0, $a0, 0x2AA0
    ctx->pc = 0x22183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10912));
label_221840:
    // 0x221840: 0x25082ad0  addiu       $t0, $t0, 0x2AD0
    ctx->pc = 0x221840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10960));
label_221844:
    // 0x221844: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_221848:
    if (ctx->pc == 0x221848u) {
        ctx->pc = 0x221848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221844u;
        // 0x221848: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22184Cu;
        goto label_22184c;
    }
    ctx->pc = 0x221844u;
    {
        const bool branch_taken_0x221844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221844u;
        // 0x221848: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221844) {
            ctx->pc = 0x2217A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2217a4;
        }
    }
    ctx->pc = 0x22184Cu;
label_22184c:
    // 0x22184c: 0xc08867a  jal         func_2219E8
label_221850:
    if (ctx->pc == 0x221850u) {
        ctx->pc = 0x221850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22184Cu;
        // 0x221850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221854u;
        goto label_221854;
    }
    ctx->pc = 0x22184Cu;
    SET_GPR_U32(ctx, 31, 0x221854u);
    ctx->pc = 0x221850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22184Cu;
    // 0x221850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219E8u, 0x22184Cu, 0x221854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221854u;
label_221854:
    // 0x221854: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x221854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_221858:
    // 0x221858: 0x40f809  jalr        $v0
label_22185c:
    if (ctx->pc == 0x22185Cu) {
        ctx->pc = 0x22185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221858u;
        // 0x22185c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221860u;
        goto label_221860;
    }
    ctx->pc = 0x221858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x221860u);
        ctx->pc = 0x22185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221858u;
        // 0x22185c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221858u, 0x221860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x221860u;
label_221860:
    // 0x221860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_221864:
    // 0x221864: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_221868:
    // 0x221868: 0x3e00008  jr          $ra
label_22186c:
    if (ctx->pc == 0x22186Cu) {
        ctx->pc = 0x22186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221868u;
        // 0x22186c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221870u;
        goto label_fallthrough_0x221868;
    }
    ctx->pc = 0x221868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221868u;
        // 0x22186c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x221868:
    ctx->pc = 0x221870u;
}
