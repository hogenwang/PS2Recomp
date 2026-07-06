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

// Function: sub_001F14E0
// Address: 0x1f14e0 - 0x1f1530
void sub_001F14E0_0x1f14e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F14E0_0x1f14e0");
#endif

    switch (ctx->pc) {
        case 0x1f14fcu: goto label_1f14fc;
        case 0x1f1514u: goto label_1f1514;
        default: break;
    }

    ctx->pc = 0x1f14e0u;

    // 0x1f14e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f14e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f14e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f14e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f14e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f14e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f14ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f14f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f14f4: 0xc07c54c  jal         func_1F1530
    ctx->pc = 0x1F14F4u;
    SET_GPR_U32(ctx, 31, 0x1F14FCu);
    ctx->pc = 0x1F14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14F4u;
    // 0x1f14f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1530u, 0x1F14F4u, 0x1F14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14FCu;
label_1f14fc:
    // 0x1f14fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1504: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1504u;
    {
        const bool branch_taken_0x1f1504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1504u;
        // 0x1f1508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1504) {
            ctx->pc = 0x1F1518u;
            goto label_1f1518;
        }
    }
    ctx->pc = 0x1F150Cu;
    // 0x1f150c: 0xc07c5c2  jal         func_1F1708
    ctx->pc = 0x1F150Cu;
    SET_GPR_U32(ctx, 31, 0x1F1514u);
    ctx->pc = 0x1F1708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1708u, 0x1F150Cu, 0x1F1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1514u;
label_1f1514:
    // 0x1f1514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1518:
    // 0x1f1518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f151c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f151cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f1520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1524: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1524u;
        // 0x1f1528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F152Cu;
    // 0x1f152c: 0x0  nop
    ctx->pc = 0x1f152cu;
    // NOP
}
