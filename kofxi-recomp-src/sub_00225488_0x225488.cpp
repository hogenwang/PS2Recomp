#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225488
// Address: 0x225488 - 0x225b28
void sub_00225488_0x225488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225488_0x225488");
#endif

    switch (ctx->pc) {
        case 0x2255fcu: goto label_2255fc;
        case 0x225770u: goto label_225770;
        case 0x22598cu: goto label_22598c;
        case 0x2259b0u: goto label_2259b0;
        default: break;
    }

    ctx->pc = 0x225488u;

    // 0x225488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22548c: 0x3c0b003a  lui         $t3, 0x3A
    ctx->pc = 0x22548cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)58 << 16));
    // 0x225490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225494: 0x256bd848  addiu       $t3, $t3, -0x27B8
    ctx->pc = 0x225494u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957128));
    // 0x225498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22549c: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x22549cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x2254a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2254a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2254a4: 0x254ad048  addiu       $t2, $t2, -0x2FB8
    ctx->pc = 0x2254a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955080));
    // 0x2254a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2254a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254ac: 0x908f0000  lbu         $t7, 0x0($a0)
    ctx->pc = 0x2254acu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2254b0: 0x908d0001  lbu         $t5, 0x1($a0)
    ctx->pc = 0x2254b0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2254b4: 0xf78c0  sll         $t7, $t7, 3
    ctx->pc = 0x2254b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x2254b8: 0x908c0002  lbu         $t4, 0x2($a0)
    ctx->pc = 0x2254b8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2254bc: 0x1eb4821  addu        $t1, $t7, $t3
    ctx->pc = 0x2254bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x2254c0: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x2254c0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x2254c4: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x2254c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x2254c8: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x2254c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2254cc: 0xddee0000  ld          $t6, 0x0($t7)
    ctx->pc = 0x2254ccu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2254d0: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2254d4: 0xdda70000  ld          $a3, 0x0($t5)
    ctx->pc = 0x2254d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2254d8: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x2254d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x2254dc: 0xdd2f0000  ld          $t7, 0x0($t1)
    ctx->pc = 0x2254dcu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2254e0: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x2254e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x2254e4: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x2254e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2254e8: 0x1c77025  or          $t6, $t6, $a3
    ctx->pc = 0x2254e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x2254ec: 0x18b4821  addu        $t1, $t4, $t3
    ctx->pc = 0x2254ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x2254f0: 0x908d0003  lbu         $t5, 0x3($a0)
    ctx->pc = 0x2254f0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2254f4: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x2254f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2254f8: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x2254f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2254fc: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x2254fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x225500: 0xdd880000  ld          $t0, 0x0($t4)
    ctx->pc = 0x225500u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x225504: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x225504u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x225508: 0x1e67825  or          $t7, $t7, $a2
    ctx->pc = 0x225508u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
    // 0x22550c: 0x1ab4821  addu        $t1, $t5, $t3
    ctx->pc = 0x22550cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x225510: 0x908c0004  lbu         $t4, 0x4($a0)
    ctx->pc = 0x225510u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x225514: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x225514u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x225518: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x225518u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x22551c: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x22551cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x225520: 0x1c87025  or          $t6, $t6, $t0
    ctx->pc = 0x225520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x225524: 0x1e77825  or          $t7, $t7, $a3
    ctx->pc = 0x225524u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x225528: 0xdda80000  ld          $t0, 0x0($t5)
    ctx->pc = 0x225528u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x22552c: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x22552cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x225530: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x225530u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x225534: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x225534u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x225538: 0x908d0005  lbu         $t5, 0x5($a0)
    ctx->pc = 0x225538u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x22553c: 0x18b4821  addu        $t1, $t4, $t3
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x225540: 0x1e77825  or          $t7, $t7, $a3
    ctx->pc = 0x225540u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x225544: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x225544u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x225548: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x225548u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x22554c: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x22554cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x225550: 0x1c87025  or          $t6, $t6, $t0
    ctx->pc = 0x225550u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x225554: 0xdd880000  ld          $t0, 0x0($t4)
    ctx->pc = 0x225554u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x225558: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x225558u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x22555c: 0x1ab4821  addu        $t1, $t5, $t3
    ctx->pc = 0x22555cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x225560: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x225560u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x225564: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x225564u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x225568: 0x908c0006  lbu         $t4, 0x6($a0)
    ctx->pc = 0x225568u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x22556c: 0x1c87025  or          $t6, $t6, $t0
    ctx->pc = 0x22556cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x225570: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x225570u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x225574: 0xdda80000  ld          $t0, 0x0($t5)
    ctx->pc = 0x225574u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x225578: 0x1e77825  or          $t7, $t7, $a3
    ctx->pc = 0x225578u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x22557c: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x22557cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x225580: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x225580u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x225584: 0x908d0007  lbu         $t5, 0x7($a0)
    ctx->pc = 0x225584u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x225588: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x225588u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x22558c: 0x18b4821  addu        $t1, $t4, $t3
    ctx->pc = 0x22558cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x225590: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x225590u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x225594: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x225594u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x225598: 0x1c87025  or          $t6, $t6, $t0
    ctx->pc = 0x225598u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x22559c: 0x1e77825  or          $t7, $t7, $a3
    ctx->pc = 0x22559cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x2255a0: 0xdd880000  ld          $t0, 0x0($t4)
    ctx->pc = 0x2255a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2255a4: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x2255a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x2255a8: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x2255a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2255ac: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x2255acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2255b0: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x2255b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x2255b4: 0x1aa6821  addu        $t5, $t5, $t2
    ctx->pc = 0x2255b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2255b8: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x2255b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x2255bc: 0x1c87025  or          $t6, $t6, $t0
    ctx->pc = 0x2255bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x2255c0: 0xddac0000  ld          $t4, 0x0($t5)
    ctx->pc = 0x2255c0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2255c4: 0x1e77825  or          $t7, $t7, $a3
    ctx->pc = 0x2255c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x2255c8: 0xdd6a0000  ld          $t2, 0x0($t3)
    ctx->pc = 0x2255c8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2255cc: 0xe707a  dsrl        $t6, $t6, 1
    ctx->pc = 0x2255ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 1);
    // 0x2255d0: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x2255d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x2255d4: 0x1ccc825  or          $t9, $t6, $t4
    ctx->pc = 0x2255d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x2255d8: 0x14a000ec  bnez        $a1, . + 4 + (0xEC << 2)
    ctx->pc = 0x2255D8u;
    {
        const bool branch_taken_0x2255d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2255DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2255D8u;
            // 0x2255dc: 0x1ea1825  or          $v1, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255d8) {
            ctx->pc = 0x22598Cu;
            goto label_22598c;
        }
    }
    ctx->pc = 0x2255E0u;
    // 0x2255e0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2255e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2255e4: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x2255e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x2255e8: 0x25f8cc48  addiu       $t8, $t7, -0x33B8
    ctx->pc = 0x2255e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954056));
    // 0x2255ec: 0x25c2ca48  addiu       $v0, $t6, -0x35B8
    ctx->pc = 0x2255ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953544));
    // 0x2255f0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2255f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2255f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2255f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255f8: 0x25f2f0c0  addiu       $s2, $t7, -0xF40
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963392));
label_2255fc:
    // 0x2255fc: 0x37ffa  dsrl        $t7, $v1, 31
    ctx->pc = 0x2255fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) >> 31);
    // 0x225600: 0xde4b0000  ld          $t3, 0x0($s2)
    ctx->pc = 0x225600u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x225604: 0x37078  dsll        $t6, $v1, 1
    ctx->pc = 0x225604u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) << 1);
    // 0x225608: 0xde4c0008  ld          $t4, 0x8($s2)
    ctx->pc = 0x225608u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22560c: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x22560cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x225610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225614: 0xe6f38  dsll        $t5, $t6, 28
    ctx->pc = 0x225614u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << 28);
    // 0x225618: 0xe793a  dsrl        $t7, $t6, 4
    ctx->pc = 0x225618u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) >> 4);
    // 0x22561c: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x22561cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x225620: 0x1cc7026  xor         $t6, $t6, $t4
    ctx->pc = 0x225620u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 12));
    // 0x225624: 0x1eb7826  xor         $t7, $t7, $t3
    ctx->pc = 0x225624u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 11));
    // 0x225628: 0xe643a  dsrl        $t4, $t6, 16
    ctx->pc = 0x225628u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) >> 16);
    // 0x22562c: 0xf6c3a  dsrl        $t5, $t7, 16
    ctx->pc = 0x22562cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) >> 16);
    // 0x225630: 0x31e8003f  andi        $t0, $t7, 0x3F
    ctx->pc = 0x225630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
    // 0x225634: 0x31ad003f  andi        $t5, $t5, 0x3F
    ctx->pc = 0x225634u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)63);
    // 0x225638: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x225638u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x22563c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x22563cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x225640: 0xe4e3a  dsrl        $t1, $t6, 24
    ctx->pc = 0x225640u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) >> 24);
    // 0x225644: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x225644u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x225648: 0xe5a3a  dsrl        $t3, $t6, 8
    ctx->pc = 0x225648u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) >> 8);
    // 0x22564c: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x225650: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x225650u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x225654: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x225654u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x225658: 0x91a70080  lbu         $a3, 0x80($t5)
    ctx->pc = 0x225658u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 128)));
    // 0x22565c: 0x31ce003f  andi        $t6, $t6, 0x3F
    ctx->pc = 0x22565cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)63);
    // 0x225660: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x225660u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x225664: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x225664u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x225668: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x225668u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x22566c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x22566cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x225670: 0x918d00c0  lbu         $t5, 0xC0($t4)
    ctx->pc = 0x225670u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 192)));
    // 0x225674: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x225674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x225678: 0x91060180  lbu         $a2, 0x180($t0)
    ctx->pc = 0x225678u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 384)));
    // 0x22567c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x22567cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x225680: 0xf523a  dsrl        $t2, $t7, 8
    ctx->pc = 0x225680u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) >> 8);
    // 0x225684: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x225684u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x225688: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x225688u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x22568c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x22568cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x225690: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x225690u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x225694: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x225694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x225698: 0x91c801c0  lbu         $t0, 0x1C0($t6)
    ctx->pc = 0x225698u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 448)));
    // 0x22569c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x22569cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2256a0: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2256a0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2256a4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2256a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2256a8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x2256a8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x2256ac: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x2256acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2256b0: 0x91250040  lbu         $a1, 0x40($t1)
    ctx->pc = 0x2256b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x2256b4: 0xf7e3a  dsrl        $t7, $t7, 24
    ctx->pc = 0x2256b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 24);
    // 0x2256b8: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x2256b8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x2256bc: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2256bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2256c0: 0x1b86821  addu        $t5, $t5, $t8
    ctx->pc = 0x2256c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x2256c4: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x2256c4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x2256c8: 0x916e0140  lbu         $t6, 0x140($t3)
    ctx->pc = 0x2256c8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x2256cc: 0x31ef003f  andi        $t7, $t7, 0x3F
    ctx->pc = 0x2256ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
    // 0x2256d0: 0xddac0180  ld          $t4, 0x180($t5)
    ctx->pc = 0x2256d0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 13), 384)));
    // 0x2256d4: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x2256d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2256d8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x2256d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x2256dc: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2256dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2256e0: 0x91490100  lbu         $t1, 0x100($t2)
    ctx->pc = 0x2256e0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 256)));
    // 0x2256e4: 0x1184021  addu        $t0, $t0, $t8
    ctx->pc = 0x2256e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x2256e8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x2256e8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x2256ec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2256ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2256f0: 0xdd0d0380  ld          $t5, 0x380($t0)
    ctx->pc = 0x2256f0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 8), 896)));
    // 0x2256f4: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x2256f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2256f8: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x2256f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x2256fc: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x2256fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x225700: 0x91eb0000  lbu         $t3, 0x0($t7)
    ctx->pc = 0x225700u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x225704: 0x1d87021  addu        $t6, $t6, $t8
    ctx->pc = 0x225704u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x225708: 0xdcca0300  ld          $t2, 0x300($a2)
    ctx->pc = 0x225708u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 768)));
    // 0x22570c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x22570cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x225710: 0xddc80280  ld          $t0, 0x280($t6)
    ctx->pc = 0x225710u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 14), 640)));
    // 0x225714: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x225714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x225718: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x225718u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x22571c: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x22571cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
    // 0x225720: 0x18a6026  xor         $t4, $t4, $t2
    ctx->pc = 0x225720u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 10));
    // 0x225724: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x225724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x225728: 0xdcef0100  ld          $t7, 0x100($a3)
    ctx->pc = 0x225728u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x22572c: 0x1384821  addu        $t1, $t1, $t8
    ctx->pc = 0x22572cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x225730: 0xdcae0080  ld          $t6, 0x80($a1)
    ctx->pc = 0x225730u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x225734: 0xdd2a0200  ld          $t2, 0x200($t1)
    ctx->pc = 0x225734u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x225738: 0x32f7826  xor         $t7, $t9, $t7
    ctx->pc = 0x225738u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 15));
    // 0x22573c: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x22573cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x225740: 0x1ec7826  xor         $t7, $t7, $t4
    ctx->pc = 0x225740u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 12));
    // 0x225744: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x225744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x225748: 0x1a86826  xor         $t5, $t5, $t0
    ctx->pc = 0x225748u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 8));
    // 0x22574c: 0x1ca7026  xor         $t6, $t6, $t2
    ctx->pc = 0x22574cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 10));
    // 0x225750: 0xdd6c0000  ld          $t4, 0x0($t3)
    ctx->pc = 0x225750u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x225754: 0x1ae6826  xor         $t5, $t5, $t6
    ctx->pc = 0x225754u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 14));
    // 0x225758: 0x60c82d  daddu       $t9, $v1, $zero
    ctx->pc = 0x225758u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22575c: 0x1ed7826  xor         $t7, $t7, $t5
    ctx->pc = 0x22575cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 13));
    // 0x225760: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x225760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x225764: 0x2a040010  slti        $a0, $s0, 0x10
    ctx->pc = 0x225764u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x225768: 0x1480ffa4  bnez        $a0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x225768u;
    {
        const bool branch_taken_0x225768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225768u;
            // 0x22576c: 0x1ec1826  xor         $v1, $t7, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225768) {
            ctx->pc = 0x2255FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2255fc;
        }
    }
    ctx->pc = 0x225770u;
