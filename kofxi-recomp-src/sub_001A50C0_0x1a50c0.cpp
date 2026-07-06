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

// Function: sub_001A50C0
// Address: 0x1a50c0 - 0x1a5130
void sub_001A50C0_0x1a50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A50C0_0x1a50c0");
#endif

    switch (ctx->pc) {
        case 0x1a50dcu: goto label_1a50dc;
        default: break;
    }

    ctx->pc = 0x1a50c0u;

    // 0x1a50c0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a50c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a50c4: 0x8c68b8f0  lw          $t0, -0x4710($v1)
    ctx->pc = 0x1a50c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949104)));
    // 0x1a50c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a50cc: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A50CCu;
    {
        const bool branch_taken_0x1a50cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50CCu;
        // 0x1a50d0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50cc) {
            ctx->pc = 0x1A5120u;
            goto label_1a5120;
        }
    }
    ctx->pc = 0x1A50D4u;
    // 0x1a50d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a50d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a50d8: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1a50dc:
    // 0x1a50dc: 0x1467000c  bne         $v1, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1A50DCu;
    {
        const bool branch_taken_0x1a50dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a50dc) {
            ctx->pc = 0x1A5110u;
            goto label_1a5110;
        }
    }
    ctx->pc = 0x1A50E4u;
    // 0x1a50e4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a50e8: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x1a50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a50ec: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a50f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a50f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a50f4: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x1a50f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a50f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a50fc: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1a50fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1a5100: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5100u;
    {
        const bool branch_taken_0x1a5100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5100) {
            ctx->pc = 0x1A5110u;
            goto label_1a5110;
        }
    }
    ctx->pc = 0x1A5108u;
    // 0x1a5108: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1a5108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1a510c: 0x0  nop
    ctx->pc = 0x1a510cu;
    // NOP
label_1a5110:
    // 0x1a5110: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x1a5110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a5114: 0x5500fff1  bnel        $t0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A5114u;
    {
        const bool branch_taken_0x1a5114 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5114) {
            ctx->pc = 0x1A5118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5114u;
            // 0x1a5118: 0x8d03000c  lw          $v1, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A50DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a50dc;
        }
    }
    ctx->pc = 0x1A511Cu;
    // 0x1a511c: 0x0  nop
    ctx->pc = 0x1a511cu;
    // NOP
label_1a5120:
    // 0x1a5120: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5128u;
    // 0x1a5128: 0x0  nop
    ctx->pc = 0x1a5128u;
    // NOP
    // 0x1a512c: 0x0  nop
    ctx->pc = 0x1a512cu;
    // NOP
}
