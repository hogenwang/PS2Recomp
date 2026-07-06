#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033A220
// Address: 0x33a220 - 0x33a290
void sub_0033A220_0x33a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A220_0x33a220");
#endif

    switch (ctx->pc) {
        case 0x33a230u: goto label_33a230;
        case 0x33a238u: goto label_33a238;
        case 0x33a240u: goto label_33a240;
        case 0x33a248u: goto label_33a248;
        case 0x33a250u: goto label_33a250;
        case 0x33a264u: goto label_33a264;
        case 0x33a274u: goto label_33a274;
        case 0x33a27cu: goto label_33a27c;
        default: break;
    }

    ctx->pc = 0x33a220u;

    // 0x33a220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a228: 0xc0ce9e4  jal         func_33A790
    ctx->pc = 0x33A228u;
    SET_GPR_U32(ctx, 31, 0x33A230u);
    ctx->pc = 0x33A790u;
    if (runtime->hasFunction(0x33A790u)) {
        auto targetFn = runtime->lookupFunction(0x33A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A230u; }
        if (ctx->pc != 0x33A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A790_0x33a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A230u; }
        if (ctx->pc != 0x33A230u) { return; }
    }
    ctx->pc = 0x33A230u;
label_33a230:
    // 0x33a230: 0xc0cea34  jal         func_33A8D0
    ctx->pc = 0x33A230u;
    SET_GPR_U32(ctx, 31, 0x33A238u);
    ctx->pc = 0x33A8D0u;
    if (runtime->hasFunction(0x33A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x33A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A238u; }
        if (ctx->pc != 0x33A238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A8D0_0x33a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A238u; }
        if (ctx->pc != 0x33A238u) { return; }
    }
    ctx->pc = 0x33A238u;
label_33a238:
    // 0x33a238: 0xc0cea54  jal         func_33A950
    ctx->pc = 0x33A238u;
    SET_GPR_U32(ctx, 31, 0x33A240u);
    ctx->pc = 0x33A950u;
    if (runtime->hasFunction(0x33A950u)) {
        auto targetFn = runtime->lookupFunction(0x33A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A240u; }
        if (ctx->pc != 0x33A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A950_0x33a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A240u; }
        if (ctx->pc != 0x33A240u) { return; }
    }
    ctx->pc = 0x33A240u;
label_33a240:
    // 0x33a240: 0xc0ceb4c  jal         func_33AD30
    ctx->pc = 0x33A240u;
    SET_GPR_U32(ctx, 31, 0x33A248u);
    ctx->pc = 0x33AD30u;
    if (runtime->hasFunction(0x33AD30u)) {
        auto targetFn = runtime->lookupFunction(0x33AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A248u; }
        if (ctx->pc != 0x33A248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033AD30_0x33ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A248u; }
        if (ctx->pc != 0x33A248u) { return; }
    }
    ctx->pc = 0x33A248u;
label_33a248:
    // 0x33a248: 0xc0cee90  jal         func_33BA40
    ctx->pc = 0x33A248u;
    SET_GPR_U32(ctx, 31, 0x33A250u);
    ctx->pc = 0x33BA40u;
    if (runtime->hasFunction(0x33BA40u)) {
        auto targetFn = runtime->lookupFunction(0x33BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A250u; }
        if (ctx->pc != 0x33A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BA40_0x33ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A250u; }
        if (ctx->pc != 0x33A250u) { return; }
    }
    ctx->pc = 0x33A250u;
label_33a250:
    // 0x33a250: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33a250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33a254: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33a258: 0xac60e8d8  sw          $zero, -0x1728($v1)
    ctx->pc = 0x33a258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961368), GPR_U32(ctx, 0));
    // 0x33a25c: 0xc0ce9d4  jal         func_33A750
    ctx->pc = 0x33A25Cu;
    SET_GPR_U32(ctx, 31, 0x33A264u);
    ctx->pc = 0x33A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33A25Cu;
            // 0x33a260: 0xac40e8d0  sw          $zero, -0x1730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33A750u;
    if (runtime->hasFunction(0x33A750u)) {
        auto targetFn = runtime->lookupFunction(0x33A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A264u; }
        if (ctx->pc != 0x33A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A750_0x33a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A264u; }
        if (ctx->pc != 0x33A264u) { return; }
    }
    ctx->pc = 0x33A264u;
label_33a264:
    // 0x33a264: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A264u;
    {
        const bool branch_taken_0x33a264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a264) {
            ctx->pc = 0x33A274u;
            goto label_33a274;
        }
    }
    ctx->pc = 0x33A26Cu;
    // 0x33a26c: 0xc0ce9bc  jal         func_33A6F0
    ctx->pc = 0x33A26Cu;
    SET_GPR_U32(ctx, 31, 0x33A274u);
    ctx->pc = 0x33A6F0u;
    if (runtime->hasFunction(0x33A6F0u)) {
        auto targetFn = runtime->lookupFunction(0x33A6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A274u; }
        if (ctx->pc != 0x33A274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A6F0_0x33a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A274u; }
        if (ctx->pc != 0x33A274u) { return; }
    }
    ctx->pc = 0x33A274u;
label_33a274:
    // 0x33a274: 0xc0c1650  jal         func_305940
    ctx->pc = 0x33A274u;
    SET_GPR_U32(ctx, 31, 0x33A27Cu);
    ctx->pc = 0x305940u;
    if (runtime->hasFunction(0x305940u)) {
        auto targetFn = runtime->lookupFunction(0x305940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A27Cu; }
        if (ctx->pc != 0x33A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305940_0x305940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33A27Cu; }
        if (ctx->pc != 0x33A27Cu) { return; }
    }
    ctx->pc = 0x33A27Cu;
label_33a27c:
    // 0x33a27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a284: 0x3e00008  jr          $ra
    ctx->pc = 0x33A284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A284u;
            // 0x33a288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A28Cu;
    // 0x33a28c: 0x0  nop
    ctx->pc = 0x33a28cu;
    // NOP
    ctx->pc = 0x33a290u;
}
