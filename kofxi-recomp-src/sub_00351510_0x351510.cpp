#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351510
// Address: 0x351510 - 0x351940
void sub_00351510_0x351510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351510_0x351510");
#endif

    switch (ctx->pc) {
        case 0x35155cu: goto label_35155c;
        case 0x351568u: goto label_351568;
        case 0x3515d0u: goto label_3515d0;
        case 0x35162cu: goto label_35162c;
        case 0x351634u: goto label_351634;
        case 0x351660u: goto label_351660;
        case 0x3516b4u: goto label_3516b4;
        case 0x3516c0u: goto label_3516c0;
        case 0x3516e0u: goto label_3516e0;
        case 0x3516f4u: goto label_3516f4;
        case 0x351754u: goto label_351754;
        case 0x3517e4u: goto label_3517e4;
        case 0x3517f0u: goto label_3517f0;
        case 0x351838u: goto label_351838;
        case 0x351890u: goto label_351890;
        case 0x3518d0u: goto label_3518d0;
        case 0x351924u: goto label_351924;
        default: break;
    }

    ctx->pc = 0x351510u;

label_351510:
    // 0x351510: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x351510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x351514: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x351514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x351518: 0x90689490  lbu         $t0, -0x6B70($v1)
    ctx->pc = 0x351518u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939792)));
    // 0x35151c: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x35151cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x351520: 0x90859488  lbu         $a1, -0x6B78($a0)
    ctx->pc = 0x351520u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294939784)));
    // 0x351524: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x351524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x351528: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x351528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35152c: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x35152cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x351530: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x351530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x351534: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x351534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x351538: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x351538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35153c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x35153cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x351540: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x351540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351544: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x351544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x351548: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x351548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35154c: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x35154cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x351550: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x351550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351554: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x351554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x351558: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x351558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_35155c:
    // 0x35155c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35155cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351560: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x351560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351564: 0x0  nop
    ctx->pc = 0x351564u;
    // NOP
label_351568:
    // 0x351568: 0x90e50150  lbu         $a1, 0x150($a3)
    ctx->pc = 0x351568u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x35156c: 0x90c40150  lbu         $a0, 0x150($a2)
    ctx->pc = 0x35156cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x351570: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x351570u;
    {
        const bool branch_taken_0x351570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x351570) {
            ctx->pc = 0x3515A8u;
            goto label_3515a8;
        }
    }
    ctx->pc = 0x351578u;
    // 0x351578: 0x90e50151  lbu         $a1, 0x151($a3)
    ctx->pc = 0x351578u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 337)));
    // 0x35157c: 0x28a1000c  slti        $at, $a1, 0xC
    ctx->pc = 0x35157cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x351580: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x351580u;
    {
        const bool branch_taken_0x351580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351580) {
            ctx->pc = 0x3515A8u;
            goto label_3515a8;
        }
    }
    ctx->pc = 0x351588u;
    // 0x351588: 0x90c40151  lbu         $a0, 0x151($a2)
    ctx->pc = 0x351588u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 337)));
    // 0x35158c: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35158Cu;
    {
        const bool branch_taken_0x35158c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x35158c) {
            ctx->pc = 0x3515A8u;
            goto label_3515a8;
        }
    }
    ctx->pc = 0x351594u;
    // 0x351594: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x351594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x351598: 0xa0e40151  sb          $a0, 0x151($a3)
    ctx->pc = 0x351598u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 337), (uint8_t)GPR_U32(ctx, 4));
    // 0x35159c: 0x90e40152  lbu         $a0, 0x152($a3)
    ctx->pc = 0x35159cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 338)));
    // 0x3515a0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3515a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3515a4: 0xa0e40152  sb          $a0, 0x152($a3)
    ctx->pc = 0x3515a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 338), (uint8_t)GPR_U32(ctx, 4));
label_3515a8:
    // 0x3515a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3515a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3515ac: 0x29240003  slti        $a0, $t1, 0x3
    ctx->pc = 0x3515acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3515b0: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3515B0u;
    {
        const bool branch_taken_0x3515b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3515B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3515B0u;
            // 0x3515b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515b0) {
            ctx->pc = 0x351568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351568;
        }
    }
    ctx->pc = 0x3515B8u;
    // 0x3515b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3515b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3515bc: 0x28640003  slti        $a0, $v1, 0x3
    ctx->pc = 0x3515bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3515c0: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3515C0u;
    {
        const bool branch_taken_0x3515c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3515C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3515C0u;
            // 0x3515c4: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515c0) {
            ctx->pc = 0x35155Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35155c;
        }
    }
    ctx->pc = 0x3515C8u;
    // 0x3515c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3515C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3515D0u;
