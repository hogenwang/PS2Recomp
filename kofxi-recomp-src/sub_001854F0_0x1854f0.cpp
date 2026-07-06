#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001854F0
// Address: 0x1854f0 - 0x185720
void sub_001854F0_0x1854f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001854F0_0x1854f0");
#endif

    switch (ctx->pc) {
        case 0x185618u: goto label_185618;
        default: break;
    }

    ctx->pc = 0x1854f0u;

    // 0x1854f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1854f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1854f4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1854f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1854f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1854f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1854fc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1854fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x185500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x185500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x185504: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x185504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x185508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x185508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18550c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x185510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185514: 0x30a300f0  andi        $v1, $a1, 0xF0
    ctx->pc = 0x185514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x185518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18551c: 0x30a6000f  andi        $a2, $a1, 0xF
    ctx->pc = 0x18551cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x185520: 0x90890000  lbu         $t1, 0x0($a0)
    ctx->pc = 0x185520u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185524: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x185524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185528: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x185528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18552c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x18552cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x185530: 0x2508dbc8  addiu       $t0, $t0, -0x2438
    ctx->pc = 0x185530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958024));
    // 0x185534: 0x24e7db53  addiu       $a3, $a3, -0x24AD
    ctx->pc = 0x185534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957907));
    // 0x185538: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x185538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x18553c: 0x24a5db78  addiu       $a1, $a1, -0x2488
    ctx->pc = 0x18553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
    // 0x185540: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x185540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x185544: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x185544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185548: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x185548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x18554c: 0x950c0  sll         $t2, $t1, 3
    ctx->pc = 0x18554cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x185550: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x185550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x185554: 0x10a4821  addu        $t1, $t0, $t2
    ctx->pc = 0x185554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x185558: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x185558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x18555c: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x18555cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x185560: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x185560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x185564: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x185564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x185568: 0x2484dbbc  addiu       $a0, $a0, -0x2444
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958012));
    // 0x18556c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x18556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x185570: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x185570u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185574: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x185574u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x185578: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x185578u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18557c: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x18557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x185580: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x185580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x185584: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x185584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185588: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x185588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18558c: 0x1262821  addu        $a1, $t1, $a2
    ctx->pc = 0x18558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x185590: 0x8d120010  lw          $s2, 0x10($t0)
    ctx->pc = 0x185590u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x185594: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x185594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185598: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x18559c: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x18559Cu;
    {
        const bool branch_taken_0x18559c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1855A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18559Cu;
            // 0x1855a0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18559c) {
            ctx->pc = 0x1856F8u;
            goto label_1856f8;
        }
    }
    ctx->pc = 0x1855A4u;
    // 0x1855a4: 0x50a00055  beql        $a1, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x1855A4u;
    {
        const bool branch_taken_0x1855a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1855a4) {
            ctx->pc = 0x1855A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1855A4u;
            // 0x1855a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1856FCu;
            goto label_1856fc;
        }
    }
    ctx->pc = 0x1855ACu;
    // 0x1855ac: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1855acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1855b0: 0xf32821  addu        $a1, $a3, $s3
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x1855b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1855b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1855b8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1855b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1855bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1855bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1855c0: 0xa0a4000a  sb          $a0, 0xA($a1)
    ctx->pc = 0x1855c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x1855c4: 0x24423e90  addiu       $v0, $v0, 0x3E90
    ctx->pc = 0x1855c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16016));
    // 0x1855c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1855c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1855cc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1855ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1855d0: 0xa62300f2  sh          $v1, 0xF2($s1)
    ctx->pc = 0x1855d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x1855d4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1855d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1855d8: 0x962303a4  lhu         $v1, 0x3A4($s1)
    ctx->pc = 0x1855d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1855dc: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1855dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x1855e0: 0xa62303a4  sh          $v1, 0x3A4($s1)
    ctx->pc = 0x1855e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x1855e4: 0x962303a4  lhu         $v1, 0x3A4($s1)
    ctx->pc = 0x1855e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1855e8: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x1855e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x1855ec: 0xa62303a4  sh          $v1, 0x3A4($s1)
    ctx->pc = 0x1855ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x1855f0: 0x962303a4  lhu         $v1, 0x3A4($s1)
    ctx->pc = 0x1855f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1855f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1855f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1855f8: 0xa62203a4  sh          $v0, 0x3A4($s1)
    ctx->pc = 0x1855f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 932), (uint16_t)GPR_U32(ctx, 2));
    // 0x1855fc: 0xa220035d  sb          $zero, 0x35D($s1)
    ctx->pc = 0x1855fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 861), (uint8_t)GPR_U32(ctx, 0));
    // 0x185600: 0xa220035f  sb          $zero, 0x35F($s1)
    ctx->pc = 0x185600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 863), (uint8_t)GPR_U32(ctx, 0));
    // 0x185604: 0xa220036d  sb          $zero, 0x36D($s1)
    ctx->pc = 0x185604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 877), (uint8_t)GPR_U32(ctx, 0));
    // 0x185608: 0xa220036f  sb          $zero, 0x36F($s1)
    ctx->pc = 0x185608u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 879), (uint8_t)GPR_U32(ctx, 0));
    // 0x18560c: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x18560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x185610: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x185610u;
    SET_GPR_U32(ctx, 31, 0x185618u);
    ctx->pc = 0x185614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185610u;
            // 0x185614: 0x24b0000a  addiu       $s0, $a1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185618u; }
        if (ctx->pc != 0x185618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185618u; }
        if (ctx->pc != 0x185618u) { return; }
    }
    ctx->pc = 0x185618u;
