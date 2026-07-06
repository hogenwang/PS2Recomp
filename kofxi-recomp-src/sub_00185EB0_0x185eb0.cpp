#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185EB0
// Address: 0x185eb0 - 0x185f10
void sub_00185EB0_0x185eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185EB0_0x185eb0");
#endif

    ctx->pc = 0x185eb0u;

    // 0x185eb0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x185eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185eb4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x185eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x185eb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185ebc: 0x24e7db78  addiu       $a3, $a3, -0x2488
    ctx->pc = 0x185ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957944));
    // 0x185ec0: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x185ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x185ec4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x185ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x185ec8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x185ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x185ecc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x185eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x185ed0: 0x2463dcac  addiu       $v1, $v1, -0x2354
    ctx->pc = 0x185ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958252));
    // 0x185ed4: 0xe44021  addu        $t0, $a3, $a0
    ctx->pc = 0x185ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x185ed8: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x185ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x185edc: 0x1064821  addu        $t1, $t0, $a2
    ctx->pc = 0x185edcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x185ee0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x185ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x185ee4: 0x908a0000  lbu         $t2, 0x0($a0)
    ctx->pc = 0x185ee4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185ee8: 0x91280000  lbu         $t0, 0x0($t1)
    ctx->pc = 0x185ee8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x185eec: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x185eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x185ef0: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x185ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x185ef4: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x185ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185ef8: 0xa12a0000  sb          $t2, 0x0($t1)
    ctx->pc = 0x185ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x185efc: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x185f00: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x185f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x185f04: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185f08: 0x3e00008  jr          $ra
    ctx->pc = 0x185F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185F08u;
            // 0x185f0c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185F10u;
    ctx->pc = 0x185f10u;
}
