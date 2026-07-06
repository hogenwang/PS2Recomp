#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5870
// Address: 0x1a5870 - 0x1a58d0
void sub_001A5870_0x1a5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5870_0x1a5870");
#endif

    switch (ctx->pc) {
        case 0x1a588cu: goto label_1a588c;
        default: break;
    }

    ctx->pc = 0x1a5870u;

    // 0x1a5870: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a5870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a5874: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x1a5878: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a5878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a587c: 0xac60b7f8  sw          $zero, -0x4808($v1)
    ctx->pc = 0x1a587cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948856), GPR_U32(ctx, 0));
    // 0x1a5880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5884: 0x24a5b850  addiu       $a1, $a1, -0x47B0
    ctx->pc = 0x1a5884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948944));
    // 0x1a5888: 0x2484b800  addiu       $a0, $a0, -0x4800
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948864));
label_1a588c:
    // 0x1a588c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1a588cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1a5890: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x1a5890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1a5894: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5898: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x1a5898u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1a589c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1a589cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1a58a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a58a4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1a58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1a58a8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a58ac: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1a58acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1a58b0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a58b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a58b4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1a58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1a58b8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1a58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1a58bc: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x1a58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1a58c0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A58C0u;
    {
        const bool branch_taken_0x1a58c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58C0u;
        // 0x1a58c4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58c0) {
            ctx->pc = 0x1A588Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a588c;
        }
    }
    ctx->pc = 0x1A58C8u;
    // 0x1a58c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A58C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A58C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A58D0u;
}
