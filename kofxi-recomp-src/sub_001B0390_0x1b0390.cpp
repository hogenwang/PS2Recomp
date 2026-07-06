#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0390
// Address: 0x1b0390 - 0x1b0430
void sub_001B0390_0x1b0390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0390_0x1b0390");
#endif

    switch (ctx->pc) {
        case 0x1b03c4u: goto label_1b03c4;
        case 0x1b03ccu: goto label_1b03cc;
        case 0x1b03e8u: goto label_1b03e8;
        case 0x1b03fcu: goto label_1b03fc;
        case 0x1b0414u: goto label_1b0414;
        default: break;
    }

    ctx->pc = 0x1b0390u;

    // 0x1b0390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0394: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b0394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b0398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b039c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b039cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b03a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b03a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b03a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b03a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b03acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b03b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b03b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b03bc: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B03BCu;
    SET_GPR_U32(ctx, 31, 0x1B03C4u);
    ctx->pc = 0x1B03C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03BCu;
            // 0x1b03c0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03C4u; }
        if (ctx->pc != 0x1B03C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03C4u; }
        if (ctx->pc != 0x1B03C4u) { return; }
    }
    ctx->pc = 0x1B03C4u;
label_1b03c4:
    // 0x1b03c4: 0xc06bfa6  jal         func_1AFE98
    ctx->pc = 0x1B03C4u;
    SET_GPR_U32(ctx, 31, 0x1B03CCu);
    ctx->pc = 0x1AFE98u;
    if (runtime->hasFunction(0x1AFE98u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03CCu; }
        if (ctx->pc != 0x1B03CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFE98_0x1afe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03CCu; }
        if (ctx->pc != 0x1B03CCu) { return; }
    }
    ctx->pc = 0x1B03CCu;
label_1b03cc:
    // 0x1b03cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b03ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b03d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b03d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B03D8u;
    {
        const bool branch_taken_0x1b03d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B03DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03D8u;
            // 0x1b03dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03d8) {
            ctx->pc = 0x1B03FCu;
            goto label_1b03fc;
        }
    }
    ctx->pc = 0x1B03E0u;
    // 0x1b03e0: 0xc06c09c  jal         func_1B0270
    ctx->pc = 0x1B03E0u;
    SET_GPR_U32(ctx, 31, 0x1B03E8u);
    ctx->pc = 0x1B0270u;
    if (runtime->hasFunction(0x1B0270u)) {
        auto targetFn = runtime->lookupFunction(0x1B0270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03E8u; }
        if (ctx->pc != 0x1B03E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0270_0x1b0270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03E8u; }
        if (ctx->pc != 0x1B03E8u) { return; }
    }
    ctx->pc = 0x1B03E8u;
label_1b03e8:
    // 0x1b03e8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B03E8u;
    {
        const bool branch_taken_0x1b03e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03E8u;
            // 0x1b03ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03e8) {
            ctx->pc = 0x1B0400u;
            goto label_1b0400;
        }
    }
    ctx->pc = 0x1B03F0u;
    // 0x1b03f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b03f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b03f4: 0xc06c134  jal         func_1B04D0
    ctx->pc = 0x1B03F4u;
    SET_GPR_U32(ctx, 31, 0x1B03FCu);
    ctx->pc = 0x1B03F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03F4u;
            // 0x1b03f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B04D0u;
    if (runtime->hasFunction(0x1B04D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B04D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03FCu; }
        if (ctx->pc != 0x1B03FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B04D0_0x1b04d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03FCu; }
        if (ctx->pc != 0x1B03FCu) { return; }
    }
    ctx->pc = 0x1B03FCu;
label_1b03fc:
    // 0x1b03fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b03fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0400:
    // 0x1b0400: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b0400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0404: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b0404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b040c: 0xc06bb22  jal         func_1AEC88
    ctx->pc = 0x1B040Cu;
    SET_GPR_U32(ctx, 31, 0x1B0414u);
    ctx->pc = 0x1B0410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B040Cu;
            // 0x1b0410: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (runtime->hasFunction(0x1AEC88u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0414u; }
        if (ctx->pc != 0x1B0414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC88_0x1aec88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0414u; }
        if (ctx->pc != 0x1B0414u) { return; }
    }
    ctx->pc = 0x1B0414u;
label_1b0414:
    // 0x1b0414: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b041c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b041cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0424: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0428: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B042Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0428u;
            // 0x1b042c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0430u;
    ctx->pc = 0x1b0430u;
}
