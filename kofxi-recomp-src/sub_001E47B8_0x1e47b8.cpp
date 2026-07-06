#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E47B8
// Address: 0x1e47b8 - 0x1e4800
void sub_001E47B8_0x1e47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E47B8_0x1e47b8");
#endif

    switch (ctx->pc) {
        case 0x1e47dcu: goto label_1e47dc;
        case 0x1e47f0u: goto label_1e47f0;
        default: break;
    }

    ctx->pc = 0x1e47b8u;

    // 0x1e47b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e47b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e47bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e47bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e47c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e47c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e47c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e47c8: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x1e47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x1e47cc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E47CCu;
    {
        const bool branch_taken_0x1e47cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e47cc) {
            ctx->pc = 0x1E47D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47CCu;
            // 0x1e47d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E47F0u;
            goto label_1e47f0;
        }
    }
    ctx->pc = 0x1E47D4u;
    // 0x1e47d4: 0xc079200  jal         func_1E4800
    ctx->pc = 0x1E47D4u;
    SET_GPR_U32(ctx, 31, 0x1E47DCu);
    ctx->pc = 0x1E4800u;
    if (runtime->hasFunction(0x1E4800u)) {
        auto targetFn = runtime->lookupFunction(0x1E4800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47DCu; }
        if (ctx->pc != 0x1E47DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4800_0x1e4800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47DCu; }
        if (ctx->pc != 0x1E47DCu) { return; }
    }
    ctx->pc = 0x1E47DCu;
label_1e47dc:
    // 0x1e47dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e47dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e47e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e47e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e47e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e47e8: 0x807926c  j           func_1E49B0
    ctx->pc = 0x1E47E8u;
    ctx->pc = 0x1E47ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47E8u;
            // 0x1e47ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E49B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1E49B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E47F0u;
label_1e47f0:
    // 0x1e47f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e47f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e47f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E47F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E47F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47F4u;
            // 0x1e47f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E47FCu;
    // 0x1e47fc: 0x0  nop
    ctx->pc = 0x1e47fcu;
    // NOP
    ctx->pc = 0x1e4800u;
}
