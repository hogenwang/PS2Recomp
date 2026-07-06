#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189760
// Address: 0x189760 - 0x1897d0
void sub_00189760_0x189760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189760_0x189760");
#endif

    switch (ctx->pc) {
        case 0x189794u: goto label_189794;
        case 0x1897acu: goto label_1897ac;
        default: break;
    }

    ctx->pc = 0x189760u;

    // 0x189760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18976c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189770: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x189770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189774: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x189774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18977c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18977cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189780: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x189780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189784: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x189784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18978c: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x18978Cu;
    SET_GPR_U32(ctx, 31, 0x189794u);
    ctx->pc = 0x189790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18978Cu;
            // 0x189790: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (runtime->hasFunction(0x160F80u)) {
        auto targetFn = runtime->lookupFunction(0x160F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189794u; }
        if (ctx->pc != 0x189794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F80_0x160f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189794u; }
        if (ctx->pc != 0x189794u) { return; }
    }
    ctx->pc = 0x189794u;
label_189794:
    // 0x189794: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x189794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189798: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x189798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18979c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18979cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1897a4: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x1897A4u;
    SET_GPR_U32(ctx, 31, 0x1897ACu);
    ctx->pc = 0x1897A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1897A4u;
            // 0x1897a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (runtime->hasFunction(0x160F80u)) {
        auto targetFn = runtime->lookupFunction(0x160F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897ACu; }
        if (ctx->pc != 0x1897ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160F80_0x160f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897ACu; }
        if (ctx->pc != 0x1897ACu) { return; }
    }
    ctx->pc = 0x1897ACu;
label_1897ac:
    // 0x1897ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1897acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1897b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1897b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1897b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1897b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1897b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1897b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1897bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1897BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1897C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1897BCu;
            // 0x1897c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1897C4u;
    // 0x1897c4: 0x0  nop
    ctx->pc = 0x1897c4u;
    // NOP
    // 0x1897c8: 0x0  nop
    ctx->pc = 0x1897c8u;
    // NOP
    // 0x1897cc: 0x0  nop
    ctx->pc = 0x1897ccu;
    // NOP
    ctx->pc = 0x1897d0u;
}
