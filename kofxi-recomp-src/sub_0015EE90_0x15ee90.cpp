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

// Function: sub_0015EE90
// Address: 0x15ee90 - 0x15eee0
void sub_0015EE90_0x15ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EE90_0x15ee90");
#endif

    ctx->pc = 0x15ee90u;

    // 0x15ee90: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ee94: 0x3c08009b  lui         $t0, 0x9B
    ctx->pc = 0x15ee94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)155 << 16));
    // 0x15ee98: 0x904944a0  lbu         $t1, 0x44A0($v0)
    ctx->pc = 0x15ee98u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17568)));
    // 0x15ee9c: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x15eea0: 0x250844a4  addiu       $t0, $t0, 0x44A4
    ctx->pc = 0x15eea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17572));
    // 0x15eea4: 0x24e744a8  addiu       $a3, $a3, 0x44A8
    ctx->pc = 0x15eea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17576));
    // 0x15eea8: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x15eea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x15eeac: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15eeb0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x15eeb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x15eeb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15eeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eeb8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x15eeb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x15eebc: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x15eebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x15eec0: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x15eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x15eec4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x15eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x15eec8: 0x90c444a0  lbu         $a0, 0x44A0($a2)
    ctx->pc = 0x15eec8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17568)));
    // 0x15eecc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15eed0: 0x3e00008  jr          $ra
    ctx->pc = 0x15EED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EED0u;
        // 0x15eed4: 0xa06444a0  sb          $a0, 0x44A0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 17568), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EED8u;
    // 0x15eed8: 0x0  nop
    ctx->pc = 0x15eed8u;
    // NOP
    // 0x15eedc: 0x0  nop
    ctx->pc = 0x15eedcu;
    // NOP
}
