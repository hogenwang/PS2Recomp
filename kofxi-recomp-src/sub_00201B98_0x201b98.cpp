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

// Function: sub_00201B98
// Address: 0x201b98 - 0x201c30
void sub_00201B98_0x201b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201B98_0x201b98");
#endif

    switch (ctx->pc) {
        case 0x201bb0u: goto label_201bb0;
        case 0x201bd4u: goto label_201bd4;
        case 0x201bf0u: goto label_201bf0;
        case 0x201c08u: goto label_201c08;
        case 0x201c10u: goto label_201c10;
        case 0x201c18u: goto label_201c18;
        case 0x201c20u: goto label_201c20;
        case 0x201c28u: goto label_201c28;
        default: break;
    }

    ctx->pc = 0x201b98u;

    // 0x201b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201ba0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x201ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x201ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ba8: 0x80801d8  j           func_200760
    ctx->pc = 0x201BA8u;
    ctx->pc = 0x201BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BA8u;
    // 0x201bac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200760u, 0x201BA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x201BB0u;
label_201bb0:
    // 0x201bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201bb4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x201bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x201bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x201bc4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x201bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x201bc8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x201bc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x201bcc: 0xc0801e0  jal         func_200780
    ctx->pc = 0x201BCCu;
    SET_GPR_U32(ctx, 31, 0x201BD4u);
    ctx->pc = 0x201BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BCCu;
    // 0x201bd0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200780u, 0x201BCCu, 0x201BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201BD4u;
label_201bd4:
    // 0x201bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201bd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x201bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201be4: 0x808068e  j           func_201A38
    ctx->pc = 0x201BE4u;
    ctx->pc = 0x201BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201BE4u;
    // 0x201be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A38u;
    sub_00201A38_0x201a38(rdram, ctx, runtime); return;
    ctx->pc = 0x201BECu;
    // 0x201bec: 0x0  nop
    ctx->pc = 0x201becu;
    // NOP
label_201bf0:
    // 0x201bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201bf8: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x201bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x201bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201c00: 0x80801e6  j           func_200798
    ctx->pc = 0x201C00u;
    ctx->pc = 0x201C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C00u;
    // 0x201c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200798u, 0x201C00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x201C08u;
label_201c08:
    // 0x201c08: 0x3e00008  jr          $ra
    ctx->pc = 0x201C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C08u;
        // 0x201c0c: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C10u;
label_201c10:
    // 0x201c10: 0x3e00008  jr          $ra
    ctx->pc = 0x201C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C10u;
        // 0x201c14: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C18u;
label_201c18:
    // 0x201c18: 0x3e00008  jr          $ra
    ctx->pc = 0x201C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C18u;
        // 0x201c1c: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C20u;
label_201c20:
    // 0x201c20: 0x3e00008  jr          $ra
    ctx->pc = 0x201C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C20u;
        // 0x201c24: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C28u;
label_201c28:
    // 0x201c28: 0x3e00008  jr          $ra
    ctx->pc = 0x201C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C28u;
        // 0x201c2c: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C30u;
}
