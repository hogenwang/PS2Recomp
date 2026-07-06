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

// Function: sub_00302410
// Address: 0x302410 - 0x302ae0
void sub_00302410_0x302410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302410_0x302410");
#endif

    ctx->pc = 0x302410u;

    // 0x302410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x302410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x302414: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x302418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30241c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x30241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x302420: 0x8c672480  lw          $a3, 0x2480($v1)
    ctx->pc = 0x302420u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302424: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x302424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x302428: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x302428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30242c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302430: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x302430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x302434: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x302434u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x302438: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x302438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30243c: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x30243cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x302440: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x302444: 0xfce00010  sd          $zero, 0x10($a3)
    ctx->pc = 0x302444u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 0));
    // 0x302448: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x30244c: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x30244cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x302450: 0x8c632480  lw          $v1, 0x2480($v1)
    ctx->pc = 0x302450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302454: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x302454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x302458: 0xaca32480  sw          $v1, 0x2480($a1)
    ctx->pc = 0x302458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9344), GPR_U32(ctx, 3));
    // 0x30245c: 0x9086003d  lbu         $a2, 0x3D($a0)
    ctx->pc = 0x30245cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x302460: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x302460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x302464: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x302464u;
    {
        const bool branch_taken_0x302464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x302464) {
            ctx->pc = 0x302468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302464u;
            // 0x302468: 0x30c50020  andi        $a1, $a2, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30248Cu;
            goto label_30248c;
        }
    }
    ctx->pc = 0x30246Cu;
    // 0x30246c: 0x3c062007  lui         $a2, 0x2007
    ctx->pc = 0x30246cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8199 << 16));
    // 0x302470: 0x3c056932  lui         $a1, 0x6932
    ctx->pc = 0x302470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26930 << 16));
    // 0x302474: 0x34c6d006  ori         $a2, $a2, 0xD006
    ctx->pc = 0x302474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53254);
    // 0x302478: 0x34a5b480  ori         $a1, $a1, 0xB480
    ctx->pc = 0x302478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46208);
    // 0x30247c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30247cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x302480: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x302480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x302484: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x302484u;
    {
        const bool branch_taken_0x302484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302484u;
        // 0x302488: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302484) {
            ctx->pc = 0x302504u;
            goto label_302504;
        }
    }
    ctx->pc = 0x30248Cu;
label_30248c:
    // 0x30248c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30248Cu;
    {
        const bool branch_taken_0x30248c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30248c) {
            ctx->pc = 0x302490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30248Cu;
            // 0x302490: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3024B8u;
            goto label_3024b8;
        }
    }
    ctx->pc = 0x302494u;
    // 0x302494: 0x3c062007  lui         $a2, 0x2007
    ctx->pc = 0x302494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8199 << 16));
    // 0x302498: 0x3405dd31  ori         $a1, $zero, 0xDD31
    ctx->pc = 0x302498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56625);
    // 0x30249c: 0x34c6d005  ori         $a2, $a2, 0xD005
    ctx->pc = 0x30249cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53253);
    // 0x3024a0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3024a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3024a4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3024a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3024a8: 0x34a53480  ori         $a1, $a1, 0x3480
    ctx->pc = 0x3024a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13440);
    // 0x3024ac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3024acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3024b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3024B0u;
    {
        const bool branch_taken_0x3024b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3024B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024B0u;
        // 0x3024b4: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024b0) {
            ctx->pc = 0x302504u;
            goto label_302504;
        }
    }
    ctx->pc = 0x3024B8u;
