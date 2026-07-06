#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEB48
// Address: 0x1feb48 - 0x1feb90
void sub_001FEB48_0x1feb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB48_0x1feb48");
#endif

    switch (ctx->pc) {
        case 0x1feb60u: goto label_1feb60;
        case 0x1feb78u: goto label_1feb78;
        default: break;
    }

    ctx->pc = 0x1feb48u;

    // 0x1feb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1feb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1feb4c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1feb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1feb50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1feb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1feb54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1feb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1feb58: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FEB58u;
    SET_GPR_U32(ctx, 31, 0x1FEB60u);
    ctx->pc = 0x1FEB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB58u;
            // 0x1feb5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB60u; }
        if (ctx->pc != 0x1FEB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB60u; }
        if (ctx->pc != 0x1FEB60u) { return; }
    }
    ctx->pc = 0x1FEB60u;
label_1feb60:
    // 0x1feb60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEB60u;
    {
        const bool branch_taken_0x1feb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB60u;
            // 0x1feb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb60) {
            ctx->pc = 0x1FEB70u;
            goto label_1feb70;
        }
    }
    ctx->pc = 0x1FEB68u;
    // 0x1feb68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEB68u;
    {
        const bool branch_taken_0x1feb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB68u;
            // 0x1feb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb68) {
            ctx->pc = 0x1FEB7Cu;
            goto label_1feb7c;
        }
    }
    ctx->pc = 0x1FEB70u;
label_1feb70:
    // 0x1feb70: 0xc07f41c  jal         func_1FD070
    ctx->pc = 0x1FEB70u;
    SET_GPR_U32(ctx, 31, 0x1FEB78u);
    ctx->pc = 0x1FD070u;
    if (runtime->hasFunction(0x1FD070u)) {
        auto targetFn = runtime->lookupFunction(0x1FD070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB78u; }
        if (ctx->pc != 0x1FEB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD070_0x1fd070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB78u; }
        if (ctx->pc != 0x1FEB78u) { return; }
    }
    ctx->pc = 0x1FEB78u;
label_1feb78:
    // 0x1feb78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1feb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1feb7c:
    // 0x1feb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1feb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feb84: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB84u;
            // 0x1feb88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEB8Cu;
    // 0x1feb8c: 0x0  nop
    ctx->pc = 0x1feb8cu;
    // NOP
    ctx->pc = 0x1feb90u;
}
