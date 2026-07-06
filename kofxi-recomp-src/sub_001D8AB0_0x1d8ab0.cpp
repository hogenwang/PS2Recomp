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

// Function: sub_001D8AB0
// Address: 0x1d8ab0 - 0x1d8b00
void sub_001D8AB0_0x1d8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8AB0_0x1d8ab0");
#endif

    switch (ctx->pc) {
        case 0x1d8ac4u: goto label_1d8ac4;
        default: break;
    }

    ctx->pc = 0x1d8ab0u;

    // 0x1d8ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8ab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8abc: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D8ABCu;
    SET_GPR_U32(ctx, 31, 0x1D8AC4u);
    ctx->pc = 0x1D8AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ABCu;
    // 0x1d8ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D8ABCu, 0x1D8AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AC4u;
label_1d8ac4:
    // 0x1d8ac4: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d8ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1d8ac8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8acc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8ACCu;
    {
        const bool branch_taken_0x1d8acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ACCu;
        // 0x1d8ad0: 0x34a50103  ori         $a1, $a1, 0x103 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)259);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8acc) {
            ctx->pc = 0x1D8AE8u;
            goto label_1d8ae8;
        }
    }
    ctx->pc = 0x1D8AD4u;
    // 0x1d8ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8adc: 0x80761c6  j           func_1D8718
    ctx->pc = 0x1D8ADCu;
    ctx->pc = 0x1D8AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ADCu;
    // 0x1d8ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8718u, 0x1D8ADCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D8AE4u;
    // 0x1d8ae4: 0x0  nop
    ctx->pc = 0x1d8ae4u;
    // NOP
label_1d8ae8:
    // 0x1d8ae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8aec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8af0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d8af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AF8u;
        // 0x1d8afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B00u;
}
