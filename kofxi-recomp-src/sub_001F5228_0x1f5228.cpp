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

// Function: sub_001F5228
// Address: 0x1f5228 - 0x1f5270
void sub_001F5228_0x1f5228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5228_0x1f5228");
#endif

    switch (ctx->pc) {
        case 0x1f5240u: goto label_1f5240;
        default: break;
    }

    ctx->pc = 0x1f5228u;

    // 0x1f5228: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1f5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f522c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f522cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5230: 0x8c460178  lw          $a2, 0x178($v0)
    ctx->pc = 0x1f5230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1f5234: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5234u;
    {
        const bool branch_taken_0x1f5234 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1F5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5234u;
        // 0x1f5238: 0x24430180  addiu       $v1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5234) {
            ctx->pc = 0x1F5264u;
            goto label_1f5264;
        }
    }
    ctx->pc = 0x1F523Cu;
    // 0x1f523c: 0x24841708  addiu       $a0, $a0, 0x1708
    ctx->pc = 0x1f523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5896));
label_1f5240:
    // 0x1f5240: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f5240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5244: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5244u;
    {
        const bool branch_taken_0x1f5244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5244u;
        // 0x1f5248: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5244) {
            ctx->pc = 0x1F5268u;
            goto label_1f5268;
        }
    }
    ctx->pc = 0x1F524Cu;
    // 0x1f524c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f524cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f5250: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1f5250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f5254: 0x0  nop
    ctx->pc = 0x1f5254u;
    // NOP
    // 0x1f5258: 0x0  nop
    ctx->pc = 0x1f5258u;
    // NOP
    // 0x1f525c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F525Cu;
    {
        const bool branch_taken_0x1f525c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F525Cu;
        // 0x1f5260: 0x246300f0  addiu       $v1, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f525c) {
            ctx->pc = 0x1F5240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5240;
        }
    }
    ctx->pc = 0x1F5264u;
label_1f5264:
    // 0x1f5264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5268:
    // 0x1f5268: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5270u;
}
