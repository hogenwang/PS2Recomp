#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC800
// Address: 0x1ec800 - 0x1ec880
void sub_001EC800_0x1ec800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC800_0x1ec800");
#endif

    ctx->pc = 0x1ec800u;

    // 0x1ec800: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1ec800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1ec804: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1ec804u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ec808: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x1ec808u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1ec80c: 0x26102  srl         $t4, $v0, 4
    ctx->pc = 0x1ec80cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ec810: 0x64082  srl         $t0, $a2, 2
    ctx->pc = 0x1ec810u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1ec814: 0x64842  srl         $t1, $a2, 1
    ctx->pc = 0x1ec814u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1ec818: 0x72842  srl         $a1, $a3, 1
    ctx->pc = 0x1ec818u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x1ec81c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x1ec81cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1ec820: 0x250c2  srl         $t2, $v0, 3
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1ec824: 0x25882  srl         $t3, $v0, 2
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ec828: 0x30cd0001  andi        $t5, $a2, 0x1
    ctx->pc = 0x1ec828u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1ec82c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1ec82cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1ec830: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1ec830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1ec834: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1ec834u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1ec838: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x1ec838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1ec83c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1ec83cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1ec840: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x1ec840u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x1ec844: 0x318c0003  andi        $t4, $t4, 0x3
    ctx->pc = 0x1ec844u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x1ec848: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1ec848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1ec84c: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x1ec84cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1ec850: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1ec850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec854: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1ec854u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ec858: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x1ec858u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ec85c: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x1ec85cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ec860: 0xa0880003  sb          $t0, 0x3($a0)
    ctx->pc = 0x1ec860u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x1ec864: 0xa0890004  sb          $t1, 0x4($a0)
    ctx->pc = 0x1ec864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x1ec868: 0xa08d0005  sb          $t5, 0x5($a0)
    ctx->pc = 0x1ec868u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 13));
    // 0x1ec86c: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x1ec86cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec870: 0xa08c0007  sb          $t4, 0x7($a0)
    ctx->pc = 0x1ec870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 12));
    // 0x1ec874: 0xa08a0008  sb          $t2, 0x8($a0)
    ctx->pc = 0x1ec874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ec878: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC878u;
            // 0x1ec87c: 0xa08b0009  sb          $t3, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC880u;
    ctx->pc = 0x1ec880u;
}
