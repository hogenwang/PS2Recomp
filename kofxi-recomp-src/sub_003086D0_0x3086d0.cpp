#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003086D0
// Address: 0x3086d0 - 0x308730
void sub_003086D0_0x3086d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003086D0_0x3086d0");
#endif

    switch (ctx->pc) {
        case 0x3086f0u: goto label_3086f0;
        case 0x3086fcu: goto label_3086fc;
        default: break;
    }

    ctx->pc = 0x3086d0u;

    // 0x3086d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3086d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3086d4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3086d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3086d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3086d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3086dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3086dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3086e0: 0x8c6578a0  lw          $a1, 0x78A0($v1)
    ctx->pc = 0x3086e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30880)));
    // 0x3086e4: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x3086e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x3086e8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3086E8u;
    {
        const bool branch_taken_0x3086e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3086E8u;
            // 0x3086ec: 0x26107890  addiu       $s0, $s0, 0x7890 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086e8) {
            ctx->pc = 0x308718u;
            goto label_308718;
        }
    }
    ctx->pc = 0x3086F0u;
label_3086f0:
    // 0x3086f0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3086f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3086f4: 0xc0c219c  jal         func_308670
    ctx->pc = 0x3086F4u;
    SET_GPR_U32(ctx, 31, 0x3086FCu);
    ctx->pc = 0x3086F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3086F4u;
            // 0x3086f8: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308670u;
    if (runtime->hasFunction(0x308670u)) {
        auto targetFn = runtime->lookupFunction(0x308670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086FCu; }
        if (ctx->pc != 0x3086FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308670_0x308670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086FCu; }
        if (ctx->pc != 0x3086FCu) { return; }
    }
    ctx->pc = 0x3086FCu;
label_3086fc:
    // 0x3086fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3086fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x308700: 0xac62017c  sw          $v0, 0x17C($v1)
    ctx->pc = 0x308700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 380), GPR_U32(ctx, 2));
    // 0x308704: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x308704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x308708: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x308708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30870c: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30870Cu;
    {
        const bool branch_taken_0x30870c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x30870c) {
            ctx->pc = 0x3086F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3086f0;
        }
    }
    ctx->pc = 0x308714u;
    // 0x308714: 0x0  nop
    ctx->pc = 0x308714u;
    // NOP
label_308718:
    // 0x308718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30871c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30871cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308720: 0x3e00008  jr          $ra
    ctx->pc = 0x308720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308720u;
            // 0x308724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308728u;
    // 0x308728: 0x0  nop
    ctx->pc = 0x308728u;
    // NOP
    // 0x30872c: 0x0  nop
    ctx->pc = 0x30872cu;
    // NOP
    ctx->pc = 0x308730u;
}
