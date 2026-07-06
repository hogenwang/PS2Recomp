#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB430
// Address: 0x2ab430 - 0x2ab6a8
void sub_002AB430_0x2ab430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB430_0x2ab430");
#endif

    switch (ctx->pc) {
        case 0x2ab430u: goto label_2ab430;
        case 0x2ab434u: goto label_2ab434;
        case 0x2ab438u: goto label_2ab438;
        case 0x2ab43cu: goto label_2ab43c;
        case 0x2ab440u: goto label_2ab440;
        case 0x2ab444u: goto label_2ab444;
        case 0x2ab448u: goto label_2ab448;
        case 0x2ab44cu: goto label_2ab44c;
        case 0x2ab450u: goto label_2ab450;
        case 0x2ab454u: goto label_2ab454;
        case 0x2ab458u: goto label_2ab458;
        case 0x2ab45cu: goto label_2ab45c;
        case 0x2ab460u: goto label_2ab460;
        case 0x2ab464u: goto label_2ab464;
        case 0x2ab468u: goto label_2ab468;
        case 0x2ab46cu: goto label_2ab46c;
        case 0x2ab470u: goto label_2ab470;
        case 0x2ab474u: goto label_2ab474;
        case 0x2ab478u: goto label_2ab478;
        case 0x2ab47cu: goto label_2ab47c;
        case 0x2ab480u: goto label_2ab480;
        case 0x2ab484u: goto label_2ab484;
        case 0x2ab488u: goto label_2ab488;
        case 0x2ab48cu: goto label_2ab48c;
        case 0x2ab490u: goto label_2ab490;
        case 0x2ab494u: goto label_2ab494;
        case 0x2ab498u: goto label_2ab498;
        case 0x2ab49cu: goto label_2ab49c;
        case 0x2ab4a0u: goto label_2ab4a0;
        case 0x2ab4a4u: goto label_2ab4a4;
        case 0x2ab4a8u: goto label_2ab4a8;
        case 0x2ab4acu: goto label_2ab4ac;
        case 0x2ab4b0u: goto label_2ab4b0;
        case 0x2ab4b4u: goto label_2ab4b4;
        case 0x2ab4b8u: goto label_2ab4b8;
        case 0x2ab4bcu: goto label_2ab4bc;
        case 0x2ab4c0u: goto label_2ab4c0;
        case 0x2ab4c4u: goto label_2ab4c4;
        case 0x2ab4c8u: goto label_2ab4c8;
        case 0x2ab4ccu: goto label_2ab4cc;
        case 0x2ab4d0u: goto label_2ab4d0;
        case 0x2ab4d4u: goto label_2ab4d4;
        case 0x2ab4d8u: goto label_2ab4d8;
        case 0x2ab4dcu: goto label_2ab4dc;
        case 0x2ab4e0u: goto label_2ab4e0;
        case 0x2ab4e4u: goto label_2ab4e4;
        case 0x2ab4e8u: goto label_2ab4e8;
        case 0x2ab4ecu: goto label_2ab4ec;
        case 0x2ab4f0u: goto label_2ab4f0;
        case 0x2ab4f4u: goto label_2ab4f4;
        case 0x2ab4f8u: goto label_2ab4f8;
        case 0x2ab4fcu: goto label_2ab4fc;
        case 0x2ab500u: goto label_2ab500;
        case 0x2ab504u: goto label_2ab504;
        case 0x2ab508u: goto label_2ab508;
        case 0x2ab50cu: goto label_2ab50c;
        case 0x2ab510u: goto label_2ab510;
        case 0x2ab514u: goto label_2ab514;
        case 0x2ab518u: goto label_2ab518;
        case 0x2ab51cu: goto label_2ab51c;
        case 0x2ab520u: goto label_2ab520;
        case 0x2ab524u: goto label_2ab524;
        case 0x2ab528u: goto label_2ab528;
        case 0x2ab52cu: goto label_2ab52c;
        case 0x2ab530u: goto label_2ab530;
        case 0x2ab534u: goto label_2ab534;
        case 0x2ab538u: goto label_2ab538;
        case 0x2ab53cu: goto label_2ab53c;
        case 0x2ab540u: goto label_2ab540;
        case 0x2ab544u: goto label_2ab544;
        case 0x2ab548u: goto label_2ab548;
        case 0x2ab54cu: goto label_2ab54c;
        case 0x2ab550u: goto label_2ab550;
        case 0x2ab554u: goto label_2ab554;
        case 0x2ab558u: goto label_2ab558;
        case 0x2ab55cu: goto label_2ab55c;
        case 0x2ab560u: goto label_2ab560;
        case 0x2ab564u: goto label_2ab564;
        case 0x2ab568u: goto label_2ab568;
        case 0x2ab56cu: goto label_2ab56c;
        case 0x2ab570u: goto label_2ab570;
        case 0x2ab574u: goto label_2ab574;
        case 0x2ab578u: goto label_2ab578;
        case 0x2ab57cu: goto label_2ab57c;
        case 0x2ab580u: goto label_2ab580;
        case 0x2ab584u: goto label_2ab584;
        case 0x2ab588u: goto label_2ab588;
        case 0x2ab58cu: goto label_2ab58c;
        case 0x2ab590u: goto label_2ab590;
        case 0x2ab594u: goto label_2ab594;
        case 0x2ab598u: goto label_2ab598;
        case 0x2ab59cu: goto label_2ab59c;
        case 0x2ab5a0u: goto label_2ab5a0;
        case 0x2ab5a4u: goto label_2ab5a4;
        case 0x2ab5a8u: goto label_2ab5a8;
        case 0x2ab5acu: goto label_2ab5ac;
        case 0x2ab5b0u: goto label_2ab5b0;
        case 0x2ab5b4u: goto label_2ab5b4;
        case 0x2ab5b8u: goto label_2ab5b8;
        case 0x2ab5bcu: goto label_2ab5bc;
        case 0x2ab5c0u: goto label_2ab5c0;
        case 0x2ab5c4u: goto label_2ab5c4;
        case 0x2ab5c8u: goto label_2ab5c8;
        case 0x2ab5ccu: goto label_2ab5cc;
        case 0x2ab5d0u: goto label_2ab5d0;
        case 0x2ab5d4u: goto label_2ab5d4;
        case 0x2ab5d8u: goto label_2ab5d8;
        case 0x2ab5dcu: goto label_2ab5dc;
        case 0x2ab5e0u: goto label_2ab5e0;
        case 0x2ab5e4u: goto label_2ab5e4;
        case 0x2ab5e8u: goto label_2ab5e8;
        case 0x2ab5ecu: goto label_2ab5ec;
        case 0x2ab5f0u: goto label_2ab5f0;
        case 0x2ab5f4u: goto label_2ab5f4;
        case 0x2ab5f8u: goto label_2ab5f8;
        case 0x2ab5fcu: goto label_2ab5fc;
        case 0x2ab600u: goto label_2ab600;
        case 0x2ab604u: goto label_2ab604;
        case 0x2ab608u: goto label_2ab608;
        case 0x2ab60cu: goto label_2ab60c;
        case 0x2ab610u: goto label_2ab610;
        case 0x2ab614u: goto label_2ab614;
        case 0x2ab618u: goto label_2ab618;
        case 0x2ab61cu: goto label_2ab61c;
        case 0x2ab620u: goto label_2ab620;
        case 0x2ab624u: goto label_2ab624;
        case 0x2ab628u: goto label_2ab628;
        case 0x2ab62cu: goto label_2ab62c;
        case 0x2ab630u: goto label_2ab630;
        case 0x2ab634u: goto label_2ab634;
        case 0x2ab638u: goto label_2ab638;
        case 0x2ab63cu: goto label_2ab63c;
        case 0x2ab640u: goto label_2ab640;
        case 0x2ab644u: goto label_2ab644;
        case 0x2ab648u: goto label_2ab648;
        case 0x2ab64cu: goto label_2ab64c;
        case 0x2ab650u: goto label_2ab650;
        case 0x2ab654u: goto label_2ab654;
        case 0x2ab658u: goto label_2ab658;
        case 0x2ab65cu: goto label_2ab65c;
        case 0x2ab660u: goto label_2ab660;
        case 0x2ab664u: goto label_2ab664;
        case 0x2ab668u: goto label_2ab668;
        case 0x2ab66cu: goto label_2ab66c;
        case 0x2ab670u: goto label_2ab670;
        case 0x2ab674u: goto label_2ab674;
        case 0x2ab678u: goto label_2ab678;
        case 0x2ab67cu: goto label_2ab67c;
        case 0x2ab680u: goto label_2ab680;
        case 0x2ab684u: goto label_2ab684;
        case 0x2ab688u: goto label_2ab688;
        case 0x2ab68cu: goto label_2ab68c;
        case 0x2ab690u: goto label_2ab690;
        case 0x2ab694u: goto label_2ab694;
        case 0x2ab698u: goto label_2ab698;
        case 0x2ab69cu: goto label_2ab69c;
        case 0x2ab6a0u: goto label_2ab6a0;
        case 0x2ab6a4u: goto label_2ab6a4;
        default: break;
    }

    ctx->pc = 0x2ab430u;

