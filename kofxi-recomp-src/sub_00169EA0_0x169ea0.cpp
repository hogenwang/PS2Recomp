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

// Function: sub_00169EA0
// Address: 0x169ea0 - 0x169ed0
void sub_00169EA0_0x169ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169EA0_0x169ea0");
#endif

    switch (ctx->pc) {
        case 0x169ebcu: goto label_169ebc;
        default: break;
    }

    ctx->pc = 0x169ea0u;

    // 0x169ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169ea4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169eac: 0x24a52b90  addiu       $a1, $a1, 0x2B90
    ctx->pc = 0x169eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11152));
    // 0x169eb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x169eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169eb4: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169EB4u;
    SET_GPR_U32(ctx, 31, 0x169EBCu);
    ctx->pc = 0x169EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EB4u;
    // 0x169eb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169EB4u, 0x169EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169EBCu;
label_169ebc:
    // 0x169ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ec0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x169EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EC4u;
        // 0x169ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169ECCu;
    // 0x169ecc: 0x0  nop
    ctx->pc = 0x169eccu;
    // NOP
    if (ctx->pc == 0x169eccu) { ctx->pc = 0x169ed0u; }
}