label_3515d0:
    // 0x3515d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3515d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3515d4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3515d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3515d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3515d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3515dc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3515dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3515e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3515e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3515e4: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x3515e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x3515e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3515e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3515ec: 0x90469490  lbu         $a2, -0x6B70($v0)
    ctx->pc = 0x3515ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x3515f0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3515f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3515f4: 0x90439488  lbu         $v1, -0x6B78($v0)
    ctx->pc = 0x3515f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939784)));
    // 0x3515f8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3515f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3515fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3515fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x351600: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x351600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x351604: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x351604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x351608: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x351608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x35160c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351610: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x351610u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x351614: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x351614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x351618: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x351618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35161c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351620: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x351620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x351624: 0xc0d4544  jal         func_351510
    ctx->pc = 0x351624u;
    SET_GPR_U32(ctx, 31, 0x35162Cu);
    ctx->pc = 0x351628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351624u;
            // 0x351628: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351510u;
    goto label_351510;
    ctx->pc = 0x35162Cu;
label_35162c:
    // 0x35162c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35162cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351630: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x351630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351634:
    // 0x351634: 0x92220151  lbu         $v0, 0x151($s1)
    ctx->pc = 0x351634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 337)));
    // 0x351638: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x351638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x35163c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35163Cu;
    {
        const bool branch_taken_0x35163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35163c) {
            ctx->pc = 0x351648u;
            goto label_351648;
        }
    }
    ctx->pc = 0x351644u;
    // 0x351644: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x351644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_351648:
    // 0x351648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35164c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x35164cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x351650: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x351650u;
    {
        const bool branch_taken_0x351650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351650u;
            // 0x351654: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351650) {
            ctx->pc = 0x351634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351634;
        }
    }
    ctx->pc = 0x351658u;
    // 0x351658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x351658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35165c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35165cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351660:
    // 0x351660: 0x92020151  lbu         $v0, 0x151($s0)
    ctx->pc = 0x351660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 337)));
    // 0x351664: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x351664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x351668: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351668u;
    {
        const bool branch_taken_0x351668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351668) {
            ctx->pc = 0x351678u;
            goto label_351678;
        }
    }
    ctx->pc = 0x351670u;
    // 0x351670: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x351670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x351674: 0x0  nop
    ctx->pc = 0x351674u;
    // NOP
label_351678:
    // 0x351678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35167c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x35167cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x351680: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x351680u;
    {
        const bool branch_taken_0x351680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351680u;
            // 0x351684: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351680) {
            ctx->pc = 0x351660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351660;
        }
    }
    ctx->pc = 0x351688u;
    // 0x351688: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x351688u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35168c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351690: 0xac45be80  sw          $a1, -0x4180($v0)
    ctx->pc = 0x351690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 5));
    // 0x351694: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351698: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x351698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35169c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3516a0: 0xac44be88  sw          $a0, -0x4178($v0)
    ctx->pc = 0x3516a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950536), GPR_U32(ctx, 4));
    // 0x3516a4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3516a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3516a8: 0xac60be84  sw          $zero, -0x417C($v1)
    ctx->pc = 0x3516a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950532), GPR_U32(ctx, 0));
    // 0x3516ac: 0xc0d4360  jal         func_350D80
    ctx->pc = 0x3516ACu;
    SET_GPR_U32(ctx, 31, 0x3516B4u);
    ctx->pc = 0x3516B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3516ACu;
            // 0x3516b0: 0xac40be8c  sw          $zero, -0x4174($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350D80u;
    if (runtime->hasFunction(0x350D80u)) {
        auto targetFn = runtime->lookupFunction(0x350D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516B4u; }
        if (ctx->pc != 0x3516B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350D80_0x350d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516B4u; }
        if (ctx->pc != 0x3516B4u) { return; }
    }
    ctx->pc = 0x3516B4u;
