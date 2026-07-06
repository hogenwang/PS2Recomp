#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB918
// Address: 0x1eb918 - 0x1eb960
void sub_001EB918_0x1eb918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB918_0x1eb918");
#endif

    switch (ctx->pc) {
        case 0x1eb930u: goto label_1eb930;
        case 0x1eb944u: goto label_1eb944;
        default: break;
    }

    ctx->pc = 0x1eb918u;

    // 0x1eb918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb91c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1eb920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb924: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1eb924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1eb928: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EB928u;
    SET_GPR_U32(ctx, 31, 0x1EB930u);
    ctx->pc = 0x1EB92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB928u;
            // 0x1eb92c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB930u; }
        if (ctx->pc != 0x1EB930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB930u; }
        if (ctx->pc != 0x1EB930u) { return; }
    }
    ctx->pc = 0x1EB930u;
label_1eb930:
    // 0x1eb930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb934: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB934u;
    {
        const bool branch_taken_0x1eb934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB934u;
            // 0x1eb938: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb934) {
            ctx->pc = 0x1EB94Cu;
            goto label_1eb94c;
        }
    }
    ctx->pc = 0x1EB93Cu;
    // 0x1eb93c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EB93Cu;
    SET_GPR_U32(ctx, 31, 0x1EB944u);
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB944u; }
        if (ctx->pc != 0x1EB944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB944u; }
        if (ctx->pc != 0x1EB944u) { return; }
    }
    ctx->pc = 0x1EB944u;
label_1eb944:
    // 0x1eb944: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB944u;
    {
        const bool branch_taken_0x1eb944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB944u;
            // 0x1eb948: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb944) {
            ctx->pc = 0x1EB954u;
            goto label_1eb954;
        }
    }
    ctx->pc = 0x1EB94Cu;
label_1eb94c:
    // 0x1eb94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb954:
    // 0x1eb954: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1eb954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb958: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB958u;
            // 0x1eb95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB960u;
    ctx->pc = 0x1eb960u;
}
