#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0360
// Address: 0x2c0360 - 0x2c0398
void sub_002C0360_0x2c0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0360_0x2c0360");
#endif

    switch (ctx->pc) {
        case 0x2c0388u: goto label_2c0388;
        default: break;
    }

    ctx->pc = 0x2c0360u;

    // 0x2c0360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0364: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c0364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c036c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c036cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0370: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2c0370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2c0374: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2c0374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c0378: 0x24842868  addiu       $a0, $a0, 0x2868
    ctx->pc = 0x2c0378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10344));
    // 0x2c037c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2c037cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c0380: 0xc0a0c6a  jal         func_2831A8
    ctx->pc = 0x2C0380u;
    SET_GPR_U32(ctx, 31, 0x2C0388u);
    ctx->pc = 0x2C0384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0380u;
            // 0x2c0384: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831A8u;
    if (runtime->hasFunction(0x2831A8u)) {
        auto targetFn = runtime->lookupFunction(0x2831A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0388u; }
        if (ctx->pc != 0x2C0388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002831A8_0x2831a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0388u; }
        if (ctx->pc != 0x2C0388u) { return; }
    }
    ctx->pc = 0x2C0388u;
label_2c0388:
    // 0x2c0388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c038c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C038Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C038Cu;
            // 0x2c0390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0394u;
    // 0x2c0394: 0x0  nop
    ctx->pc = 0x2c0394u;
    // NOP
    ctx->pc = 0x2c0398u;
}
