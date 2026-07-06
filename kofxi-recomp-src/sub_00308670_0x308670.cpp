#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308670
// Address: 0x308670 - 0x3086d0
void sub_00308670_0x308670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308670_0x308670");
#endif

    switch (ctx->pc) {
        case 0x308690u: goto label_308690;
        case 0x308698u: goto label_308698;
        default: break;
    }

    ctx->pc = 0x308670u;

    // 0x308670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30867c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308680: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x308680u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x308684: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x308684u;
    {
        const bool branch_taken_0x308684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308684u;
            // 0x308688: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308684) {
            ctx->pc = 0x3086B0u;
            goto label_3086b0;
        }
    }
    ctx->pc = 0x30868Cu;
    // 0x30868c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x30868cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308690:
    // 0x308690: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x308690u;
    SET_GPR_U32(ctx, 31, 0x308698u);
    ctx->pc = 0x308694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308690u;
            // 0x308694: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308698u; }
        if (ctx->pc != 0x308698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308698u; }
        if (ctx->pc != 0x308698u) { return; }
    }
    ctx->pc = 0x308698u;
label_308698:
    // 0x308698: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x308698u;
    {
        const bool branch_taken_0x308698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308698) {
            ctx->pc = 0x30869Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308698u;
            // 0x30869c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3086A8u;
            goto label_3086a8;
        }
    }
    ctx->pc = 0x3086A0u;
    // 0x3086a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3086A0u;
    {
        const bool branch_taken_0x3086a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3086A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3086A0u;
            // 0x3086a4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3086a0) {
            ctx->pc = 0x3086B4u;
            goto label_3086b4;
        }
    }
    ctx->pc = 0x3086A8u;
label_3086a8:
    // 0x3086a8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3086A8u;
    {
        const bool branch_taken_0x3086a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3086a8) {
            ctx->pc = 0x3086ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3086A8u;
            // 0x3086ac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x308690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308690;
        }
    }
    ctx->pc = 0x3086B0u;
label_3086b0:
    // 0x3086b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3086b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3086b4:
    // 0x3086b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3086b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3086b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3086b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3086bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3086bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3086c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3086C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3086C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3086C0u;
            // 0x3086c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3086C8u;
    // 0x3086c8: 0x0  nop
    ctx->pc = 0x3086c8u;
    // NOP
    // 0x3086cc: 0x0  nop
    ctx->pc = 0x3086ccu;
    // NOP
    ctx->pc = 0x3086d0u;
}
