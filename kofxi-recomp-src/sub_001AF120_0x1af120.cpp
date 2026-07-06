#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF120
// Address: 0x1af120 - 0x1af1b0
void sub_001AF120_0x1af120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF120_0x1af120");
#endif

    switch (ctx->pc) {
        case 0x1af148u: goto label_1af148;
        case 0x1af174u: goto label_1af174;
        case 0x1af188u: goto label_1af188;
        case 0x1af190u: goto label_1af190;
        default: break;
    }

    ctx->pc = 0x1af120u;

    // 0x1af120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af124: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1af124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1af128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af12c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1af12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1af130: 0x2508026f  addiu       $t0, $t0, 0x26F
    ctx->pc = 0x1af130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 623));
    // 0x1af134: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x1af134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1af138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af13c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1af13cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1af140: 0x806bcf2  j           func_1AF3C8
    ctx->pc = 0x1AF140u;
    ctx->pc = 0x1AF144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF140u;
            // 0x1af144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3C8u;
    if (runtime->hasFunction(0x1AF3C8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF3C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AF3C8_0x1af3c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF148u;
label_1af148:
    // 0x1af148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af158: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af15c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af160: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1af160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af164: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1af164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1af168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af16c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF16Cu;
    SET_GPR_U32(ctx, 31, 0x1AF174u);
    ctx->pc = 0x1AF170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF16Cu;
            // 0x1af170: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF174u; }
        if (ctx->pc != 0x1AF174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF174u; }
        if (ctx->pc != 0x1AF174u) { return; }
    }
    ctx->pc = 0x1AF174u;
label_1af174:
    // 0x1af174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af17c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1af17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af180: 0xc06bc6c  jal         func_1AF1B0
    ctx->pc = 0x1AF180u;
    SET_GPR_U32(ctx, 31, 0x1AF188u);
    ctx->pc = 0x1AF184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF180u;
            // 0x1af184: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1B0u;
    if (runtime->hasFunction(0x1AF1B0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF188u; }
        if (ctx->pc != 0x1AF188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF1B0_0x1af1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF188u; }
        if (ctx->pc != 0x1AF188u) { return; }
    }
    ctx->pc = 0x1AF188u;
label_1af188:
    // 0x1af188: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF188u;
    SET_GPR_U32(ctx, 31, 0x1AF190u);
    ctx->pc = 0x1AF18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF188u;
            // 0x1af18c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF190u; }
        if (ctx->pc != 0x1AF190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF190u; }
        if (ctx->pc != 0x1AF190u) { return; }
    }
    ctx->pc = 0x1AF190u;
label_1af190:
    // 0x1af190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af194: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af1a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1af1a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af1a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1A8u;
            // 0x1af1ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF1B0u;
    ctx->pc = 0x1af1b0u;
}
