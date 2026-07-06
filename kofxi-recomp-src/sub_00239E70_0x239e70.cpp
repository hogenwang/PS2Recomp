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

// Function: sub_00239E70
// Address: 0x239e70 - 0x239ed0
void sub_00239E70_0x239e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239E70_0x239e70");
#endif

    switch (ctx->pc) {
        case 0x239e8cu: goto label_239e8c;
        case 0x239eb8u: goto label_239eb8;
        default: break;
    }

    ctx->pc = 0x239e70u;

    // 0x239e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239e78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x239e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x239e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x239e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x239e84: 0xc08c682  jal         func_231A08
    ctx->pc = 0x239E84u;
    SET_GPR_U32(ctx, 31, 0x239E8Cu);
    ctx->pc = 0x239E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E84u;
    // 0x239e88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x239E84u, 0x239E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E8Cu;
label_239e8c:
    // 0x239e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e90: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x239e94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239E94u;
    {
        const bool branch_taken_0x239e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239e94) {
            ctx->pc = 0x239EB0u;
            goto label_239eb0;
        }
    }
    ctx->pc = 0x239E9Cu;
    // 0x239e9c: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x239e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x239ea0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239EA0u;
    {
        const bool branch_taken_0x239ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239ea0) {
            ctx->pc = 0x239EB0u;
            goto label_239eb0;
        }
    }
    ctx->pc = 0x239EA8u;
    // 0x239ea8: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x239ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x239eac: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x239eacu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_239eb0:
    // 0x239eb0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x239EB0u;
    SET_GPR_U32(ctx, 31, 0x239EB8u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x239EB0u, 0x239EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EB8u;
label_239eb8:
    // 0x239eb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x239eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x239ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239ec0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x239EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EC8u;
        // 0x239ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239ED0u;
}
