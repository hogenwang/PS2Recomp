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

// Function: kofxiInstallVblankScheduler
// Address: 0x1b4200 - 0x1b4268
void kofxiInstallVblankScheduler_0x1b4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiInstallVblankScheduler_0x1b4200");
#endif

    switch (ctx->pc) {
        case 0x1b4214u: goto label_1b4214;
        case 0x1b4234u: goto label_1b4234;
        case 0x1b423cu: goto label_1b423c;
        case 0x1b4244u: goto label_1b4244;
        default: break;
    }

    ctx->pc = 0x1b4200u;

    // 0x1b4200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b4208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b420c: 0xc06cf8a  jal         func_1B3E28
    ctx->pc = 0x1B420Cu;
    SET_GPR_U32(ctx, 31, 0x1B4214u);
    ctx->pc = 0x1B3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E28u, 0x1B420Cu, 0x1B4214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4214u;
label_1b4214:
    // 0x1b4214: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b4218: 0x24503108  addiu       $s0, $v0, 0x3108
    ctx->pc = 0x1b4218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12552));
    // 0x1b421c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4220: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4220u;
    {
        const bool branch_taken_0x1b4220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4220) {
            ctx->pc = 0x1B4224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4220u;
            // 0x1b4224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4258u;
            goto label_1b4258;
        }
    }
    ctx->pc = 0x1B4228u;
    // 0x1b4228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b422c: 0xc06cf90  jal         func_1B3E40
    ctx->pc = 0x1B422Cu;
    SET_GPR_U32(ctx, 31, 0x1B4234u);
    ctx->pc = 0x1B4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B422Cu;
    // 0x1b4230: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E40u, 0x1B422Cu, 0x1B4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4234u;
label_1b4234:
    // 0x1b4234: 0xc06eab2  jal         func_1BAAC8
    ctx->pc = 0x1B4234u;
    SET_GPR_U32(ctx, 31, 0x1B423Cu);
    ctx->pc = 0x1BAAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAAC8u, 0x1B4234u, 0x1B423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B423Cu;
label_1b423c:
    // 0x1b423c: 0xc06c6b8  jal         func_1B1AE0
    ctx->pc = 0x1B423Cu;
    SET_GPR_U32(ctx, 31, 0x1B4244u);
    ctx->pc = 0x1B1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AE0u, 0x1B423Cu, 0x1B4244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4244u;
label_1b4244:
    // 0x1b4244: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b4244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b4248: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b424c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b424cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4250: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4250u;
        // 0x1b4254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4258u;
label_1b4258:
    // 0x1b4258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b425c: 0x806cf90  j           func_1B3E40
    ctx->pc = 0x1B425Cu;
    ctx->pc = 0x1B4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B425Cu;
    // 0x1b4260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E40u;
    kofxiVblankSchedulerDispatch_0x1b3e40(rdram, ctx, runtime); return;
    ctx->pc = 0x1B4264u;
    // 0x1b4264: 0x0  nop
    ctx->pc = 0x1b4264u;
    // NOP
    if (ctx->pc == 0x1b4264u) { ctx->pc = 0x1b4268u; }
}
