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

// Function: sub_00231A08
// Address: 0x231a08 - 0x231a60
void sub_00231A08_0x231a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A08_0x231a08");
#endif

    switch (ctx->pc) {
        case 0x231a20u: goto label_231a20;
        case 0x231a40u: goto label_231a40;
        default: break;
    }

    ctx->pc = 0x231a08u;

    // 0x231a08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231a0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231a10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x231a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x231a18: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x231A18u;
    SET_GPR_U32(ctx, 31, 0x231A20u);
    ctx->pc = 0x231A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A18u;
    // 0x231a1c: 0x3c1101c1  lui         $s1, 0x1C1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x231A18u, 0x231A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A20u;
label_231a20:
    // 0x231a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a24: 0x8e22acc4  lw          $v0, -0x533C($s1)
    ctx->pc = 0x231a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945988)));
    // 0x231a28: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231A28u;
    {
        const bool branch_taken_0x231a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x231A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A28u;
        // 0x231a2c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a28) {
            ctx->pc = 0x231A38u;
            goto label_231a38;
        }
    }
    ctx->pc = 0x231A30u;
    // 0x231a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x231A30u;
    {
        const bool branch_taken_0x231a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A30u;
        // 0x231a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a30) {
            ctx->pc = 0x231A48u;
            goto label_231a48;
        }
    }
    ctx->pc = 0x231A38u;
label_231a38:
    // 0x231a38: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x231A38u;
    SET_GPR_U32(ctx, 31, 0x231A40u);
    ctx->pc = 0x231A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A38u;
    // 0x231a3c: 0x8c44fa20  lw          $a0, -0x5E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x231A38u, 0x231A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A40u;
label_231a40:
    // 0x231a40: 0xae30acc4  sw          $s0, -0x533C($s1)
    ctx->pc = 0x231a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945988), GPR_U32(ctx, 16));
    // 0x231a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231a48:
    // 0x231a48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x231a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231a4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231a50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a54: 0x3e00008  jr          $ra
    ctx->pc = 0x231A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A54u;
        // 0x231a58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A5Cu;
    // 0x231a5c: 0x0  nop
    ctx->pc = 0x231a5cu;
    // NOP
    if (ctx->pc == 0x231a5cu) { ctx->pc = 0x231a60u; }
}
