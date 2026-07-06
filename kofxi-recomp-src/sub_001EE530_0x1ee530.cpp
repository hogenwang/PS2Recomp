#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EE530
// Address: 0x1ee530 - 0x1ee8e8
void sub_001EE530_0x1ee530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE530_0x1ee530");
#endif

    switch (ctx->pc) {
        case 0x1ee530u: goto label_1ee530;
        case 0x1ee534u: goto label_1ee534;
        case 0x1ee538u: goto label_1ee538;
        case 0x1ee53cu: goto label_1ee53c;
        case 0x1ee540u: goto label_1ee540;
        case 0x1ee544u: goto label_1ee544;
        case 0x1ee548u: goto label_1ee548;
        case 0x1ee54cu: goto label_1ee54c;
        case 0x1ee550u: goto label_1ee550;
        case 0x1ee554u: goto label_1ee554;
        case 0x1ee558u: goto label_1ee558;
        case 0x1ee55cu: goto label_1ee55c;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee564u: goto label_1ee564;
        case 0x1ee568u: goto label_1ee568;
        case 0x1ee56cu: goto label_1ee56c;
        case 0x1ee570u: goto label_1ee570;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee578u: goto label_1ee578;
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee580u: goto label_1ee580;
        case 0x1ee584u: goto label_1ee584;
        case 0x1ee588u: goto label_1ee588;
        case 0x1ee58cu: goto label_1ee58c;
        case 0x1ee590u: goto label_1ee590;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee598u: goto label_1ee598;
        case 0x1ee59cu: goto label_1ee59c;
        case 0x1ee5a0u: goto label_1ee5a0;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee5a8u: goto label_1ee5a8;
        case 0x1ee5acu: goto label_1ee5ac;
        case 0x1ee5b0u: goto label_1ee5b0;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5b8u: goto label_1ee5b8;
        case 0x1ee5bcu: goto label_1ee5bc;
        case 0x1ee5c0u: goto label_1ee5c0;
        case 0x1ee5c4u: goto label_1ee5c4;
        case 0x1ee5c8u: goto label_1ee5c8;
        case 0x1ee5ccu: goto label_1ee5cc;
        case 0x1ee5d0u: goto label_1ee5d0;
        case 0x1ee5d4u: goto label_1ee5d4;
        case 0x1ee5d8u: goto label_1ee5d8;
        case 0x1ee5dcu: goto label_1ee5dc;
        case 0x1ee5e0u: goto label_1ee5e0;
        case 0x1ee5e4u: goto label_1ee5e4;
        case 0x1ee5e8u: goto label_1ee5e8;
        case 0x1ee5ecu: goto label_1ee5ec;
        case 0x1ee5f0u: goto label_1ee5f0;
        case 0x1ee5f4u: goto label_1ee5f4;
        case 0x1ee5f8u: goto label_1ee5f8;
        case 0x1ee5fcu: goto label_1ee5fc;
        case 0x1ee600u: goto label_1ee600;
        case 0x1ee604u: goto label_1ee604;
        case 0x1ee608u: goto label_1ee608;
        case 0x1ee60cu: goto label_1ee60c;
        case 0x1ee610u: goto label_1ee610;
        case 0x1ee614u: goto label_1ee614;
        case 0x1ee618u: goto label_1ee618;
        case 0x1ee61cu: goto label_1ee61c;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee624u: goto label_1ee624;
        case 0x1ee628u: goto label_1ee628;
        case 0x1ee62cu: goto label_1ee62c;
        case 0x1ee630u: goto label_1ee630;
        case 0x1ee634u: goto label_1ee634;
        case 0x1ee638u: goto label_1ee638;
        case 0x1ee63cu: goto label_1ee63c;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee644u: goto label_1ee644;
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee64cu: goto label_1ee64c;
        case 0x1ee650u: goto label_1ee650;
        case 0x1ee654u: goto label_1ee654;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee65cu: goto label_1ee65c;
        case 0x1ee660u: goto label_1ee660;
        case 0x1ee664u: goto label_1ee664;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee66cu: goto label_1ee66c;
        case 0x1ee670u: goto label_1ee670;
        case 0x1ee674u: goto label_1ee674;
        case 0x1ee678u: goto label_1ee678;
        case 0x1ee67cu: goto label_1ee67c;
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee684u: goto label_1ee684;
        case 0x1ee688u: goto label_1ee688;
        case 0x1ee68cu: goto label_1ee68c;
        case 0x1ee690u: goto label_1ee690;
        case 0x1ee694u: goto label_1ee694;
        case 0x1ee698u: goto label_1ee698;
        case 0x1ee69cu: goto label_1ee69c;
        case 0x1ee6a0u: goto label_1ee6a0;
        case 0x1ee6a4u: goto label_1ee6a4;
        case 0x1ee6a8u: goto label_1ee6a8;
        case 0x1ee6acu: goto label_1ee6ac;
        case 0x1ee6b0u: goto label_1ee6b0;
        case 0x1ee6b4u: goto label_1ee6b4;
        case 0x1ee6b8u: goto label_1ee6b8;
        case 0x1ee6bcu: goto label_1ee6bc;
        case 0x1ee6c0u: goto label_1ee6c0;
        case 0x1ee6c4u: goto label_1ee6c4;
        case 0x1ee6c8u: goto label_1ee6c8;
        case 0x1ee6ccu: goto label_1ee6cc;
        case 0x1ee6d0u: goto label_1ee6d0;
        case 0x1ee6d4u: goto label_1ee6d4;
        case 0x1ee6d8u: goto label_1ee6d8;
        case 0x1ee6dcu: goto label_1ee6dc;
        case 0x1ee6e0u: goto label_1ee6e0;
        case 0x1ee6e4u: goto label_1ee6e4;
        case 0x1ee6e8u: goto label_1ee6e8;
        case 0x1ee6ecu: goto label_1ee6ec;
        case 0x1ee6f0u: goto label_1ee6f0;
        case 0x1ee6f4u: goto label_1ee6f4;
        case 0x1ee6f8u: goto label_1ee6f8;
        case 0x1ee6fcu: goto label_1ee6fc;
        case 0x1ee700u: goto label_1ee700;
        case 0x1ee704u: goto label_1ee704;
        case 0x1ee708u: goto label_1ee708;
        case 0x1ee70cu: goto label_1ee70c;
        case 0x1ee710u: goto label_1ee710;
        case 0x1ee714u: goto label_1ee714;
        case 0x1ee718u: goto label_1ee718;
        case 0x1ee71cu: goto label_1ee71c;
        case 0x1ee720u: goto label_1ee720;
        case 0x1ee724u: goto label_1ee724;
        case 0x1ee728u: goto label_1ee728;
        case 0x1ee72cu: goto label_1ee72c;
        case 0x1ee730u: goto label_1ee730;
        case 0x1ee734u: goto label_1ee734;
        case 0x1ee738u: goto label_1ee738;
        case 0x1ee73cu: goto label_1ee73c;
        case 0x1ee740u: goto label_1ee740;
        case 0x1ee744u: goto label_1ee744;
        case 0x1ee748u: goto label_1ee748;
        case 0x1ee74cu: goto label_1ee74c;
        case 0x1ee750u: goto label_1ee750;
        case 0x1ee754u: goto label_1ee754;
        case 0x1ee758u: goto label_1ee758;
        case 0x1ee75cu: goto label_1ee75c;
        case 0x1ee760u: goto label_1ee760;
        case 0x1ee764u: goto label_1ee764;
        case 0x1ee768u: goto label_1ee768;
        case 0x1ee76cu: goto label_1ee76c;
        case 0x1ee770u: goto label_1ee770;
        case 0x1ee774u: goto label_1ee774;
        case 0x1ee778u: goto label_1ee778;
        case 0x1ee77cu: goto label_1ee77c;
        case 0x1ee780u: goto label_1ee780;
        case 0x1ee784u: goto label_1ee784;
        case 0x1ee788u: goto label_1ee788;
        case 0x1ee78cu: goto label_1ee78c;
        case 0x1ee790u: goto label_1ee790;
        case 0x1ee794u: goto label_1ee794;
        case 0x1ee798u: goto label_1ee798;
        case 0x1ee79cu: goto label_1ee79c;
        case 0x1ee7a0u: goto label_1ee7a0;
        case 0x1ee7a4u: goto label_1ee7a4;
        case 0x1ee7a8u: goto label_1ee7a8;
        case 0x1ee7acu: goto label_1ee7ac;
        case 0x1ee7b0u: goto label_1ee7b0;
        case 0x1ee7b4u: goto label_1ee7b4;
        case 0x1ee7b8u: goto label_1ee7b8;
        case 0x1ee7bcu: goto label_1ee7bc;
        case 0x1ee7c0u: goto label_1ee7c0;
        case 0x1ee7c4u: goto label_1ee7c4;
        case 0x1ee7c8u: goto label_1ee7c8;
        case 0x1ee7ccu: goto label_1ee7cc;
        case 0x1ee7d0u: goto label_1ee7d0;
        case 0x1ee7d4u: goto label_1ee7d4;
        case 0x1ee7d8u: goto label_1ee7d8;
        case 0x1ee7dcu: goto label_1ee7dc;
        case 0x1ee7e0u: goto label_1ee7e0;
        case 0x1ee7e4u: goto label_1ee7e4;
        case 0x1ee7e8u: goto label_1ee7e8;
        case 0x1ee7ecu: goto label_1ee7ec;
        case 0x1ee7f0u: goto label_1ee7f0;
        case 0x1ee7f4u: goto label_1ee7f4;
        case 0x1ee7f8u: goto label_1ee7f8;
        case 0x1ee7fcu: goto label_1ee7fc;
        case 0x1ee800u: goto label_1ee800;
        case 0x1ee804u: goto label_1ee804;
        case 0x1ee808u: goto label_1ee808;
        case 0x1ee80cu: goto label_1ee80c;
        case 0x1ee810u: goto label_1ee810;
        case 0x1ee814u: goto label_1ee814;
        case 0x1ee818u: goto label_1ee818;
        case 0x1ee81cu: goto label_1ee81c;
        case 0x1ee820u: goto label_1ee820;
        case 0x1ee824u: goto label_1ee824;
        case 0x1ee828u: goto label_1ee828;
        case 0x1ee82cu: goto label_1ee82c;
        case 0x1ee830u: goto label_1ee830;
        case 0x1ee834u: goto label_1ee834;
        case 0x1ee838u: goto label_1ee838;
        case 0x1ee83cu: goto label_1ee83c;
        case 0x1ee840u: goto label_1ee840;
        case 0x1ee844u: goto label_1ee844;
        case 0x1ee848u: goto label_1ee848;
        case 0x1ee84cu: goto label_1ee84c;
        case 0x1ee850u: goto label_1ee850;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee858u: goto label_1ee858;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee860u: goto label_1ee860;
        case 0x1ee864u: goto label_1ee864;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee86cu: goto label_1ee86c;
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee874u: goto label_1ee874;
        case 0x1ee878u: goto label_1ee878;
        case 0x1ee87cu: goto label_1ee87c;
        case 0x1ee880u: goto label_1ee880;
        case 0x1ee884u: goto label_1ee884;
        case 0x1ee888u: goto label_1ee888;
        case 0x1ee88cu: goto label_1ee88c;
        case 0x1ee890u: goto label_1ee890;
        case 0x1ee894u: goto label_1ee894;
        case 0x1ee898u: goto label_1ee898;
        case 0x1ee89cu: goto label_1ee89c;
        case 0x1ee8a0u: goto label_1ee8a0;
        case 0x1ee8a4u: goto label_1ee8a4;
        case 0x1ee8a8u: goto label_1ee8a8;
        case 0x1ee8acu: goto label_1ee8ac;
        case 0x1ee8b0u: goto label_1ee8b0;
        case 0x1ee8b4u: goto label_1ee8b4;
        case 0x1ee8b8u: goto label_1ee8b8;
        case 0x1ee8bcu: goto label_1ee8bc;
        case 0x1ee8c0u: goto label_1ee8c0;
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8c8u: goto label_1ee8c8;
        case 0x1ee8ccu: goto label_1ee8cc;
        case 0x1ee8d0u: goto label_1ee8d0;
        case 0x1ee8d4u: goto label_1ee8d4;
        case 0x1ee8d8u: goto label_1ee8d8;
        case 0x1ee8dcu: goto label_1ee8dc;
        case 0x1ee8e0u: goto label_1ee8e0;
        case 0x1ee8e4u: goto label_1ee8e4;
        default: break;
    }

    ctx->pc = 0x1ee530u;

