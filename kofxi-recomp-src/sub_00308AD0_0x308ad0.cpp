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

// Function: sub_00308AD0
// Address: 0x308ad0 - 0x308b70
void sub_00308AD0_0x308ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308AD0_0x308ad0");
#endif

    switch (ctx->pc) {
        case 0x308af0u: goto label_308af0;
        case 0x308b0cu: goto label_308b0c;
        case 0x308b20u: goto label_308b20;
        case 0x308b3cu: goto label_308b3c;
        default: break;
    }

    ctx->pc = 0x308ad0u;

    // 0x308ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308ad4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x308ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x308ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308ae0: 0x8c7047bc  lw          $s0, 0x47BC($v1)
    ctx->pc = 0x308ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18364)));
    // 0x308ae4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x308AE4u;
    {
        const bool branch_taken_0x308ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ae4) {
            ctx->pc = 0x308B58u;
            goto label_308b58;
        }
    }
    ctx->pc = 0x308AECu;
    // 0x308aec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x308aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308af0:
    // 0x308af0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x308af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x308af4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x308af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x308af8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x308AF8u;
    {
        const bool branch_taken_0x308af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308af8) {
            ctx->pc = 0x308B30u;
            goto label_308b30;
        }
    }
    ctx->pc = 0x308B00u;
    // 0x308b00: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x308b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x308b04: 0xc0c2200  jal         func_308800
    ctx->pc = 0x308B04u;
    SET_GPR_U32(ctx, 31, 0x308B0Cu);
    ctx->pc = 0x308B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B04u;
    // 0x308b08: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308800u, 0x308B04u, 0x308B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B0Cu;
label_308b0c:
    // 0x308b0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x308b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x308b10: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x308b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x308b14: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x308b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x308b18: 0xc0c2218  jal         func_308860
    ctx->pc = 0x308B18u;
    SET_GPR_U32(ctx, 31, 0x308B20u);
    ctx->pc = 0x308B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B18u;
    // 0x308b1c: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308860u, 0x308B18u, 0x308B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B20u;
label_308b20:
    // 0x308b20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x308b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x308b24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x308B24u;
    {
        const bool branch_taken_0x308b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B24u;
        // 0x308b28: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b24) {
            ctx->pc = 0x308B48u;
            goto label_308b48;
        }
    }
    ctx->pc = 0x308B2Cu;
    // 0x308b2c: 0x0  nop
    ctx->pc = 0x308b2cu;
    // NOP
label_308b30:
    // 0x308b30: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x308b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x308b34: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x308B34u;
    SET_GPR_U32(ctx, 31, 0x308B3Cu);
    ctx->pc = 0x308B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B34u;
    // 0x308b38: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3087C0u, 0x308B34u, 0x308B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B3Cu;
label_308b3c:
    // 0x308b3c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x308b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x308b40: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x308b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x308b44: 0x0  nop
    ctx->pc = 0x308b44u;
    // NOP
label_308b48:
    // 0x308b48: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x308b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308b4c: 0x5600ffe8  bnel        $s0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x308B4Cu;
    {
        const bool branch_taken_0x308b4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x308b4c) {
            ctx->pc = 0x308B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B4Cu;
            // 0x308b50: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308af0;
        }
    }
    ctx->pc = 0x308B54u;
    // 0x308b54: 0x0  nop
    ctx->pc = 0x308b54u;
    // NOP
label_308b58:
    // 0x308b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308b60: 0x3e00008  jr          $ra
    ctx->pc = 0x308B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B60u;
        // 0x308b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308B68u;
    // 0x308b68: 0x0  nop
    ctx->pc = 0x308b68u;
    // NOP
    // 0x308b6c: 0x0  nop
    ctx->pc = 0x308b6cu;
    // NOP
    if (ctx->pc == 0x308b6cu) { ctx->pc = 0x308b70u; }
}
