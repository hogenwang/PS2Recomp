#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C1C0
// Address: 0x10c1c0 - 0x10c200
void sub_0010C1C0_0x10c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C1C0_0x10c1c0");
#endif

    switch (ctx->pc) {
        case 0x10c1e4u: goto label_10c1e4;
        case 0x10c1f0u: goto label_10c1f0;
        default: break;
    }

    ctx->pc = 0x10c1c0u;

    // 0x10c1c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x10c1c4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10c1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1c8: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10c1cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10c1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1d4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x10c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10c1d8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x10c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x10c1dc: 0xc043e24  jal         func_10F890
    ctx->pc = 0x10C1DCu;
    SET_GPR_U32(ctx, 31, 0x10C1E4u);
    ctx->pc = 0x10C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1DCu;
            // 0x10c1e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C1E4u; }
        if (ctx->pc != 0x10C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C1E4u; }
        if (ctx->pc != 0x10C1E4u) { return; }
    }
    ctx->pc = 0x10C1E4u;
label_10c1e4:
    // 0x10c1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1e8: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10C1E8u;
    SET_GPR_U32(ctx, 31, 0x10C1F0u);
    ctx->pc = 0x10C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1E8u;
            // 0x10c1ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (runtime->hasFunction(0x10C168u)) {
        auto targetFn = runtime->lookupFunction(0x10C168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C1F0u; }
        if (ctx->pc != 0x10C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C168_0x10c168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C1F0u; }
        if (ctx->pc != 0x10C1F0u) { return; }
    }
    ctx->pc = 0x10C1F0u;
label_10c1f0:
    // 0x10c1f0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x10c1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10c1f4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10c1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10c1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1F8u;
            // 0x10c1fc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C200u;
    ctx->pc = 0x10c200u;
}
