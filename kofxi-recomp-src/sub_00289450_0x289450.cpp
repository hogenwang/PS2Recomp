#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289450
// Address: 0x289450 - 0x289730
void sub_00289450_0x289450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289450_0x289450");
#endif

    switch (ctx->pc) {
        case 0x289450u: goto label_289450;
        case 0x289454u: goto label_289454;
        case 0x289458u: goto label_289458;
        case 0x28945cu: goto label_28945c;
        case 0x289460u: goto label_289460;
        case 0x289464u: goto label_289464;
        case 0x289468u: goto label_289468;
        case 0x28946cu: goto label_28946c;
        case 0x289470u: goto label_289470;
        case 0x289474u: goto label_289474;
        case 0x289478u: goto label_289478;
        case 0x28947cu: goto label_28947c;
        case 0x289480u: goto label_289480;
        case 0x289484u: goto label_289484;
        case 0x289488u: goto label_289488;
        case 0x28948cu: goto label_28948c;
        case 0x289490u: goto label_289490;
        case 0x289494u: goto label_289494;
        case 0x289498u: goto label_289498;
        case 0x28949cu: goto label_28949c;
        case 0x2894a0u: goto label_2894a0;
        case 0x2894a4u: goto label_2894a4;
        case 0x2894a8u: goto label_2894a8;
        case 0x2894acu: goto label_2894ac;
        case 0x2894b0u: goto label_2894b0;
        case 0x2894b4u: goto label_2894b4;
        case 0x2894b8u: goto label_2894b8;
        case 0x2894bcu: goto label_2894bc;
        case 0x2894c0u: goto label_2894c0;
        case 0x2894c4u: goto label_2894c4;
        case 0x2894c8u: goto label_2894c8;
        case 0x2894ccu: goto label_2894cc;
        case 0x2894d0u: goto label_2894d0;
        case 0x2894d4u: goto label_2894d4;
        case 0x2894d8u: goto label_2894d8;
        case 0x2894dcu: goto label_2894dc;
        case 0x2894e0u: goto label_2894e0;
        case 0x2894e4u: goto label_2894e4;
        case 0x2894e8u: goto label_2894e8;
        case 0x2894ecu: goto label_2894ec;
        case 0x2894f0u: goto label_2894f0;
        case 0x2894f4u: goto label_2894f4;
        case 0x2894f8u: goto label_2894f8;
        case 0x2894fcu: goto label_2894fc;
        case 0x289500u: goto label_289500;
        case 0x289504u: goto label_289504;
        case 0x289508u: goto label_289508;
        case 0x28950cu: goto label_28950c;
        case 0x289510u: goto label_289510;
        case 0x289514u: goto label_289514;
        case 0x289518u: goto label_289518;
        case 0x28951cu: goto label_28951c;
        case 0x289520u: goto label_289520;
        case 0x289524u: goto label_289524;
        case 0x289528u: goto label_289528;
        case 0x28952cu: goto label_28952c;
        case 0x289530u: goto label_289530;
        case 0x289534u: goto label_289534;
        case 0x289538u: goto label_289538;
        case 0x28953cu: goto label_28953c;
        case 0x289540u: goto label_289540;
        case 0x289544u: goto label_289544;
        case 0x289548u: goto label_289548;
        case 0x28954cu: goto label_28954c;
        case 0x289550u: goto label_289550;
        case 0x289554u: goto label_289554;
        case 0x289558u: goto label_289558;
        case 0x28955cu: goto label_28955c;
        case 0x289560u: goto label_289560;
        case 0x289564u: goto label_289564;
        case 0x289568u: goto label_289568;
        case 0x28956cu: goto label_28956c;
        case 0x289570u: goto label_289570;
        case 0x289574u: goto label_289574;
        case 0x289578u: goto label_289578;
        case 0x28957cu: goto label_28957c;
        case 0x289580u: goto label_289580;
        case 0x289584u: goto label_289584;
        case 0x289588u: goto label_289588;
        case 0x28958cu: goto label_28958c;
        case 0x289590u: goto label_289590;
        case 0x289594u: goto label_289594;
        case 0x289598u: goto label_289598;
        case 0x28959cu: goto label_28959c;
        case 0x2895a0u: goto label_2895a0;
        case 0x2895a4u: goto label_2895a4;
        case 0x2895a8u: goto label_2895a8;
        case 0x2895acu: goto label_2895ac;
        case 0x2895b0u: goto label_2895b0;
        case 0x2895b4u: goto label_2895b4;
        case 0x2895b8u: goto label_2895b8;
        case 0x2895bcu: goto label_2895bc;
        case 0x2895c0u: goto label_2895c0;
        case 0x2895c4u: goto label_2895c4;
        case 0x2895c8u: goto label_2895c8;
        case 0x2895ccu: goto label_2895cc;
        case 0x2895d0u: goto label_2895d0;
        case 0x2895d4u: goto label_2895d4;
        case 0x2895d8u: goto label_2895d8;
        case 0x2895dcu: goto label_2895dc;
        case 0x2895e0u: goto label_2895e0;
        case 0x2895e4u: goto label_2895e4;
        case 0x2895e8u: goto label_2895e8;
        case 0x2895ecu: goto label_2895ec;
        case 0x2895f0u: goto label_2895f0;
        case 0x2895f4u: goto label_2895f4;
        case 0x2895f8u: goto label_2895f8;
        case 0x2895fcu: goto label_2895fc;
        case 0x289600u: goto label_289600;
        case 0x289604u: goto label_289604;
        case 0x289608u: goto label_289608;
        case 0x28960cu: goto label_28960c;
        case 0x289610u: goto label_289610;
        case 0x289614u: goto label_289614;
        case 0x289618u: goto label_289618;
        case 0x28961cu: goto label_28961c;
        case 0x289620u: goto label_289620;
        case 0x289624u: goto label_289624;
        case 0x289628u: goto label_289628;
        case 0x28962cu: goto label_28962c;
        case 0x289630u: goto label_289630;
        case 0x289634u: goto label_289634;
        case 0x289638u: goto label_289638;
        case 0x28963cu: goto label_28963c;
        case 0x289640u: goto label_289640;
        case 0x289644u: goto label_289644;
        case 0x289648u: goto label_289648;
        case 0x28964cu: goto label_28964c;
        case 0x289650u: goto label_289650;
        case 0x289654u: goto label_289654;
        case 0x289658u: goto label_289658;
        case 0x28965cu: goto label_28965c;
        case 0x289660u: goto label_289660;
        case 0x289664u: goto label_289664;
        case 0x289668u: goto label_289668;
        case 0x28966cu: goto label_28966c;
        case 0x289670u: goto label_289670;
        case 0x289674u: goto label_289674;
        case 0x289678u: goto label_289678;
        case 0x28967cu: goto label_28967c;
        case 0x289680u: goto label_289680;
        case 0x289684u: goto label_289684;
        case 0x289688u: goto label_289688;
        case 0x28968cu: goto label_28968c;
        case 0x289690u: goto label_289690;
        case 0x289694u: goto label_289694;
        case 0x289698u: goto label_289698;
        case 0x28969cu: goto label_28969c;
        case 0x2896a0u: goto label_2896a0;
        case 0x2896a4u: goto label_2896a4;
        case 0x2896a8u: goto label_2896a8;
        case 0x2896acu: goto label_2896ac;
        case 0x2896b0u: goto label_2896b0;
        case 0x2896b4u: goto label_2896b4;
        case 0x2896b8u: goto label_2896b8;
        case 0x2896bcu: goto label_2896bc;
        case 0x2896c0u: goto label_2896c0;
        case 0x2896c4u: goto label_2896c4;
        case 0x2896c8u: goto label_2896c8;
        case 0x2896ccu: goto label_2896cc;
        case 0x2896d0u: goto label_2896d0;
        case 0x2896d4u: goto label_2896d4;
        case 0x2896d8u: goto label_2896d8;
        case 0x2896dcu: goto label_2896dc;
        case 0x2896e0u: goto label_2896e0;
        case 0x2896e4u: goto label_2896e4;
        case 0x2896e8u: goto label_2896e8;
        case 0x2896ecu: goto label_2896ec;
        case 0x2896f0u: goto label_2896f0;
        case 0x2896f4u: goto label_2896f4;
        case 0x2896f8u: goto label_2896f8;
        case 0x2896fcu: goto label_2896fc;
        case 0x289700u: goto label_289700;
        case 0x289704u: goto label_289704;
        case 0x289708u: goto label_289708;
        case 0x28970cu: goto label_28970c;
        case 0x289710u: goto label_289710;
        case 0x289714u: goto label_289714;
        case 0x289718u: goto label_289718;
        case 0x28971cu: goto label_28971c;
        case 0x289720u: goto label_289720;
        case 0x289724u: goto label_289724;
        case 0x289728u: goto label_289728;
        case 0x28972cu: goto label_28972c;
        default: break;
    }

    ctx->pc = 0x289450u;

