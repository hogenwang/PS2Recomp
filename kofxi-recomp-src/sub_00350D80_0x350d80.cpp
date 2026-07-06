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

// Function: sub_00350D80
// Address: 0x350d80 - 0x350dc0
void sub_00350D80_0x350d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350D80_0x350d80");
#endif

    switch (ctx->pc) {
        case 0x350da4u: goto label_350da4;
        case 0x350dacu: goto label_350dac;
        default: break;
    }

    ctx->pc = 0x350d80u;

    // 0x350d80: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x350d84: 0x3e00008  jr          $ra
    ctx->pc = 0x350D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D84u;
        // 0x350d88: 0xa4604310  sh          $zero, 0x4310($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 17168), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D8Cu;
    // 0x350d8c: 0x0  nop
    ctx->pc = 0x350d8cu;
    // NOP
    // 0x350d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350d94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350d9c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350D9Cu;
    SET_GPR_U32(ctx, 31, 0x350DA4u);
    ctx->pc = 0x350DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D9Cu;
    // 0x350da0: 0x248453c0  addiu       $a0, $a0, 0x53C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x350D9Cu, 0x350DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DA4u;
label_350da4:
    // 0x350da4: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x350DA4u;
    SET_GPR_U32(ctx, 31, 0x350DACu);
    ctx->pc = 0x350DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DA4u;
    // 0x350da8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C60u, 0x350DA4u, 0x350DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DACu;
label_350dac:
    // 0x350dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350db0: 0x3e00008  jr          $ra
    ctx->pc = 0x350DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DB0u;
        // 0x350db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350DB8u;
    // 0x350db8: 0x0  nop
    ctx->pc = 0x350db8u;
    // NOP
    // 0x350dbc: 0x0  nop
    ctx->pc = 0x350dbcu;
    // NOP
}
