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

// Function: sub_002649F8
// Address: 0x2649f8 - 0x264a38
void sub_002649F8_0x2649f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002649F8_0x2649f8");
#endif

    switch (ctx->pc) {
        case 0x264a0cu: goto label_264a0c;
        case 0x264a1cu: goto label_264a1c;
        default: break;
    }

    ctx->pc = 0x2649f8u;

    // 0x2649f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2649f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2649fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2649fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264a00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264a04: 0xc099540  jal         func_265500
    ctx->pc = 0x264A04u;
    SET_GPR_U32(ctx, 31, 0x264A0Cu);
    ctx->pc = 0x264A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A04u;
    // 0x264a08: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265500u, 0x264A04u, 0x264A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A0Cu;
label_264a0c:
    // 0x264a0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x264a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a10: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264A10u;
    {
        const bool branch_taken_0x264a10 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x264A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A10u;
        // 0x264a14: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a10) {
            ctx->pc = 0x264A24u;
            goto label_264a24;
        }
    }
    ctx->pc = 0x264A18u;
    // 0x264a18: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x264a18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_264a1c:
    // 0x264a1c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x264A1Cu;
    {
        const bool branch_taken_0x264a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x264a1c) {
            ctx->pc = 0x264A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264A1Cu;
            // 0x264a20: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264A24u;
            goto label_264a24;
        }
    }
    ctx->pc = 0x264A24u;
label_264a24:
    // 0x264a24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x264a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264a28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x264a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a30: 0x3e00008  jr          $ra
    ctx->pc = 0x264A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A30u;
        // 0x264a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264A38u;
}
