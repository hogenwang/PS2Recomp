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

// Function: sub_0015ED90
// Address: 0x15ed90 - 0x15ee00
void sub_0015ED90_0x15ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ED90_0x15ed90");
#endif

    ctx->pc = 0x15ed90u;

    // 0x15ed90: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ed94: 0x3c0c009b  lui         $t4, 0x9B
    ctx->pc = 0x15ed94u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)155 << 16));
    // 0x15ed98: 0x904d44d0  lbu         $t5, 0x44D0($v0)
    ctx->pc = 0x15ed98u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17616)));
    // 0x15ed9c: 0x3c0b009b  lui         $t3, 0x9B
    ctx->pc = 0x15ed9cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)155 << 16));
    // 0x15eda0: 0x3c0a009b  lui         $t2, 0x9B
    ctx->pc = 0x15eda0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)155 << 16));
    // 0x15eda4: 0x3c09009b  lui         $t1, 0x9B
    ctx->pc = 0x15eda4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)155 << 16));
    // 0x15eda8: 0x258c44d4  addiu       $t4, $t4, 0x44D4
    ctx->pc = 0x15eda8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 17620));
    // 0x15edac: 0x256b44d8  addiu       $t3, $t3, 0x44D8
    ctx->pc = 0x15edacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 17624));
    // 0x15edb0: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x15edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x15edb4: 0x254a44dc  addiu       $t2, $t2, 0x44DC
    ctx->pc = 0x15edb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 17628));
    // 0x15edb8: 0x4d6821  addu        $t5, $v0, $t5
    ctx->pc = 0x15edb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x15edbc: 0x252944de  addiu       $t1, $t1, 0x44DE
    ctx->pc = 0x15edbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 17630));
    // 0x15edc0: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x15edc4: 0x3c08009b  lui         $t0, 0x9B
    ctx->pc = 0x15edc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)155 << 16));
    // 0x15edc8: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x15edc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x15edcc: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x15edccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x15edd0: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x15edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x15edd4: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x15edd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x15edd8: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x15edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x15eddc: 0x12d2021  addu        $a0, $t1, $t5
    ctx->pc = 0x15eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x15ede0: 0xa5460000  sh          $a2, 0x0($t2)
    ctx->pc = 0x15ede0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x15ede4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15ede8: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x15ede8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x15edec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15edecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edf0: 0x910444d0  lbu         $a0, 0x44D0($t0)
    ctx->pc = 0x15edf0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17616)));
    // 0x15edf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15edf8: 0x3e00008  jr          $ra
    ctx->pc = 0x15EDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDF8u;
        // 0x15edfc: 0xa06444d0  sb          $a0, 0x44D0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 17616), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EE00u;
}
