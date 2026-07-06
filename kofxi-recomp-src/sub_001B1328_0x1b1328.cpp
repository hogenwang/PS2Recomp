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

// Function: sub_001B1328
// Address: 0x1b1328 - 0x1b1360
void sub_001B1328_0x1b1328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1328_0x1b1328");
#endif

    switch (ctx->pc) {
        case 0x1b133cu: goto label_1b133c;
        case 0x1b1344u: goto label_1b1344;
        case 0x1b134cu: goto label_1b134c;
        default: break;
    }

    ctx->pc = 0x1b1328u;

    // 0x1b1328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b132c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1330: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1334: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B1334u;
    SET_GPR_U32(ctx, 31, 0x1B133Cu);
    ctx->pc = 0x1B1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1334u;
    // 0x1b1338: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1B1334u, 0x1B133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B133Cu;
label_1b133c:
    // 0x1b133c: 0xc06c4d8  jal         func_1B1360
    ctx->pc = 0x1B133Cu;
    SET_GPR_U32(ctx, 31, 0x1B1344u);
    ctx->pc = 0x1B1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B133Cu;
    // 0x1b1340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1360u, 0x1B133Cu, 0x1B1344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1344u;
label_1b1344:
    // 0x1b1344: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1344u;
    SET_GPR_U32(ctx, 31, 0x1B134Cu);
    ctx->pc = 0x1B1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1344u;
    // 0x1b1348: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1B1344u, 0x1B134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B134Cu;
label_1b134c:
    // 0x1b134c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b134cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1358: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1358u;
        // 0x1b135c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1360u;
}