label_3024b8:
    // 0x3024b8: 0x30c8000f  andi        $t0, $a2, 0xF
    ctx->pc = 0x3024b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x3024bc: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x3024bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3024c0: 0x82a40  sll         $a1, $t0, 9
    ctx->pc = 0x3024c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 9));
    // 0x3024c4: 0x24a63480  addiu       $a2, $a1, 0x3480
    ctx->pc = 0x3024c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
    // 0x3024c8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3024c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3024cc: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x3024ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3024d0: 0x24a53e80  addiu       $a1, $a1, 0x3E80
    ctx->pc = 0x3024d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
    // 0x3024d4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3024d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3024d8: 0x3c066131  lui         $a2, 0x6131
    ctx->pc = 0x3024d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24881 << 16));
    // 0x3024dc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3024dcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3024e0: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x3024e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3024e4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3024e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3024e8: 0x5317c  dsll32      $a2, $a1, 5
    ctx->pc = 0x3024e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 5));
    // 0x3024ec: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3024ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3024f0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3024f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3024f4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x3024f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x3024f8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3024f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3024fc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3024fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x302500: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x302500u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_302504:
    // 0x302504: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302508: 0x3c05c0aa  lui         $a1, 0xC0AA
    ctx->pc = 0x302508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49322 << 16));
    // 0x30250c: 0x8c6a2480  lw          $t2, 0x2480($v1)
    ctx->pc = 0x30250cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302510: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x302510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x302514: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x302514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x302518: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x302518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30251c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x30251cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x302520: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x302520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x302524: 0xfd490008  sd          $t1, 0x8($t2)
    ctx->pc = 0x302524u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 9));
    // 0x302528: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x302528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x30252c: 0xfd400010  sd          $zero, 0x10($t2)
    ctx->pc = 0x30252cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 0));
    // 0x302530: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x302530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x302534: 0xfd480018  sd          $t0, 0x18($t2)
    ctx->pc = 0x302534u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 8));
    // 0x302538: 0x70032b89  pcpyld      $a1, $zero, $v1
    ctx->pc = 0x302538u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x30253c: 0xfd470020  sd          $a3, 0x20($t2)
    ctx->pc = 0x30253cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 7));
    // 0x302540: 0x24035135  addiu       $v1, $zero, 0x5135
    ctx->pc = 0x302540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20789));
    // 0x302544: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x302544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x302548: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x302548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30254c: 0xfd460028  sd          $a2, 0x28($t2)
    ctx->pc = 0x30254cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 6));
    // 0x302550: 0x3c031351  lui         $v1, 0x1351
    ctx->pc = 0x302550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4945 << 16));
    // 0x302554: 0x34663513  ori         $a2, $v1, 0x3513
    ctx->pc = 0x302554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x302558: 0xfd450030  sd          $a1, 0x30($t2)
    ctx->pc = 0x302558u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 48), GPR_U64(ctx, 5));
    // 0x30255c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x30255cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x302560: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x302564: 0xfd460038  sd          $a2, 0x38($t2)
    ctx->pc = 0x302564u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 6));
    // 0x302568: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x30256c: 0x8cb82480  lw          $t8, 0x2480($a1)
    ctx->pc = 0x30256cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
    // 0x302570: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x302570u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x302574: 0x3c0d01cc  lui         $t5, 0x1CC
    ctx->pc = 0x302574u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)460 << 16));
    // 0x302578: 0x3c0c01cc  lui         $t4, 0x1CC
    ctx->pc = 0x302578u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)460 << 16));
    // 0x30257c: 0x3c0b01cc  lui         $t3, 0x1CC
    ctx->pc = 0x30257cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)460 << 16));
    // 0x302580: 0x3c0a01cc  lui         $t2, 0x1CC
    ctx->pc = 0x302580u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)460 << 16));
    // 0x302584: 0x27050040  addiu       $a1, $t8, 0x40
    ctx->pc = 0x302584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 64));
    // 0x302588: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x302588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30258c: 0xac652480  sw          $a1, 0x2480($v1)
    ctx->pc = 0x30258cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9344), GPR_U32(ctx, 5));
    // 0x302590: 0x3c0901cc  lui         $t1, 0x1CC
    ctx->pc = 0x302590u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)460 << 16));
    // 0x302594: 0x8c900028  lw          $s0, 0x28($a0)
    ctx->pc = 0x302594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x302598: 0x3c0801cc  lui         $t0, 0x1CC
    ctx->pc = 0x302598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)460 << 16));
    // 0x30259c: 0x3c0701cc  lui         $a3, 0x1CC
    ctx->pc = 0x30259cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)460 << 16));
    // 0x3025a0: 0x3c0601cc  lui         $a2, 0x1CC
    ctx->pc = 0x3025a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)460 << 16));
    // 0x3025a4: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x3025a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x3025a8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3025a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3025ac: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3025acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3025b0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3025b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3025b4: 0xaf100040  sw          $s0, 0x40($t8)
    ctx->pc = 0x3025b4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 16));
    // 0x3025b8: 0x8c90002c  lw          $s0, 0x2C($a0)
    ctx->pc = 0x3025b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3025bc: 0x8dce2480  lw          $t6, 0x2480($t6)
    ctx->pc = 0x3025bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 9344)));
    // 0x3025c0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x3025c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3025c4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3025c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3025c8: 0xadd00004  sw          $s0, 0x4($t6)
    ctx->pc = 0x3025c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 16));
    // 0x3025cc: 0x8dad2480  lw          $t5, 0x2480($t5)
    ctx->pc = 0x3025ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 9344)));
    // 0x3025d0: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x3025d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x3025d4: 0x8d8c2480  lw          $t4, 0x2480($t4)
    ctx->pc = 0x3025d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 9344)));
    // 0x3025d8: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x3025d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x3025dc: 0x8d6c2480  lw          $t4, 0x2480($t3)
    ctx->pc = 0x3025dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 9344)));
    // 0x3025e0: 0x258b0010  addiu       $t3, $t4, 0x10
    ctx->pc = 0x3025e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3025e4: 0xad4b2480  sw          $t3, 0x2480($t2)
    ctx->pc = 0x3025e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 9344), GPR_U32(ctx, 11));
    // 0x3025e8: 0xad8f0010  sw          $t7, 0x10($t4)
    ctx->pc = 0x3025e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 15));
    // 0x3025ec: 0x8d292480  lw          $t1, 0x2480($t1)
    ctx->pc = 0x3025ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 9344)));
    // 0x3025f0: 0xad2f0004  sw          $t7, 0x4($t1)
    ctx->pc = 0x3025f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 15));
    // 0x3025f4: 0x8d082480  lw          $t0, 0x2480($t0)
    ctx->pc = 0x3025f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9344)));
    // 0x3025f8: 0xad0f0008  sw          $t7, 0x8($t0)
    ctx->pc = 0x3025f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 15));
    // 0x3025fc: 0x8ce72480  lw          $a3, 0x2480($a3)
    ctx->pc = 0x3025fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 9344)));
    // 0x302600: 0x9088003e  lbu         $t0, 0x3E($a0)
    ctx->pc = 0x302600u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x302604: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x302604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x302608: 0x8cc72480  lw          $a3, 0x2480($a2)
    ctx->pc = 0x302608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9344)));
    // 0x30260c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x30260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x302610: 0xaca62480  sw          $a2, 0x2480($a1)
    ctx->pc = 0x302610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9344), GPR_U32(ctx, 6));
    // 0x302614: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x302614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302618: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x302618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30261c: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x30261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x302620: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x302620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x302624: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x302624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x302628: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x302628u;
    {
        const bool branch_taken_0x302628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302628) {
            ctx->pc = 0x30262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302628u;
            // 0x30262c: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302684u;
            goto label_302684;
        }
    }
    ctx->pc = 0x302630u;
    // 0x302630: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x302630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x302634: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x302634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x302638: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x302638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x30263c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x30263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x302640: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x302640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x302644: 0x24c67200  addiu       $a2, $a2, 0x7200
    ctx->pc = 0x302644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29184));
    // 0x302648: 0x24c78000  addiu       $a3, $a2, -0x8000
    ctx->pc = 0x302648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x30264c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x30264cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x302650: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x302650u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x302654: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x302654u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x302658: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x302658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30265c: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x30265cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x302660: 0x0  nop
    ctx->pc = 0x302660u;
    // NOP
    // 0x302664: 0x2810  mfhi        $a1
    ctx->pc = 0x302664u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x302668: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x302668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x30266c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x30266cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x302670: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x302670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x302674: 0x24a57fff  addiu       $a1, $a1, 0x7FFF
    ctx->pc = 0x302674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x302678: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x302678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30267c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30267Cu;
    {
        const bool branch_taken_0x30267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30267Cu;
        // 0x302680: 0xa33824  and         $a3, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30267c) {
            ctx->pc = 0x30268Cu;
            goto label_30268c;
        }
    }
    ctx->pc = 0x302684u;
