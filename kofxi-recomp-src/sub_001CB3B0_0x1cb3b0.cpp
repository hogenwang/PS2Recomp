#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB3B0
// Address: 0x1cb3b0 - 0x1cb408
void sub_001CB3B0_0x1cb3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB3B0_0x1cb3b0");
#endif

    switch (ctx->pc) {
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3ecu: goto label_1cb3ec;
        default: break;
    }

    ctx->pc = 0x1cb3b0u;

    // 0x1cb3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb3c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb3c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cb3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cb3cc: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CB3CCu;
    SET_GPR_U32(ctx, 31, 0x1CB3D4u);
    ctx->pc = 0x1CB3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3CCu;
            // 0x1cb3d0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3D4u; }
        if (ctx->pc != 0x1CB3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3D4u; }
        if (ctx->pc != 0x1CB3D4u) { return; }
    }
    ctx->pc = 0x1CB3D4u;
label_1cb3d4:
    // 0x1cb3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3dc: 0xc072d02  jal         func_1CB408
    ctx->pc = 0x1CB3DCu;
    SET_GPR_U32(ctx, 31, 0x1CB3E4u);
    ctx->pc = 0x1CB3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3DCu;
            // 0x1cb3e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB408u;
    if (runtime->hasFunction(0x1CB408u)) {
        auto targetFn = runtime->lookupFunction(0x1CB408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3E4u; }
        if (ctx->pc != 0x1CB3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB408_0x1cb408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3E4u; }
        if (ctx->pc != 0x1CB3E4u) { return; }
    }
    ctx->pc = 0x1CB3E4u;
label_1cb3e4:
    // 0x1cb3e4: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CB3E4u;
    SET_GPR_U32(ctx, 31, 0x1CB3ECu);
    ctx->pc = 0x1CB3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3E4u;
            // 0x1cb3e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3ECu; }
        if (ctx->pc != 0x1CB3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB3ECu; }
        if (ctx->pc != 0x1CB3ECu) { return; }
    }
    ctx->pc = 0x1CB3ECu;
label_1cb3ec:
    // 0x1cb3ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb3f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb3f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb3fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cb3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb400: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB400u;
            // 0x1cb404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB408u;
    ctx->pc = 0x1cb408u;
}
