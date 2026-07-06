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

// Function: sub_001B6C08
// Address: 0x1b6c08 - 0x1b6c60
void sub_001B6C08_0x1b6c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6C08_0x1b6c08");
#endif

    switch (ctx->pc) {
        case 0x1b6c1cu: goto label_1b6c1c;
        case 0x1b6c24u: goto label_1b6c24;
        case 0x1b6c30u: goto label_1b6c30;
        case 0x1b6c38u: goto label_1b6c38;
        case 0x1b6c58u: goto label_1b6c58;
        default: break;
    }

    ctx->pc = 0x1b6c08u;

    // 0x1b6c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6c10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6c14: 0xc06dbcc  jal         func_1B6F30
    ctx->pc = 0x1B6C14u;
    SET_GPR_U32(ctx, 31, 0x1B6C1Cu);
    ctx->pc = 0x1B6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C14u;
    // 0x1b6c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F30u, 0x1B6C14u, 0x1B6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C1Cu;
label_1b6c1c:
    // 0x1b6c1c: 0xc06dada  jal         func_1B6B68
    ctx->pc = 0x1B6C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C24u);
    ctx->pc = 0x1B6C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C1Cu;
    // 0x1b6c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6B68u, 0x1B6C1Cu, 0x1B6C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C24u;
label_1b6c24:
    // 0x1b6c24: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1b6c24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1b6c28: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6C28u;
    {
        const bool branch_taken_0x1b6c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c28) {
            ctx->pc = 0x1B6C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C28u;
            // 0x1b6c2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C48u;
            goto label_1b6c48;
        }
    }
    ctx->pc = 0x1B6C30u;
label_1b6c30:
    // 0x1b6c30: 0xc06c6b8  jal         func_1B1AE0
    ctx->pc = 0x1B6C30u;
    SET_GPR_U32(ctx, 31, 0x1B6C38u);
    ctx->pc = 0x1B1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AE0u, 0x1B6C30u, 0x1B6C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C38u;
label_1b6c38:
    // 0x1b6c38: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1b6c38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1b6c3c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B6C3Cu;
    {
        const bool branch_taken_0x1b6c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c3c) {
            ctx->pc = 0x1B6C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6c30;
        }
    }
    ctx->pc = 0x1B6C44u;
    // 0x1b6c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6c48:
    // 0x1b6c48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C4Cu;
        // 0x1b6c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C54u;
    // 0x1b6c54: 0x0  nop
    ctx->pc = 0x1b6c54u;
    // NOP
label_1b6c58:
    // 0x1b6c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C58u;
        // 0x1b6c5c: 0x80820049  lb          $v0, 0x49($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 73)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C60u;
}
