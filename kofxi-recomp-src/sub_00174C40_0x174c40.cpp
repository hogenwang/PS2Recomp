#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174C40
// Address: 0x174c40 - 0x174c70
void sub_00174C40_0x174c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174C40_0x174c40");
#endif

    switch (ctx->pc) {
        case 0x174c50u: goto label_174c50;
        case 0x174c58u: goto label_174c58;
        default: break;
    }

    ctx->pc = 0x174c40u;

    // 0x174c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x174c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x174c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174c48: 0xc067dbc  jal         func_19F6F0
    ctx->pc = 0x174C48u;
    SET_GPR_U32(ctx, 31, 0x174C50u);
    ctx->pc = 0x174C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C48u;
            // 0x174c4c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F6F0u;
    if (runtime->hasFunction(0x19F6F0u)) {
        auto targetFn = runtime->lookupFunction(0x19F6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C50u; }
        if (ctx->pc != 0x174C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F6F0_0x19f6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C50u; }
        if (ctx->pc != 0x174C50u) { return; }
    }
    ctx->pc = 0x174C50u;
label_174c50:
    // 0x174c50: 0xc067dc0  jal         func_19F700
    ctx->pc = 0x174C50u;
    SET_GPR_U32(ctx, 31, 0x174C58u);
    ctx->pc = 0x174C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C50u;
            // 0x174c54: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F700u;
    if (runtime->hasFunction(0x19F700u)) {
        auto targetFn = runtime->lookupFunction(0x19F700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C58u; }
        if (ctx->pc != 0x174C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F700_0x19f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C58u; }
        if (ctx->pc != 0x174C58u) { return; }
    }
    ctx->pc = 0x174C58u;
label_174c58:
    // 0x174c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c60: 0x3e00008  jr          $ra
    ctx->pc = 0x174C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174C60u;
            // 0x174c64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174C68u;
    // 0x174c68: 0x0  nop
    ctx->pc = 0x174c68u;
    // NOP
    // 0x174c6c: 0x0  nop
    ctx->pc = 0x174c6cu;
    // NOP
    ctx->pc = 0x174c70u;
}
