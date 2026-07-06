#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7880
// Address: 0x1f7880 - 0x1f7930
void sub_001F7880_0x1f7880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7880_0x1f7880");
#endif

    switch (ctx->pc) {
        case 0x1f78a4u: goto label_1f78a4;
        case 0x1f78b8u: goto label_1f78b8;
        case 0x1f78c8u: goto label_1f78c8;
        case 0x1f78d8u: goto label_1f78d8;
        case 0x1f78f0u: goto label_1f78f0;
        case 0x1f7900u: goto label_1f7900;
        default: break;
    }

    ctx->pc = 0x1f7880u;

    // 0x1f7880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7884: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f788c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f788cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7890: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f7894: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7898: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f7898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f789c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F789Cu;
    SET_GPR_U32(ctx, 31, 0x1F78A4u);
    ctx->pc = 0x1F78A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F789Cu;
            // 0x1f78a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78A4u; }
        if (ctx->pc != 0x1F78A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78A4u; }
        if (ctx->pc != 0x1F78A4u) { return; }
    }
    ctx->pc = 0x1F78A4u;
label_1f78a4:
    // 0x1f78a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f78a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F78A8u;
    {
        const bool branch_taken_0x1f78a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78A8u;
            // 0x1f78ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78a8) {
            ctx->pc = 0x1F78D0u;
            goto label_1f78d0;
        }
    }
    ctx->pc = 0x1F78B0u;
    // 0x1f78b0: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x1F78B0u;
    SET_GPR_U32(ctx, 31, 0x1F78B8u);
    ctx->pc = 0x1FD9F0u;
    if (runtime->hasFunction(0x1FD9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78B8u; }
        if (ctx->pc != 0x1F78B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD9F0_0x1fd9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78B8u; }
        if (ctx->pc != 0x1F78B8u) { return; }
    }
    ctx->pc = 0x1F78B8u;
label_1f78b8:
    // 0x1f78b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f78b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f78bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f78c0: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1F78C0u;
    SET_GPR_U32(ctx, 31, 0x1F78C8u);
    ctx->pc = 0x1F78C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78C0u;
            // 0x1f78c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (runtime->hasFunction(0x1FDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78C8u; }
        if (ctx->pc != 0x1F78C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA20_0x1fda20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78C8u; }
        if (ctx->pc != 0x1F78C8u) { return; }
    }
    ctx->pc = 0x1F78C8u;
label_1f78c8:
    // 0x1f78c8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f78c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f78cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f78ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f78d0:
    // 0x1f78d0: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F78D0u;
    SET_GPR_U32(ctx, 31, 0x1F78D8u);
    ctx->pc = 0x1F78D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78D0u;
            // 0x1f78d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78D8u; }
        if (ctx->pc != 0x1F78D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78D8u; }
        if (ctx->pc != 0x1F78D8u) { return; }
    }
    ctx->pc = 0x1F78D8u;
label_1f78d8:
    // 0x1f78d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f78d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f78dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f78e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F78E0u;
    {
        const bool branch_taken_0x1f78e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78E0u;
            // 0x1f78e4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78e0) {
            ctx->pc = 0x1F7904u;
            goto label_1f7904;
        }
    }
    ctx->pc = 0x1F78E8u;
    // 0x1f78e8: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x1F78E8u;
    SET_GPR_U32(ctx, 31, 0x1F78F0u);
    ctx->pc = 0x1FD9F0u;
    if (runtime->hasFunction(0x1FD9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78F0u; }
        if (ctx->pc != 0x1F78F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD9F0_0x1fd9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F78F0u; }
        if (ctx->pc != 0x1F78F0u) { return; }
    }
    ctx->pc = 0x1F78F0u;
label_1f78f0:
    // 0x1f78f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f78f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f78f8: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1F78F8u;
    SET_GPR_U32(ctx, 31, 0x1F7900u);
    ctx->pc = 0x1F78FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78F8u;
            // 0x1f78fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (runtime->hasFunction(0x1FDA20u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7900u; }
        if (ctx->pc != 0x1F7900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA20_0x1fda20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7900u; }
        if (ctx->pc != 0x1F7900u) { return; }
    }
    ctx->pc = 0x1F7900u;
label_1f7900:
    // 0x1f7900: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1f7900u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1f7904:
    // 0x1f7904: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7904u;
    {
        const bool branch_taken_0x1f7904 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7904u;
            // 0x1f7908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7904) {
            ctx->pc = 0x1F7918u;
            goto label_1f7918;
        }
    }
    ctx->pc = 0x1F790Cu;
    // 0x1f790c: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F790Cu;
    {
        const bool branch_taken_0x1f790c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F790Cu;
            // 0x1f7910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f790c) {
            ctx->pc = 0x1F7918u;
            goto label_1f7918;
        }
    }
    ctx->pc = 0x1F7914u;
    // 0x1f7914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f7914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7918:
    // 0x1f7918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f791c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f791cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f7920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7924: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f7924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7928: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F792Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7928u;
            // 0x1f792c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7930u;
    ctx->pc = 0x1f7930u;
}
