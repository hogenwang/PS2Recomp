#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308A80
// Address: 0x308a80 - 0x308ad0
void sub_00308A80_0x308a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308A80_0x308a80");
#endif

    switch (ctx->pc) {
        case 0x308aa0u: goto label_308aa0;
        case 0x308aacu: goto label_308aac;
        default: break;
    }

    ctx->pc = 0x308a80u;

    // 0x308a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308a84: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x308a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x308a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308a90: 0x8c7047b8  lw          $s0, 0x47B8($v1)
    ctx->pc = 0x308a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18360)));
    // 0x308a94: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x308A94u;
    {
        const bool branch_taken_0x308a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x308a94) {
            ctx->pc = 0x308AC0u;
            goto label_308ac0;
        }
    }
    ctx->pc = 0x308A9Cu;
    // 0x308a9c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x308a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308aa0:
    // 0x308aa0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x308aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x308aa4: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x308AA4u;
    SET_GPR_U32(ctx, 31, 0x308AACu);
    ctx->pc = 0x308AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308AA4u;
            // 0x308aa8: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (runtime->hasFunction(0x3087C0u)) {
        auto targetFn = runtime->lookupFunction(0x3087C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AACu; }
        if (ctx->pc != 0x308AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003087C0_0x3087c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308AACu; }
        if (ctx->pc != 0x308AACu) { return; }
    }
    ctx->pc = 0x308AACu;
label_308aac:
    // 0x308aac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x308aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x308ab0: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x308ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x308ab4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x308ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308ab8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x308AB8u;
    {
        const bool branch_taken_0x308ab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x308ab8) {
            ctx->pc = 0x308ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308AB8u;
            // 0x308abc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308aa0;
        }
    }
    ctx->pc = 0x308AC0u;
label_308ac0:
    // 0x308ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x308AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308AC8u;
            // 0x308acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308AD0u;
    ctx->pc = 0x308ad0u;
}
