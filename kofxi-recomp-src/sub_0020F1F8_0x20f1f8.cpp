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

// Function: sub_0020F1F8
// Address: 0x20f1f8 - 0x20f230
void sub_0020F1F8_0x20f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F1F8_0x20f1f8");
#endif

    switch (ctx->pc) {
        case 0x20f20cu: goto label_20f20c;
        default: break;
    }

    ctx->pc = 0x20f1f8u;

    // 0x20f1f8: 0x948f0000  lhu         $t7, 0x0($a0)
    ctx->pc = 0x20f1f8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f1fc: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x20F1FCu;
    {
        const bool branch_taken_0x20f1fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1FCu;
        // 0x20f200: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1fc) {
            ctx->pc = 0x20F220u;
            goto label_20f220;
        }
    }
    ctx->pc = 0x20F204u;
    // 0x20f204: 0x948f0000  lhu         $t7, 0x0($a0)
    ctx->pc = 0x20f204u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20f208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f20c:
    // 0x20f20c: 0x11e50005  beq         $t7, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F20Cu;
    {
        const bool branch_taken_0x20f20c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 5));
        ctx->pc = 0x20F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F20Cu;
        // 0x20f210: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f20c) {
            ctx->pc = 0x20F224u;
            goto label_20f224;
        }
    }
    ctx->pc = 0x20F214u;
    // 0x20f214: 0x948f0000  lhu         $t7, 0x0($a0)
    ctx->pc = 0x20f214u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20f218: 0x55e0fffc  bnel        $t7, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x20F218u;
    {
        const bool branch_taken_0x20f218 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f218) {
            ctx->pc = 0x20F21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F218u;
            // 0x20f21c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F20Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f20c;
        }
    }
    ctx->pc = 0x20F220u;
label_20f220:
    // 0x20f220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20f220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f224:
    // 0x20f224: 0x3e00008  jr          $ra
    ctx->pc = 0x20F224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F22Cu;
    // 0x20f22c: 0x0  nop
    ctx->pc = 0x20f22cu;
    // NOP
}
