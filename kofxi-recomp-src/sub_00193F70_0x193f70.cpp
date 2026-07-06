#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193F70
// Address: 0x193f70 - 0x193fb0
void sub_00193F70_0x193f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193F70_0x193f70");
#endif

    ctx->pc = 0x193f70u;

    // 0x193f70: 0x8485039c  lh          $a1, 0x39C($a0)
    ctx->pc = 0x193f70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 924)));
    // 0x193f74: 0x24860314  addiu       $a2, $a0, 0x314
    ctx->pc = 0x193f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 788));
    // 0x193f78: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x193F78u;
    {
        const bool branch_taken_0x193f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F78u;
            // 0x193f7c: 0x24830268  addiu       $v1, $a0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f78) {
            ctx->pc = 0x193FA0u;
            goto label_193fa0;
        }
    }
    ctx->pc = 0x193F80u;
    // 0x193f80: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x193f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x193f84: 0x3c03000d  lui         $v1, 0xD
    ctx->pc = 0x193f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13 << 16));
    // 0x193f88: 0x3463b600  ori         $v1, $v1, 0xB600
    ctx->pc = 0x193f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46592);
    // 0x193f8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x193f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x193f90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193F90u;
    {
        const bool branch_taken_0x193f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f90) {
            ctx->pc = 0x193FA0u;
            goto label_193fa0;
        }
    }
    ctx->pc = 0x193F98u;
    // 0x193f98: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x193f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x193f9c: 0xa4c30088  sh          $v1, 0x88($a2)
    ctx->pc = 0x193f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 136), (uint16_t)GPR_U32(ctx, 3));
label_193fa0:
    // 0x193fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x193FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193FA8u;
    // 0x193fa8: 0x0  nop
    ctx->pc = 0x193fa8u;
    // NOP
    // 0x193fac: 0x0  nop
    ctx->pc = 0x193facu;
    // NOP
    ctx->pc = 0x193fb0u;
}
