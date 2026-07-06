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

// Function: sub_001AF568
// Address: 0x1af568 - 0x1af5a8
void sub_001AF568_0x1af568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF568_0x1af568");
#endif

    switch (ctx->pc) {
        case 0x1af59cu: goto label_1af59c;
        default: break;
    }

    ctx->pc = 0x1af568u;

    // 0x1af568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af56c: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x1af56cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x1af570: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1af570u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1af574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af578: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1af578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1af57c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af580: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1af580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1af584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af58c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1af58cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x1af590: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1af594: 0xc06bd6a  jal         func_1AF5A8
    ctx->pc = 0x1AF594u;
    SET_GPR_U32(ctx, 31, 0x1AF59Cu);
    ctx->pc = 0x1AF598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF594u;
    // 0x1af598: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF5A8u, 0x1AF594u, 0x1AF59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF59Cu;
label_1af59c:
    // 0x1af59c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5A0u;
        // 0x1af5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF5A8u;
}
