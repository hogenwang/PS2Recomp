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

// Function: sub_002313A0
// Address: 0x2313a0 - 0x231698
void sub_002313A0_0x2313a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002313A0_0x2313a0");
#endif

    switch (ctx->pc) {
        case 0x2313a0u: goto label_2313a0;
        case 0x2313a4u: goto label_2313a4;
        case 0x2313a8u: goto label_2313a8;
        case 0x2313acu: goto label_2313ac;
        case 0x2313b0u: goto label_2313b0;
        case 0x2313b4u: goto label_2313b4;
        case 0x2313b8u: goto label_2313b8;
        case 0x2313bcu: goto label_2313bc;
        case 0x2313c0u: goto label_2313c0;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313c8u: goto label_2313c8;
        case 0x2313ccu: goto label_2313cc;
        case 0x2313d0u: goto label_2313d0;
        case 0x2313d4u: goto label_2313d4;
        case 0x2313d8u: goto label_2313d8;
        case 0x2313dcu: goto label_2313dc;
        case 0x2313e0u: goto label_2313e0;
        case 0x2313e4u: goto label_2313e4;
        case 0x2313e8u: goto label_2313e8;
        case 0x2313ecu: goto label_2313ec;
        case 0x2313f0u: goto label_2313f0;
        case 0x2313f4u: goto label_2313f4;
        case 0x2313f8u: goto label_2313f8;
        case 0x2313fcu: goto label_2313fc;
        case 0x231400u: goto label_231400;
        case 0x231404u: goto label_231404;
        case 0x231408u: goto label_231408;
        case 0x23140cu: goto label_23140c;
        case 0x231410u: goto label_231410;
        case 0x231414u: goto label_231414;
        case 0x231418u: goto label_231418;
        case 0x23141cu: goto label_23141c;
        case 0x231420u: goto label_231420;
        case 0x231424u: goto label_231424;
        case 0x231428u: goto label_231428;
        case 0x23142cu: goto label_23142c;
        case 0x231430u: goto label_231430;
        case 0x231434u: goto label_231434;
        case 0x231438u: goto label_231438;
        case 0x23143cu: goto label_23143c;
        case 0x231440u: goto label_231440;
        case 0x231444u: goto label_231444;
        case 0x231448u: goto label_231448;
        case 0x23144cu: goto label_23144c;
        case 0x231450u: goto label_231450;
        case 0x231454u: goto label_231454;
        case 0x231458u: goto label_231458;
        case 0x23145cu: goto label_23145c;
        case 0x231460u: goto label_231460;
        case 0x231464u: goto label_231464;
        case 0x231468u: goto label_231468;
        case 0x23146cu: goto label_23146c;
        case 0x231470u: goto label_231470;
        case 0x231474u: goto label_231474;
        case 0x231478u: goto label_231478;
        case 0x23147cu: goto label_23147c;
        case 0x231480u: goto label_231480;
        case 0x231484u: goto label_231484;
        case 0x231488u: goto label_231488;
        case 0x23148cu: goto label_23148c;
        case 0x231490u: goto label_231490;
        case 0x231494u: goto label_231494;
        case 0x231498u: goto label_231498;
        case 0x23149cu: goto label_23149c;
        case 0x2314a0u: goto label_2314a0;
        case 0x2314a4u: goto label_2314a4;
        case 0x2314a8u: goto label_2314a8;
        case 0x2314acu: goto label_2314ac;
        case 0x2314b0u: goto label_2314b0;
        case 0x2314b4u: goto label_2314b4;
        case 0x2314b8u: goto label_2314b8;
        case 0x2314bcu: goto label_2314bc;
        case 0x2314c0u: goto label_2314c0;
        case 0x2314c4u: goto label_2314c4;
        case 0x2314c8u: goto label_2314c8;
        case 0x2314ccu: goto label_2314cc;
        case 0x2314d0u: goto label_2314d0;
        case 0x2314d4u: goto label_2314d4;
        case 0x2314d8u: goto label_2314d8;
        case 0x2314dcu: goto label_2314dc;
        case 0x2314e0u: goto label_2314e0;
        case 0x2314e4u: goto label_2314e4;
        case 0x2314e8u: goto label_2314e8;
        case 0x2314ecu: goto label_2314ec;
        case 0x2314f0u: goto label_2314f0;
        case 0x2314f4u: goto label_2314f4;
        case 0x2314f8u: goto label_2314f8;
        case 0x2314fcu: goto label_2314fc;
        case 0x231500u: goto label_231500;
        case 0x231504u: goto label_231504;
        case 0x231508u: goto label_231508;
        case 0x23150cu: goto label_23150c;
        case 0x231510u: goto label_231510;
        case 0x231514u: goto label_231514;
        case 0x231518u: goto label_231518;
        case 0x23151cu: goto label_23151c;
        case 0x231520u: goto label_231520;
        case 0x231524u: goto label_231524;
        case 0x231528u: goto label_231528;
        case 0x23152cu: goto label_23152c;
        case 0x231530u: goto label_231530;
        case 0x231534u: goto label_231534;
        case 0x231538u: goto label_231538;
        case 0x23153cu: goto label_23153c;
        case 0x231540u: goto label_231540;
        case 0x231544u: goto label_231544;
        case 0x231548u: goto label_231548;
        case 0x23154cu: goto label_23154c;
        case 0x231550u: goto label_231550;
        case 0x231554u: goto label_231554;
        case 0x231558u: goto label_231558;
        case 0x23155cu: goto label_23155c;
        case 0x231560u: goto label_231560;
        case 0x231564u: goto label_231564;
        case 0x231568u: goto label_231568;
        case 0x23156cu: goto label_23156c;
        case 0x231570u: goto label_231570;
        case 0x231574u: goto label_231574;
        case 0x231578u: goto label_231578;
        case 0x23157cu: goto label_23157c;
        case 0x231580u: goto label_231580;
        case 0x231584u: goto label_231584;
        case 0x231588u: goto label_231588;
        case 0x23158cu: goto label_23158c;
        case 0x231590u: goto label_231590;
        case 0x231594u: goto label_231594;
        case 0x231598u: goto label_231598;
        case 0x23159cu: goto label_23159c;
        case 0x2315a0u: goto label_2315a0;
        case 0x2315a4u: goto label_2315a4;
        case 0x2315a8u: goto label_2315a8;
        case 0x2315acu: goto label_2315ac;
        case 0x2315b0u: goto label_2315b0;
        case 0x2315b4u: goto label_2315b4;
        case 0x2315b8u: goto label_2315b8;
        case 0x2315bcu: goto label_2315bc;
        case 0x2315c0u: goto label_2315c0;
        case 0x2315c4u: goto label_2315c4;
        case 0x2315c8u: goto label_2315c8;
        case 0x2315ccu: goto label_2315cc;
        case 0x2315d0u: goto label_2315d0;
        case 0x2315d4u: goto label_2315d4;
        case 0x2315d8u: goto label_2315d8;
        case 0x2315dcu: goto label_2315dc;
        case 0x2315e0u: goto label_2315e0;
        case 0x2315e4u: goto label_2315e4;
        case 0x2315e8u: goto label_2315e8;
        case 0x2315ecu: goto label_2315ec;
        case 0x2315f0u: goto label_2315f0;
        case 0x2315f4u: goto label_2315f4;
        case 0x2315f8u: goto label_2315f8;
        case 0x2315fcu: goto label_2315fc;
        case 0x231600u: goto label_231600;
        case 0x231604u: goto label_231604;
        case 0x231608u: goto label_231608;
        case 0x23160cu: goto label_23160c;
        case 0x231610u: goto label_231610;
        case 0x231614u: goto label_231614;
        case 0x231618u: goto label_231618;
        case 0x23161cu: goto label_23161c;
        case 0x231620u: goto label_231620;
        case 0x231624u: goto label_231624;
        case 0x231628u: goto label_231628;
        case 0x23162cu: goto label_23162c;
        case 0x231630u: goto label_231630;
        case 0x231634u: goto label_231634;
        case 0x231638u: goto label_231638;
        case 0x23163cu: goto label_23163c;
        case 0x231640u: goto label_231640;
        case 0x231644u: goto label_231644;
        case 0x231648u: goto label_231648;
        case 0x23164cu: goto label_23164c;
        case 0x231650u: goto label_231650;
        case 0x231654u: goto label_231654;
        case 0x231658u: goto label_231658;
        case 0x23165cu: goto label_23165c;
        case 0x231660u: goto label_231660;
        case 0x231664u: goto label_231664;
        case 0x231668u: goto label_231668;
        case 0x23166cu: goto label_23166c;
        case 0x231670u: goto label_231670;
        case 0x231674u: goto label_231674;
        case 0x231678u: goto label_231678;
        case 0x23167cu: goto label_23167c;
        case 0x231680u: goto label_231680;
        case 0x231684u: goto label_231684;
        case 0x231688u: goto label_231688;
        case 0x23168cu: goto label_23168c;
        case 0x231690u: goto label_231690;
        case 0x231694u: goto label_231694;
        default: break;
    }

    ctx->pc = 0x2313a0u;

