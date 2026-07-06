#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002142B0
// Address: 0x2142b0 - 0x2142e8
void sub_002142B0_0x2142b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002142B0_0x2142b0");
#endif

    switch (ctx->pc) {
        case 0x2142ccu: goto label_2142cc;
        default: break;
    }

    ctx->pc = 0x2142b0u;

    // 0x2142b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2142b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2142b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2142b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2142b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2142b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2142bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2142bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2142c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2142c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2142C4u;
    SET_GPR_U32(ctx, 31, 0x2142CCu);
    ctx->pc = 0x2142C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142C4u;
            // 0x2142c8: 0x24840808  addiu       $a0, $a0, 0x808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142CCu; }
        if (ctx->pc != 0x2142CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142CCu; }
        if (ctx->pc != 0x2142CCu) { return; }
    }
    ctx->pc = 0x2142CCu;
label_2142cc:
    // 0x2142cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2142ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2142d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2142d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2142d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2142d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2142d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2142dc: 0x24840828  addiu       $a0, $a0, 0x828
    ctx->pc = 0x2142dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2088));
    // 0x2142e0: 0x8043e52  j           func_10F948
    ctx->pc = 0x2142E0u;
    ctx->pc = 0x2142E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2142E0u;
            // 0x2142e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2142E8u;
    ctx->pc = 0x2142e8u;
}
