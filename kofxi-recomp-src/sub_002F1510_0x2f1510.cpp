#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1510
// Address: 0x2f1510 - 0x2f1588
void sub_002F1510_0x2f1510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1510_0x2f1510");
#endif

    ctx->pc = 0x2f1510u;

    // 0x2f1510: 0x248c000c  addiu       $t4, $a0, 0xC
    ctx->pc = 0x2f1510u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f1514: 0x908f000c  lbu         $t7, 0xC($a0)
    ctx->pc = 0x2f1514u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f1518: 0x918e0002  lbu         $t6, 0x2($t4)
    ctx->pc = 0x2f1518u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x2f151c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1520: 0x918d0001  lbu         $t5, 0x1($t4)
    ctx->pc = 0x2f1520u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x2f1524: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x2f1524u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x2f1528: 0x918a0003  lbu         $t2, 0x3($t4)
    ctx->pc = 0x2f1528u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x2f152c: 0xe7200  sll         $t6, $t6, 8
    ctx->pc = 0x2f152cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x2f1530: 0x958b0008  lhu         $t3, 0x8($t4)
    ctx->pc = 0x2f1530u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x2f1534: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x2f1534u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x2f1538: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x2f1538u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2f153c: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x2f153cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x2f1540: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x2f1540u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x2f1544: 0xb6a02  srl         $t5, $t3, 8
    ctx->pc = 0x2f1544u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x2f1548: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x2f1548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x2f154c: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x2f154cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x2f1550: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x2f1550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x2f1554: 0x918f0004  lbu         $t7, 0x4($t4)
    ctx->pc = 0x2f1554u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2f1558: 0x918e0006  lbu         $t6, 0x6($t4)
    ctx->pc = 0x2f1558u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x2f155c: 0x918d0005  lbu         $t5, 0x5($t4)
    ctx->pc = 0x2f155cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x2f1560: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x2f1560u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x2f1564: 0x918a0007  lbu         $t2, 0x7($t4)
    ctx->pc = 0x2f1564u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x2f1568: 0xe7200  sll         $t6, $t6, 8
    ctx->pc = 0x2f1568u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x2f156c: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x2f156cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x2f1570: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x2f1570u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x2f1574: 0xa4eb0000  sh          $t3, 0x0($a3)
    ctx->pc = 0x2f1574u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2f1578: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x2f1578u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2f157c: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x2f157cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x2f1580: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1580u;
            // 0x2f1584: 0xaccf0000  sw          $t7, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1588u;
    ctx->pc = 0x2f1588u;
}
