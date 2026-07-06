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

// Function: sub_002FC700
// Address: 0x2fc700 - 0x2fc7a0
void sub_002FC700_0x2fc700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC700_0x2fc700");
#endif

    switch (ctx->pc) {
        case 0x2fc710u: goto label_2fc710;
        case 0x2fc730u: goto label_2fc730;
        case 0x2fc750u: goto label_2fc750;
        case 0x2fc770u: goto label_2fc770;
        case 0x2fc790u: goto label_2fc790;
        default: break;
    }

    ctx->pc = 0x2fc700u;

    // 0x2fc700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc708: 0xc08a262  jal         func_228988
    ctx->pc = 0x2FC708u;
    SET_GPR_U32(ctx, 31, 0x2FC710u);
    ctx->pc = 0x2FC70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC708u;
    // 0x2fc70c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x2FC708u, 0x2FC710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC710u;
label_2fc710:
    // 0x2fc710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc714: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC714u;
        // 0x2fc718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC71Cu;
    // 0x2fc71c: 0x0  nop
    ctx->pc = 0x2fc71cu;
    // NOP
    // 0x2fc720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc728: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2FC728u;
    SET_GPR_U32(ctx, 31, 0x2FC730u);
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x2FC728u, 0x2FC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC730u;
label_2fc730:
    // 0x2fc730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc734: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC734u;
        // 0x2fc738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC73Cu;
    // 0x2fc73c: 0x0  nop
    ctx->pc = 0x2fc73cu;
    // NOP
    // 0x2fc740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc748: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2FC748u;
    SET_GPR_U32(ctx, 31, 0x2FC750u);
    ctx->pc = 0x2FC74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC748u;
    // 0x2fc74c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2FC748u, 0x2FC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC750u;
label_2fc750:
    // 0x2fc750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc754: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC754u;
        // 0x2fc758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC75Cu;
    // 0x2fc75c: 0x0  nop
    ctx->pc = 0x2fc75cu;
    // NOP
    // 0x2fc760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc768: 0xc097442  jal         func_25D108
    ctx->pc = 0x2FC768u;
    SET_GPR_U32(ctx, 31, 0x2FC770u);
    ctx->pc = 0x25D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D108u, 0x2FC768u, 0x2FC770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC770u;
label_2fc770:
    // 0x2fc770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc774: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC774u;
        // 0x2fc778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC77Cu;
    // 0x2fc77c: 0x0  nop
    ctx->pc = 0x2fc77cu;
    // NOP
    // 0x2fc780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc788: 0xc0973ee  jal         func_25CFB8
    ctx->pc = 0x2FC788u;
    SET_GPR_U32(ctx, 31, 0x2FC790u);
    ctx->pc = 0x25CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CFB8u, 0x2FC788u, 0x2FC790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC790u;
label_2fc790:
    // 0x2fc790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc794: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC794u;
        // 0x2fc798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC79Cu;
    // 0x2fc79c: 0x0  nop
    ctx->pc = 0x2fc79cu;
    // NOP
}