label_3516b4:
    // 0x3516b4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3516b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3516b8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3516B8u;
    SET_GPR_U32(ctx, 31, 0x3516C0u);
    ctx->pc = 0x3516BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3516B8u;
            // 0x3516bc: 0x248416e0  addiu       $a0, $a0, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516C0u; }
        if (ctx->pc != 0x3516C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516C0u; }
        if (ctx->pc != 0x3516C0u) { return; }
    }
    ctx->pc = 0x3516C0u;
label_3516c0:
    // 0x3516c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3516c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3516c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3516c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3516c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3516c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3516cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3516CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3516D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3516CCu;
            // 0x3516d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3516D4u;
    // 0x3516d4: 0x0  nop
    ctx->pc = 0x3516d4u;
    // NOP
    // 0x3516d8: 0x0  nop
    ctx->pc = 0x3516d8u;
    // NOP
    // 0x3516dc: 0x0  nop
    ctx->pc = 0x3516dcu;
    // NOP
label_3516e0:
    // 0x3516e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3516e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3516e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3516e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3516e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3516e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3516ec: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x3516ECu;
    SET_GPR_U32(ctx, 31, 0x3516F4u);
    ctx->pc = 0x3516F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3516ECu;
            // 0x3516f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350DC0u;
    if (runtime->hasFunction(0x350DC0u)) {
        auto targetFn = runtime->lookupFunction(0x350DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516F4u; }
        if (ctx->pc != 0x3516F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350DC0_0x350dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516F4u; }
        if (ctx->pc != 0x3516F4u) { return; }
    }
    ctx->pc = 0x3516F4u;
label_3516f4:
    // 0x3516f4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3516f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3516f8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x3516f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x3516fc: 0x90689490  lbu         $t0, -0x6B70($v1)
    ctx->pc = 0x3516fcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939792)));
    // 0x351700: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x351700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x351704: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x351704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x351708: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x351708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x35170c: 0x90659488  lbu         $a1, -0x6B78($v1)
    ctx->pc = 0x35170cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939784)));
    // 0x351710: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x351710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x351714: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x351714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x351718: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x351718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x35171c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x35171cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x351720: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351724: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x351724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351728: 0x8c63be80  lw          $v1, -0x4180($v1)
    ctx->pc = 0x351728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950528)));
    // 0x35172c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x35172cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x351730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x351730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351734: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x351734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x351738: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x351738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35173c: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x35173cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x351740: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x351740u;
    {
        const bool branch_taken_0x351740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351740u;
            // 0x351744: 0xc48021  addu        $s0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351740) {
            ctx->pc = 0x351820u;
            goto label_351820;
        }
    }
    ctx->pc = 0x351748u;
    // 0x351748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x351748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35174c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x35174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351750: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x351750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_351754:
    // 0x351754: 0x90820151  lbu         $v0, 0x151($a0)
    ctx->pc = 0x351754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 337)));
    // 0x351758: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x351758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x35175c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35175Cu;
    {
        const bool branch_taken_0x35175c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35175c) {
            ctx->pc = 0x351770u;
            goto label_351770;
        }
    }
    ctx->pc = 0x351764u;
    // 0x351764: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x351764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x351768: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x351768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x35176c: 0x0  nop
    ctx->pc = 0x35176cu;
    // NOP
label_351770:
    // 0x351770: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x351770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x351774: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x351774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x351778: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x351778u;
    {
        const bool branch_taken_0x351778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351778u;
            // 0x35177c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351778) {
            ctx->pc = 0x351754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351754;
        }
    }
    ctx->pc = 0x351780u;
    // 0x351780: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351784: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351788: 0x8c42be84  lw          $v0, -0x417C($v0)
    ctx->pc = 0x351788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
    // 0x35178c: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x35178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x351790: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x351790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x351794: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x351794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x351798: 0x22902  srl         $a1, $v0, 4
    ctx->pc = 0x351798u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x35179c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x35179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3517a0: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x3517a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3517a4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x3517a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3517a8: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x3517a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x3517ac: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x3517acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3517b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3517b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3517b4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3517b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3517b8: 0x90470151  lbu         $a3, 0x151($v0)
    ctx->pc = 0x3517b8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 337)));
    // 0x3517bc: 0x90420150  lbu         $v0, 0x150($v0)
    ctx->pc = 0x3517bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x3517c0: 0x24e7fff4  addiu       $a3, $a3, -0xC
    ctx->pc = 0x3517c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967284));
    // 0x3517c4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x3517c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3517c8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3517c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3517cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3517d0: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x3517d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3517d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3517d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3517d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3517d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3517dc: 0xc049c48  jal         func_127120
    ctx->pc = 0x3517DCu;
    SET_GPR_U32(ctx, 31, 0x3517E4u);
    ctx->pc = 0x3517E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3517DCu;
            // 0x3517e0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3517E4u; }
        if (ctx->pc != 0x3517E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3517E4u; }
        if (ctx->pc != 0x3517E4u) { return; }
    }
    ctx->pc = 0x3517E4u;