label_289450:
    // 0x289450: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x289450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_289454:
    // 0x289454: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x289454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_289458:
    // 0x289458: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x289458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_28945c:
    // 0x28945c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x28945cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_289460:
    // 0x289460: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x289460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_289464:
    // 0x289464: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x289464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289468:
    // 0x289468: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x289468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_28946c:
    // 0x28946c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28946cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_289470:
    // 0x289470: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x289470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_289474:
    // 0x289474: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x289474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289478:
    // 0x289478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28947c:
    // 0x28947c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x28947cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_289480:
    // 0x289480: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x289480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_289484:
    // 0x289484: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x289484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_289488:
    // 0x289488: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x289488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_28948c:
    // 0x28948c: 0x2e0f809  jalr        $s7
label_289490:
    if (ctx->pc == 0x289490u) {
        ctx->pc = 0x289490u;
            // 0x289490: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->pc = 0x289494u;
        goto label_289494;
    }
    ctx->pc = 0x28948Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x289494u);
        ctx->pc = 0x289490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28948Cu;
            // 0x289490: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x289494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x289494u; }
            if (ctx->pc != 0x289494u) { return; }
        }
        }
    }
    ctx->pc = 0x289494u;
label_289494:
    // 0x289494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289498:
    // 0x289498: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x289498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28949c:
    // 0x28949c: 0x40f809  jalr        $v0
