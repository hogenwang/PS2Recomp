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

// Function: sub_003225E0
// Address: 0x3225e0 - 0x322a70
void sub_003225E0_0x3225e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003225E0_0x3225e0");
#endif

    switch (ctx->pc) {
        case 0x3227c0u: goto label_3227c0;
        case 0x3229ecu: goto label_3229ec;
        default: break;
    }

    ctx->pc = 0x3225e0u;

    // 0x3225e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3225e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3225e4: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3225e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3225e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3225e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3225ec: 0x750c0  sll         $t2, $a3, 3
    ctx->pc = 0x3225ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3225f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3225f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3225f4: 0x2463f040  addiu       $v1, $v1, -0xFC0
    ctx->pc = 0x3225f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963264));
    // 0x3225f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3225f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3225fc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3225fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x322600: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x322600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x322604: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x322604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x322608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x322608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32260c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32260cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322618: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x322618u;
    {
        const bool branch_taken_0x322618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322618u;
        // 0x32261c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322618) {
            ctx->pc = 0x322638u;
            goto label_322638;
        }
    }
    ctx->pc = 0x322620u;
    // 0x322620: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322624: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x322624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322628: 0x2463f044  addiu       $v1, $v1, -0xFBC
    ctx->pc = 0x322628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963268));
    // 0x32262c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x32262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x322630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x322630u;
    {
        const bool branch_taken_0x322630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322630u;
        // 0x322634: 0xa0690000  sb          $t1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322630) {
            ctx->pc = 0x322648u;
            goto label_322648;
        }
    }
    ctx->pc = 0x322638u;