label_3517e4:
    // 0x3517e4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x3517e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x3517e8: 0xc0bb518  jal         func_2ED460
    ctx->pc = 0x3517E8u;
    SET_GPR_U32(ctx, 31, 0x3517F0u);
    ctx->pc = 0x3517ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3517E8u;
            // 0x3517ec: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED460u;
    if (runtime->hasFunction(0x2ED460u)) {
        auto targetFn = runtime->lookupFunction(0x2ED460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3517F0u; }
        if (ctx->pc != 0x3517F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED460_0x2ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3517F0u; }
        if (ctx->pc != 0x3517F0u) { return; }
    }
    ctx->pc = 0x3517F0u;
label_3517f0:
    // 0x3517f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3517F0u;
    {
        const bool branch_taken_0x3517f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3517f0) {
            ctx->pc = 0x351820u;
            goto label_351820;
        }
    }
    ctx->pc = 0x3517F8u;
    // 0x3517f8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3517f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3517fc: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x3517fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x351800: 0x8c66be80  lw          $a2, -0x4180($v1)
    ctx->pc = 0x351800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950528)));
    // 0x351804: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351808: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x351808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x35180c: 0x8c65be84  lw          $a1, -0x417C($v1)
    ctx->pc = 0x35180cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950532)));
    // 0x351810: 0xac86be80  sw          $a2, -0x4180($a0)
    ctx->pc = 0x351810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950528), GPR_U32(ctx, 6));
    // 0x351814: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351818: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x351818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35181c: 0xac64be84  sw          $a0, -0x417C($v1)
    ctx->pc = 0x35181cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950532), GPR_U32(ctx, 4));
label_351820:
    // 0x351820: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351824: 0x8c63be88  lw          $v1, -0x4178($v1)
    ctx->pc = 0x351824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950536)));
    // 0x351828: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x351828u;
    {
        const bool branch_taken_0x351828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351828) {
            ctx->pc = 0x3518F8u;
            goto label_3518f8;
        }
    }
    ctx->pc = 0x351830u;
    // 0x351830: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x351830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351834: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x351834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_351838:
    // 0x351838: 0x92020151  lbu         $v0, 0x151($s0)
    ctx->pc = 0x351838u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 337)));
    // 0x35183c: 0x2842000c  slti        $v0, $v0, 0xC
    ctx->pc = 0x35183cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x351840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351840u;
    {
        const bool branch_taken_0x351840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351840) {
            ctx->pc = 0x351850u;
            goto label_351850;
        }
    }
    ctx->pc = 0x351848u;
    // 0x351848: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x351848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x35184c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x35184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_351850:
    // 0x351850: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x351854: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x351854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x351858: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x351858u;
    {
        const bool branch_taken_0x351858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351858u;
            // 0x35185c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351858) {
            ctx->pc = 0x351838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351838;
        }
    }
    ctx->pc = 0x351860u;
    // 0x351860: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351864: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x351864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x351868: 0x8c43be8c  lw          $v1, -0x4174($v0)
    ctx->pc = 0x351868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950540)));
    // 0x35186c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x35186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x351870: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x351870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x351874: 0x27a7008f  addiu       $a3, $sp, 0x8F
    ctx->pc = 0x351874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 143));
    // 0x351878: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x351878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x35187c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35187cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x351880: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x351880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x351884: 0x8c510038  lw          $s1, 0x38($v0)
    ctx->pc = 0x351884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x351888: 0xc0bb4bc  jal         func_2ED2F0
    ctx->pc = 0x351888u;
    SET_GPR_U32(ctx, 31, 0x351890u);
    ctx->pc = 0x35188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351888u;
            // 0x35188c: 0x3070000f  andi        $s0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2F0u;
    if (runtime->hasFunction(0x2ED2F0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351890u; }
        if (ctx->pc != 0x351890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED2F0_0x2ed2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351890u; }
        if (ctx->pc != 0x351890u) { return; }
    }
    ctx->pc = 0x351890u;
