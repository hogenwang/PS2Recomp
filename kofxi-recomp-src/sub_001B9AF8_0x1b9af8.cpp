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

// Function: sub_001B9AF8
// Address: 0x1b9af8 - 0x1b9b48
void sub_001B9AF8_0x1b9af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9AF8_0x1b9af8");
#endif

    switch (ctx->pc) {
        case 0x1b9b10u: goto label_1b9b10;
        default: break;
    }

    ctx->pc = 0x1b9af8u;

    // 0x1b9af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9afc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9AFCu;
    {
        const bool branch_taken_0x1b9afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AFCu;
        // 0x1b9b00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9afc) {
            ctx->pc = 0x1B9B18u;
            goto label_1b9b18;
        }
    }
    ctx->pc = 0x1B9B04u;
    // 0x1b9b04: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9b08: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B9B08u;
    SET_GPR_U32(ctx, 31, 0x1B9B10u);
    ctx->pc = 0x1B9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B08u;
    // 0x1b9b0c: 0x24848148  addiu       $a0, $a0, -0x7EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B9B08u, 0x1B9B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B10u;
label_1b9b10:
    // 0x1b9b10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9B10u;
    {
        const bool branch_taken_0x1b9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B10u;
        // 0x1b9b14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b10) {
            ctx->pc = 0x1B9B38u;
            goto label_1b9b38;
        }
    }
    ctx->pc = 0x1B9B18u;
label_1b9b18:
    // 0x1b9b18: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1b9b18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b9b1c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b9b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9b20: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9B20u;
    {
        const bool branch_taken_0x1b9b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b20) {
            ctx->pc = 0x1B9B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B20u;
            // 0x1b9b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B38u;
            goto label_1b9b38;
        }
    }
    ctx->pc = 0x1B9B28u;
    // 0x1b9b28: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9b30: 0x806d8b4  j           func_1B62D0
    ctx->pc = 0x1B9B30u;
    ctx->pc = 0x1B9B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B30u;
    // 0x1b9b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    sub_001B62D0_0x1b62d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9B38u;
label_1b9b38:
    // 0x1b9b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B3Cu;
        // 0x1b9b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9B44u;
    // 0x1b9b44: 0x0  nop
    ctx->pc = 0x1b9b44u;
    // NOP
}
