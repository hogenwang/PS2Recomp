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

// Function: sub_001A47C0
// Address: 0x1a47c0 - 0x1a4810
void sub_001A47C0_0x1a47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A47C0_0x1a47c0");
#endif

    switch (ctx->pc) {
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47f8u: goto label_1a47f8;
        default: break;
    }

    ctx->pc = 0x1a47c0u;

    // 0x1a47c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a47c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a47c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47c8: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1a47c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a47cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A47CCu;
    {
        const bool branch_taken_0x1a47cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47CCu;
        // 0x1a47d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47cc) {
            ctx->pc = 0x1A47D8u;
            goto label_1a47d8;
        }
    }
    ctx->pc = 0x1A47D4u;
    // 0x1a47d4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a47d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a47d8:
    // 0x1a47d8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a47d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a47dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a47dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a47e0: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A47E0u;
    SET_GPR_U32(ctx, 31, 0x1A47E8u);
    ctx->pc = 0x1A47E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47E0u;
    // 0x1a47e4: 0x24a568f0  addiu       $a1, $a1, 0x68F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A47E0u, 0x1A47E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47E8u;
label_1a47e8:
    // 0x1a47e8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a47ec: 0x8c45b7d8  lw          $a1, -0x4828($v0)
    ctx->pc = 0x1a47ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x1a47f0: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x1A47F0u;
    SET_GPR_U32(ctx, 31, 0x1A47F8u);
    ctx->pc = 0x1A47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47F0u;
    // 0x1a47f4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x1A47F0u, 0x1A47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47F8u;
label_1a47f8:
    // 0x1a47f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a47f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a47fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A47FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47FCu;
        // 0x1a4800: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4804u;
    // 0x1a4804: 0x0  nop
    ctx->pc = 0x1a4804u;
    // NOP
    // 0x1a4808: 0x0  nop
    ctx->pc = 0x1a4808u;
    // NOP
    // 0x1a480c: 0x0  nop
    ctx->pc = 0x1a480cu;
    // NOP
}