label_351890:
    // 0x351890: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x351890u;
    {
        const bool branch_taken_0x351890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351890) {
            ctx->pc = 0x3518F8u;
            goto label_3518f8;
        }
    }
    ctx->pc = 0x351898u;
    // 0x351898: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x351898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x35189c: 0x93a4008f  lbu         $a0, 0x8F($sp)
    ctx->pc = 0x35189cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 143)));
    // 0x3518a0: 0x90639490  lbu         $v1, -0x6B70($v1)
    ctx->pc = 0x3518a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939792)));
    // 0x3518a4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3518A4u;
    {
        const bool branch_taken_0x3518a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3518a4) {
            ctx->pc = 0x3518F8u;
            goto label_3518f8;
        }
    }
    ctx->pc = 0x3518ACu;
    // 0x3518ac: 0x3c03009e  lui         $v1, 0x9E
    ctx->pc = 0x3518acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)158 << 16));
    // 0x3518b0: 0x112280  sll         $a0, $s1, 10
    ctx->pc = 0x3518b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 10));
    // 0x3518b4: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x3518b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
    // 0x3518b8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x3518b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x3518bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3518c0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x3518c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3518c4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3518c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3518c8: 0xc049c48  jal         func_127120
    ctx->pc = 0x3518C8u;
    SET_GPR_U32(ctx, 31, 0x3518D0u);
    ctx->pc = 0x3518CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518C8u;
            // 0x3518cc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518D0u; }
        if (ctx->pc != 0x3518D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518D0u; }
        if (ctx->pc != 0x3518D0u) { return; }
    }
    ctx->pc = 0x3518D0u;
label_3518d0:
    // 0x3518d0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3518d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3518d4: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x3518d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x3518d8: 0x8c66be88  lw          $a2, -0x4178($v1)
    ctx->pc = 0x3518d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950536)));
    // 0x3518dc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3518dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3518e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3518e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3518e4: 0x8c65be8c  lw          $a1, -0x4174($v1)
    ctx->pc = 0x3518e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950540)));
    // 0x3518e8: 0xac86be88  sw          $a2, -0x4178($a0)
    ctx->pc = 0x3518e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950536), GPR_U32(ctx, 6));
    // 0x3518ec: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3518ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3518f0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3518f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3518f4: 0xac64be8c  sw          $a0, -0x4174($v1)
    ctx->pc = 0x3518f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950540), GPR_U32(ctx, 4));
label_3518f8:
    // 0x3518f8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3518f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3518fc: 0x8c63be80  lw          $v1, -0x4180($v1)
    ctx->pc = 0x3518fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950528)));
    // 0x351900: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x351900u;
    {
        const bool branch_taken_0x351900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x351900) {
            ctx->pc = 0x351904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351900u;
            // 0x351904: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351928u;
            goto label_351928;
        }
    }
    ctx->pc = 0x351908u;
    // 0x351908: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35190c: 0x8c63be88  lw          $v1, -0x4178($v1)
    ctx->pc = 0x35190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950536)));
    // 0x351910: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x351910u;
    {
        const bool branch_taken_0x351910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x351910) {
            ctx->pc = 0x351924u;
            goto label_351924;
        }
    }
    ctx->pc = 0x351918u;
    // 0x351918: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x351918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x35191c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x35191Cu;
    SET_GPR_U32(ctx, 31, 0x351924u);
    ctx->pc = 0x351920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35191Cu;
            // 0x351920: 0x24844850  addiu       $a0, $a0, 0x4850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351924u; }
        if (ctx->pc != 0x351924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351924u; }
        if (ctx->pc != 0x351924u) { return; }
    }
    ctx->pc = 0x351924u;
label_351924:
    // 0x351924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x351924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_351928:
    // 0x351928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35192c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35192cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351930: 0x3e00008  jr          $ra
    ctx->pc = 0x351930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351930u;
            // 0x351934: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351938u;
    // 0x351938: 0x0  nop
    ctx->pc = 0x351938u;
    // NOP
    // 0x35193c: 0x0  nop
    ctx->pc = 0x35193cu;
    // NOP
    ctx->pc = 0x351940u;
}
