#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003058E0
// Address: 0x3058e0 - 0x305940
void sub_003058E0_0x3058e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003058E0_0x3058e0");
#endif

    switch (ctx->pc) {
        case 0x305914u: goto label_305914;
        case 0x305928u: goto label_305928;
        default: break;
    }

    ctx->pc = 0x3058e0u;

    // 0x3058e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3058e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3058e4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3058e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3058e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3058e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3058ec: 0x904395c0  lbu         $v1, -0x6A40($v0)
    ctx->pc = 0x3058ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x3058f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3058f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3058f4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3058F4u;
    {
        const bool branch_taken_0x3058f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3058f4) {
            ctx->pc = 0x30591Cu;
            goto label_30591c;
        }
    }
    ctx->pc = 0x3058FCu;
    // 0x3058fc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3058fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x305900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305904: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x305908: 0x2484c510  addiu       $a0, $a0, -0x3AF0
    ctx->pc = 0x305908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952208));
    // 0x30590c: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x30590Cu;
    SET_GPR_U32(ctx, 31, 0x305914u);
    ctx->pc = 0x305910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30590Cu;
            // 0x305910: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (runtime->hasFunction(0x3059E0u)) {
        auto targetFn = runtime->lookupFunction(0x3059E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305914u; }
        if (ctx->pc != 0x305914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003059E0_0x3059e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305914u; }
        if (ctx->pc != 0x305914u) { return; }
    }
    ctx->pc = 0x305914u;
label_305914:
    // 0x305914: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x305914u;
    {
        const bool branch_taken_0x305914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305914u;
            // 0x305918: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305914) {
            ctx->pc = 0x30592Cu;
            goto label_30592c;
        }
    }
    ctx->pc = 0x30591Cu;
label_30591c:
    // 0x30591c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30591cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305920: 0xc0c1650  jal         func_305940
    ctx->pc = 0x305920u;
    SET_GPR_U32(ctx, 31, 0x305928u);
    ctx->pc = 0x305924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305920u;
            // 0x305924: 0xa04095c0  sb          $zero, -0x6A40($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305940u;
    if (runtime->hasFunction(0x305940u)) {
        auto targetFn = runtime->lookupFunction(0x305940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305928u; }
        if (ctx->pc != 0x305928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305940_0x305940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305928u; }
        if (ctx->pc != 0x305928u) { return; }
    }
    ctx->pc = 0x305928u;
label_305928:
    // 0x305928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30592c:
    // 0x30592c: 0x3e00008  jr          $ra
    ctx->pc = 0x30592Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30592Cu;
            // 0x305930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305934u;
    // 0x305934: 0x0  nop
    ctx->pc = 0x305934u;
    // NOP
    // 0x305938: 0x0  nop
    ctx->pc = 0x305938u;
    // NOP
    // 0x30593c: 0x0  nop
    ctx->pc = 0x30593cu;
    // NOP
    ctx->pc = 0x305940u;
}
