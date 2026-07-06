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

// Function: sub_001BB7E0
// Address: 0x1bb7e0 - 0x1bb868
void sub_001BB7E0_0x1bb7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB7E0_0x1bb7e0");
#endif

    switch (ctx->pc) {
        case 0x1bb7f8u: goto label_1bb7f8;
        case 0x1bb83cu: goto label_1bb83c;
        case 0x1bb84cu: goto label_1bb84c;
        default: break;
    }

    ctx->pc = 0x1bb7e0u;

    // 0x1bb7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb7e4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB7E4u;
    {
        const bool branch_taken_0x1bb7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7E4u;
        // 0x1bb7e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7e4) {
            ctx->pc = 0x1BB808u;
            goto label_1bb808;
        }
    }
    ctx->pc = 0x1BB7ECu;
    // 0x1bb7ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bb7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bb7f0: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BB7F0u;
    SET_GPR_U32(ctx, 31, 0x1BB7F8u);
    ctx->pc = 0x1BB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7F0u;
    // 0x1bb7f4: 0x24848728  addiu       $a0, $a0, -0x78D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BB7F0u, 0x1BB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7F8u;
label_1bb7f8:
    // 0x1bb7f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb800: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB800u;
        // 0x1bb804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB808u;
label_1bb808:
    // 0x1bb808: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb810: 0x806d82e  j           func_1B60B8
    ctx->pc = 0x1BB810u;
    ctx->pc = 0x1BB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB810u;
    // 0x1bb814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B60B8u;
    sub_001B60B8_0x1b60b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB818u;
    // 0x1bb818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb828: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb82c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bb82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bb830: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bb830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bb834: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB834u;
    SET_GPR_U32(ctx, 31, 0x1BB83Cu);
    ctx->pc = 0x1BB838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB834u;
    // 0x1bb838: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BB834u, 0x1BB83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB83Cu;
label_1bb83c:
    // 0x1bb83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb840: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb844: 0xc06ee1a  jal         func_1BB868
    ctx->pc = 0x1BB844u;
    SET_GPR_U32(ctx, 31, 0x1BB84Cu);
    ctx->pc = 0x1BB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB844u;
    // 0x1bb848: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB868u, 0x1BB844u, 0x1BB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB84Cu;
label_1bb84c:
    // 0x1bb84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bb854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb858: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bb858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bb85c: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BB85Cu;
    ctx->pc = 0x1BB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB85Cu;
    // 0x1bb860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BB864u;
    // 0x1bb864: 0x0  nop
    ctx->pc = 0x1bb864u;
    // NOP
}