label_2ab430:
    // 0x2ab430: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ab430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2ab434:
    // 0x2ab434: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ab434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2ab438:
    // 0x2ab438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ab438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ab43c:
    // 0x2ab43c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2ab43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2ab440:
    // 0x2ab440: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ab440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2ab444:
    // 0x2ab444: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ab444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ab448:
    // 0x2ab448: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2ab448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2ab44c:
    // 0x2ab44c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ab44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2ab450:
    // 0x2ab450: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ab450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2ab454:
    // 0x2ab454: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ab454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2ab458:
    // 0x2ab458: 0xc0a8d8a  jal         func_2A3628
label_2ab45c:
    if (ctx->pc == 0x2AB45Cu) {
        ctx->pc = 0x2AB45Cu;
            // 0x2ab45c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->pc = 0x2AB460u;
        goto label_2ab460;
    }
    ctx->pc = 0x2AB458u;
    SET_GPR_U32(ctx, 31, 0x2AB460u);
    ctx->pc = 0x2AB45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB458u;
            // 0x2ab45c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (runtime->hasFunction(0x2A3628u)) {
        auto targetFn = runtime->lookupFunction(0x2A3628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB460u; }
        if (ctx->pc != 0x2AB460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3628_0x2a3628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB460u; }
        if (ctx->pc != 0x2AB460u) { return; }
    }
    ctx->pc = 0x2AB460u;
