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

// Function: sub_00283B70
// Address: 0x283b70 - 0x283bd8
void sub_00283B70_0x283b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283B70_0x283b70");
#endif

    switch (ctx->pc) {
        case 0x283ba0u: goto label_283ba0;
        case 0x283bb0u: goto label_283bb0;
        default: break;
    }

    ctx->pc = 0x283b70u;

    // 0x283b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283b74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x283b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x283b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283b7c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x283b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x283b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x283b88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x283b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x283b8c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x283b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b90: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x283b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x283b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x283b98: 0xc0a0ef6  jal         func_283BD8
    ctx->pc = 0x283B98u;
    SET_GPR_U32(ctx, 31, 0x283BA0u);
    ctx->pc = 0x283B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B98u;
    // 0x283b9c: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283BD8u, 0x283B98u, 0x283BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BA0u;
label_283ba0:
    // 0x283ba0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x283ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x283ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ba8: 0xc0a0f10  jal         func_283C40
    ctx->pc = 0x283BA8u;
    SET_GPR_U32(ctx, 31, 0x283BB0u);
    ctx->pc = 0x283BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283BA8u;
    // 0x283bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283C40u, 0x283BA8u, 0x283BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BB0u;
label_283bb0:
    // 0x283bb0: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x283bb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x283bb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x283bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283bb8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x283bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x283bbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x283bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283bc0: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x283bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x283bc4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x283bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283bc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x283bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x283BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BD0u;
        // 0x283bd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283BD8u;
}
