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

// Function: sub_00230810
// Address: 0x230810 - 0x230848
void sub_00230810_0x230810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230810_0x230810");
#endif

    switch (ctx->pc) {
        case 0x23083cu: goto label_23083c;
        default: break;
    }

    ctx->pc = 0x230810u;

    // 0x230810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x230814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230818: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x230818u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x23081c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x23081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x230820: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x230820u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x230824: 0x94820078  lhu         $v0, 0x78($a0)
    ctx->pc = 0x230824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x230828: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x230828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x23082c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23082Cu;
    {
        const bool branch_taken_0x23082c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23082Cu;
        // 0x230830: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23082c) {
            ctx->pc = 0x230840u;
            goto label_230840;
        }
    }
    ctx->pc = 0x230834u;
    // 0x230834: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x230834u;
    SET_GPR_U32(ctx, 31, 0x23083Cu);
    ctx->pc = 0x230838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230834u;
    // 0x230838: 0x24850048  addiu       $a1, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308F0u, 0x230834u, 0x23083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23083Cu;
label_23083c:
    // 0x23083c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230840:
    // 0x230840: 0x3e00008  jr          $ra
    ctx->pc = 0x230840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230840u;
        // 0x230844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230848u;
}
