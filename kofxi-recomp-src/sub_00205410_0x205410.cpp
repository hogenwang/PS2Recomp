#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205410
// Address: 0x205410 - 0x2054b0
void sub_00205410_0x205410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205410_0x205410");
#endif

    switch (ctx->pc) {
        case 0x20542cu: goto label_20542c;
        case 0x205430u: goto label_205430;
        case 0x205440u: goto label_205440;
        case 0x205460u: goto label_205460;
        default: break;
    }

    ctx->pc = 0x205410u;

    // 0x205410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x205410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x205414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x205414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x205418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20541c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205424: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205428: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x205428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20542c:
    // 0x20542c: 0x0  nop
    ctx->pc = 0x20542cu;
    // NOP
label_205430:
    // 0x205430: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x205430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x205434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x205434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205438: 0xc080ec0  jal         func_203B00
    ctx->pc = 0x205438u;
    SET_GPR_U32(ctx, 31, 0x205440u);
    ctx->pc = 0x20543Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205438u;
            // 0x20543c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203B00u;
    if (runtime->hasFunction(0x203B00u)) {
        auto targetFn = runtime->lookupFunction(0x203B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205440u; }
        if (ctx->pc != 0x205440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203B00_0x203b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205440u; }
        if (ctx->pc != 0x205440u) { return; }
    }
    ctx->pc = 0x205440u;
label_205440:
    // 0x205440: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x205440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x205444: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x205444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x205448: 0x8c42b7d0  lw          $v0, -0x4830($v0)
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948816)));
    // 0x20544c: 0x34210800  ori         $at, $at, 0x800
    ctx->pc = 0x20544cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2048);
    // 0x205450: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x205454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205458: 0xc08144c  jal         func_205130
    ctx->pc = 0x205458u;
    SET_GPR_U32(ctx, 31, 0x205460u);
    ctx->pc = 0x20545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205458u;
            // 0x20545c: 0x419021  addu        $s2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205130u;
    if (runtime->hasFunction(0x205130u)) {
        auto targetFn = runtime->lookupFunction(0x205130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205460u; }
        if (ctx->pc != 0x205460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205130_0x205130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205460u; }
        if (ctx->pc != 0x205460u) { return; }
    }
    ctx->pc = 0x205460u;
label_205460:
    // 0x205460: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x205460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205464: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x205468: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x205468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20546c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x205470: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x205470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x205474: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x205474u;
    {
        const bool branch_taken_0x205474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205474u;
            // 0x205478: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205474) {
            ctx->pc = 0x205430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205430;
        }
    }
    ctx->pc = 0x20547Cu;
    // 0x20547c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20547cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x205480: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x205480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x205484: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x205484u;
    {
        const bool branch_taken_0x205484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205484) {
            ctx->pc = 0x205488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205484u;
            // 0x205488: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20542Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20542c;
        }
    }
    ctx->pc = 0x20548Cu;
    // 0x20548c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20548cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x205490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20549c: 0x3e00008  jr          $ra
    ctx->pc = 0x20549Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2054A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20549Cu;
            // 0x2054a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2054A4u;
    // 0x2054a4: 0x0  nop
    ctx->pc = 0x2054a4u;
    // NOP
    // 0x2054a8: 0x0  nop
    ctx->pc = 0x2054a8u;
    // NOP
    // 0x2054ac: 0x0  nop
    ctx->pc = 0x2054acu;
    // NOP
    ctx->pc = 0x2054b0u;
}
