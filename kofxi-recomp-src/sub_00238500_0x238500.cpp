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

// Function: sub_00238500
// Address: 0x238500 - 0x238710
void sub_00238500_0x238500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238500_0x238500");
#endif

    switch (ctx->pc) {
        case 0x238500u: goto label_238500;
        case 0x238504u: goto label_238504;
        case 0x238508u: goto label_238508;
        case 0x23850cu: goto label_23850c;
        case 0x238510u: goto label_238510;
        case 0x238514u: goto label_238514;
        case 0x238518u: goto label_238518;
        case 0x23851cu: goto label_23851c;
        case 0x238520u: goto label_238520;
        case 0x238524u: goto label_238524;
        case 0x238528u: goto label_238528;
        case 0x23852cu: goto label_23852c;
        case 0x238530u: goto label_238530;
        case 0x238534u: goto label_238534;
        case 0x238538u: goto label_238538;
        case 0x23853cu: goto label_23853c;
        case 0x238540u: goto label_238540;
        case 0x238544u: goto label_238544;
        case 0x238548u: goto label_238548;
        case 0x23854cu: goto label_23854c;
        case 0x238550u: goto label_238550;
        case 0x238554u: goto label_238554;
        case 0x238558u: goto label_238558;
        case 0x23855cu: goto label_23855c;
        case 0x238560u: goto label_238560;
        case 0x238564u: goto label_238564;
        case 0x238568u: goto label_238568;
        case 0x23856cu: goto label_23856c;
        case 0x238570u: goto label_238570;
        case 0x238574u: goto label_238574;
        case 0x238578u: goto label_238578;
        case 0x23857cu: goto label_23857c;
        case 0x238580u: goto label_238580;
        case 0x238584u: goto label_238584;
        case 0x238588u: goto label_238588;
        case 0x23858cu: goto label_23858c;
        case 0x238590u: goto label_238590;
        case 0x238594u: goto label_238594;
        case 0x238598u: goto label_238598;
        case 0x23859cu: goto label_23859c;
        case 0x2385a0u: goto label_2385a0;
        case 0x2385a4u: goto label_2385a4;
        case 0x2385a8u: goto label_2385a8;
        case 0x2385acu: goto label_2385ac;
        case 0x2385b0u: goto label_2385b0;
        case 0x2385b4u: goto label_2385b4;
        case 0x2385b8u: goto label_2385b8;
        case 0x2385bcu: goto label_2385bc;
        case 0x2385c0u: goto label_2385c0;
        case 0x2385c4u: goto label_2385c4;
        case 0x2385c8u: goto label_2385c8;
        case 0x2385ccu: goto label_2385cc;
        case 0x2385d0u: goto label_2385d0;
        case 0x2385d4u: goto label_2385d4;
        case 0x2385d8u: goto label_2385d8;
        case 0x2385dcu: goto label_2385dc;
        case 0x2385e0u: goto label_2385e0;
        case 0x2385e4u: goto label_2385e4;
        case 0x2385e8u: goto label_2385e8;
        case 0x2385ecu: goto label_2385ec;
        case 0x2385f0u: goto label_2385f0;
        case 0x2385f4u: goto label_2385f4;
        case 0x2385f8u: goto label_2385f8;
        case 0x2385fcu: goto label_2385fc;
        case 0x238600u: goto label_238600;
        case 0x238604u: goto label_238604;
        case 0x238608u: goto label_238608;
        case 0x23860cu: goto label_23860c;
        case 0x238610u: goto label_238610;
        case 0x238614u: goto label_238614;
        case 0x238618u: goto label_238618;
        case 0x23861cu: goto label_23861c;
        case 0x238620u: goto label_238620;
        case 0x238624u: goto label_238624;
        case 0x238628u: goto label_238628;
        case 0x23862cu: goto label_23862c;
        case 0x238630u: goto label_238630;
        case 0x238634u: goto label_238634;
        case 0x238638u: goto label_238638;
        case 0x23863cu: goto label_23863c;
        case 0x238640u: goto label_238640;
        case 0x238644u: goto label_238644;
        case 0x238648u: goto label_238648;
        case 0x23864cu: goto label_23864c;
        case 0x238650u: goto label_238650;
        case 0x238654u: goto label_238654;
        case 0x238658u: goto label_238658;
        case 0x23865cu: goto label_23865c;
        case 0x238660u: goto label_238660;
        case 0x238664u: goto label_238664;
        case 0x238668u: goto label_238668;
        case 0x23866cu: goto label_23866c;
        case 0x238670u: goto label_238670;
        case 0x238674u: goto label_238674;
        case 0x238678u: goto label_238678;
        case 0x23867cu: goto label_23867c;
        case 0x238680u: goto label_238680;
        case 0x238684u: goto label_238684;
        case 0x238688u: goto label_238688;
        case 0x23868cu: goto label_23868c;
        case 0x238690u: goto label_238690;
        case 0x238694u: goto label_238694;
        case 0x238698u: goto label_238698;
        case 0x23869cu: goto label_23869c;
        case 0x2386a0u: goto label_2386a0;
        case 0x2386a4u: goto label_2386a4;
        case 0x2386a8u: goto label_2386a8;
        case 0x2386acu: goto label_2386ac;
        case 0x2386b0u: goto label_2386b0;
        case 0x2386b4u: goto label_2386b4;
        case 0x2386b8u: goto label_2386b8;
        case 0x2386bcu: goto label_2386bc;
        case 0x2386c0u: goto label_2386c0;
        case 0x2386c4u: goto label_2386c4;
        case 0x2386c8u: goto label_2386c8;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386d0u: goto label_2386d0;
        case 0x2386d4u: goto label_2386d4;
        case 0x2386d8u: goto label_2386d8;
        case 0x2386dcu: goto label_2386dc;
        case 0x2386e0u: goto label_2386e0;
        case 0x2386e4u: goto label_2386e4;
        case 0x2386e8u: goto label_2386e8;
        case 0x2386ecu: goto label_2386ec;
        case 0x2386f0u: goto label_2386f0;
        case 0x2386f4u: goto label_2386f4;
        case 0x2386f8u: goto label_2386f8;
        case 0x2386fcu: goto label_2386fc;
        case 0x238700u: goto label_238700;
        case 0x238704u: goto label_238704;
        case 0x238708u: goto label_238708;
        case 0x23870cu: goto label_23870c;
        default: break;
    }

    ctx->pc = 0x238500u;

