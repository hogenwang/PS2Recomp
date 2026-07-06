#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF390
// Address: 0x1df390 - 0x1df3d8
void sub_001DF390_0x1df390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF390_0x1df390");
#endif

    switch (ctx->pc) {
        case 0x1df3c8u: goto label_1df3c8;
        default: break;
    }

    ctx->pc = 0x1df390u;

    // 0x1df390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df398: 0x8c8204d8  lw          $v0, 0x4D8($a0)
    ctx->pc = 0x1df398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1240)));
    // 0x1df39c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF39Cu;
    {
        const bool branch_taken_0x1df39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df39c) {
            ctx->pc = 0x1DF3B0u;
            goto label_1df3b0;
        }
    }
    ctx->pc = 0x1DF3A4u;
    // 0x1df3a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF3A4u;
    {
        const bool branch_taken_0x1df3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3A4u;
            // 0x1df3a8: 0xac8504d8  sw          $a1, 0x4D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1240), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3a4) {
            ctx->pc = 0x1DF3C8u;
            goto label_1df3c8;
        }
    }
    ctx->pc = 0x1DF3ACu;
    // 0x1df3ac: 0x0  nop
    ctx->pc = 0x1df3acu;
    // NOP
label_1df3b0:
    // 0x1df3b0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF3B0u;
    {
        const bool branch_taken_0x1df3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DF3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3B0u;
            // 0x1df3b4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df3b0) {
            ctx->pc = 0x1DF3C8u;
            goto label_1df3c8;
        }
    }
    ctx->pc = 0x1DF3B8u;
    // 0x1df3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df3bc: 0x2484ca68  addiu       $a0, $a0, -0x3598
    ctx->pc = 0x1df3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953576));
    // 0x1df3c0: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1DF3C0u;
    ctx->pc = 0x1DF3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3C0u;
            // 0x1df3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DF3C8u;
label_1df3c8:
    // 0x1df3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF3CCu;
            // 0x1df3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF3D4u;
    // 0x1df3d4: 0x0  nop
    ctx->pc = 0x1df3d4u;
    // NOP
    ctx->pc = 0x1df3d8u;
}
