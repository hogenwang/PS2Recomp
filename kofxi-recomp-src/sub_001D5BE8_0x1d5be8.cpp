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

// Function: sub_001D5BE8
// Address: 0x1d5be8 - 0x1d5cd8
void sub_001D5BE8_0x1d5be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5BE8_0x1d5be8");
#endif

    switch (ctx->pc) {
        case 0x1d5cb0u: goto label_1d5cb0;
        default: break;
    }

    ctx->pc = 0x1d5be8u;

    // 0x1d5be8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5bf4: 0xa0850059  sb          $a1, 0x59($a0)
    ctx->pc = 0x1d5bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d5bf8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1d5bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1d5bfc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d5bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d5c00: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d5c04: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d5c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d5c08: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d5c0c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d5c10: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1d5c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1d5c14: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d5c18: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1d5c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1d5c1c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1d5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1d5c20: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1d5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1d5c24: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1d5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1d5c28: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1d5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1d5c2c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1d5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1d5c30: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1d5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1d5c34: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x1d5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x1d5c38: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1d5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1d5c3c: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1d5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1d5c40: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1d5c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1d5c44: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1d5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1d5c48: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x1d5c48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5c4c: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x1d5c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5c50: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x1d5c50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c54: 0xa0850055  sb          $a1, 0x55($a0)
    ctx->pc = 0x1d5c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d5c58: 0xa0800056  sb          $zero, 0x56($a0)
    ctx->pc = 0x1d5c58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c5c: 0xa0800057  sb          $zero, 0x57($a0)
    ctx->pc = 0x1d5c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c60: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x1d5c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c64: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x1d5c64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c68: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x1d5c68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c6c: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x1d5c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c70: 0xa083005d  sb          $v1, 0x5D($a0)
    ctx->pc = 0x1d5c70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d5c74: 0xa080005e  sb          $zero, 0x5E($a0)
    ctx->pc = 0x1d5c74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c78: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x1d5c78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d5c7c: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x1d5c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d5c80: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1d5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1d5c84: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x1d5c84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d5c88: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x1d5c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d5c8c: 0xa0830062  sb          $v1, 0x62($a0)
    ctx->pc = 0x1d5c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d5c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C90u;
        // 0x1d5c94: 0xa0830063  sb          $v1, 0x63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C98u;
    // 0x1d5c98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5CA0u;
    // 0x1d5ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5ca8: 0xc075736  jal         func_1D5CD8
    ctx->pc = 0x1D5CA8u;
    SET_GPR_U32(ctx, 31, 0x1D5CB0u);
    ctx->pc = 0x1D5CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD8u, 0x1D5CA8u, 0x1D5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CB0u;
label_1d5cb0:
    // 0x1d5cb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5CB4u;
    {
        const bool branch_taken_0x1d5cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CB4u;
        // 0x1d5cb8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cb4) {
            ctx->pc = 0x1D5CC8u;
            goto label_1d5cc8;
        }
    }
    ctx->pc = 0x1D5CBCu;
    // 0x1d5cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5cc0: 0x807574a  j           func_1D5D28
    ctx->pc = 0x1D5CC0u;
    ctx->pc = 0x1D5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CC0u;
    // 0x1d5cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1D5CC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CC8u;
label_1d5cc8:
    // 0x1d5cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CCCu;
        // 0x1d5cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5CD4u;
    // 0x1d5cd4: 0x0  nop
    ctx->pc = 0x1d5cd4u;
    // NOP
    if (ctx->pc == 0x1d5cd4u) { ctx->pc = 0x1d5cd8u; }
}
