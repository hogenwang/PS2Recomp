#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB8D0
// Address: 0x1eb8d0 - 0x1eb918
void sub_001EB8D0_0x1eb8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB8D0_0x1eb8d0");
#endif

    switch (ctx->pc) {
        case 0x1eb8e8u: goto label_1eb8e8;
        case 0x1eb8fcu: goto label_1eb8fc;
        default: break;
    }

    ctx->pc = 0x1eb8d0u;

    // 0x1eb8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb8d4: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1eb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1eb8d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb8dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1eb8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1eb8e0: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EB8E0u;
    SET_GPR_U32(ctx, 31, 0x1EB8E8u);
    ctx->pc = 0x1EB8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8E0u;
            // 0x1eb8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8E8u; }
        if (ctx->pc != 0x1EB8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8E8u; }
        if (ctx->pc != 0x1EB8E8u) { return; }
    }
    ctx->pc = 0x1EB8E8u;
label_1eb8e8:
    // 0x1eb8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eb8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb8ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB8ECu;
    {
        const bool branch_taken_0x1eb8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8ECu;
            // 0x1eb8f0: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8ec) {
            ctx->pc = 0x1EB904u;
            goto label_1eb904;
        }
    }
    ctx->pc = 0x1EB8F4u;
    // 0x1eb8f4: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EB8F4u;
    SET_GPR_U32(ctx, 31, 0x1EB8FCu);
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8FCu; }
        if (ctx->pc != 0x1EB8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8FCu; }
        if (ctx->pc != 0x1EB8FCu) { return; }
    }
    ctx->pc = 0x1EB8FCu;
label_1eb8fc:
    // 0x1eb8fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB8FCu;
    {
        const bool branch_taken_0x1eb8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB8FCu;
            // 0x1eb900: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8fc) {
            ctx->pc = 0x1EB90Cu;
            goto label_1eb90c;
        }
    }
    ctx->pc = 0x1EB904u;
label_1eb904:
    // 0x1eb904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb90c:
    // 0x1eb90c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1eb90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb910: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB910u;
            // 0x1eb914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB918u;
    ctx->pc = 0x1eb918u;
}
