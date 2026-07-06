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

// Function: sub_00308A20
// Address: 0x308a20 - 0x308a80
void sub_00308A20_0x308a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308A20_0x308a20");
#endif

    switch (ctx->pc) {
        case 0x308a40u: goto label_308a40;
        case 0x308a64u: goto label_308a64;
        default: break;
    }

    ctx->pc = 0x308a20u;

    // 0x308a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308a24: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x308a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x308a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308a30: 0x8c7047b4  lw          $s0, 0x47B4($v1)
    ctx->pc = 0x308a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18356)));
    // 0x308a34: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x308A34u;
    {
        const bool branch_taken_0x308a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x308a34) {
            ctx->pc = 0x308A70u;
            goto label_308a70;
        }
    }
    ctx->pc = 0x308A3Cu;
    // 0x308a3c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x308a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308a40:
    // 0x308a40: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x308a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x308a44: 0x24423b20  addiu       $v0, $v0, 0x3B20
    ctx->pc = 0x308a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15136));
    // 0x308a48: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x308a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x308a4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x308a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x308a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308a58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x308a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308a5c: 0xc049c48  jal         func_127120
    ctx->pc = 0x308A5Cu;
    SET_GPR_U32(ctx, 31, 0x308A64u);
    ctx->pc = 0x308A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A5Cu;
    // 0x308a60: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x308A5Cu, 0x308A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A64u;
label_308a64:
    // 0x308a64: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x308a64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308a68: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x308A68u;
    {
        const bool branch_taken_0x308a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x308a68) {
            ctx->pc = 0x308A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A68u;
            // 0x308a6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308a40;
        }
    }
    ctx->pc = 0x308A70u;
label_308a70:
    // 0x308a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308a78: 0x3e00008  jr          $ra
    ctx->pc = 0x308A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A78u;
        // 0x308a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A80u;
}
