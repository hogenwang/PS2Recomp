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

// Function: sub_002F4CC8
// Address: 0x2f4cc8 - 0x2f4d20
void sub_002F4CC8_0x2f4cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4CC8_0x2f4cc8");
#endif

    switch (ctx->pc) {
        case 0x2f4cd8u: goto label_2f4cd8;
        case 0x2f4ce4u: goto label_2f4ce4;
        case 0x2f4cf4u: goto label_2f4cf4;
        case 0x2f4d04u: goto label_2f4d04;
        default: break;
    }

    ctx->pc = 0x2f4cc8u;

    // 0x2f4cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f4ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4cd0: 0xc0be3d4  jal         func_2F8F50
    ctx->pc = 0x2F4CD0u;
    SET_GPR_U32(ctx, 31, 0x2F4CD8u);
    ctx->pc = 0x2F8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8F50u, 0x2F4CD0u, 0x2F4CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CD8u;
label_2f4cd8:
    // 0x2f4cd8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f4cdc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x2F4CDCu;
    SET_GPR_U32(ctx, 31, 0x2F4CE4u);
    ctx->pc = 0x2F4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CDCu;
    // 0x2f4ce0: 0x8c4403e0  lw          $a0, 0x3E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x2F4CDCu, 0x2F4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CE4u;
label_2f4ce4:
    // 0x2f4ce4: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4CE4u;
    {
        const bool branch_taken_0x2f4ce4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CE4u;
        // 0x2f4ce8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ce4) {
            ctx->pc = 0x2F4D10u;
            goto label_2f4d10;
        }
    }
    ctx->pc = 0x2F4CECu;
    // 0x2f4cec: 0xc0bdfd0  jal         func_2F7F40
    ctx->pc = 0x2F4CECu;
    SET_GPR_U32(ctx, 31, 0x2F4CF4u);
    ctx->pc = 0x2F7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7F40u, 0x2F4CECu, 0x2F4CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CF4u;
label_2f4cf4:
    // 0x2f4cf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4CF4u;
    {
        const bool branch_taken_0x2f4cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CF4u;
        // 0x2f4cf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cf4) {
            ctx->pc = 0x2F4D10u;
            goto label_2f4d10;
        }
    }
    ctx->pc = 0x2F4CFCu;
    // 0x2f4cfc: 0xc0be764  jal         func_2F9D90
    ctx->pc = 0x2F4CFCu;
    SET_GPR_U32(ctx, 31, 0x2F4D04u);
    ctx->pc = 0x2F9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9D90u, 0x2F4CFCu, 0x2F4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D04u;
label_2f4d04:
    // 0x2f4d04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4d08: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2f4d08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2f4d0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f4d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d10:
    // 0x2f4d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D14u;
        // 0x2f4d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4D1Cu;
    // 0x2f4d1c: 0x0  nop
    ctx->pc = 0x2f4d1cu;
    // NOP
    if (ctx->pc == 0x2f4d1cu) { ctx->pc = 0x2f4d20u; }
}
