#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018F5A0
// Address: 0x18f5a0 - 0x18f5f0
void sub_0018F5A0_0x18f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F5A0_0x18f5a0");
#endif

    switch (ctx->pc) {
        case 0x18f5bcu: goto label_18f5bc;
        case 0x18f5c4u: goto label_18f5c4;
        default: break;
    }

    ctx->pc = 0x18f5a0u;

    // 0x18f5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f5b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18f5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5b4: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x18f5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x18f5b8: 0x2610bb70  addiu       $s0, $s0, -0x4490
    ctx->pc = 0x18f5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949744));
label_18f5bc:
    // 0x18f5bc: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F5BCu;
    SET_GPR_U32(ctx, 31, 0x18F5C4u);
    ctx->pc = 0x18F5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5BCu;
            // 0x18f5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5C4u; }
        if (ctx->pc != 0x18F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5C4u; }
        if (ctx->pc != 0x18F5C4u) { return; }
    }
    ctx->pc = 0x18F5C4u;
label_18f5c4:
    // 0x18f5c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f5c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x18f5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x18f5cc: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x18f5ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18f5d0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18F5D0u;
    {
        const bool branch_taken_0x18f5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f5d0) {
            ctx->pc = 0x18F5BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f5bc;
        }
    }
    ctx->pc = 0x18F5D8u;
    // 0x18f5d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x18F5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5E4u;
            // 0x18f5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F5ECu;
    // 0x18f5ec: 0x0  nop
    ctx->pc = 0x18f5ecu;
    // NOP
    ctx->pc = 0x18f5f0u;
}
