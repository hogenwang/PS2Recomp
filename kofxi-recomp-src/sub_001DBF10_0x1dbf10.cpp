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

// Function: sub_001DBF10
// Address: 0x1dbf10 - 0x1dbfc0
void sub_001DBF10_0x1dbf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBF10_0x1dbf10");
#endif

    ctx->pc = 0x1dbf10u;

    // 0x1dbf10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbf14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbf1c: 0xa0850059  sb          $a1, 0x59($a0)
    ctx->pc = 0x1dbf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 5));
    // 0x1dbf20: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1dbf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1dbf24: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1dbf24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1dbf28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1dbf28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1dbf2c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1dbf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1dbf30: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1dbf30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1dbf34: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1dbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1dbf38: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1dbf38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1dbf3c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1dbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1dbf40: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1dbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1dbf44: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1dbf44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1dbf48: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1dbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1dbf4c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1dbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1dbf50: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1dbf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1dbf54: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1dbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1dbf58: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1dbf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1dbf5c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x1dbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x1dbf60: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x1dbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x1dbf64: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1dbf64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1dbf68: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1dbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1dbf6c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1dbf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1dbf70: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x1dbf70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dbf74: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x1dbf74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dbf78: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x1dbf78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbf7c: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x1dbf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbf80: 0xa0830056  sb          $v1, 0x56($a0)
    ctx->pc = 0x1dbf80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbf84: 0xa0830057  sb          $v1, 0x57($a0)
    ctx->pc = 0x1dbf84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbf88: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x1dbf88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbf8c: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x1dbf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbf90: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x1dbf90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbf94: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x1dbf94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbf98: 0xa083005d  sb          $v1, 0x5D($a0)
    ctx->pc = 0x1dbf98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbf9c: 0xa083005e  sb          $v1, 0x5E($a0)
    ctx->pc = 0x1dbf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbfa0: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x1dbfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbfa4: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x1dbfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbfa8: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1dbfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1dbfac: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x1dbfacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbfb0: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x1dbfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbfb4: 0xa0830062  sb          $v1, 0x62($a0)
    ctx->pc = 0x1dbfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBFB8u;
        // 0x1dbfbc: 0xa0830063  sb          $v1, 0x63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBFC0u;
}
