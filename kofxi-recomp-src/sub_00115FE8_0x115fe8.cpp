#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115FE8
// Address: 0x115fe8 - 0x116028
void sub_00115FE8_0x115fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115FE8_0x115fe8");
#endif

    switch (ctx->pc) {
        case 0x115ffcu: goto label_115ffc;
        case 0x116008u: goto label_116008;
        case 0x116018u: goto label_116018;
        default: break;
    }

    ctx->pc = 0x115fe8u;

    // 0x115fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115fec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115ff4: 0xc045770  jal         func_115DC0
    ctx->pc = 0x115FF4u;
    SET_GPR_U32(ctx, 31, 0x115FFCu);
    ctx->pc = 0x115FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115FF4u;
            // 0x115ff8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115DC0u;
    if (runtime->hasFunction(0x115DC0u)) {
        auto targetFn = runtime->lookupFunction(0x115DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115FFCu; }
        if (ctx->pc != 0x115FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115DC0_0x115dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115FFCu; }
        if (ctx->pc != 0x115FFCu) { return; }
    }
    ctx->pc = 0x115FFCu;
label_115ffc:
    // 0x115ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116000: 0x3e00008  jr          $ra
    ctx->pc = 0x116000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116000u;
            // 0x116004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116008u;
label_116008:
    // 0x116008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x116008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11600c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116010: 0xc045770  jal         func_115DC0
    ctx->pc = 0x116010u;
    SET_GPR_U32(ctx, 31, 0x116018u);
    ctx->pc = 0x116014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116010u;
            // 0x116014: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115DC0u;
    if (runtime->hasFunction(0x115DC0u)) {
        auto targetFn = runtime->lookupFunction(0x115DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116018u; }
        if (ctx->pc != 0x116018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115DC0_0x115dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116018u; }
        if (ctx->pc != 0x116018u) { return; }
    }
    ctx->pc = 0x116018u;
label_116018:
    // 0x116018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11601c: 0x3e00008  jr          $ra
    ctx->pc = 0x11601Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11601Cu;
            // 0x116020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116024u;
    // 0x116024: 0x0  nop
    ctx->pc = 0x116024u;
    // NOP
    ctx->pc = 0x116028u;
}
