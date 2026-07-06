#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC438
// Address: 0x1cc438 - 0x1cc4c8
void sub_001CC438_0x1cc438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC438_0x1cc438");
#endif

    switch (ctx->pc) {
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b4u: goto label_1cc4b4;
        default: break;
    }

    ctx->pc = 0x1cc438u;

    // 0x1cc438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc43c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC43Cu;
    {
        const bool branch_taken_0x1cc43c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC43Cu;
            // 0x1cc440: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc43c) {
            ctx->pc = 0x1CC460u;
            goto label_1cc460;
        }
    }
    ctx->pc = 0x1CC444u;
    // 0x1cc444: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc448: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc450: 0x2484bbe0  addiu       $a0, $a0, -0x4420
    ctx->pc = 0x1cc450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949856));
    // 0x1cc454: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x1cc454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    // 0x1cc458: 0x8073006  j           func_1CC018
    ctx->pc = 0x1CC458u;
    ctx->pc = 0x1CC45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC458u;
            // 0x1cc45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    if (runtime->hasFunction(0x1CC018u)) {
        auto targetFn = runtime->lookupFunction(0x1CC018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CC460u;
label_1cc460:
    // 0x1cc460: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1cc460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cc464: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC464u;
    {
        const bool branch_taken_0x1cc464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC464u;
            // 0x1cc468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc464) {
            ctx->pc = 0x1CC488u;
            goto label_1cc488;
        }
    }
    ctx->pc = 0x1CC46Cu;
    // 0x1cc46c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc470: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc474: 0x2484bbf0  addiu       $a0, $a0, -0x4410
    ctx->pc = 0x1cc474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949872));
    // 0x1cc478: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1cc478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
    // 0x1cc47c: 0x8073006  j           func_1CC018
    ctx->pc = 0x1CC47Cu;
    ctx->pc = 0x1CC480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC47Cu;
            // 0x1cc480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    if (runtime->hasFunction(0x1CC018u)) {
        auto targetFn = runtime->lookupFunction(0x1CC018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CC484u;
    // 0x1cc484: 0x0  nop
    ctx->pc = 0x1cc484u;
    // NOP
label_1cc488:
    // 0x1cc488: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x1cc488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x1cc48c: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x1cc48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x1cc490: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC490u;
            // 0x1cc494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC498u;
label_1cc498:
    // 0x1cc498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc4a4: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC4A4u;
    SET_GPR_U32(ctx, 31, 0x1CC4ACu);
    ctx->pc = 0x1CC4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4A4u;
            // 0x1cc4a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4ACu; }
        if (ctx->pc != 0x1CC4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4ACu; }
        if (ctx->pc != 0x1CC4ACu) { return; }
    }
    ctx->pc = 0x1CC4ACu;
label_1cc4ac:
    // 0x1cc4ac: 0xc073132  jal         func_1CC4C8
    ctx->pc = 0x1CC4ACu;
    SET_GPR_U32(ctx, 31, 0x1CC4B4u);
    ctx->pc = 0x1CC4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4ACu;
            // 0x1cc4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC4C8u;
    if (runtime->hasFunction(0x1CC4C8u)) {
        auto targetFn = runtime->lookupFunction(0x1CC4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4B4u; }
        if (ctx->pc != 0x1CC4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC4C8_0x1cc4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4B4u; }
        if (ctx->pc != 0x1CC4B4u) { return; }
    }
    ctx->pc = 0x1CC4B4u;
label_1cc4b4:
    // 0x1cc4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4bc: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CC4BCu;
    ctx->pc = 0x1CC4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4BCu;
            // 0x1cc4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CC4C4u;
    // 0x1cc4c4: 0x0  nop
    ctx->pc = 0x1cc4c4u;
    // NOP
    ctx->pc = 0x1cc4c8u;
}
