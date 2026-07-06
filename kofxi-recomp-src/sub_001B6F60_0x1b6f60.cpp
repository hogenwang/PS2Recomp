#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6F60
// Address: 0x1b6f60 - 0x1b6fb0
void sub_001B6F60_0x1b6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6F60_0x1b6f60");
#endif

    switch (ctx->pc) {
        case 0x1b6f7cu: goto label_1b6f7c;
        case 0x1b6f80u: goto label_1b6f80;
        case 0x1b6f88u: goto label_1b6f88;
        default: break;
    }

    ctx->pc = 0x1b6f60u;

    // 0x1b6f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6f74: 0xc06dba6  jal         func_1B6E98
    ctx->pc = 0x1B6F74u;
    SET_GPR_U32(ctx, 31, 0x1B6F7Cu);
    ctx->pc = 0x1B6F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F74u;
            // 0x1b6f78: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E98u;
    if (runtime->hasFunction(0x1B6E98u)) {
        auto targetFn = runtime->lookupFunction(0x1B6E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F7Cu; }
        if (ctx->pc != 0x1B6F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6E98_0x1b6e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F7Cu; }
        if (ctx->pc != 0x1B6F7Cu) { return; }
    }
    ctx->pc = 0x1B6F7Cu;
label_1b6f7c:
    // 0x1b6f7c: 0x0  nop
    ctx->pc = 0x1b6f7cu;
    // NOP
label_1b6f80:
    // 0x1b6f80: 0xc06c6b8  jal         func_1B1AE0
    ctx->pc = 0x1B6F80u;
    SET_GPR_U32(ctx, 31, 0x1B6F88u);
    ctx->pc = 0x1B1AE0u;
    if (runtime->hasFunction(0x1B1AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F88u; }
        if (ctx->pc != 0x1B6F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AE0_0x1b1ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F88u; }
        if (ctx->pc != 0x1B6F88u) { return; }
    }
    ctx->pc = 0x1B6F88u;
label_1b6f88:
    // 0x1b6f88: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1b6f88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b6f8c: 0x1451fffc  bne         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B6F8Cu;
    {
        const bool branch_taken_0x1b6f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b6f8c) {
            ctx->pc = 0x1B6F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6f80;
        }
    }
    ctx->pc = 0x1B6F94u;
    // 0x1b6f94: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b6f98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6F98u;
    {
        const bool branch_taken_0x1b6f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F98u;
            // 0x1b6f9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f98) {
            ctx->pc = 0x1B6F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6f80;
        }
    }
    ctx->pc = 0x1B6FA0u;
    // 0x1b6fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FA8u;
            // 0x1b6fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6FB0u;
    ctx->pc = 0x1b6fb0u;
}
