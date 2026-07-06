#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204510
// Address: 0x204510 - 0x204890
void sub_00204510_0x204510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204510_0x204510");
#endif

    switch (ctx->pc) {
        case 0x204624u: goto label_204624;
        case 0x204650u: goto label_204650;
        case 0x204660u: goto label_204660;
        case 0x204774u: goto label_204774;
        case 0x2047acu: goto label_2047ac;
        case 0x20482cu: goto label_20482c;
        case 0x20485cu: goto label_20485c;
        default: break;
    }

    ctx->pc = 0x204510u;

    // 0x204510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x204514: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204518: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x204518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20451c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20451cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x204520: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x204520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x204524: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x204524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x204528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x204528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20452c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x204530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x204534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20453c: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204540: 0x908504f0  lbu         $a1, 0x4F0($a0)
    ctx->pc = 0x204540u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x204544: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204548: 0x54a30002  bnel        $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x204548u;
    {
        const bool branch_taken_0x204548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x204548) {
            ctx->pc = 0x20454Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204548u;
            // 0x20454c: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204554u;
            goto label_204554;
        }
    }
    ctx->pc = 0x204550u;
    // 0x204550: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x204550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_204554:
    // 0x204554: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x204554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x204558: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204558u;
    {
        const bool branch_taken_0x204558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204558u;
            // 0x20455c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204558) {
            ctx->pc = 0x204568u;
            goto label_204568;
        }
    }
    ctx->pc = 0x204560u;
    // 0x204560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204560u;
    {
        const bool branch_taken_0x204560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204560u;
            // 0x204564: 0x2417000c  addiu       $s7, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204560) {
            ctx->pc = 0x20456Cu;
            goto label_20456c;
        }
    }
    ctx->pc = 0x204568u;
label_204568:
    // 0x204568: 0x90970502  lbu         $s7, 0x502($a0)
    ctx->pc = 0x204568u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1282)));
label_20456c:
    // 0x20456c: 0x908804ff  lbu         $t0, 0x4FF($a0)
    ctx->pc = 0x20456cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1279)));
    // 0x204570: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204570u;
    {
        const bool branch_taken_0x204570 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x204570) {
            ctx->pc = 0x204574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204570u;
            // 0x204574: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204588u;
            goto label_204588;
        }
    }
    ctx->pc = 0x204578u;
    // 0x204578: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x20457c: 0x50a000b8  beql        $a1, $zero, . + 4 + (0xB8 << 2)
    ctx->pc = 0x20457Cu;
    {
        const bool branch_taken_0x20457c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20457c) {
            ctx->pc = 0x204580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20457Cu;
            // 0x204580: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204860u;
            goto label_204860;
        }
    }
    ctx->pc = 0x204584u;
    // 0x204584: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x204584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_204588:
    // 0x204588: 0x10a000b4  beqz        $a1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x204588u;
    {
        const bool branch_taken_0x204588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x204588) {
            ctx->pc = 0x20485Cu;
            goto label_20485c;
        }
    }
    ctx->pc = 0x204590u;
    // 0x204590: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x204590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x204594: 0x8ca79bf8  lw          $a3, -0x6408($a1)
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x204598: 0x90e604f9  lbu         $a2, 0x4F9($a3)
    ctx->pc = 0x204598u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1273)));
    // 0x20459c: 0x8ce5005c  lw          $a1, 0x5C($a3)
    ctx->pc = 0x20459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x2045a0: 0x14c500ae  bne         $a2, $a1, . + 4 + (0xAE << 2)
    ctx->pc = 0x2045A0u;
    {
        const bool branch_taken_0x2045a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x2045a0) {
            ctx->pc = 0x20485Cu;
            goto label_20485c;
        }
    }
    ctx->pc = 0x2045A8u;
    // 0x2045a8: 0x55000009  bnel        $t0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2045A8u;
    {
        const bool branch_taken_0x2045a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2045a8) {
            ctx->pc = 0x2045ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2045A8u;
            // 0x2045ac: 0x90e604fa  lbu         $a2, 0x4FA($a3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1274)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2045D0u;
            goto label_2045d0;
        }
    }
    ctx->pc = 0x2045B0u;
    // 0x2045b0: 0x90e604fa  lbu         $a2, 0x4FA($a3)
    ctx->pc = 0x2045b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1274)));
    // 0x2045b4: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x2045b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x2045b8: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2045bc: 0x24130150  addiu       $s3, $zero, 0x150
    ctx->pc = 0x2045bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2045c0: 0x10c50008  beq         $a2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2045C0u;
    {
        const bool branch_taken_0x2045c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2045C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2045C0u;
            // 0x2045c4: 0x26d69820  addiu       $s6, $s6, -0x67E0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045c0) {
            ctx->pc = 0x2045E4u;
            goto label_2045e4;
        }
    }
    ctx->pc = 0x2045C8u;
    // 0x2045c8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2045C8u;
    {
        const bool branch_taken_0x2045c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2045c8) {
            ctx->pc = 0x20485Cu;
            goto label_20485c;
        }
    }
    ctx->pc = 0x2045D0u;
