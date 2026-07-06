#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00208190
// Address: 0x208190 - 0x2081d0
void sub_00208190_0x208190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208190_0x208190");
#endif

    switch (ctx->pc) {
        case 0x2081a0u: goto label_2081a0;
        default: break;
    }

    ctx->pc = 0x208190u;

    // 0x208190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208198: 0xc081074  jal         func_2041D0
    ctx->pc = 0x208198u;
    SET_GPR_U32(ctx, 31, 0x2081A0u);
    ctx->pc = 0x20819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208198u;
            // 0x20819c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2041D0u;
    if (runtime->hasFunction(0x2041D0u)) {
        auto targetFn = runtime->lookupFunction(0x2041D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081A0u; }
        if (ctx->pc != 0x2081A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002041D0_0x2041d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081A0u; }
        if (ctx->pc != 0x2081A0u) { return; }
    }
    ctx->pc = 0x2081A0u;
label_2081a0:
    // 0x2081a0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2081a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2081a4: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x2081a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2081a8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2081ac: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2081ACu;
    {
        const bool branch_taken_0x2081ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2081ac) {
            ctx->pc = 0x2081B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2081ACu;
            // 0x2081b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2081BCu;
            goto label_2081bc;
        }
    }
    ctx->pc = 0x2081B4u;
    // 0x2081b4: 0xa08004f1  sb          $zero, 0x4F1($a0)
    ctx->pc = 0x2081b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1265), (uint8_t)GPR_U32(ctx, 0));
    // 0x2081b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2081b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2081bc:
    // 0x2081bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2081BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2081C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2081BCu;
            // 0x2081c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2081C4u;
    // 0x2081c4: 0x0  nop
    ctx->pc = 0x2081c4u;
    // NOP
    // 0x2081c8: 0x0  nop
    ctx->pc = 0x2081c8u;
    // NOP
    // 0x2081cc: 0x0  nop
    ctx->pc = 0x2081ccu;
    // NOP
    ctx->pc = 0x2081d0u;
}
