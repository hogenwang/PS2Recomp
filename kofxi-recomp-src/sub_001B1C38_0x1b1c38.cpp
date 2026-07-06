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

// Function: sub_001B1C38
// Address: 0x1b1c38 - 0x1b1d28
void sub_001B1C38_0x1b1c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1C38_0x1b1c38");
#endif

    switch (ctx->pc) {
        case 0x1b1cd8u: goto label_1b1cd8;
        case 0x1b1cf8u: goto label_1b1cf8;
        case 0x1b1d18u: goto label_1b1d18;
        default: break;
    }

    ctx->pc = 0x1b1c38u;

    // 0x1b1c38: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1c3c: 0x24632330  addiu       $v1, $v1, 0x2330
    ctx->pc = 0x1b1c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9008));
    // 0x1b1c40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1c44: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C44u;
        // 0x1b1c48: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1C4Cu;
    // 0x1b1c4c: 0x0  nop
    ctx->pc = 0x1b1c4cu;
    // NOP
    // 0x1b1c50: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1b1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1b1c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C54u;
        // 0x1b1c58: 0x24427b38  addiu       $v0, $v0, 0x7B38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1C5Cu;
    // 0x1b1c5c: 0x0  nop
    ctx->pc = 0x1b1c5cu;
    // NOP
    // 0x1b1c60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C64u;
        // 0x1b1c68: 0xac442354  sw          $a0, 0x2354($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9044), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1C6Cu;
    // 0x1b1c6c: 0x0  nop
    ctx->pc = 0x1b1c6cu;
    // NOP
    // 0x1b1c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1c74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b1c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1c80: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B1C80u;
    ctx->pc = 0x1B1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C80u;
    // 0x1b1c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1C88u;
    // 0x1b1c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1c8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b1c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1c98: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B1C98u;
    ctx->pc = 0x1B1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C98u;
    // 0x1b1c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1CA0u;
    // 0x1b1ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1ca4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1cac: 0x24632360  addiu       $v1, $v1, 0x2360
    ctx->pc = 0x1b1cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9056));
    // 0x1b1cb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b1cbc: 0x0  nop
    ctx->pc = 0x1b1cbcu;
    // NOP
    // 0x1b1cc0: 0x806eab2  j           func_1BAAC8
    ctx->pc = 0x1B1CC0u;
    ctx->pc = 0x1B1CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CC0u;
    // 0x1b1cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAAC8u;
    sub_001BAAC8_0x1baac8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1CC8u;
    // 0x1b1cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1cd0: 0xc06c9b6  jal         func_1B26D8
    ctx->pc = 0x1B1CD0u;
    SET_GPR_U32(ctx, 31, 0x1B1CD8u);
    ctx->pc = 0x1B26D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B26D8u, 0x1B1CD0u, 0x1B1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CD8u;
label_1b1cd8:
    // 0x1b1cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1cdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CE0u;
        // 0x1b1ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1CE8u;
    // 0x1b1ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1cf0: 0xc06eab2  jal         func_1BAAC8
    ctx->pc = 0x1B1CF0u;
    SET_GPR_U32(ctx, 31, 0x1B1CF8u);
    ctx->pc = 0x1BAAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAAC8u, 0x1B1CF0u, 0x1B1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CF8u;
label_1b1cf8:
    // 0x1b1cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D00u;
        // 0x1b1d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1D08u;
    // 0x1b1d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1d10: 0xc06c6b8  jal         func_1B1AE0
    ctx->pc = 0x1B1D10u;
    SET_GPR_U32(ctx, 31, 0x1B1D18u);
    ctx->pc = 0x1B1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AE0u, 0x1B1D10u, 0x1B1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D18u;
label_1b1d18:
    // 0x1b1d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D20u;
        // 0x1b1d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1D28u;
}
