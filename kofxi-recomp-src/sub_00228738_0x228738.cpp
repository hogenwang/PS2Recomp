#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228738
// Address: 0x228738 - 0x228950
void sub_00228738_0x228738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228738_0x228738");
#endif

    switch (ctx->pc) {
        case 0x228738u: goto label_228738;
        case 0x22873cu: goto label_22873c;
        case 0x228740u: goto label_228740;
        case 0x228744u: goto label_228744;
        case 0x228748u: goto label_228748;
        case 0x22874cu: goto label_22874c;
        case 0x228750u: goto label_228750;
        case 0x228754u: goto label_228754;
        case 0x228758u: goto label_228758;
        case 0x22875cu: goto label_22875c;
        case 0x228760u: goto label_228760;
        case 0x228764u: goto label_228764;
        case 0x228768u: goto label_228768;
        case 0x22876cu: goto label_22876c;
        case 0x228770u: goto label_228770;
        case 0x228774u: goto label_228774;
        case 0x228778u: goto label_228778;
        case 0x22877cu: goto label_22877c;
        case 0x228780u: goto label_228780;
        case 0x228784u: goto label_228784;
        case 0x228788u: goto label_228788;
        case 0x22878cu: goto label_22878c;
        case 0x228790u: goto label_228790;
        case 0x228794u: goto label_228794;
        case 0x228798u: goto label_228798;
        case 0x22879cu: goto label_22879c;
        case 0x2287a0u: goto label_2287a0;
        case 0x2287a4u: goto label_2287a4;
        case 0x2287a8u: goto label_2287a8;
        case 0x2287acu: goto label_2287ac;
        case 0x2287b0u: goto label_2287b0;
        case 0x2287b4u: goto label_2287b4;
        case 0x2287b8u: goto label_2287b8;
        case 0x2287bcu: goto label_2287bc;
        case 0x2287c0u: goto label_2287c0;
        case 0x2287c4u: goto label_2287c4;
        case 0x2287c8u: goto label_2287c8;
        case 0x2287ccu: goto label_2287cc;
        case 0x2287d0u: goto label_2287d0;
        case 0x2287d4u: goto label_2287d4;
        case 0x2287d8u: goto label_2287d8;
        case 0x2287dcu: goto label_2287dc;
        case 0x2287e0u: goto label_2287e0;
        case 0x2287e4u: goto label_2287e4;
        case 0x2287e8u: goto label_2287e8;
        case 0x2287ecu: goto label_2287ec;
        case 0x2287f0u: goto label_2287f0;
        case 0x2287f4u: goto label_2287f4;
        case 0x2287f8u: goto label_2287f8;
        case 0x2287fcu: goto label_2287fc;
        case 0x228800u: goto label_228800;
        case 0x228804u: goto label_228804;
        case 0x228808u: goto label_228808;
        case 0x22880cu: goto label_22880c;
        case 0x228810u: goto label_228810;
        case 0x228814u: goto label_228814;
        case 0x228818u: goto label_228818;
        case 0x22881cu: goto label_22881c;
        case 0x228820u: goto label_228820;
        case 0x228824u: goto label_228824;
        case 0x228828u: goto label_228828;
        case 0x22882cu: goto label_22882c;
        case 0x228830u: goto label_228830;
        case 0x228834u: goto label_228834;
        case 0x228838u: goto label_228838;
        case 0x22883cu: goto label_22883c;
        case 0x228840u: goto label_228840;
        case 0x228844u: goto label_228844;
        case 0x228848u: goto label_228848;
        case 0x22884cu: goto label_22884c;
        case 0x228850u: goto label_228850;
        case 0x228854u: goto label_228854;
        case 0x228858u: goto label_228858;
        case 0x22885cu: goto label_22885c;
        case 0x228860u: goto label_228860;
        case 0x228864u: goto label_228864;
        case 0x228868u: goto label_228868;
        case 0x22886cu: goto label_22886c;
        case 0x228870u: goto label_228870;
        case 0x228874u: goto label_228874;
        case 0x228878u: goto label_228878;
        case 0x22887cu: goto label_22887c;
        case 0x228880u: goto label_228880;
        case 0x228884u: goto label_228884;
        case 0x228888u: goto label_228888;
        case 0x22888cu: goto label_22888c;
        case 0x228890u: goto label_228890;
        case 0x228894u: goto label_228894;
        case 0x228898u: goto label_228898;
        case 0x22889cu: goto label_22889c;
        case 0x2288a0u: goto label_2288a0;
        case 0x2288a4u: goto label_2288a4;
        case 0x2288a8u: goto label_2288a8;
        case 0x2288acu: goto label_2288ac;
        case 0x2288b0u: goto label_2288b0;
        case 0x2288b4u: goto label_2288b4;
        case 0x2288b8u: goto label_2288b8;
        case 0x2288bcu: goto label_2288bc;
        case 0x2288c0u: goto label_2288c0;
        case 0x2288c4u: goto label_2288c4;
        case 0x2288c8u: goto label_2288c8;
        case 0x2288ccu: goto label_2288cc;
        case 0x2288d0u: goto label_2288d0;
        case 0x2288d4u: goto label_2288d4;
        case 0x2288d8u: goto label_2288d8;
        case 0x2288dcu: goto label_2288dc;
        case 0x2288e0u: goto label_2288e0;
        case 0x2288e4u: goto label_2288e4;
        case 0x2288e8u: goto label_2288e8;
        case 0x2288ecu: goto label_2288ec;
        case 0x2288f0u: goto label_2288f0;
        case 0x2288f4u: goto label_2288f4;
        case 0x2288f8u: goto label_2288f8;
        case 0x2288fcu: goto label_2288fc;
        case 0x228900u: goto label_228900;
        case 0x228904u: goto label_228904;
        case 0x228908u: goto label_228908;
        case 0x22890cu: goto label_22890c;
        case 0x228910u: goto label_228910;
        case 0x228914u: goto label_228914;
        case 0x228918u: goto label_228918;
        case 0x22891cu: goto label_22891c;
        case 0x228920u: goto label_228920;
        case 0x228924u: goto label_228924;
        case 0x228928u: goto label_228928;
        case 0x22892cu: goto label_22892c;
        case 0x228930u: goto label_228930;
        case 0x228934u: goto label_228934;
        case 0x228938u: goto label_228938;
        case 0x22893cu: goto label_22893c;
        case 0x228940u: goto label_228940;
        case 0x228944u: goto label_228944;
        case 0x228948u: goto label_228948;
        case 0x22894cu: goto label_22894c;
        default: break;
    }

    ctx->pc = 0x228738u;

