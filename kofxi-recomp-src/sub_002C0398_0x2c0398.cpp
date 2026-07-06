#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0398
// Address: 0x2c0398 - 0x2c03c8
void sub_002C0398_0x2c0398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0398_0x2c0398");
#endif

    switch (ctx->pc) {
        case 0x2c03b8u: goto label_2c03b8;
        default: break;
    }

    ctx->pc = 0x2c0398u;

    // 0x2c0398: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c0398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c039c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c039cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c03a0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2c03a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2c03a4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c03a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c03a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c03ac: 0x248442b8  addiu       $a0, $a0, 0x42B8
    ctx->pc = 0x2c03acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17080));
    // 0x2c03b0: 0xc0a0018  jal         func_280060
    ctx->pc = 0x2C03B0u;
    SET_GPR_U32(ctx, 31, 0x2C03B8u);
    ctx->pc = 0x2C03B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03B0u;
            // 0x2c03b4: 0x24a543b0  addiu       $a1, $a1, 0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280060u;
    if (runtime->hasFunction(0x280060u)) {
        auto targetFn = runtime->lookupFunction(0x280060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03B8u; }
        if (ctx->pc != 0x2C03B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280060_0x280060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03B8u; }
        if (ctx->pc != 0x2C03B8u) { return; }
    }
    ctx->pc = 0x2C03B8u;
label_2c03b8:
    // 0x2c03b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c03b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c03bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C03BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C03C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03BCu;
            // 0x2c03c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C03C4u;
    // 0x2c03c4: 0x0  nop
    ctx->pc = 0x2c03c4u;
    // NOP
    ctx->pc = 0x2c03c8u;
}
