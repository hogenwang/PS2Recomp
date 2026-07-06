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

// Function: sub_002BC1B0
// Address: 0x2bc1b0 - 0x2bc210
void sub_002BC1B0_0x2bc1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC1B0_0x2bc1b0");
#endif

    switch (ctx->pc) {
        case 0x2bc1d0u: goto label_2bc1d0;
        case 0x2bc1e8u: goto label_2bc1e8;
        default: break;
    }

    ctx->pc = 0x2bc1b0u;

    // 0x2bc1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc1b4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2bc1b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1b8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2bc1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bc1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1c0: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x2BC1C0u;
    {
        const bool branch_taken_0x2bc1c0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2BC1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1C0u;
        // 0x2bc1c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1c0) {
            ctx->pc = 0x2BC1FCu;
            goto label_2bc1fc;
        }
    }
    ctx->pc = 0x2BC1C8u;
    // 0x2bc1c8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2bc1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bc1cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2bc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2bc1d0:
    // 0x2bc1d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bc1d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bc1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc1d8: 0x54680005  bnel        $v1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC1D8u;
    {
        const bool branch_taken_0x2bc1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x2bc1d8) {
            ctx->pc = 0x2BC1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC1D8u;
            // 0x2bc1dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC1F0u;
            goto label_2bc1f0;
        }
    }
    ctx->pc = 0x2BC1E0u;
    // 0x2bc1e0: 0xc0af084  jal         func_2BC210
    ctx->pc = 0x2BC1E0u;
    SET_GPR_U32(ctx, 31, 0x2BC1E8u);
    ctx->pc = 0x2BC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC210u, 0x2BC1E0u, 0x2BC1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC1E8u;
label_2bc1e8:
    // 0x2bc1e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC1E8u;
    {
        const bool branch_taken_0x2bc1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1E8u;
        // 0x2bc1ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1e8) {
            ctx->pc = 0x2BC204u;
            goto label_2bc204;
        }
    }
    ctx->pc = 0x2BC1F0u;
label_2bc1f0:
    // 0x2bc1f0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x2bc1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2bc1f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BC1F4u;
    {
        const bool branch_taken_0x2bc1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1F4u;
        // 0x2bc1f8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1f4) {
            ctx->pc = 0x2BC1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc1d0;
        }
    }
    ctx->pc = 0x2BC1FCu;
label_2bc1fc:
    // 0x2bc1fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc204:
    // 0x2bc204: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC204u;
        // 0x2bc208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC20Cu;
    // 0x2bc20c: 0x0  nop
    ctx->pc = 0x2bc20cu;
    // NOP
}