label_228738:
    // 0x228738: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x228738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22873c:
    // 0x22873c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_228740:
    // 0x228740: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_228744:
    // 0x228744: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x228744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_228748:
    // 0x228748: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22874c:
    // 0x22874c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22874cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228750:
    // 0x228750: 0x8c51f998  lw          $s1, -0x668($v0)
    ctx->pc = 0x228750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965656)));
label_228754:
    // 0x228754: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x228754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_228758:
    // 0x228758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x228758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22875c:
    // 0x22875c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_228760:
    if (ctx->pc == 0x228760u) {
        ctx->pc = 0x228760u;
            // 0x228760: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x228764u;
        goto label_228764;
    }
    ctx->pc = 0x22875Cu;
    {
        const bool branch_taken_0x22875c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22875Cu;
            // 0x228760: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22875c) {
            ctx->pc = 0x2287B4u;
            goto label_2287b4;
        }
    }
    ctx->pc = 0x228764u;
label_228764:
    // 0x228764: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x228764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_228768:
    // 0x228768: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x228768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22876c:
    // 0x22876c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x22876cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_228770:
    // 0x228770: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_228774:
    if (ctx->pc == 0x228774u) {
        ctx->pc = 0x228774u;
            // 0x228774: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x228778u;
        goto label_228778;
    }
    ctx->pc = 0x228770u;
    {
        const bool branch_taken_0x228770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228770) {
            ctx->pc = 0x228774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228770u;
            // 0x228774: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2287ACu;
            goto label_2287ac;
        }
    }
    ctx->pc = 0x228778u;