label_302684:
    // 0x302684: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x302684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x302688: 0x24677200  addiu       $a3, $v1, 0x7200
    ctx->pc = 0x302688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_30268c:
    // 0x30268c: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x30268cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302690: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x302694: 0x8c662480  lw          $a2, 0x2480($v1)
    ctx->pc = 0x302694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302698: 0x3c1801cc  lui         $t8, 0x1CC
    ctx->pc = 0x302698u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)460 << 16));
    // 0x30269c: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x30269cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x3026a0: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x3026a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x3026a4: 0x3c0d01cc  lui         $t5, 0x1CC
    ctx->pc = 0x3026a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)460 << 16));
    // 0x3026a8: 0x3c0c01cc  lui         $t4, 0x1CC
    ctx->pc = 0x3026a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)460 << 16));
    // 0x3026ac: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x3026acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x3026b0: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x3026b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x3026b4: 0x8ca52480  lw          $a1, 0x2480($a1)
    ctx->pc = 0x3026b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
    // 0x3026b8: 0x3c0b01cc  lui         $t3, 0x1CC
    ctx->pc = 0x3026b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)460 << 16));
    // 0x3026bc: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x3026bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3026c0: 0x3c0a01cc  lui         $t2, 0x1CC
    ctx->pc = 0x3026c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)460 << 16));
    // 0x3026c4: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x3026c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3026c8: 0x3c0901cc  lui         $t1, 0x1CC
    ctx->pc = 0x3026c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)460 << 16));
    // 0x3026cc: 0x3c0801cc  lui         $t0, 0x1CC
    ctx->pc = 0x3026ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)460 << 16));
    // 0x3026d0: 0x3c0701cc  lui         $a3, 0x1CC
    ctx->pc = 0x3026d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)460 << 16));
    // 0x3026d4: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x3026d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x3026d8: 0x8c792480  lw          $t9, 0x2480($v1)
    ctx->pc = 0x3026d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x3026dc: 0x3c0601cc  lui         $a2, 0x1CC
    ctx->pc = 0x3026dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)460 << 16));
    // 0x3026e0: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x3026e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x3026e4: 0xaf20000c  sw          $zero, 0xC($t9)
    ctx->pc = 0x3026e4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 0));
    // 0x3026e8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3026e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3026ec: 0x8f192480  lw          $t9, 0x2480($t8)
    ctx->pc = 0x3026ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 9344)));
    // 0x3026f0: 0x27380010  addiu       $t8, $t9, 0x10
    ctx->pc = 0x3026f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x3026f4: 0xadf82480  sw          $t8, 0x2480($t7)
    ctx->pc = 0x3026f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 9344), GPR_U32(ctx, 24));
    // 0x3026f8: 0x8c8f0028  lw          $t7, 0x28($a0)
    ctx->pc = 0x3026f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3026fc: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x3026fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x302700: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x302700u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x302704: 0xaf2f0010  sw          $t7, 0x10($t9)
    ctx->pc = 0x302704u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 15));
    // 0x302708: 0x8c98002c  lw          $t8, 0x2C($a0)
    ctx->pc = 0x302708u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x30270c: 0x8c8f0034  lw          $t7, 0x34($a0)
    ctx->pc = 0x30270cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x302710: 0x8dce2480  lw          $t6, 0x2480($t6)
    ctx->pc = 0x302710u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 9344)));
    // 0x302714: 0x30f7821  addu        $t7, $t8, $t7
    ctx->pc = 0x302714u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x302718: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x302718u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30271c: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x30271cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x302720: 0x8dad2480  lw          $t5, 0x2480($t5)
    ctx->pc = 0x302720u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 9344)));
    // 0x302724: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x302724u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x302728: 0x8d8c2480  lw          $t4, 0x2480($t4)
    ctx->pc = 0x302728u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 9344)));
    // 0x30272c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x30272cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x302730: 0x8d6c2480  lw          $t4, 0x2480($t3)
    ctx->pc = 0x302730u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 9344)));
    // 0x302734: 0x258b0010  addiu       $t3, $t4, 0x10
    ctx->pc = 0x302734u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x302738: 0xad4b2480  sw          $t3, 0x2480($t2)
    ctx->pc = 0x302738u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 9344), GPR_U32(ctx, 11));
    // 0x30273c: 0xad900010  sw          $s0, 0x10($t4)
    ctx->pc = 0x30273cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 16));
    // 0x302740: 0x8d292480  lw          $t1, 0x2480($t1)
    ctx->pc = 0x302740u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 9344)));
    // 0x302744: 0xad300004  sw          $s0, 0x4($t1)
    ctx->pc = 0x302744u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 16));
    // 0x302748: 0x8d082480  lw          $t0, 0x2480($t0)
    ctx->pc = 0x302748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9344)));
    // 0x30274c: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x30274cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x302750: 0x8ce72480  lw          $a3, 0x2480($a3)
    ctx->pc = 0x302750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 9344)));
    // 0x302754: 0x9088003e  lbu         $t0, 0x3E($a0)
    ctx->pc = 0x302754u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x302758: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x302758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x30275c: 0x8cc72480  lw          $a3, 0x2480($a2)
    ctx->pc = 0x30275cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9344)));
    // 0x302760: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x302760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x302764: 0xaca62480  sw          $a2, 0x2480($a1)
    ctx->pc = 0x302764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9344), GPR_U32(ctx, 6));
    // 0x302768: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x302768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30276c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30276cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x302770: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x302770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x302774: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x302774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x302778: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x302778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x30277c: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x30277Cu;
    {
        const bool branch_taken_0x30277c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30277c) {
            ctx->pc = 0x302780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30277Cu;
            // 0x302780: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3027D8u;
            goto label_3027d8;
        }
    }
    ctx->pc = 0x302784u;
    // 0x302784: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x302784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x302788: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x302788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x30278c: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x30278cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x302790: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x302790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x302794: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x302794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x302798: 0x24c67200  addiu       $a2, $a2, 0x7200
    ctx->pc = 0x302798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29184));
    // 0x30279c: 0x24c78000  addiu       $a3, $a2, -0x8000
    ctx->pc = 0x30279cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x3027a0: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x3027a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3027a4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3027a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3027a8: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x3027a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x3027ac: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x3027acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3027b0: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x3027b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x3027b4: 0x0  nop
    ctx->pc = 0x3027b4u;
    // NOP
    // 0x3027b8: 0x2810  mfhi        $a1
    ctx->pc = 0x3027b8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3027bc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3027bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3027c0: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x3027c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x3027c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3027c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3027c8: 0x24a57fff  addiu       $a1, $a1, 0x7FFF
    ctx->pc = 0x3027c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x3027cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3027ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3027d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3027D0u;
    {
        const bool branch_taken_0x3027d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3027D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3027D0u;
        // 0x3027d4: 0xa33824  and         $a3, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3027d0) {
            ctx->pc = 0x3027E0u;
            goto label_3027e0;
        }
    }
    ctx->pc = 0x3027D8u;
