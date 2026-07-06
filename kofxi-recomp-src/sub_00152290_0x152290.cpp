#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152290
// Address: 0x152290 - 0x1522e0
void sub_00152290_0x152290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152290_0x152290");
#endif

    switch (ctx->pc) {
        case 0x1522a4u: goto label_1522a4;
        default: break;
    }

    ctx->pc = 0x152290u;

    // 0x152290: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152294: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152298: 0xac60f0f8  sw          $zero, -0xF08($v1)
    ctx->pc = 0x152298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963448), GPR_U32(ctx, 0));
    // 0x15229c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15229cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522a0: 0x2484eff0  addiu       $a0, $a0, -0x1010
    ctx->pc = 0x1522a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963184));
label_1522a4:
    // 0x1522a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1522a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1522a8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1522a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1522ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1522acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1522b0: 0x2ca30040  sltiu       $v1, $a1, 0x40
    ctx->pc = 0x1522b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1522b4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1522b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1522b8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1522b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1522bc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1522bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1522c0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1522c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1522c4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1522c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1522c8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1522c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1522cc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1522CCu;
    {
        const bool branch_taken_0x1522cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1522D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1522CCu;
            // 0x1522d0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522cc) {
            ctx->pc = 0x1522A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1522a4;
        }
    }
    ctx->pc = 0x1522D4u;
    // 0x1522d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1522D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1522DCu;
    // 0x1522dc: 0x0  nop
    ctx->pc = 0x1522dcu;
    // NOP
    ctx->pc = 0x1522e0u;
}