label_228778:
    // 0x228778: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x228778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_22877c:
    // 0x22877c: 0x0  nop
    ctx->pc = 0x22877cu;
    // NOP
label_228780:
    // 0x228780: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_228784:
    if (ctx->pc == 0x228784u) {
        ctx->pc = 0x228784u;
            // 0x228784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x228788u;
        goto label_228788;
    }
    ctx->pc = 0x228780u;
    {
        const bool branch_taken_0x228780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228780u;
            // 0x228784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228780) {
            ctx->pc = 0x228798u;
            goto label_228798;
        }
    }
    ctx->pc = 0x228788u;
label_228788:
    // 0x228788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x228788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22878c:
    // 0x22878c: 0x40f809  jalr        $v0
label_228790:
    if (ctx->pc == 0x228790u) {
        ctx->pc = 0x228790u;
            // 0x228790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x228794u;
        goto label_228794;
    }
    ctx->pc = 0x22878Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228794u);
        ctx->pc = 0x228790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22878Cu;
            // 0x228790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228794u; }
            if (ctx->pc != 0x228794u) { return; }
        }
        }
    }
    ctx->pc = 0x228794u;
label_228794:
    // 0x228794: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x228794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_228798:
    // 0x228798: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x228798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_22879c:
    // 0x22879c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x22879cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2287a0:
    // 0x2287a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_2287a4:
    if (ctx->pc == 0x2287A4u) {
        ctx->pc = 0x2287A4u;
            // 0x2287a4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x2287A8u;
        goto label_2287a8;
    }
    ctx->pc = 0x2287A0u;
    {
        const bool branch_taken_0x2287a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2287a0) {
            ctx->pc = 0x2287A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2287A0u;
            // 0x2287a4: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228780;
        }
    }
    ctx->pc = 0x2287A8u;
label_2287a8:
    // 0x2287a8: 0x8e31001c  lw          $s1, 0x1C($s1)
    ctx->pc = 0x2287a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2287ac:
    // 0x2287ac: 0x5620ffee  bnel        $s1, $zero, . + 4 + (-0x12 << 2)
label_2287b0:
    if (ctx->pc == 0x2287B0u) {
        ctx->pc = 0x2287B0u;
            // 0x2287b0: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2287B4u;
        goto label_2287b4;
    }
    ctx->pc = 0x2287ACu;
    {
        const bool branch_taken_0x2287ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2287ac) {
            ctx->pc = 0x2287B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2287ACu;
            // 0x2287b0: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228768;
        }
    }
    ctx->pc = 0x2287B4u;
label_2287b4:
    // 0x2287b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2287b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2287b8:
    // 0x2287b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2287b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2287bc:
    // 0x2287bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2287bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2287c0:
    // 0x2287c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2287c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2287c4:
    // 0x2287c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2287c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2287c8:
    // 0x2287c8: 0x3e00008  jr          $ra
label_2287cc:
    if (ctx->pc == 0x2287CCu) {
        ctx->pc = 0x2287CCu;
            // 0x2287cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2287D0u;
        goto label_2287d0;
    }
    ctx->pc = 0x2287C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2287CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2287C8u;
            // 0x2287cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2287D0u;
label_2287d0:
    // 0x2287d0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2287d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_2287d4:
    // 0x2287d4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2287d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2287d8:
    // 0x2287d8: 0x8c82f990  lw          $v0, -0x670($a0)
    ctx->pc = 0x2287d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965648)));
label_2287dc:
    // 0x2287dc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2287dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2287e0:
    // 0x2287e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2287e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2287e4:
    // 0x2287e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2287e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2287e8:
    // 0x2287e8: 0x8c71f998  lw          $s1, -0x668($v1)
    ctx->pc = 0x2287e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965656)));