label_3027d8:
    // 0x3027d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3027d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3027dc: 0x24677200  addiu       $a3, $v1, 0x7200
    ctx->pc = 0x3027dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_3027e0:
    // 0x3027e0: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x3027e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x3027e4: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x3027e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x3027e8: 0x8c662480  lw          $a2, 0x2480($v1)
    ctx->pc = 0x3027e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x3027ec: 0x3c1801cc  lui         $t8, 0x1CC
    ctx->pc = 0x3027ecu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)460 << 16));
    // 0x3027f0: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x3027f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x3027f4: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x3027f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x3027f8: 0x3c0d01cc  lui         $t5, 0x1CC
    ctx->pc = 0x3027f8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)460 << 16));
    // 0x3027fc: 0x3c0c01cc  lui         $t4, 0x1CC
    ctx->pc = 0x3027fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)460 << 16));
    // 0x302800: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x302800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x302804: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302808: 0x8ca52480  lw          $a1, 0x2480($a1)
    ctx->pc = 0x302808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
    // 0x30280c: 0x3c0b01cc  lui         $t3, 0x1CC
    ctx->pc = 0x30280cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)460 << 16));
    // 0x302810: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x302810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x302814: 0x3c0a01cc  lui         $t2, 0x1CC
    ctx->pc = 0x302814u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)460 << 16));
    // 0x302818: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x302818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30281c: 0x3c0901cc  lui         $t1, 0x1CC
    ctx->pc = 0x30281cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)460 << 16));
    // 0x302820: 0x3c0801cc  lui         $t0, 0x1CC
    ctx->pc = 0x302820u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)460 << 16));
    // 0x302824: 0x3c0701cc  lui         $a3, 0x1CC
    ctx->pc = 0x302824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)460 << 16));
    // 0x302828: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x302828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x30282c: 0x8c792480  lw          $t9, 0x2480($v1)
    ctx->pc = 0x30282cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302830: 0x3c0601cc  lui         $a2, 0x1CC
    ctx->pc = 0x302830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)460 << 16));
    // 0x302834: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x302838: 0xaf20000c  sw          $zero, 0xC($t9)
    ctx->pc = 0x302838u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 0));
    // 0x30283c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x30283cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x302840: 0x8f192480  lw          $t9, 0x2480($t8)
    ctx->pc = 0x302840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 9344)));
    // 0x302844: 0x27380010  addiu       $t8, $t9, 0x10
    ctx->pc = 0x302844u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x302848: 0xadf82480  sw          $t8, 0x2480($t7)
    ctx->pc = 0x302848u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 9344), GPR_U32(ctx, 24));
    // 0x30284c: 0x8c980028  lw          $t8, 0x28($a0)
    ctx->pc = 0x30284cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x302850: 0x8c8f0030  lw          $t7, 0x30($a0)
    ctx->pc = 0x302850u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x302854: 0x30f7821  addu        $t7, $t8, $t7
    ctx->pc = 0x302854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x302858: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x302858u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30285c: 0xaf2f0010  sw          $t7, 0x10($t9)
    ctx->pc = 0x30285cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 15));
    // 0x302860: 0x8c8f002c  lw          $t7, 0x2C($a0)
    ctx->pc = 0x302860u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x302864: 0x8dce2480  lw          $t6, 0x2480($t6)
    ctx->pc = 0x302864u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 9344)));
    // 0x302868: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x302868u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30286c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x30286cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x302870: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x302870u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x302874: 0x8dad2480  lw          $t5, 0x2480($t5)
    ctx->pc = 0x302874u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 9344)));
    // 0x302878: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x302878u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x30287c: 0x8d8c2480  lw          $t4, 0x2480($t4)
    ctx->pc = 0x30287cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 9344)));
    // 0x302880: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x302880u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x302884: 0x8d6c2480  lw          $t4, 0x2480($t3)
    ctx->pc = 0x302884u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 9344)));
    // 0x302888: 0x258b0010  addiu       $t3, $t4, 0x10
    ctx->pc = 0x302888u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x30288c: 0xad4b2480  sw          $t3, 0x2480($t2)
    ctx->pc = 0x30288cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 9344), GPR_U32(ctx, 11));
    // 0x302890: 0xad900010  sw          $s0, 0x10($t4)
    ctx->pc = 0x302890u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 16));
    // 0x302894: 0x8d292480  lw          $t1, 0x2480($t1)
    ctx->pc = 0x302894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 9344)));
    // 0x302898: 0xad300004  sw          $s0, 0x4($t1)
    ctx->pc = 0x302898u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 16));
    // 0x30289c: 0x8d082480  lw          $t0, 0x2480($t0)
    ctx->pc = 0x30289cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9344)));
    // 0x3028a0: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x3028a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x3028a4: 0x8ce72480  lw          $a3, 0x2480($a3)
    ctx->pc = 0x3028a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 9344)));
    // 0x3028a8: 0x9088003e  lbu         $t0, 0x3E($a0)
    ctx->pc = 0x3028a8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x3028ac: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x3028acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x3028b0: 0x8cc72480  lw          $a3, 0x2480($a2)
    ctx->pc = 0x3028b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9344)));
    // 0x3028b4: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x3028b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3028b8: 0xaca62480  sw          $a2, 0x2480($a1)
    ctx->pc = 0x3028b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9344), GPR_U32(ctx, 6));
    // 0x3028bc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3028bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3028c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3028c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3028c4: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x3028c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x3028c8: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x3028c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x3028cc: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x3028ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x3028d0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3028D0u;
    {
        const bool branch_taken_0x3028d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3028d0) {
            ctx->pc = 0x3028D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3028D0u;
            // 0x3028d4: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30292Cu;
            goto label_30292c;
        }
    }
    ctx->pc = 0x3028D8u;
    // 0x3028d8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x3028d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3028dc: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x3028dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x3028e0: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x3028e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3028e4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3028e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3028e8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3028e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3028ec: 0x24c67200  addiu       $a2, $a2, 0x7200
    ctx->pc = 0x3028ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29184));
    // 0x3028f0: 0x24c78000  addiu       $a3, $a2, -0x8000
    ctx->pc = 0x3028f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x3028f4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x3028f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3028f8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3028f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3028fc: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x3028fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x302900: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x302900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x302904: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x302904u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x302908: 0x0  nop
    ctx->pc = 0x302908u;
    // NOP
    // 0x30290c: 0x2810  mfhi        $a1
    ctx->pc = 0x30290cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x302910: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x302910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x302914: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x302914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x302918: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x302918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x30291c: 0x24a57fff  addiu       $a1, $a1, 0x7FFF
    ctx->pc = 0x30291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x302920: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x302920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x302924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302924u;
    {
        const bool branch_taken_0x302924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302924u;
        // 0x302928: 0xa33824  and         $a3, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302924) {
            ctx->pc = 0x302934u;
            goto label_302934;
        }
    }
    ctx->pc = 0x30292Cu;