label_2894a0:
    if (ctx->pc == 0x2894A0u) {
        ctx->pc = 0x2894A0u;
            // 0x2894a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2894A4u;
        goto label_2894a4;
    }
    ctx->pc = 0x28949Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2894A4u);
        ctx->pc = 0x2894A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28949Cu;
            // 0x2894a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2894A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2894A4u; }
            if (ctx->pc != 0x2894A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2894A4u;
label_2894a4:
    // 0x2894a4: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_2894a8:
    if (ctx->pc == 0x2894A8u) {
        ctx->pc = 0x2894A8u;
            // 0x2894a8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2894ACu;
        goto label_2894ac;
    }
    ctx->pc = 0x2894A4u;
    {
        const bool branch_taken_0x2894a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2894A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894A4u;
            // 0x2894a8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894a4) {
            ctx->pc = 0x289704u;
            goto label_289704;
        }
    }
    ctx->pc = 0x2894ACu;
label_2894ac:
    // 0x2894ac: 0x32c20002  andi        $v0, $s6, 0x2
    ctx->pc = 0x2894acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2);
label_2894b0:
    // 0x2894b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2894b4:
    if (ctx->pc == 0x2894B4u) {
        ctx->pc = 0x2894B4u;
            // 0x2894b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2894B8u;
        goto label_2894b8;
    }
    ctx->pc = 0x2894B0u;
    {
        const bool branch_taken_0x2894b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2894B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894B0u;
            // 0x2894b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894b0) {
            ctx->pc = 0x2894D4u;
            goto label_2894d4;
        }
    }
    ctx->pc = 0x2894B8u;
label_2894b8:
    // 0x2894b8: 0x12540002  beq         $s2, $s4, . + 4 + (0x2 << 2)
label_2894bc:
    if (ctx->pc == 0x2894BCu) {
        ctx->pc = 0x2894BCu;
            // 0x2894bc: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->pc = 0x2894C0u;
        goto label_2894c0;
    }
    ctx->pc = 0x2894B8u;
    {
        const bool branch_taken_0x2894b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x2894BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894B8u;
            // 0x2894bc: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894b8) {
            ctx->pc = 0x2894C4u;
            goto label_2894c4;
        }
    }
    ctx->pc = 0x2894C0u;
label_2894c0:
    // 0x2894c0: 0x2452ffc1  addiu       $s2, $v0, -0x3F
    ctx->pc = 0x2894c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967233));
label_2894c4:
    // 0x2894c4: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x2894c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_2894c8:
    // 0x2894c8: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x2894c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
label_2894cc:
    // 0x2894cc: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x2894ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2894d0:
    // 0x2894d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2894d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2894d4:
    // 0x2894d4: 0x52420006  beql        $s2, $v0, . + 4 + (0x6 << 2)
label_2894d8:
    if (ctx->pc == 0x2894D8u) {
        ctx->pc = 0x2894D8u;
            // 0x2894d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2894DCu;
        goto label_2894dc;
    }
    ctx->pc = 0x2894D4u;
    {
        const bool branch_taken_0x2894d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2894d4) {
            ctx->pc = 0x2894D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2894D4u;
            // 0x2894d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2894F0u;
            goto label_2894f0;
        }
    }
    ctx->pc = 0x2894DCu;
label_2894dc:
    // 0x2894dc: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
label_2894e0:
    if (ctx->pc == 0x2894E0u) {
        ctx->pc = 0x2894E0u;
            // 0x2894e0: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->pc = 0x2894E4u;
        goto label_2894e4;
    }
    ctx->pc = 0x2894DCu;
    {
        const bool branch_taken_0x2894dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2894E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894DCu;
            // 0x2894e0: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894dc) {
            ctx->pc = 0x289528u;
            goto label_289528;
        }
    }
    ctx->pc = 0x2894E4u;
label_2894e4:
    // 0x2894e4: 0x16510009  bne         $s2, $s1, . + 4 + (0x9 << 2)