label_1ee530:
    // 0x1ee530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee534:
    // 0x1ee534: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ee534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ee538:
    // 0x1ee538: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ee538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee53c:
    // 0x1ee53c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ee53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ee540:
    // 0x1ee540: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ee540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee544:
    // 0x1ee544: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1ee544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ee548:
    // 0x1ee548: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1ee548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ee54c:
    // 0x1ee54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ee550:
    // 0x1ee550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ee550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ee554:
    // 0x1ee554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee558:
    // 0x1ee558: 0xc07baba  jal         func_1EEAE8
label_1ee55c:
    if (ctx->pc == 0x1EE55Cu) {
        ctx->pc = 0x1EE55Cu;
            // 0x1ee55c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE560u;
        goto label_1ee560;
    }
    ctx->pc = 0x1EE558u;
    SET_GPR_U32(ctx, 31, 0x1EE560u);
    ctx->pc = 0x1EE55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE558u;
            // 0x1ee55c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEAE8u;
    if (runtime->hasFunction(0x1EEAE8u)) {
        auto targetFn = runtime->lookupFunction(0x1EEAE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE560u; }
        if (ctx->pc != 0x1EE560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEAE8_0x1eeae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE560u; }
        if (ctx->pc != 0x1EE560u) { return; }
    }
    ctx->pc = 0x1EE560u;
