#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003122B0
// Address: 0x3122b0 - 0x3122f0
void sub_003122B0_0x3122b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003122B0_0x3122b0");
#endif

    switch (ctx->pc) {
        case 0x3122dcu: goto label_3122dc;
        default: break;
    }

    ctx->pc = 0x3122b0u;

    // 0x3122b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3122b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3122b4: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3122b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3122b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3122b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3122bc: 0x8c63d930  lw          $v1, -0x26D0($v1)
    ctx->pc = 0x3122bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957360)));
    // 0x3122c0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3122C0u;
    {
        const bool branch_taken_0x3122c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3122c0) {
            ctx->pc = 0x3122C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3122C0u;
            // 0x3122c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3122E8u;
            goto label_3122e8;
        }
    }
    ctx->pc = 0x3122C8u;
    // 0x3122c8: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3122c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3122cc: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3122ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3122d0: 0x9045d938  lbu         $a1, -0x26C8($v0)
    ctx->pc = 0x3122d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957368)));
    // 0x3122d4: 0xc0c47d4  jal         func_311F50
    ctx->pc = 0x3122D4u;
    SET_GPR_U32(ctx, 31, 0x3122DCu);
    ctx->pc = 0x3122D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3122D4u;
            // 0x3122d8: 0x9064d940  lbu         $a0, -0x26C0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957376)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311F50u;
    if (runtime->hasFunction(0x311F50u)) {
        auto targetFn = runtime->lookupFunction(0x311F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122DCu; }
        if (ctx->pc != 0x3122DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00311F50_0x311f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122DCu; }
        if (ctx->pc != 0x3122DCu) { return; }
    }
    ctx->pc = 0x3122DCu;
label_3122dc:
    // 0x3122dc: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x3122dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x3122e0: 0xac60d930  sw          $zero, -0x26D0($v1)
    ctx->pc = 0x3122e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957360), GPR_U32(ctx, 0));
    // 0x3122e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3122e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3122e8:
    // 0x3122e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3122E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3122ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3122E8u;
            // 0x3122ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3122F0u;
    ctx->pc = 0x3122f0u;
}