label_2287ec:
    // 0x2287ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2287ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2287f0:
    // 0x2287f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2287f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2287f4:
    // 0x2287f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2287f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2287f8:
    // 0x2287f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2287f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2287fc:
    // 0x2287fc: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_228800:
    if (ctx->pc == 0x228800u) {
        ctx->pc = 0x228800u;
            // 0x228800: 0xac82f990  sw          $v0, -0x670($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294965648), GPR_U32(ctx, 2));
        ctx->pc = 0x228804u;
        goto label_228804;
    }
    ctx->pc = 0x2287FCu;
    {
        const bool branch_taken_0x2287fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2287FCu;
            // 0x228800: 0xac82f990  sw          $v0, -0x670($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294965648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287fc) {
            ctx->pc = 0x22885Cu;
            goto label_22885c;
        }
    }
    ctx->pc = 0x228804u;
label_228804:
    // 0x228804: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x228804u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_228808:
    // 0x228808: 0x3c120023  lui         $s2, 0x23
    ctx->pc = 0x228808u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)35 << 16));
label_22880c:
    // 0x22880c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x22880cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_228810:
    // 0x228810: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x228810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_228814:
    // 0x228814: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x228814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_228818:
    // 0x228818: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_22881c:
    if (ctx->pc == 0x22881Cu) {
        ctx->pc = 0x22881Cu;
            // 0x22881c: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x228820u;
        goto label_228820;
    }
    ctx->pc = 0x228818u;
    {
        const bool branch_taken_0x228818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228818) {
            ctx->pc = 0x22881Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228818u;
            // 0x22881c: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22884Cu;
            goto label_22884c;
        }
    }
    ctx->pc = 0x228820u;
label_228820:
    // 0x228820: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x228820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_228824:
    // 0x228824: 0x0  nop
    ctx->pc = 0x228824u;
    // NOP
label_228828:
    // 0x228828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22882c:
    if (ctx->pc == 0x22882Cu) {
        ctx->pc = 0x22882Cu;
            // 0x22882c: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x228830u;
        goto label_228830;
    }
    ctx->pc = 0x228828u;
    {
        const bool branch_taken_0x228828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228828u;
            // 0x22882c: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228828) {
            ctx->pc = 0x22883Cu;
            goto label_22883c;
        }
    }
    ctx->pc = 0x228830u;
label_228830:
    // 0x228830: 0x40f809  jalr        $v0
label_228834:
    if (ctx->pc == 0x228834u) {
        ctx->pc = 0x228838u;
        goto label_228838;
    }
    ctx->pc = 0x228830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228838u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x228838u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228838u; }
            if (ctx->pc != 0x228838u) { return; }
        }
        }
    }
    ctx->pc = 0x228838u;
label_228838:
    // 0x228838: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x228838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22883c:
    // 0x22883c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x22883cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_228840:
    // 0x228840: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_228844:
    if (ctx->pc == 0x228844u) {
        ctx->pc = 0x228844u;
            // 0x228844: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x228848u;
        goto label_228848;
    }
    ctx->pc = 0x228840u;
    {
        const bool branch_taken_0x228840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228840) {
            ctx->pc = 0x228844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228840u;
            // 0x228844: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228828;
        }
    }
    ctx->pc = 0x228848u;
label_228848:
    // 0x228848: 0x8e31001c  lw          $s1, 0x1C($s1)
    ctx->pc = 0x228848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22884c:
    // 0x22884c: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
label_228850:
    if (ctx->pc == 0x228850u) {
        ctx->pc = 0x228850u;
            // 0x228850: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x228854u;
        goto label_228854;
    }
    ctx->pc = 0x22884Cu;
    {
        const bool branch_taken_0x22884c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22884c) {
            ctx->pc = 0x228850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22884Cu;
            // 0x228850: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228810;
        }
    }
    ctx->pc = 0x228854u;
label_228854:
    // 0x228854: 0x10000004  b           . + 4 + (0x4 << 2)
label_228858:
    if (ctx->pc == 0x228858u) {
        ctx->pc = 0x228858u;
            // 0x228858: 0x2664f9c0  addiu       $a0, $s3, -0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965696));
        ctx->pc = 0x22885Cu;
        goto label_22885c;
    }
    ctx->pc = 0x228854u;
    {
        const bool branch_taken_0x228854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228854u;
            // 0x228858: 0x2664f9c0  addiu       $a0, $s3, -0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228854) {
            ctx->pc = 0x228868u;
            goto label_228868;
        }
    }
    ctx->pc = 0x22885Cu;
