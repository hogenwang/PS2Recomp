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

// Function: sub_001FE7B0
// Address: 0x1fe7b0 - 0x1fe830
void sub_001FE7B0_0x1fe7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE7B0_0x1fe7b0");
#endif

    switch (ctx->pc) {
        case 0x1fe7d0u: goto label_1fe7d0;
        case 0x1fe7e0u: goto label_1fe7e0;
        case 0x1fe7f0u: goto label_1fe7f0;
        default: break;
    }

    ctx->pc = 0x1fe7b0u;

    // 0x1fe7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe7b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fe7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fe7b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe7c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fe7c8: 0xc07f688  jal         func_1FDA20
    ctx->pc = 0x1FE7C8u;
    SET_GPR_U32(ctx, 31, 0x1FE7D0u);
    ctx->pc = 0x1FE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7C8u;
    // 0x1fe7cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA20u, 0x1FE7C8u, 0x1FE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7D0u;
label_1fe7d0:
    // 0x1fe7d0: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE7D0u;
    {
        const bool branch_taken_0x1fe7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1FE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7D0u;
        // 0x1fe7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7d0) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE7D8u;
    // 0x1fe7d8: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1FE7D8u;
    SET_GPR_U32(ctx, 31, 0x1FE7E0u);
    ctx->pc = 0x1FE7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7D8u;
    // 0x1fe7dc: 0x8e0521b8  lw          $a1, 0x21B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5D8u, 0x1FE7D8u, 0x1FE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7E0u;
label_1fe7e0:
    // 0x1fe7e0: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE7E0u;
    {
        const bool branch_taken_0x1fe7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1FE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7E0u;
        // 0x1fe7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7e0) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE7E8u;
    // 0x1fe7e8: 0xc07fa0c  jal         func_1FE830
    ctx->pc = 0x1FE7E8u;
    SET_GPR_U32(ctx, 31, 0x1FE7F0u);
    ctx->pc = 0x1FE830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE830u, 0x1FE7E8u, 0x1FE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7F0u;
label_1fe7f0:
    // 0x1fe7f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE7F0u;
    {
        const bool branch_taken_0x1fe7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7F0u;
        // 0x1fe7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7f0) {
            ctx->pc = 0x1FE818u;
            goto label_1fe818;
        }
    }
    ctx->pc = 0x1FE7F8u;
    // 0x1fe7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe7fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe800: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fe804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe808: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fe808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe80c: 0x807f682  j           func_1FDA08
    ctx->pc = 0x1FE80Cu;
    ctx->pc = 0x1FE810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE80Cu;
    // 0x1fe810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA08u, 0x1FE80Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FE814u;
    // 0x1fe814: 0x0  nop
    ctx->pc = 0x1fe814u;
    // NOP
label_1fe818:
    // 0x1fe818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe81c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe824: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE824u;
        // 0x1fe828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE82Cu;
    // 0x1fe82c: 0x0  nop
    ctx->pc = 0x1fe82cu;
    // NOP
    if (ctx->pc == 0x1fe82cu) { ctx->pc = 0x1fe830u; }
}
