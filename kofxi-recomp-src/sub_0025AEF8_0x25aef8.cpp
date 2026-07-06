#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025AEF8
// Address: 0x25aef8 - 0x25af48
void sub_0025AEF8_0x25aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AEF8_0x25aef8");
#endif

    ctx->pc = 0x25aef8u;

    // 0x25aef8: 0x240a3840  addiu       $t2, $zero, 0x3840
    ctx->pc = 0x25aef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14400));
    // 0x25aefc: 0x3c0b003a  lui         $t3, 0x3A
    ctx->pc = 0x25aefcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)58 << 16));
    // 0x25af00: 0x240901ff  addiu       $t1, $zero, 0x1FF
    ctx->pc = 0x25af00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x25af04: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x25af04u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x25af08: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x25af08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x25af0c: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x25af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x25af10: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25af10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25af14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25af18: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25af18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25af1c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x25af1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x25af20: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25af20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25af24: 0xad69157c  sw          $t1, 0x157C($t3)
    ctx->pc = 0x25af24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5500), GPR_U32(ctx, 9));
    // 0x25af28: 0xad041534  sw          $a0, 0x1534($t0)
    ctx->pc = 0x25af28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 5428), GPR_U32(ctx, 4));
    // 0x25af2c: 0xaca21538  sw          $v0, 0x1538($a1)
    ctx->pc = 0x25af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5432), GPR_U32(ctx, 2));
    // 0x25af30: 0xac6a153c  sw          $t2, 0x153C($v1)
    ctx->pc = 0x25af30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5436), GPR_U32(ctx, 10));
    // 0x25af34: 0xad8a1530  sw          $t2, 0x1530($t4)
    ctx->pc = 0x25af34u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 5424), GPR_U32(ctx, 10));
    // 0x25af38: 0xacc01580  sw          $zero, 0x1580($a2)
    ctx->pc = 0x25af38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5504), GPR_U32(ctx, 0));
    // 0x25af3c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF3Cu;
            // 0x25af40: 0xace01540  sw          $zero, 0x1540($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 5440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AF44u;
    // 0x25af44: 0x0  nop
    ctx->pc = 0x25af44u;
    // NOP
    ctx->pc = 0x25af48u;
}
