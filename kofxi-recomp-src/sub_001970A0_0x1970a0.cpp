#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001970A0
// Address: 0x1970a0 - 0x1970d0
void sub_001970A0_0x1970a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001970A0_0x1970a0");
#endif

    switch (ctx->pc) {
        case 0x1970bcu: goto label_1970bc;
        default: break;
    }

    ctx->pc = 0x1970a0u;

    // 0x1970a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1970a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1970a4: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1970a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1970a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1970a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1970ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1970acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1970b0: 0x9444d160  lhu         $a0, -0x2EA0($v0)
    ctx->pc = 0x1970b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294955360)));
    // 0x1970b4: 0xc063808  jal         func_18E020
    ctx->pc = 0x1970B4u;
    SET_GPR_U32(ctx, 31, 0x1970BCu);
    ctx->pc = 0x1970B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1970B4u;
            // 0x1970b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (runtime->hasFunction(0x18E020u)) {
        auto targetFn = runtime->lookupFunction(0x18E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970BCu; }
        if (ctx->pc != 0x1970BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E020_0x18e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970BCu; }
        if (ctx->pc != 0x1970BCu) { return; }
    }
    ctx->pc = 0x1970BCu;
label_1970bc:
    // 0x1970bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1970bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1970c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1970c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1970c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1970C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1970C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1970C4u;
            // 0x1970c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1970CCu;
    // 0x1970cc: 0x0  nop
    ctx->pc = 0x1970ccu;
    // NOP
    ctx->pc = 0x1970d0u;
}
