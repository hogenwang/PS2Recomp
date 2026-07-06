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

// Function: sub_00169F60
// Address: 0x169f60 - 0x169fa0
void sub_00169F60_0x169f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169F60_0x169f60");
#endif

    switch (ctx->pc) {
        case 0x169f90u: goto label_169f90;
        default: break;
    }

    ctx->pc = 0x169f60u;

    // 0x169f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169f64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x169f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x169f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169f6c: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x169f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x169f70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x169f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x169f74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x169F74u;
    {
        const bool branch_taken_0x169f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F74u;
        // 0x169f78: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f74) {
            ctx->pc = 0x169F94u;
            goto label_169f94;
        }
    }
    ctx->pc = 0x169F7Cu;
    // 0x169f7c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169f80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x169f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169f84: 0x24a52c40  addiu       $a1, $a1, 0x2C40
    ctx->pc = 0x169f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11328));
    // 0x169f88: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169F88u;
    SET_GPR_U32(ctx, 31, 0x169F90u);
    ctx->pc = 0x169F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F88u;
    // 0x169f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169F88u, 0x169F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F90u;
label_169f90:
    // 0x169f90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_169f94:
    // 0x169f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169f98: 0x3e00008  jr          $ra
    ctx->pc = 0x169F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169FA0u;
}
