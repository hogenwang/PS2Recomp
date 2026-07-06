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

// Function: sub_001B7C70
// Address: 0x1b7c70 - 0x1b7d00
void sub_001B7C70_0x1b7c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7C70_0x1b7c70");
#endif

    switch (ctx->pc) {
        case 0x1b7c90u: goto label_1b7c90;
        case 0x1b7cd4u: goto label_1b7cd4;
        case 0x1b7ce0u: goto label_1b7ce0;
        case 0x1b7ce8u: goto label_1b7ce8;
        default: break;
    }

    ctx->pc = 0x1b7c70u;

    // 0x1b7c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C70u;
        // 0x1b7c74: 0x80820044  lb          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C78u;
    // 0x1b7c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7c80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b7c88: 0xc06fb80  jal         func_1BEE00
    ctx->pc = 0x1B7C88u;
    SET_GPR_U32(ctx, 31, 0x1B7C90u);
    ctx->pc = 0x1B7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C88u;
    // 0x1b7c8c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE00u, 0x1B7C88u, 0x1B7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C90u;
label_1b7c90:
    // 0x1b7c90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b7c94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b7c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C9Cu;
        // 0x1b7ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7CA4u;
    // 0x1b7ca4: 0x0  nop
    ctx->pc = 0x1b7ca4u;
    // NOP
    // 0x1b7ca8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1b7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1b7cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CACu;
        // 0x1b7cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7CB4u;
    // 0x1b7cb4: 0x0  nop
    ctx->pc = 0x1b7cb4u;
    // NOP
    // 0x1b7cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7ccc: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B7CCCu;
    SET_GPR_U32(ctx, 31, 0x1B7CD4u);
    ctx->pc = 0x1B7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CCCu;
    // 0x1b7cd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8150u, 0x1B7CCCu, 0x1B7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CD4u;
label_1b7cd4:
    // 0x1b7cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cd8: 0xc06df40  jal         func_1B7D00
    ctx->pc = 0x1B7CD8u;
    SET_GPR_U32(ctx, 31, 0x1B7CE0u);
    ctx->pc = 0x1B7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CD8u;
    // 0x1b7cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7D00u, 0x1B7CD8u, 0x1B7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CE0u;
label_1b7ce0:
    // 0x1b7ce0: 0xc06e05a  jal         func_1B8168
    ctx->pc = 0x1B7CE0u;
    SET_GPR_U32(ctx, 31, 0x1B7CE8u);
    ctx->pc = 0x1B7CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CE0u;
    // 0x1b7ce4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8168u, 0x1B7CE0u, 0x1B7CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CE8u;
label_1b7ce8:
    // 0x1b7ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7cec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b7cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CF8u;
        // 0x1b7cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7D00u;
}
