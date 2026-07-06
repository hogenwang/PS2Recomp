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

// Function: sub_00122E78
// Address: 0x122e78 - 0x122ec8
void sub_00122E78_0x122e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122E78_0x122e78");
#endif

    switch (ctx->pc) {
        case 0x122e98u: goto label_122e98;
        case 0x122ea8u: goto label_122ea8;
        case 0x122eb4u: goto label_122eb4;
        default: break;
    }

    ctx->pc = 0x122e78u;

    // 0x122e78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122e7c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x122e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x122e80: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x122e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x122e84: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x122e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x122e88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x122e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x122e8c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x122e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x122e90: 0xc048998  jal         func_122660
    ctx->pc = 0x122E90u;
    SET_GPR_U32(ctx, 31, 0x122E98u);
    ctx->pc = 0x122E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E90u;
    // 0x122e94: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122E90u, 0x122E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E98u;
label_122e98:
    // 0x122e98: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x122e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x122e9c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x122e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x122ea0: 0xc048998  jal         func_122660
    ctx->pc = 0x122EA0u;
    SET_GPR_U32(ctx, 31, 0x122EA8u);
    ctx->pc = 0x122EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EA0u;
    // 0x122ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122EA0u, 0x122EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EA8u;
label_122ea8:
    // 0x122ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122eac: 0xc048b5e  jal         func_122D78
    ctx->pc = 0x122EACu;
    SET_GPR_U32(ctx, 31, 0x122EB4u);
    ctx->pc = 0x122EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EACu;
    // 0x122eb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D78u, 0x122EACu, 0x122EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EB4u;
label_122eb4:
    // 0x122eb4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x122eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122eb8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x122eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x122ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x122EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EBCu;
        // 0x122ec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122EC4u;
    // 0x122ec4: 0x0  nop
    ctx->pc = 0x122ec4u;
    // NOP
}