label_238500:
    // 0x238500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_238504:
    // 0x238504: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_238508:
    // 0x238508: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x238508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23850c:
    // 0x23850c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23850cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238510:
    // 0x238510: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x238510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_238514:
    // 0x238514: 0xc08c682  jal         func_231A08
label_238518:
    if (ctx->pc == 0x238518u) {
        ctx->pc = 0x238518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238514u;
        // 0x238518: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23851Cu;
        goto label_23851c;
    }
    ctx->pc = 0x238514u;
    SET_GPR_U32(ctx, 31, 0x23851Cu);
    ctx->pc = 0x238518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238514u;
    // 0x238518: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x238514u, 0x23851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23851Cu;
label_23851c:
    // 0x23851c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23851cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238520:
    // 0x238520: 0xc098552  jal         func_261548
label_238524:
    if (ctx->pc == 0x238524u) {
        ctx->pc = 0x238524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238520u;
        // 0x238524: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238528u;
        goto label_238528;
    }
    ctx->pc = 0x238520u;
    SET_GPR_U32(ctx, 31, 0x238528u);
    ctx->pc = 0x238524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238520u;
    // 0x238524: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x238520u, 0x238528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238528u;
label_238528:
    // 0x238528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23852c:
    // 0x23852c: 0xc08c698  jal         func_231A60
label_238530:
    if (ctx->pc == 0x238530u) {
        ctx->pc = 0x238530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23852Cu;
        // 0x238530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238534u;
        goto label_238534;
    }
    ctx->pc = 0x23852Cu;
    SET_GPR_U32(ctx, 31, 0x238534u);
    ctx->pc = 0x238530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23852Cu;
    // 0x238530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23852Cu, 0x238534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238534u;
