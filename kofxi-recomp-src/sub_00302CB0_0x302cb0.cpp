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

// Function: sub_00302CB0
// Address: 0x302cb0 - 0x302d10
void sub_00302CB0_0x302cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302CB0_0x302cb0");
#endif

    switch (ctx->pc) {
        case 0x302cf8u: goto label_302cf8;
        default: break;
    }

    ctx->pc = 0x302cb0u;

    // 0x302cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302cb4: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x302cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x302cb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302cbc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x302cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302cc0: 0x948b0004  lhu         $t3, 0x4($a0)
    ctx->pc = 0x302cc0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x302cc4: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x302cc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x302cc8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x302cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ccc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x302cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x302cd0: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x302cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x302cd4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x302cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302cd8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302cdc: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x302cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x302ce0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x302ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x302ce4: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x302ce4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302ce8: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x302ce8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x302cec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302cf0: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302CF0u;
    SET_GPR_U32(ctx, 31, 0x302CF8u);
    ctx->pc = 0x302CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302CF0u;
    // 0x302cf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x302CF0u, 0x302CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302CF8u;
label_302cf8:
    // 0x302cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x302CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302CFCu;
        // 0x302d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302D04u;
    // 0x302d04: 0x0  nop
    ctx->pc = 0x302d04u;
    // NOP
    // 0x302d08: 0x0  nop
    ctx->pc = 0x302d08u;
    // NOP
    // 0x302d0c: 0x0  nop
    ctx->pc = 0x302d0cu;
    // NOP
}
