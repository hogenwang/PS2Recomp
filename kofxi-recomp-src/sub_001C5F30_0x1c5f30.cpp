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

// Function: sub_001C5F30
// Address: 0x1c5f30 - 0x1c5f78
void sub_001C5F30_0x1c5f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5F30_0x1c5f30");
#endif

    switch (ctx->pc) {
        case 0x1c5f4cu: goto label_1c5f4c;
        case 0x1c5f58u: goto label_1c5f58;
        case 0x1c5f60u: goto label_1c5f60;
        default: break;
    }

    ctx->pc = 0x1c5f30u;

    // 0x1c5f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5f38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5f40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5f44: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C5F44u;
    SET_GPR_U32(ctx, 31, 0x1C5F4Cu);
    ctx->pc = 0x1C5F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F44u;
    // 0x1c5f48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AB8u, 0x1C5F44u, 0x1C5F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F4Cu;
label_1c5f4c:
    // 0x1c5f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f50: 0xc0717de  jal         func_1C5F78
    ctx->pc = 0x1C5F50u;
    SET_GPR_U32(ctx, 31, 0x1C5F58u);
    ctx->pc = 0x1C5F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F50u;
    // 0x1c5f54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F78u, 0x1C5F50u, 0x1C5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F58u;
label_1c5f58:
    // 0x1c5f58: 0xc071ab0  jal         func_1C6AC0
    ctx->pc = 0x1C5F58u;
    SET_GPR_U32(ctx, 31, 0x1C5F60u);
    ctx->pc = 0x1C5F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5F58u;
    // 0x1c5f5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC0u, 0x1C5F58u, 0x1C5F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5F60u;
label_1c5f60:
    // 0x1c5f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5f64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c5f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5f70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F70u;
        // 0x1c5f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5F78u;
}
