#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F9140
// Address: 0x2f9140 - 0x2f9178
void sub_002F9140_0x2f9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9140_0x2f9140");
#endif

    switch (ctx->pc) {
        case 0x2f9140u: goto label_2f9140;
        case 0x2f9144u: goto label_2f9144;
        case 0x2f9148u: goto label_2f9148;
        case 0x2f914cu: goto label_2f914c;
        case 0x2f9150u: goto label_2f9150;
        case 0x2f9154u: goto label_2f9154;
        case 0x2f9158u: goto label_2f9158;
        case 0x2f915cu: goto label_2f915c;
        case 0x2f9160u: goto label_2f9160;
        case 0x2f9164u: goto label_2f9164;
        case 0x2f9168u: goto label_2f9168;
        case 0x2f916cu: goto label_2f916c;
        case 0x2f9170u: goto label_2f9170;
        case 0x2f9174u: goto label_2f9174;
        default: break;
    }

    ctx->pc = 0x2f9140u;

label_2f9140:
    // 0x2f9140: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2f9144:
    // 0x2f9144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f9148:
    // 0x2f9148: 0x8c42065c  lw          $v0, 0x65C($v0)
    ctx->pc = 0x2f9148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
label_2f914c:
    // 0x2f914c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f9150:
    if (ctx->pc == 0x2F9150u) {
        ctx->pc = 0x2F9150u;
            // 0x2f9150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2F9154u;
        goto label_2f9154;
    }
    ctx->pc = 0x2F914Cu;
    {
        const bool branch_taken_0x2f914c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F914Cu;
            // 0x2f9150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f914c) {
            ctx->pc = 0x2F9164u;
            goto label_2f9164;
        }
    }
    ctx->pc = 0x2F9154u;
label_2f9154:
    // 0x2f9154: 0x40f809  jalr        $v0
label_2f9158:
    if (ctx->pc == 0x2F9158u) {
        ctx->pc = 0x2F915Cu;
        goto label_2f915c;
    }
    ctx->pc = 0x2F9154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F915Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F915Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F915Cu; }
            if (ctx->pc != 0x2F915Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F915Cu;
label_2f915c:
    // 0x2f915c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f9160:
    if (ctx->pc == 0x2F9160u) {
        ctx->pc = 0x2F9160u;
            // 0x2f9160: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2F9164u;
        goto label_2f9164;
    }
    ctx->pc = 0x2F915Cu;
    {
        const bool branch_taken_0x2f915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F915Cu;
            // 0x2f9160: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f915c) {
            ctx->pc = 0x2F9170u;
            goto label_2f9170;
        }
    }
    ctx->pc = 0x2F9164u;
label_2f9164:
    // 0x2f9164: 0xc04997e  jal         func_1265F8
label_2f9168:
    if (ctx->pc == 0x2F9168u) {
        ctx->pc = 0x2F916Cu;
        goto label_2f916c;
    }
    ctx->pc = 0x2F9164u;
    SET_GPR_U32(ctx, 31, 0x2F916Cu);
    ctx->pc = 0x1265F8u;
    if (runtime->hasFunction(0x1265F8u)) {
        auto targetFn = runtime->lookupFunction(0x1265F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F916Cu; }
        if (ctx->pc != 0x2F916Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001265F8_0x1265f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F916Cu; }
        if (ctx->pc != 0x2F916Cu) { return; }
    }
    ctx->pc = 0x2F916Cu;
label_2f916c:
    // 0x2f916c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f916cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9170:
    // 0x2f9170: 0x3e00008  jr          $ra
label_2f9174:
    if (ctx->pc == 0x2F9174u) {
        ctx->pc = 0x2F9174u;
            // 0x2f9174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2F9178u;
        goto label_fallthrough_0x2f9170;
    }
    ctx->pc = 0x2F9170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9170u;
            // 0x2f9174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f9170:
    ctx->pc = 0x2F9178u;
    ctx->pc = 0x2f9178u;
}