label_225770:
    // 0x225770: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x225770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x225774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225778: 0x332400ff  andi        $a0, $t9, 0xFF
    ctx->pc = 0x225778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)255);
    // 0x22577c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22577cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225780: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x225780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x225784: 0x3323a  dsrl        $a2, $v1, 8
    ctx->pc = 0x225784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> 8);
    // 0x225788: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x225788u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x22578c: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x22578cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x225790: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x225790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x225794: 0x2529e048  addiu       $t1, $t1, -0x1FB8
    ctx->pc = 0x225794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959176));
    // 0x225798: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x225798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x22579c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x22579cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2257a0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2257a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2257a4: 0xa97821  addu        $t7, $a1, $t1
    ctx->pc = 0x2257a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2257a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2257a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2257ac: 0xdded0000  ld          $t5, 0x0($t7)
    ctx->pc = 0x2257acu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2257b0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2257b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2257b4: 0x897021  addu        $t6, $a0, $t1
    ctx->pc = 0x2257b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2257b8: 0x193a3a  dsrl        $a3, $t9, 8
    ctx->pc = 0x2257b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) >> 8);
    // 0x2257bc: 0xddcc0000  ld          $t4, 0x0($t6)
    ctx->pc = 0x2257bcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2257c0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2257c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2257c4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2257c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2257c8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2257c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2257cc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2257ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2257d0: 0xc97821  addu        $t7, $a2, $t1
    ctx->pc = 0x2257d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2257d4: 0x3443a  dsrl        $t0, $v1, 16
    ctx->pc = 0x2257d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> 16);
    // 0x2257d8: 0xddee0000  ld          $t6, 0x0($t7)
    ctx->pc = 0x2257d8u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2257dc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2257dcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2257e0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2257e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2257e4: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x2257e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x2257e8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2257e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2257ec: 0xe97821  addu        $t7, $a3, $t1
    ctx->pc = 0x2257ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2257f0: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x2257f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x2257f4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2257f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2257f8: 0xddec0000  ld          $t4, 0x0($t7)
    ctx->pc = 0x2257f8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2257fc: 0x19543a  dsrl        $t2, $t9, 16
    ctx->pc = 0x2257fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) >> 16);
    // 0x225800: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x225800u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x225804: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x225804u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x225808: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x225808u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x22580c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x22580cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x225810: 0x1097821  addu        $t7, $t0, $t1
    ctx->pc = 0x225810u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x225814: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x225814u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x225818: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x225818u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x22581c: 0xddee0000  ld          $t6, 0x0($t7)
    ctx->pc = 0x22581cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x225820: 0x35e3a  dsrl        $t3, $v1, 24
    ctx->pc = 0x225820u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) >> 24);
    // 0x225824: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x225824u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x225828: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x225828u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x22582c: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x22582cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x225830: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x225830u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x225834: 0x1497821  addu        $t7, $t2, $t1
    ctx->pc = 0x225834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x225838: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x225838u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x22583c: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x22583cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x225840: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x225840u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x225844: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x225844u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x225848: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x225848u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x22584c: 0x19663a  dsrl        $t4, $t9, 24
    ctx->pc = 0x22584cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 25) >> 24);
    // 0x225850: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x225850u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x225854: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x225854u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x225858: 0x1697821  addu        $t7, $t3, $t1
    ctx->pc = 0x225858u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x22585c: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x22585cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x225860: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x225860u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x225864: 0xdde30000  ld          $v1, 0x0($t7)
    ctx->pc = 0x225864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x225868: 0x25cee848  addiu       $t6, $t6, -0x17B8
    ctx->pc = 0x225868u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961224));
    // 0x22586c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x22586cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x225870: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x225870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x225874: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x225874u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x225878: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x225878u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x22587c: 0xdcaf0000  ld          $t7, 0x0($a1)
    ctx->pc = 0x22587cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x225880: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x225880u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x225884: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x225884u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x225888: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x225888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x22588c: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x22588cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x225890: 0xdd250000  ld          $a1, 0x0($t1)
    ctx->pc = 0x225890u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x225894: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x225894u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x225898: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x225898u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x22589c: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x22589cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x2258a0: 0x1a56825  or          $t5, $t5, $a1
    ctx->pc = 0x2258a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 5));
    // 0x2258a4: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x2258a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x2258a8: 0xdd050000  ld          $a1, 0x0($t0)
    ctx->pc = 0x2258a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2258ac: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x2258acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x2258b0: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x2258b0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2258b4: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x2258b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x2258b8: 0xdd480000  ld          $t0, 0x0($t2)
    ctx->pc = 0x2258b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2258bc: 0xce3021  addu        $a2, $a2, $t6
    ctx->pc = 0x2258bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2258c0: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x2258c4: 0x1e97825  or          $t7, $t7, $t1
    ctx->pc = 0x2258c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 9));
    // 0x2258c8: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x2258c8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2258cc: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x2258ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x2258d0: 0xdd6a0000  ld          $t2, 0x0($t3)
    ctx->pc = 0x2258d0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2258d4: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x2258d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x2258d8: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x2258d8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2258dc: 0xd763a  dsrl        $t6, $t5, 24
    ctx->pc = 0x2258dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) >> 24);
    // 0x2258e0: 0xdd8b0000  ld          $t3, 0x0($t4)
    ctx->pc = 0x2258e0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2258e4: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x2258e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x2258e8: 0x1e97825  or          $t7, $t7, $t1
    ctx->pc = 0x2258e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 9));
    // 0x2258ec: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x2258ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x2258f0: 0xa22e0000  sb          $t6, 0x0($s1)
    ctx->pc = 0x2258f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x2258f4: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x2258f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x2258f8: 0xd643a  dsrl        $t4, $t5, 16
    ctx->pc = 0x2258f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) >> 16);
    // 0x2258fc: 0x1e67825  or          $t7, $t7, $a2
    ctx->pc = 0x2258fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
    // 0x225900: 0x318c00ff  andi        $t4, $t4, 0xFF
    ctx->pc = 0x225900u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x225904: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x225908: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x225908u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x22590c: 0xa22c0000  sb          $t4, 0x0($s1)
    ctx->pc = 0x22590cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x225910: 0x1e57825  or          $t7, $t7, $a1
    ctx->pc = 0x225910u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 5));
    // 0x225914: 0xd723a  dsrl        $t6, $t5, 8
    ctx->pc = 0x225914u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) >> 8);
    // 0x225918: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x225918u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x22591c: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x22591cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x225920: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x225920u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x225924: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x225928: 0xa22e0000  sb          $t6, 0x0($s1)
    ctx->pc = 0x225928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x22592c: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x22592cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x225930: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x225930u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x225934: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x225934u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x225938: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22593c: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x22593cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x225940: 0xa22d0000  sb          $t5, 0x0($s1)
    ctx->pc = 0x225940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x225944: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x225944u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x225948: 0xf763a  dsrl        $t6, $t7, 24
    ctx->pc = 0x225948u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) >> 24);
    // 0x22594c: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x22594cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x225950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x225954: 0xa22e0000  sb          $t6, 0x0($s1)
    ctx->pc = 0x225954u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x225958: 0xf6c3a  dsrl        $t5, $t7, 16
    ctx->pc = 0x225958u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) >> 16);
    // 0x22595c: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x22595cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x225960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x225964: 0xf723a  dsrl        $t6, $t7, 8
    ctx->pc = 0x225964u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) >> 8);
    // 0x225968: 0xa22d0000  sb          $t5, 0x0($s1)
    ctx->pc = 0x225968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x22596c: 0x31ef00ff  andi        $t7, $t7, 0xFF
    ctx->pc = 0x22596cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x225970: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x225970u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x225974: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x225974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x225978: 0xa22f0001  sb          $t7, 0x1($s1)
    ctx->pc = 0x225978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x22597c: 0xa22e0000  sb          $t6, 0x0($s1)
    ctx->pc = 0x22597cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x225980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225984: 0x3e00008  jr          $ra
    ctx->pc = 0x225984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225984u;
            // 0x225988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22598Cu;