label_1ee560:
    // 0x1ee560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee564:
    // 0x1ee564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee568:
    // 0x1ee568: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_1ee56c:
    if (ctx->pc == 0x1EE56Cu) {
        ctx->pc = 0x1EE56Cu;
            // 0x1ee56c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE570u;
        goto label_1ee570;
    }
    ctx->pc = 0x1EE568u;
    {
        const bool branch_taken_0x1ee568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee568) {
            ctx->pc = 0x1EE56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE568u;
            // 0x1ee56c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE584u;
            goto label_1ee584;
        }
    }
    ctx->pc = 0x1EE570u;
label_1ee570:
    // 0x1ee570: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1ee574:
    if (ctx->pc == 0x1EE574u) {
        ctx->pc = 0x1EE574u;
            // 0x1ee574: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE578u;
        goto label_1ee578;
    }
    ctx->pc = 0x1EE570u;
    {
        const bool branch_taken_0x1ee570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE570u;
            // 0x1ee574: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee570) {
            ctx->pc = 0x1EE580u;
            goto label_1ee580;
        }
    }
    ctx->pc = 0x1EE578u;
label_1ee578:
    // 0x1ee578: 0x240f809  jalr        $s2
label_1ee57c:
    if (ctx->pc == 0x1EE57Cu) {
        ctx->pc = 0x1EE57Cu;
            // 0x1ee57c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE580u;
        goto label_1ee580;
    }
    ctx->pc = 0x1EE578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1EE580u);
        ctx->pc = 0x1EE57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE578u;
            // 0x1ee57c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE580u; }
            if (ctx->pc != 0x1EE580u) { return; }
        }
        }
    }
    ctx->pc = 0x1EE580u;
label_1ee580:
    // 0x1ee580: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee584:
    // 0x1ee584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee588:
    // 0x1ee588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ee588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ee58c:
    // 0x1ee58c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ee58cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee590:
    // 0x1ee590: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ee590u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ee594:
    // 0x1ee594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee598:
    // 0x1ee598: 0x3e00008  jr          $ra
label_1ee59c:
    if (ctx->pc == 0x1EE59Cu) {
        ctx->pc = 0x1EE59Cu;
            // 0x1ee59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EE5A0u;
        goto label_1ee5a0;
    }
    ctx->pc = 0x1EE598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE598u;
            // 0x1ee59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE5A0u;
label_1ee5a0:
    // 0x1ee5a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ee5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ee5a4:
    // 0x1ee5a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ee5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ee5a8:
    // 0x1ee5a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ee5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5ac:
    // 0x1ee5ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ee5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ee5b0:
    // 0x1ee5b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ee5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ee5b4:
    // 0x1ee5b4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ee5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1ee5b8:
    // 0x1ee5b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ee5b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5bc:
    // 0x1ee5bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ee5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1ee5c0:
    // 0x1ee5c0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1ee5c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5c4:
    // 0x1ee5c4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1ee5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1ee5c8:
    // 0x1ee5c8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1ee5c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5cc:
    // 0x1ee5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ee5d0:
    // 0x1ee5d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ee5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ee5d4:
    // 0x1ee5d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ee5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1ee5d8:
    // 0x1ee5d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ee5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1ee5dc:
    // 0x1ee5dc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ee5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1ee5e0:
    // 0x1ee5e0: 0xc07ec02  jal         func_1FB008
label_1ee5e4:
    if (ctx->pc == 0x1EE5E4u) {
        ctx->pc = 0x1EE5E4u;
            // 0x1ee5e4: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5E8u;
        goto label_1ee5e8;
    }
    ctx->pc = 0x1EE5E0u;
    SET_GPR_U32(ctx, 31, 0x1EE5E8u);
    ctx->pc = 0x1EE5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5E0u;
            // 0x1ee5e4: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5E8u; }
        if (ctx->pc != 0x1EE5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE5E8u; }
        if (ctx->pc != 0x1EE5E8u) { return; }
    }
    ctx->pc = 0x1EE5E8u;
label_1ee5e8:
    // 0x1ee5e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ee5ec:
    if (ctx->pc == 0x1EE5ECu) {
        ctx->pc = 0x1EE5ECu;
            // 0x1ee5ec: 0x26b61fcc  addiu       $s6, $s5, 0x1FCC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8140));
        ctx->pc = 0x1EE5F0u;
        goto label_1ee5f0;
    }
    ctx->pc = 0x1EE5E8u;
    {
        const bool branch_taken_0x1ee5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5E8u;
            // 0x1ee5ec: 0x26b61fcc  addiu       $s6, $s5, 0x1FCC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5e8) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1EE5F0u;
label_1ee5f0:
    // 0x1ee5f0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1ee5f4:
    if (ctx->pc == 0x1EE5F4u) {
        ctx->pc = 0x1EE5F4u;
            // 0x1ee5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EE5F8u;
        goto label_1ee5f8;
    }
    ctx->pc = 0x1EE5F0u;
    {
        const bool branch_taken_0x1ee5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE5F0u;
            // 0x1ee5f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee5f0) {
            ctx->pc = 0x1EE6E0u;
            goto label_1ee6e0;
        }
    }
    ctx->pc = 0x1EE5F8u;
label_1ee5f8:
    // 0x1ee5f8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1ee5f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ee5fc:
    // 0x1ee5fc: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x1ee5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1ee600:
    // 0x1ee600: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1ee604:
    // 0x1ee604: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_1ee608:
    if (ctx->pc == 0x1EE608u) {
        ctx->pc = 0x1EE608u;
            // 0x1ee608: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->pc = 0x1EE60Cu;
        goto label_1ee60c;
    }
    ctx->pc = 0x1EE604u;
    {
        const bool branch_taken_0x1ee604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1ee604) {
            ctx->pc = 0x1EE608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE604u;
            // 0x1ee608: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE60Cu;
            goto label_1ee60c;
        }
    }
    ctx->pc = 0x1EE60Cu;
