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

// Function: sub_00232678
// Address: 0x232678 - 0x2326e0
void sub_00232678_0x232678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232678_0x232678");
#endif

    ctx->pc = 0x232678u;

    // 0x232678: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x232678u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23267c: 0x3c0205f5  lui         $v0, 0x5F5
    ctx->pc = 0x23267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1525 << 16));
    // 0x232680: 0x3442e100  ori         $v0, $v0, 0xE100
    ctx->pc = 0x232680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57600);
    // 0x232684: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x232684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x232688: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x232688u;
    {
        const bool branch_taken_0x232688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232688) {
            ctx->pc = 0x2326B0u;
            goto label_2326b0;
        }
    }
    ctx->pc = 0x232690u;
    // 0x232690: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x232690u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x232694: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x232694u;
    {
        const bool branch_taken_0x232694 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x232694) {
            ctx->pc = 0x2326B0u;
            goto label_2326b0;
        }
    }
    ctx->pc = 0x23269Cu;
    // 0x23269c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x23269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x2326a0: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x2326a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x2326a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2326a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2326a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2326A8u;
    {
        const bool branch_taken_0x2326a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2326a8) {
            ctx->pc = 0x2326B8u;
            goto label_2326b8;
        }
    }
    ctx->pc = 0x2326B0u;
label_2326b0:
    // 0x2326b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2326B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2326B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326B0u;
        // 0x2326b4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2326B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2326B8u;
label_2326b8:
    // 0x2326b8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2326B8u;
    {
        const bool branch_taken_0x2326b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2326b8) {
            ctx->pc = 0x2326D4u;
            goto label_2326d4;
        }
    }
    ctx->pc = 0x2326C0u;
    // 0x2326c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2326C0u;
    {
        const bool branch_taken_0x2326c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326C0u;
        // 0x2326c4: 0x28622710  slti        $v0, $v1, 0x2710 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326c0) {
            ctx->pc = 0x2326D4u;
            goto label_2326d4;
        }
    }
    ctx->pc = 0x2326C8u;
    // 0x2326c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2326C8u;
    {
        const bool branch_taken_0x2326c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326C8u;
        // 0x2326cc: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326c8) {
            ctx->pc = 0x2326D4u;
            goto label_2326d4;
        }
    }
    ctx->pc = 0x2326D0u;
    // 0x2326d0: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x2326d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_2326d4:
    // 0x2326d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2326D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2326D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326D4u;
        // 0x2326d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2326D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2326DCu;
    // 0x2326dc: 0x0  nop
    ctx->pc = 0x2326dcu;
    // NOP
    if (ctx->pc == 0x2326dcu) { ctx->pc = 0x2326e0u; }
}
