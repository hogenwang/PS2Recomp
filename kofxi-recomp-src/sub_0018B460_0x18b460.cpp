#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B460
// Address: 0x18b460 - 0x18b4b0
void sub_0018B460_0x18b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B460_0x18b460");
#endif

    ctx->pc = 0x18b460u;

    // 0x18b460: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x18b460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18b464: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18b464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18b468: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18b468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18b46c: 0x2463db64  addiu       $v1, $v1, -0x249C
    ctx->pc = 0x18b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957924));
    // 0x18b470: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18b470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18b474: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18b474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b478: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18b478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18b47c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b480: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18b480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b484: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x18b484u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b488: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18b48c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x18b48cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18b490: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x18b490u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b494: 0x28630063  slti        $v1, $v1, 0x63
    ctx->pc = 0x18b494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x18b498: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B498u;
    {
        const bool branch_taken_0x18b498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b498) {
            ctx->pc = 0x18B4A8u;
            goto label_18b4a8;
        }
    }
    ctx->pc = 0x18B4A0u;
    // 0x18b4a0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x18b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x18b4a4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x18b4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_18b4a8:
    // 0x18b4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x18B4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B4B0u;
    ctx->pc = 0x18b4b0u;
}
