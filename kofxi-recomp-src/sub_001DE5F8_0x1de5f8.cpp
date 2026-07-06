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

// Function: sub_001DE5F8
// Address: 0x1de5f8 - 0x1de650
void sub_001DE5F8_0x1de5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE5F8_0x1de5f8");
#endif

    switch (ctx->pc) {
        case 0x1de628u: goto label_1de628;
        default: break;
    }

    ctx->pc = 0x1de5f8u;

    // 0x1de5f8: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1de5fc: 0x248203f0  addiu       $v0, $a0, 0x3F0
    ctx->pc = 0x1de5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
    // 0x1de600: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1de600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1de604: 0x24870484  addiu       $a3, $a0, 0x484
    ctx->pc = 0x1de604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
    // 0x1de608: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1de608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1de60c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x1de60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1de610: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1de610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1de614: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1de614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1de618: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1de618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1de61c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1de61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1de620: 0xac800404  sw          $zero, 0x404($a0)
    ctx->pc = 0x1de620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 0));
    // 0x1de624: 0x0  nop
    ctx->pc = 0x1de624u;
    // NOP
label_1de628:
    // 0x1de628: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1de628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1de62c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1de62cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1de630: 0x0  nop
    ctx->pc = 0x1de630u;
    // NOP
    // 0x1de634: 0x0  nop
    ctx->pc = 0x1de634u;
    // NOP
    // 0x1de638: 0x0  nop
    ctx->pc = 0x1de638u;
    // NOP
    // 0x1de63c: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DE63Cu;
    {
        const bool branch_taken_0x1de63c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1DE640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE63Cu;
        // 0x1de640: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de63c) {
            ctx->pc = 0x1DE628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de628;
        }
    }
    ctx->pc = 0x1DE644u;
    // 0x1de644: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE64Cu;
    // 0x1de64c: 0x0  nop
    ctx->pc = 0x1de64cu;
    // NOP
    if (ctx->pc == 0x1de64cu) { ctx->pc = 0x1de650u; }
}
