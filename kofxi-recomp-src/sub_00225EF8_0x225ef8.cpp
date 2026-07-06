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

// Function: sub_00225EF8
// Address: 0x225ef8 - 0x225f58
void sub_00225EF8_0x225ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225EF8_0x225ef8");
#endif

    switch (ctx->pc) {
        case 0x225f34u: goto label_225f34;
        default: break;
    }

    ctx->pc = 0x225ef8u;

    // 0x225ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225efc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x225efcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225f04: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x225f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x225f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x225f0c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x225f10: 0x8df0f1c4  lw          $s0, -0xE3C($t7)
    ctx->pc = 0x225f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963652)));
    // 0x225f14: 0x24e73760  addiu       $a3, $a3, 0x3760
    ctx->pc = 0x225f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14176));
    // 0x225f18: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x225f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x225f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f20: 0xade4f1c4  sw          $a0, -0xE3C($t7)
    ctx->pc = 0x225f20u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963652), GPR_U32(ctx, 4));
    // 0x225f24: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x225f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x225f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x225f2c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x225F2Cu;
    SET_GPR_U32(ctx, 31, 0x225F34u);
    ctx->pc = 0x225F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F2Cu;
    // 0x225f30: 0x24843778  addiu       $a0, $a0, 0x3778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x225F2Cu, 0x225F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F34u;
label_225f34:
    // 0x225f34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f40: 0x3e00008  jr          $ra
    ctx->pc = 0x225F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F40u;
        // 0x225f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F48u;
    // 0x225f48: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x225f48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x225F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F4Cu;
        // 0x225f50: 0x8de2f1c4  lw          $v0, -0xE3C($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963652)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F54u;
    // 0x225f54: 0x0  nop
    ctx->pc = 0x225f54u;
    // NOP
    if (ctx->pc == 0x225f54u) { ctx->pc = 0x225f58u; }
}
