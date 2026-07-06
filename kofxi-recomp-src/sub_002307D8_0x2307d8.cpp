#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002307D8
// Address: 0x2307d8 - 0x230810
void sub_002307D8_0x2307d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002307D8_0x2307d8");
#endif

    switch (ctx->pc) {
        case 0x230804u: goto label_230804;
        default: break;
    }

    ctx->pc = 0x2307d8u;

    // 0x2307d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2307d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2307dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2307dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2307e0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2307e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2307e4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2307e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2307e8: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2307e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2307ec: 0x948200b0  lhu         $v0, 0xB0($a0)
    ctx->pc = 0x2307ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2307f0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2307f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2307f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2307F4u;
    {
        const bool branch_taken_0x2307f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2307F4u;
            // 0x2307f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307f4) {
            ctx->pc = 0x230808u;
            goto label_230808;
        }
    }
    ctx->pc = 0x2307FCu;
    // 0x2307fc: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x2307FCu;
    SET_GPR_U32(ctx, 31, 0x230804u);
    ctx->pc = 0x230800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2307FCu;
            // 0x230800: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (runtime->hasFunction(0x2308F0u)) {
        auto targetFn = runtime->lookupFunction(0x2308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230804u; }
        if (ctx->pc != 0x230804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308F0_0x2308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230804u; }
        if (ctx->pc != 0x230804u) { return; }
    }
    ctx->pc = 0x230804u;
label_230804:
    // 0x230804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230808:
    // 0x230808: 0x3e00008  jr          $ra
    ctx->pc = 0x230808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230808u;
            // 0x23080c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x230810u;
    ctx->pc = 0x230810u;
}
