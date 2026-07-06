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

// Function: sub_0019EAF0
// Address: 0x19eaf0 - 0x19eb30
void sub_0019EAF0_0x19eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EAF0_0x19eaf0");
#endif

    ctx->pc = 0x19eaf0u;

    // 0x19eaf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eaf4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eaf8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19eafc: 0xa065db5a  sb          $a1, -0x24A6($v1)
    ctx->pc = 0x19eafcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957914), (uint8_t)GPR_U32(ctx, 5));
    // 0x19eb00: 0xa085dda2  sb          $a1, -0x225E($a0)
    ctx->pc = 0x19eb00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294958498), (uint8_t)GPR_U32(ctx, 5));
    // 0x19eb04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eb08: 0x9065db10  lbu         $a1, -0x24F0($v1)
    ctx->pc = 0x19eb08u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x19eb0c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19eb10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eb14: 0xa060dba0  sb          $zero, -0x2460($v1)
    ctx->pc = 0x19eb14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957984), (uint8_t)GPR_U32(ctx, 0));
    // 0x19eb18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eb1c: 0xa060dde8  sb          $zero, -0x2218($v1)
    ctx->pc = 0x19eb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958568), (uint8_t)GPR_U32(ctx, 0));
    // 0x19eb20: 0x34a30003  ori         $v1, $a1, 0x3
    ctx->pc = 0x19eb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x19eb24: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB24u;
        // 0x19eb28: 0xa083db10  sb          $v1, -0x24F0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294957840), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EB2Cu;
    // 0x19eb2c: 0x0  nop
    ctx->pc = 0x19eb2cu;
    // NOP
}