label_30292c:
    // 0x30292c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30292cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x302930: 0x24677200  addiu       $a3, $v1, 0x7200
    ctx->pc = 0x302930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_302934:
    // 0x302934: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302938: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x30293c: 0x8c662480  lw          $a2, 0x2480($v1)
    ctx->pc = 0x30293cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302940: 0x3c1801cc  lui         $t8, 0x1CC
    ctx->pc = 0x302940u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)460 << 16));
    // 0x302944: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x302944u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x302948: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x302948u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x30294c: 0x3c0d01cc  lui         $t5, 0x1CC
    ctx->pc = 0x30294cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)460 << 16));
    // 0x302950: 0x3c0c01cc  lui         $t4, 0x1CC
    ctx->pc = 0x302950u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)460 << 16));
    // 0x302954: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x302954u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x302958: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x30295c: 0x8ca52480  lw          $a1, 0x2480($a1)
    ctx->pc = 0x30295cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
    // 0x302960: 0x3c0b01cc  lui         $t3, 0x1CC
    ctx->pc = 0x302960u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)460 << 16));
    // 0x302964: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x302964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x302968: 0x3c0a01cc  lui         $t2, 0x1CC
    ctx->pc = 0x302968u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)460 << 16));
    // 0x30296c: 0x24190080  addiu       $t9, $zero, 0x80
    ctx->pc = 0x30296cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x302970: 0x3c0901cc  lui         $t1, 0x1CC
    ctx->pc = 0x302970u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)460 << 16));
    // 0x302974: 0x3c0801cc  lui         $t0, 0x1CC
    ctx->pc = 0x302974u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)460 << 16));
    // 0x302978: 0x3c0701cc  lui         $a3, 0x1CC
    ctx->pc = 0x302978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)460 << 16));
    // 0x30297c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x30297cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x302980: 0x8c702480  lw          $s0, 0x2480($v1)
    ctx->pc = 0x302980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302984: 0x3c0601cc  lui         $a2, 0x1CC
    ctx->pc = 0x302984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)460 << 16));
    // 0x302988: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x30298c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x302990: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x302990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x302994: 0x8f102480  lw          $s0, 0x2480($t8)
    ctx->pc = 0x302994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 9344)));
    // 0x302998: 0x26180010  addiu       $t8, $s0, 0x10
    ctx->pc = 0x302998u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30299c: 0xadf82480  sw          $t8, 0x2480($t7)
    ctx->pc = 0x30299cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 9344), GPR_U32(ctx, 24));
    // 0x3029a0: 0x8c980028  lw          $t8, 0x28($a0)
    ctx->pc = 0x3029a0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3029a4: 0x8c8f0030  lw          $t7, 0x30($a0)
    ctx->pc = 0x3029a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3029a8: 0x30f7821  addu        $t7, $t8, $t7
    ctx->pc = 0x3029a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x3029ac: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x3029acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3029b0: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x3029b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
    // 0x3029b4: 0x8c98002c  lw          $t8, 0x2C($a0)
    ctx->pc = 0x3029b4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3029b8: 0x8c8f0034  lw          $t7, 0x34($a0)
    ctx->pc = 0x3029b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3029bc: 0x8dce2480  lw          $t6, 0x2480($t6)
    ctx->pc = 0x3029bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 9344)));
    // 0x3029c0: 0x30f7821  addu        $t7, $t8, $t7
    ctx->pc = 0x3029c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x3029c4: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x3029c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3029c8: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x3029c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x3029cc: 0x8dad2480  lw          $t5, 0x2480($t5)
    ctx->pc = 0x3029ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 9344)));
    // 0x3029d0: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x3029d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x3029d4: 0x8d8c2480  lw          $t4, 0x2480($t4)
    ctx->pc = 0x3029d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 9344)));
    // 0x3029d8: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x3029d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x3029dc: 0x8d6c2480  lw          $t4, 0x2480($t3)
    ctx->pc = 0x3029dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 9344)));
    // 0x3029e0: 0x258b0010  addiu       $t3, $t4, 0x10
    ctx->pc = 0x3029e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x3029e4: 0xad4b2480  sw          $t3, 0x2480($t2)
    ctx->pc = 0x3029e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 9344), GPR_U32(ctx, 11));
    // 0x3029e8: 0xad990010  sw          $t9, 0x10($t4)
    ctx->pc = 0x3029e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 25));
    // 0x3029ec: 0x8d292480  lw          $t1, 0x2480($t1)
    ctx->pc = 0x3029ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 9344)));
    // 0x3029f0: 0xad390004  sw          $t9, 0x4($t1)
    ctx->pc = 0x3029f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x3029f4: 0x8d082480  lw          $t0, 0x2480($t0)
    ctx->pc = 0x3029f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9344)));
    // 0x3029f8: 0xad190008  sw          $t9, 0x8($t0)
    ctx->pc = 0x3029f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 25));
    // 0x3029fc: 0x8ce72480  lw          $a3, 0x2480($a3)
    ctx->pc = 0x3029fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 9344)));
    // 0x302a00: 0x9088003e  lbu         $t0, 0x3E($a0)
    ctx->pc = 0x302a00u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x302a04: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x302a04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x302a08: 0x8cc72480  lw          $a3, 0x2480($a2)
    ctx->pc = 0x302a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9344)));
    // 0x302a0c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x302a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x302a10: 0xaca62480  sw          $a2, 0x2480($a1)
    ctx->pc = 0x302a10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9344), GPR_U32(ctx, 6));
    // 0x302a14: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x302a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x302a18: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x302a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x302a1c: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x302a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x302a20: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x302a20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x302a24: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x302a24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x302a28: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x302A28u;
    {
        const bool branch_taken_0x302a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302a28) {
            ctx->pc = 0x302A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302A28u;
            // 0x302a2c: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302A84u;
            goto label_302a84;
        }
    }
    ctx->pc = 0x302A30u;
    // 0x302a30: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x302a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x302a34: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x302a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x302a38: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x302a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x302a3c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x302a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x302a40: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x302a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x302a44: 0x24c67200  addiu       $a2, $a2, 0x7200
    ctx->pc = 0x302a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29184));
    // 0x302a48: 0x24c78000  addiu       $a3, $a2, -0x8000
    ctx->pc = 0x302a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x302a4c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x302a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x302a50: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x302a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x302a54: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x302a54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x302a58: 0xa70018  mult        $zero, $a1, $a3
    ctx->pc = 0x302a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x302a5c: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x302a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x302a60: 0x0  nop
    ctx->pc = 0x302a60u;
    // NOP
    // 0x302a64: 0x2810  mfhi        $a1
    ctx->pc = 0x302a64u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x302a68: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x302a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x302a6c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x302a6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x302a70: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x302a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x302a74: 0x24a57fff  addiu       $a1, $a1, 0x7FFF
    ctx->pc = 0x302a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x302a78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x302a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x302a7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302A7Cu;
    {
        const bool branch_taken_0x302a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302A7Cu;
        // 0x302a80: 0xa34824  and         $t1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302a7c) {
            ctx->pc = 0x302A8Cu;
            goto label_302a8c;
        }
    }
    ctx->pc = 0x302A84u;
