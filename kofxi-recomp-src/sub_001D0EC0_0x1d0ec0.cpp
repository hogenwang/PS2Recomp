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

// Function: sub_001D0EC0
// Address: 0x1d0ec0 - 0x1d0f30
void sub_001D0EC0_0x1d0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0EC0_0x1d0ec0");
#endif

    ctx->pc = 0x1d0ec0u;

    // 0x1d0ec0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d0ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ec4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0ec8: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x1d0ecc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0ECCu;
    {
        const bool branch_taken_0x1d0ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0ecc) {
            ctx->pc = 0x1D0ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0ECCu;
            // 0x1d0ed0: 0x8ca203c8  lw          $v0, 0x3C8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0EE0u;
            goto label_1d0ee0;
        }
    }
    ctx->pc = 0x1D0ED4u;
    // 0x1d0ed4: 0xaca003c8  sw          $zero, 0x3C8($a1)
    ctx->pc = 0x1d0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 0));
    // 0x1d0ed8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0ED8u;
    {
        const bool branch_taken_0x1d0ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED8u;
        // 0x1d0edc: 0xaca003c4  sw          $zero, 0x3C4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed8) {
            ctx->pc = 0x1D0F00u;
            goto label_1d0f00;
        }
    }
    ctx->pc = 0x1D0EE0u;
label_1d0ee0:
    // 0x1d0ee0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1d0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1d0ee4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1d0ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0ee8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0eec: 0xaca403c8  sw          $a0, 0x3C8($a1)
    ctx->pc = 0x1d0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 4));
    // 0x1d0ef0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1d0ef0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1d0ef4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d0ef8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0efc: 0xaca203c4  sw          $v0, 0x3C4($a1)
    ctx->pc = 0x1d0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 2));
label_1d0f00:
    // 0x1d0f00: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x1d0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x1d0f04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d0f08: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1d0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1d0f0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d0f10: 0x8c63c0e0  lw          $v1, -0x3F20($v1)
    ctx->pc = 0x1d0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951136)));
    // 0x1d0f14: 0xaca30320  sw          $v1, 0x320($a1)
    ctx->pc = 0x1d0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 3));
    // 0x1d0f18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1d0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1d0f1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d0f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d0f20: 0x8c84c0f0  lw          $a0, -0x3F10($a0)
    ctx->pc = 0x1d0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951152)));
    // 0x1d0f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F24u;
        // 0x1d0f28: 0xaca40330  sw          $a0, 0x330($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0F2Cu;
    // 0x1d0f2c: 0x0  nop
    ctx->pc = 0x1d0f2cu;
    // NOP
}