label_22885c:
    // 0x22885c: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x22885cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_228860:
    // 0x228860: 0x3c120023  lui         $s2, 0x23
    ctx->pc = 0x228860u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)35 << 16));
label_228864:
    // 0x228864: 0x2664f9c0  addiu       $a0, $s3, -0x640
    ctx->pc = 0x228864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965696));
label_228868:
    // 0x228868: 0x264687d0  addiu       $a2, $s2, -0x7830
    ctx->pc = 0x228868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936528));
label_22886c:
    // 0x22886c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22886cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_228870:
    // 0x228870: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x228870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_228874:
    // 0x228874: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_228878:
    // 0x228878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22887c:
    // 0x22887c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22887cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_228880:
    // 0x228880: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_228884:
    // 0x228884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228888:
    // 0x228888: 0x808a058  j           func_228160
label_22888c:
    if (ctx->pc == 0x22888Cu) {
        ctx->pc = 0x22888Cu;
            // 0x22888c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x228890u;
        goto label_228890;
    }
    ctx->pc = 0x228888u;
    ctx->pc = 0x22888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228888u;
            // 0x22888c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00228160_0x228160(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x228890u;
label_228890:
    // 0x228890: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x228890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_228894:
    // 0x228894: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x228894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_228898:
    // 0x228898: 0x8c82f994  lw          $v0, -0x66C($a0)
    ctx->pc = 0x228898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965652)));
label_22889c:
    // 0x22889c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x22889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2288a0:
    // 0x2288a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2288a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2288a4:
    // 0x2288a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2288a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2288a8:
    // 0x2288a8: 0x8c71f998  lw          $s1, -0x668($v1)
    ctx->pc = 0x2288a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965656)));
label_2288ac:
    // 0x2288ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2288acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2288b0:
    // 0x2288b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2288b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2288b4:
    // 0x2288b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2288b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2288b8:
    // 0x2288b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2288b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2288bc:
    // 0x2288bc: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2288c0:
    if (ctx->pc == 0x2288C0u) {
        ctx->pc = 0x2288C0u;
            // 0x2288c0: 0xac82f994  sw          $v0, -0x66C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294965652), GPR_U32(ctx, 2));
        ctx->pc = 0x2288C4u;
        goto label_2288c4;
    }
    ctx->pc = 0x2288BCu;
    {
        const bool branch_taken_0x2288bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2288C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2288BCu;
            // 0x2288c0: 0xac82f994  sw          $v0, -0x66C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294965652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288bc) {
            ctx->pc = 0x22891Cu;
            goto label_22891c;
        }
    }
    ctx->pc = 0x2288C4u;
label_2288c4:
    // 0x2288c4: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x2288c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_2288c8:
    // 0x2288c8: 0x3c120023  lui         $s2, 0x23
    ctx->pc = 0x2288c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)35 << 16));
label_2288cc:
    // 0x2288cc: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2288ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2288d0:
    // 0x2288d0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2288d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2288d4:
    // 0x2288d4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2288d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2288d8:
    // 0x2288d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2288dc:
    if (ctx->pc == 0x2288DCu) {
        ctx->pc = 0x2288DCu;
            // 0x2288dc: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2288E0u;
        goto label_2288e0;
    }
    ctx->pc = 0x2288D8u;
    {
        const bool branch_taken_0x2288d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2288d8) {
            ctx->pc = 0x2288DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2288D8u;
            // 0x2288dc: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22890Cu;
            goto label_22890c;
        }
    }
    ctx->pc = 0x2288E0u;
label_2288e0:
    // 0x2288e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2288e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2288e4:
    // 0x2288e4: 0x0  nop
    ctx->pc = 0x2288e4u;
    // NOP
