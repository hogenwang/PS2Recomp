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

// Function: sub_001F6AD0
// Address: 0x1f6ad0 - 0x1f6b30
void sub_001F6AD0_0x1f6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6AD0_0x1f6ad0");
#endif

    switch (ctx->pc) {
        case 0x1f6aecu: goto label_1f6aec;
        default: break;
    }

    ctx->pc = 0x1f6ad0u;

    // 0x1f6ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6ad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f6ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6ae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f6ae4: 0xc07d928  jal         func_1F64A0
    ctx->pc = 0x1F6AE4u;
    SET_GPR_U32(ctx, 31, 0x1F6AECu);
    ctx->pc = 0x1F6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6AE4u;
    // 0x1f6ae8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F64A0u, 0x1F6AE4u, 0x1F6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AECu;
label_1f6aec:
    // 0x1f6aec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6AECu;
    {
        const bool branch_taken_0x1f6aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AECu;
        // 0x1f6af0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6aec) {
            ctx->pc = 0x1F6B10u;
            goto label_1f6b10;
        }
    }
    ctx->pc = 0x1F6AF4u;
    // 0x1f6af4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f6af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B04u;
        // 0x1f6b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B0Cu;
    // 0x1f6b0c: 0x0  nop
    ctx->pc = 0x1f6b0cu;
    // NOP
label_1f6b10:
    // 0x1f6b10: 0x8e242018  lw          $a0, 0x2018($s1)
    ctx->pc = 0x1f6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8216)));
    // 0x1f6b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6b1c: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x1f6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x1f6b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f6b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6b24: 0x807d754  j           func_1F5D50
    ctx->pc = 0x1F6B24u;
    ctx->pc = 0x1F6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B24u;
    // 0x1f6b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D50u, 0x1F6B24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F6B2Cu;
    // 0x1f6b2c: 0x0  nop
    ctx->pc = 0x1f6b2cu;
    // NOP
    if (ctx->pc == 0x1f6b2cu) { ctx->pc = 0x1f6b30u; }
}
