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

// Function: sub_00201AE0
// Address: 0x201ae0 - 0x201b60
void sub_00201AE0_0x201ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201AE0_0x201ae0");
#endif

    switch (ctx->pc) {
        case 0x201b10u: goto label_201b10;
        case 0x201b18u: goto label_201b18;
        case 0x201b20u: goto label_201b20;
        case 0x201b28u: goto label_201b28;
        case 0x201b30u: goto label_201b30;
        case 0x201b48u: goto label_201b48;
        default: break;
    }

    ctx->pc = 0x201ae0u;

    // 0x201ae0: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x201ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x201ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201ae8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x201ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201aec: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x201AECu;
    {
        const bool branch_taken_0x201aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x201aec) {
            ctx->pc = 0x201AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201AECu;
            // 0x201af0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201B00u;
            goto label_201b00;
        }
    }
    ctx->pc = 0x201AF4u;
    // 0x201af4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x201af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x201af8: 0x3e00008  jr          $ra
    ctx->pc = 0x201AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AF8u;
        // 0x201afc: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B00u;
label_201b00:
    // 0x201b00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x201b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201b04: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x201b04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x201b08: 0x3e00008  jr          $ra
    ctx->pc = 0x201B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B08u;
        // 0x201b0c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B10u;
label_201b10:
    // 0x201b10: 0x3e00008  jr          $ra
    ctx->pc = 0x201B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B10u;
        // 0x201b14: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B18u;
label_201b18:
    // 0x201b18: 0x3e00008  jr          $ra
    ctx->pc = 0x201B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B18u;
        // 0x201b1c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B20u;
label_201b20:
    // 0x201b20: 0x3e00008  jr          $ra
    ctx->pc = 0x201B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B20u;
        // 0x201b24: 0xac85002c  sw          $a1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B28u;
label_201b28:
    // 0x201b28: 0x3e00008  jr          $ra
    ctx->pc = 0x201B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B28u;
        // 0x201b2c: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B30u;
label_201b30:
    // 0x201b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201b38: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x201b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x201b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201b40: 0x80809ba  j           func_2026E8
    ctx->pc = 0x201B40u;
    ctx->pc = 0x201B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B40u;
    // 0x201b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2026E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2026E8u, 0x201B40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x201B48u;
label_201b48:
    // 0x201b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201b50: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x201b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x201b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201b58: 0x80809e0  j           func_202780
    ctx->pc = 0x201B58u;
    ctx->pc = 0x201B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B58u;
    // 0x201b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202780u, 0x201B58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x201B60u;
}
