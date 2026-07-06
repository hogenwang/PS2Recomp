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

// Function: sub_0012A7C0
// Address: 0x12a7c0 - 0x12a818
void sub_0012A7C0_0x12a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A7C0_0x12a7c0");
#endif

    switch (ctx->pc) {
        case 0x12a7dcu: goto label_12a7dc;
        default: break;
    }

    ctx->pc = 0x12a7c0u;

    // 0x12a7c0: 0x808f0000  lb          $t7, 0x0($a0)
    ctx->pc = 0x12a7c0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a7c4: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A7C4u;
    {
        const bool branch_taken_0x12a7c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7C4u;
        // 0x12a7c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7c4) {
            ctx->pc = 0x12A7D8u;
            goto label_12a7d8;
        }
    }
    ctx->pc = 0x12A7CCu;
    // 0x12a7cc: 0x80af0000  lb          $t7, 0x0($a1)
    ctx->pc = 0x12a7ccu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x12A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7D0u;
        // 0x12a7d4: 0xf100b  movn        $v0, $zero, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A7D8u;
label_12a7d8:
    // 0x12a7d8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x12a7d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a7dc:
    // 0x12a7dc: 0xac7821  addu        $t7, $a1, $t4
    ctx->pc = 0x12a7dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x12a7e0: 0x81ed0000  lb          $t5, 0x0($t7)
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12a7e4: 0x11a00009  beqz        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A7E4u;
    {
        const bool branch_taken_0x12a7e4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7E4u;
        // 0x12a7e8: 0x4c7021  addu        $t6, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7e4) {
            ctx->pc = 0x12A80Cu;
            goto label_12a80c;
        }
    }
    ctx->pc = 0x12A7ECu;
    // 0x12a7ec: 0x81cf0000  lb          $t7, 0x0($t6)
    ctx->pc = 0x12a7ecu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12a7f0: 0x11affffa  beq         $t5, $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A7F0u;
    {
        const bool branch_taken_0x12a7f0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x12A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7F0u;
        // 0x12a7f4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7f0) {
            ctx->pc = 0x12A7DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a7dc;
        }
    }
    ctx->pc = 0x12A7F8u;
    // 0x12a7f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12a7fc: 0x804f0000  lb          $t7, 0x0($v0)
    ctx->pc = 0x12a7fcu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a800: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12A800u;
    {
        const bool branch_taken_0x12a800 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a800) {
            ctx->pc = 0x12A804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A800u;
            // 0x12a804: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A7DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a7dc;
        }
    }
    ctx->pc = 0x12A808u;
    // 0x12a808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12a808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a80c:
    // 0x12a80c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A814u;
    // 0x12a814: 0x0  nop
    ctx->pc = 0x12a814u;
    // NOP
    if (ctx->pc == 0x12a814u) { ctx->pc = 0x12a818u; }
}