label_2313a0:
    // 0x2313a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2313a4:
    // 0x2313a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2313a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2313a8:
    // 0x2313a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2313a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2313ac:
    // 0x2313ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2313acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2313b0:
    // 0x2313b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2313b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2313b4:
    // 0x2313b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2313b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2313b8:
    // 0x2313b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2313b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2313bc:
    // 0x2313bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2313bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2313c0:
    // 0x2313c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2313c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2313c4:
    // 0x2313c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2313c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2313c8:
    // 0x2313c8: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2313cc:
    // 0x2313cc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2313d0:
    if (ctx->pc == 0x2313D0u) {
        ctx->pc = 0x2313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313CCu;
        // 0x2313d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313D4u;
        goto label_2313d4;
    }
    ctx->pc = 0x2313CCu;
    {
        const bool branch_taken_0x2313cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313CCu;
        // 0x2313d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313cc) {
            ctx->pc = 0x2313D8u;
            goto label_2313d8;
        }
    }
    ctx->pc = 0x2313D4u;
label_2313d4:
    // 0x2313d4: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x2313d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2313d8:
    // 0x2313d8: 0x10000044  b           . + 4 + (0x44 << 2)
label_2313dc:
    if (ctx->pc == 0x2313DCu) {
        ctx->pc = 0x2313DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D8u;
        // 0x2313dc: 0x3c15003f  lui         $s5, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313E0u;
        goto label_2313e0;
    }
    ctx->pc = 0x2313D8u;
    {
        const bool branch_taken_0x2313d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D8u;
        // 0x2313dc: 0x3c15003f  lui         $s5, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313d8) {
            ctx->pc = 0x2314ECu;
            goto label_2314ec;
        }
    }
    ctx->pc = 0x2313E0u;
