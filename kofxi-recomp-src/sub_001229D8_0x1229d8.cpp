#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001229D8
// Address: 0x1229d8 - 0x122a30
void sub_001229D8_0x1229d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001229D8_0x1229d8");
#endif

    switch (ctx->pc) {
        case 0x1229f8u: goto label_1229f8;
        case 0x122a08u: goto label_122a08;
        case 0x122a18u: goto label_122a18;
        case 0x122a20u: goto label_122a20;
        default: break;
    }

    ctx->pc = 0x1229d8u;

    // 0x1229d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1229d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1229dc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1229dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1229e0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1229e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1229e4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1229e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1229e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1229e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1229ec: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1229ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1229f0: 0xc048998  jal         func_122660
    ctx->pc = 0x1229F0u;
    SET_GPR_U32(ctx, 31, 0x1229F8u);
    ctx->pc = 0x1229F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1229F0u;
            // 0x1229f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (runtime->hasFunction(0x122660u)) {
        auto targetFn = runtime->lookupFunction(0x122660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1229F8u; }
        if (ctx->pc != 0x1229F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122660_0x122660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1229F8u; }
        if (ctx->pc != 0x1229F8u) { return; }
    }
    ctx->pc = 0x1229F8u;
label_1229f8:
    // 0x1229f8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1229f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1229fc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1229fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x122a00: 0xc048998  jal         func_122660
    ctx->pc = 0x122A00u;
    SET_GPR_U32(ctx, 31, 0x122A08u);
    ctx->pc = 0x122A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122A00u;
            // 0x122a04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (runtime->hasFunction(0x122660u)) {
        auto targetFn = runtime->lookupFunction(0x122660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A08u; }
        if (ctx->pc != 0x122A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122660_0x122660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A08u; }
        if (ctx->pc != 0x122A08u) { return; }
    }
    ctx->pc = 0x122A08u;
label_122a08:
    // 0x122a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122a0c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x122a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x122a10: 0xc048a8c  jal         func_122A30
    ctx->pc = 0x122A10u;
    SET_GPR_U32(ctx, 31, 0x122A18u);
    ctx->pc = 0x122A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122A10u;
            // 0x122a14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122A30u;
    if (runtime->hasFunction(0x122A30u)) {
        auto targetFn = runtime->lookupFunction(0x122A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A18u; }
        if (ctx->pc != 0x122A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122A30_0x122a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A18u; }
        if (ctx->pc != 0x122A18u) { return; }
    }
    ctx->pc = 0x122A18u;
label_122a18:
    // 0x122a18: 0xc048966  jal         func_122598
    ctx->pc = 0x122A18u;
    SET_GPR_U32(ctx, 31, 0x122A20u);
    ctx->pc = 0x122A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122A18u;
            // 0x122a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122598u;
    if (runtime->hasFunction(0x122598u)) {
        auto targetFn = runtime->lookupFunction(0x122598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A20u; }
        if (ctx->pc != 0x122A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122598_0x122598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A20u; }
        if (ctx->pc != 0x122A20u) { return; }
    }
    ctx->pc = 0x122A20u;
label_122a20:
    // 0x122a20: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x122a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122a24: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x122a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a28: 0x3e00008  jr          $ra
    ctx->pc = 0x122A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122A28u;
            // 0x122a2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x122A30u;
    ctx->pc = 0x122a30u;
}