label_2894e8:
    if (ctx->pc == 0x2894E8u) {
        ctx->pc = 0x2894E8u;
            // 0x2894e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2894ECu;
        goto label_2894ec;
    }
    ctx->pc = 0x2894E4u;
    {
        const bool branch_taken_0x2894e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x2894E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894E4u;
            // 0x2894e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894e4) {
            ctx->pc = 0x28950Cu;
            goto label_28950c;
        }
    }
    ctx->pc = 0x2894ECu;
label_2894ec:
    // 0x2894ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2894ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2894f0:
    // 0x2894f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2894f4:
    if (ctx->pc == 0x2894F4u) {
        ctx->pc = 0x2894F4u;
            // 0x2894f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x2894F8u;
        goto label_2894f8;
    }
    ctx->pc = 0x2894F0u;
    {
        const bool branch_taken_0x2894f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2894F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894F0u;
            // 0x2894f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894f0) {
            ctx->pc = 0x289504u;
            goto label_289504;
        }
    }
    ctx->pc = 0x2894F8u;
label_2894f8:
    // 0x2894f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2894f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2894fc:
    // 0x2894fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_289500:
    if (ctx->pc == 0x289500u) {
        ctx->pc = 0x289500u;
            // 0x289500: 0x24520001  addiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x289504u;
        goto label_289504;
    }
    ctx->pc = 0x2894FCu;
    {
        const bool branch_taken_0x2894fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2894FCu;
            // 0x289500: 0x24520001  addiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2894fc) {
            ctx->pc = 0x289508u;
            goto label_289508;
        }
    }
    ctx->pc = 0x289504u;
label_289504:
    // 0x289504: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x289504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289508:
    // 0x289508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x289508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28950c:
    // 0x28950c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_289510:
    if (ctx->pc == 0x289510u) {
        ctx->pc = 0x289510u;
            // 0x289510: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->pc = 0x289514u;
        goto label_289514;
    }
    ctx->pc = 0x28950Cu;
    {
        const bool branch_taken_0x28950c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x289510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28950Cu;
            // 0x289510: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28950c) {
            ctx->pc = 0x289528u;
            goto label_289528;
        }
    }
    ctx->pc = 0x289514u;
label_289514:
    // 0x289514: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_289518:
    // 0x289518: 0x3c117fff  lui         $s1, 0x7FFF
    ctx->pc = 0x289518u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32767 << 16));
label_28951c:
    // 0x28951c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x28951cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
label_289520:
    // 0x289520: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x289520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_289524:
    // 0x289524: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x289524u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_289528:
    // 0x289528: 0x36d60002  ori         $s6, $s6, 0x2
    ctx->pc = 0x289528u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)2);
label_28952c:
    // 0x28952c: 0x8ea236f0  lw          $v0, 0x36F0($s5)
    ctx->pc = 0x28952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14064)));
label_289530:
    // 0x289530: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x289530u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_289534:
    // 0x289534: 0x32d30001  andi        $s3, $s6, 0x1
    ctx->pc = 0x289534u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_289538:
    // 0x289538: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x289538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28953c:
    // 0x28953c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_289540:
    if (ctx->pc == 0x289540u) {
        ctx->pc = 0x289540u;
            // 0x289540: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289544u;
        goto label_289544;
    }
    ctx->pc = 0x28953Cu;
    {
        const bool branch_taken_0x28953c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x289540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28953Cu;
            // 0x289540: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28953c) {
            ctx->pc = 0x2895A8u;
            goto label_2895a8;
        }
    }
    ctx->pc = 0x289544u;
label_289544:
    // 0x289544: 0x3c0601c9  lui         $a2, 0x1C9
    ctx->pc = 0x289544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)457 << 16));
label_289548:
    // 0x289548: 0x24c543b8  addiu       $a1, $a2, 0x43B8
    ctx->pc = 0x289548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
label_28954c:
    // 0x28954c: 0x0  nop
    ctx->pc = 0x28954cu;
    // NOP
label_289550:
    // 0x289550: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x289550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_289554:
    // 0x289554: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x289554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_289558:
    // 0x289558: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x289558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_28955c:
    // 0x28955c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28955cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_289560:
    // 0x289560: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_289564:
    if (ctx->pc == 0x289564u) {
        ctx->pc = 0x289564u;
            // 0x289564: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->pc = 0x289568u;
        goto label_289568;
    }
    ctx->pc = 0x289560u;
    {
        const bool branch_taken_0x289560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289560u;
            // 0x289564: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289560) {
            ctx->pc = 0x28956Cu;
            goto label_28956c;
        }
    }
    ctx->pc = 0x289568u;
label_289568:
    // 0x289568: 0x202a00a  movz        $s4, $s0, $v0
    ctx->pc = 0x289568u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
