#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9408
// Address: 0x1b9408 - 0x1b9490
void sub_001B9408_0x1b9408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9408_0x1b9408");
#endif

    switch (ctx->pc) {
        case 0x1b9440u: goto label_1b9440;
        case 0x1b9464u: goto label_1b9464;
        case 0x1b9474u: goto label_1b9474;
        default: break;
    }

    ctx->pc = 0x1b9408u;

    // 0x1b9408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b940c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B940Cu;
    {
        const bool branch_taken_0x1b940c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b940c) {
            ctx->pc = 0x1B9410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B940Cu;
            // 0x1b9410: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9420u;
            goto label_1b9420;
        }
    }
    ctx->pc = 0x1B9414u;
    // 0x1b9414: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b9414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b9418: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9418u;
    {
        const bool branch_taken_0x1b9418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9418u;
            // 0x1b941c: 0x2402176a  addiu       $v0, $zero, 0x176A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5994));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9418) {
            ctx->pc = 0x1B9430u;
            goto label_1b9430;
        }
    }
    ctx->pc = 0x1B9420u;
label_1b9420:
    // 0x1b9420: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9420u;
    {
        const bool branch_taken_0x1b9420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b9420) {
            ctx->pc = 0x1B9424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9420u;
            // 0x1b9424: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B9438u;
            goto label_1b9438;
        }
    }
    ctx->pc = 0x1B9428u;
    // 0x1b9428: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b9428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b942c: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x1b942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_1b9430:
    // 0x1b9430: 0xac62c3b0  sw          $v0, -0x3C50($v1)
    ctx->pc = 0x1b9430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951856), GPR_U32(ctx, 2));
    // 0x1b9434: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b9434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b9438:
    // 0x1b9438: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9438u;
            // 0x1b943c: 0xac44c364  sw          $a0, -0x3C9C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951780), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9440u;
label_1b9440:
    // 0x1b9440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b944c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9450: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9454: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b9458: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b9458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b945c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B945Cu;
    SET_GPR_U32(ctx, 31, 0x1B9464u);
    ctx->pc = 0x1B9460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B945Cu;
            // 0x1b9460: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9464u; }
        if (ctx->pc != 0x1B9464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9464u; }
        if (ctx->pc != 0x1B9464u) { return; }
    }
    ctx->pc = 0x1B9464u;
label_1b9464:
    // 0x1b9464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b946c: 0xc06e524  jal         func_1B9490
    ctx->pc = 0x1B946Cu;
    SET_GPR_U32(ctx, 31, 0x1B9474u);
    ctx->pc = 0x1B9470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B946Cu;
            // 0x1b9470: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9490u;
    if (runtime->hasFunction(0x1B9490u)) {
        auto targetFn = runtime->lookupFunction(0x1B9490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9474u; }
        if (ctx->pc != 0x1B9474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9490_0x1b9490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9474u; }
        if (ctx->pc != 0x1B9474u) { return; }
    }
    ctx->pc = 0x1B9474u;
label_1b9474:
    // 0x1b9474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b947c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b947cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9480: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b9480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9484: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B9484u;
    ctx->pc = 0x1B9488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9484u;
            // 0x1b9488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B948Cu;
    // 0x1b948c: 0x0  nop
    ctx->pc = 0x1b948cu;
    // NOP
    ctx->pc = 0x1b9490u;
}
