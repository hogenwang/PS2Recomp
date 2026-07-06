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

// Function: sub_0028EFD0
// Address: 0x28efd0 - 0x28f018
void sub_0028EFD0_0x28efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EFD0_0x28efd0");
#endif

    switch (ctx->pc) {
        case 0x28efd0u: goto label_28efd0;
        case 0x28efd4u: goto label_28efd4;
        case 0x28efd8u: goto label_28efd8;
        case 0x28efdcu: goto label_28efdc;
        case 0x28efe0u: goto label_28efe0;
        case 0x28efe4u: goto label_28efe4;
        case 0x28efe8u: goto label_28efe8;
        case 0x28efecu: goto label_28efec;
        case 0x28eff0u: goto label_28eff0;
        case 0x28eff4u: goto label_28eff4;
        case 0x28eff8u: goto label_28eff8;
        case 0x28effcu: goto label_28effc;
        case 0x28f000u: goto label_28f000;
        case 0x28f004u: goto label_28f004;
        case 0x28f008u: goto label_28f008;
        case 0x28f00cu: goto label_28f00c;
        case 0x28f010u: goto label_28f010;
        case 0x28f014u: goto label_28f014;
        default: break;
    }

    ctx->pc = 0x28efd0u;

label_28efd0:
    // 0x28efd0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28efd4:
    // 0x28efd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28efd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28efd8:
    // 0x28efd8: 0x8c42464c  lw          $v0, 0x464C($v0)
    ctx->pc = 0x28efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17996)));
label_28efdc:
    // 0x28efdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28efe0:
    if (ctx->pc == 0x28EFE0u) {
        ctx->pc = 0x28EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFDCu;
        // 0x28efe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EFE4u;
        goto label_28efe4;
    }
    ctx->pc = 0x28EFDCu;
    {
        const bool branch_taken_0x28efdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFDCu;
        // 0x28efe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28efdc) {
            ctx->pc = 0x28F004u;
            goto label_28f004;
        }
    }
    ctx->pc = 0x28EFE4u;
label_28efe4:
    // 0x28efe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28efe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28efe8:
    // 0x28efe8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28efec:
    // 0x28efec: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x28efecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_28eff0:
    // 0x28eff0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28eff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28eff4:
    // 0x28eff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28eff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eff8:
    // 0x28eff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28eff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28effc:
    // 0x28effc: 0x80a5648  j           func_295920
label_28f000:
    if (ctx->pc == 0x28F000u) {
        ctx->pc = 0x28F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EFFCu;
        // 0x28f000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F004u;
        goto label_28f004;
    }
    ctx->pc = 0x28EFFCu;
    ctx->pc = 0x28F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EFFCu;
    // 0x28f000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x28F004u;
label_28f004:
    // 0x28f004: 0x40f809  jalr        $v0
label_28f008:
    if (ctx->pc == 0x28F008u) {
        ctx->pc = 0x28F00Cu;
        goto label_28f00c;
    }
    ctx->pc = 0x28F004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F00Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F004u, 0x28F00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F00Cu;
label_28f00c:
    // 0x28f00c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f010:
    // 0x28f010: 0x3e00008  jr          $ra
label_28f014:
    if (ctx->pc == 0x28F014u) {
        ctx->pc = 0x28F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F010u;
        // 0x28f014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F018u;
        goto label_fallthrough_0x28f010;
    }
    ctx->pc = 0x28F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F010u;
        // 0x28f014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f010:
    ctx->pc = 0x28F018u;
}