label_238534:
    // 0x238534: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_238538:
    if (ctx->pc == 0x238538u) {
        ctx->pc = 0x238538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238534u;
        // 0x238538: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23853Cu;
        goto label_23853c;
    }
    ctx->pc = 0x238534u;
    {
        const bool branch_taken_0x238534 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x238538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238534u;
        // 0x238538: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238534) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x23853Cu;
label_23853c:
    // 0x23853c: 0xc08a8cc  jal         func_22A330
label_238540:
    if (ctx->pc == 0x238540u) {
        ctx->pc = 0x238540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23853Cu;
        // 0x238540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238544u;
        goto label_238544;
    }
    ctx->pc = 0x23853Cu;
    SET_GPR_U32(ctx, 31, 0x238544u);
    ctx->pc = 0x238540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23853Cu;
    // 0x238540: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x23853Cu, 0x238544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238544u;
label_238544:
    // 0x238544: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238548:
    // 0x238548: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_23854c:
    if (ctx->pc == 0x23854Cu) {
        ctx->pc = 0x23854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238548u;
        // 0x23854c: 0x2642000e  addiu       $v0, $s2, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238550u;
        goto label_238550;
    }
    ctx->pc = 0x238548u;
    {
        const bool branch_taken_0x238548 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238548u;
        // 0x23854c: 0x2642000e  addiu       $v0, $s2, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238548) {
            ctx->pc = 0x238580u;
            goto label_238580;
        }
    }
    ctx->pc = 0x238550u;
label_238550:
    // 0x238550: 0x10000069  b           . + 4 + (0x69 << 2)
label_238554:
    if (ctx->pc == 0x238554u) {
        ctx->pc = 0x238554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238550u;
        // 0x238554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238558u;
        goto label_238558;
    }
    ctx->pc = 0x238550u;
    {
        const bool branch_taken_0x238550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238550u;
        // 0x238554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238550) {
            ctx->pc = 0x2386F8u;
            goto label_2386f8;
        }
    }
    ctx->pc = 0x238558u;
label_238558:
    // 0x238558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23855c:
    // 0x23855c: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x23855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_238560:
    // 0x238560: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x238560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_238564:
    // 0x238564: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x238564u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_238568:
    // 0x238568: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x238568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_23856c:
    // 0x23856c: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x23856cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
label_238570:
    // 0x238570: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x238570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_238574:
    // 0x238574: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x238574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_238578:
    // 0x238578: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_23857c:
    if (ctx->pc == 0x23857Cu) {
        ctx->pc = 0x23857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238578u;
        // 0x23857c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238580u;
        goto label_238580;
    }
    ctx->pc = 0x238578u;
    {
        const bool branch_taken_0x238578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238578u;
        // 0x23857c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238578) {
            ctx->pc = 0x238548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238548;
        }
    }
    ctx->pc = 0x238580u;
label_238580:
    // 0x238580: 0x2c4200e1  sltiu       $v0, $v0, 0xE1
    ctx->pc = 0x238580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
label_238584:
    // 0x238584: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
label_238588:
    if (ctx->pc == 0x238588u) {
        ctx->pc = 0x238588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238584u;
        // 0x238588: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23858Cu;
        goto label_23858c;
    }
    ctx->pc = 0x238584u;
    {
        const bool branch_taken_0x238584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238584) {
            ctx->pc = 0x238588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238584u;
            // 0x238588: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2386E0u;
            goto label_2386e0;
        }
    }
    ctx->pc = 0x23858Cu;
label_23858c:
    // 0x23858c: 0xc08c682  jal         func_231A08
label_238590:
    if (ctx->pc == 0x238590u) {
        ctx->pc = 0x238594u;
        goto label_238594;
    }
    ctx->pc = 0x23858Cu;
    SET_GPR_U32(ctx, 31, 0x238594u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23858Cu, 0x238594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238594u;
label_238594:
    // 0x238594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238598:
    // 0x238598: 0xc098552  jal         func_261548
label_23859c:
    if (ctx->pc == 0x23859Cu) {
        ctx->pc = 0x23859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238598u;
        // 0x23859c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385A0u;
        goto label_2385a0;
    }
    ctx->pc = 0x238598u;
    SET_GPR_U32(ctx, 31, 0x2385A0u);
    ctx->pc = 0x23859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238598u;
    // 0x23859c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x238598u, 0x2385A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385A0u;
label_2385a0:
    // 0x2385a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2385a4:
    if (ctx->pc == 0x2385A4u) {
        ctx->pc = 0x2385A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385A0u;
        // 0x2385a4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385A8u;
        goto label_2385a8;
    }
    ctx->pc = 0x2385A0u;
    {
        const bool branch_taken_0x2385a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2385A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385A0u;
        // 0x2385a4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385a0) {
            ctx->pc = 0x2385C0u;
            goto label_2385c0;
        }
    }
    ctx->pc = 0x2385A8u;
label_2385a8:
    // 0x2385a8: 0xc08a8ec  jal         func_22A3B0