label_302a84:
    // 0x302a84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x302a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x302a88: 0x24697200  addiu       $t1, $v1, 0x7200
    ctx->pc = 0x302a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
label_302a8c:
    // 0x302a8c: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302a90: 0x3c0701cc  lui         $a3, 0x1CC
    ctx->pc = 0x302a90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)460 << 16));
    // 0x302a94: 0x8c682480  lw          $t0, 0x2480($v1)
    ctx->pc = 0x302a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x302a98: 0x3c0601cc  lui         $a2, 0x1CC
    ctx->pc = 0x302a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)460 << 16));
    // 0x302a9c: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x302a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x302aa0: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x302aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x302aa4: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302aa8: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x302aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x302aac: 0x8ce42480  lw          $a0, 0x2480($a3)
    ctx->pc = 0x302aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 9344)));
    // 0x302ab0: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x302ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x302ab4: 0x8cc42480  lw          $a0, 0x2480($a2)
    ctx->pc = 0x302ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 9344)));
    // 0x302ab8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x302ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x302abc: 0x8ca42480  lw          $a0, 0x2480($a1)
    ctx->pc = 0x302abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9344)));
    // 0x302ac0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x302ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x302ac4: 0xac642480  sw          $a0, 0x2480($v1)
    ctx->pc = 0x302ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9344), GPR_U32(ctx, 4));
    // 0x302ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302acc: 0x3e00008  jr          $ra
    ctx->pc = 0x302ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302ACCu;
        // 0x302ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302AD4u;
    // 0x302ad4: 0x0  nop
    ctx->pc = 0x302ad4u;
    // NOP
    // 0x302ad8: 0x0  nop
    ctx->pc = 0x302ad8u;
    // NOP
    // 0x302adc: 0x0  nop
    ctx->pc = 0x302adcu;
    // NOP
    if (ctx->pc == 0x302adcu) { ctx->pc = 0x302ae0u; }
}