label_2ab460:
    // 0x2ab460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab464:
    // 0x2ab464: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2ab464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2ab468:
    // 0x2ab468: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2ab468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2ab46c:
    // 0x2ab46c: 0x24031030  addiu       $v1, $zero, 0x1030
    ctx->pc = 0x2ab46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_2ab470:
    // 0x2ab470: 0x1483007f  bne         $a0, $v1, . + 4 + (0x7F << 2)
label_2ab474:
    if (ctx->pc == 0x2AB474u) {
        ctx->pc = 0x2AB474u;
            // 0x2ab474: 0x8c560004  lw          $s6, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2AB478u;
        goto label_2ab478;
    }
    ctx->pc = 0x2AB470u;
    {
        const bool branch_taken_0x2ab470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AB474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB470u;
            // 0x2ab474: 0x8c560004  lw          $s6, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab470) {
            ctx->pc = 0x2AB670u;
            goto label_2ab670;
        }
    }
    ctx->pc = 0x2AB478u;
label_2ab478:
    // 0x2ab478: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2ab478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2ab47c:
    // 0x2ab47c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ab47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ab480:
    // 0x2ab480: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2ab480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2ab484:
    // 0x2ab484: 0xc0ae652  jal         func_2B9948
label_2ab488:
    if (ctx->pc == 0x2AB488u) {
        ctx->pc = 0x2AB488u;
            // 0x2ab488: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->pc = 0x2AB48Cu;
        goto label_2ab48c;
    }
    ctx->pc = 0x2AB484u;
    SET_GPR_U32(ctx, 31, 0x2AB48Cu);
    ctx->pc = 0x2AB488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB484u;
            // 0x2ab488: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9948u;
    if (runtime->hasFunction(0x2B9948u)) {
        auto targetFn = runtime->lookupFunction(0x2B9948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB48Cu; }
        if (ctx->pc != 0x2AB48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9948_0x2b9948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB48Cu; }
        if (ctx->pc != 0x2AB48Cu) { return; }
    }
    ctx->pc = 0x2AB48Cu;
label_2ab48c:
    // 0x2ab48c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2ab490:
    if (ctx->pc == 0x2AB490u) {
        ctx->pc = 0x2AB490u;
            // 0x2ab490: 0x8e5500b0  lw          $s5, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x2AB494u;
        goto label_2ab494;
    }
    ctx->pc = 0x2AB48Cu;
    {
        const bool branch_taken_0x2ab48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab48c) {
            ctx->pc = 0x2AB490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB48Cu;
            // 0x2ab490: 0x8e5500b0  lw          $s5, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB4B0u;
            goto label_2ab4b0;
        }
    }
    ctx->pc = 0x2AB494u;
label_2ab494:
    // 0x2ab494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab498:
    // 0x2ab498: 0xc0acbea  jal         func_2B2FA8
