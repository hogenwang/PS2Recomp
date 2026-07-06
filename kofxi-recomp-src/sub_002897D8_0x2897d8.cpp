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

// Function: sub_002897D8
// Address: 0x2897d8 - 0x289850
void sub_002897D8_0x2897d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002897D8_0x2897d8");
#endif

    switch (ctx->pc) {
        case 0x289808u: goto label_289808;
        case 0x28981cu: goto label_28981c;
        default: break;
    }

    ctx->pc = 0x2897d8u;

    // 0x2897d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2897d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2897dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2897dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2897e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2897e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2897e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2897e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2897e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2897e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2897ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2897f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2897F0u;
    {
        const bool branch_taken_0x2897f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2897F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2897F0u;
        // 0x2897f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2897f0) {
            ctx->pc = 0x289834u;
            goto label_289834;
        }
    }
    ctx->pc = 0x2897F8u;
    // 0x2897f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2897f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897fc: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2897fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x289800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x289800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x289804: 0x0  nop
    ctx->pc = 0x289804u;
    // NOP
label_289808:
    // 0x289808: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x289808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28980c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28980cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289810: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x289810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x289814: 0xc0a2514  jal         func_289450
    ctx->pc = 0x289814u;
    SET_GPR_U32(ctx, 31, 0x28981Cu);
    ctx->pc = 0x289818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289814u;
    // 0x289818: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289450u, 0x289814u, 0x28981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28981Cu;
label_28981c:
    // 0x28981c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x28981cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x289820: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x289820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289824: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x289824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x289828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x289828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28982c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x28982Cu;
    {
        const bool branch_taken_0x28982c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28982Cu;
        // 0x289830: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28982c) {
            ctx->pc = 0x289808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289808;
        }
    }
    ctx->pc = 0x289834u;
label_289834:
    // 0x289834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28983c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28983cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289844: 0x3e00008  jr          $ra
    ctx->pc = 0x289844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289844u;
        // 0x289848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28984Cu;
    // 0x28984c: 0x0  nop
    ctx->pc = 0x28984cu;
    // NOP
}
