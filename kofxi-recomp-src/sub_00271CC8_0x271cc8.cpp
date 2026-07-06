#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271CC8
// Address: 0x271cc8 - 0x271d30
void sub_00271CC8_0x271cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271CC8_0x271cc8");
#endif

    switch (ctx->pc) {
        case 0x271d04u: goto label_271d04;
        case 0x271d18u: goto label_271d18;
        default: break;
    }

    ctx->pc = 0x271cc8u;

    // 0x271cc8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x271cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x271ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x271cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cd0: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x271cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x271cd4: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x271cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x271cd8: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x271cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x271cdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x271cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ce0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x271ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x271ce4: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x271ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x271ce8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x271ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cec: 0x24a59de8  addiu       $a1, $a1, -0x6218
    ctx->pc = 0x271cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942184));
    // 0x271cf0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x271cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cf8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x271cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cfc: 0xc09c678  jal         func_2719E0
    ctx->pc = 0x271CFCu;
    SET_GPR_U32(ctx, 31, 0x271D04u);
    ctx->pc = 0x271D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271CFCu;
            // 0x271d00: 0x200802d  daddu       $s0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2719E0u;
    if (runtime->hasFunction(0x2719E0u)) {
        auto targetFn = runtime->lookupFunction(0x2719E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D04u; }
        if (ctx->pc != 0x271D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002719E0_0x2719e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D04u; }
        if (ctx->pc != 0x271D04u) { return; }
    }
    ctx->pc = 0x271D04u;
label_271d04:
    // 0x271d04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x271d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x271d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d10: 0xc09c692  jal         func_271A48
    ctx->pc = 0x271D10u;
    SET_GPR_U32(ctx, 31, 0x271D18u);
    ctx->pc = 0x271D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271D10u;
            // 0x271d14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x271A48u;
    if (runtime->hasFunction(0x271A48u)) {
        auto targetFn = runtime->lookupFunction(0x271A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D18u; }
        if (ctx->pc != 0x271D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00271A48_0x271a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271D18u; }
        if (ctx->pc != 0x271D18u) { return; }
    }
    ctx->pc = 0x271D18u;
label_271d18:
    // 0x271d18: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x271d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x271d1c: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x271d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x271d20: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x271d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x271d24: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x271d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x271d28: 0x3e00008  jr          $ra
    ctx->pc = 0x271D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D28u;
            // 0x271d2c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271D30u;
    ctx->pc = 0x271d30u;
}
