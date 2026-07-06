#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF6D0
// Address: 0x1df6d0 - 0x1df710
void sub_001DF6D0_0x1df6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF6D0_0x1df6d0");
#endif

    ctx->pc = 0x1df6d0u;

    // 0x1df6d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df6d4: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x1df6d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1df6d8: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DF6D8u;
    {
        const bool branch_taken_0x1df6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6D8u;
            // 0x1df6dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6d8) {
            ctx->pc = 0x1DF704u;
            goto label_1df704;
        }
    }
    ctx->pc = 0x1DF6E0u;
    // 0x1df6e0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF6E0u;
    {
        const bool branch_taken_0x1df6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df6e0) {
            ctx->pc = 0x1DF6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6E0u;
            // 0x1df6e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF6F8u;
            goto label_1df6f8;
        }
    }
    ctx->pc = 0x1DF6E8u;
    // 0x1df6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df6ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF6ECu;
    {
        const bool branch_taken_0x1df6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6ECu;
            // 0x1df6f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6ec) {
            ctx->pc = 0x1DF6FCu;
            goto label_1df6fc;
        }
    }
    ctx->pc = 0x1DF6F4u;
    // 0x1df6f4: 0x0  nop
    ctx->pc = 0x1df6f4u;
    // NOP
label_1df6f8:
    // 0x1df6f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1df6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1df6fc:
    // 0x1df6fc: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DF6FCu;
    {
        const bool branch_taken_0x1df6fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df6fc) {
            ctx->pc = 0x1DF700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6FCu;
            // 0x1df700: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF704u;
            goto label_1df704;
        }
    }
    ctx->pc = 0x1DF704u;
label_1df704:
    // 0x1df704: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF704u;
            // 0x1df708: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF70Cu;
    // 0x1df70c: 0x0  nop
    ctx->pc = 0x1df70cu;
    // NOP
    ctx->pc = 0x1df710u;
}
