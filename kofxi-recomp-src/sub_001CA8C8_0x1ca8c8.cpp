#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA8C8
// Address: 0x1ca8c8 - 0x1ca918
void sub_001CA8C8_0x1ca8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA8C8_0x1ca8c8");
#endif

    switch (ctx->pc) {
        case 0x1ca8f8u: goto label_1ca8f8;
        default: break;
    }

    ctx->pc = 0x1ca8c8u;

    // 0x1ca8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca8cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ca8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ca8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca8d4: 0x245086e0  addiu       $s0, $v0, -0x7920
    ctx->pc = 0x1ca8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936288));
    // 0x1ca8d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca8dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA8DCu;
    {
        const bool branch_taken_0x1ca8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8DCu;
            // 0x1ca8e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8dc) {
            ctx->pc = 0x1CA8FCu;
            goto label_1ca8fc;
        }
    }
    ctx->pc = 0x1CA8E4u;
    // 0x1ca8e4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ca8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ca8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca8ec: 0x248486e8  addiu       $a0, $a0, -0x7918
    ctx->pc = 0x1ca8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936296));
    // 0x1ca8f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CA8F0u;
    SET_GPR_U32(ctx, 31, 0x1CA8F8u);
    ctx->pc = 0x1CA8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA8F0u;
            // 0x1ca8f4: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA8F8u; }
        if (ctx->pc != 0x1CA8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA8F8u; }
        if (ctx->pc != 0x1CA8F8u) { return; }
    }
    ctx->pc = 0x1CA8F8u;
label_1ca8f8:
    // 0x1ca8f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca8fc:
    // 0x1ca8fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca904: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ca904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ca908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA90Cu;
            // 0x1ca910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA914u;
    // 0x1ca914: 0x0  nop
    ctx->pc = 0x1ca914u;
    // NOP
    ctx->pc = 0x1ca918u;
}