label_2045d0:
    // 0x2045d0: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x2045d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x2045d4: 0x90e50065  lbu         $a1, 0x65($a3)
    ctx->pc = 0x2045d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 101)));
    // 0x2045d8: 0x2413003e  addiu       $s3, $zero, 0x3E
    ctx->pc = 0x2045d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2045dc: 0x14c5009f  bne         $a2, $a1, . + 4 + (0x9F << 2)
    ctx->pc = 0x2045DCu;
    {
        const bool branch_taken_0x2045dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2045E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2045DCu;
            // 0x2045e0: 0x26d69860  addiu       $s6, $s6, -0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045dc) {
            ctx->pc = 0x20485Cu;
            goto label_20485c;
        }
    }
    ctx->pc = 0x2045E4u;
label_2045e4:
    // 0x2045e4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2045e8: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x2045ec: 0x90b404fc  lbu         $s4, 0x4FC($a1)
    ctx->pc = 0x2045ecu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1276)));
    // 0x2045f0: 0x90a504fe  lbu         $a1, 0x4FE($a1)
    ctx->pc = 0x2045f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1278)));
    // 0x2045f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2045f8: 0x285082a  slt         $at, $s4, $a1
    ctx->pc = 0x2045f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2045fc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2045FCu;
    {
        const bool branch_taken_0x2045fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2045fc) {
            ctx->pc = 0x204698u;
            goto label_204698;
        }
    }
    ctx->pc = 0x204604u;
    // 0x204604: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x204604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204608: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x204608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x20460c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x204610: 0x2c69021  addu        $s2, $s6, $a2
    ctx->pc = 0x204610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x204614: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x204614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204618: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x204618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x20461c: 0x24639c80  addiu       $v1, $v1, -0x6380
    ctx->pc = 0x20461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941824));
    // 0x204620: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x204620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_204624:
    // 0x204624: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204628: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x204628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20462c: 0x907504fb  lbu         $s5, 0x4FB($v1)
    ctx->pc = 0x20462cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1275)));
    // 0x204630: 0x906304fd  lbu         $v1, 0x4FD($v1)
    ctx->pc = 0x204630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1277)));
    // 0x204634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204638: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x204638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20463c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x20463Cu;
    {
        const bool branch_taken_0x20463c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20463c) {
            ctx->pc = 0x204680u;
            goto label_204680;
        }
    }
    ctx->pc = 0x204644u;
    // 0x204644: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x204644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x204648: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x204648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x20464c: 0x0  nop
    ctx->pc = 0x20464cu;
    // NOP
label_204650:
    // 0x204650: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x204650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x204654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204658: 0xc081120  jal         func_204480
    ctx->pc = 0x204658u;
    SET_GPR_U32(ctx, 31, 0x204660u);
    ctx->pc = 0x20465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204658u;
            // 0x20465c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204660u; }
        if (ctx->pc != 0x204660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204660u; }
        if (ctx->pc != 0x204660u) { return; }
    }
    ctx->pc = 0x204660u;
label_204660:
    // 0x204660: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204664: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x204664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x204668: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x204668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20466c: 0x908304fd  lbu         $v1, 0x4FD($a0)
    ctx->pc = 0x20466cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1277)));
    // 0x204670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204674: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x204674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204678: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x204678u;
    {
        const bool branch_taken_0x204678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204678u;
            // 0x20467c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204678) {
            ctx->pc = 0x204650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204650;
        }
    }
    ctx->pc = 0x204680u;