label_1ee60c:
    // 0x1ee60c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1ee60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1ee610:
    // 0x1ee610: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_1ee614:
    if (ctx->pc == 0x1EE614u) {
        ctx->pc = 0x1EE614u;
            // 0x1ee614: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->pc = 0x1EE618u;
        goto label_1ee618;
    }
    ctx->pc = 0x1EE610u;
    {
        const bool branch_taken_0x1ee610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1ee610) {
            ctx->pc = 0x1EE614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE610u;
            // 0x1ee614: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE618u;
            goto label_1ee618;
        }
    }
    ctx->pc = 0x1EE618u;
label_1ee618:
    // 0x1ee618: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ee618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ee61c:
    // 0x1ee61c: 0xc07ec02  jal         func_1FB008
label_1ee620:
    if (ctx->pc == 0x1EE620u) {
        ctx->pc = 0x1EE620u;
            // 0x1ee620: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1EE624u;
        goto label_1ee624;
    }
    ctx->pc = 0x1EE61Cu;
    SET_GPR_U32(ctx, 31, 0x1EE624u);
    ctx->pc = 0x1EE620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE61Cu;
            // 0x1ee620: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE624u; }
        if (ctx->pc != 0x1EE624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE624u; }
        if (ctx->pc != 0x1EE624u) { return; }
    }
    ctx->pc = 0x1EE624u;
label_1ee624:
    // 0x1ee624: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ee624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee628:
    // 0x1ee628: 0x1292000e  beq         $s4, $s2, . + 4 + (0xE << 2)
label_1ee62c:
    if (ctx->pc == 0x1EE62Cu) {
        ctx->pc = 0x1EE62Cu;
            // 0x1ee62c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE630u;
        goto label_1ee630;
    }
    ctx->pc = 0x1EE628u;
    {
        const bool branch_taken_0x1ee628 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x1EE62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE628u;
            // 0x1ee62c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee628) {
            ctx->pc = 0x1EE664u;
            goto label_1ee664;
        }
    }
    ctx->pc = 0x1EE630u;
label_1ee630:
    // 0x1ee630: 0xc07ec02  jal         func_1FB008
label_1ee634:
    if (ctx->pc == 0x1EE634u) {
        ctx->pc = 0x1EE634u;
            // 0x1ee634: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x1EE638u;
        goto label_1ee638;
    }
    ctx->pc = 0x1EE630u;
    SET_GPR_U32(ctx, 31, 0x1EE638u);
    ctx->pc = 0x1EE634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE630u;
            // 0x1ee634: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE638u; }
        if (ctx->pc != 0x1EE638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE638u; }
        if (ctx->pc != 0x1EE638u) { return; }
    }
    ctx->pc = 0x1EE638u;
label_1ee638:
    // 0x1ee638: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1ee63c:
    if (ctx->pc == 0x1EE63Cu) {
        ctx->pc = 0x1EE63Cu;
            // 0x1ee63c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1EE640u;
        goto label_1ee640;
    }
    ctx->pc = 0x1EE638u;
    {
        const bool branch_taken_0x1ee638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee638) {
            ctx->pc = 0x1EE63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE638u;
            // 0x1ee63c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE658u;
            goto label_1ee658;
        }
    }
    ctx->pc = 0x1EE640u;
label_1ee640:
    // 0x1ee640: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ee640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ee644:
    // 0x1ee644: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ee644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ee648:
    // 0x1ee648: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1ee64c:
    if (ctx->pc == 0x1EE64Cu) {
        ctx->pc = 0x1EE64Cu;
            // 0x1ee64c: 0xae140038  sw          $s4, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
        ctx->pc = 0x1EE650u;
        goto label_1ee650;
    }
    ctx->pc = 0x1EE648u;
    {
        const bool branch_taken_0x1ee648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee648) {
            ctx->pc = 0x1EE64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE648u;
            // 0x1ee64c: 0xae140038  sw          $s4, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE664u;
            goto label_1ee664;
        }
    }
    ctx->pc = 0x1EE650u;
label_1ee650:
    // 0x1ee650: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ee654:
    if (ctx->pc == 0x1EE654u) {
        ctx->pc = 0x1EE654u;
            // 0x1ee654: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1EE658u;
        goto label_1ee658;
    }
    ctx->pc = 0x1EE650u;
    {
        const bool branch_taken_0x1ee650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE650u;
            // 0x1ee654: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee650) {
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE658u;
label_1ee658:
    // 0x1ee658: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
label_1ee65c:
    if (ctx->pc == 0x1EE65Cu) {
        ctx->pc = 0x1EE65Cu;
            // 0x1ee65c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1EE660u;
        goto label_1ee660;
    }
    ctx->pc = 0x1EE658u;
    {
        const bool branch_taken_0x1ee658 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee658) {
            ctx->pc = 0x1EE65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE658u;
            // 0x1ee65c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE668u;
            goto label_1ee668;
        }
    }
    ctx->pc = 0x1EE660u;
label_1ee660:
    // 0x1ee660: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x1ee660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
label_1ee664:
    // 0x1ee664: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1ee664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1ee668:
    // 0x1ee668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee66c:
    // 0x1ee66c: 0x1471001c  bne         $v1, $s1, . + 4 + (0x1C << 2)
label_1ee670:
    if (ctx->pc == 0x1EE670u) {
        ctx->pc = 0x1EE670u;
            // 0x1ee670: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->pc = 0x1EE674u;
        goto label_1ee674;
    }
    ctx->pc = 0x1EE66Cu;
    {
        const bool branch_taken_0x1ee66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EE670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE66Cu;
            // 0x1ee670: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee66c) {
            ctx->pc = 0x1EE6E0u;
            goto label_1ee6e0;
        }
    }
    ctx->pc = 0x1EE674u;
label_1ee674:
    // 0x1ee674: 0x662000a  bltzl       $s3, . + 4 + (0xA << 2)
label_1ee678:
    if (ctx->pc == 0x1EE678u) {
        ctx->pc = 0x1EE678u;
            // 0x1ee678: 0x8ec50018  lw          $a1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->pc = 0x1EE67Cu;
        goto label_1ee67c;
    }
    ctx->pc = 0x1EE674u;
    {
        const bool branch_taken_0x1ee674 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x1ee674) {
            ctx->pc = 0x1EE678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE674u;
            // 0x1ee678: 0x8ec50018  lw          $a1, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE6A0u;
            goto label_1ee6a0;
        }
    }
    ctx->pc = 0x1EE67Cu;