label_322638:
    // 0x322638: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32263c: 0x2463f044  addiu       $v1, $v1, -0xFBC
    ctx->pc = 0x32263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963268));
    // 0x322640: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x322640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x322644: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x322644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_322648:
    // 0x322648: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32264c: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x32264cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x322650: 0x946af010  lhu         $t2, -0xFF0($v1)
    ctx->pc = 0x322650u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963216)));
    // 0x322654: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322658: 0x2463f028  addiu       $v1, $v1, -0xFD8
    ctx->pc = 0x322658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963240));
    // 0x32265c: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x32265cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x322660: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322664: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x322664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x322668: 0x2463f018  addiu       $v1, $v1, -0xFE8
    ctx->pc = 0x322668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963224));
    // 0x32266c: 0x24aa0002  addiu       $t2, $a1, 0x2
    ctx->pc = 0x32266cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x322670: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x322670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x322674: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x322674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x322678: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x322678u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x32267c: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x32267cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322680: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x322680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322684: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x322684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x322688: 0x148082a  slt         $at, $t2, $t0
    ctx->pc = 0x322688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x32268c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x32268cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x322690: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x322690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x322694: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x322694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x322698: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x322698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x32269c: 0x71a3c  dsll32      $v1, $a3, 8
    ctx->pc = 0x32269cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 8));
    // 0x3226a0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x3226a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3226a4: 0x102000e4  beqz        $at, . + 4 + (0xE4 << 2)
    ctx->pc = 0x3226A4u;
    {
        const bool branch_taken_0x3226a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226A4u;
        // 0x3226a8: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226a4) {
            ctx->pc = 0x322A38u;
            goto label_322a38;
        }
    }
    ctx->pc = 0x3226ACu;
    // 0x3226ac: 0x10a4823  subu        $t1, $t0, $t2
    ctx->pc = 0x3226acu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x3226b0: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x3226b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3226b4: 0x142000be  bnez        $at, . + 4 + (0xBE << 2)
    ctx->pc = 0x3226B4u;
    {
        const bool branch_taken_0x3226b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3226B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226B4u;
        // 0x3226b8: 0x251efff8  addiu       $fp, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226b4) {
            ctx->pc = 0x3229B0u;
            goto label_3229b0;
        }
    }
    ctx->pc = 0x3226BCu;
    // 0x3226bc: 0x10a082a  slt         $at, $t0, $t2
    ctx->pc = 0x3226bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3226c0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3226c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3226c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3226c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226cc: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3226CCu;
    {
        const bool branch_taken_0x3226cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3226D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226CCu;
        // 0x3226d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226cc) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x3226D4u;
    // 0x3226d4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x3226d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x3226d8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x3226d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x3226dc: 0x101082a  slt         $at, $t0, $at
    ctx->pc = 0x3226dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3226e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3226E0u;
    {
        const bool branch_taken_0x3226e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3226e0) {
            ctx->pc = 0x3226ECu;
            goto label_3226ec;
        }
    }
    ctx->pc = 0x3226E8u;
    // 0x3226e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3226e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3226ec:
    // 0x3226ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3226ECu;
    {
        const bool branch_taken_0x3226ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3226ec) {
            ctx->pc = 0x322710u;
            goto label_322710;
        }
    }
    ctx->pc = 0x3226F4u;
    // 0x3226f4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x3226f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x3226f8: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x3226f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3226fc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x3226fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x322700: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x322700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x322704: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x322704u;
    {
        const bool branch_taken_0x322704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322704) {
            ctx->pc = 0x322710u;
            goto label_322710;
        }
    }
    ctx->pc = 0x32270Cu;
    // 0x32270c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32270cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322710:
    // 0x322710: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x322710u;
    {
        const bool branch_taken_0x322710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x322710) {
            ctx->pc = 0x32272Cu;
            goto label_32272c;
        }
    }
    ctx->pc = 0x322718u;
    // 0x322718: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x322718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x32271c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32271cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x322720: 0x10e30002  beq         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x322720u;
    {
        const bool branch_taken_0x322720 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x322720) {
            ctx->pc = 0x32272Cu;
            goto label_32272c;
        }
    }
    ctx->pc = 0x322728u;
    // 0x322728: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x322728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32272c:
    // 0x32272c: 0x1160000f  beqz        $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x32272Cu;
    {
        const bool branch_taken_0x32272c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x32272c) {
            ctx->pc = 0x32276Cu;
            goto label_32276c;
        }
    }
    ctx->pc = 0x322734u;
    // 0x322734: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x322734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x322738: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x322738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x32273c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x32273cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x322740: 0x1072824  and         $a1, $t0, $a3
    ctx->pc = 0x322740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x322744: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x322744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x322748: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x322748u;
    {
        const bool branch_taken_0x322748 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x32274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322748u;
        // 0x32274c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322748) {
            ctx->pc = 0x322760u;
            goto label_322760;
        }
    }
    ctx->pc = 0x322750u;
    // 0x322750: 0x1271824  and         $v1, $t1, $a3
    ctx->pc = 0x322750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x322754: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x322754u;
    {
        const bool branch_taken_0x322754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x322754) {
            ctx->pc = 0x322760u;
            goto label_322760;
        }
    }
    ctx->pc = 0x32275Cu;
    // 0x32275c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32275cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322760:
    // 0x322760: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x322760u;
    {
        const bool branch_taken_0x322760 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x322760) {
            ctx->pc = 0x32276Cu;
            goto label_32276c;
        }
    }
    ctx->pc = 0x322768u;
    // 0x322768: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x322768u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32276c:
    // 0x32276c: 0x11800090  beqz        $t4, . + 4 + (0x90 << 2)
    ctx->pc = 0x32276Cu;
    {
        const bool branch_taken_0x32276c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x32276c) {
            ctx->pc = 0x3229B0u;
            goto label_3229b0;
        }
    }
    ctx->pc = 0x322774u;
    // 0x322774: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x322774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x322778: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x322778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x32277c: 0x854821  addu        $t1, $a0, $a1
    ctx->pc = 0x32277cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x322780: 0x3c1001dd  lui         $s0, 0x1DD
    ctx->pc = 0x322780u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)477 << 16));
    // 0x322784: 0x3c1901dd  lui         $t9, 0x1DD
    ctx->pc = 0x322784u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)477 << 16));
    // 0x322788: 0x3c1801dd  lui         $t8, 0x1DD
    ctx->pc = 0x322788u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)477 << 16));
    // 0x32278c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x322790: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x322790u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x322794: 0x24670002  addiu       $a3, $v1, 0x2
    ctx->pc = 0x322794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x322798: 0x3c0e01dd  lui         $t6, 0x1DD
    ctx->pc = 0x322798u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)477 << 16));
    // 0x32279c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x32279cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3227a0: 0x3c0d01dd  lui         $t5, 0x1DD
    ctx->pc = 0x3227a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)477 << 16));
    // 0x3227a4: 0x3c0c01dd  lui         $t4, 0x1DD
    ctx->pc = 0x3227a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)477 << 16));
    // 0x3227a8: 0x3c0b01dd  lui         $t3, 0x1DD
    ctx->pc = 0x3227a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)477 << 16));
    // 0x3227ac: 0x3c1701dd  lui         $s7, 0x1DD
    ctx->pc = 0x3227acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)477 << 16));
    // 0x3227b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3227b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3227b4: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x3227b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3227b8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3227b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3227bc: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x3227bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
