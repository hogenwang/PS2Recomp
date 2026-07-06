#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F51A0
// Address: 0x1f51a0 - 0x1f51e8
void sub_001F51A0_0x1f51a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F51A0_0x1f51a0");
#endif

    switch (ctx->pc) {
        case 0x1f51b8u: goto label_1f51b8;
        default: break;
    }

    ctx->pc = 0x1f51a0u;

    // 0x1f51a0: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1f51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f51a4: 0x24841708  addiu       $a0, $a0, 0x1708
    ctx->pc = 0x1f51a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5896));
    // 0x1f51a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f51a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51ac: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x1f51acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1f51b0: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1f51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1f51b4: 0x0  nop
    ctx->pc = 0x1f51b4u;
    // NOP
label_1f51b8:
    // 0x1f51b8: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x1f51b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x1f51bc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1f51bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51c0: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F51C0u;
    {
        const bool branch_taken_0x1f51c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F51C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51C0u;
            // 0x1f51c4: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51c0) {
            ctx->pc = 0x1F51E0u;
            goto label_1f51e0;
        }
    }
    ctx->pc = 0x1F51C8u;
    // 0x1f51c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f51c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f51cc: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1f51ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f51d0: 0x0  nop
    ctx->pc = 0x1f51d0u;
    // NOP
    // 0x1f51d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F51D4u;
    {
        const bool branch_taken_0x1f51d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F51D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F51D4u;
            // 0x1f51d8: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51d4) {
            ctx->pc = 0x1F51B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f51b8;
        }
    }
    ctx->pc = 0x1F51DCu;
    // 0x1f51dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f51dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f51e0:
    // 0x1f51e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F51E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F51E8u;
    ctx->pc = 0x1f51e8u;
}
