#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E45F8
// Address: 0x1e45f8 - 0x1e4620
void sub_001E45F8_0x1e45f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E45F8_0x1e45f8");
#endif

    ctx->pc = 0x1e45f8u;

    // 0x1e45f8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1e45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1e45fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E45FCu;
    {
        const bool branch_taken_0x1e45fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45FCu;
            // 0x1e4600: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45fc) {
            ctx->pc = 0x1E4614u;
            goto label_1e4614;
        }
    }
    ctx->pc = 0x1E4604u;
    // 0x1e4604: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1e4604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1e4608: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4608u;
    {
        const bool branch_taken_0x1e4608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4608u;
            // 0x1e460c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4608) {
            ctx->pc = 0x1E4614u;
            goto label_1e4614;
        }
    }
    ctx->pc = 0x1E4610u;
    // 0x1e4610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e4610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4614:
    // 0x1e4614: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4614u;
            // 0x1e4618: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E461Cu;
    // 0x1e461c: 0x0  nop
    ctx->pc = 0x1e461cu;
    // NOP
    ctx->pc = 0x1e4620u;
}
