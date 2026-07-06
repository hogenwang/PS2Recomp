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

// Function: sub_00342F70
// Address: 0x342f70 - 0x343000
void sub_00342F70_0x342f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342F70_0x342f70");
#endif

    switch (ctx->pc) {
        case 0x342f9cu: goto label_342f9c;
        default: break;
    }

    ctx->pc = 0x342f70u;

    // 0x342f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342f74: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x342f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x342f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342f7c: 0x8c43dd90  lw          $v1, -0x2270($v0)
    ctx->pc = 0x342f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x342f80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x342f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x342f84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342F84u;
    {
        const bool branch_taken_0x342f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x342f84) {
            ctx->pc = 0x342F94u;
            goto label_342f94;
        }
    }
    ctx->pc = 0x342F8Cu;
    // 0x342f8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x342F8Cu;
    {
        const bool branch_taken_0x342f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F8Cu;
        // 0x342f90: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342f8c) {
            ctx->pc = 0x342FF0u;
            goto label_342ff0;
        }
    }
    ctx->pc = 0x342F94u;
label_342f94:
    // 0x342f94: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x342F94u;
    SET_GPR_U32(ctx, 31, 0x342F9Cu);
    ctx->pc = 0x342EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342EE0u, 0x342F94u, 0x342F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342F9Cu;
label_342f9c:
    // 0x342f9c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x342f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x342fa0: 0x50430013  beql        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x342FA0u;
    {
        const bool branch_taken_0x342fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x342fa0) {
            ctx->pc = 0x342FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342FA0u;
            // 0x342fa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342FF0u;
            goto label_342ff0;
        }
    }
    ctx->pc = 0x342FA8u;
    // 0x342fa8: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x342fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x342fac: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x342FACu;
    {
        const bool branch_taken_0x342fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x342fac) {
            ctx->pc = 0x342FECu;
            goto label_342fec;
        }
    }
    ctx->pc = 0x342FB4u;
    // 0x342fb4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x342fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x342fb8: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x342FB8u;
    {
        const bool branch_taken_0x342fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x342fb8) {
            ctx->pc = 0x342FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342FB8u;
            // 0x342fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342FF0u;
            goto label_342ff0;
        }
    }
    ctx->pc = 0x342FC0u;
    // 0x342fc0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x342fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x342fc4: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x342FC4u;
    {
        const bool branch_taken_0x342fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x342fc4) {
            ctx->pc = 0x342FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342FC4u;
            // 0x342fc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342FF0u;
            goto label_342ff0;
        }
    }
    ctx->pc = 0x342FCCu;
    // 0x342fcc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x342fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x342fd0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342FD0u;
    {
        const bool branch_taken_0x342fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x342fd0) {
            ctx->pc = 0x342FE0u;
            goto label_342fe0;
        }
    }
    ctx->pc = 0x342FD8u;
    // 0x342fd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x342FD8u;
    {
        const bool branch_taken_0x342fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FD8u;
        // 0x342fdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342fd8) {
            ctx->pc = 0x342FF0u;
            goto label_342ff0;
        }
    }
    ctx->pc = 0x342FE0u;
label_342fe0:
    // 0x342fe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x342fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342fe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x342FE4u;
    {
        const bool branch_taken_0x342fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342fe4) {
            ctx->pc = 0x342FF0u;
            goto label_342ff0;
        }
    }
    ctx->pc = 0x342FECu;
label_342fec:
    // 0x342fec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x342fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342ff0:
    // 0x342ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x342FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342FF4u;
        // 0x342ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342FFCu;
    // 0x342ffc: 0x0  nop
    ctx->pc = 0x342ffcu;
    // NOP
}
