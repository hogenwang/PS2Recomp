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

// Function: sub_002411B8
// Address: 0x2411b8 - 0x2411f8
void sub_002411B8_0x2411b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002411B8_0x2411b8");
#endif

    switch (ctx->pc) {
        case 0x2411c8u: goto label_2411c8;
        default: break;
    }

    ctx->pc = 0x2411b8u;

    // 0x2411b8: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x2411b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2411bc: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2411BCu;
    {
        const bool branch_taken_0x2411bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2411C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411BCu;
        // 0x2411c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411bc) {
            ctx->pc = 0x2411F0u;
            goto label_2411f0;
        }
    }
    ctx->pc = 0x2411C4u;
    // 0x2411c4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2411c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2411c8:
    // 0x2411c8: 0x90a4000a  lbu         $a0, 0xA($a1)
    ctx->pc = 0x2411c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2411cc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2411d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2411d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2411d4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2411d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2411d8: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2411D8u;
    {
        const bool branch_taken_0x2411d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2411d8) {
            ctx->pc = 0x2411DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2411D8u;
            // 0x2411dc: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2411E4u;
            goto label_2411e4;
        }
    }
    ctx->pc = 0x2411E0u;
    // 0x2411e0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2411e4:
    // 0x2411e4: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2411e8: 0x443fff7  bgezl       $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2411E8u;
    {
        const bool branch_taken_0x2411e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2411e8) {
            ctx->pc = 0x2411ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2411E8u;
            // 0x2411ec: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2411C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2411c8;
        }
    }
    ctx->pc = 0x2411F0u;
label_2411f0:
    // 0x2411f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2411F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2411F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2411F0u;
        // 0x2411f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2411F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2411F8u;
}
