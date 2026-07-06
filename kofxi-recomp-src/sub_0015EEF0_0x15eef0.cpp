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

// Function: sub_0015EEF0
// Address: 0x15eef0 - 0x15ef60
void sub_0015EEF0_0x15eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EEF0_0x15eef0");
#endif

    switch (ctx->pc) {
        case 0x15ef18u: goto label_15ef18;
        case 0x15ef28u: goto label_15ef28;
        default: break;
    }

    ctx->pc = 0x15eef0u;

    // 0x15eef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15eef4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15eef8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15eefc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ef00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ef04: 0x904244a0  lbu         $v0, 0x44A0($v0)
    ctx->pc = 0x15ef04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17568)));
    // 0x15ef08: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15EF08u;
    {
        const bool branch_taken_0x15ef08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF08u;
        // 0x15ef0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef08) {
            ctx->pc = 0x15EF40u;
            goto label_15ef40;
        }
    }
    ctx->pc = 0x15EF10u;
    // 0x15ef10: 0x3c11009b  lui         $s1, 0x9B
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)155 << 16));
    // 0x15ef14: 0x263144a0  addiu       $s1, $s1, 0x44A0
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17568));
label_15ef18:
    // 0x15ef18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15ef1c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15ef20: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x15EF20u;
    SET_GPR_U32(ctx, 31, 0x15EF28u);
    ctx->pc = 0x15EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF20u;
    // 0x15ef24: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x15EF20u, 0x15EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF28u;
label_15ef28:
    // 0x15ef28: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ef2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ef2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15ef30: 0x904244a0  lbu         $v0, 0x44A0($v0)
    ctx->pc = 0x15ef30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17568)));
    // 0x15ef34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15ef34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15ef38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15EF38u;
    {
        const bool branch_taken_0x15ef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF38u;
        // 0x15ef3c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef38) {
            ctx->pc = 0x15EF18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ef18;
        }
    }
    ctx->pc = 0x15EF40u;
label_15ef40:
    // 0x15ef40: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ef44: 0xa04044a0  sb          $zero, 0x44A0($v0)
    ctx->pc = 0x15ef44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17568), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ef48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ef4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15ef4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ef50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ef54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ef54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ef58: 0x3e00008  jr          $ra
    ctx->pc = 0x15EF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF58u;
        // 0x15ef5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EF60u;
}