label_2ab49c:
    if (ctx->pc == 0x2AB49Cu) {
        ctx->pc = 0x2AB49Cu;
            // 0x2ab49c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AB4A0u;
        goto label_2ab4a0;
    }
    ctx->pc = 0x2AB498u;
    SET_GPR_U32(ctx, 31, 0x2AB4A0u);
    ctx->pc = 0x2AB49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB498u;
            // 0x2ab49c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4A0u; }
        if (ctx->pc != 0x2AB4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4A0u; }
        if (ctx->pc != 0x2AB4A0u) { return; }
    }
    ctx->pc = 0x2AB4A0u;
label_2ab4a0:
    // 0x2ab4a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab4a4:
    // 0x2ab4a4: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2ab4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2ab4a8:
    // 0x2ab4a8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2ab4ac:
    if (ctx->pc == 0x2AB4ACu) {
        ctx->pc = 0x2AB4ACu;
            // 0x2ab4ac: 0x240600ce  addiu       $a2, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->pc = 0x2AB4B0u;
        goto label_2ab4b0;
    }
    ctx->pc = 0x2AB4A8u;
    {
        const bool branch_taken_0x2ab4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4A8u;
            // 0x2ab4ac: 0x240600ce  addiu       $a2, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4a8) {
            ctx->pc = 0x2AB5D4u;
            goto label_2ab5d4;
        }
    }
    ctx->pc = 0x2AB4B0u;
label_2ab4b0:
    // 0x2ab4b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ab4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab4b4:
    // 0x2ab4b4: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x2ab4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ab4b8:
    // 0x2ab4b8: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x2ab4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2ab4bc:
    // 0x2ab4bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ab4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4c0:
    // 0x2ab4c0: 0x26d4000a  addiu       $s4, $s6, 0xA
    ctx->pc = 0x2ab4c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 10));
label_2ab4c4:
    // 0x2ab4c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2ab4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2ab4c8:
    // 0x2ab4c8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2ab4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_2ab4cc:
    // 0x2ab4cc: 0x40f809  jalr        $v0
label_2ab4d0:
    if (ctx->pc == 0x2AB4D0u) {
        ctx->pc = 0x2AB4D0u;
            // 0x2ab4d0: 0x8ea400ac  lw          $a0, 0xAC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
        ctx->pc = 0x2AB4D4u;
        goto label_2ab4d4;
    }
    ctx->pc = 0x2AB4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AB4D4u);
        ctx->pc = 0x2AB4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4CCu;
            // 0x2ab4d0: 0x8ea400ac  lw          $a0, 0xAC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AB4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4D4u; }
            if (ctx->pc != 0x2AB4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2AB4D4u;
label_2ab4d4:
    // 0x2ab4d4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ab4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab4d8:
    // 0x2ab4d8: 0xc0a5b04  jal         func_296C10
label_2ab4dc:
    if (ctx->pc == 0x2AB4DCu) {
        ctx->pc = 0x2AB4DCu;
            // 0x2ab4dc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x2AB4E0u;
        goto label_2ab4e0;
    }
    ctx->pc = 0x2AB4D8u;
    SET_GPR_U32(ctx, 31, 0x2AB4E0u);
    ctx->pc = 0x2AB4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4D8u;
            // 0x2ab4dc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C10u;
    if (runtime->hasFunction(0x296C10u)) {
        auto targetFn = runtime->lookupFunction(0x296C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4E0u; }
        if (ctx->pc != 0x2AB4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296C10_0x296c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4E0u; }
        if (ctx->pc != 0x2AB4E0u) { return; }
    }
    ctx->pc = 0x2AB4E0u;
label_2ab4e0:
    // 0x2ab4e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4e4:
    // 0x2ab4e4: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
label_2ab4e8:
    if (ctx->pc == 0x2AB4E8u) {
        ctx->pc = 0x2AB4E8u;
            // 0x2ab4e8: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2AB4ECu;
        goto label_2ab4ec;
    }
    ctx->pc = 0x2AB4E4u;
    {
        const bool branch_taken_0x2ab4e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2AB4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4E4u;
            // 0x2ab4e8: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4e4) {
            ctx->pc = 0x2AB4FCu;
            goto label_2ab4fc;
        }
    }
    ctx->pc = 0x2AB4ECu;
label_2ab4ec:
    // 0x2ab4ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4f0:
    // 0x2ab4f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4f4:
    // 0x2ab4f4: 0xc0a8d02  jal         func_2A3408
