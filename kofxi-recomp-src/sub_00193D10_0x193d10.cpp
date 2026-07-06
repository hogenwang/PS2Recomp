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

// Function: sub_00193D10
// Address: 0x193d10 - 0x193d60
void sub_00193D10_0x193d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193D10_0x193d10");
#endif

    switch (ctx->pc) {
        case 0x193d20u: goto label_193d20;
        case 0x193d2cu: goto label_193d2c;
        case 0x193d34u: goto label_193d34;
        case 0x193d3cu: goto label_193d3c;
        case 0x193d48u: goto label_193d48;
        default: break;
    }

    ctx->pc = 0x193d10u;

    // 0x193d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193d18: 0xc055684  jal         func_155A10
    ctx->pc = 0x193D18u;
    SET_GPR_U32(ctx, 31, 0x193D20u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x193D18u, 0x193D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D20u;
label_193d20:
    // 0x193d20: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193d24: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x193D24u;
    SET_GPR_U32(ctx, 31, 0x193D2Cu);
    ctx->pc = 0x193D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D24u;
    // 0x193d28: 0x24845bb0  addiu       $a0, $a0, 0x5BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x193D24u, 0x193D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D2Cu;
label_193d2c:
    // 0x193d2c: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x193D2Cu;
    SET_GPR_U32(ctx, 31, 0x193D34u);
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x193D2Cu, 0x193D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D34u;
label_193d34:
    // 0x193d34: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x193D34u;
    SET_GPR_U32(ctx, 31, 0x193D3Cu);
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x193D34u, 0x193D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D3Cu;
label_193d3c:
    // 0x193d3c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x193d40: 0xc063d08  jal         func_18F420
    ctx->pc = 0x193D40u;
    SET_GPR_U32(ctx, 31, 0x193D48u);
    ctx->pc = 0x193D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D40u;
    // 0x193d44: 0x2484cf30  addiu       $a0, $a0, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x193D40u, 0x193D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D48u;
label_193d48:
    // 0x193d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x193D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D4Cu;
        // 0x193d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193D54u;
    // 0x193d54: 0x0  nop
    ctx->pc = 0x193d54u;
    // NOP
    // 0x193d58: 0x0  nop
    ctx->pc = 0x193d58u;
    // NOP
    // 0x193d5c: 0x0  nop
    ctx->pc = 0x193d5cu;
    // NOP
    if (ctx->pc == 0x193d5cu) { ctx->pc = 0x193d60u; }
}
