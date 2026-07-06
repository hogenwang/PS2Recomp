#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281CE0
// Address: 0x281ce0 - 0x281d58
void sub_00281CE0_0x281ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281CE0_0x281ce0");
#endif

    switch (ctx->pc) {
        case 0x281d08u: goto label_281d08;
        case 0x281d20u: goto label_281d20;
        case 0x281d40u: goto label_281d40;
        default: break;
    }

    ctx->pc = 0x281ce0u;

    // 0x281ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x281ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x281ce4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x281ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ce8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x281ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x281cec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x281cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x281cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cf4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x281cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x281cf8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x281cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x281cfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x281cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x281d00: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x281D00u;
    SET_GPR_U32(ctx, 31, 0x281D08u);
    ctx->pc = 0x281D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D00u;
            // 0x281d04: 0x24a5a5e8  addiu       $a1, $a1, -0x5A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D08u; }
        if (ctx->pc != 0x281D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D08u; }
        if (ctx->pc != 0x281D08u) { return; }
    }
    ctx->pc = 0x281D08u;
label_281d08:
    // 0x281d08: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x281d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x281d0c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x281d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x281d10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x281d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d18: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x281D18u;
    SET_GPR_U32(ctx, 31, 0x281D20u);
    ctx->pc = 0x281D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D18u;
            // 0x281d1c: 0x24a5a5f0  addiu       $a1, $a1, -0x5A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D20u; }
        if (ctx->pc != 0x281D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D20u; }
        if (ctx->pc != 0x281D20u) { return; }
    }
    ctx->pc = 0x281D20u;
label_281d20:
    // 0x281d20: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x281d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x281d24: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x281d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x281d28: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x281d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d2c: 0x24a5a5f8  addiu       $a1, $a1, -0x5A08
    ctx->pc = 0x281d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944248));
    // 0x281d30: 0x24e7a608  addiu       $a3, $a3, -0x59F8
    ctx->pc = 0x281d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944264));
    // 0x281d34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x281d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281d38: 0xc0a57ee  jal         func_295FB8
    ctx->pc = 0x281D38u;
    SET_GPR_U32(ctx, 31, 0x281D40u);
    ctx->pc = 0x281D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D38u;
            // 0x281d3c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295FB8u;
    if (runtime->hasFunction(0x295FB8u)) {
        auto targetFn = runtime->lookupFunction(0x295FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D40u; }
        if (ctx->pc != 0x281D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295FB8_0x295fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D40u; }
        if (ctx->pc != 0x281D40u) { return; }
    }
    ctx->pc = 0x281D40u;
label_281d40:
    // 0x281d40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x281d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281d44: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x281d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281d48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x281d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x281D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D4Cu;
            // 0x281d50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281D54u;
    // 0x281d54: 0x0  nop
    ctx->pc = 0x281d54u;
    // NOP
    ctx->pc = 0x281d58u;
}
