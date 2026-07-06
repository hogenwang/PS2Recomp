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

// Function: sub_001BB6C8
// Address: 0x1bb6c8 - 0x1bb720
void sub_001BB6C8_0x1bb6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB6C8_0x1bb6c8");
#endif

    switch (ctx->pc) {
        case 0x1bb6f4u: goto label_1bb6f4;
        case 0x1bb704u: goto label_1bb704;
        default: break;
    }

    ctx->pc = 0x1bb6c8u;

    // 0x1bb6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6C8u;
        // 0x1bb6cc: 0x80820098  lb          $v0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB6D0u;
    // 0x1bb6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb6e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bb6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bb6e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bb6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bb6ec: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB6ECu;
    SET_GPR_U32(ctx, 31, 0x1BB6F4u);
    ctx->pc = 0x1BB6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6ECu;
    // 0x1bb6f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB6ECu, 0x1BB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6F4u;
label_1bb6f4:
    // 0x1bb6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb6fc: 0xc06edc8  jal         func_1BB720
    ctx->pc = 0x1BB6FCu;
    SET_GPR_U32(ctx, 31, 0x1BB704u);
    ctx->pc = 0x1BB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6FCu;
    // 0x1bb700: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB720u, 0x1BB6FCu, 0x1BB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB704u;
label_1bb704:
    // 0x1bb704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb70c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bb70cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb710: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bb710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb714: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB714u;
    ctx->pc = 0x1BB718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB714u;
    // 0x1bb718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB71Cu;
    // 0x1bb71c: 0x0  nop
    ctx->pc = 0x1bb71cu;
    // NOP
    if (ctx->pc == 0x1bb71cu) { ctx->pc = 0x1bb720u; }
}
