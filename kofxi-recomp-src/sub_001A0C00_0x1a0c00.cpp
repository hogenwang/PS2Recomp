#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0C00
// Address: 0x1a0c00 - 0x1a0c70
void sub_001A0C00_0x1a0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0C00_0x1a0c00");
#endif

    ctx->pc = 0x1a0c00u;

    // 0x1a0c00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c04: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c08: 0x9066dae0  lbu         $a2, -0x2520($v1)
    ctx->pc = 0x1a0c08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x1a0c0c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c14: 0x30c800fc  andi        $t0, $a2, 0xFC
    ctx->pc = 0x1a0c14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)252);
    // 0x1a0c18: 0x9067dad8  lbu         $a3, -0x2528($v1)
    ctx->pc = 0x1a0c18u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957784)));
    // 0x1a0c1c: 0xa0a8dae0  sb          $t0, -0x2520($a1)
    ctx->pc = 0x1a0c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957792), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a0c20: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a0c24: 0x30e500fc  andi        $a1, $a3, 0xFC
    ctx->pc = 0x1a0c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)252);
    // 0x1a0c28: 0x90669780  lbu         $a2, -0x6880($v1)
    ctx->pc = 0x1a0c28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1a0c2c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a0c30: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0C30u;
    {
        const bool branch_taken_0x1a0c30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0C30u;
            // 0x1a0c34: 0xa085dad8  sb          $a1, -0x2528($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294957784), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c30) {
            ctx->pc = 0x1A0C4Cu;
            goto label_1a0c4c;
        }
    }
    ctx->pc = 0x1A0C38u;
    // 0x1a0c38: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a0c3c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0C3Cu;
    {
        const bool branch_taken_0x1a0c3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0c3c) {
            ctx->pc = 0x1A0C4Cu;
            goto label_1a0c4c;
        }
    }
    ctx->pc = 0x1A0C44u;
    // 0x1a0c44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0C44u;
    {
        const bool branch_taken_0x1a0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c44) {
            ctx->pc = 0x1A0C68u;
            goto label_1a0c68;
        }
    }
    ctx->pc = 0x1A0C4Cu;
label_1a0c4c:
    // 0x1a0c4c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a0c50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c54: 0x90659720  lbu         $a1, -0x68E0($v1)
    ctx->pc = 0x1a0c54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x1a0c58: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x1a0c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1a0c5c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0c60: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1a0c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a0c64: 0xa064dad8  sb          $a0, -0x2528($v1)
    ctx->pc = 0x1a0c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957784), (uint8_t)GPR_U32(ctx, 4));
label_1a0c68:
    // 0x1a0c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0C70u;
    ctx->pc = 0x1a0c70u;
}