label_28956c:
    // 0x28956c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_289570:
    if (ctx->pc == 0x289570u) {
        ctx->pc = 0x289570u;
            // 0x289570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289574u;
        goto label_289574;
    }
    ctx->pc = 0x28956Cu;
    {
        const bool branch_taken_0x28956c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x289570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28956Cu;
            // 0x289570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28956c) {
            ctx->pc = 0x289578u;
            goto label_289578;
        }
    }
    ctx->pc = 0x289574u;
label_289574:
    // 0x289574: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x289574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_289578:
    // 0x289578: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
label_28957c:
    if (ctx->pc == 0x28957Cu) {
        ctx->pc = 0x28957Cu;
            // 0x28957c: 0x8ea236f0  lw          $v0, 0x36F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14064)));
        ctx->pc = 0x289580u;
        goto label_289580;
    }
    ctx->pc = 0x289578u;
    {
        const bool branch_taken_0x289578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x28957Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289578u;
            // 0x28957c: 0x8ea236f0  lw          $v0, 0x36F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289578) {
            ctx->pc = 0x289594u;
            goto label_289594;
        }
    }
    ctx->pc = 0x289580u;
label_289580:
    // 0x289580: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x289580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_289584:
    // 0x289584: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x289584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_289588:
    // 0x289588: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x289588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_28958c:
    // 0x28958c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_289590:
    if (ctx->pc == 0x289590u) {
        ctx->pc = 0x289590u;
            // 0x289590: 0x8ea236f0  lw          $v0, 0x36F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14064)));
        ctx->pc = 0x289594u;
        goto label_289594;
    }
    ctx->pc = 0x28958Cu;
    {
        const bool branch_taken_0x28958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28958Cu;
            // 0x289590: 0x8ea236f0  lw          $v0, 0x36F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28958c) {
            ctx->pc = 0x2895A4u;
            goto label_2895a4;
        }
    }
    ctx->pc = 0x289594u;
label_289594:
    // 0x289594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x289594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_289598:
    // 0x289598: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x289598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28959c:
    // 0x28959c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2895a0:
    if (ctx->pc == 0x2895A0u) {
        ctx->pc = 0x2895A0u;
            // 0x2895a0: 0x24c543b8  addiu       $a1, $a2, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
        ctx->pc = 0x2895A4u;
        goto label_2895a4;
    }
    ctx->pc = 0x28959Cu;
    {
        const bool branch_taken_0x28959c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2895A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28959Cu;
            // 0x2895a0: 0x24c543b8  addiu       $a1, $a2, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28959c) {
            ctx->pc = 0x289550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289550;
        }
    }
    ctx->pc = 0x2895A4u;
label_2895a4:
    // 0x2895a4: 0x8ea236f0  lw          $v0, 0x36F0($s5)
    ctx->pc = 0x2895a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14064)));
label_2895a8:
    // 0x2895a8: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_2895ac:
    if (ctx->pc == 0x2895ACu) {
        ctx->pc = 0x2895ACu;
            // 0x2895ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2895B0u;
        goto label_2895b0;
    }
    ctx->pc = 0x2895A8u;
    {
        const bool branch_taken_0x2895a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2895ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895A8u;
            // 0x2895ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895a8) {
            ctx->pc = 0x2895E0u;
            goto label_2895e0;
        }
    }
    ctx->pc = 0x2895B0u;
label_2895b0:
    // 0x2895b0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2895b4:
    if (ctx->pc == 0x2895B4u) {
        ctx->pc = 0x2895B4u;
            // 0x2895b4: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->pc = 0x2895B8u;
        goto label_2895b8;
    }
    ctx->pc = 0x2895B0u;
    {
        const bool branch_taken_0x2895b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895B0u;
            // 0x2895b4: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895b0) {
            ctx->pc = 0x2895C4u;
            goto label_2895c4;
        }
    }
    ctx->pc = 0x2895B8u;
label_2895b8:
    // 0x2895b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2895b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2895bc:
    // 0x2895bc: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x2895bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_2895c0:
    // 0x2895c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2895c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2895c4:
    // 0x2895c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2895c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2895c8:
    // 0x2895c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2895c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2895cc:
    // 0x2895cc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2895ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2895d0:
    // 0x2895d0: 0xc0a24dc  jal         func_289370
label_2895d4:
    if (ctx->pc == 0x2895D4u) {
        ctx->pc = 0x2895D4u;
            // 0x2895d4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2895D8u;
        goto label_2895d8;
    }
    ctx->pc = 0x2895D0u;
    SET_GPR_U32(ctx, 31, 0x2895D8u);
    ctx->pc = 0x2895D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2895D0u;
            // 0x2895d4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289370u;
    if (runtime->hasFunction(0x289370u)) {
        auto targetFn = runtime->lookupFunction(0x289370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2895D8u; }
        if (ctx->pc != 0x2895D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289370_0x289370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2895D8u; }
        if (ctx->pc != 0x2895D8u) { return; }
    }
    ctx->pc = 0x2895D8u;
