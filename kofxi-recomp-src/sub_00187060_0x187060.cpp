#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187060
// Address: 0x187060 - 0x1870e0
void sub_00187060_0x187060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187060_0x187060");
#endif

    switch (ctx->pc) {
        case 0x187074u: goto label_187074;
        case 0x18707cu: goto label_18707c;
        case 0x187084u: goto label_187084;
        case 0x18708cu: goto label_18708c;
        case 0x187094u: goto label_187094;
        case 0x18709cu: goto label_18709c;
        case 0x1870a4u: goto label_1870a4;
        case 0x1870acu: goto label_1870ac;
        case 0x1870b4u: goto label_1870b4;
        case 0x1870bcu: goto label_1870bc;
        case 0x1870c4u: goto label_1870c4;
        default: break;
    }

    ctx->pc = 0x187060u;

    // 0x187060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18706c: 0xc061cfc  jal         func_1873F0
    ctx->pc = 0x18706Cu;
    SET_GPR_U32(ctx, 31, 0x187074u);
    ctx->pc = 0x187070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18706Cu;
            // 0x187070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1873F0u;
    if (runtime->hasFunction(0x1873F0u)) {
        auto targetFn = runtime->lookupFunction(0x1873F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187074u; }
        if (ctx->pc != 0x187074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001873F0_0x1873f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187074u; }
        if (ctx->pc != 0x187074u) { return; }
    }
    ctx->pc = 0x187074u;
label_187074:
    // 0x187074: 0xc061c38  jal         func_1870E0
    ctx->pc = 0x187074u;
    SET_GPR_U32(ctx, 31, 0x18707Cu);
    ctx->pc = 0x187078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187074u;
            // 0x187078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1870E0u;
    if (runtime->hasFunction(0x1870E0u)) {
        auto targetFn = runtime->lookupFunction(0x1870E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18707Cu; }
        if (ctx->pc != 0x18707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001870E0_0x1870e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18707Cu; }
        if (ctx->pc != 0x18707Cu) { return; }
    }
    ctx->pc = 0x18707Cu;
label_18707c:
    // 0x18707c: 0xc061da8  jal         func_1876A0
    ctx->pc = 0x18707Cu;
    SET_GPR_U32(ctx, 31, 0x187084u);
    ctx->pc = 0x187080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18707Cu;
            // 0x187080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1876A0u;
    if (runtime->hasFunction(0x1876A0u)) {
        auto targetFn = runtime->lookupFunction(0x1876A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187084u; }
        if (ctx->pc != 0x187084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001876A0_0x1876a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187084u; }
        if (ctx->pc != 0x187084u) { return; }
    }
    ctx->pc = 0x187084u;
label_187084:
    // 0x187084: 0xc061e2c  jal         func_1878B0
    ctx->pc = 0x187084u;
    SET_GPR_U32(ctx, 31, 0x18708Cu);
    ctx->pc = 0x187088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187084u;
            // 0x187088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1878B0u;
    if (runtime->hasFunction(0x1878B0u)) {
        auto targetFn = runtime->lookupFunction(0x1878B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18708Cu; }
        if (ctx->pc != 0x18708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001878B0_0x1878b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18708Cu; }
        if (ctx->pc != 0x18708Cu) { return; }
    }
    ctx->pc = 0x18708Cu;
label_18708c:
    // 0x18708c: 0xc061de8  jal         func_1877A0
    ctx->pc = 0x18708Cu;
    SET_GPR_U32(ctx, 31, 0x187094u);
    ctx->pc = 0x187090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18708Cu;
            // 0x187090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1877A0u;
    if (runtime->hasFunction(0x1877A0u)) {
        auto targetFn = runtime->lookupFunction(0x1877A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187094u; }
        if (ctx->pc != 0x187094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001877A0_0x1877a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187094u; }
        if (ctx->pc != 0x187094u) { return; }
    }
    ctx->pc = 0x187094u;
