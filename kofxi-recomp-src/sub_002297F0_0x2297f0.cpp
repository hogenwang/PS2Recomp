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

// Function: sub_002297F0
// Address: 0x2297f0 - 0x229830
void sub_002297F0_0x2297f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002297F0_0x2297f0");
#endif

    switch (ctx->pc) {
        case 0x229804u: goto label_229804;
        case 0x229818u: goto label_229818;
        default: break;
    }

    ctx->pc = 0x2297f0u;

    // 0x2297f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2297f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2297f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2297f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2297f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2297f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2297fc: 0xc0985ae  jal         func_2616B8
    ctx->pc = 0x2297FCu;
    SET_GPR_U32(ctx, 31, 0x229804u);
    ctx->pc = 0x229800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297FCu;
    // 0x229800: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616B8u, 0x2297FCu, 0x229804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229804u;
label_229804:
    // 0x229804: 0x8e02a734  lw          $v0, -0x58CC($s0)
    ctx->pc = 0x229804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944564)));
    // 0x229808: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229808u;
    {
        const bool branch_taken_0x229808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229808u;
        // 0x22980c: 0x3c0201c1  lui         $v0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229808) {
            ctx->pc = 0x22981Cu;
            goto label_22981c;
        }
    }
    ctx->pc = 0x229810u;
    // 0x229810: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x229810u;
    SET_GPR_U32(ctx, 31, 0x229818u);
    ctx->pc = 0x229814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229810u;
    // 0x229814: 0x8c44a730  lw          $a0, -0x58D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x229810u, 0x229818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229818u;
label_229818:
    // 0x229818: 0xae00a734  sw          $zero, -0x58CC($s0)
    ctx->pc = 0x229818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944564), GPR_U32(ctx, 0));
label_22981c:
    // 0x22981c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22981cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229824: 0x3e00008  jr          $ra
    ctx->pc = 0x229824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229824u;
        // 0x229828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22982Cu;
    // 0x22982c: 0x0  nop
    ctx->pc = 0x22982cu;
    // NOP
    if (ctx->pc == 0x22982cu) { ctx->pc = 0x229830u; }
}