label_204680:
    // 0x204680: 0x908304fe  lbu         $v1, 0x4FE($a0)
    ctx->pc = 0x204680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1278)));
    // 0x204684: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x204684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x204688: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20468c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x20468cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204690: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x204690u;
    {
        const bool branch_taken_0x204690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204690u;
            // 0x204694: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204690) {
            ctx->pc = 0x204624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204624;
        }
    }
    ctx->pc = 0x204698u;
label_204698:
    // 0x204698: 0x908404f0  lbu         $a0, 0x4F0($a0)
    ctx->pc = 0x204698u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x20469c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2046a0: 0x1483006e  bne         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2046A0u;
    {
        const bool branch_taken_0x2046a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2046a0) {
            ctx->pc = 0x20485Cu;
            goto label_20485c;
        }
    }
    ctx->pc = 0x2046A8u;
    // 0x2046a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2046a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2046ac: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x2046acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x2046b0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2046b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2046b4: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x2046b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2046b8: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x2046B8u;
    {
        const bool branch_taken_0x2046b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2046b8) {
            ctx->pc = 0x20485Cu;
            goto label_20485c;
        }
    }
    ctx->pc = 0x2046C0u;
    // 0x2046c0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2046c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2046c4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2046c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2046c8: 0x8c669bf8  lw          $a2, -0x6408($v1)
    ctx->pc = 0x2046c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2046cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2046ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2046d0: 0x90c504fb  lbu         $a1, 0x4FB($a2)
    ctx->pc = 0x2046d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1275)));
    // 0x2046d4: 0x90c304fd  lbu         $v1, 0x4FD($a2)
    ctx->pc = 0x2046d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1277)));
    // 0x2046d8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2046dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2046dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2046e0: 0x0  nop
    ctx->pc = 0x2046e0u;
    // NOP
    // 0x2046e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2046e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2046e8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2046e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2046ec: 0x0  nop
    ctx->pc = 0x2046ecu;
    // NOP
    // 0x2046f0: 0x0  nop
    ctx->pc = 0x2046f0u;
    // NOP
    // 0x2046f4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2046F4u;
    {
        const bool branch_taken_0x2046f4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2046f4) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046FCu;
    // 0x2046fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2046fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x204700u;
    {
        const bool branch_taken_0x204700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204700u;
            // 0x204704: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204700) {
            ctx->pc = 0x204724u;
            goto label_204724;
        }
    }
    ctx->pc = 0x204708u;
label_204708:
    // 0x204708: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x204708u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x20470c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x20470cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x204710: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x204710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x204714: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x204714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204718: 0x0  nop
    ctx->pc = 0x204718u;
    // NOP
    // 0x20471c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20471cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x204720: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x204720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_204724:
    // 0x204724: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x204724u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204728: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x204728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x20472c: 0x90c404fc  lbu         $a0, 0x4FC($a2)
    ctx->pc = 0x20472cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1276)));
    // 0x204730: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x204730u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204734: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x204734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x204738: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x204738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20473c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x20473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x204740: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204748: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x204748u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20474c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20474cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x204750: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x204750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x204754: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x204754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x204758: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x204758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x20475c: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20475Cu;
    {
        const bool branch_taken_0x20475c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x204760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20475Cu;
            // 0x204760: 0x2465fff0  addiu       $a1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20475c) {
            ctx->pc = 0x204774u;
            goto label_204774;
        }
    }
    ctx->pc = 0x204764u;
    // 0x204764: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20476c: 0xc081120  jal         func_204480
    ctx->pc = 0x20476Cu;
    SET_GPR_U32(ctx, 31, 0x204774u);
    ctx->pc = 0x204770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20476Cu;
            // 0x204770: 0x24c6a10c  addiu       $a2, $a2, -0x5EF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204774u; }
        if (ctx->pc != 0x204774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204774u; }
        if (ctx->pc != 0x204774u) { return; }
    }
    ctx->pc = 0x204774u;
label_204774:
    // 0x204774: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x204774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204778: 0x26e4ffff  addiu       $a0, $s7, -0x1
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x20477c: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204780: 0x906604fe  lbu         $a2, 0x4FE($v1)
    ctx->pc = 0x204780u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1278)));
    // 0x204784: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x204788: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x204788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20478c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x20478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x204790: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x204790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204794: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x204794u;
    {
        const bool branch_taken_0x204794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204794u;
            // 0x204798: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204794) {
            ctx->pc = 0x2047ACu;
            goto label_2047ac;
        }
    }
    ctx->pc = 0x20479Cu;
    // 0x20479c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20479cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2047a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2047a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2047a4: 0xc081120  jal         func_204480
    ctx->pc = 0x2047A4u;
    SET_GPR_U32(ctx, 31, 0x2047ACu);
    ctx->pc = 0x2047A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2047A4u;
            // 0x2047a8: 0x24c6a118  addiu       $a2, $a2, -0x5EE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047ACu; }
        if (ctx->pc != 0x2047ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047ACu; }
        if (ctx->pc != 0x2047ACu) { return; }
    }
    ctx->pc = 0x2047ACu;
