#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B420
// Address: 0x13b420 - 0x13b460
void sub_0013B420_0x13b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B420_0x13b420");
#endif

    switch (ctx->pc) {
        case 0x13b43cu: goto label_13b43c;
        case 0x13b444u: goto label_13b444;
        case 0x13b450u: goto label_13b450;
        default: break;
    }

    ctx->pc = 0x13b420u;

    // 0x13b420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b424: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13b424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13b428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13b42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b434: 0xc04eca4  jal         func_13B290
    ctx->pc = 0x13B434u;
    SET_GPR_U32(ctx, 31, 0x13B43Cu);
    ctx->pc = 0x13B438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B434u;
            // 0x13b438: 0xa0405bf0  sb          $zero, 0x5BF0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23536), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B290u;
    if (runtime->hasFunction(0x13B290u)) {
        auto targetFn = runtime->lookupFunction(0x13B290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B43Cu; }
        if (ctx->pc != 0x13B43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B290_0x13b290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B43Cu; }
        if (ctx->pc != 0x13B43Cu) { return; }
    }
    ctx->pc = 0x13B43Cu;
label_13b43c:
    // 0x13b43c: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x13B43Cu;
    SET_GPR_U32(ctx, 31, 0x13B444u);
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B444u; }
        if (ctx->pc != 0x13B444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B360_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B444u; }
        if (ctx->pc != 0x13B444u) { return; }
    }
    ctx->pc = 0x13B444u;
label_13b444:
    // 0x13b444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b448: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x13B448u;
    SET_GPR_U32(ctx, 31, 0x13B450u);
    ctx->pc = 0x13B44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B448u;
            // 0x13b44c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B450u; }
        if (ctx->pc != 0x13B450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B450u; }
        if (ctx->pc != 0x13B450u) { return; }
    }
    ctx->pc = 0x13B450u;
label_13b450:
    // 0x13b450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b458: 0x3e00008  jr          $ra
    ctx->pc = 0x13B458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B458u;
            // 0x13b45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B460u;
    ctx->pc = 0x13b460u;
}
