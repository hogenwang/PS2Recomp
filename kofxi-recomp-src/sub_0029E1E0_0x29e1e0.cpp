#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E1E0
// Address: 0x29e1e0 - 0x29e220
void sub_0029E1E0_0x29e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E1E0_0x29e1e0");
#endif

    switch (ctx->pc) {
        case 0x29e1f0u: goto label_29e1f0;
        default: break;
    }

    ctx->pc = 0x29e1e0u;

    // 0x29e1e0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x29E1E0u;
    {
        const bool branch_taken_0x29e1e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x29E1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E1E0u;
            // 0x29e1e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1e0) {
            ctx->pc = 0x29E214u;
            goto label_29e214;
        }
    }
    ctx->pc = 0x29E1E8u;
    // 0x29e1e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x29e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29e1ec: 0x0  nop
    ctx->pc = 0x29e1ecu;
    // NOP
label_29e1f0:
    // 0x29e1f0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x29e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x29e1f4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29E1F4u;
    {
        const bool branch_taken_0x29e1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E1F4u;
            // 0x29e1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1f4) {
            ctx->pc = 0x29E218u;
            goto label_29e218;
        }
    }
    ctx->pc = 0x29E1FCu;
    // 0x29e1fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29e1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29e200: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x29e200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29e204: 0x0  nop
    ctx->pc = 0x29e204u;
    // NOP
    // 0x29e208: 0x0  nop
    ctx->pc = 0x29e208u;
    // NOP
    // 0x29e20c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x29E20Cu;
    {
        const bool branch_taken_0x29e20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e20c) {
            ctx->pc = 0x29E210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E20Cu;
            // 0x29e210: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E1F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e1f0;
        }
    }
    ctx->pc = 0x29E214u;
label_29e214:
    // 0x29e214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e218:
    // 0x29e218: 0x3e00008  jr          $ra
    ctx->pc = 0x29E218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E220u;
    ctx->pc = 0x29e220u;
}