label_3227c0:
    // 0x3227c0: 0x8d330004  lw          $s3, 0x4($t1)
    ctx->pc = 0x3227c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3227c4: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x3227c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3227c8: 0x9611f010  lhu         $s1, -0xFF0($s0)
    ctx->pc = 0x3227c8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294963216)));
    // 0x3227cc: 0x15e902a  slt         $s2, $t2, $fp
    ctx->pc = 0x3227ccu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3227d0: 0x139a3c  dsll32      $s3, $s3, 8
    ctx->pc = 0x3227d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 8));
    // 0x3227d4: 0x139a3e  dsrl32      $s3, $s3, 8
    ctx->pc = 0x3227d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 8));
    // 0x3227d8: 0x93a021  addu        $s4, $a0, $s3
    ctx->pc = 0x3227d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3227dc: 0x119840  sll         $s3, $s1, 1
    ctx->pc = 0x3227dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3227e0: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x3227e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x3227e4: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x3227e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3227e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3227e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3227ec: 0x739821  addu        $s3, $v1, $s3
    ctx->pc = 0x3227ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3227f0: 0xa731f010  sh          $s1, -0xFF0($t9)
    ctx->pc = 0x3227f0u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x3227f4: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3227f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3227f8: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x3227f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3227fc: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x3227fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
    // 0x322800: 0x11a040  sll         $s4, $s1, 1
    ctx->pc = 0x322800u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x322804: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x322804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x322808: 0x291a021  addu        $s4, $s4, $s1
    ctx->pc = 0x322808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x32280c: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x32280cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
    // 0x322810: 0x14a0c0  sll         $s4, $s4, 3
    ctx->pc = 0x322810u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x322814: 0x8d350008  lw          $s5, 0x8($t1)
    ctx->pc = 0x322814u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x322818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32281c: 0x74b021  addu        $s6, $v1, $s4
    ctx->pc = 0x32281cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x322820: 0x3233ffff  andi        $s3, $s1, 0xFFFF
    ctx->pc = 0x322820u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x322824: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x322824u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x322828: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x322828u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x32282c: 0xa711f010  sh          $s1, -0xFF0($t8)
    ctx->pc = 0x32282cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x322830: 0x15aa3e  dsrl32      $s5, $s5, 8
    ctx->pc = 0x322830u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 8));
    // 0x322834: 0x293a021  addu        $s4, $s4, $s3
    ctx->pc = 0x322834u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x322838: 0x95a821  addu        $s5, $a0, $s5
    ctx->pc = 0x322838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x32283c: 0x14a0c0  sll         $s4, $s4, 3
    ctx->pc = 0x32283cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x322840: 0xaed50000  sw          $s5, 0x0($s6)
    ctx->pc = 0x322840u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
    // 0x322844: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x322844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x322848: 0xaec70014  sw          $a3, 0x14($s6)
    ctx->pc = 0x322848u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 7));
    // 0x32284c: 0x3235ffff  andi        $s5, $s1, 0xFFFF
    ctx->pc = 0x32284cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x322850: 0xaec60004  sw          $a2, 0x4($s6)
    ctx->pc = 0x322850u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 6));
    // 0x322854: 0x159840  sll         $s3, $s5, 1
    ctx->pc = 0x322854u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x322858: 0xaec5000c  sw          $a1, 0xC($s6)
    ctx->pc = 0x322858u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 5));
    // 0x32285c: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x32285cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x322860: 0x8d36000c  lw          $s6, 0xC($t1)
    ctx->pc = 0x322860u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x322864: 0x1398c0  sll         $s3, $s3, 3
    ctx->pc = 0x322864u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x322868: 0x74a021  addu        $s4, $v1, $s4
    ctx->pc = 0x322868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x32286c: 0x739821  addu        $s3, $v1, $s3
    ctx->pc = 0x32286cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x322870: 0x16b23c  dsll32      $s6, $s6, 8
    ctx->pc = 0x322870u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 8));
    // 0x322874: 0xa5f1f010  sh          $s1, -0xFF0($t7)
    ctx->pc = 0x322874u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x322878: 0x16b23e  dsrl32      $s6, $s6, 8
    ctx->pc = 0x322878u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 8));
    // 0x32287c: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x32287cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x322880: 0x96b021  addu        $s6, $a0, $s6
    ctx->pc = 0x322880u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x322884: 0x3235ffff  andi        $s5, $s1, 0xFFFF
    ctx->pc = 0x322884u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x322888: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x322888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x32288c: 0xae870014  sw          $a3, 0x14($s4)
    ctx->pc = 0x32288cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
    // 0x322890: 0x15b040  sll         $s6, $s5, 1
    ctx->pc = 0x322890u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x322894: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x322894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x322898: 0x2d5b021  addu        $s6, $s6, $s5
    ctx->pc = 0x322898u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x32289c: 0xae85000c  sw          $a1, 0xC($s4)
    ctx->pc = 0x32289cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
    // 0x3228a0: 0x16a0c0  sll         $s4, $s6, 3
    ctx->pc = 0x3228a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3228a4: 0x8d360010  lw          $s6, 0x10($t1)
    ctx->pc = 0x3228a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3228a8: 0x74a021  addu        $s4, $v1, $s4
    ctx->pc = 0x3228a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3228ac: 0x16b23c  dsll32      $s6, $s6, 8
    ctx->pc = 0x3228acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 8));
    // 0x3228b0: 0xa5d1f010  sh          $s1, -0xFF0($t6)
    ctx->pc = 0x3228b0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x3228b4: 0x16b23e  dsrl32      $s6, $s6, 8
    ctx->pc = 0x3228b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 8));
    // 0x3228b8: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x3228b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3228bc: 0x96b021  addu        $s6, $a0, $s6
    ctx->pc = 0x3228bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x3228c0: 0x3235ffff  andi        $s5, $s1, 0xFFFF
    ctx->pc = 0x3228c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3228c4: 0xae760000  sw          $s6, 0x0($s3)
    ctx->pc = 0x3228c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
    // 0x3228c8: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x3228c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
    // 0x3228cc: 0x15b040  sll         $s6, $s5, 1
    ctx->pc = 0x3228ccu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x3228d0: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x3228d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x3228d4: 0x2d5b021  addu        $s6, $s6, $s5
    ctx->pc = 0x3228d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x3228d8: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x3228d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
    // 0x3228dc: 0x1698c0  sll         $s3, $s6, 3
    ctx->pc = 0x3228dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x3228e0: 0x8d360014  lw          $s6, 0x14($t1)
    ctx->pc = 0x3228e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x3228e4: 0x739821  addu        $s3, $v1, $s3
    ctx->pc = 0x3228e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3228e8: 0x16b23c  dsll32      $s6, $s6, 8
    ctx->pc = 0x3228e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 8));
    // 0x3228ec: 0xa5b1f010  sh          $s1, -0xFF0($t5)
    ctx->pc = 0x3228ecu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x3228f0: 0x16b23e  dsrl32      $s6, $s6, 8
    ctx->pc = 0x3228f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 8));
    // 0x3228f4: 0x26b10001  addiu       $s1, $s5, 0x1
    ctx->pc = 0x3228f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3228f8: 0x96b021  addu        $s6, $a0, $s6
    ctx->pc = 0x3228f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x3228fc: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x3228fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x322900: 0x3236ffff  andi        $s6, $s1, 0xFFFF
    ctx->pc = 0x322900u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x322904: 0xae870014  sw          $a3, 0x14($s4)
    ctx->pc = 0x322904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 7));
    // 0x322908: 0x16a840  sll         $s5, $s6, 1
    ctx->pc = 0x322908u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x32290c: 0xae860004  sw          $a2, 0x4($s4)
    ctx->pc = 0x32290cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 6));
    // 0x322910: 0x2b6a821  addu        $s5, $s5, $s6
    ctx->pc = 0x322910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x322914: 0xae85000c  sw          $a1, 0xC($s4)
    ctx->pc = 0x322914u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
    // 0x322918: 0x15a0c0  sll         $s4, $s5, 3
    ctx->pc = 0x322918u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x32291c: 0x74a821  addu        $s5, $v1, $s4
    ctx->pc = 0x32291cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x322920: 0x8d340018  lw          $s4, 0x18($t1)
    ctx->pc = 0x322920u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x322924: 0x14a23c  dsll32      $s4, $s4, 8
    ctx->pc = 0x322924u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 8));
    // 0x322928: 0xa591f010  sh          $s1, -0xFF0($t4)
    ctx->pc = 0x322928u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x32292c: 0x14a23e  dsrl32      $s4, $s4, 8
    ctx->pc = 0x32292cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 8));
    // 0x322930: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x322930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x322934: 0x94a021  addu        $s4, $a0, $s4
    ctx->pc = 0x322934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x322938: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x322938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x32293c: 0x3234ffff  andi        $s4, $s1, 0xFFFF
    ctx->pc = 0x32293cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x322940: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x322940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
    // 0x322944: 0x14b040  sll         $s6, $s4, 1
    ctx->pc = 0x322944u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x322948: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x322948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x32294c: 0x2d4b021  addu        $s6, $s6, $s4
    ctx->pc = 0x32294cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x322950: 0xae65000c  sw          $a1, 0xC($s3)
    ctx->pc = 0x322950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
    // 0x322954: 0x1698c0  sll         $s3, $s6, 3
    ctx->pc = 0x322954u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x322958: 0x8d36001c  lw          $s6, 0x1C($t1)
    ctx->pc = 0x322958u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x32295c: 0x739821  addu        $s3, $v1, $s3
    ctx->pc = 0x32295cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x322960: 0x16b23c  dsll32      $s6, $s6, 8
    ctx->pc = 0x322960u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 8));
    // 0x322964: 0xa571f010  sh          $s1, -0xFF0($t3)
    ctx->pc = 0x322964u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x322968: 0x16b23e  dsrl32      $s6, $s6, 8
    ctx->pc = 0x322968u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 8));
    // 0x32296c: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x32296cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x322970: 0x96b021  addu        $s6, $a0, $s6
    ctx->pc = 0x322970u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x322974: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x322974u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
    // 0x322978: 0xaea70014  sw          $a3, 0x14($s5)
    ctx->pc = 0x322978u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 7));
    // 0x32297c: 0xaea60004  sw          $a2, 0x4($s5)
    ctx->pc = 0x32297cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
    // 0x322980: 0xaea5000c  sw          $a1, 0xC($s5)
    ctx->pc = 0x322980u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 5));
    // 0x322984: 0x8d340020  lw          $s4, 0x20($t1)
    ctx->pc = 0x322984u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x322988: 0xa6f1f010  sh          $s1, -0xFF0($s7)
    ctx->pc = 0x322988u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x32298c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x32298cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x322990: 0x148a3c  dsll32      $s1, $s4, 8
    ctx->pc = 0x322990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) << (32 + 8));
    // 0x322994: 0x118a3e  dsrl32      $s1, $s1, 8
    ctx->pc = 0x322994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 8));
    // 0x322998: 0x918821  addu        $s1, $a0, $s1
    ctx->pc = 0x322998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x32299c: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x32299cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3229a0: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x3229a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
    // 0x3229a4: 0xae660004  sw          $a2, 0x4($s3)
    ctx->pc = 0x3229a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
    // 0x3229a8: 0x1640ff85  bnez        $s2, . + 4 + (-0x7B << 2)
    ctx->pc = 0x3229A8u;
    {
        const bool branch_taken_0x3229a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3229ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229A8u;
        // 0x3229ac: 0xae65000c  sw          $a1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3229a8) {
            ctx->pc = 0x3227C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3227c0;
        }
    }
    ctx->pc = 0x3229B0u;