label_2ab4f8:
    if (ctx->pc == 0x2AB4F8u) {
        ctx->pc = 0x2AB4F8u;
            // 0x2ab4f8: 0x26a50008  addiu       $a1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x2AB4FCu;
        goto label_2ab4fc;
    }
    ctx->pc = 0x2AB4F4u;
    SET_GPR_U32(ctx, 31, 0x2AB4FCu);
    ctx->pc = 0x2AB4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4F4u;
            // 0x2ab4f8: 0x26a50008  addiu       $a1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (runtime->hasFunction(0x2A3408u)) {
        auto targetFn = runtime->lookupFunction(0x2A3408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4FCu; }
        if (ctx->pc != 0x2AB4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3408_0x2a3408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB4FCu; }
        if (ctx->pc != 0x2AB4FCu) { return; }
    }
    ctx->pc = 0x2AB4FCu;
label_2ab4fc:
    // 0x2ab4fc: 0xc0a5b02  jal         func_296C08
label_2ab500:
    if (ctx->pc == 0x2AB500u) {
        ctx->pc = 0x2AB500u;
            // 0x2ab500: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2AB504u;
        goto label_2ab504;
    }
    ctx->pc = 0x2AB4FCu;
    SET_GPR_U32(ctx, 31, 0x2AB504u);
    ctx->pc = 0x2AB500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB4FCu;
            // 0x2ab500: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (runtime->hasFunction(0x296C08u)) {
        auto targetFn = runtime->lookupFunction(0x296C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB504u; }
        if (ctx->pc != 0x2AB504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296C08_0x296c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB504u; }
        if (ctx->pc != 0x2AB504u) { return; }
    }
    ctx->pc = 0x2AB504u;
label_2ab504:
    // 0x2ab504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab508:
    // 0x2ab508: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
label_2ab50c:
    if (ctx->pc == 0x2AB50Cu) {
        ctx->pc = 0x2AB50Cu;
            // 0x2ab50c: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x2AB510u;
        goto label_2ab510;
    }
    ctx->pc = 0x2AB508u;
    {
        const bool branch_taken_0x2ab508 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2AB50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB508u;
            // 0x2ab50c: 0xaeb00010  sw          $s0, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab508) {
            ctx->pc = 0x2AB520u;
            goto label_2ab520;
        }
    }
    ctx->pc = 0x2AB510u;
label_2ab510:
    // 0x2ab510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab514:
    // 0x2ab514: 0x26a50014  addiu       $a1, $s5, 0x14
    ctx->pc = 0x2ab514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_2ab518:
    // 0x2ab518: 0xc0a8d02  jal         func_2A3408
label_2ab51c:
    if (ctx->pc == 0x2AB51Cu) {
        ctx->pc = 0x2AB51Cu;
            // 0x2ab51c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB520u;
        goto label_2ab520;
    }
    ctx->pc = 0x2AB518u;
    SET_GPR_U32(ctx, 31, 0x2AB520u);
    ctx->pc = 0x2AB51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB518u;
            // 0x2ab51c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (runtime->hasFunction(0x2A3408u)) {
        auto targetFn = runtime->lookupFunction(0x2A3408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB520u; }
        if (ctx->pc != 0x2AB520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3408_0x2a3408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB520u; }
        if (ctx->pc != 0x2AB520u) { return; }
    }
    ctx->pc = 0x2AB520u;
label_2ab520:
    // 0x2ab520: 0x8ea200ac  lw          $v0, 0xAC($s5)
    ctx->pc = 0x2ab520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 172)));
label_2ab524:
    // 0x2ab524: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x2ab524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_2ab528:
    // 0x2ab528: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x2ab528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
label_2ab52c:
    // 0x2ab52c: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x2ab52cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_2ab530:
    // 0x2ab530: 0x211880a  movz        $s1, $s0, $s1
    ctx->pc = 0x2ab530u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
label_2ab534:
    // 0x2ab534: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2ab534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2ab538:
    // 0x2ab538: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ab53c:
    if (ctx->pc == 0x2AB53Cu) {
        ctx->pc = 0x2AB53Cu;
            // 0x2ab53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB540u;
        goto label_2ab540;
    }
    ctx->pc = 0x2AB538u;
    {
        const bool branch_taken_0x2ab538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB538u;
            // 0x2ab53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab538) {
            ctx->pc = 0x2AB558u;
            goto label_2ab558;
        }
    }
    ctx->pc = 0x2AB540u;
label_2ab540:
    // 0x2ab540: 0xc0acbea  jal         func_2B2FA8