label_1ee67c:
    // 0x1ee67c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1ee67cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee680:
    // 0x1ee680: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1ee680u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1ee684:
    // 0x1ee684: 0x262202a  slt         $a0, $s3, $v0
    ctx->pc = 0x1ee684u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ee688:
    // 0x1ee688: 0x263282a  slt         $a1, $s3, $v1
    ctx->pc = 0x1ee688u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee68c:
    // 0x1ee68c: 0x264100b  movn        $v0, $s3, $a0
    ctx->pc = 0x1ee68cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
label_1ee690:
    // 0x1ee690: 0x265180b  movn        $v1, $s3, $a1
    ctx->pc = 0x1ee690u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
label_1ee694:
    // 0x1ee694: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1ee694u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_1ee698:
    // 0x1ee698: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x1ee698u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
label_1ee69c:
    // 0x1ee69c: 0x8ec50018  lw          $a1, 0x18($s6)
    ctx->pc = 0x1ee69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_1ee6a0:
    // 0x1ee6a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ee6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6a4:
    // 0x1ee6a4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ee6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6a8:
    // 0x1ee6a8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ee6a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ee6ac:
    // 0x1ee6ac: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1ee6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6b0:
    // 0x1ee6b0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ee6b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee6b4:
    // 0x1ee6b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ee6b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee6b8:
    // 0x1ee6b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ee6b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ee6bc:
    // 0x1ee6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee6c0:
    // 0x1ee6c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ee6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ee6c4:
    // 0x1ee6c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ee6c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee6c8:
    // 0x1ee6c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ee6c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee6cc:
    // 0x1ee6cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ee6ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ee6d0:
    // 0x1ee6d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ee6d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee6d4:
    // 0x1ee6d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ee6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1ee6d8:
    // 0x1ee6d8: 0x807bb02  j           func_1EEC08
label_1ee6dc:
    if (ctx->pc == 0x1EE6DCu) {
        ctx->pc = 0x1EE6DCu;
            // 0x1ee6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1EE6E0u;
        goto label_1ee6e0;
    }
    ctx->pc = 0x1EE6D8u;
    ctx->pc = 0x1EE6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE6D8u;
            // 0x1ee6dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC08u;
    if (runtime->hasFunction(0x1EEC08u)) {
        auto targetFn = runtime->lookupFunction(0x1EEC08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001EEC08_0x1eec08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1EE6E0u;
label_1ee6e0:
    // 0x1ee6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee6e4:
    // 0x1ee6e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ee6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ee6e8:
    // 0x1ee6e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ee6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee6ec:
    // 0x1ee6ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ee6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ee6f0:
    // 0x1ee6f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ee6f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee6f4:
    // 0x1ee6f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ee6f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ee6f8:
    // 0x1ee6f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ee6f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee6fc:
    // 0x1ee6fc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ee6fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ee700:
    // 0x1ee700: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ee700u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee704:
    // 0x1ee704: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ee704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1ee708:
    // 0x1ee708: 0x3e00008  jr          $ra
label_1ee70c:
    if (ctx->pc == 0x1EE70Cu) {
        ctx->pc = 0x1EE70Cu;
            // 0x1ee70c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1EE710u;
        goto label_1ee710;
    }
    ctx->pc = 0x1EE708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE708u;
            // 0x1ee70c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE710u;
label_1ee710:
    // 0x1ee710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ee714:
    // 0x1ee714: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ee714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1ee718:
    // 0x1ee718: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ee718u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee71c:
    // 0x1ee71c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ee71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ee720:
    // 0x1ee720: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ee720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ee724:
    // 0x1ee724: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ee724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ee728:
    // 0x1ee728: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ee728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ee72c:
    // 0x1ee72c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ee72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1ee730:
    // 0x1ee730: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ee730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee734:
    // 0x1ee734: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1ee734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1ee738:
    // 0x1ee738: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1ee738u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ee73c:
    // 0x1ee73c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ee740:
    // 0x1ee740: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ee740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ee744:
    // 0x1ee744: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ee744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1ee748:
    // 0x1ee748: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ee748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1ee74c:
    // 0x1ee74c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ee74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1ee750:
    // 0x1ee750: 0xc07ec02  jal         func_1FB008
label_1ee754:
    if (ctx->pc == 0x1EE754u) {
        ctx->pc = 0x1EE754u;
            // 0x1ee754: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE758u;
        goto label_1ee758;
    }
    ctx->pc = 0x1EE750u;
    SET_GPR_U32(ctx, 31, 0x1EE758u);
    ctx->pc = 0x1EE754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE750u;
            // 0x1ee754: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE758u; }
        if (ctx->pc != 0x1EE758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE758u; }
        if (ctx->pc != 0x1EE758u) { return; }
    }
    ctx->pc = 0x1EE758u;
label_1ee758:
    // 0x1ee758: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ee75c:
    if (ctx->pc == 0x1EE75Cu) {
        ctx->pc = 0x1EE75Cu;
            // 0x1ee75c: 0x26371fcc  addiu       $s7, $s1, 0x1FCC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8140));
        ctx->pc = 0x1EE760u;
        goto label_1ee760;
    }
    ctx->pc = 0x1EE758u;
    {
        const bool branch_taken_0x1ee758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE758u;
            // 0x1ee75c: 0x26371fcc  addiu       $s7, $s1, 0x1FCC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee758) {
            ctx->pc = 0x1EE768u;
            goto label_1ee768;
        }
    }
    ctx->pc = 0x1EE760u;
label_1ee760:
    // 0x1ee760: 0x10000055  b           . + 4 + (0x55 << 2)
label_1ee764:
    if (ctx->pc == 0x1EE764u) {
        ctx->pc = 0x1EE764u;
            // 0x1ee764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EE768u;
        goto label_1ee768;
    }
    ctx->pc = 0x1EE760u;
    {
        const bool branch_taken_0x1ee760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE760u;
            // 0x1ee764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee760) {
            ctx->pc = 0x1EE8B8u;
            goto label_1ee8b8;
        }
    }
    ctx->pc = 0x1EE768u;
label_1ee768:
    // 0x1ee768: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1ee768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ee76c:
    // 0x1ee76c: 0x8ef00008  lw          $s0, 0x8($s7)
    ctx->pc = 0x1ee76cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_1ee770:
    // 0x1ee770: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1ee770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1ee774:
    // 0x1ee774: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
