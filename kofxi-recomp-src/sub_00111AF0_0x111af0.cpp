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

// Function: sub_00111AF0
// Address: 0x111af0 - 0x111b48
void sub_00111AF0_0x111af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111AF0_0x111af0");
#endif

    switch (ctx->pc) {
        case 0x111b30u: goto label_111b30;
        default: break;
    }

    ctx->pc = 0x111af0u;

    // 0x111af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x111af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111af8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x111afc: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x111afcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x111b00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111b04: 0x8e028744  lw          $v0, -0x78BC($s0)
    ctx->pc = 0x111b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936388)));
    // 0x111b08: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x111B08u;
    {
        const bool branch_taken_0x111b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x111B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B08u;
        // 0x111b0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b08) {
            ctx->pc = 0x111B38u;
            goto label_111b38;
        }
    }
    ctx->pc = 0x111B10u;
    // 0x111b10: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x111b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x111b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x111b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111b18: 0x2442a848  addiu       $v0, $v0, -0x57B8
    ctx->pc = 0x111b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944840));
    // 0x111b1c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x111b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x111b20: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x111b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x111b24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b28: 0xc043318  jal         func_10CC60
    ctx->pc = 0x111B28u;
    SET_GPR_U32(ctx, 31, 0x111B30u);
    ctx->pc = 0x111B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B28u;
    // 0x111b2c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x111B28u, 0x111B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B30u;
label_111b30:
    // 0x111b30: 0xae028744  sw          $v0, -0x78BC($s0)
    ctx->pc = 0x111b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936388), GPR_U32(ctx, 2));
    // 0x111b34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111b38:
    // 0x111b38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x111B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B3Cu;
        // 0x111b40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111B44u;
    // 0x111b44: 0x0  nop
    ctx->pc = 0x111b44u;
    // NOP
    if (ctx->pc == 0x111b44u) { ctx->pc = 0x111b48u; }
}
