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

// Function: sub_002C1210
// Address: 0x2c1210 - 0x2c1240
void sub_002C1210_0x2c1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1210_0x2c1210");
#endif

    switch (ctx->pc) {
        case 0x2c121cu: goto label_2c121c;
        default: break;
    }

    ctx->pc = 0x2c1210u;

    // 0x2c1210: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1210u;
    {
        const bool branch_taken_0x2c1210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1210u;
        // 0x2c1214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1210) {
            ctx->pc = 0x2C1234u;
            goto label_2c1234;
        }
    }
    ctx->pc = 0x2C1218u;
    // 0x2c1218: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2c121c:
    if (ctx->pc == 0x2C121Cu) {
        ctx->pc = 0x2C121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1218u;
        // 0x2c121c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1220u;
        goto label_fallthrough_0x2c1218;
    }
    ctx->pc = 0x2C1218u;
    {
        const bool branch_taken_0x2c1218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1218u;
        // 0x2c121c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1218) {
            ctx->pc = 0x2C1228u;
            goto label_2c1228;
        }
    }
label_fallthrough_0x2c1218:
    ctx->pc = 0x2C1220u;
    // 0x2c1220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C1220u;
    {
        const bool branch_taken_0x2c1220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1220u;
        // 0x2c1224: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1220) {
            ctx->pc = 0x2C122Cu;
            goto label_2c122c;
        }
    }
    ctx->pc = 0x2C1228u;
label_2c1228:
    // 0x2c1228: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x2c1228u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
label_2c122c:
    // 0x2c122c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C122Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C122Cu;
        // 0x2c1230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C122Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1234u;
label_2c1234:
    // 0x2c1234: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C123Cu;
    // 0x2c123c: 0x0  nop
    ctx->pc = 0x2c123cu;
    // NOP
    if (ctx->pc == 0x2c123cu) { ctx->pc = 0x2c1240u; }
}