label_2895d8:
    // 0x2895d8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2895dc:
    if (ctx->pc == 0x2895DCu) {
        ctx->pc = 0x2895DCu;
            // 0x2895dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2895E0u;
        goto label_2895e0;
    }
    ctx->pc = 0x2895D8u;
    {
        const bool branch_taken_0x2895d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895D8u;
            // 0x2895dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895d8) {
            ctx->pc = 0x289704u;
            goto label_289704;
        }
    }
    ctx->pc = 0x2895E0u;
label_2895e0:
    // 0x2895e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2895e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2895e4:
    // 0x2895e4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2895e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2895e8:
    // 0x2895e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2895e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2895ec:
    // 0x2895ec: 0xc0a24dc  jal         func_289370
label_2895f0:
    if (ctx->pc == 0x2895F0u) {
        ctx->pc = 0x2895F0u;
            // 0x2895f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2895F4u;
        goto label_2895f4;
    }
    ctx->pc = 0x2895ECu;
    SET_GPR_U32(ctx, 31, 0x2895F4u);
    ctx->pc = 0x2895F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2895ECu;
            // 0x2895f0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289370u;
    if (runtime->hasFunction(0x289370u)) {
        auto targetFn = runtime->lookupFunction(0x289370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2895F4u; }
        if (ctx->pc != 0x2895F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289370_0x289370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2895F4u; }
        if (ctx->pc != 0x2895F4u) { return; }
    }
    ctx->pc = 0x2895F4u;
label_2895f4:
    // 0x2895f4: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_2895f8:
    if (ctx->pc == 0x2895F8u) {
        ctx->pc = 0x2895F8u;
            // 0x2895f8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2895FCu;
        goto label_2895fc;
    }
    ctx->pc = 0x2895F4u;
    {
        const bool branch_taken_0x2895f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2895F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895F4u;
            // 0x2895f8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895f4) {
            ctx->pc = 0x289704u;
            goto label_289704;
        }
    }
    ctx->pc = 0x2895FCu;
label_2895fc:
    // 0x2895fc: 0x8fc236f0  lw          $v0, 0x36F0($fp)
    ctx->pc = 0x2895fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 14064)));
label_289600:
    // 0x289600: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x289600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_289604:
    // 0x289604: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
label_289608:
    if (ctx->pc == 0x289608u) {
        ctx->pc = 0x289608u;
            // 0x289608: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x28960Cu;
        goto label_28960c;
    }
    ctx->pc = 0x289604u;
    {
        const bool branch_taken_0x289604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x289608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289604u;
            // 0x289608: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289604) {
            ctx->pc = 0x2896FCu;
            goto label_2896fc;
        }
    }
    ctx->pc = 0x28960Cu;
label_28960c:
    // 0x28960c: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
label_289610:
    if (ctx->pc == 0x289610u) {
        ctx->pc = 0x289610u;
            // 0x289610: 0x3c0601c9  lui         $a2, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)457 << 16));
        ctx->pc = 0x289614u;
        goto label_289614;
    }
    ctx->pc = 0x28960Cu;
    {
        const bool branch_taken_0x28960c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x289610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28960Cu;
            // 0x289610: 0x3c0601c9  lui         $a2, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28960c) {
            ctx->pc = 0x2896A4u;
            goto label_2896a4;
        }
    }
    ctx->pc = 0x289614u;
label_289614:
    // 0x289614: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x289614u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_289618:
    // 0x289618: 0x24c543b8  addiu       $a1, $a2, 0x43B8
    ctx->pc = 0x289618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
label_28961c:
    // 0x28961c: 0x24a6000c  addiu       $a2, $a1, 0xC
    ctx->pc = 0x28961cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_289620:
    // 0x289620: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x289620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_289624:
    // 0x289624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x289624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_289628:
    // 0x289628: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x289628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_28962c:
    // 0x28962c: 0x14730033  bne         $v1, $s3, . + 4 + (0x33 << 2)
label_289630:
    if (ctx->pc == 0x289630u) {
        ctx->pc = 0x289630u;
            // 0x289630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x289634u;
        goto label_289634;
    }
    ctx->pc = 0x28962Cu;
    {
        const bool branch_taken_0x28962c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x289630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28962Cu;
            // 0x289630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28962c) {
            ctx->pc = 0x2896FCu;
            goto label_2896fc;
        }
    }
    ctx->pc = 0x289634u;