label_2385ac:
    if (ctx->pc == 0x2385ACu) {
        ctx->pc = 0x2385ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385A8u;
        // 0x2385ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385B0u;
        goto label_2385b0;
    }
    ctx->pc = 0x2385A8u;
    SET_GPR_U32(ctx, 31, 0x2385B0u);
    ctx->pc = 0x2385ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385A8u;
    // 0x2385ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x2385A8u, 0x2385B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385B0u;
label_2385b0:
    // 0x2385b0: 0xc098552  jal         func_261548
label_2385b4:
    if (ctx->pc == 0x2385B4u) {
        ctx->pc = 0x2385B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385B0u;
        // 0x2385b4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385B8u;
        goto label_2385b8;
    }
    ctx->pc = 0x2385B0u;
    SET_GPR_U32(ctx, 31, 0x2385B8u);
    ctx->pc = 0x2385B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385B0u;
    // 0x2385b4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2385B0u, 0x2385B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385B8u;
label_2385b8:
    // 0x2385b8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2385b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2385bc:
    // 0x2385bc: 0x0  nop
    ctx->pc = 0x2385bcu;
    // NOP
label_2385c0:
    // 0x2385c0: 0xc08c698  jal         func_231A60
label_2385c4:
    if (ctx->pc == 0x2385C4u) {
        ctx->pc = 0x2385C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385C0u;
        // 0x2385c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385C8u;
        goto label_2385c8;
    }
    ctx->pc = 0x2385C0u;
    SET_GPR_U32(ctx, 31, 0x2385C8u);
    ctx->pc = 0x2385C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385C0u;
    // 0x2385c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2385C0u, 0x2385C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385C8u;
label_2385c8:
    // 0x2385c8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2385c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2385cc:
    // 0x2385cc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2385d0:
    if (ctx->pc == 0x2385D0u) {
        ctx->pc = 0x2385D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385CCu;
        // 0x2385d0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385D4u;
        goto label_2385d4;
    }
    ctx->pc = 0x2385CCu;
    {
        const bool branch_taken_0x2385cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385CCu;
        // 0x2385d0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385cc) {
            ctx->pc = 0x2385F8u;
            goto label_2385f8;
        }
    }
    ctx->pc = 0x2385D4u;
label_2385d4:
    // 0x2385d4: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2385d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2385d8:
    // 0x2385d8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2385d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_2385dc:
    // 0x2385dc: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2385dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_2385e0:
    // 0x2385e0: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2385e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_2385e4:
    // 0x2385e4: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2385e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_2385e8:
    // 0x2385e8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2385e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_2385ec:
    // 0x2385ec: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2385ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2385f0:
    // 0x2385f0: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x2385f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
label_2385f4:
    // 0x2385f4: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2385f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_2385f8:
    // 0x2385f8: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2385f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2385fc:
    // 0x2385fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2385fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_238600:
    // 0x238600: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_238604:
    if (ctx->pc == 0x238604u) {
        ctx->pc = 0x238604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238600u;
        // 0x238604: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238608u;
        goto label_238608;
    }
    ctx->pc = 0x238600u;
    {
        const bool branch_taken_0x238600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238600) {
            ctx->pc = 0x238604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238600u;
            // 0x238604: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2386E0u;
            goto label_2386e0;
        }
    }
    ctx->pc = 0x238608u;
label_238608:
    // 0x238608: 0xc08c682  jal         func_231A08
label_23860c:
    if (ctx->pc == 0x23860Cu) {
        ctx->pc = 0x238610u;
        goto label_238610;
    }
    ctx->pc = 0x238608u;
    SET_GPR_U32(ctx, 31, 0x238610u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x238608u, 0x238610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238610u;
label_238610:
    // 0x238610: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x238610u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_238614:
    // 0x238614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238618:
    // 0x238618: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x238618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_23861c:
    // 0x23861c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_238620:
    if (ctx->pc == 0x238620u) {
        ctx->pc = 0x238620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23861Cu;
        // 0x238620: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x238624u;
        goto label_238624;
    }
    ctx->pc = 0x23861Cu;
    {
        const bool branch_taken_0x23861c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23861Cu;
        // 0x238620: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23861c) {
            ctx->pc = 0x238648u;
            goto label_238648;
        }
    }
    ctx->pc = 0x238624u;
label_238624:
    // 0x238624: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x238624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_238628:
    // 0x238628: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_23862c:
    if (ctx->pc == 0x23862Cu) {
        ctx->pc = 0x238630u;
        goto label_238630;
    }
    ctx->pc = 0x238628u;
    {
        const bool branch_taken_0x238628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238628) {
            ctx->pc = 0x238648u;
            goto label_238648;
        }
    }
    ctx->pc = 0x238630u;
