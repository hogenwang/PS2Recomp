#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA410
// Address: 0x1aa410 - 0x1aa728
void sub_001AA410_0x1aa410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA410_0x1aa410");
#endif

    ctx->pc = 0x1aa410u;

    // 0x1aa410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa414: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1aa414u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa41c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1aa41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa424: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1aa424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa428: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x1aa428u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x1aa42c: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x1aa42cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa430: 0x91cb0003  lbu         $t3, 0x3($t6)
    ctx->pc = 0x1aa430u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3)));
    // 0x1aa434: 0x358c732e  ori         $t4, $t4, 0x732E
    ctx->pc = 0x1aa434u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)29486);
    // 0x1aa438: 0x91c30002  lbu         $v1, 0x2($t6)
    ctx->pc = 0x1aa438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x1aa43c: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x1aa43cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa440: 0x91c40001  lbu         $a0, 0x1($t6)
    ctx->pc = 0x1aa440u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x1aa444: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x1aa444u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x1aa448: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x1aa448u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1aa44c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1aa44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1aa450: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1aa450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1aa454: 0x120c02d  daddu       $t8, $t1, $zero
    ctx->pc = 0x1aa454u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa458: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x1aa458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x1aa45c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aa45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa460: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1aa460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa464: 0x108c0005  beq         $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA464u;
    {
        const bool branch_taken_0x1aa464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x1AA468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA464u;
            // 0x1aa468: 0x25cb0004  addiu       $t3, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa464) {
            ctx->pc = 0x1AA47Cu;
            goto label_1aa47c;
        }
    }
    ctx->pc = 0x1AA46Cu;
    // 0x1aa46c: 0x3c03646e  lui         $v1, 0x646E
    ctx->pc = 0x1aa46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25710 << 16));
    // 0x1aa470: 0x3463732e  ori         $v1, $v1, 0x732E
    ctx->pc = 0x1aa470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29486);
    // 0x1aa474: 0x148300a8  bne         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1AA474u;
    {
        const bool branch_taken_0x1aa474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA474u;
            // 0x1aa478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa474) {
            ctx->pc = 0x1AA718u;
            goto label_1aa718;
        }
    }
    ctx->pc = 0x1AA47Cu;
label_1aa47c:
    // 0x1aa47c: 0x91660003  lbu         $a2, 0x3($t3)
    ctx->pc = 0x1aa47cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1aa480: 0x3c0f00ff  lui         $t7, 0xFF
    ctx->pc = 0x1aa480u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
    // 0x1aa484: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x1aa484u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1aa488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aa488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa48c: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x1aa48cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1aa490: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1aa490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1aa494: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x1aa494u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1aa498: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1aa498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1aa49c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1aa49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1aa4a0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aa4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aa4a4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1aa4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1aa4a8: 0x646025  or          $t4, $v1, $a0
    ctx->pc = 0x1aa4a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa4ac: 0xc3202  srl         $a2, $t4, 8
    ctx->pc = 0x1aa4acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x1aa4b0: 0xc2a00  sll         $a1, $t4, 8
    ctx->pc = 0x1aa4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1aa4b4: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x1aa4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1aa4b8: 0xc1e02  srl         $v1, $t4, 24
    ctx->pc = 0x1aa4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 24));
    // 0x1aa4bc: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x1aa4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x1aa4c0: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1aa4c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1aa4c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aa4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa4c8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1aa4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1aa4cc: 0x656025  or          $t4, $v1, $a1
    ctx->pc = 0x1aa4ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1aa4d0: 0x32c202a  slt         $a0, $t9, $t4
    ctx->pc = 0x1aa4d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1aa4d4: 0x14800090  bnez        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x1AA4D4u;
    {
        const bool branch_taken_0x1aa4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4D4u;
            // 0x1aa4d8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4d4) {
            ctx->pc = 0x1AA718u;
            goto label_1aa718;
        }
    }
    ctx->pc = 0x1AA4DCu;
    // 0x1aa4dc: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x1aa4dcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1aa4e0: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa4e4: 0x91680003  lbu         $t0, 0x3($t3)
    ctx->pc = 0x1aa4e4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1aa4e8: 0x91660002  lbu         $a2, 0x2($t3)
    ctx->pc = 0x1aa4e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1aa4ec: 0x91670001  lbu         $a3, 0x1($t3)
    ctx->pc = 0x1aa4ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1aa4f0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1aa4f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1aa4f4: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x1aa4f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1aa4f8: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1aa4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1aa4fc: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x1aa4fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1aa500: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1aa500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1aa504: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x1aa504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1aa508: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1aa508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1aa50c: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x1aa50cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1aa510: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1aa510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1aa514: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1aa514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aa518: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1aa518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1aa51c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1aa51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1aa520: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1aa520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aa524: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1aa524u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1aa528: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1aa528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa52c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1aa52cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1aa530: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x1aa530u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1aa534: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1aa534u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1aa538: 0x43602  srl         $a2, $a0, 24
    ctx->pc = 0x1aa538u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x1aa53c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1aa53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1aa540: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x1aa540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1aa544: 0x93a02  srl         $a3, $t1, 8
    ctx->pc = 0x1aa544u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1aa548: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1aa548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1aa54c: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x1aa54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1aa550: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1aa554: 0xaf2824  and         $a1, $a1, $t7
    ctx->pc = 0x1aa554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
    // 0x1aa558: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1aa558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1aa55c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1aa55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1aa560: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x1aa560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1aa564: 0x92600  sll         $a0, $t1, 24
    ctx->pc = 0x1aa564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1aa568: 0x6f1824  and         $v1, $v1, $t7
    ctx->pc = 0x1aa568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 15));
    // 0x1aa56c: 0x30e7ff00  andi        $a3, $a3, 0xFF00
    ctx->pc = 0x1aa56cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x1aa570: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1aa570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1aa574: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1aa574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1aa578: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x1aa578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1aa57c: 0x10990012  beq         $a0, $t9, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AA57Cu;
    {
        const bool branch_taken_0x1aa57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 25));
        ctx->pc = 0x1AA580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA57Cu;
            // 0x1aa580: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa57c) {
            ctx->pc = 0x1AA5C8u;
            goto label_1aa5c8;
        }
    }
    ctx->pc = 0x1AA584u;
    // 0x1aa584: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x1aa584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1aa588: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA588u;
    {
        const bool branch_taken_0x1aa588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA588u;
            // 0x1aa58c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa588) {
            ctx->pc = 0x1AA5A8u;
            goto label_1aa5a8;
        }
    }
    ctx->pc = 0x1AA590u;
    // 0x1aa590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa594: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA594u;
    {
        const bool branch_taken_0x1aa594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA594u;
            // 0x1aa598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa594) {
            ctx->pc = 0x1AA5B8u;
            goto label_1aa5b8;
        }
    }
    ctx->pc = 0x1AA59Cu;
    // 0x1aa59c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1AA59Cu;
    {
        const bool branch_taken_0x1aa59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA59Cu;
            // 0x1aa5a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa59c) {
            ctx->pc = 0x1AA71Cu;
            goto label_1aa71c;
        }
    }
    ctx->pc = 0x1AA5A4u;
    // 0x1aa5a4: 0x0  nop
    ctx->pc = 0x1aa5a4u;
    // NOP