label_3229b0:
    // 0x3229b0: 0x148082a  slt         $at, $t2, $t0
    ctx->pc = 0x3229b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3229b4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3229B4u;
    {
        const bool branch_taken_0x3229b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3229b4) {
            ctx->pc = 0x322A38u;
            goto label_322a38;
        }
    }
    ctx->pc = 0x3229BCu;
    // 0x3229bc: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3229bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3229c0: 0x3c0c01dd  lui         $t4, 0x1DD
    ctx->pc = 0x3229c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)477 << 16));
    // 0x3229c4: 0x258cd810  addiu       $t4, $t4, -0x27F0
    ctx->pc = 0x3229c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294957072));
    // 0x3229c8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x3229c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3229cc: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3229ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3229d0: 0x24af0002  addiu       $t7, $a1, 0x2
    ctx->pc = 0x3229d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3229d4: 0x3c0501dd  lui         $a1, 0x1DD
    ctx->pc = 0x3229d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)477 << 16));
    // 0x3229d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3229d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3229dc: 0x246e0002  addiu       $t6, $v1, 0x2
    ctx->pc = 0x3229dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3229e0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x3229e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3229e4: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3229e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3229e8: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x3229e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
label_3229ec:
    // 0x3229ec: 0x94adf010  lhu         $t5, -0xFF0($a1)
    ctx->pc = 0x3229ecu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294963216)));
    // 0x3229f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3229f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3229f4: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x3229f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3229f8: 0x148382a  slt         $a3, $t2, $t0
    ctx->pc = 0x3229f8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3229fc: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x3229fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x322a00: 0x25b10001  addiu       $s1, $t5, 0x1
    ctx->pc = 0x322a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x322a04: 0x94a3c  dsll32      $t1, $t1, 8
    ctx->pc = 0x322a04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 8));
    // 0x322a08: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x322a08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x322a0c: 0x94a3e  dsrl32      $t1, $t1, 8
    ctx->pc = 0x322a0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 8));
    // 0x322a10: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x322a10u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x322a14: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x322a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x322a18: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x322a18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x322a1c: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x322a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x322a20: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x322a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x322a24: 0xad6f0014  sw          $t7, 0x14($t3)
    ctx->pc = 0x322a24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 15));
    // 0x322a28: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x322a28u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x322a2c: 0xa471f010  sh          $s1, -0xFF0($v1)
    ctx->pc = 0x322a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963216), (uint16_t)GPR_U32(ctx, 17));
    // 0x322a30: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x322A30u;
    {
        const bool branch_taken_0x322a30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x322A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A30u;
        // 0x322a34: 0xad6e000c  sw          $t6, 0xC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a30) {
            ctx->pc = 0x3229ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3229ec;
        }
    }
    ctx->pc = 0x322A38u;
label_322a38:
    // 0x322a38: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x322a38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x322a3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x322a3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322a40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x322a40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322a44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x322a44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322a48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x322a48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322a4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x322a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322a50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322a54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x322A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A5Cu;
        // 0x322a60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322A64u;
    // 0x322a64: 0x0  nop
    ctx->pc = 0x322a64u;
    // NOP
    // 0x322a68: 0x0  nop
    ctx->pc = 0x322a68u;
    // NOP
    // 0x322a6c: 0x0  nop
    ctx->pc = 0x322a6cu;
    // NOP
    if (ctx->pc == 0x322a6cu) { ctx->pc = 0x322a70u; }
}