label_22598c:
    // 0x22598c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22598cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225990: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x225990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225994: 0x25e2cc48  addiu       $v0, $t7, -0x33B8
    ctx->pc = 0x225994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954056));
    // 0x225998: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x225998u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x22599c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22599cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2259a0: 0x25c3ca48  addiu       $v1, $t6, -0x35B8
    ctx->pc = 0x2259a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953544));
    // 0x2259a4: 0x25eff0c0  addiu       $t7, $t7, -0xF40
    ctx->pc = 0x2259a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963392));
    // 0x2259a8: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x2259a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2259ac: 0x25f800f0  addiu       $t8, $t7, 0xF0
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
label_2259b0:
    // 0x2259b0: 0x47ffa  dsrl        $t7, $a0, 31
    ctx->pc = 0x2259b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) >> 31);
    // 0x2259b4: 0xdf0b0000  ld          $t3, 0x0($t8)
    ctx->pc = 0x2259b4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2259b8: 0x47078  dsll        $t6, $a0, 1
    ctx->pc = 0x2259b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << 1);
    // 0x2259bc: 0xdf0c0008  ld          $t4, 0x8($t8)
    ctx->pc = 0x2259bcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x2259c0: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x2259c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x2259c4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2259c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2259c8: 0xe6f38  dsll        $t5, $t6, 28
    ctx->pc = 0x2259c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << 28);
    // 0x2259cc: 0xe793a  dsrl        $t7, $t6, 4
    ctx->pc = 0x2259ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) >> 4);
    // 0x2259d0: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x2259d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x2259d4: 0x1cc7026  xor         $t6, $t6, $t4
    ctx->pc = 0x2259d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 12));
    // 0x2259d8: 0x1eb7826  xor         $t7, $t7, $t3
    ctx->pc = 0x2259d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 11));
    // 0x2259dc: 0xe643a  dsrl        $t4, $t6, 16
    ctx->pc = 0x2259dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) >> 16);
    // 0x2259e0: 0xf6c3a  dsrl        $t5, $t7, 16
    ctx->pc = 0x2259e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) >> 16);
    // 0x2259e4: 0x31e8003f  andi        $t0, $t7, 0x3F
    ctx->pc = 0x2259e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
    // 0x2259e8: 0x31ad003f  andi        $t5, $t5, 0x3F
    ctx->pc = 0x2259e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)63);
    // 0x2259ec: 0x318c003f  andi        $t4, $t4, 0x3F
    ctx->pc = 0x2259ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
    // 0x2259f0: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x2259f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2259f4: 0xe4e3a  dsrl        $t1, $t6, 24
    ctx->pc = 0x2259f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) >> 24);
    // 0x2259f8: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x2259f8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x2259fc: 0xe5a3a  dsrl        $t3, $t6, 8
    ctx->pc = 0x2259fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) >> 8);
    // 0x225a00: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x225a04: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x225a04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x225a08: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x225a08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x225a0c: 0x91a50080  lbu         $a1, 0x80($t5)
    ctx->pc = 0x225a0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 128)));
    // 0x225a10: 0x31ce003f  andi        $t6, $t6, 0x3F
    ctx->pc = 0x225a10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)63);
    // 0x225a14: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x225a14u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x225a18: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x225a18u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x225a1c: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x225a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x225a20: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x225a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x225a24: 0x918d00c0  lbu         $t5, 0xC0($t4)
    ctx->pc = 0x225a24u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 192)));
    // 0x225a28: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x225a28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x225a2c: 0x91070180  lbu         $a3, 0x180($t0)
    ctx->pc = 0x225a2cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 384)));
    // 0x225a30: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x225a30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x225a34: 0xf523a  dsrl        $t2, $t7, 8
    ctx->pc = 0x225a34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) >> 8);
    // 0x225a38: 0x316b003f  andi        $t3, $t3, 0x3F
    ctx->pc = 0x225a38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
    // 0x225a3c: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x225a3cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x225a40: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x225a40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x225a44: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x225a44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x225a48: 0x314a003f  andi        $t2, $t2, 0x3F
    ctx->pc = 0x225a48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
    // 0x225a4c: 0x91c801c0  lbu         $t0, 0x1C0($t6)
    ctx->pc = 0x225a4cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 448)));
    // 0x225a50: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x225a50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x225a54: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x225a54u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x225a58: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x225a58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x225a5c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x225a5cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x225a60: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x225a60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x225a64: 0x91260040  lbu         $a2, 0x40($t1)
    ctx->pc = 0x225a64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x225a68: 0xf7e3a  dsrl        $t7, $t7, 24
    ctx->pc = 0x225a68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 24);
    // 0x225a6c: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x225a6cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x225a70: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x225a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x225a74: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x225a74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x225a78: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x225a78u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x225a7c: 0x916e0140  lbu         $t6, 0x140($t3)
    ctx->pc = 0x225a7cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 320)));
    // 0x225a80: 0x31ef003f  andi        $t7, $t7, 0x3F
    ctx->pc = 0x225a80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
    // 0x225a84: 0xddac0180  ld          $t4, 0x180($t5)
    ctx->pc = 0x225a84u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 13), 384)));
    // 0x225a88: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x225a88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x225a8c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x225a8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x225a90: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x225a90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x225a94: 0x91490100  lbu         $t1, 0x100($t2)
    ctx->pc = 0x225a94u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 256)));
    // 0x225a98: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x225a9c: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x225a9cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x225aa0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x225aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x225aa4: 0xdd0d0380  ld          $t5, 0x380($t0)
    ctx->pc = 0x225aa4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 8), 896)));
    // 0x225aa8: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x225aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x225aac: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x225aacu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x225ab0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x225ab4: 0x91eb0000  lbu         $t3, 0x0($t7)
    ctx->pc = 0x225ab4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x225ab8: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x225ab8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x225abc: 0xdcea0300  ld          $t2, 0x300($a3)
    ctx->pc = 0x225abcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 768)));
    // 0x225ac0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x225ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x225ac4: 0xddc80280  ld          $t0, 0x280($t6)
    ctx->pc = 0x225ac4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 14), 640)));
    // 0x225ac8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x225acc: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x225accu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x225ad0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x225ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x225ad4: 0x18a6026  xor         $t4, $t4, $t2
    ctx->pc = 0x225ad4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 10));
    // 0x225ad8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x225adc: 0xdcaf0100  ld          $t7, 0x100($a1)
    ctx->pc = 0x225adcu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x225ae0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x225ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x225ae4: 0xdcce0080  ld          $t6, 0x80($a2)
    ctx->pc = 0x225ae4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x225ae8: 0xdd2a0200  ld          $t2, 0x200($t1)
    ctx->pc = 0x225ae8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x225aec: 0x32f7826  xor         $t7, $t9, $t7
    ctx->pc = 0x225aecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 15));
    // 0x225af0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x225af0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x225af4: 0x1ec7826  xor         $t7, $t7, $t4
    ctx->pc = 0x225af4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 12));
    // 0x225af8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x225af8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x225afc: 0x1a86826  xor         $t5, $t5, $t0
    ctx->pc = 0x225afcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 8));
    // 0x225b00: 0x1ca7026  xor         $t6, $t6, $t2
    ctx->pc = 0x225b00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 10));
    // 0x225b04: 0xdd6c0000  ld          $t4, 0x0($t3)
    ctx->pc = 0x225b04u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x225b08: 0x1ae6826  xor         $t5, $t5, $t6
    ctx->pc = 0x225b08u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 14));
    // 0x225b0c: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x225b0cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b10: 0x1ed7826  xor         $t7, $t7, $t5
    ctx->pc = 0x225b10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 13));
    // 0x225b14: 0x2718fff0  addiu       $t8, $t8, -0x10
    ctx->pc = 0x225b14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967280));
    // 0x225b18: 0x601ffa5  bgez        $s0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x225B18u;
    {
        const bool branch_taken_0x225b18 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x225B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B18u;
            // 0x225b1c: 0x1ec2026  xor         $a0, $t7, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b18) {
            ctx->pc = 0x2259B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2259b0;
        }
    }
    ctx->pc = 0x225B20u;
    // 0x225b20: 0x1000ff13  b           . + 4 + (-0xED << 2)
    ctx->pc = 0x225B20u;
    {
        const bool branch_taken_0x225b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B20u;
            // 0x225b24: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b20) {
            ctx->pc = 0x225770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225770;
        }
    }
    ctx->pc = 0x225B28u;
    ctx->pc = 0x225b28u;
}
