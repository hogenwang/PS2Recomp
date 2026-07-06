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

// Function: sub_00177F30
// Address: 0x177f30 - 0x177f70
void sub_00177F30_0x177f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177F30_0x177f30");
#endif

    switch (ctx->pc) {
        case 0x177f44u: goto label_177f44;
        case 0x177f4cu: goto label_177f4c;
        case 0x177f54u: goto label_177f54;
        case 0x177f60u: goto label_177f60;
        default: break;
    }

    ctx->pc = 0x177f30u;

    // 0x177f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177f34: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x177f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x177f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177f3c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x177F3Cu;
    SET_GPR_U32(ctx, 31, 0x177F44u);
    ctx->pc = 0x177F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F3Cu;
    // 0x177f40: 0x2484a780  addiu       $a0, $a0, -0x5880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x177F3Cu, 0x177F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F44u;
label_177f44:
    // 0x177f44: 0xc0660e0  jal         func_198380
    ctx->pc = 0x177F44u;
    SET_GPR_U32(ctx, 31, 0x177F4Cu);
    ctx->pc = 0x198380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198380u, 0x177F44u, 0x177F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F4Cu;
label_177f4c:
    // 0x177f4c: 0xc05db2c  jal         func_176CB0
    ctx->pc = 0x177F4Cu;
    SET_GPR_U32(ctx, 31, 0x177F54u);
    ctx->pc = 0x176CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CB0u, 0x177F4Cu, 0x177F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F54u;
label_177f54:
    // 0x177f54: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177f58: 0xc05ebe0  jal         func_17AF80
    ctx->pc = 0x177F58u;
    SET_GPR_U32(ctx, 31, 0x177F60u);
    ctx->pc = 0x177F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F58u;
    // 0x177f5c: 0xac40ace0  sw          $zero, -0x5320($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946016), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AF80u, 0x177F58u, 0x177F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F60u;
label_177f60:
    // 0x177f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f64: 0x3e00008  jr          $ra
    ctx->pc = 0x177F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F64u;
        // 0x177f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F6Cu;
    // 0x177f6c: 0x0  nop
    ctx->pc = 0x177f6cu;
    // NOP
    if (ctx->pc == 0x177f6cu) { ctx->pc = 0x177f70u; }
}
