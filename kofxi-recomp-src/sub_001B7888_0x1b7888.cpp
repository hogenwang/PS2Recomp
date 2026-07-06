#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7888
// Address: 0x1b7888 - 0x1b7910
void sub_001B7888_0x1b7888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7888_0x1b7888");
#endif

    switch (ctx->pc) {
        case 0x1b789cu: goto label_1b789c;
        case 0x1b78b8u: goto label_1b78b8;
        case 0x1b78dcu: goto label_1b78dc;
        case 0x1b78ecu: goto label_1b78ec;
        case 0x1b78f4u: goto label_1b78f4;
        default: break;
    }

    ctx->pc = 0x1b7888u;

    // 0x1b7888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b788c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7894: 0xc06db42  jal         func_1B6D08
    ctx->pc = 0x1B7894u;
    SET_GPR_U32(ctx, 31, 0x1B789Cu);
    ctx->pc = 0x1B7898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7894u;
            // 0x1b7898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (runtime->hasFunction(0x1B6D08u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B789Cu; }
        if (ctx->pc != 0x1B789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D08_0x1b6d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B789Cu; }
        if (ctx->pc != 0x1B789Cu) { return; }
    }
    ctx->pc = 0x1B789Cu;
label_1b789c:
    // 0x1b789c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b78a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b78a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b78a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b78a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b78a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b78ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B78ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B78B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78ACu;
            // 0x1b78b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B78B4u;
    // 0x1b78b4: 0x0  nop
    ctx->pc = 0x1b78b4u;
    // NOP
label_1b78b8:
    // 0x1b78b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b78b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b78bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b78bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b78c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b78c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b78c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b78c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b78c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b78ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b78d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b78d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b78d4: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B78D4u;
    SET_GPR_U32(ctx, 31, 0x1B78DCu);
    ctx->pc = 0x1B78D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78D4u;
            // 0x1b78d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78DCu; }
        if (ctx->pc != 0x1B78DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78DCu; }
        if (ctx->pc != 0x1B78DCu) { return; }
    }
    ctx->pc = 0x1B78DCu;
label_1b78dc:
    // 0x1b78dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b78dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b78e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78e4: 0xc06de44  jal         func_1B7910
    ctx->pc = 0x1B78E4u;
    SET_GPR_U32(ctx, 31, 0x1B78ECu);
    ctx->pc = 0x1B78E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78E4u;
            // 0x1b78e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7910u;
    if (runtime->hasFunction(0x1B7910u)) {
        auto targetFn = runtime->lookupFunction(0x1B7910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78ECu; }
        if (ctx->pc != 0x1B78ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7910_0x1b7910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78ECu; }
        if (ctx->pc != 0x1B78ECu) { return; }
    }
    ctx->pc = 0x1B78ECu;
label_1b78ec:
    // 0x1b78ec: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B78ECu;
    SET_GPR_U32(ctx, 31, 0x1B78F4u);
    ctx->pc = 0x1B78F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78ECu;
            // 0x1b78f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78F4u; }
        if (ctx->pc != 0x1B78F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8168_0x1b8168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78F4u; }
        if (ctx->pc != 0x1B78F4u) { return; }
    }
    ctx->pc = 0x1B78F4u;
label_1b78f4:
    // 0x1b78f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b78f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b78f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b78f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b78fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7904: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7908: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B790Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7908u;
            // 0x1b790c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7910u;
    ctx->pc = 0x1b7910u;
}
