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

// Function: sub_002005C8
// Address: 0x2005c8 - 0x200618
void sub_002005C8_0x2005c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002005C8_0x2005c8");
#endif

    switch (ctx->pc) {
        case 0x2005e8u: goto label_2005e8;
        default: break;
    }

    ctx->pc = 0x2005c8u;

    // 0x2005c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2005c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2005cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2005ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005d0: 0x244217c8  addiu       $v0, $v0, 0x17C8
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6088));
    // 0x2005d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2005d8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2005D8u;
    {
        const bool branch_taken_0x2005d8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2005DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005D8u;
        // 0x2005dc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005d8) {
            ctx->pc = 0x20060Cu;
            goto label_20060c;
        }
    }
    ctx->pc = 0x2005E0u;
    // 0x2005e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2005e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005e4: 0x0  nop
    ctx->pc = 0x2005e4u;
    // NOP
label_2005e8:
    // 0x2005e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2005e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2005ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2005ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2005f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2005F0u;
    {
        const bool branch_taken_0x2005f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F0u;
        // 0x2005f4: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005f0) {
            ctx->pc = 0x200610u;
            goto label_200610;
        }
    }
    ctx->pc = 0x2005F8u;
    // 0x2005f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2005f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2005fc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2005fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x200600: 0x0  nop
    ctx->pc = 0x200600u;
    // NOP
    // 0x200604: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x200604u;
    {
        const bool branch_taken_0x200604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200604) {
            ctx->pc = 0x2005E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2005e8;
        }
    }
    ctx->pc = 0x20060Cu;
label_20060c:
    // 0x20060c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20060cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200610:
    // 0x200610: 0x3e00008  jr          $ra
    ctx->pc = 0x200610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200618u;
}