label_1aa5a8:
    // 0x1aa5a8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA5A8u;
    {
        const bool branch_taken_0x1aa5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5A8u;
            // 0x1aa5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5a8) {
            ctx->pc = 0x1AA5E0u;
            goto label_1aa5e0;
        }
    }
    ctx->pc = 0x1AA5B0u;
    // 0x1aa5b0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1AA5B0u;
    {
        const bool branch_taken_0x1aa5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5B0u;
            // 0x1aa5b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5b0) {
            ctx->pc = 0x1AA71Cu;
            goto label_1aa71c;
        }
    }
    ctx->pc = 0x1AA5B8u;
label_1aa5b8:
    // 0x1aa5b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1aa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aa5bc: 0xad590000  sw          $t9, 0x0($t2)
    ctx->pc = 0x1aa5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 25));
    // 0x1aa5c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AA5C0u;
    {
        const bool branch_taken_0x1aa5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5C0u;
            // 0x1aa5c4: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5c0) {
            ctx->pc = 0x1AA5ECu;
            goto label_1aa5ec;
        }
    }
    ctx->pc = 0x1AA5C8u;
label_1aa5c8:
    // 0x1aa5c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa5cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1aa5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aa5d0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1aa5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1aa5d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA5D4u;
    {
        const bool branch_taken_0x1aa5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5D4u;
            // 0x1aa5d8: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5d4) {
            ctx->pc = 0x1AA5ECu;
            goto label_1aa5ec;
        }
    }
    ctx->pc = 0x1AA5DCu;
    // 0x1aa5dc: 0x0  nop
    ctx->pc = 0x1aa5dcu;
    // NOP
