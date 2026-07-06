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

// Function: sub_001A1BF0
// Address: 0x1a1bf0 - 0x1a1c70
void sub_001A1BF0_0x1a1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1BF0_0x1a1bf0");
#endif

    switch (ctx->pc) {
        case 0x1a1c00u: goto label_1a1c00;
        case 0x1a1c08u: goto label_1a1c08;
        case 0x1a1c10u: goto label_1a1c10;
        case 0x1a1c18u: goto label_1a1c18;
        case 0x1a1c20u: goto label_1a1c20;
        case 0x1a1c28u: goto label_1a1c28;
        case 0x1a1c30u: goto label_1a1c30;
        case 0x1a1c38u: goto label_1a1c38;
        case 0x1a1c40u: goto label_1a1c40;
        case 0x1a1c48u: goto label_1a1c48;
        case 0x1a1c50u: goto label_1a1c50;
        default: break;
    }

    ctx->pc = 0x1a1bf0u;

    // 0x1a1bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1bf8: 0xc067ddc  jal         func_19F770
    ctx->pc = 0x1A1BF8u;
    SET_GPR_U32(ctx, 31, 0x1A1C00u);
    ctx->pc = 0x19F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F770u, 0x1A1BF8u, 0x1A1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C00u;
label_1a1c00:
    // 0x1a1c00: 0xc0690cc  jal         func_1A4330
    ctx->pc = 0x1A1C00u;
    SET_GPR_U32(ctx, 31, 0x1A1C08u);
    ctx->pc = 0x1A4330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4330u, 0x1A1C00u, 0x1A1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C08u;
label_1a1c08:
    // 0x1a1c08: 0xc081924  jal         func_206490
    ctx->pc = 0x1A1C08u;
    SET_GPR_U32(ctx, 31, 0x1A1C10u);
    ctx->pc = 0x206490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206490u, 0x1A1C08u, 0x1A1C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C10u;
label_1a1c10:
    // 0x1a1c10: 0xc06871c  jal         func_1A1C70
    ctx->pc = 0x1A1C10u;
    SET_GPR_U32(ctx, 31, 0x1A1C18u);
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x1A1C10u, 0x1A1C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C18u;
label_1a1c18:
    // 0x1a1c18: 0xc068c4c  jal         func_1A3130
    ctx->pc = 0x1A1C18u;
    SET_GPR_U32(ctx, 31, 0x1A1C20u);
    ctx->pc = 0x1A1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C18u;
    // 0x1a1c1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3130u, 0x1A1C18u, 0x1A1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C20u;
label_1a1c20:
    // 0x1a1c20: 0xc068c4c  jal         func_1A3130
    ctx->pc = 0x1A1C20u;
    SET_GPR_U32(ctx, 31, 0x1A1C28u);
    ctx->pc = 0x1A1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C20u;
    // 0x1a1c24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3130u, 0x1A1C20u, 0x1A1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C28u;
label_1a1c28:
    // 0x1a1c28: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x1A1C28u;
    SET_GPR_U32(ctx, 31, 0x1A1C30u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x1A1C28u, 0x1A1C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C30u;
label_1a1c30:
    // 0x1a1c30: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x1A1C30u;
    SET_GPR_U32(ctx, 31, 0x1A1C38u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x1A1C30u, 0x1A1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C38u;
label_1a1c38:
    // 0x1a1c38: 0xc0c7cc0  jal         func_31F300
    ctx->pc = 0x1A1C38u;
    SET_GPR_U32(ctx, 31, 0x1A1C40u);
    ctx->pc = 0x31F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F300u, 0x1A1C38u, 0x1A1C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C40u;
label_1a1c40:
    // 0x1a1c40: 0xc053318  jal         func_14CC60
    ctx->pc = 0x1A1C40u;
    SET_GPR_U32(ctx, 31, 0x1A1C48u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x1A1C40u, 0x1A1C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C48u;
label_1a1c48:
    // 0x1a1c48: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x1A1C48u;
    SET_GPR_U32(ctx, 31, 0x1A1C50u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x1A1C48u, 0x1A1C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C50u;
label_1a1c50:
    // 0x1a1c50: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1a1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a1c54: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1a1c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1a1c58: 0xa064e078  sb          $a0, -0x1F88($v1)
    ctx->pc = 0x1a1c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294959224), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1c5c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a1c60: 0xa0609778  sb          $zero, -0x6888($v1)
    ctx->pc = 0x1a1c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940536), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C68u;
        // 0x1a1c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1C70u;
}