label_2288e8:
    // 0x2288e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2288ec:
    if (ctx->pc == 0x2288ECu) {
        ctx->pc = 0x2288ECu;
            // 0x2288ec: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x2288F0u;
        goto label_2288f0;
    }
    ctx->pc = 0x2288E8u;
    {
        const bool branch_taken_0x2288e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2288ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2288E8u;
            // 0x2288ec: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288e8) {
            ctx->pc = 0x2288FCu;
            goto label_2288fc;
        }
    }
    ctx->pc = 0x2288F0u;
label_2288f0:
    // 0x2288f0: 0x40f809  jalr        $v0
label_2288f4:
    if (ctx->pc == 0x2288F4u) {
        ctx->pc = 0x2288F8u;
        goto label_2288f8;
    }
    ctx->pc = 0x2288F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2288F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2288F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2288F8u; }
            if (ctx->pc != 0x2288F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2288F8u;
label_2288f8:
    // 0x2288f8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2288f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2288fc:
    // 0x2288fc: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2288fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_228900:
    // 0x228900: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_228904:
    if (ctx->pc == 0x228904u) {
        ctx->pc = 0x228904u;
            // 0x228904: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x228908u;
        goto label_228908;
    }
    ctx->pc = 0x228900u;
    {
        const bool branch_taken_0x228900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228900) {
            ctx->pc = 0x228904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228900u;
            // 0x228904: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2288E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2288e8;
        }
    }
    ctx->pc = 0x228908u;
label_228908:
    // 0x228908: 0x8e31001c  lw          $s1, 0x1C($s1)
    ctx->pc = 0x228908u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22890c:
    // 0x22890c: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
label_228910:
    if (ctx->pc == 0x228910u) {
        ctx->pc = 0x228910u;
            // 0x228910: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x228914u;
        goto label_228914;
    }
    ctx->pc = 0x22890Cu;
    {
        const bool branch_taken_0x22890c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22890c) {
            ctx->pc = 0x228910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22890Cu;
            // 0x228910: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2288D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2288d0;
        }
    }
    ctx->pc = 0x228914u;
label_228914:
    // 0x228914: 0x10000004  b           . + 4 + (0x4 << 2)
label_228918:
    if (ctx->pc == 0x228918u) {
        ctx->pc = 0x228918u;
            // 0x228918: 0x2664f9a0  addiu       $a0, $s3, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965664));
        ctx->pc = 0x22891Cu;
        goto label_22891c;
    }
    ctx->pc = 0x228914u;
    {
        const bool branch_taken_0x228914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228914u;
            // 0x228918: 0x2664f9a0  addiu       $a0, $s3, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228914) {
            ctx->pc = 0x228928u;
            goto label_228928;
        }
    }
    ctx->pc = 0x22891Cu;
label_22891c:
    // 0x22891c: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x22891cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_228920:
    // 0x228920: 0x3c120023  lui         $s2, 0x23
    ctx->pc = 0x228920u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)35 << 16));
label_228924:
    // 0x228924: 0x2664f9a0  addiu       $a0, $s3, -0x660
    ctx->pc = 0x228924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965664));
label_228928:
    // 0x228928: 0x26468890  addiu       $a2, $s2, -0x7770
    ctx->pc = 0x228928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936720));
label_22892c:
    // 0x22892c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22892cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_228930:
    // 0x228930: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x228930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_228934:
    // 0x228934: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x228934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_228938:
    // 0x228938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22893c:
    // 0x22893c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22893cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_228940:
    // 0x228940: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x228940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_228944:
    // 0x228944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x228944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_228948:
    // 0x228948: 0x808a058  j           func_228160
label_22894c:
    if (ctx->pc == 0x22894Cu) {
        ctx->pc = 0x22894Cu;
            // 0x22894c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x228950u;
        goto label_fallthrough_0x228948;
    }
    ctx->pc = 0x228948u;
    ctx->pc = 0x22894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228948u;
            // 0x22894c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00228160_0x228160(rdram, ctx, runtime); return;
    }
label_fallthrough_0x228948:
    ctx->pc = 0x228950u;
    ctx->pc = 0x228950u;
}
