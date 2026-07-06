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

// Function: sub_0030D630
// Address: 0x30d630 - 0x30d680
void sub_0030D630_0x30d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D630_0x30d630");
#endif

    switch (ctx->pc) {
        case 0x30d650u: goto label_30d650;
        default: break;
    }

    ctx->pc = 0x30d630u;

    // 0x30d630: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30d634: 0x8c674778  lw          $a3, 0x4778($v1)
    ctx->pc = 0x30d634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
    // 0x30d638: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x30D638u;
    {
        const bool branch_taken_0x30d638 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d638) {
            ctx->pc = 0x30D678u;
            goto label_30d678;
        }
    }
    ctx->pc = 0x30D640u;
    // 0x30d640: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x30d640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x30d644: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30d644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x30d648: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x30d648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30d64c: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x30d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_30d650:
    // 0x30d650: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x30d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x30d654: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x30d654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x30d658: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30d658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30d65c: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x30d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x30d660: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x30d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x30d664: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30d668: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30d668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30d66c: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x30d66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x30d670: 0x54e0fff7  bnel        $a3, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30D670u;
    {
        const bool branch_taken_0x30d670 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d670) {
            ctx->pc = 0x30D674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D670u;
            // 0x30d674: 0x8ce50010  lw          $a1, 0x10($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d650;
        }
    }
    ctx->pc = 0x30D678u;
label_30d678:
    // 0x30d678: 0x3e00008  jr          $ra
    ctx->pc = 0x30D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D680u;
}
