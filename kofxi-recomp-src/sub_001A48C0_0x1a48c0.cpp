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

// Function: sub_001A48C0
// Address: 0x1a48c0 - 0x1a4910
void sub_001A48C0_0x1a48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A48C0_0x1a48c0");
#endif

    switch (ctx->pc) {
        case 0x1a48ecu: goto label_1a48ec;
        case 0x1a48fcu: goto label_1a48fc;
        default: break;
    }

    ctx->pc = 0x1a48c0u;

    // 0x1a48c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a48c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a48c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a48c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a48c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a48cc: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A48CCu;
    {
        const bool branch_taken_0x1a48cc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1A48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48CCu;
        // 0x1a48d0: 0x73143  sra         $a2, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48cc) {
            ctx->pc = 0x1A48DCu;
            goto label_1a48dc;
        }
    }
    ctx->pc = 0x1A48D4u;
    // 0x1a48d4: 0x24e2001f  addiu       $v0, $a3, 0x1F
    ctx->pc = 0x1a48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x1a48d8: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_1a48dc:
    // 0x1a48dc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a48dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a48e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a48e4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A48E4u;
    SET_GPR_U32(ctx, 31, 0x1A48ECu);
    ctx->pc = 0x1A48E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48E4u;
    // 0x1a48e8: 0x24a56960  addiu       $a1, $a1, 0x6960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A48E4u, 0x1A48ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48ECu;
label_1a48ec:
    // 0x1a48ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a48f0: 0x8c45b7d8  lw          $a1, -0x4828($v0)
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x1a48f4: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x1A48F4u;
    SET_GPR_U32(ctx, 31, 0x1A48FCu);
    ctx->pc = 0x1A48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48F4u;
    // 0x1a48f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x1A48F4u, 0x1A48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48FCu;
label_1a48fc:
    // 0x1a48fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a48fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4900: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4900u;
        // 0x1a4904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4908u;
    // 0x1a4908: 0x0  nop
    ctx->pc = 0x1a4908u;
    // NOP
    // 0x1a490c: 0x0  nop
    ctx->pc = 0x1a490cu;
    // NOP
}
