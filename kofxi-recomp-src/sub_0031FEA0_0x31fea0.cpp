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

// Function: sub_0031FEA0
// Address: 0x31fea0 - 0x31ff10
void sub_0031FEA0_0x31fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FEA0_0x31fea0");
#endif

    switch (ctx->pc) {
        case 0x31feb8u: goto label_31feb8;
        case 0x31fee0u: goto label_31fee0;
        default: break;
    }

    ctx->pc = 0x31fea0u;

    // 0x31fea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31fea4: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x31fea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31fea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31feac: 0x250809c0  addiu       $t0, $t0, 0x9C0
    ctx->pc = 0x31feacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2496));
    // 0x31feb0: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x31feb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x31feb4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x31feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31feb8:
    // 0x31feb8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x31feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31febc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x31febcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x31fec0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x31fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31fec4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x31fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x31fec8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x31fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x31fecc: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x31feccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x31fed0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31FED0u;
    {
        const bool branch_taken_0x31fed0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x31FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FED0u;
        // 0x31fed4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fed0) {
            ctx->pc = 0x31FEB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31feb8;
        }
    }
    ctx->pc = 0x31FED8u;
    // 0x31fed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31fed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fedc: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x31fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_31fee0:
    // 0x31fee0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31fee4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FEE4u;
    {
        const bool branch_taken_0x31fee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31fee4) {
            ctx->pc = 0x31FEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FEE4u;
            // 0x31fee8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FEF4u;
            goto label_31fef4;
        }
    }
    ctx->pc = 0x31FEECu;
    // 0x31feec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FEECu;
    {
        const bool branch_taken_0x31feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEECu;
        // 0x31fef0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31feec) {
            ctx->pc = 0x31FF00u;
            goto label_31ff00;
        }
    }
    ctx->pc = 0x31FEF4u;
label_31fef4:
    // 0x31fef4: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x31fef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31fef8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31FEF8u;
    {
        const bool branch_taken_0x31fef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEF8u;
        // 0x31fefc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fef8) {
            ctx->pc = 0x31FEE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fee0;
        }
    }
    ctx->pc = 0x31FF00u;
label_31ff00:
    // 0x31ff00: 0x3e00008  jr          $ra
    ctx->pc = 0x31FF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF00u;
        // 0x31ff04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FF08u;
    // 0x31ff08: 0x0  nop
    ctx->pc = 0x31ff08u;
    // NOP
    // 0x31ff0c: 0x0  nop
    ctx->pc = 0x31ff0cu;
    // NOP
}
