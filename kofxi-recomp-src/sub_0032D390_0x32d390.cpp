#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032D390
// Address: 0x32d390 - 0x32d3d0
void sub_0032D390_0x32d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D390_0x32d390");
#endif

    switch (ctx->pc) {
        case 0x32d3a4u: goto label_32d3a4;
        default: break;
    }

    ctx->pc = 0x32d390u;

    // 0x32d390: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x32d390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x32d394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32d398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d39c: 0x24a59700  addiu       $a1, $a1, -0x6900
    ctx->pc = 0x32d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940416));
    // 0x32d3a0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x32d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32d3a4:
    // 0x32d3a4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x32d3a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32d3a8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D3A8u;
    {
        const bool branch_taken_0x32d3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d3a8) {
            ctx->pc = 0x32D3B8u;
            goto label_32d3b8;
        }
    }
    ctx->pc = 0x32D3B0u;
    // 0x32d3b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32d3b4: 0x0  nop
    ctx->pc = 0x32d3b4u;
    // NOP
label_32d3b8:
    // 0x32d3b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32d3bc: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x32d3bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32d3c0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32D3C0u;
    {
        const bool branch_taken_0x32d3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D3C0u;
            // 0x32d3c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d3c0) {
            ctx->pc = 0x32D3A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32d3a4;
        }
    }
    ctx->pc = 0x32D3C8u;
    // 0x32d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D3D0u;
    ctx->pc = 0x32d3d0u;
}
