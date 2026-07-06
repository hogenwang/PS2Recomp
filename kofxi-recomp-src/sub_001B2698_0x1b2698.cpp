#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2698
// Address: 0x1b2698 - 0x1b26d8
void sub_001B2698_0x1b2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2698_0x1b2698");
#endif

    switch (ctx->pc) {
        case 0x1b26b8u: goto label_1b26b8;
        case 0x1b26d0u: goto label_1b26d0;
        default: break;
    }

    ctx->pc = 0x1b2698u;

    // 0x1b2698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b269c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B269Cu;
    {
        const bool branch_taken_0x1b269c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B26A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B269Cu;
            // 0x1b26a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b269c) {
            ctx->pc = 0x1B26B8u;
            goto label_1b26b8;
        }
    }
    ctx->pc = 0x1B26A4u;
    // 0x1b26a4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b26a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b26a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b26a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b26ac: 0x24847d90  addiu       $a0, $a0, 0x7D90
    ctx->pc = 0x1b26acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32144));
    // 0x1b26b0: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B26B0u;
    ctx->pc = 0x1B26B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26B0u;
            // 0x1b26b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B26B8u;
label_1b26b8:
    // 0x1b26b8: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b26b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b26bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B26BCu;
    {
        const bool branch_taken_0x1b26bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B26C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26BCu;
            // 0x1b26c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26bc) {
            ctx->pc = 0x1B26D0u;
            goto label_1b26d0;
        }
    }
    ctx->pc = 0x1B26C4u;
    // 0x1b26c4: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x1b26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1b26c8: 0x807186c  j           func_1C61B0
    ctx->pc = 0x1B26C8u;
    ctx->pc = 0x1B26CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26C8u;
            // 0x1b26cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C61B0u;
    if (runtime->hasFunction(0x1C61B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C61B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C61B0_0x1c61b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B26D0u;
label_1b26d0:
    // 0x1b26d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B26D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B26D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26D0u;
            // 0x1b26d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B26D8u;
    ctx->pc = 0x1b26d8u;
}
