#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FE58
// Address: 0x20fe58 - 0x20fea0
void sub_0020FE58_0x20fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FE58_0x20fe58");
#endif

    switch (ctx->pc) {
        case 0x20fe70u: goto label_20fe70;
        case 0x20fe84u: goto label_20fe84;
        default: break;
    }

    ctx->pc = 0x20fe58u;

    // 0x20fe58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20fe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20fe5c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x20fe5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x20fe60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20fe64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20fe68: 0xc083d96  jal         func_20F658
    ctx->pc = 0x20FE68u;
    SET_GPR_U32(ctx, 31, 0x20FE70u);
    ctx->pc = 0x20FE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE68u;
            // 0x20fe6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F658u;
    if (runtime->hasFunction(0x20F658u)) {
        auto targetFn = runtime->lookupFunction(0x20F658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE70u; }
        if (ctx->pc != 0x20FE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F658_0x20f658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE70u; }
        if (ctx->pc != 0x20FE70u) { return; }
    }
    ctx->pc = 0x20FE70u;
label_20fe70:
    // 0x20fe70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20fe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe74: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20FE74u;
    {
        const bool branch_taken_0x20fe74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20FE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE74u;
            // 0x20fe78: 0x40782d  daddu       $t7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe74) {
            ctx->pc = 0x20FE88u;
            goto label_20fe88;
        }
    }
    ctx->pc = 0x20FE7Cu;
    // 0x20fe7c: 0xc083f2c  jal         func_20FCB0
    ctx->pc = 0x20FE7Cu;
    SET_GPR_U32(ctx, 31, 0x20FE84u);
    ctx->pc = 0x20FCB0u;
    if (runtime->hasFunction(0x20FCB0u)) {
        auto targetFn = runtime->lookupFunction(0x20FCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE84u; }
        if (ctx->pc != 0x20FE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FCB0_0x20fcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE84u; }
        if (ctx->pc != 0x20FE84u) { return; }
    }
    ctx->pc = 0x20FE84u;
label_20fe84:
    // 0x20fe84: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x20fe84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20fe88:
    // 0x20fe88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20fe88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fe8c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x20fe8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fe94: 0x3e00008  jr          $ra
    ctx->pc = 0x20FE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FE94u;
            // 0x20fe98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FE9Cu;
    // 0x20fe9c: 0x0  nop
    ctx->pc = 0x20fe9cu;
    // NOP
    ctx->pc = 0x20fea0u;
}
