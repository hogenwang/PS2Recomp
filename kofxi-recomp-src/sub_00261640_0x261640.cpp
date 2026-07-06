#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261640
// Address: 0x261640 - 0x261678
void sub_00261640_0x261640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261640_0x261640");
#endif

    switch (ctx->pc) {
        case 0x261640u: goto label_261640;
        case 0x261644u: goto label_261644;
        case 0x261648u: goto label_261648;
        case 0x26164cu: goto label_26164c;
        case 0x261650u: goto label_261650;
        case 0x261654u: goto label_261654;
        case 0x261658u: goto label_261658;
        case 0x26165cu: goto label_26165c;
        case 0x261660u: goto label_261660;
        case 0x261664u: goto label_261664;
        case 0x261668u: goto label_261668;
        case 0x26166cu: goto label_26166c;
        case 0x261670u: goto label_261670;
        case 0x261674u: goto label_261674;
        default: break;
    }

    ctx->pc = 0x261640u;

label_261640:
    // 0x261640: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x261640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_261644:
    // 0x261644: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_261648:
    // 0x261648: 0x8c4219f8  lw          $v0, 0x19F8($v0)
    ctx->pc = 0x261648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6648)));
label_26164c:
    // 0x26164c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_261650:
    if (ctx->pc == 0x261650u) {
        ctx->pc = 0x261650u;
            // 0x261650: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x261654u;
        goto label_261654;
    }
    ctx->pc = 0x26164Cu;
    {
        const bool branch_taken_0x26164c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26164Cu;
            // 0x261650: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26164c) {
            ctx->pc = 0x261664u;
            goto label_261664;
        }
    }
    ctx->pc = 0x261654u;
label_261654:
    // 0x261654: 0x40f809  jalr        $v0
label_261658:
    if (ctx->pc == 0x261658u) {
        ctx->pc = 0x26165Cu;
        goto label_26165c;
    }
    ctx->pc = 0x261654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26165Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26165Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26165Cu; }
            if (ctx->pc != 0x26165Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26165Cu;
label_26165c:
    // 0x26165c: 0x10000004  b           . + 4 + (0x4 << 2)
label_261660:
    if (ctx->pc == 0x261660u) {
        ctx->pc = 0x261660u;
            // 0x261660: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x261664u;
        goto label_261664;
    }
    ctx->pc = 0x26165Cu;
    {
        const bool branch_taken_0x26165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26165Cu;
            // 0x261660: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26165c) {
            ctx->pc = 0x261670u;
            goto label_261670;
        }
    }
    ctx->pc = 0x261664u;
label_261664:
    // 0x261664: 0xc08a70e  jal         func_229C38
label_261668:
    if (ctx->pc == 0x261668u) {
        ctx->pc = 0x26166Cu;
        goto label_26166c;
    }
    ctx->pc = 0x261664u;
    SET_GPR_U32(ctx, 31, 0x26166Cu);
    ctx->pc = 0x229C38u;
    if (runtime->hasFunction(0x229C38u)) {
        auto targetFn = runtime->lookupFunction(0x229C38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26166Cu; }
        if (ctx->pc != 0x26166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229C38_0x229c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26166Cu; }
        if (ctx->pc != 0x26166Cu) { return; }
    }
    ctx->pc = 0x26166Cu;
label_26166c:
    // 0x26166c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261670:
    // 0x261670: 0x3e00008  jr          $ra
label_261674:
    if (ctx->pc == 0x261674u) {
        ctx->pc = 0x261674u;
            // 0x261674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x261678u;
        goto label_fallthrough_0x261670;
    }
    ctx->pc = 0x261670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261670u;
            // 0x261674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x261670:
    ctx->pc = 0x261678u;
    ctx->pc = 0x261678u;
}