label_1aa5e0:
    // 0x1aa5e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1aa5e4: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1aa5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1aa5e8: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x1aa5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_1aa5ec:
    // 0x1aa5ec: 0x91650003  lbu         $a1, 0x3($t3)
    ctx->pc = 0x1aa5ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1aa5f0: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x1aa5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x1aa5f4: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x1aa5f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1aa5f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa5fc: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x1aa5fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1aa600: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1aa600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1aa604: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x1aa604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1aa608: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1aa608u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1aa60c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1aa60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1aa610: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1aa610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1aa614: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aa614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa618: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1aa618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1aa61c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa620: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x1aa620u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1aa624: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aa628: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1aa628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1aa62c: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1aa630: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1aa630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1aa634: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1aa634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1aa638: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1aa638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1aa63c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa640: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aa640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa644: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1aa644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1aa648: 0x91650001  lbu         $a1, 0x1($t3)
    ctx->pc = 0x1aa648u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1aa64c: 0x91640003  lbu         $a0, 0x3($t3)
    ctx->pc = 0x1aa64cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1aa650: 0x91630002  lbu         $v1, 0x2($t3)
    ctx->pc = 0x1aa650u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1aa654: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1aa654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1aa658: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x1aa658u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1aa65c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1aa65cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1aa660: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1aa664: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1aa664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1aa668: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1aa668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1aa66c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa670: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1aa674: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1aa674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1aa678: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1aa678u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1aa67c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1aa67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1aa680: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1aa680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1aa684: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1aa684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1aa688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aa68c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1aa68cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1aa690: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aa690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa694: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1aa694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1aa698: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1aa69c: 0x15470008  bne         $t2, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA69Cu;
    {
        const bool branch_taken_0x1aa69c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x1AA6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA69Cu;
            // 0x1aa6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa69c) {
            ctx->pc = 0x1AA6C0u;
            goto label_1aa6c0;
        }
    }
    ctx->pc = 0x1AA6A4u;
    // 0x1aa6a4: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1aa6a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aa6a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA6A8u;
    {
        const bool branch_taken_0x1aa6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa6a8) {
            ctx->pc = 0x1AA6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6A8u;
            // 0x1aa6ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6B0u;
            goto label_1aa6b0;
        }
    }
    ctx->pc = 0x1AA6B0u;
label_1aa6b0:
    // 0x1aa6b0: 0x1012  mflo        $v0
    ctx->pc = 0x1aa6b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1aa6b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1AA6B4u;
    {
        const bool branch_taken_0x1aa6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6B4u;
            // 0x1aa6b8: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6b4) {
            ctx->pc = 0x1AA714u;
            goto label_1aa714;
        }
    }
    ctx->pc = 0x1AA6BCu;
    // 0x1aa6bc: 0x0  nop
    ctx->pc = 0x1aa6bcu;
    // NOP
label_1aa6c0:
    // 0x1aa6c0: 0x15420007  bne         $t2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA6C0u;
    {
        const bool branch_taken_0x1aa6c0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa6c0) {
            ctx->pc = 0x1AA6E0u;
            goto label_1aa6e0;
        }
    }
    ctx->pc = 0x1AA6C8u;
    // 0x1aa6c8: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x1aa6c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aa6cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA6CCu;
    {
        const bool branch_taken_0x1aa6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa6cc) {
            ctx->pc = 0x1AA6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6CCu;
            // 0x1aa6d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6D4u;
            goto label_1aa6d4;
        }
    }
    ctx->pc = 0x1AA6D4u;
label_1aa6d4:
    // 0x1aa6d4: 0x1012  mflo        $v0
    ctx->pc = 0x1aa6d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1aa6d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AA6D8u;
    {
        const bool branch_taken_0x1aa6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6D8u;
            // 0x1aa6dc: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6d8) {
            ctx->pc = 0x1AA714u;
            goto label_1aa714;
        }
    }
    ctx->pc = 0x1AA6E0u;
label_1aa6e0:
    // 0x1aa6e0: 0x1540000b  bnez        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA6E0u;
    {
        const bool branch_taken_0x1aa6e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6E0u;
            // 0x1aa6e4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6e0) {
            ctx->pc = 0x1AA710u;
            goto label_1aa710;
        }
    }
    ctx->pc = 0x1AA6E8u;
    // 0x1aa6e8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1aa6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1aa6ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA6ECu;
    {
        const bool branch_taken_0x1aa6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa6ec) {
            ctx->pc = 0x1AA6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6ECu;
            // 0x1aa6f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA6F4u;
            goto label_1aa6f4;
        }
    }
    ctx->pc = 0x1AA6F4u;
label_1aa6f4:
    // 0x1aa6f4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1aa6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1aa6f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1aa6f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1aa6fc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1aa6fcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1aa700: 0x1012  mflo        $v0
    ctx->pc = 0x1aa700u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1aa704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA704u;
    {
        const bool branch_taken_0x1aa704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA704u;
            // 0x1aa708: 0xaf020000  sw          $v0, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa704) {
            ctx->pc = 0x1AA714u;
            goto label_1aa714;
        }
    }
    ctx->pc = 0x1AA70Cu;
    // 0x1aa70c: 0x0  nop
    ctx->pc = 0x1aa70cu;
    // NOP
label_1aa710:
    // 0x1aa710: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x1aa710u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
label_1aa714:
    // 0x1aa714: 0x1cc1021  addu        $v0, $t6, $t4
    ctx->pc = 0x1aa714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_1aa718:
    // 0x1aa718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa71c:
    // 0x1aa71c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa720: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA720u;
            // 0x1aa724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA728u;
    ctx->pc = 0x1aa728u;
}
