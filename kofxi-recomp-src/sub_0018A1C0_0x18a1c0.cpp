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

// Function: sub_0018A1C0
// Address: 0x18a1c0 - 0x18a210
void sub_0018A1C0_0x18a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A1C0_0x18a1c0");
#endif

    switch (ctx->pc) {
        case 0x18a1d8u: goto label_18a1d8;
        default: break;
    }

    ctx->pc = 0x18a1c0u;

    // 0x18a1c0: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18a1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x18a1c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1cc: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x18a1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x18a1d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a1d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18a1d8:
    // 0x18a1d8: 0x90c3000a  lbu         $v1, 0xA($a2)
    ctx->pc = 0x18a1d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x18a1dc: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A1DCu;
    {
        const bool branch_taken_0x18a1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x18a1dc) {
            ctx->pc = 0x18A1F8u;
            goto label_18a1f8;
        }
    }
    ctx->pc = 0x18A1E4u;
    // 0x18a1e4: 0xe41804  sllv        $v1, $a0, $a3
    ctx->pc = 0x18a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x18a1e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18a1ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a1f4: 0x0  nop
    ctx->pc = 0x18a1f4u;
    // NOP
label_18a1f8:
    // 0x18a1f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18a1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18a1fc: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x18a1fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18a200: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x18A200u;
    {
        const bool branch_taken_0x18a200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A200u;
        // 0x18a204: 0x24c60248  addiu       $a2, $a2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a200) {
            ctx->pc = 0x18A1D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a1d8;
        }
    }
    ctx->pc = 0x18A208u;
    // 0x18a208: 0x3e00008  jr          $ra
    ctx->pc = 0x18A208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A210u;
}
