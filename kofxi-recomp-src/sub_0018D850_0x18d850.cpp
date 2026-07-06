#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D850
// Address: 0x18d850 - 0x18d890
void sub_0018D850_0x18d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D850_0x18d850");
#endif

    switch (ctx->pc) {
        case 0x18d864u: goto label_18d864;
        default: break;
    }

    ctx->pc = 0x18d850u;

    // 0x18d850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d85c: 0xc063600  jal         func_18D800
    ctx->pc = 0x18D85Cu;
    SET_GPR_U32(ctx, 31, 0x18D864u);
    ctx->pc = 0x18D860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D85Cu;
            // 0x18d860: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D800u;
    if (runtime->hasFunction(0x18D800u)) {
        auto targetFn = runtime->lookupFunction(0x18D800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D864u; }
        if (ctx->pc != 0x18D864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D800_0x18d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D864u; }
        if (ctx->pc != 0x18D864u) { return; }
    }
    ctx->pc = 0x18D864u;
label_18d864:
    // 0x18d864: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x18d864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18d868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d86c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18d870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d878: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18d878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18d87c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d880: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x18d880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18d884: 0x3e00008  jr          $ra
    ctx->pc = 0x18D884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D884u;
            // 0x18d888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D88Cu;
    // 0x18d88c: 0x0  nop
    ctx->pc = 0x18d88cu;
    // NOP
    ctx->pc = 0x18d890u;
}
