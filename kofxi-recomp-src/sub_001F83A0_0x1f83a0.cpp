#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F83A0
// Address: 0x1f83a0 - 0x1f85c0
void sub_001F83A0_0x1f83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F83A0_0x1f83a0");
#endif

    switch (ctx->pc) {
        case 0x1f83f4u: goto label_1f83f4;
        case 0x1f8418u: goto label_1f8418;
        case 0x1f8440u: goto label_1f8440;
        case 0x1f8488u: goto label_1f8488;
        case 0x1f849cu: goto label_1f849c;
        case 0x1f84c0u: goto label_1f84c0;
        case 0x1f84d4u: goto label_1f84d4;
        case 0x1f84e8u: goto label_1f84e8;
        case 0x1f8500u: goto label_1f8500;
        case 0x1f8514u: goto label_1f8514;
        case 0x1f8538u: goto label_1f8538;
        case 0x1f85a8u: goto label_1f85a8;
        default: break;
    }

    ctx->pc = 0x1f83a0u;

    // 0x1f83a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f83a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f83a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f83ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f83acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f83b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f83b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f83b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f83b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f83b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f83bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f83bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f83c0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1f83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f83c4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F83C4u;
    {
        const bool branch_taken_0x1f83c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F83C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83C4u;
            // 0x1f83c8: 0x26250950  addiu       $a1, $s1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83c4) {
            ctx->pc = 0x1F83FCu;
            goto label_1f83fc;
        }
    }
    ctx->pc = 0x1F83CCu;
    // 0x1f83cc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1f83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f83d0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1f83d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f83d4: 0x10530032  beq         $v0, $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F83D4u;
    {
        const bool branch_taken_0x1f83d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1F83D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83D4u;
            // 0x1f83d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83d4) {
            ctx->pc = 0x1F84A0u;
            goto label_1f84a0;
        }
    }
    ctx->pc = 0x1F83DCu;
    // 0x1f83dc: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1f83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1f83e0: 0x5053002f  beql        $v0, $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F83E0u;
    {
        const bool branch_taken_0x1f83e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1f83e0) {
            ctx->pc = 0x1F83E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83E0u;
            // 0x1f83e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F84A0u;
            goto label_1f84a0;
        }
    }
    ctx->pc = 0x1F83E8u;
    // 0x1f83e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f83e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83ec: 0xc07ef46  jal         func_1FBD18
    ctx->pc = 0x1F83ECu;
    SET_GPR_U32(ctx, 31, 0x1F83F4u);
    ctx->pc = 0x1F83F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83ECu;
            // 0x1f83f0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD18u;
    if (runtime->hasFunction(0x1FBD18u)) {
        auto targetFn = runtime->lookupFunction(0x1FBD18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F83F4u; }
        if (ctx->pc != 0x1F83F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBD18_0x1fbd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F83F4u; }
        if (ctx->pc != 0x1F83F4u) { return; }
    }
    ctx->pc = 0x1F83F4u;
label_1f83f4:
    // 0x1f83f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F83F4u;
    {
        const bool branch_taken_0x1f83f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83F4u;
            // 0x1f83f8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83f4) {
            ctx->pc = 0x1F8408u;
            goto label_1f8408;
        }
    }
    ctx->pc = 0x1F83FCu;
label_1f83fc:
    // 0x1f83fc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F83FCu;
    {
        const bool branch_taken_0x1f83fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F83FCu;
            // 0x1f8400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83fc) {
            ctx->pc = 0x1F84A0u;
            goto label_1f84a0;
        }
    }
    ctx->pc = 0x1F8404u;
    // 0x1f8404: 0x0  nop
    ctx->pc = 0x1f8404u;
    // NOP
label_1f8408:
    // 0x1f8408: 0x4600025  bltz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F8408u;
    {
        const bool branch_taken_0x1f8408 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F840Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8408u;
            // 0x1f840c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8408) {
            ctx->pc = 0x1F84A0u;
            goto label_1f84a0;
        }
    }
    ctx->pc = 0x1F8410u;
    // 0x1f8410: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F8410u;
    SET_GPR_U32(ctx, 31, 0x1F8418u);
    ctx->pc = 0x1F8414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8410u;
            // 0x1f8414: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8418u; }
        if (ctx->pc != 0x1F8418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8418u; }
        if (ctx->pc != 0x1F8418u) { return; }
    }
    ctx->pc = 0x1F8418u;
