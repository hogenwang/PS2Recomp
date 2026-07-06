#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5FA0
// Address: 0x1c5fa0 - 0x1c6018
void sub_001C5FA0_0x1c5fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5FA0_0x1c5fa0");
#endif

    switch (ctx->pc) {
        case 0x1c5fd4u: goto label_1c5fd4;
        case 0x1c5fecu: goto label_1c5fec;
        case 0x1c5ff4u: goto label_1c5ff4;
        default: break;
    }

    ctx->pc = 0x1c5fa0u;

    // 0x1c5fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5fb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c5fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c5fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c5fb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c5fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c5fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c5fc0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1c5fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c5fc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c5fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c5fcc: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C5FCCu;
    SET_GPR_U32(ctx, 31, 0x1C5FD4u);
    ctx->pc = 0x1C5FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FCCu;
            // 0x1c5fd0: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (runtime->hasFunction(0x1C6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FD4u; }
        if (ctx->pc != 0x1C5FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AB8_0x1c6ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FD4u; }
        if (ctx->pc != 0x1C5FD4u) { return; }
    }
    ctx->pc = 0x1C5FD4u;
label_1c5fd4:
    // 0x1c5fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c5fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c5fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fe0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c5fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fe4: 0xc071806  jal         func_1C6018
    ctx->pc = 0x1C5FE4u;
    SET_GPR_U32(ctx, 31, 0x1C5FECu);
    ctx->pc = 0x1C5FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FE4u;
            // 0x1c5fe8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6018u;
    if (runtime->hasFunction(0x1C6018u)) {
        auto targetFn = runtime->lookupFunction(0x1C6018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FECu; }
        if (ctx->pc != 0x1C5FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6018_0x1c6018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FECu; }
        if (ctx->pc != 0x1C5FECu) { return; }
    }
    ctx->pc = 0x1C5FECu;
label_1c5fec:
    // 0x1c5fec: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C5FECu;
    SET_GPR_U32(ctx, 31, 0x1C5FF4u);
    ctx->pc = 0x1C5FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FECu;
            // 0x1c5ff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (runtime->hasFunction(0x1C6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FF4u; }
        if (ctx->pc != 0x1C5FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FF4u; }
        if (ctx->pc != 0x1C5FF4u) { return; }
    }
    ctx->pc = 0x1C5FF4u;
label_1c5ff4:
    // 0x1c5ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5ff8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c5ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ffc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6008: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c6008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c600c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c600cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6010: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6010u;
            // 0x1c6014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6018u;
    ctx->pc = 0x1c6018u;
}
