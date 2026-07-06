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

// Function: sub_002018A8
// Address: 0x2018a8 - 0x2018f8
void sub_002018A8_0x2018a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002018A8_0x2018a8");
#endif

    switch (ctx->pc) {
        case 0x2018ccu: goto label_2018cc;
        case 0x2018d4u: goto label_2018d4;
        default: break;
    }

    ctx->pc = 0x2018a8u;

    // 0x2018a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2018a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2018ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2018acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2018b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2018b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2018B4u;
    {
        const bool branch_taken_0x2018b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2018B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B4u;
        // 0x2018b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018b4) {
            ctx->pc = 0x2018E8u;
            goto label_2018e8;
        }
    }
    ctx->pc = 0x2018BCu;
    // 0x2018bc: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2018c0: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x2018c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2018c4: 0xc0807dc  jal         func_201F70
    ctx->pc = 0x2018C4u;
    SET_GPR_U32(ctx, 31, 0x2018CCu);
    ctx->pc = 0x2018C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018C4u;
    // 0x2018c8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201F70u, 0x2018C4u, 0x2018CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018CCu;
label_2018cc:
    // 0x2018cc: 0xc080196  jal         func_200658
    ctx->pc = 0x2018CCu;
    SET_GPR_U32(ctx, 31, 0x2018D4u);
    ctx->pc = 0x2018D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018CCu;
    // 0x2018d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200658u, 0x2018CCu, 0x2018D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018D4u;
label_2018d4:
    // 0x2018d4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2018d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2018d8: 0x246318f8  addiu       $v1, $v1, 0x18F8
    ctx->pc = 0x2018d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6392));
    // 0x2018dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2018dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2018e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2018e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2018e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2018e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2018e8:
    // 0x2018e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2018e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2018ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2018ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2018f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2018F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2018F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018F0u;
        // 0x2018f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2018F8u;
}