label_2313e0:
    // 0x2313e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2313e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2313e4:
    // 0x2313e4: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2313e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2313e8:
    // 0x2313e8: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x2313e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_2313ec:
    // 0x2313ec: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x2313ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_2313f0:
    // 0x2313f0: 0x6463ff00  daddiu      $v1, $v1, -0x100
    ctx->pc = 0x2313f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967040);
label_2313f4:
    // 0x2313f4: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2313f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_2313f8:
    // 0x2313f8: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x2313f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
label_2313fc:
    // 0x2313fc: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x2313fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_231400:
    // 0x231400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_231404:
    // 0x231404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_231408:
    if (ctx->pc == 0x231408u) {
        ctx->pc = 0x231408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231404u;
        // 0x231408: 0x2459023  subu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23140Cu;
        goto label_23140c;
    }
    ctx->pc = 0x231404u;
    {
        const bool branch_taken_0x231404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231404u;
        // 0x231408: 0x2459023  subu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231404) {
            ctx->pc = 0x231418u;
            goto label_231418;
        }
    }
    ctx->pc = 0x23140Cu;
label_23140c:
    // 0x23140c: 0x9e02002c  lwu         $v0, 0x2C($s0)
    ctx->pc = 0x23140cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_231410:
    // 0x231410: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x231410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_231414:
    // 0x231414: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x231414u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_231418:
    // 0x231418: 0xc08c682  jal         func_231A08
label_23141c:
    if (ctx->pc == 0x23141Cu) {
        ctx->pc = 0x231420u;
        goto label_231420;
    }
    ctx->pc = 0x231418u;
    SET_GPR_U32(ctx, 31, 0x231420u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x231418u, 0x231420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231420u;
label_231420:
    // 0x231420: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x231420u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_231424:
    // 0x231424: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x231424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231428:
    // 0x231428: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x231428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_23142c:
    // 0x23142c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_231430:
    if (ctx->pc == 0x231430u) {
        ctx->pc = 0x231430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23142Cu;
        // 0x231430: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231434u;
        goto label_231434;
    }
    ctx->pc = 0x23142Cu;
    {
        const bool branch_taken_0x23142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23142Cu;
        // 0x231430: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23142c) {
            ctx->pc = 0x231458u;
            goto label_231458;
        }
    }
    ctx->pc = 0x231434u;
label_231434:
    // 0x231434: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x231434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_231438:
    // 0x231438: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_23143c:
    if (ctx->pc == 0x23143Cu) {
        ctx->pc = 0x231440u;
        goto label_231440;
    }
    ctx->pc = 0x231438u;
    {
        const bool branch_taken_0x231438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231438) {
            ctx->pc = 0x231458u;
            goto label_231458;
        }
    }
    ctx->pc = 0x231440u;
label_231440:
    // 0x231440: 0xc08a9d6  jal         func_22A758
