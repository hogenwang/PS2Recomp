#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D4C0
// Address: 0x13d4c0 - 0x13d510
void sub_0013D4C0_0x13d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D4C0_0x13d4c0");
#endif

    switch (ctx->pc) {
        case 0x13d4d0u: goto label_13d4d0;
        default: break;
    }

    ctx->pc = 0x13d4c0u;

    // 0x13d4c0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x13d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x13d4c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x13d4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13d4c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4cc: 0x24a5cb70  addiu       $a1, $a1, -0x3490
    ctx->pc = 0x13d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953840));
label_13d4d0:
    // 0x13d4d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13d4d4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x13d4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13d4d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D4D8u;
    {
        const bool branch_taken_0x13d4d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d4d8) {
            ctx->pc = 0x13D4E8u;
            goto label_13d4e8;
        }
    }
    ctx->pc = 0x13D4E0u;
    // 0x13d4e0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D4E0u;
    {
        const bool branch_taken_0x13d4e0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13d4e0) {
            ctx->pc = 0x13D4F8u;
            goto label_13d4f8;
        }
    }
    ctx->pc = 0x13D4E8u;
label_13d4e8:
    // 0x13d4e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d4ec: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x13d4ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x13d4f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13D4F0u;
    {
        const bool branch_taken_0x13d4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D4F0u;
            // 0x13d4f4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4f0) {
            ctx->pc = 0x13D4D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13d4d0;
        }
    }
    ctx->pc = 0x13D4F8u;
label_13d4f8:
    // 0x13d4f8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x13d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13d4fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13D4FCu;
    {
        const bool branch_taken_0x13d4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d4fc) {
            ctx->pc = 0x13D508u;
            goto label_13d508;
        }
    }
    ctx->pc = 0x13D504u;
    // 0x13d504: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x13d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_13d508:
    // 0x13d508: 0x3e00008  jr          $ra
    ctx->pc = 0x13D508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D510u;
    ctx->pc = 0x13d510u;
}
