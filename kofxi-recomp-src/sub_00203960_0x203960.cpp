#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203960
// Address: 0x203960 - 0x2039e0
void sub_00203960_0x203960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203960_0x203960");
#endif

    ctx->pc = 0x203960u;

    // 0x203960: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203964: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x203968: 0x8c6c9bf8  lw          $t4, -0x6408($v1)
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x20396c: 0x252998a0  addiu       $t1, $t1, -0x6760
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940832));
    // 0x203970: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x203974: 0xec5021  addu        $t2, $a3, $t4
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x203978: 0x8d870020  lw          $a3, 0x20($t4)
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x20397c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x203980: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x203980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x203984: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x203984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x203988: 0x912b0000  lbu         $t3, 0x0($t1)
    ctx->pc = 0x203988u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20398c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x20398cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x203990: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x203990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x203994: 0xb4900  sll         $t1, $t3, 4
    ctx->pc = 0x203994u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x203998: 0xb3a80  sll         $a3, $t3, 10
    ctx->pc = 0x203998u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 10));
    // 0x20399c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x20399cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2039a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2039a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2039a4: 0x91270524  lbu         $a3, 0x524($t1)
    ctx->pc = 0x2039a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1316)));
    // 0x2039a8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2039ac: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2039b0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2039b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2039b4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2039b8: 0x94690000  lhu         $t1, 0x0($v1)
    ctx->pc = 0x2039b8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2039bc: 0x31277c00  andi        $a3, $t1, 0x7C00
    ctx->pc = 0x2039bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31744);
    // 0x2039c0: 0x312303e0  andi        $v1, $t1, 0x3E0
    ctx->pc = 0x2039c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)992);
    // 0x2039c4: 0x74283  sra         $t0, $a3, 10
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), 10));
    // 0x2039c8: 0x33943  sra         $a3, $v1, 5
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2039cc: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x2039ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2039d0: 0x3123001f  andi        $v1, $t1, 0x1F
    ctx->pc = 0x2039d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x2039d4: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x2039d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2039d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2039D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039D8u;
            // 0x2039dc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2039E0u;
    ctx->pc = 0x2039e0u;
}