label_231444:
    if (ctx->pc == 0x231444u) {
        ctx->pc = 0x231448u;
        goto label_231448;
    }
    ctx->pc = 0x231440u;
    SET_GPR_U32(ctx, 31, 0x231448u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x231440u, 0x231448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231448u;
label_231448:
    // 0x231448: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x231448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_23144c:
    // 0x23144c: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x23144cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_231450:
    // 0x231450: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x231450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_231454:
    // 0x231454: 0x0  nop
    ctx->pc = 0x231454u;
    // NOP
label_231458:
    // 0x231458: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_23145c:
    if (ctx->pc == 0x23145Cu) {
        ctx->pc = 0x23145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231458u;
        // 0x23145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231460u;
        goto label_231460;
    }
    ctx->pc = 0x231458u;
    {
        const bool branch_taken_0x231458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231458u;
        // 0x23145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231458) {
            ctx->pc = 0x2314DCu;
            goto label_2314dc;
        }
    }
    ctx->pc = 0x231460u;
label_231460:
    // 0x231460: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x231460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_231464:
    // 0x231464: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_231468:
    if (ctx->pc == 0x231468u) {
        ctx->pc = 0x231468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231464u;
        // 0x231468: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23146Cu;
        goto label_23146c;
    }
    ctx->pc = 0x231464u;
    {
        const bool branch_taken_0x231464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x231468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231464u;
        // 0x231468: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231464) {
            ctx->pc = 0x231488u;
            goto label_231488;
        }
    }
    ctx->pc = 0x23146Cu;
label_23146c:
    // 0x23146c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x23146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_231470:
    // 0x231470: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x231470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_231474:
    // 0x231474: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x231474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_231478:
    // 0x231478: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x231478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_23147c:
    // 0x23147c: 0x10000012  b           . + 4 + (0x12 << 2)
label_231480:
    if (ctx->pc == 0x231480u) {
        ctx->pc = 0x231480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23147Cu;
        // 0x231480: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231484u;
        goto label_231484;
    }
    ctx->pc = 0x23147Cu;
    {
        const bool branch_taken_0x23147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23147Cu;
        // 0x231480: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23147c) {
            ctx->pc = 0x2314C8u;
            goto label_2314c8;
        }
    }
    ctx->pc = 0x231484u;
label_231484:
    // 0x231484: 0x0  nop
    ctx->pc = 0x231484u;
    // NOP
label_231488:
    // 0x231488: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23148c:
    if (ctx->pc == 0x23148Cu) {
        ctx->pc = 0x23148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231488u;
        // 0x23148c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231490u;
        goto label_231490;
    }
    ctx->pc = 0x231488u;
    {
        const bool branch_taken_0x231488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231488) {
            ctx->pc = 0x23148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231488u;
            // 0x23148c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2314A0u;
            goto label_2314a0;
        }
    }
    ctx->pc = 0x231490u;
label_231490:
    // 0x231490: 0xc098560  jal         func_261580
label_231494:
    if (ctx->pc == 0x231494u) {
        ctx->pc = 0x231494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231490u;
        // 0x231494: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231498u;
        goto label_231498;
    }
    ctx->pc = 0x231490u;
    SET_GPR_U32(ctx, 31, 0x231498u);
    ctx->pc = 0x231494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231490u;
    // 0x231494: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x231490u, 0x231498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231498u;
label_231498:
    // 0x231498: 0x1000000c  b           . + 4 + (0xC << 2)
label_23149c:
    if (ctx->pc == 0x23149Cu) {
        ctx->pc = 0x23149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231498u;
        // 0x23149c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314A0u;
        goto label_2314a0;
    }
    ctx->pc = 0x231498u;
    {
        const bool branch_taken_0x231498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231498u;
        // 0x23149c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231498) {
            ctx->pc = 0x2314CCu;
            goto label_2314cc;
        }
    }
    ctx->pc = 0x2314A0u;
label_2314a0:
    // 0x2314a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2314a4:
    if (ctx->pc == 0x2314A4u) {
        ctx->pc = 0x2314A8u;
        goto label_2314a8;
    }
    ctx->pc = 0x2314A0u;
    {
        const bool branch_taken_0x2314a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2314a0) {
            ctx->pc = 0x2314C0u;
            goto label_2314c0;
        }
    }
    ctx->pc = 0x2314A8u;
label_2314a8:
    // 0x2314a8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2314a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2314ac:
    // 0x2314ac: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x2314acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2314b0:
    // 0x2314b0: 0x40f809  jalr        $v0
label_2314b4:
    if (ctx->pc == 0x2314B4u) {
        ctx->pc = 0x2314B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314B0u;
        // 0x2314b4: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314B8u;
        goto label_2314b8;
    }
    ctx->pc = 0x2314B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2314B8u);
        ctx->pc = 0x2314B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314B0u;
        // 0x2314b4: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2314B0u, 0x2314B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2314B8u;