label_187094:
    // 0x187094: 0xc061e88  jal         func_187A20
    ctx->pc = 0x187094u;
    SET_GPR_U32(ctx, 31, 0x18709Cu);
    ctx->pc = 0x187098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187094u;
            // 0x187098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187A20u;
    if (runtime->hasFunction(0x187A20u)) {
        auto targetFn = runtime->lookupFunction(0x187A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18709Cu; }
        if (ctx->pc != 0x18709Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A20_0x187a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18709Cu; }
        if (ctx->pc != 0x18709Cu) { return; }
    }
    ctx->pc = 0x18709Cu;
label_18709c:
    // 0x18709c: 0xc061ed4  jal         func_187B50
    ctx->pc = 0x18709Cu;
    SET_GPR_U32(ctx, 31, 0x1870A4u);
    ctx->pc = 0x1870A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18709Cu;
            // 0x1870a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B50u;
    if (runtime->hasFunction(0x187B50u)) {
        auto targetFn = runtime->lookupFunction(0x187B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870A4u; }
        if (ctx->pc != 0x1870A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187B50_0x187b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870A4u; }
        if (ctx->pc != 0x1870A4u) { return; }
    }
    ctx->pc = 0x1870A4u;
label_1870a4:
    // 0x1870a4: 0xc061f08  jal         func_187C20
    ctx->pc = 0x1870A4u;
    SET_GPR_U32(ctx, 31, 0x1870ACu);
    ctx->pc = 0x1870A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870A4u;
            // 0x1870a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187C20u;
    if (runtime->hasFunction(0x187C20u)) {
        auto targetFn = runtime->lookupFunction(0x187C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870ACu; }
        if (ctx->pc != 0x1870ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187C20_0x187c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870ACu; }
        if (ctx->pc != 0x1870ACu) { return; }
    }
    ctx->pc = 0x1870ACu;
label_1870ac:
    // 0x1870ac: 0xc061f38  jal         func_187CE0
    ctx->pc = 0x1870ACu;
    SET_GPR_U32(ctx, 31, 0x1870B4u);
    ctx->pc = 0x1870B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870ACu;
            // 0x1870b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187CE0u;
    if (runtime->hasFunction(0x187CE0u)) {
        auto targetFn = runtime->lookupFunction(0x187CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870B4u; }
        if (ctx->pc != 0x1870B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187CE0_0x187ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870B4u; }
        if (ctx->pc != 0x1870B4u) { return; }
    }
    ctx->pc = 0x1870B4u;
label_1870b4:
    // 0x1870b4: 0xc061f88  jal         func_187E20
    ctx->pc = 0x1870B4u;
    SET_GPR_U32(ctx, 31, 0x1870BCu);
    ctx->pc = 0x1870B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870B4u;
            // 0x1870b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E20u;
    if (runtime->hasFunction(0x187E20u)) {
        auto targetFn = runtime->lookupFunction(0x187E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870BCu; }
        if (ctx->pc != 0x1870BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E20_0x187e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870BCu; }
        if (ctx->pc != 0x1870BCu) { return; }
    }
    ctx->pc = 0x1870BCu;
label_1870bc:
    // 0x1870bc: 0xc061f8c  jal         func_187E30
    ctx->pc = 0x1870BCu;
    SET_GPR_U32(ctx, 31, 0x1870C4u);
    ctx->pc = 0x1870C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1870BCu;
            // 0x1870c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E30u;
    if (runtime->hasFunction(0x187E30u)) {
        auto targetFn = runtime->lookupFunction(0x187E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870C4u; }
        if (ctx->pc != 0x1870C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E30_0x187e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1870C4u; }
        if (ctx->pc != 0x1870C4u) { return; }
    }
    ctx->pc = 0x1870C4u;
label_1870c4:
    // 0x1870c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1870c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1870c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1870c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1870cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1870CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1870CCu;
            // 0x1870d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1870D4u;
    // 0x1870d4: 0x0  nop
    ctx->pc = 0x1870d4u;
    // NOP
    // 0x1870d8: 0x0  nop
    ctx->pc = 0x1870d8u;
    // NOP
    // 0x1870dc: 0x0  nop
    ctx->pc = 0x1870dcu;
    // NOP
    ctx->pc = 0x1870e0u;
}
