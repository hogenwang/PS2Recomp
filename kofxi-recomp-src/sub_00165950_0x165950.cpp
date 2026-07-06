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

// Function: sub_00165950
// Address: 0x165950 - 0x1659a0
void sub_00165950_0x165950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165950_0x165950");
#endif

    switch (ctx->pc) {
        case 0x16595cu: goto label_16595c;
        default: break;
    }

    ctx->pc = 0x165950u;

    // 0x165950: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x165954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165958: 0x248447e0  addiu       $a0, $a0, 0x47E0
    ctx->pc = 0x165958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18400));
label_16595c:
    // 0x16595c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16595cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x165960: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x165960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x165964: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x165964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x165968: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x165968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x16596c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x16596cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x165970: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x165970u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x165974: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x165974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x165978: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x165978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16597c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x16597cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x165980: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x165980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x165984: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x165984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x165988: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x165988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x16598c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x16598Cu;
    {
        const bool branch_taken_0x16598c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16598Cu;
        // 0x165990: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16598c) {
            ctx->pc = 0x16595Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16595c;
        }
    }
    ctx->pc = 0x165994u;
    // 0x165994: 0x3e00008  jr          $ra
    ctx->pc = 0x165994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16599Cu;
    // 0x16599c: 0x0  nop
    ctx->pc = 0x16599cu;
    // NOP
    if (ctx->pc == 0x16599cu) { ctx->pc = 0x1659a0u; }
}
