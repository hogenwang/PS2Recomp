#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7CF0
// Address: 0x1c7cf0 - 0x1c7d40
void sub_001C7CF0_0x1c7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7CF0_0x1c7cf0");
#endif

    switch (ctx->pc) {
        case 0x1c7d10u: goto label_1c7d10;
        case 0x1c7d24u: goto label_1c7d24;
        case 0x1c7d2cu: goto label_1c7d2c;
        default: break;
    }

    ctx->pc = 0x1c7cf0u;

    // 0x1c7cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7cfc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1c7cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1c7d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7d04: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C7D04u;
    ctx->pc = 0x1C7D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D04u;
            // 0x1c7d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C7D0Cu;
    // 0x1c7d0c: 0x0  nop
    ctx->pc = 0x1c7d0cu;
    // NOP
label_1c7d10:
    // 0x1c7d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7d18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c7d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7d1c: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D24u);
    ctx->pc = 0x1C7D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D1Cu;
            // 0x1c7d20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (runtime->hasFunction(0x1C7A08u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D24u; }
        if (ctx->pc != 0x1C7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7A08_0x1c7a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D24u; }
        if (ctx->pc != 0x1C7D24u) { return; }
    }
    ctx->pc = 0x1C7D24u;
label_1c7d24:
    // 0x1c7d24: 0xc071f50  jal         func_1C7D40
    ctx->pc = 0x1C7D24u;
    SET_GPR_U32(ctx, 31, 0x1C7D2Cu);
    ctx->pc = 0x1C7D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D24u;
            // 0x1c7d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D40u;
    if (runtime->hasFunction(0x1C7D40u)) {
        auto targetFn = runtime->lookupFunction(0x1C7D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D2Cu; }
        if (ctx->pc != 0x1C7D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7D40_0x1c7d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7D2Cu; }
        if (ctx->pc != 0x1C7D2Cu) { return; }
    }
    ctx->pc = 0x1C7D2Cu;
label_1c7d2c:
    // 0x1c7d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7d30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c7d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7d34: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C7D34u;
    ctx->pc = 0x1C7D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D34u;
            // 0x1c7d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    if (runtime->hasFunction(0x1C7A20u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C7D3Cu;
    // 0x1c7d3c: 0x0  nop
    ctx->pc = 0x1c7d3cu;
    // NOP
    ctx->pc = 0x1c7d40u;
}