label_238630:
    // 0x238630: 0xc08a9d6  jal         func_22A758
label_238634:
    if (ctx->pc == 0x238634u) {
        ctx->pc = 0x238638u;
        goto label_238638;
    }
    ctx->pc = 0x238630u;
    SET_GPR_U32(ctx, 31, 0x238638u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x238630u, 0x238638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238638u;
label_238638:
    // 0x238638: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x238638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_23863c:
    // 0x23863c: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x23863cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_238640:
    // 0x238640: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x238640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_238644:
    // 0x238644: 0x0  nop
    ctx->pc = 0x238644u;
    // NOP
label_238648:
    // 0x238648: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_23864c:
    if (ctx->pc == 0x23864Cu) {
        ctx->pc = 0x238650u;
        goto label_238650;
    }
    ctx->pc = 0x238648u;
    {
        const bool branch_taken_0x238648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238648) {
            ctx->pc = 0x2386C8u;
            goto label_2386c8;
        }
    }
    ctx->pc = 0x238650u;
label_238650:
    // 0x238650: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x238650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_238654:
    // 0x238654: 0x50710008  beql        $v1, $s1, . + 4 + (0x8 << 2)
label_238658:
    if (ctx->pc == 0x238658u) {
        ctx->pc = 0x238658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238654u;
        // 0x238658: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23865Cu;
        goto label_23865c;
    }
    ctx->pc = 0x238654u;
    {
        const bool branch_taken_0x238654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x238654) {
            ctx->pc = 0x238658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238654u;
            // 0x238658: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x238678u;
            goto label_238678;
        }
    }
    ctx->pc = 0x23865Cu;
label_23865c:
    // 0x23865c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x23865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_238660:
    // 0x238660: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x238660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_238664:
    // 0x238664: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x238664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_238668:
    // 0x238668: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x238668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_23866c:
    // 0x23866c: 0x10000012  b           . + 4 + (0x12 << 2)
label_238670:
    if (ctx->pc == 0x238670u) {
        ctx->pc = 0x238670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23866Cu;
        // 0x238670: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238674u;
        goto label_238674;
    }
    ctx->pc = 0x23866Cu;
    {
        const bool branch_taken_0x23866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23866Cu;
        // 0x238670: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23866c) {
            ctx->pc = 0x2386B8u;
            goto label_2386b8;
        }
    }
    ctx->pc = 0x238674u;
label_238674:
    // 0x238674: 0x0  nop
    ctx->pc = 0x238674u;
    // NOP
label_238678:
    // 0x238678: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23867c:
    if (ctx->pc == 0x23867Cu) {
        ctx->pc = 0x23867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238678u;
        // 0x23867c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238680u;
        goto label_238680;
    }
    ctx->pc = 0x238678u;
    {
        const bool branch_taken_0x238678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238678) {
            ctx->pc = 0x23867Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238678u;
            // 0x23867c: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238690u;
            goto label_238690;
        }
    }
    ctx->pc = 0x238680u;
label_238680:
    // 0x238680: 0xc098560  jal         func_261580
label_238684:
    if (ctx->pc == 0x238684u) {
        ctx->pc = 0x238684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238680u;
        // 0x238684: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238688u;
        goto label_238688;
    }
    ctx->pc = 0x238680u;
    SET_GPR_U32(ctx, 31, 0x238688u);
    ctx->pc = 0x238684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238680u;
    // 0x238684: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x238680u, 0x238688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238688u;
label_238688:
    // 0x238688: 0x1000000c  b           . + 4 + (0xC << 2)
label_23868c:
    if (ctx->pc == 0x23868Cu) {
        ctx->pc = 0x23868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238688u;
        // 0x23868c: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238690u;
        goto label_238690;
    }
    ctx->pc = 0x238688u;
    {
        const bool branch_taken_0x238688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238688u;
        // 0x23868c: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238688) {
            ctx->pc = 0x2386BCu;
            goto label_2386bc;
        }
    }
    ctx->pc = 0x238690u;
label_238690:
    // 0x238690: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_238694:
    if (ctx->pc == 0x238694u) {
        ctx->pc = 0x238698u;
        goto label_238698;
    }
    ctx->pc = 0x238690u;
    {
        const bool branch_taken_0x238690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238690) {
            ctx->pc = 0x2386B0u;
            goto label_2386b0;
        }
    }
    ctx->pc = 0x238698u;
