#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2A78
// Address: 0x1e2a78 - 0x1e2ae8
void sub_001E2A78_0x1e2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2A78_0x1e2a78");
#endif

    switch (ctx->pc) {
        case 0x1e2a8cu: goto label_1e2a8c;
        default: break;
    }

    ctx->pc = 0x1e2a78u;

    // 0x1e2a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2a80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e2a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e2a84: 0xc078aba  jal         func_1E2AE8
    ctx->pc = 0x1E2A84u;
    SET_GPR_U32(ctx, 31, 0x1E2A8Cu);
    ctx->pc = 0x1E2A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A84u;
            // 0x1e2a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AE8u;
    if (runtime->hasFunction(0x1E2AE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E2AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A8Cu; }
        if (ctx->pc != 0x1E2A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2AE8_0x1e2ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A8Cu; }
        if (ctx->pc != 0x1E2A8Cu) { return; }
    }
    ctx->pc = 0x1E2A8Cu;
label_1e2a8c:
    // 0x1e2a8c: 0x8e0404dc  lw          $a0, 0x4DC($s0)
    ctx->pc = 0x1e2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1244)));
    // 0x1e2a90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e2a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2a98: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E2A98u;
    {
        const bool branch_taken_0x1e2a98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2a98) {
            ctx->pc = 0x1E2A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A98u;
            // 0x1e2a9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2AD8u;
            goto label_1e2ad8;
        }
    }
    ctx->pc = 0x1E2AA0u;
    // 0x1e2aa0: 0x8e0504e0  lw          $a1, 0x4E0($s0)
    ctx->pc = 0x1e2aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1248)));
    // 0x1e2aa4: 0x54a4000c  bnel        $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E2AA4u;
    {
        const bool branch_taken_0x1e2aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e2aa4) {
            ctx->pc = 0x1E2AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AA4u;
            // 0x1e2aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2AD8u;
            goto label_1e2ad8;
        }
    }
    ctx->pc = 0x1E2AACu;
    // 0x1e2aac: 0x8e0204ec  lw          $v0, 0x4EC($s0)
    ctx->pc = 0x1e2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x1e2ab0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1e2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1e2ab4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1e2ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e2ab8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2AB8u;
    {
        const bool branch_taken_0x1e2ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ab8) {
            ctx->pc = 0x1E2ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AB8u;
            // 0x1e2abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2AD8u;
            goto label_1e2ad8;
        }
    }
    ctx->pc = 0x1E2AC0u;
    // 0x1e2ac0: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2AC0u;
    {
        const bool branch_taken_0x1e2ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E2AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AC0u;
            // 0x1e2ac4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac0) {
            ctx->pc = 0x1E2AD0u;
            goto label_1e2ad0;
        }
    }
    ctx->pc = 0x1E2AC8u;
    // 0x1e2ac8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2AC8u;
    {
        const bool branch_taken_0x1e2ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AC8u;
            // 0x1e2acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac8) {
            ctx->pc = 0x1E2AD8u;
            goto label_1e2ad8;
        }
    }
    ctx->pc = 0x1E2AD0u;
label_1e2ad0:
    // 0x1e2ad0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e2ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2ad8:
    // 0x1e2ad8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e2ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2adc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e2adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e2ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AE0u;
            // 0x1e2ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2AE8u;
    ctx->pc = 0x1e2ae8u;
}