label_2ab544:
    if (ctx->pc == 0x2AB544u) {
        ctx->pc = 0x2AB544u;
            // 0x2ab544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB548u;
        goto label_2ab548;
    }
    ctx->pc = 0x2AB540u;
    SET_GPR_U32(ctx, 31, 0x2AB548u);
    ctx->pc = 0x2AB544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB540u;
            // 0x2ab544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB548u; }
        if (ctx->pc != 0x2AB548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB548u; }
        if (ctx->pc != 0x2AB548u) { return; }
    }
    ctx->pc = 0x2AB548u;
label_2ab548:
    // 0x2ab548: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab54c:
    // 0x2ab54c: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2ab54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2ab550:
    // 0x2ab550: 0x10000020  b           . + 4 + (0x20 << 2)
label_2ab554:
    if (ctx->pc == 0x2AB554u) {
        ctx->pc = 0x2AB554u;
            // 0x2ab554: 0x2406008b  addiu       $a2, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->pc = 0x2AB558u;
        goto label_2ab558;
    }
    ctx->pc = 0x2AB550u;
    {
        const bool branch_taken_0x2ab550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB550u;
            // 0x2ab554: 0x2406008b  addiu       $a2, $zero, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab550) {
            ctx->pc = 0x2AB5D4u;
            goto label_2ab5d4;
        }
    }
    ctx->pc = 0x2AB558u;
label_2ab558:
    // 0x2ab558: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x2ab558u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2ab55c:
    // 0x2ab55c: 0x26b70014  addiu       $s7, $s5, 0x14
    ctx->pc = 0x2ab55cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
label_2ab560:
    // 0x2ab560: 0xa2700001  sb          $s0, 0x1($s3)
    ctx->pc = 0x2ab560u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 16));
label_2ab564:
    // 0x2ab564: 0x101203  sra         $v0, $s0, 8
    ctx->pc = 0x2ab564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
label_2ab568:
    // 0x2ab568: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2ab568u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ab56c:
    // 0x2ab56c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ab56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ab570:
    // 0x2ab570: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2ab570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ab574:
    // 0x2ab574: 0xc049c48  jal         func_127120
label_2ab578:
    if (ctx->pc == 0x2AB578u) {
        ctx->pc = 0x2AB578u;
            // 0x2ab578: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB57Cu;
        goto label_2ab57c;
    }
    ctx->pc = 0x2AB574u;
    SET_GPR_U32(ctx, 31, 0x2AB57Cu);
    ctx->pc = 0x2AB578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB574u;
            // 0x2ab578: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB57Cu; }
        if (ctx->pc != 0x2AB57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB57Cu; }
        if (ctx->pc != 0x2AB57Cu) { return; }
    }
    ctx->pc = 0x2AB57Cu;
label_2ab57c:
    // 0x2ab57c: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x2ab57cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2ab580:
    // 0x2ab580: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2ab580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2ab584:
    // 0x2ab584: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ab584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab588:
    // 0x2ab588: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab58c:
    // 0x2ab58c: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x2ab58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2ab590:
    // 0x2ab590: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ab590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2ab594:
    // 0x2ab594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab598:
    // 0x2ab598: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x2ab598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_2ab59c:
    // 0x2ab59c: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x2ab59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_2ab5a0:
    // 0x2ab5a0: 0xe3400a  movz        $t0, $a3, $v1
    ctx->pc = 0x2ab5a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_2ab5a4:
    // 0x2ab5a4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2ab5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2ab5a8:
    // 0x2ab5a8: 0xc0ab044  jal         func_2AC110
label_2ab5ac:
    if (ctx->pc == 0x2AB5ACu) {
        ctx->pc = 0x2AB5ACu;
            // 0x2ab5ac: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5B0u;
        goto label_2ab5b0;
    }
    ctx->pc = 0x2AB5A8u;
    SET_GPR_U32(ctx, 31, 0x2AB5B0u);
    ctx->pc = 0x2AB5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5A8u;
            // 0x2ab5ac: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC110u;
    if (runtime->hasFunction(0x2AC110u)) {
        auto targetFn = runtime->lookupFunction(0x2AC110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5B0u; }
        if (ctx->pc != 0x2AB5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC110_0x2ac110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5B0u; }
        if (ctx->pc != 0x2AB5B0u) { return; }
    }
    ctx->pc = 0x2AB5B0u;
label_2ab5b0:
    // 0x2ab5b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ab5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab5b4:
    // 0x2ab5b4: 0x5e20000c  bgtzl       $s1, . + 4 + (0xC << 2)
