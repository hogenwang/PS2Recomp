#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197F80
// Address: 0x197f80 - 0x197ff0
void sub_00197F80_0x197f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197F80_0x197f80");
#endif

    switch (ctx->pc) {
        case 0x197f9cu: goto label_197f9c;
        case 0x197fb0u: goto label_197fb0;
        case 0x197fd0u: goto label_197fd0;
        default: break;
    }

    ctx->pc = 0x197f80u;

    // 0x197f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197f90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f94: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x197f94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x197f98: 0x2610d3b0  addiu       $s0, $s0, -0x2C50
    ctx->pc = 0x197f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955952));
label_197f9c:
    // 0x197f9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x197f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197fa0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197FA0u;
    {
        const bool branch_taken_0x197fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197fa0) {
            ctx->pc = 0x197FB8u;
            goto label_197fb8;
        }
    }
    ctx->pc = 0x197FA8u;
    // 0x197fa8: 0xc06c128  jal         func_1B04A0
    ctx->pc = 0x197FA8u;
    SET_GPR_U32(ctx, 31, 0x197FB0u);
    ctx->pc = 0x1B04A0u;
    if (runtime->hasFunction(0x1B04A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FB0u; }
        if (ctx->pc != 0x197FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04A0_0x1b04a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FB0u; }
        if (ctx->pc != 0x197FB0u) { return; }
    }
    ctx->pc = 0x197FB0u;
label_197fb0:
    // 0x197fb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x197fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x197fb4: 0x0  nop
    ctx->pc = 0x197fb4u;
    // NOP
label_197fb8:
    // 0x197fb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x197fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x197fbc: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x197fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x197fc0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x197FC0u;
    {
        const bool branch_taken_0x197fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FC0u;
            // 0x197fc4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fc0) {
            ctx->pc = 0x197F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197f9c;
        }
    }
    ctx->pc = 0x197FC8u;
    // 0x197fc8: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x197FC8u;
    SET_GPR_U32(ctx, 31, 0x197FD0u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FD0u; }
        if (ctx->pc != 0x197FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FD0u; }
        if (ctx->pc != 0x197FD0u) { return; }
    }
    ctx->pc = 0x197FD0u;
label_197fd0:
    // 0x197fd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197fd4: 0xac60d3a0  sw          $zero, -0x2C60($v1)
    ctx->pc = 0x197fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955936), GPR_U32(ctx, 0));
    // 0x197fd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x197FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FE4u;
            // 0x197fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197FECu;
    // 0x197fec: 0x0  nop
    ctx->pc = 0x197fecu;
    // NOP
    ctx->pc = 0x197ff0u;
}
