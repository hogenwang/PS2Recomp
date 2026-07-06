#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123150
// Address: 0x123150 - 0x123178
void sub_00123150_0x123150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123150_0x123150");
#endif

    switch (ctx->pc) {
        case 0x123164u: goto label_123164;
        default: break;
    }

    ctx->pc = 0x123150u;

    // 0x123150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12315c: 0xc04ae38  jal         func_12B8E0
    ctx->pc = 0x12315Cu;
    SET_GPR_U32(ctx, 31, 0x123164u);
    ctx->pc = 0x123160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12315Cu;
            // 0x123160: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B8E0u;
    if (runtime->hasFunction(0x12B8E0u)) {
        auto targetFn = runtime->lookupFunction(0x12B8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123164u; }
        if (ctx->pc != 0x123164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B8E0_0x12b8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123164u; }
        if (ctx->pc != 0x123164u) { return; }
    }
    ctx->pc = 0x123164u;
label_123164:
    // 0x123164: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x123164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12316c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12316cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x123170: 0x3e00008  jr          $ra
    ctx->pc = 0x123170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123170u;
            // 0x123174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123178u;
    ctx->pc = 0x123178u;
}