label_1ee778:
    if (ctx->pc == 0x1EE778u) {
        ctx->pc = 0x1EE778u;
            // 0x1ee778: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1EE77Cu;
        goto label_1ee77c;
    }
    ctx->pc = 0x1EE774u;
    {
        const bool branch_taken_0x1ee774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1ee774) {
            ctx->pc = 0x1EE778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE774u;
            // 0x1ee778: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE790u;
            goto label_1ee790;
        }
    }
    ctx->pc = 0x1EE77Cu;
label_1ee77c:
    // 0x1ee77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee780:
    // 0x1ee780: 0xc07ba3a  jal         func_1EE8E8
label_1ee784:
    if (ctx->pc == 0x1EE784u) {
        ctx->pc = 0x1EE784u;
            // 0x1ee784: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE788u;
        goto label_1ee788;
    }
    ctx->pc = 0x1EE780u;
    SET_GPR_U32(ctx, 31, 0x1EE788u);
    ctx->pc = 0x1EE784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE780u;
            // 0x1ee784: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE8E8u;
    if (runtime->hasFunction(0x1EE8E8u)) {
        auto targetFn = runtime->lookupFunction(0x1EE8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE788u; }
        if (ctx->pc != 0x1EE788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE8E8_0x1ee8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE788u; }
        if (ctx->pc != 0x1EE788u) { return; }
    }
    ctx->pc = 0x1EE788u;
label_1ee788:
    // 0x1ee788: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1ee788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1ee78c:
    // 0x1ee78c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ee78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1ee790:
    // 0x1ee790: 0x50550001  beql        $v0, $s5, . + 4 + (0x1 << 2)
label_1ee794:
    if (ctx->pc == 0x1EE794u) {
        ctx->pc = 0x1EE794u;
            // 0x1ee794: 0xae16002c  sw          $s6, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
        ctx->pc = 0x1EE798u;
        goto label_1ee798;
    }
    ctx->pc = 0x1EE790u;
    {
        const bool branch_taken_0x1ee790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1ee790) {
            ctx->pc = 0x1EE794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE790u;
            // 0x1ee794: 0xae16002c  sw          $s6, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE798u;
            goto label_1ee798;
        }
    }
    ctx->pc = 0x1EE798u;
label_1ee798:
    // 0x1ee798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee79c:
    // 0x1ee79c: 0xc07ec02  jal         func_1FB008
label_1ee7a0:
    if (ctx->pc == 0x1EE7A0u) {
        ctx->pc = 0x1EE7A0u;
            // 0x1ee7a0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EE7A4u;
        goto label_1ee7a4;
    }
    ctx->pc = 0x1EE79Cu;
    SET_GPR_U32(ctx, 31, 0x1EE7A4u);
    ctx->pc = 0x1EE7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE79Cu;
            // 0x1ee7a0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7A4u; }
        if (ctx->pc != 0x1EE7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7A4u; }
        if (ctx->pc != 0x1EE7A4u) { return; }
    }
    ctx->pc = 0x1EE7A4u;
label_1ee7a4:
    // 0x1ee7a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ee7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee7a8:
    // 0x1ee7a8: 0x12550025  beq         $s2, $s5, . + 4 + (0x25 << 2)
label_1ee7ac:
    if (ctx->pc == 0x1EE7ACu) {
        ctx->pc = 0x1EE7ACu;
            // 0x1ee7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7B0u;
        goto label_1ee7b0;
    }
    ctx->pc = 0x1EE7A8u;
    {
        const bool branch_taken_0x1ee7a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x1EE7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7A8u;
            // 0x1ee7ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7a8) {
            ctx->pc = 0x1EE840u;
            goto label_1ee840;
        }
    }
    ctx->pc = 0x1EE7B0u;
label_1ee7b0:
    // 0x1ee7b0: 0xc07ec02  jal         func_1FB008
label_1ee7b4:
    if (ctx->pc == 0x1EE7B4u) {
        ctx->pc = 0x1EE7B4u;
            // 0x1ee7b4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x1EE7B8u;
        goto label_1ee7b8;
    }
    ctx->pc = 0x1EE7B0u;
    SET_GPR_U32(ctx, 31, 0x1EE7B8u);
    ctx->pc = 0x1EE7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7B0u;
            // 0x1ee7b4: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7B8u; }
        if (ctx->pc != 0x1EE7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE7B8u; }
        if (ctx->pc != 0x1EE7B8u) { return; }
    }
    ctx->pc = 0x1EE7B8u;
label_1ee7b8:
    // 0x1ee7b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1ee7bc:
    if (ctx->pc == 0x1EE7BCu) {
        ctx->pc = 0x1EE7BCu;
            // 0x1ee7bc: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1EE7C0u;
        goto label_1ee7c0;
    }
    ctx->pc = 0x1EE7B8u;
    {
        const bool branch_taken_0x1ee7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee7b8) {
            ctx->pc = 0x1EE7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7B8u;
            // 0x1ee7bc: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE7D8u;
            goto label_1ee7d8;
        }
    }
    ctx->pc = 0x1EE7C0u;
label_1ee7c0:
    // 0x1ee7c0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ee7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ee7c4:
    // 0x1ee7c4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1ee7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ee7c8:
    // 0x1ee7c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ee7cc:
    if (ctx->pc == 0x1EE7CCu) {
        ctx->pc = 0x1EE7CCu;
            // 0x1ee7cc: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x1EE7D0u;
        goto label_1ee7d0;
    }
    ctx->pc = 0x1EE7C8u;
    {
        const bool branch_taken_0x1ee7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7C8u;
            // 0x1ee7cc: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7c8) {
            ctx->pc = 0x1EE7E0u;
            goto label_1ee7e0;
        }
    }
    ctx->pc = 0x1EE7D0u;
label_1ee7d0:
    // 0x1ee7d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1ee7d4:
    if (ctx->pc == 0x1EE7D4u) {
        ctx->pc = 0x1EE7D4u;
            // 0x1ee7d4: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1EE7D8u;
        goto label_1ee7d8;
    }
    ctx->pc = 0x1EE7D0u;
    {
        const bool branch_taken_0x1ee7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7D0u;
            // 0x1ee7d4: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d0) {
            ctx->pc = 0x1EE848u;
            goto label_1ee848;
        }
    }
    ctx->pc = 0x1EE7D8u;
label_1ee7d8:
    // 0x1ee7d8: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