label_2314b8:
    // 0x2314b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2314bc:
    if (ctx->pc == 0x2314BCu) {
        ctx->pc = 0x2314BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314B8u;
        // 0x2314bc: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314C0u;
        goto label_2314c0;
    }
    ctx->pc = 0x2314B8u;
    {
        const bool branch_taken_0x2314b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314B8u;
        // 0x2314bc: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314b8) {
            ctx->pc = 0x2314CCu;
            goto label_2314cc;
        }
    }
    ctx->pc = 0x2314C0u;
label_2314c0:
    // 0x2314c0: 0xc098560  jal         func_261580
label_2314c4:
    if (ctx->pc == 0x2314C4u) {
        ctx->pc = 0x2314C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314C0u;
        // 0x2314c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314C8u;
        goto label_2314c8;
    }
    ctx->pc = 0x2314C0u;
    SET_GPR_U32(ctx, 31, 0x2314C8u);
    ctx->pc = 0x2314C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314C0u;
    // 0x2314c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2314C0u, 0x2314C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314C8u;
label_2314c8:
    // 0x2314c8: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x2314c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_2314cc:
    // 0x2314cc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2314ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2314d0:
    // 0x2314d0: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x2314d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_2314d4:
    // 0x2314d4: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x2314d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_2314d8:
    // 0x2314d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2314d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2314dc:
    // 0x2314dc: 0xc098560  jal         func_261580
label_2314e0:
    if (ctx->pc == 0x2314E0u) {
        ctx->pc = 0x2314E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314DCu;
        // 0x2314e0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314E4u;
        goto label_2314e4;
    }
    ctx->pc = 0x2314DCu;
    SET_GPR_U32(ctx, 31, 0x2314E4u);
    ctx->pc = 0x2314E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314DCu;
    // 0x2314e0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2314DCu, 0x2314E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314E4u;
label_2314e4:
    // 0x2314e4: 0xc08c698  jal         func_231A60
label_2314e8:
    if (ctx->pc == 0x2314E8u) {
        ctx->pc = 0x2314E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314E4u;
        // 0x2314e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314ECu;
        goto label_2314ec;
    }
    ctx->pc = 0x2314E4u;
    SET_GPR_U32(ctx, 31, 0x2314ECu);
    ctx->pc = 0x2314E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314E4u;
    // 0x2314e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2314E4u, 0x2314ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314ECu;
label_2314ec:
    // 0x2314ec: 0x1a400057  blez        $s2, . + 4 + (0x57 << 2)
label_2314f0:
    if (ctx->pc == 0x2314F0u) {
        ctx->pc = 0x2314F4u;
        goto label_2314f4;
    }
    ctx->pc = 0x2314ECu;
    {
        const bool branch_taken_0x2314ec = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2314ec) {
            ctx->pc = 0x23164Cu;
            goto label_23164c;
        }
    }
    ctx->pc = 0x2314F4u;
label_2314f4:
    // 0x2314f4: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
label_2314f8:
    if (ctx->pc == 0x2314F8u) {
        ctx->pc = 0x2314F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314F4u;
        // 0x2314f8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314FCu;
        goto label_2314fc;
    }
    ctx->pc = 0x2314F4u;
    {
        const bool branch_taken_0x2314f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2314f4) {
            ctx->pc = 0x2314F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2314F4u;
            // 0x2314f8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231518u;
            goto label_231518;
        }
    }
    ctx->pc = 0x2314FCu;
label_2314fc:
    // 0x2314fc: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_231500:
    if (ctx->pc == 0x231500u) {
        ctx->pc = 0x231500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314FCu;
        // 0x231500: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231504u;
        goto label_231504;
    }
    ctx->pc = 0x2314FCu;
    {
        const bool branch_taken_0x2314fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x231500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314FCu;
        // 0x231500: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314fc) {
            ctx->pc = 0x231510u;
            goto label_231510;
        }
    }
    ctx->pc = 0x231504u;
label_231504:
    // 0x231504: 0xc08b5e0  jal         func_22D780
label_231508:
    if (ctx->pc == 0x231508u) {
        ctx->pc = 0x231508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231504u;
        // 0x231508: 0x26a446e8  addiu       $a0, $s5, 0x46E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 18152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23150Cu;
        goto label_23150c;
    }
    ctx->pc = 0x231504u;
    SET_GPR_U32(ctx, 31, 0x23150Cu);
    ctx->pc = 0x231508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231504u;
    // 0x231508: 0x26a446e8  addiu       $a0, $s5, 0x46E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 18152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x231504u, 0x23150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23150Cu;
