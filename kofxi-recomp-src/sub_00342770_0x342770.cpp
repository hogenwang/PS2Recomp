#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00342770
// Address: 0x342770 - 0x342800
void sub_00342770_0x342770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342770_0x342770");
#endif

    ctx->pc = 0x342770u;

    // 0x342770: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x342770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x342774: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x342774u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x342778: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x342778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34277c: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34277Cu;
    {
        const bool branch_taken_0x34277c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34277c) {
            ctx->pc = 0x3427F4u;
            goto label_3427f4;
        }
    }
    ctx->pc = 0x342784u;
    // 0x342784: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x342784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x342788: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x342788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x34278c: 0x9063da50  lbu         $v1, -0x25B0($v1)
    ctx->pc = 0x34278cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957648)));
    // 0x342790: 0x2484dc9d  addiu       $a0, $a0, -0x2363
    ctx->pc = 0x342790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958237));
    // 0x342794: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x342794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x342798: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x342798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34279c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3427a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3427a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3427a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3427a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3427a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3427a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3427ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3427acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3427b0: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x3427b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3427b4: 0x28a10028  slti        $at, $a1, 0x28
    ctx->pc = 0x3427b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3427b8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3427B8u;
    {
        const bool branch_taken_0x3427b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3427b8) {
            ctx->pc = 0x3427F4u;
            goto label_3427f4;
        }
    }
    ctx->pc = 0x3427C0u;
    // 0x3427c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3427c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3427c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3427c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3427c8: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x3427c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x3427cc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3427ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3427d0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3427d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3427d4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3427D4u;
    {
        const bool branch_taken_0x3427d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3427d4) {
            ctx->pc = 0x3427F4u;
            goto label_3427f4;
        }
    }
    ctx->pc = 0x3427DCu;
    // 0x3427dc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3427dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3427e0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3427e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3427e4: 0x94649718  lhu         $a0, -0x68E8($v1)
    ctx->pc = 0x3427e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294940440)));
    // 0x3427e8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3427e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3427ec: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x3427ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x3427f0: 0xa4649718  sh          $a0, -0x68E8($v1)
    ctx->pc = 0x3427f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294940440), (uint16_t)GPR_U32(ctx, 4));
label_3427f4:
    // 0x3427f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3427F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3427FCu;
    // 0x3427fc: 0x0  nop
    ctx->pc = 0x3427fcu;
    // NOP
    ctx->pc = 0x342800u;
}