label_1ee7dc:
    if (ctx->pc == 0x1EE7DCu) {
        ctx->pc = 0x1EE7DCu;
            // 0x1ee7dc: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x1EE7E0u;
        goto label_1ee7e0;
    }
    ctx->pc = 0x1EE7D8u;
    {
        const bool branch_taken_0x1ee7d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7D8u;
            // 0x1ee7dc: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d8) {
            ctx->pc = 0x1EE844u;
            goto label_1ee844;
        }
    }
    ctx->pc = 0x1EE7E0u;
label_1ee7e0:
    // 0x1ee7e0: 0x10920018  beq         $a0, $s2, . + 4 + (0x18 << 2)
label_1ee7e4:
    if (ctx->pc == 0x1EE7E4u) {
        ctx->pc = 0x1EE7E4u;
            // 0x1ee7e4: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x1EE7E8u;
        goto label_1ee7e8;
    }
    ctx->pc = 0x1EE7E0u;
    {
        const bool branch_taken_0x1ee7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x1EE7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7E0u;
            // 0x1ee7e4: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7e0) {
            ctx->pc = 0x1EE844u;
            goto label_1ee844;
        }
    }
    ctx->pc = 0x1EE7E8u;
label_1ee7e8:
    // 0x1ee7e8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1ee7ec:
    if (ctx->pc == 0x1EE7ECu) {
        ctx->pc = 0x1EE7ECu;
            // 0x1ee7ec: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1EE7F0u;
        goto label_1ee7f0;
    }
    ctx->pc = 0x1EE7E8u;
    {
        const bool branch_taken_0x1ee7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee7e8) {
            ctx->pc = 0x1EE7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7E8u;
            // 0x1ee7ec: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE848u;
            goto label_1ee848;
        }
    }
    ctx->pc = 0x1EE7F0u;
label_1ee7f0:
    // 0x1ee7f0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1ee7f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1ee7f4:
    // 0x1ee7f4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_1ee7f8:
    if (ctx->pc == 0x1EE7F8u) {
        ctx->pc = 0x1EE7F8u;
            // 0x1ee7f8: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1EE7FCu;
        goto label_1ee7fc;
    }
    ctx->pc = 0x1EE7F4u;
    {
        const bool branch_taken_0x1ee7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee7f4) {
            ctx->pc = 0x1EE7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7F4u;
            // 0x1ee7f8: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE848u;
            goto label_1ee848;
        }
    }
    ctx->pc = 0x1EE7FCu;
label_1ee7fc:
    // 0x1ee7fc: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x1ee7fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1ee800:
    // 0x1ee800: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1ee804:
    if (ctx->pc == 0x1EE804u) {
        ctx->pc = 0x1EE804u;
            // 0x1ee804: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1EE808u;
        goto label_1ee808;
    }
    ctx->pc = 0x1EE800u;
    {
        const bool branch_taken_0x1ee800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee800) {
            ctx->pc = 0x1EE804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE800u;
            // 0x1ee804: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE848u;
            goto label_1ee848;
        }
    }
    ctx->pc = 0x1EE808u;
label_1ee808:
    // 0x1ee808: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x1ee808u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1ee80c:
    // 0x1ee80c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee810:
    // 0x1ee810: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1ee814:
    if (ctx->pc == 0x1EE814u) {
        ctx->pc = 0x1EE814u;
            // 0x1ee814: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1EE818u;
        goto label_1ee818;
    }
    ctx->pc = 0x1EE810u;
    {
        const bool branch_taken_0x1ee810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee810) {
            ctx->pc = 0x1EE814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE810u;
            // 0x1ee814: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE848u;
            goto label_1ee848;
        }
    }
    ctx->pc = 0x1EE818u;
label_1ee818:
    // 0x1ee818: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x1ee818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_1ee81c:
    // 0x1ee81c: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x1ee81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_1ee820:
    // 0x1ee820: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ee824:
    if (ctx->pc == 0x1EE824u) {
        ctx->pc = 0x1EE824u;
            // 0x1ee824: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->pc = 0x1EE828u;
        goto label_1ee828;
    }
    ctx->pc = 0x1EE820u;
    {
        const bool branch_taken_0x1ee820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE820u;
            // 0x1ee824: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee820) {
            ctx->pc = 0x1EE830u;
            goto label_1ee830;
        }
    }
    ctx->pc = 0x1EE828u;
label_1ee828:
    // 0x1ee828: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_1ee82c:
    if (ctx->pc == 0x1EE82Cu) {
        ctx->pc = 0x1EE82Cu;
            // 0x1ee82c: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->pc = 0x1EE830u;
        goto label_1ee830;
    }
    ctx->pc = 0x1EE828u;
    {
        const bool branch_taken_0x1ee828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee828) {
            ctx->pc = 0x1EE82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE828u;
            // 0x1ee82c: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE848u;
            goto label_1ee848;
        }
    }
    ctx->pc = 0x1EE830u;
label_1ee830:
    // 0x1ee830: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x1ee830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
label_1ee834:
    // 0x1ee834: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ee838:
    if (ctx->pc == 0x1EE838u) {
        ctx->pc = 0x1EE838u;
            // 0x1ee838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE83Cu;
        goto label_1ee83c;
    }
    ctx->pc = 0x1EE834u;
    {
        const bool branch_taken_0x1ee834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE834u;
            // 0x1ee838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee834) {
            ctx->pc = 0x1EE844u;
            goto label_1ee844;
        }
    }
    ctx->pc = 0x1EE83Cu;
label_1ee83c:
    // 0x1ee83c: 0x0  nop
    ctx->pc = 0x1ee83cu;
    // NOP
label_1ee840:
    // 0x1ee840: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1ee840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1ee844:
    // 0x1ee844: 0xae160024  sw          $s6, 0x24($s0)
    ctx->pc = 0x1ee844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
label_1ee848:
    // 0x1ee848: 0x1496001b  bne         $a0, $s6, . + 4 + (0x1B << 2)
label_1ee84c:
    if (ctx->pc == 0x1EE84Cu) {
        ctx->pc = 0x1EE84Cu;
            // 0x1ee84c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EE850u;
        goto label_1ee850;
    }
    ctx->pc = 0x1EE848u;
    {
        const bool branch_taken_0x1ee848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x1EE84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE848u;
            // 0x1ee84c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee848) {
            ctx->pc = 0x1EE8B8u;
            goto label_1ee8b8;
        }
    }
    ctx->pc = 0x1EE850u;
label_1ee850:
    // 0x1ee850: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ee850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee854:
    // 0x1ee854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee858:
    // 0x1ee858: 0xc07da98  jal         func_1F6A60
