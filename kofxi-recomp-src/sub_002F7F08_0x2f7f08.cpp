#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7F08
// Address: 0x2f7f08 - 0x2f7f38
void sub_002F7F08_0x2f7f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7F08_0x2f7f08");
#endif

    switch (ctx->pc) {
        case 0x2f7f28u: goto label_2f7f28;
        default: break;
    }

    ctx->pc = 0x2f7f08u;

    // 0x2f7f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7f0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7f14: 0x8c84013c  lw          $a0, 0x13C($a0)
    ctx->pc = 0x2f7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2f7f18: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7F18u;
    {
        const bool branch_taken_0x2f7f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F18u;
            // 0x2f7f1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f18) {
            ctx->pc = 0x2F7F2Cu;
            goto label_2f7f2c;
        }
    }
    ctx->pc = 0x2F7F20u;
    // 0x2f7f20: 0xc0bf12c  jal         func_2FC4B0
    ctx->pc = 0x2F7F20u;
    SET_GPR_U32(ctx, 31, 0x2F7F28u);
    ctx->pc = 0x2FC4B0u;
    if (runtime->hasFunction(0x2FC4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F28u; }
        if (ctx->pc != 0x2F7F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4B0_0x2fc4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7F28u; }
        if (ctx->pc != 0x2F7F28u) { return; }
    }
    ctx->pc = 0x2F7F28u;
label_2f7f28:
    // 0x2f7f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7f2c:
    // 0x2f7f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F30u;
            // 0x2f7f34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7F38u;
    ctx->pc = 0x2f7f38u;
}
