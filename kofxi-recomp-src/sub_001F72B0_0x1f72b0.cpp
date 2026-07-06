#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F72B0
// Address: 0x1f72b0 - 0x1f72f8
void sub_001F72B0_0x1f72b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F72B0_0x1f72b0");
#endif

    switch (ctx->pc) {
        case 0x1f72c4u: goto label_1f72c4;
        case 0x1f72e8u: goto label_1f72e8;
        default: break;
    }

    ctx->pc = 0x1f72b0u;

    // 0x1f72b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f72b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f72b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f72b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f72b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f72b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f72bc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F72BCu;
    SET_GPR_U32(ctx, 31, 0x1F72C4u);
    ctx->pc = 0x1F72C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72BCu;
            // 0x1f72c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72C4u; }
        if (ctx->pc != 0x1F72C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72C4u; }
        if (ctx->pc != 0x1F72C4u) { return; }
    }
    ctx->pc = 0x1F72C4u;
label_1f72c4:
    // 0x1f72c4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f72c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f72c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f72c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F72CCu;
    {
        const bool branch_taken_0x1f72cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F72D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72CCu;
            // 0x1f72d0: 0x34a50143  ori         $a1, $a1, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72cc) {
            ctx->pc = 0x1F72E8u;
            goto label_1f72e8;
        }
    }
    ctx->pc = 0x1F72D4u;
    // 0x1f72d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f72d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f72d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f72d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f72dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f72e0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F72E0u;
    ctx->pc = 0x1F72E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72E0u;
            // 0x1f72e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F72E8u;
label_1f72e8:
    // 0x1f72e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f72e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f72ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f72ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f72f0: 0x807dcbe  j           func_1F72F8
    ctx->pc = 0x1F72F0u;
    ctx->pc = 0x1F72F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72F0u;
            // 0x1f72f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F72F8u;
    if (runtime->hasFunction(0x1F72F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F72F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001F72F8_0x1f72f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F72F8u;
    ctx->pc = 0x1f72f8u;
}
