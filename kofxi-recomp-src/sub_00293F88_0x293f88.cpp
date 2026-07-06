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

// Function: sub_00293F88
// Address: 0x293f88 - 0x293fb8
void sub_00293F88_0x293f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293F88_0x293f88");
#endif

    switch (ctx->pc) {
        case 0x293f88u: goto label_293f88;
        case 0x293f8cu: goto label_293f8c;
        case 0x293f90u: goto label_293f90;
        case 0x293f94u: goto label_293f94;
        case 0x293f98u: goto label_293f98;
        case 0x293f9cu: goto label_293f9c;
        case 0x293fa0u: goto label_293fa0;
        case 0x293fa4u: goto label_293fa4;
        case 0x293fa8u: goto label_293fa8;
        case 0x293facu: goto label_293fac;
        case 0x293fb0u: goto label_293fb0;
        case 0x293fb4u: goto label_293fb4;
        default: break;
    }

    ctx->pc = 0x293f88u;

label_293f88:
    // 0x293f88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x293f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_293f8c:
    // 0x293f8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_293f90:
    // 0x293f90: 0x8c624ac8  lw          $v0, 0x4AC8($v1)
    ctx->pc = 0x293f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19144)));
label_293f94:
    // 0x293f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_293f98:
    // 0x293f98: 0x40f809  jalr        $v0
label_293f9c:
    if (ctx->pc == 0x293F9Cu) {
        ctx->pc = 0x293FA0u;
        goto label_293fa0;
    }
    ctx->pc = 0x293F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293FA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293F98u, 0x293FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293FA0u;
label_293fa0:
    // 0x293fa0: 0xc0a4f9c  jal         func_293E70
label_293fa4:
    if (ctx->pc == 0x293FA4u) {
        ctx->pc = 0x293FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FA0u;
        // 0x293fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293FA8u;
        goto label_293fa8;
    }
    ctx->pc = 0x293FA0u;
    SET_GPR_U32(ctx, 31, 0x293FA8u);
    ctx->pc = 0x293FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FA0u;
    // 0x293fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E70u, 0x293FA0u, 0x293FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FA8u;
label_293fa8:
    // 0x293fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_293fac:
    // 0x293fac: 0x3e00008  jr          $ra
label_293fb0:
    if (ctx->pc == 0x293FB0u) {
        ctx->pc = 0x293FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FACu;
        // 0x293fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293FB4u;
        goto label_293fb4;
    }
    ctx->pc = 0x293FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293FACu;
        // 0x293fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293FB4u;
label_293fb4:
    // 0x293fb4: 0x0  nop
    ctx->pc = 0x293fb4u;
    // NOP
    if (ctx->pc == 0x293fb4u) { ctx->pc = 0x293fb8u; }
}