label_289634:
    // 0x289634: 0x24be0004  addiu       $fp, $a1, 0x4
    ctx->pc = 0x289634u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_289638:
    // 0x289638: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x289638u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28963c:
    // 0x28963c: 0x24b60008  addiu       $s6, $a1, 0x8
    ctx->pc = 0x28963cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_289640:
    // 0x289640: 0x26350001  addiu       $s5, $s1, 0x1
    ctx->pc = 0x289640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_289644:
    // 0x289644: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x289644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_289648:
    // 0x289648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x289648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28964c:
    // 0x28964c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28964cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_289650:
    // 0x289650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_289654:
    if (ctx->pc == 0x289654u) {
        ctx->pc = 0x289654u;
            // 0x289654: 0x9e1821  addu        $v1, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->pc = 0x289658u;
        goto label_289658;
    }
    ctx->pc = 0x289650u;
    {
        const bool branch_taken_0x289650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289650u;
            // 0x289654: 0x9e1821  addu        $v1, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289650) {
            ctx->pc = 0x289670u;
            goto label_289670;
        }
    }
    ctx->pc = 0x289658u;
label_289658:
    // 0x289658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x289658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28965c:
    // 0x28965c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28965cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_289660:
    // 0x289660: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_289664:
    if (ctx->pc == 0x289664u) {
        ctx->pc = 0x289664u;
            // 0x289664: 0x214102a  slt         $v0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->pc = 0x289668u;
        goto label_289668;
    }
    ctx->pc = 0x289660u;
    {
        const bool branch_taken_0x289660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289660u;
            // 0x289664: 0x214102a  slt         $v0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289660) {
            ctx->pc = 0x289680u;
            goto label_289680;
        }
    }
    ctx->pc = 0x289668u;
label_289668:
    // 0x289668: 0x10000024  b           . + 4 + (0x24 << 2)
label_28966c:
    if (ctx->pc == 0x28966Cu) {
        ctx->pc = 0x28966Cu;
            // 0x28966c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x289670u;
        goto label_289670;
    }
    ctx->pc = 0x289668u;
    {
        const bool branch_taken_0x289668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289668u;
            // 0x28966c: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289668) {
            ctx->pc = 0x2896FCu;
            goto label_2896fc;
        }
    }
    ctx->pc = 0x289670u;
label_289670:
    // 0x289670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289674:
    // 0x289674: 0xc0a24ba  jal         func_2892E8
label_289678:
    if (ctx->pc == 0x289678u) {
        ctx->pc = 0x289678u;
            // 0x289678: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->pc = 0x28967Cu;
        goto label_28967c;
    }
    ctx->pc = 0x289674u;
    SET_GPR_U32(ctx, 31, 0x28967Cu);
    ctx->pc = 0x289678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289674u;
            // 0x289678: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892E8u;
    if (runtime->hasFunction(0x2892E8u)) {
        auto targetFn = runtime->lookupFunction(0x2892E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28967Cu; }
        if (ctx->pc != 0x28967Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002892E8_0x2892e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28967Cu; }
        if (ctx->pc != 0x28967Cu) { return; }
    }
    ctx->pc = 0x28967Cu;
label_28967c:
    // 0x28967c: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x28967cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_289680:
    // 0x289680: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_289684:
    if (ctx->pc == 0x289684u) {
        ctx->pc = 0x289684u;
            // 0x289684: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->pc = 0x289688u;
        goto label_289688;
    }
    ctx->pc = 0x289680u;
    {
        const bool branch_taken_0x289680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289680u;
            // 0x289684: 0x2571021  addu        $v0, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289680) {
            ctx->pc = 0x2896FCu;
            goto label_2896fc;
        }
    }
    ctx->pc = 0x289688u;
label_289688:
    // 0x289688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28968c:
    // 0x28968c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_289690:
    // 0x289690: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x289690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_289694:
    // 0x289694: 0x1073ffec  beq         $v1, $s3, . + 4 + (-0x14 << 2)
label_289698:
    if (ctx->pc == 0x289698u) {
        ctx->pc = 0x289698u;
            // 0x289698: 0x961821  addu        $v1, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->pc = 0x28969Cu;
        goto label_28969c;
    }
    ctx->pc = 0x289694u;
    {
        const bool branch_taken_0x289694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x289698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289694u;
            // 0x289698: 0x961821  addu        $v1, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289694) {
            ctx->pc = 0x289648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289648;
        }
    }
    ctx->pc = 0x28969Cu;
label_28969c:
    // 0x28969c: 0x10000018  b           . + 4 + (0x18 << 2)
label_2896a0:
    if (ctx->pc == 0x2896A0u) {
        ctx->pc = 0x2896A0u;
            // 0x2896a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2896A4u;
        goto label_2896a4;
    }
    ctx->pc = 0x28969Cu;
    {
        const bool branch_taken_0x28969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2896A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28969Cu;
            // 0x2896a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28969c) {
            ctx->pc = 0x289700u;
            goto label_289700;
        }
    }
    ctx->pc = 0x2896A4u;
label_2896a4:
    // 0x2896a4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x2896a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_2896a8:
    // 0x2896a8: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x2896a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2896ac:
    // 0x2896ac: 0x244243c0  addiu       $v0, $v0, 0x43C0
    ctx->pc = 0x2896acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
