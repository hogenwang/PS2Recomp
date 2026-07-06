#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117510
// Address: 0x117510 - 0x117558
void sub_00117510_0x117510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117510_0x117510");
#endif

    switch (ctx->pc) {
        case 0x117528u: goto label_117528;
        case 0x117530u: goto label_117530;
        default: break;
    }

    ctx->pc = 0x117510u;

    // 0x117510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117514: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11751c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117520: 0xc045ce0  jal         func_117380
    ctx->pc = 0x117520u;
    SET_GPR_U32(ctx, 31, 0x117528u);
    ctx->pc = 0x117524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117520u;
            // 0x117524: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117380u;
    if (runtime->hasFunction(0x117380u)) {
        auto targetFn = runtime->lookupFunction(0x117380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117528u; }
        if (ctx->pc != 0x117528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117380_0x117380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117528u; }
        if (ctx->pc != 0x117528u) { return; }
    }
    ctx->pc = 0x117528u;
label_117528:
    // 0x117528: 0xc045d26  jal         func_117498
    ctx->pc = 0x117528u;
    SET_GPR_U32(ctx, 31, 0x117530u);
    ctx->pc = 0x11752Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117528u;
            // 0x11752c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117498u;
    if (runtime->hasFunction(0x117498u)) {
        auto targetFn = runtime->lookupFunction(0x117498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117530u; }
        if (ctx->pc != 0x117530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117498_0x117498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117530u; }
        if (ctx->pc != 0x117530u) { return; }
    }
    ctx->pc = 0x117530u;
label_117530:
    // 0x117530: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x117530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x117534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117538: 0x8c468ae0  lw          $a2, -0x7520($v0)
    ctx->pc = 0x117538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937312)));
    // 0x11753c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117540: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117544: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117548: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x117548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11754c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11754cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117550: 0x8043228  j           func_10C8A0
    ctx->pc = 0x117550u;
    ctx->pc = 0x117554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117550u;
            // 0x117554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C8A0u;
    {
        auto targetFn = runtime->lookupFunction(0x10C8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x117558u;
    ctx->pc = 0x117558u;
}
