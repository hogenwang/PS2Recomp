#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201F08
// Address: 0x201f08 - 0x201f58
void sub_00201F08_0x201f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F08_0x201f08");
#endif

    switch (ctx->pc) {
        case 0x201f28u: goto label_201f28;
        default: break;
    }

    ctx->pc = 0x201f08u;

    // 0x201f08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x201f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x201f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f10: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x201f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x201f14: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x201f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x201f18: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x201F18u;
    {
        const bool branch_taken_0x201f18 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x201F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F18u;
            // 0x201f1c: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f18) {
            ctx->pc = 0x201F4Cu;
            goto label_201f4c;
        }
    }
    ctx->pc = 0x201F20u;
    // 0x201f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f24: 0x0  nop
    ctx->pc = 0x201f24u;
    // NOP
label_201f28:
    // 0x201f28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201f2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x201f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201f30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x201F30u;
    {
        const bool branch_taken_0x201f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201F30u;
            // 0x201f34: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f30) {
            ctx->pc = 0x201F50u;
            goto label_201f50;
        }
    }
    ctx->pc = 0x201F38u;
    // 0x201f38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x201f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x201f3c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x201f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x201f40: 0x0  nop
    ctx->pc = 0x201f40u;
    // NOP
    // 0x201f44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201F44u;
    {
        const bool branch_taken_0x201f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201f44) {
            ctx->pc = 0x201F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_201f28;
        }
    }
    ctx->pc = 0x201F4Cu;
label_201f4c:
    // 0x201f4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201f50:
    // 0x201f50: 0x3e00008  jr          $ra
    ctx->pc = 0x201F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201F58u;
    ctx->pc = 0x201f58u;
}
