#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001024A8
// Address: 0x1024a8 - 0x1024e0
void sub_001024A8_0x1024a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001024A8_0x1024a8");
#endif

    switch (ctx->pc) {
        case 0x1024b8u: goto label_1024b8;
        default: break;
    }

    ctx->pc = 0x1024a8u;

    // 0x1024a8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1024A8u;
    {
        const bool branch_taken_0x1024a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024A8u;
            // 0x1024ac: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024a8) {
            ctx->pc = 0x1024D4u;
            goto label_1024d4;
        }
    }
    ctx->pc = 0x1024B0u;
    // 0x1024b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1024b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1024b4: 0x0  nop
    ctx->pc = 0x1024b4u;
    // NOP
label_1024b8:
    // 0x1024b8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1024b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1024bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1024bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1024c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1024c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1024c4: 0x0  nop
    ctx->pc = 0x1024c4u;
    // NOP
    // 0x1024c8: 0x0  nop
    ctx->pc = 0x1024c8u;
    // NOP
    // 0x1024cc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1024CCu;
    {
        const bool branch_taken_0x1024cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1024cc) {
            ctx->pc = 0x1024B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1024b8;
        }
    }
    ctx->pc = 0x1024D4u;
label_1024d4:
    // 0x1024d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1024D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1024DCu;
    // 0x1024dc: 0x0  nop
    ctx->pc = 0x1024dcu;
    // NOP
    ctx->pc = 0x1024e0u;
}