label_185618:
    // 0x185618: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x185618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18561c: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x18561cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x185620: 0xa2630013  sb          $v1, 0x13($s3)
    ctx->pc = 0x185620u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x185624: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x185624u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185628: 0xa6630014  sh          $v1, 0x14($s3)
    ctx->pc = 0x185628u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x18562c: 0x92630013  lbu         $v1, 0x13($s3)
    ctx->pc = 0x18562cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x185630: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x185630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x185634: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x185634u;
    {
        const bool branch_taken_0x185634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185634u;
            // 0x185638: 0x2405fb20  addiu       $a1, $zero, -0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185634) {
            ctx->pc = 0x185640u;
            goto label_185640;
        }
    }
    ctx->pc = 0x18563Cu;
    // 0x18563c: 0x240504e0  addiu       $a1, $zero, 0x4E0
    ctx->pc = 0x18563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
label_185640:
    // 0x185640: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x185640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x185644: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x185644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x185648: 0x86650014  lh          $a1, 0x14($s3)
    ctx->pc = 0x185648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x18564c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18564cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x185650: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x185650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x185654: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x185654u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x185658: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x185658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x18565c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x18565cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x185660: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x185660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x185664: 0x92630013  lbu         $v1, 0x13($s3)
    ctx->pc = 0x185664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x185668: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x185668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x18566c: 0xa2630013  sb          $v1, 0x13($s3)
    ctx->pc = 0x18566cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x185670: 0x92630013  lbu         $v1, 0x13($s3)
    ctx->pc = 0x185670u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x185674: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x185674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x185678: 0x92630016  lbu         $v1, 0x16($s3)
    ctx->pc = 0x185678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x18567c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x185680: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x185680u;
    {
        const bool branch_taken_0x185680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185680) {
            ctx->pc = 0x1856F8u;
            goto label_1856f8;
        }
    }
    ctx->pc = 0x185688u;
    // 0x185688: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x185688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18568c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x18568cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x185690: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x185690u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x185694: 0xa62300f2  sh          $v1, 0xF2($s1)
    ctx->pc = 0x185694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x185698: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x185698u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x18569c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1856a0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1856A0u;
    {
        const bool branch_taken_0x1856a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1856a0) {
            ctx->pc = 0x1856A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1856A0u;
            // 0x1856a4: 0x9243008c  lbu         $v1, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1856B8u;
            goto label_1856b8;
        }
    }
    ctx->pc = 0x1856A8u;
    // 0x1856a8: 0x86630018  lh          $v1, 0x18($s3)
    ctx->pc = 0x1856a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1856ac: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1856acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1856b0: 0xa6630018  sh          $v1, 0x18($s3)
    ctx->pc = 0x1856b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x1856b4: 0x9243008c  lbu         $v1, 0x8C($s2)
    ctx->pc = 0x1856b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_1856b8:
    // 0x1856b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1856b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1856bc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1856BCu;
    {
        const bool branch_taken_0x1856bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1856bc) {
            ctx->pc = 0x1856C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1856BCu;
            // 0x1856c0: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1856D4u;
            goto label_1856d4;
        }
    }
    ctx->pc = 0x1856C4u;
    // 0x1856c4: 0x8663001a  lh          $v1, 0x1A($s3)
    ctx->pc = 0x1856c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x1856c8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1856c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1856cc: 0xa663001a  sh          $v1, 0x1A($s3)
    ctx->pc = 0x1856ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x1856d0: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1856d4:
    // 0x1856d4: 0x86630018  lh          $v1, 0x18($s3)
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1856d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1856d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1856dc: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x1856dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1856e0: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x1856e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1856e4: 0x8663001a  lh          $v1, 0x1A($s3)
    ctx->pc = 0x1856e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x1856e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1856ec: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x1856ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1856f0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1856f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1856f4: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1856f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_1856f8:
    // 0x1856f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1856f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1856fc:
    // 0x1856fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1856fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18570c: 0x3e00008  jr          $ra
    ctx->pc = 0x18570Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18570Cu;
            // 0x185710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185714u;
    // 0x185714: 0x0  nop
    ctx->pc = 0x185714u;
    // NOP
    // 0x185718: 0x0  nop
    ctx->pc = 0x185718u;
    // NOP
    // 0x18571c: 0x0  nop
    ctx->pc = 0x18571cu;
    // NOP
    ctx->pc = 0x185720u;
}