label_1f8418:
    // 0x1f8418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f841c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8420: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F8420u;
    {
        const bool branch_taken_0x1f8420 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8420u;
            // 0x1f8424: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8420) {
            ctx->pc = 0x1F848Cu;
            goto label_1f848c;
        }
    }
    ctx->pc = 0x1F8428u;
    // 0x1f8428: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f842c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f842cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8430: 0x24521540  addiu       $s2, $v0, 0x1540
    ctx->pc = 0x1f8430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5440));
    // 0x1f8434: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f8434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f8438: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F8438u;
    SET_GPR_U32(ctx, 31, 0x1F8440u);
    ctx->pc = 0x1F843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8438u;
            // 0x1f843c: 0x8e5001b8  lw          $s0, 0x1B8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8440u; }
        if (ctx->pc != 0x1F8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8440u; }
        if (ctx->pc != 0x1F8440u) { return; }
    }
    ctx->pc = 0x1F8440u;
label_1f8440:
    // 0x1f8440: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F8440u;
    {
        const bool branch_taken_0x1f8440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1f8440) {
            ctx->pc = 0x1F8444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8440u;
            // 0x1f8444: 0x8e5001bc  lw          $s0, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8448u;
            goto label_1f8448;
        }
    }
    ctx->pc = 0x1F8448u;
label_1f8448:
    // 0x1f8448: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1f8448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1f844c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F844Cu;
    {
        const bool branch_taken_0x1f844c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f844c) {
            ctx->pc = 0x1F8450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F844Cu;
            // 0x1f8450: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8454u;
            goto label_1f8454;
        }
    }
    ctx->pc = 0x1F8454u;
label_1f8454:
    // 0x1f8454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f8454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f8458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f845c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1f845cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f8460: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1f8464: 0x1012  mflo        $v0
    ctx->pc = 0x1f8464u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f8468: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1f8468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1f846c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f846cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8470: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f8470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f8474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f8474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f8478: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f8478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f847c: 0x2470fc18  addiu       $s0, $v1, -0x3E8
    ctx->pc = 0x1f847cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
    // 0x1f8480: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1F8480u;
    SET_GPR_U32(ctx, 31, 0x1F8488u);
    ctx->pc = 0x1F8484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8480u;
            // 0x1f8484: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8488u; }
        if (ctx->pc != 0x1F8488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8488u; }
        if (ctx->pc != 0x1F8488u) { return; }
    }
    ctx->pc = 0x1F8488u;
label_1f8488:
    // 0x1f8488: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1f8488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f848c:
    // 0x1f848c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8490: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1f8490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f8494: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1F8494u;
    SET_GPR_U32(ctx, 31, 0x1F849Cu);
    ctx->pc = 0x1F8498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8494u;
            // 0x1f8498: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (runtime->hasFunction(0x1CFFB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CFFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F849Cu; }
        if (ctx->pc != 0x1F849Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFFB8_0x1cffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F849Cu; }
        if (ctx->pc != 0x1F849Cu) { return; }
    }
    ctx->pc = 0x1F849Cu;
label_1f849c:
    // 0x1f849c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f849cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f84a0:
    // 0x1f84a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f84a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f84a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f84a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f84a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f84ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f84acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f84b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f84b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f84b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F84B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F84B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84B4u;
            // 0x1f84b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F84BCu;
    // 0x1f84bc: 0x0  nop
    ctx->pc = 0x1f84bcu;
    // NOP
label_1f84c0:
    // 0x1f84c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f84c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f84c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f84c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f84c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f84c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f84cc: 0xc07e36c  jal         func_1F8DB0
    ctx->pc = 0x1F84CCu;
    SET_GPR_U32(ctx, 31, 0x1F84D4u);
    ctx->pc = 0x1F84D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84CCu;
            // 0x1f84d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DB0u;
    if (runtime->hasFunction(0x1F8DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84D4u; }
        if (ctx->pc != 0x1F84D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8DB0_0x1f8db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84D4u; }
        if (ctx->pc != 0x1F84D4u) { return; }
    }
    ctx->pc = 0x1F84D4u;
label_1f84d4:
    // 0x1f84d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F84D4u;
    {
        const bool branch_taken_0x1f84d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F84D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84D4u;
            // 0x1f84d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84d4) {
            ctx->pc = 0x1F84ECu;
            goto label_1f84ec;
        }
    }
    ctx->pc = 0x1F84DCu;
    // 0x1f84dc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f84e0: 0xc07e586  jal         func_1F9618
    ctx->pc = 0x1F84E0u;
    SET_GPR_U32(ctx, 31, 0x1F84E8u);
    ctx->pc = 0x1F84E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84E0u;
            // 0x1f84e4: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9618u;
    if (runtime->hasFunction(0x1F9618u)) {
        auto targetFn = runtime->lookupFunction(0x1F9618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84E8u; }
        if (ctx->pc != 0x1F84E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9618_0x1f9618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F84E8u; }
        if (ctx->pc != 0x1F84E8u) { return; }
    }
    ctx->pc = 0x1F84E8u;
