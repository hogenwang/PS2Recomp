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

// Function: sub_0020A680
// Address: 0x20a680 - 0x20a6f0
void sub_0020A680_0x20a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A680_0x20a680");
#endif

    switch (ctx->pc) {
        case 0x20a69cu: goto label_20a69c;
        default: break;
    }

    ctx->pc = 0x20a680u;

    // 0x20a680: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a684: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20a684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20a688: 0x9063a450  lbu         $v1, -0x5BB0($v1)
    ctx->pc = 0x20a688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943824)));
    // 0x20a68c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20a68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a690: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20A690u;
    {
        const bool branch_taken_0x20a690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A690u;
        // 0x20a694: 0x24c6a450  addiu       $a2, $a2, -0x5BB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a690) {
            ctx->pc = 0x20A6C0u;
            goto label_20a6c0;
        }
    }
    ctx->pc = 0x20A698u;
    // 0x20a698: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x20a698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_20a69c:
    // 0x20a69c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x20a69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20a6a0: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A6A0u;
    {
        const bool branch_taken_0x20a6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x20a6a0) {
            ctx->pc = 0x20A6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A6A0u;
            // 0x20a6a4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A6B0u;
            goto label_20a6b0;
        }
    }
    ctx->pc = 0x20A6A8u;
    // 0x20a6a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20A6A8u;
    {
        const bool branch_taken_0x20a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6a8) {
            ctx->pc = 0x20A6E0u;
            goto label_20a6e0;
        }
    }
    ctx->pc = 0x20A6B0u;
label_20a6b0:
    // 0x20a6b0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x20a6b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20a6b4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20A6B4u;
    {
        const bool branch_taken_0x20a6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6B4u;
        // 0x20a6b8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6b4) {
            ctx->pc = 0x20A69Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20a69c;
        }
    }
    ctx->pc = 0x20A6BCu;
    // 0x20a6bc: 0x0  nop
    ctx->pc = 0x20a6bcu;
    // NOP
label_20a6c0:
    // 0x20a6c0: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x20a6c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20a6c4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A6C4u;
    {
        const bool branch_taken_0x20a6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a6c4) {
            ctx->pc = 0x20A6D0u;
            goto label_20a6d0;
        }
    }
    ctx->pc = 0x20A6CCu;
    // 0x20a6cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20a6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a6d0:
    // 0x20a6d0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a6d4: 0x2463a450  addiu       $v1, $v1, -0x5BB0
    ctx->pc = 0x20a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943824));
    // 0x20a6d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a6dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20a6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_20a6e0:
    // 0x20a6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A6E8u;
    // 0x20a6e8: 0x0  nop
    ctx->pc = 0x20a6e8u;
    // NOP
    // 0x20a6ec: 0x0  nop
    ctx->pc = 0x20a6ecu;
    // NOP
    if (ctx->pc == 0x20a6ecu) { ctx->pc = 0x20a6f0u; }
}