label_23150c:
    // 0x23150c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x23150cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_231510:
    // 0x231510: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_231514:
    if (ctx->pc == 0x231514u) {
        ctx->pc = 0x231514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231510u;
        // 0x231514: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231518u;
        goto label_231518;
    }
    ctx->pc = 0x231510u;
    {
        const bool branch_taken_0x231510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231510u;
        // 0x231514: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231510) {
            ctx->pc = 0x2314ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2314ec;
        }
    }
    ctx->pc = 0x231518u;
label_231518:
    // 0x231518: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x231518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23151c:
    // 0x23151c: 0x1040ffb0  beqz        $v0, . + 4 + (-0x50 << 2)
label_231520:
    if (ctx->pc == 0x231520u) {
        ctx->pc = 0x231520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23151Cu;
        // 0x231520: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231524u;
        goto label_231524;
    }
    ctx->pc = 0x23151Cu;
    {
        const bool branch_taken_0x23151c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23151Cu;
        // 0x231520: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23151c) {
            ctx->pc = 0x2313E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2313e0;
        }
    }
    ctx->pc = 0x231524u;
label_231524:
    // 0x231524: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x231524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_231528:
    // 0x231528: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x231528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_23152c:
    // 0x23152c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23152cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_231530:
    // 0x231530: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x231530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_231534:
    // 0x231534: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x231534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_231538:
    // 0x231538: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x231538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
label_23153c:
    // 0x23153c: 0x10000043  b           . + 4 + (0x43 << 2)
label_231540:
    if (ctx->pc == 0x231540u) {
        ctx->pc = 0x231540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23153Cu;
        // 0x231540: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231544u;
        goto label_231544;
    }
    ctx->pc = 0x23153Cu;
    {
        const bool branch_taken_0x23153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23153Cu;
        // 0x231540: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23153c) {
            ctx->pc = 0x23164Cu;
            goto label_23164c;
        }
    }
    ctx->pc = 0x231544u;
label_231544:
    // 0x231544: 0x0  nop
    ctx->pc = 0x231544u;
    // NOP
label_231548:
    // 0x231548: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x231548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_23154c:
    // 0x23154c: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x23154cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_231550:
    // 0x231550: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x231550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_231554:
    // 0x231554: 0x6463ff00  daddiu      $v1, $v1, -0x100
    ctx->pc = 0x231554u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967040);
label_231558:
    // 0x231558: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x231558u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_23155c:
    // 0x23155c: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x23155cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
label_231560:
    // 0x231560: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x231560u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_231564:
    // 0x231564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_231568:
    // 0x231568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23156c:
    if (ctx->pc == 0x23156Cu) {
        ctx->pc = 0x231570u;
        goto label_231570;
    }
    ctx->pc = 0x231568u;
    {
        const bool branch_taken_0x231568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231568) {
            ctx->pc = 0x23157Cu;
            goto label_23157c;
        }
    }
    ctx->pc = 0x231570u;
label_231570:
    // 0x231570: 0x9e02002c  lwu         $v0, 0x2C($s0)
    ctx->pc = 0x231570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_231574:
    // 0x231574: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x231574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_231578:
    // 0x231578: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x231578u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_23157c:
    // 0x23157c: 0xc08c682  jal         func_231A08
label_231580:
    if (ctx->pc == 0x231580u) {
        ctx->pc = 0x231584u;
        goto label_231584;
    }
    ctx->pc = 0x23157Cu;
    SET_GPR_U32(ctx, 31, 0x231584u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23157Cu, 0x231584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231584u;
label_231584:
    // 0x231584: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x231584u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_231588:
    // 0x231588: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x231588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23158c:
    // 0x23158c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x23158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_231590:
    // 0x231590: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_231594:
    if (ctx->pc == 0x231594u) {
        ctx->pc = 0x231594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231590u;
        // 0x231594: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231598u;
        goto label_231598;
    }
    ctx->pc = 0x231590u;
    {
        const bool branch_taken_0x231590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231590u;
        // 0x231594: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231590) {
            ctx->pc = 0x2315B8u;
            goto label_2315b8;
        }
    }
    ctx->pc = 0x231598u;
label_231598:
    // 0x231598: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x231598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_23159c:
    // 0x23159c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2315a0:
    if (ctx->pc == 0x2315A0u) {
        ctx->pc = 0x2315A4u;
        goto label_2315a4;
    }
    ctx->pc = 0x23159Cu;
    {
        const bool branch_taken_0x23159c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23159c) {
            ctx->pc = 0x2315B8u;
            goto label_2315b8;
        }
    }
    ctx->pc = 0x2315A4u;
label_2315a4:
    // 0x2315a4: 0xc08a9d6  jal         func_22A758
label_2315a8:
    if (ctx->pc == 0x2315A8u) {
        ctx->pc = 0x2315ACu;
        goto label_2315ac;
    }
    ctx->pc = 0x2315A4u;
    SET_GPR_U32(ctx, 31, 0x2315ACu);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2315A4u, 0x2315ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315ACu;