label_2ab5b8:
    if (ctx->pc == 0x2AB5B8u) {
        ctx->pc = 0x2AB5B8u;
            // 0x2ab5b8: 0xde430100  ld          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->pc = 0x2AB5BCu;
        goto label_2ab5bc;
    }
    ctx->pc = 0x2AB5B4u;
    {
        const bool branch_taken_0x2ab5b4 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x2ab5b4) {
            ctx->pc = 0x2AB5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5B4u;
            // 0x2ab5b8: 0xde430100  ld          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB5E8u;
            goto label_2ab5e8;
        }
    }
    ctx->pc = 0x2AB5BCu;
label_2ab5bc:
    // 0x2ab5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab5c0:
    // 0x2ab5c0: 0xc0acbea  jal         func_2B2FA8
label_2ab5c4:
    if (ctx->pc == 0x2AB5C4u) {
        ctx->pc = 0x2AB5C4u;
            // 0x2ab5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5C8u;
        goto label_2ab5c8;
    }
    ctx->pc = 0x2AB5C0u;
    SET_GPR_U32(ctx, 31, 0x2AB5C8u);
    ctx->pc = 0x2AB5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5C0u;
            // 0x2ab5c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5C8u; }
        if (ctx->pc != 0x2AB5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5C8u; }
        if (ctx->pc != 0x2AB5C8u) { return; }
    }
    ctx->pc = 0x2AB5C8u;
label_2ab5c8:
    // 0x2ab5c8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab5cc:
    // 0x2ab5cc: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2ab5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2ab5d0:
    // 0x2ab5d0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2ab5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2ab5d4:
    // 0x2ab5d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab5d8:
    // 0x2ab5d8: 0xc0a5648  jal         func_295920
label_2ab5dc:
    if (ctx->pc == 0x2AB5DCu) {
        ctx->pc = 0x2AB5DCu;
            // 0x2ab5dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5E0u;
        goto label_2ab5e0;
    }
    ctx->pc = 0x2AB5D8u;
    SET_GPR_U32(ctx, 31, 0x2AB5E0u);
    ctx->pc = 0x2AB5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5D8u;
            // 0x2ab5dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E0u; }
        if (ctx->pc != 0x2AB5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E0u; }
        if (ctx->pc != 0x2AB5E0u) { return; }
    }
    ctx->pc = 0x2AB5E0u;
label_2ab5e0:
    // 0x2ab5e0: 0x10000025  b           . + 4 + (0x25 << 2)
label_2ab5e4:
    if (ctx->pc == 0x2AB5E4u) {
        ctx->pc = 0x2AB5E4u;
            // 0x2ab5e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AB5E8u;
        goto label_2ab5e8;
    }
    ctx->pc = 0x2AB5E0u;
    {
        const bool branch_taken_0x2ab5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5E0u;
            // 0x2ab5e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab5e0) {
            ctx->pc = 0x2AB678u;
            goto label_2ab678;
        }
    }
    ctx->pc = 0x2AB5E8u;
label_2ab5e8:
    // 0x2ab5e8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ab5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_2ab5ec:
    // 0x2ab5ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ab5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ab5f0:
    // 0x2ab5f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ab5f4:
    if (ctx->pc == 0x2AB5F4u) {
        ctx->pc = 0x2AB5F4u;
            // 0x2ab5f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x2AB5F8u;
        goto label_2ab5f8;
    }
    ctx->pc = 0x2AB5F0u;
    {
        const bool branch_taken_0x2ab5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5F0u;
            // 0x2ab5f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab5f0) {
            ctx->pc = 0x2AB60Cu;
            goto label_2ab60c;
        }
    }
    ctx->pc = 0x2AB5F8u;
label_2ab5f8:
    // 0x2ab5f8: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x2ab5f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_2ab5fc:
    // 0x2ab5fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ab5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ab600:
    // 0x2ab600: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x2ab600u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_2ab604:
    // 0x2ab604: 0xde430100  ld          $v1, 0x100($s2)
    ctx->pc = 0x2ab604u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 256)));
label_2ab608:
    // 0x2ab608: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ab608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2ab60c:
    // 0x2ab60c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ab60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2ab610:
    // 0x2ab610: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ab614:
    if (ctx->pc == 0x2AB614u) {
        ctx->pc = 0x2AB614u;
            // 0x2ab614: 0x2f01821  addu        $v1, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->pc = 0x2AB618u;
        goto label_2ab618;
    }
    ctx->pc = 0x2AB610u;
    {
        const bool branch_taken_0x2ab610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB610u;
            // 0x2ab614: 0x2f01821  addu        $v1, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab610) {
            ctx->pc = 0x2AB624u;
            goto label_2ab624;
        }
    }
    ctx->pc = 0x2AB618u;