label_2047ac:
    // 0x2047ac: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2047b0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2047b4: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2047b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2047b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2047bc: 0x906704fb  lbu         $a3, 0x4FB($v1)
    ctx->pc = 0x2047bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1275)));
    // 0x2047c0: 0x906404fc  lbu         $a0, 0x4FC($v1)
    ctx->pc = 0x2047c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1276)));
    // 0x2047c4: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x2047c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2047c8: 0x906304fe  lbu         $v1, 0x4FE($v1)
    ctx->pc = 0x2047c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1278)));
    // 0x2047cc: 0x24a6fff0  addiu       $a2, $a1, -0x10
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2047d0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2047d4: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x2047d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2047d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2047d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2047dc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2047dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2047e0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2047e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2047e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2047e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2047e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2047e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2047ec: 0x0  nop
    ctx->pc = 0x2047ecu;
    // NOP
    // 0x2047f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2047f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2047f4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2047f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2047f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2047f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2047fc: 0x0  nop
    ctx->pc = 0x2047fcu;
    // NOP
    // 0x204800: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x204800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x204804: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x204804u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x204808: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x204808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20480c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20480cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x204810: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x204810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x204814: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x204814u;
    {
        const bool branch_taken_0x204814 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x204818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204814u;
            // 0x204818: 0x2662021  addu        $a0, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204814) {
            ctx->pc = 0x20482Cu;
            goto label_20482c;
        }
    }
    ctx->pc = 0x20481Cu;
    // 0x20481c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20481cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204824: 0xc081120  jal         func_204480
    ctx->pc = 0x204824u;
    SET_GPR_U32(ctx, 31, 0x20482Cu);
    ctx->pc = 0x204828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204824u;
            // 0x204828: 0x24c6a124  addiu       $a2, $a2, -0x5EDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943012));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20482Cu; }
        if (ctx->pc != 0x20482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20482Cu; }
        if (ctx->pc != 0x20482Cu) { return; }
    }
    ctx->pc = 0x20482Cu;
label_20482c:
    // 0x20482c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20482cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x204830: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x204830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x204834: 0x906504fd  lbu         $a1, 0x4FD($v1)
    ctx->pc = 0x204834u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1277)));
    // 0x204838: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x204838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20483c: 0x28a1000e  slti        $at, $a1, 0xE
    ctx->pc = 0x20483cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x204840: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x204844: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x204844u;
    {
        const bool branch_taken_0x204844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204844u;
            // 0x204848: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204844) {
            ctx->pc = 0x20485Cu;
            goto label_20485c;
        }
    }
    ctx->pc = 0x20484Cu;
    // 0x20484c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20484cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x204850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204854: 0xc081120  jal         func_204480
    ctx->pc = 0x204854u;
    SET_GPR_U32(ctx, 31, 0x20485Cu);
    ctx->pc = 0x204858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204854u;
            // 0x204858: 0x24c6a130  addiu       $a2, $a2, -0x5ED0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (runtime->hasFunction(0x204480u)) {
        auto targetFn = runtime->lookupFunction(0x204480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20485Cu; }
        if (ctx->pc != 0x20485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204480_0x204480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20485Cu; }
        if (ctx->pc != 0x20485Cu) { return; }
    }
    ctx->pc = 0x20485Cu;
label_20485c:
    // 0x20485c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x20485cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_204860:
    // 0x204860: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x204860u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x204864: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x204864u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x204868: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x204868u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20486c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20486cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204870: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20487c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20487cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204880: 0x3e00008  jr          $ra
    ctx->pc = 0x204880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204880u;
            // 0x204884: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204888u;
    // 0x204888: 0x0  nop
    ctx->pc = 0x204888u;
    // NOP
    // 0x20488c: 0x0  nop
    ctx->pc = 0x20488cu;
    // NOP
    ctx->pc = 0x204890u;
}