label_2315ac:
    // 0x2315ac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2315acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2315b0:
    // 0x2315b0: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x2315b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_2315b4:
    // 0x2315b4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2315b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2315b8:
    // 0x2315b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2315bc:
    if (ctx->pc == 0x2315BCu) {
        ctx->pc = 0x2315BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315B8u;
        // 0x2315bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315C0u;
        goto label_2315c0;
    }
    ctx->pc = 0x2315B8u;
    {
        const bool branch_taken_0x2315b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315B8u;
        // 0x2315bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315b8) {
            ctx->pc = 0x23163Cu;
            goto label_23163c;
        }
    }
    ctx->pc = 0x2315C0u;
label_2315c0:
    // 0x2315c0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2315c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2315c4:
    // 0x2315c4: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_2315c8:
    if (ctx->pc == 0x2315C8u) {
        ctx->pc = 0x2315C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315C4u;
        // 0x2315c8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315CCu;
        goto label_2315cc;
    }
    ctx->pc = 0x2315C4u;
    {
        const bool branch_taken_0x2315c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2315C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315C4u;
        // 0x2315c8: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315c4) {
            ctx->pc = 0x2315E8u;
            goto label_2315e8;
        }
    }
    ctx->pc = 0x2315CCu;
label_2315cc:
    // 0x2315cc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2315ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2315d0:
    // 0x2315d0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2315d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_2315d4:
    // 0x2315d4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2315d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2315d8:
    // 0x2315d8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2315d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2315dc:
    // 0x2315dc: 0x10000012  b           . + 4 + (0x12 << 2)
label_2315e0:
    if (ctx->pc == 0x2315E0u) {
        ctx->pc = 0x2315E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315DCu;
        // 0x2315e0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315E4u;
        goto label_2315e4;
    }
    ctx->pc = 0x2315DCu;
    {
        const bool branch_taken_0x2315dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315DCu;
        // 0x2315e0: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315dc) {
            ctx->pc = 0x231628u;
            goto label_231628;
        }
    }
    ctx->pc = 0x2315E4u;
label_2315e4:
    // 0x2315e4: 0x0  nop
    ctx->pc = 0x2315e4u;
    // NOP
label_2315e8:
    // 0x2315e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2315ec:
    if (ctx->pc == 0x2315ECu) {
        ctx->pc = 0x2315ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315E8u;
        // 0x2315ec: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315F0u;
        goto label_2315f0;
    }
    ctx->pc = 0x2315E8u;
    {
        const bool branch_taken_0x2315e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2315e8) {
            ctx->pc = 0x2315ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2315E8u;
            // 0x2315ec: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231600u;
            goto label_231600;
        }
    }
    ctx->pc = 0x2315F0u;
label_2315f0:
    // 0x2315f0: 0xc098560  jal         func_261580
label_2315f4:
    if (ctx->pc == 0x2315F4u) {
        ctx->pc = 0x2315F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F0u;
        // 0x2315f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315F8u;
        goto label_2315f8;
    }
    ctx->pc = 0x2315F0u;
    SET_GPR_U32(ctx, 31, 0x2315F8u);
    ctx->pc = 0x2315F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315F0u;
    // 0x2315f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2315F0u, 0x2315F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315F8u;
label_2315f8:
    // 0x2315f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2315fc:
    if (ctx->pc == 0x2315FCu) {
        ctx->pc = 0x2315FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F8u;
        // 0x2315fc: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231600u;
        goto label_231600;
    }
    ctx->pc = 0x2315F8u;
    {
        const bool branch_taken_0x2315f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F8u;
        // 0x2315fc: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315f8) {
            ctx->pc = 0x23162Cu;
            goto label_23162c;
        }
    }
    ctx->pc = 0x231600u;
label_231600:
    // 0x231600: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_231604:
    if (ctx->pc == 0x231604u) {
        ctx->pc = 0x231608u;
        goto label_231608;
    }
    ctx->pc = 0x231600u;
    {
        const bool branch_taken_0x231600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231600) {
            ctx->pc = 0x231620u;
            goto label_231620;
        }
    }
    ctx->pc = 0x231608u;
label_231608:
    // 0x231608: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x231608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_23160c:
    // 0x23160c: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x23160cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_231610:
    // 0x231610: 0x40f809  jalr        $v0
label_231614:
    if (ctx->pc == 0x231614u) {
        ctx->pc = 0x231614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231610u;
        // 0x231614: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231618u;
        goto label_231618;
    }
    ctx->pc = 0x231610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x231618u);
        ctx->pc = 0x231614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231610u;
        // 0x231614: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231610u, 0x231618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231618u;
