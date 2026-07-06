#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEE18
// Address: 0x1aee18 - 0x1aeea0
void sub_001AEE18_0x1aee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEE18_0x1aee18");
#endif

    switch (ctx->pc) {
        case 0x1aee38u: goto label_1aee38;
        case 0x1aee64u: goto label_1aee64;
        case 0x1aee78u: goto label_1aee78;
        case 0x1aee80u: goto label_1aee80;
        default: break;
    }

    ctx->pc = 0x1aee18u;

    // 0x1aee18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aee1c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1aee1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aee24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aee2c: 0x806bba8  j           func_1AEEA0
    ctx->pc = 0x1AEE2Cu;
    ctx->pc = 0x1AEE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE2Cu;
            // 0x1aee30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (runtime->hasFunction(0x1AEEA0u)) {
        auto targetFn = runtime->lookupFunction(0x1AEEA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AEEA0_0x1aeea0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AEE34u;
    // 0x1aee34: 0x0  nop
    ctx->pc = 0x1aee34u;
    // NOP
label_1aee38:
    // 0x1aee38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aee3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aee40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aee40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aee48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aee48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aee50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aee50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aee58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aee5c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AEE5Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE64u);
    ctx->pc = 0x1AEE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE5Cu;
            // 0x1aee60: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE64u; }
        if (ctx->pc != 0x1AEE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE64u; }
        if (ctx->pc != 0x1AEE64u) { return; }
    }
    ctx->pc = 0x1AEE64u;
label_1aee64:
    // 0x1aee64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aee68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aee6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee70: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1AEE70u;
    SET_GPR_U32(ctx, 31, 0x1AEE78u);
    ctx->pc = 0x1AEE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE70u;
            // 0x1aee74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (runtime->hasFunction(0x1AEEA0u)) {
        auto targetFn = runtime->lookupFunction(0x1AEEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE78u; }
        if (ctx->pc != 0x1AEE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEEA0_0x1aeea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE78u; }
        if (ctx->pc != 0x1AEE78u) { return; }
    }
    ctx->pc = 0x1AEE78u;
label_1aee78:
    // 0x1aee78: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AEE78u;
    SET_GPR_U32(ctx, 31, 0x1AEE80u);
    ctx->pc = 0x1AEE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE78u;
            // 0x1aee7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE80u; }
        if (ctx->pc != 0x1AEE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEE80u; }
        if (ctx->pc != 0x1AEE80u) { return; }
    }
    ctx->pc = 0x1AEE80u;
label_1aee80:
    // 0x1aee80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aee80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aee84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aee84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aee88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aee8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aee90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aee90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aee94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aee98: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEE98u;
            // 0x1aee9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEEA0u;
    ctx->pc = 0x1aeea0u;
}
