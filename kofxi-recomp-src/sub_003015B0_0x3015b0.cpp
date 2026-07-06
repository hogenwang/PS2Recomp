#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003015B0
// Address: 0x3015b0 - 0x301600
void sub_003015B0_0x3015b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003015B0_0x3015b0");
#endif

    switch (ctx->pc) {
        case 0x3015bcu: goto label_3015bc;
        default: break;
    }

    ctx->pc = 0x3015b0u;

    // 0x3015b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3015b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3015b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3015B4u;
    {
        const bool branch_taken_0x3015b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3015B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015B4u;
        // 0x3015b8: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015b4) {
            ctx->pc = 0x3015E8u;
            goto label_3015e8;
        }
    }
    ctx->pc = 0x3015BCu;
label_3015bc:
    // 0x3015bc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3015bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3015c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3015c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3015c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3015c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3015c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3015C8u;
    {
        const bool branch_taken_0x3015c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3015CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015C8u;
        // 0x3015cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015c8) {
            ctx->pc = 0x3015D8u;
            goto label_3015d8;
        }
    }
    ctx->pc = 0x3015D0u;
    // 0x3015d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3015D0u;
    {
        const bool branch_taken_0x3015d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015D0u;
        // 0x3015d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015d0) {
            ctx->pc = 0x3015ECu;
            goto label_3015ec;
        }
    }
    ctx->pc = 0x3015D8u;
label_3015d8:
    // 0x3015d8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3015d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3015dc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3015DCu;
    {
        const bool branch_taken_0x3015dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3015E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015DCu;
        // 0x3015e0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015dc) {
            ctx->pc = 0x3015BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3015bc;
        }
    }
    ctx->pc = 0x3015E4u;
    // 0x3015e4: 0x0  nop
    ctx->pc = 0x3015e4u;
    // NOP
label_3015e8:
    // 0x3015e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3015e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3015ec:
    // 0x3015ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3015ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3015ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3015F4u;
    // 0x3015f4: 0x0  nop
    ctx->pc = 0x3015f4u;
    // NOP
    // 0x3015f8: 0x0  nop
    ctx->pc = 0x3015f8u;
    // NOP
    // 0x3015fc: 0x0  nop
    ctx->pc = 0x3015fcu;
    // NOP
}