label_231618:
    // 0x231618: 0x10000004  b           . + 4 + (0x4 << 2)
label_23161c:
    if (ctx->pc == 0x23161Cu) {
        ctx->pc = 0x23161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231618u;
        // 0x23161c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231620u;
        goto label_231620;
    }
    ctx->pc = 0x231618u;
    {
        const bool branch_taken_0x231618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231618u;
        // 0x23161c: 0x96020012  lhu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231618) {
            ctx->pc = 0x23162Cu;
            goto label_23162c;
        }
    }
    ctx->pc = 0x231620u;
label_231620:
    // 0x231620: 0xc098560  jal         func_261580
label_231624:
    if (ctx->pc == 0x231624u) {
        ctx->pc = 0x231624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231620u;
        // 0x231624: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231628u;
        goto label_231628;
    }
    ctx->pc = 0x231620u;
    SET_GPR_U32(ctx, 31, 0x231628u);
    ctx->pc = 0x231624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231620u;
    // 0x231624: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x231620u, 0x231628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231628u;
label_231628:
    // 0x231628: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x231628u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_23162c:
    // 0x23162c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x23162cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_231630:
    // 0x231630: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x231630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_231634:
    // 0x231634: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x231634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_231638:
    // 0x231638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23163c:
    // 0x23163c: 0xc098560  jal         func_261580
label_231640:
    if (ctx->pc == 0x231640u) {
        ctx->pc = 0x231640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23163Cu;
        // 0x231640: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231644u;
        goto label_231644;
    }
    ctx->pc = 0x23163Cu;
    SET_GPR_U32(ctx, 31, 0x231644u);
    ctx->pc = 0x231640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23163Cu;
    // 0x231640: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x23163Cu, 0x231644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231644u;
label_231644:
    // 0x231644: 0xc08c698  jal         func_231A60
label_231648:
    if (ctx->pc == 0x231648u) {
        ctx->pc = 0x231648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231644u;
        // 0x231648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23164Cu;
        goto label_23164c;
    }
    ctx->pc = 0x231644u;
    SET_GPR_U32(ctx, 31, 0x23164Cu);
    ctx->pc = 0x231648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231644u;
    // 0x231648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x231644u, 0x23164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23164Cu;
label_23164c:
    // 0x23164c: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_231650:
    if (ctx->pc == 0x231650u) {
        ctx->pc = 0x231650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23164Cu;
        // 0x231650: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231654u;
        goto label_231654;
    }
    ctx->pc = 0x23164Cu;
    {
        const bool branch_taken_0x23164c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23164c) {
            ctx->pc = 0x231650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23164Cu;
            // 0x231650: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231670u;
            goto label_231670;
        }
    }
    ctx->pc = 0x231654u;
label_231654:
    // 0x231654: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x231654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_231658:
    // 0x231658: 0x5040ffbb  beql        $v0, $zero, . + 4 + (-0x45 << 2)
label_23165c:
    if (ctx->pc == 0x23165Cu) {
        ctx->pc = 0x23165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231658u;
        // 0x23165c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231660u;
        goto label_231660;
    }
    ctx->pc = 0x231658u;
    {
        const bool branch_taken_0x231658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231658) {
            ctx->pc = 0x23165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231658u;
            // 0x23165c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231548;
        }
    }
    ctx->pc = 0x231660u;
label_231660:
    // 0x231660: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_231664:
    if (ctx->pc == 0x231664u) {
        ctx->pc = 0x231664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231660u;
        // 0x231664: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231668u;
        goto label_231668;
    }
    ctx->pc = 0x231660u;
    {
        const bool branch_taken_0x231660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x231660) {
            ctx->pc = 0x231664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231660u;
            // 0x231664: 0xae340028  sw          $s4, 0x28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231670u;
            goto label_231670;
        }
    }
    ctx->pc = 0x231668u;
label_231668:
    // 0x231668: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x231668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_23166c:
    // 0x23166c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x23166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
label_231670:
    // 0x231670: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x231670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_231674:
    // 0x231674: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x231674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_231678:
    // 0x231678: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x231678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23167c:
    // 0x23167c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23167cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_231680:
    // 0x231680: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_231684:
    // 0x231684: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_231688:
    // 0x231688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23168c:
    // 0x23168c: 0x3e00008  jr          $ra
label_231690:
    if (ctx->pc == 0x231690u) {
        ctx->pc = 0x231690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23168Cu;
        // 0x231690: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231694u;
        goto label_231694;
    }
    ctx->pc = 0x23168Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23168Cu;
        // 0x231690: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23168Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231694u;
label_231694:
    // 0x231694: 0x0  nop
    ctx->pc = 0x231694u;
    // NOP
}
