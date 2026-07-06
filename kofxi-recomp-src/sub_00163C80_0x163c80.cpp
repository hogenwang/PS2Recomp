#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00163C80
// Address: 0x163c80 - 0x163ce0
void sub_00163C80_0x163c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163C80_0x163c80");
#endif

    switch (ctx->pc) {
        case 0x163c8cu: goto label_163c8c;
        default: break;
    }

    ctx->pc = 0x163c80u;

    // 0x163c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c84: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x163c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x163c88: 0x24a54610  addiu       $a1, $a1, 0x4610
    ctx->pc = 0x163c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17936));
label_163c8c:
    // 0x163c8c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x163c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x163c90: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x163c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x163c94: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x163c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163c98: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x163c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x163c9c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x163c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163ca0: 0x28c3017a  slti        $v1, $a2, 0x17A
    ctx->pc = 0x163ca0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)378) ? 1 : 0);
    // 0x163ca4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x163ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x163ca8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x163ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x163cac: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x163cacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x163cb0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x163cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x163cb4: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x163cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x163cb8: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x163cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x163cbc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x163CBCu;
    {
        const bool branch_taken_0x163cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CBCu;
            // 0x163cc0: 0xa0800007  sb          $zero, 0x7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cbc) {
            ctx->pc = 0x163C8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_163c8c;
        }
    }
    ctx->pc = 0x163CC4u;
    // 0x163cc4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x163cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163cc8: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x163cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163ccc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x163cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x163cd0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x163cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163cd4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x163cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x163cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x163CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163CD8u;
            // 0x163cdc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163CE0u;
    ctx->pc = 0x163ce0u;
}