label_1f84e8:
    // 0x1f84e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f84e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f84ec:
    // 0x1f84ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f84ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f84f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f84f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f84f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F84F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F84F4u;
            // 0x1f84f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F84FCu;
    // 0x1f84fc: 0x0  nop
    ctx->pc = 0x1f84fcu;
    // NOP
label_1f8500:
    // 0x1f8500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8504: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f8504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f8508: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f850c: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F850Cu;
    SET_GPR_U32(ctx, 31, 0x1F8514u);
    ctx->pc = 0x1F8510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F850Cu;
            // 0x1f8510: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8514u; }
        if (ctx->pc != 0x1F8514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8514u; }
        if (ctx->pc != 0x1F8514u) { return; }
    }
    ctx->pc = 0x1F8514u;
label_1f8514:
    // 0x1f8514: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8518: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f851c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f8520: 0x2446174c  addiu       $a2, $v0, 0x174C
    ctx->pc = 0x1f8520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    // 0x1f8524: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f8524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f8528: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1f8528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f852c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8530: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f8534: 0x0  nop
    ctx->pc = 0x1f8534u;
    // NOP
label_1f8538:
    // 0x1f8538: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F8538u;
    {
        const bool branch_taken_0x1f8538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8538u;
            // 0x1f853c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8538) {
            ctx->pc = 0x1F8574u;
            goto label_1f8574;
        }
    }
    ctx->pc = 0x1F8540u;
    // 0x1f8540: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1f8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1f8544: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8544u;
    {
        const bool branch_taken_0x1f8544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8544u;
            // 0x1f8548: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8544) {
            ctx->pc = 0x1F8560u;
            goto label_1f8560;
        }
    }
    ctx->pc = 0x1F854Cu;
    // 0x1f854c: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F854Cu;
    {
        const bool branch_taken_0x1f854c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1F8550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F854Cu;
            // 0x1f8550: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f854c) {
            ctx->pc = 0x1F8560u;
            goto label_1f8560;
        }
    }
    ctx->pc = 0x1F8554u;
    // 0x1f8554: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8554u;
    {
        const bool branch_taken_0x1f8554 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8554u;
            // 0x1f8558: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8554) {
            ctx->pc = 0x1F8560u;
            goto label_1f8560;
        }
    }
    ctx->pc = 0x1F855Cu;
    // 0x1f855c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1f855cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f8560:
    // 0x1f8560: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f8564: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1f8564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f8568: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f8568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f856c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f856cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f8570: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f8570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f8574:
    // 0x1f8574: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f8574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f8578: 0x4a3ffef  bgezl       $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F8578u;
    {
        const bool branch_taken_0x1f8578 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1f8578) {
            ctx->pc = 0x1F857Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8578u;
            // 0x1f857c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8538;
        }
    }
    ctx->pc = 0x1F8580u;
    // 0x1f8580: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f8580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f8584: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8584u;
    {
        const bool branch_taken_0x1f8584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8584u;
            // 0x1f8588: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8584) {
            ctx->pc = 0x1F8598u;
            goto label_1f8598;
        }
    }
    ctx->pc = 0x1F858Cu;
    // 0x1f858c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1f858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8590: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8594: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1f8594u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1f8598:
    // 0x1f8598: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f859c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f859cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f85a0: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F85A0u;
    SET_GPR_U32(ctx, 31, 0x1F85A8u);
    ctx->pc = 0x1F85A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85A0u;
            // 0x1f85a4: 0xac5016d8  sw          $s0, 0x16D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5848), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F85A8u; }
        if (ctx->pc != 0x1F85A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F85A8u; }
        if (ctx->pc != 0x1F85A8u) { return; }
    }
    ctx->pc = 0x1F85A8u;
label_1f85a8:
    // 0x1f85a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f85a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f85ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f85acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f85b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f85b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F85B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F85B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F85B4u;
            // 0x1f85b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F85BCu;
    // 0x1f85bc: 0x0  nop
    ctx->pc = 0x1f85bcu;
    // NOP
    ctx->pc = 0x1f85c0u;
}
