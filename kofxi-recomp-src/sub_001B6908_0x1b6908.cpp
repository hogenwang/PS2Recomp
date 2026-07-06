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

// Function: sub_001B6908
// Address: 0x1b6908 - 0x1b6950
void sub_001B6908_0x1b6908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6908_0x1b6908");
#endif

    switch (ctx->pc) {
        case 0x1b6930u: goto label_1b6930;
        case 0x1b6940u: goto label_1b6940;
        default: break;
    }

    ctx->pc = 0x1b6908u;

    // 0x1b6908: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b6908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b690c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6914: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1b6914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b6918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b691c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b691cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6920u;
    {
        const bool branch_taken_0x1b6920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6920u;
        // 0x1b6924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6920) {
            ctx->pc = 0x1B6938u;
            goto label_1b6938;
        }
    }
    ctx->pc = 0x1B6928u;
    // 0x1b6928: 0xc06d9c6  jal         func_1B6718
    ctx->pc = 0x1B6928u;
    SET_GPR_U32(ctx, 31, 0x1B6930u);
    ctx->pc = 0x1B692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6928u;
    // 0x1b692c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6718u, 0x1B6928u, 0x1B6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6930u;
label_1b6930:
    // 0x1b6930: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6930u;
    {
        const bool branch_taken_0x1b6930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6930u;
        // 0x1b6934: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6930) {
            ctx->pc = 0x1B6944u;
            goto label_1b6944;
        }
    }
    ctx->pc = 0x1B6938u;
label_1b6938:
    // 0x1b6938: 0xc06d9fc  jal         func_1B67F0
    ctx->pc = 0x1B6938u;
    SET_GPR_U32(ctx, 31, 0x1B6940u);
    ctx->pc = 0x1B693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6938u;
    // 0x1b693c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B67F0u, 0x1B6938u, 0x1B6940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6940u;
label_1b6940:
    // 0x1b6940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6944:
    // 0x1b6944: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6944u;
        // 0x1b6948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B694Cu;
    // 0x1b694c: 0x0  nop
    ctx->pc = 0x1b694cu;
    // NOP
    if (ctx->pc == 0x1b694cu) { ctx->pc = 0x1b6950u; }
}
