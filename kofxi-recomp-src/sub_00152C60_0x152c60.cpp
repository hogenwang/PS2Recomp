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

// Function: sub_00152C60
// Address: 0x152c60 - 0x152cc0
void sub_00152C60_0x152c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152C60_0x152c60");
#endif

    switch (ctx->pc) {
        case 0x152c84u: goto label_152c84;
        case 0x152c94u: goto label_152c94;
        case 0x152ca8u: goto label_152ca8;
        default: break;
    }

    ctx->pc = 0x152c60u;

    // 0x152c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152c64: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152c6c: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x152c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x152c70: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x152c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x152c74: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x152C74u;
    {
        const bool branch_taken_0x152c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c74) {
            ctx->pc = 0x152C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C74u;
            // 0x152c78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152C9Cu;
            goto label_152c9c;
        }
    }
    ctx->pc = 0x152C7Cu;
    // 0x152c7c: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152C7Cu;
    SET_GPR_U32(ctx, 31, 0x152C84u);
    ctx->pc = 0x152C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C7Cu;
    // 0x152c80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AE0u, 0x152C7Cu, 0x152C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C84u;
label_152c84:
    // 0x152c84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x152c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x152c88: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x152c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x152c8c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x152C8Cu;
    SET_GPR_U32(ctx, 31, 0x152C94u);
    ctx->pc = 0x152C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C8Cu;
    // 0x152c90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x152C8Cu, 0x152C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C94u;
label_152c94:
    // 0x152c94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x152C94u;
    {
        const bool branch_taken_0x152c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C94u;
        // 0x152c98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c94) {
            ctx->pc = 0x152CACu;
            goto label_152cac;
        }
    }
    ctx->pc = 0x152C9Cu;
label_152c9c:
    // 0x152c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ca0: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x152CA0u;
    SET_GPR_U32(ctx, 31, 0x152CA8u);
    ctx->pc = 0x152CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CA0u;
    // 0x152ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x152CA0u, 0x152CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CA8u;
label_152ca8:
    // 0x152ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152cac:
    // 0x152cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x152CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CB0u;
        // 0x152cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152CB8u;
    // 0x152cb8: 0x0  nop
    ctx->pc = 0x152cb8u;
    // NOP
    // 0x152cbc: 0x0  nop
    ctx->pc = 0x152cbcu;
    // NOP
}
