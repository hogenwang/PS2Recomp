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

// Function: sub_002FD060
// Address: 0x2fd060 - 0x2fd0b0
void sub_002FD060_0x2fd060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD060_0x2fd060");
#endif

    switch (ctx->pc) {
        case 0x2fd070u: goto label_2fd070;
        case 0x2fd084u: goto label_2fd084;
        default: break;
    }

    ctx->pc = 0x2fd060u;

    // 0x2fd060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fd064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fd068: 0xc047880  jal         func_11E200
    ctx->pc = 0x2FD068u;
    SET_GPR_U32(ctx, 31, 0x2FD070u);
    ctx->pc = 0x11E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E200u, 0x2FD068u, 0x2FD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD070u;
label_2fd070:
    // 0x2fd070: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD070u;
    {
        const bool branch_taken_0x2fd070 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fd070) {
            ctx->pc = 0x2FD090u;
            goto label_2fd090;
        }
    }
    ctx->pc = 0x2FD078u;
    // 0x2fd078: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fd078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fd07c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x2FD07Cu;
    SET_GPR_U32(ctx, 31, 0x2FD084u);
    ctx->pc = 0x2FD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD07Cu;
    // 0x2fd080: 0x24843060  addiu       $a0, $a0, 0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x2FD07Cu, 0x2FD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD084u;
label_2fd084:
    // 0x2fd084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd088: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x2fd088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fd08c: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x2fd08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2fd090:
    // 0x2fd090: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fd090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fd094: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fd094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fd098: 0xa0800c40  sb          $zero, 0xC40($a0)
    ctx->pc = 0x2fd098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3136), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fd09c: 0xa0600c38  sb          $zero, 0xC38($v1)
    ctx->pc = 0x2fd09cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3128), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fd0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0A4u;
        // 0x2fd0a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD0ACu;
    // 0x2fd0ac: 0x0  nop
    ctx->pc = 0x2fd0acu;
    // NOP
}
