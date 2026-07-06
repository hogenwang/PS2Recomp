#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB610
// Address: 0x1eb610 - 0x1eb660
void sub_001EB610_0x1eb610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB610_0x1eb610");
#endif

    switch (ctx->pc) {
        case 0x1eb620u: goto label_1eb620;
        case 0x1eb638u: goto label_1eb638;
        case 0x1eb648u: goto label_1eb648;
        default: break;
    }

    ctx->pc = 0x1eb610u;

    // 0x1eb610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eb618: 0xc07aa2a  jal         func_1EA8A8
    ctx->pc = 0x1EB618u;
    SET_GPR_U32(ctx, 31, 0x1EB620u);
    ctx->pc = 0x1EB61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB618u;
            // 0x1eb61c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8A8u;
    if (runtime->hasFunction(0x1EA8A8u)) {
        auto targetFn = runtime->lookupFunction(0x1EA8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB620u; }
        if (ctx->pc != 0x1EB620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA8A8_0x1ea8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB620u; }
        if (ctx->pc != 0x1EB620u) { return; }
    }
    ctx->pc = 0x1EB620u;
label_1eb620:
    // 0x1eb620: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1eb620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1eb624: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1eb624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1eb628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb62c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb630: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB630u;
            // 0x1eb634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB638u;
label_1eb638:
    // 0x1eb638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb63c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eb63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eb640: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EB640u;
    SET_GPR_U32(ctx, 31, 0x1EB648u);
    ctx->pc = 0x1EB644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB640u;
            // 0x1eb644: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB648u; }
        if (ctx->pc != 0x1EB648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA890_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB648u; }
        if (ctx->pc != 0x1EB648u) { return; }
    }
    ctx->pc = 0x1EB648u;
label_1eb648:
    // 0x1eb648: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1eb64c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1eb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1eb650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb654: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb658: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB658u;
            // 0x1eb65c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB660u;
    ctx->pc = 0x1eb660u;
}