label_2ab618:
    // 0x2ab618: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ab618u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2ab61c:
    // 0x2ab61c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ab61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ab620:
    // 0x2ab620: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2ab620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ab624:
    // 0x2ab624: 0x111203  sra         $v0, $s1, 8
    ctx->pc = 0x2ab624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 8));
label_2ab628:
    // 0x2ab628: 0xa2710001  sb          $s1, 0x1($s3)
    ctx->pc = 0x2ab628u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
label_2ab62c:
    // 0x2ab62c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2ab62cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ab630:
    // 0x2ab630: 0x291a021  addu        $s4, $s4, $s1
    ctx->pc = 0x2ab630u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2ab634:
    // 0x2ab634: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2ab634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2ab638:
    // 0x2ab638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ab638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ab63c:
    // 0x2ab63c: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x2ab63cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2ab640:
    // 0x2ab640: 0x26a50008  addiu       $a1, $s5, 0x8
    ctx->pc = 0x2ab640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2ab644:
    // 0x2ab644: 0x101203  sra         $v0, $s0, 8
    ctx->pc = 0x2ab644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
label_2ab648:
    // 0x2ab648: 0xa2700001  sb          $s0, 0x1($s3)
    ctx->pc = 0x2ab648u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 16));
label_2ab64c:
    // 0x2ab64c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2ab64cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ab650:
    // 0x2ab650: 0xc049c48  jal         func_127120
label_2ab654:
    if (ctx->pc == 0x2AB654u) {
        ctx->pc = 0x2AB654u;
            // 0x2ab654: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB658u;
        goto label_2ab658;
    }
    ctx->pc = 0x2AB650u;
    SET_GPR_U32(ctx, 31, 0x2AB658u);
    ctx->pc = 0x2AB654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB650u;
            // 0x2ab654: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB658u; }
        if (ctx->pc != 0x2AB658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB658u; }
        if (ctx->pc != 0x2AB658u) { return; }
    }
    ctx->pc = 0x2AB658u;
label_2ab658:
    // 0x2ab658: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x2ab658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2ab65c:
    // 0x2ab65c: 0x2961823  subu        $v1, $s4, $s6
    ctx->pc = 0x2ab65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_2ab660:
    // 0x2ab660: 0x24021031  addiu       $v0, $zero, 0x1031
    ctx->pc = 0x2ab660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4145));
label_2ab664:
    // 0x2ab664: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2ab664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2ab668:
    // 0x2ab668: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x2ab668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
label_2ab66c:
    // 0x2ab66c: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x2ab66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_2ab670:
    // 0x2ab670: 0xc0acbb2  jal         func_2B2EC8
label_2ab674:
    if (ctx->pc == 0x2AB674u) {
        ctx->pc = 0x2AB674u;
            // 0x2ab674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB678u;
        goto label_2ab678;
    }
    ctx->pc = 0x2AB670u;
    SET_GPR_U32(ctx, 31, 0x2AB678u);
    ctx->pc = 0x2AB674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB670u;
            // 0x2ab674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2EC8u;
    if (runtime->hasFunction(0x2B2EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB678u; }
        if (ctx->pc != 0x2AB678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2EC8_0x2b2ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB678u; }
        if (ctx->pc != 0x2AB678u) { return; }
    }
    ctx->pc = 0x2AB678u;
label_2ab678:
    // 0x2ab678: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ab678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ab67c:
    // 0x2ab67c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2ab67cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ab680:
    // 0x2ab680: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2ab680u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ab684:
    // 0x2ab684: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ab684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ab688:
    // 0x2ab688: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ab688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ab68c:
    // 0x2ab68c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ab68cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ab690:
    // 0x2ab690: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ab690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ab694:
    // 0x2ab694: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ab694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ab698:
    // 0x2ab698: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ab698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab69c:
    // 0x2ab69c: 0x3e00008  jr          $ra
label_2ab6a0:
    if (ctx->pc == 0x2AB6A0u) {
        ctx->pc = 0x2AB6A0u;
            // 0x2ab6a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2AB6A4u;
        goto label_2ab6a4;
    }
    ctx->pc = 0x2AB69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB69Cu;
            // 0x2ab6a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB6A4u;
label_2ab6a4:
    // 0x2ab6a4: 0x0  nop
    ctx->pc = 0x2ab6a4u;
    // NOP
    ctx->pc = 0x2ab6a8u;
}
