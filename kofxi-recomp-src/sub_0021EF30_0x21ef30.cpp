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

// Function: sub_0021EF30
// Address: 0x21ef30 - 0x21ef78
void sub_0021EF30_0x21ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EF30_0x21ef30");
#endif

    switch (ctx->pc) {
        case 0x21ef58u: goto label_21ef58;
        default: break;
    }

    ctx->pc = 0x21ef30u;

    // 0x21ef30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ef34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ef3c: 0x2406096c  addiu       $a2, $zero, 0x96C
    ctx->pc = 0x21ef3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2412));
    // 0x21ef40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ef44: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x21ef44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x21ef48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ef48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ef4c: 0x2630b7e8  addiu       $s0, $s1, -0x4818
    ctx->pc = 0x21ef4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948840));
    // 0x21ef50: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x21EF50u;
    SET_GPR_U32(ctx, 31, 0x21EF58u);
    ctx->pc = 0x21EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF50u;
    // 0x21ef54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x21EF50u, 0x21EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF58u;
label_21ef58:
    // 0x21ef58: 0xae20b7e8  sw          $zero, -0x4818($s1)
    ctx->pc = 0x21ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294948840), GPR_U32(ctx, 0));
    // 0x21ef5c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21ef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21ef60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ef60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ef64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ef6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF6Cu;
        // 0x21ef70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EF74u;
    // 0x21ef74: 0x0  nop
    ctx->pc = 0x21ef74u;
    // NOP
}
