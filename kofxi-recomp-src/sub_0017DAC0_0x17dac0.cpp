#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DAC0
// Address: 0x17dac0 - 0x17db00
void sub_0017DAC0_0x17dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DAC0_0x17dac0");
#endif

    ctx->pc = 0x17dac0u;

    // 0x17dac0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17dac4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17dac8: 0x2463b830  addiu       $v1, $v1, -0x47D0
    ctx->pc = 0x17dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948912));
    // 0x17dacc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x17daccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17dad0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x17dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dad4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x17dad4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17dad8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x17dad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x17dadc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DADCu;
    {
        const bool branch_taken_0x17dadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dadc) {
            ctx->pc = 0x17DAF8u;
            goto label_17daf8;
        }
    }
    ctx->pc = 0x17DAE4u;
    // 0x17dae4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x17dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17dae8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x17dae8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17daec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x17daecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17daf0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x17daf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x17daf4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x17daf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_17daf8:
    // 0x17daf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17DAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DB00u;
    ctx->pc = 0x17db00u;
}
