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

// Function: sub_001FABD8
// Address: 0x1fabd8 - 0x1fac20
void sub_001FABD8_0x1fabd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FABD8_0x1fabd8");
#endif

    ctx->pc = 0x1fabd8u;

    // 0x1fabd8: 0x24851f88  addiu       $a1, $a0, 0x1F88
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8072));
    // 0x1fabdc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fabe0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1fabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fabe4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fabe8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fabec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fabecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fabf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fabf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fabf8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fabfc: 0x8c8313b8  lw          $v1, 0x13B8($a0)
    ctx->pc = 0x1fabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5048)));
    // 0x1fac00: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1fac00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fac04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fac08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fac0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fac10: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1fac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fac14: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1fac14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fac18: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC18u;
        // 0x1fac1c: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAC20u;
}