label_1ee85c:
    if (ctx->pc == 0x1EE85Cu) {
        ctx->pc = 0x1EE85Cu;
            // 0x1ee85c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE860u;
        goto label_1ee860;
    }
    ctx->pc = 0x1EE858u;
    SET_GPR_U32(ctx, 31, 0x1EE860u);
    ctx->pc = 0x1EE85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE858u;
            // 0x1ee85c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6A60u;
    if (runtime->hasFunction(0x1F6A60u)) {
        auto targetFn = runtime->lookupFunction(0x1F6A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE860u; }
        if (ctx->pc != 0x1EE860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6A60_0x1f6a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE860u; }
        if (ctx->pc != 0x1EE860u) { return; }
    }
    ctx->pc = 0x1EE860u;
label_1ee860:
    // 0x1ee860: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ee860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee864:
    // 0x1ee864: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
label_1ee868:
    if (ctx->pc == 0x1EE868u) {
        ctx->pc = 0x1EE868u;
            // 0x1ee868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE86Cu;
        goto label_1ee86c;
    }
    ctx->pc = 0x1EE864u;
    {
        const bool branch_taken_0x1ee864 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1EE868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE864u;
            // 0x1ee868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee864) {
            ctx->pc = 0x1EE8B8u;
            goto label_1ee8b8;
        }
    }
    ctx->pc = 0x1EE86Cu;
label_1ee86c:
    // 0x1ee86c: 0x8ee50014  lw          $a1, 0x14($s7)
    ctx->pc = 0x1ee86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_1ee870:
    // 0x1ee870: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1ee870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ee874:
    // 0x1ee874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee878:
    // 0x1ee878: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ee878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ee87c:
    // 0x1ee87c: 0xc07bb02  jal         func_1EEC08
label_1ee880:
    if (ctx->pc == 0x1EE880u) {
        ctx->pc = 0x1EE880u;
            // 0x1ee880: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE884u;
        goto label_1ee884;
    }
    ctx->pc = 0x1EE87Cu;
    SET_GPR_U32(ctx, 31, 0x1EE884u);
    ctx->pc = 0x1EE880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE87Cu;
            // 0x1ee880: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC08u;
    if (runtime->hasFunction(0x1EEC08u)) {
        auto targetFn = runtime->lookupFunction(0x1EEC08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE884u; }
        if (ctx->pc != 0x1EE884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEC08_0x1eec08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE884u; }
        if (ctx->pc != 0x1EE884u) { return; }
    }
    ctx->pc = 0x1EE884u;
label_1ee884:
    // 0x1ee884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee888:
    // 0x1ee888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee88c:
    // 0x1ee88c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_1ee890:
    if (ctx->pc == 0x1EE890u) {
        ctx->pc = 0x1EE890u;
            // 0x1ee890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE894u;
        goto label_1ee894;
    }
    ctx->pc = 0x1EE88Cu;
    {
        const bool branch_taken_0x1ee88c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EE890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE88Cu;
            // 0x1ee890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee88c) {
            ctx->pc = 0x1EE8A8u;
            goto label_1ee8a8;
        }
    }
    ctx->pc = 0x1EE894u;
label_1ee894:
    // 0x1ee894: 0xc07dab4  jal         func_1F6AD0
label_1ee898:
    if (ctx->pc == 0x1EE898u) {
        ctx->pc = 0x1EE898u;
            // 0x1ee898: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE89Cu;
        goto label_1ee89c;
    }
    ctx->pc = 0x1EE894u;
    SET_GPR_U32(ctx, 31, 0x1EE89Cu);
    ctx->pc = 0x1EE898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE894u;
            // 0x1ee898: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AD0u;
    if (runtime->hasFunction(0x1F6AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F6AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE89Cu; }
        if (ctx->pc != 0x1EE89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6AD0_0x1f6ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE89Cu; }
        if (ctx->pc != 0x1EE89Cu) { return; }
    }
    ctx->pc = 0x1EE89Cu;
label_1ee89c:
    // 0x1ee89c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ee8a0:
    if (ctx->pc == 0x1EE8A0u) {
        ctx->pc = 0x1EE8A0u;
            // 0x1ee8a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8A4u;
        goto label_1ee8a4;
    }
    ctx->pc = 0x1EE89Cu;
    {
        const bool branch_taken_0x1ee89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE89Cu;
            // 0x1ee8a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee89c) {
            ctx->pc = 0x1EE8B8u;
            goto label_1ee8b8;
        }
    }
    ctx->pc = 0x1EE8A4u;
label_1ee8a4:
    // 0x1ee8a4: 0x0  nop
    ctx->pc = 0x1ee8a4u;
    // NOP
label_1ee8a8:
    // 0x1ee8a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ee8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ee8ac:
    // 0x1ee8ac: 0xc07db84  jal         func_1F6E10
label_1ee8b0:
    if (ctx->pc == 0x1EE8B0u) {
        ctx->pc = 0x1EE8B0u;
            // 0x1ee8b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8B4u;
        goto label_1ee8b4;
    }
    ctx->pc = 0x1EE8ACu;
    SET_GPR_U32(ctx, 31, 0x1EE8B4u);
    ctx->pc = 0x1EE8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8ACu;
            // 0x1ee8b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6E10u;
    if (runtime->hasFunction(0x1F6E10u)) {
        auto targetFn = runtime->lookupFunction(0x1F6E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8B4u; }
        if (ctx->pc != 0x1EE8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6E10_0x1f6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8B4u; }
        if (ctx->pc != 0x1EE8B4u) { return; }
    }
    ctx->pc = 0x1EE8B4u;
label_1ee8b4:
    // 0x1ee8b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee8b8:
    // 0x1ee8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee8bc:
    // 0x1ee8bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ee8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ee8c0:
    // 0x1ee8c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ee8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee8c4:
    // 0x1ee8c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ee8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ee8c8:
    // 0x1ee8c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ee8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee8cc:
    // 0x1ee8cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ee8ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ee8d0:
    // 0x1ee8d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ee8d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee8d4:
    // 0x1ee8d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ee8d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ee8d8:
    // 0x1ee8d8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ee8d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee8dc:
    // 0x1ee8dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ee8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1ee8e0:
    // 0x1ee8e0: 0x3e00008  jr          $ra
label_1ee8e4:
    if (ctx->pc == 0x1EE8E4u) {
        ctx->pc = 0x1EE8E4u;
            // 0x1ee8e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1EE8E8u;
        goto label_fallthrough_0x1ee8e0;
    }
    ctx->pc = 0x1EE8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE8E0u;
            // 0x1ee8e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ee8e0:
    ctx->pc = 0x1EE8E8u;
    ctx->pc = 0x1ee8e8u;
}