label_238698:
    // 0x238698: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x238698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_23869c:
    // 0x23869c: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x23869cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2386a0:
    // 0x2386a0: 0x40f809  jalr        $v0
label_2386a4:
    if (ctx->pc == 0x2386A4u) {
        ctx->pc = 0x2386A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386A0u;
        // 0x2386a4: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386A8u;
        goto label_2386a8;
    }
    ctx->pc = 0x2386A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2386A8u);
        ctx->pc = 0x2386A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386A0u;
        // 0x2386a4: 0x8e260028  lw          $a2, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2386A0u, 0x2386A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2386A8u;
label_2386a8:
    // 0x2386a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2386ac:
    if (ctx->pc == 0x2386ACu) {
        ctx->pc = 0x2386ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386A8u;
        // 0x2386ac: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386B0u;
        goto label_2386b0;
    }
    ctx->pc = 0x2386A8u;
    {
        const bool branch_taken_0x2386a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386A8u;
        // 0x2386ac: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386a8) {
            ctx->pc = 0x2386BCu;
            goto label_2386bc;
        }
    }
    ctx->pc = 0x2386B0u;
label_2386b0:
    // 0x2386b0: 0xc098560  jal         func_261580
label_2386b4:
    if (ctx->pc == 0x2386B4u) {
        ctx->pc = 0x2386B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386B0u;
        // 0x2386b4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386B8u;
        goto label_2386b8;
    }
    ctx->pc = 0x2386B0u;
    SET_GPR_U32(ctx, 31, 0x2386B8u);
    ctx->pc = 0x2386B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386B0u;
    // 0x2386b4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2386B0u, 0x2386B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386B8u;
label_2386b8:
    // 0x2386b8: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2386b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2386bc:
    // 0x2386bc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2386bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2386c0:
    // 0x2386c0: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x2386c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_2386c4:
    // 0x2386c4: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2386c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_2386c8:
    // 0x2386c8: 0xc098560  jal         func_261580
label_2386cc:
    if (ctx->pc == 0x2386CCu) {
        ctx->pc = 0x2386CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386C8u;
        // 0x2386cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386D0u;
        goto label_2386d0;
    }
    ctx->pc = 0x2386C8u;
    SET_GPR_U32(ctx, 31, 0x2386D0u);
    ctx->pc = 0x2386CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386C8u;
    // 0x2386cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2386C8u, 0x2386D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386D0u;
label_2386d0:
    // 0x2386d0: 0xc08c698  jal         func_231A60
label_2386d4:
    if (ctx->pc == 0x2386D4u) {
        ctx->pc = 0x2386D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386D0u;
        // 0x2386d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386D8u;
        goto label_2386d8;
    }
    ctx->pc = 0x2386D0u;
    SET_GPR_U32(ctx, 31, 0x2386D8u);
    ctx->pc = 0x2386D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386D0u;
    // 0x2386d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2386D0u, 0x2386D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386D8u;
label_2386d8:
    // 0x2386d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2386dc:
    if (ctx->pc == 0x2386DCu) {
        ctx->pc = 0x2386DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386D8u;
        // 0x2386dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386E0u;
        goto label_2386e0;
    }
    ctx->pc = 0x2386D8u;
    {
        const bool branch_taken_0x2386d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386D8u;
        // 0x2386dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386d8) {
            ctx->pc = 0x2386F8u;
            goto label_2386f8;
        }
    }
    ctx->pc = 0x2386E0u;
label_2386e0:
    // 0x2386e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2386e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2386e4:
    // 0x2386e4: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x2386e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
label_2386e8:
    // 0x2386e8: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x2386e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_2386ec:
    // 0x2386ec: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x2386ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_2386f0:
    // 0x2386f0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2386f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2386f4:
    // 0x2386f4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2386f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2386f8:
    // 0x2386f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2386f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2386fc:
    // 0x2386fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2386fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238700:
    // 0x238700: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238704:
    // 0x238704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238708:
    // 0x238708: 0x3e00008  jr          $ra
label_23870c:
    if (ctx->pc == 0x23870Cu) {
        ctx->pc = 0x23870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238708u;
        // 0x23870c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238710u;
        goto label_fallthrough_0x238708;
    }
    ctx->pc = 0x238708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238708u;
        // 0x23870c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x238708:
    ctx->pc = 0x238710u;
}
