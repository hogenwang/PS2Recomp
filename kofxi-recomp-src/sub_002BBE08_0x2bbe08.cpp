#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBE08
// Address: 0x2bbe08 - 0x2bbe30
void sub_002BBE08_0x2bbe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBE08_0x2bbe08");
#endif

    switch (ctx->pc) {
        case 0x2bbe18u: goto label_2bbe18;
        case 0x2bbe28u: goto label_2bbe28;
        default: break;
    }

    ctx->pc = 0x2bbe08u;

    // 0x2bbe08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bbe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bbe0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bbe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bbe10: 0xc0a7304  jal         func_29CC10
    ctx->pc = 0x2BBE10u;
    SET_GPR_U32(ctx, 31, 0x2BBE18u);
    ctx->pc = 0x29CC10u;
    if (runtime->hasFunction(0x29CC10u)) {
        auto targetFn = runtime->lookupFunction(0x29CC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE18u; }
        if (ctx->pc != 0x2BBE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CC10_0x29cc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE18u; }
        if (ctx->pc != 0x2BBE18u) { return; }
    }
    ctx->pc = 0x2BBE18u;
label_2bbe18:
    // 0x2bbe18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bbe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE1Cu;
            // 0x2bbe20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBE24u;
    // 0x2bbe24: 0x0  nop
    ctx->pc = 0x2bbe24u;
    // NOP
label_2bbe28:
    // 0x2bbe28: 0x80a734a  j           func_29CD28
    ctx->pc = 0x2BBE28u;
    ctx->pc = 0x29CD28u;
    if (runtime->hasFunction(0x29CD28u)) {
        auto targetFn = runtime->lookupFunction(0x29CD28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0029CD28_0x29cd28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BBE30u;
    ctx->pc = 0x2bbe30u;
}