label_2896b0:
    // 0x2896b0: 0x26340001  addiu       $s4, $s1, 0x1
    ctx->pc = 0x2896b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2896b4:
    // 0x2896b4: 0x2456fffc  addiu       $s6, $v0, -0x4
    ctx->pc = 0x2896b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2896b8:
    // 0x2896b8: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x2896b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2896bc:
    // 0x2896bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2896bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2896c0:
    // 0x2896c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2896c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2896c4:
    // 0x2896c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2896c8:
    if (ctx->pc == 0x2896C8u) {
        ctx->pc = 0x2896C8u;
            // 0x2896c8: 0x2562021  addu        $a0, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->pc = 0x2896CCu;
        goto label_2896cc;
    }
    ctx->pc = 0x2896C4u;
    {
        const bool branch_taken_0x2896c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2896C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2896C4u;
            // 0x2896c8: 0x2562021  addu        $a0, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896c4) {
            ctx->pc = 0x2896ECu;
            goto label_2896ec;
        }
    }
    ctx->pc = 0x2896CCu;
label_2896cc:
    // 0x2896cc: 0xc0a24ba  jal         func_2892E8
label_2896d0:
    if (ctx->pc == 0x2896D0u) {
        ctx->pc = 0x2896D0u;
            // 0x2896d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2896D4u;
        goto label_2896d4;
    }
    ctx->pc = 0x2896CCu;
    SET_GPR_U32(ctx, 31, 0x2896D4u);
    ctx->pc = 0x2896D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2896CCu;
            // 0x2896d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892E8u;
    if (runtime->hasFunction(0x2892E8u)) {
        auto targetFn = runtime->lookupFunction(0x2892E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2896D4u; }
        if (ctx->pc != 0x2896D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002892E8_0x2892e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2896D4u; }
        if (ctx->pc != 0x2896D4u) { return; }
    }
    ctx->pc = 0x2896D4u;
label_2896d4:
    // 0x2896d4: 0x8ea336f0  lw          $v1, 0x36F0($s5)
    ctx->pc = 0x2896d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14064)));
label_2896d8:
    // 0x2896d8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2896d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2896dc:
    // 0x2896dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2896e0:
    if (ctx->pc == 0x2896E0u) {
        ctx->pc = 0x2896E0u;
            // 0x2896e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2896E4u;
        goto label_2896e4;
    }
    ctx->pc = 0x2896DCu;
    {
        const bool branch_taken_0x2896dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2896E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2896DCu;
            // 0x2896e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896dc) {
            ctx->pc = 0x289700u;
            goto label_289700;
        }
    }
    ctx->pc = 0x2896E4u;
label_2896e4:
    // 0x2896e4: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_2896e8:
    if (ctx->pc == 0x2896E8u) {
        ctx->pc = 0x2896E8u;
            // 0x2896e8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2896ECu;
        goto label_2896ec;
    }
    ctx->pc = 0x2896E4u;
    {
        const bool branch_taken_0x2896e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2896E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2896E4u;
            // 0x2896e8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896e4) {
            ctx->pc = 0x2896C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2896c0;
        }
    }
    ctx->pc = 0x2896ECu;
label_2896ec:
    // 0x2896ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2896ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2896f0:
    // 0x2896f0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2896f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2896f4:
    // 0x2896f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2896f8:
    if (ctx->pc == 0x2896F8u) {
        ctx->pc = 0x2896F8u;
            // 0x2896f8: 0xac940000  sw          $s4, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
        ctx->pc = 0x2896FCu;
        goto label_2896fc;
    }
    ctx->pc = 0x2896F4u;
    {
        const bool branch_taken_0x2896f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2896f4) {
            ctx->pc = 0x2896F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2896F4u;
            // 0x2896f8: 0xac940000  sw          $s4, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2896FCu;
            goto label_2896fc;
        }
    }
    ctx->pc = 0x2896FCu;
label_2896fc:
    // 0x2896fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2896fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289700:
    // 0x289700: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x289700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_289704:
    // 0x289704: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x289704u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_289708:
    // 0x289708: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x289708u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28970c:
    // 0x28970c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x28970cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_289710:
    // 0x289710: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x289710u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_289714:
    // 0x289714: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x289714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_289718:
    // 0x289718: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x289718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28971c:
    // 0x28971c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28971cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_289720:
    // 0x289720: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x289720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_289724:
    // 0x289724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_289728:
    // 0x289728: 0x3e00008  jr          $ra
label_28972c:
    if (ctx->pc == 0x28972Cu) {
        ctx->pc = 0x28972Cu;
            // 0x28972c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x289730u;
        goto label_fallthrough_0x289728;
    }
    ctx->pc = 0x289728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289728u;
            // 0x28972c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x289728:
    ctx->pc = 0x289730u;
    ctx->pc = 0x289730u;
}
