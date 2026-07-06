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

// Function: sub_0025FDC0
// Address: 0x25fdc0 - 0x25fe00
void sub_0025FDC0_0x25fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FDC0_0x25fdc0");
#endif

    switch (ctx->pc) {
        case 0x25fde4u: goto label_25fde4;
        default: break;
    }

    ctx->pc = 0x25fdc0u;

    // 0x25fdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25fdc8: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25fdc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25fdcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25fdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25fdd0: 0x8e0417a8  lw          $a0, 0x17A8($s0)
    ctx->pc = 0x25fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6056)));
    // 0x25fdd4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FDD4u;
    {
        const bool branch_taken_0x25fdd4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDD4u;
        // 0x25fdd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdd4) {
            ctx->pc = 0x25FDE8u;
            goto label_25fde8;
        }
    }
    ctx->pc = 0x25FDDCu;
    // 0x25fddc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x25FDDCu;
    SET_GPR_U32(ctx, 31, 0x25FDE4u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x25FDDCu, 0x25FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDE4u;
label_25fde4:
    // 0x25fde4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25fde8:
    // 0x25fde8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25fde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fdec: 0xae0217a8  sw          $v0, 0x17A8($s0)
    ctx->pc = 0x25fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6056), GPR_U32(ctx, 2));
    // 0x25fdf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fdf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x25FDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDF4u;
        // 0x25fdf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FDFCu;
    // 0x25fdfc: 0x0  nop
    ctx->pc = 0x25fdfcu;
    // NOP
}
