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

// Function: sub_0028EB88
// Address: 0x28eb88 - 0x28ebd0
void sub_0028EB88_0x28eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EB88_0x28eb88");
#endif

    switch (ctx->pc) {
        case 0x28eb88u: goto label_28eb88;
        case 0x28eb8cu: goto label_28eb8c;
        case 0x28eb90u: goto label_28eb90;
        case 0x28eb94u: goto label_28eb94;
        case 0x28eb98u: goto label_28eb98;
        case 0x28eb9cu: goto label_28eb9c;
        case 0x28eba0u: goto label_28eba0;
        case 0x28eba4u: goto label_28eba4;
        case 0x28eba8u: goto label_28eba8;
        case 0x28ebacu: goto label_28ebac;
        case 0x28ebb0u: goto label_28ebb0;
        case 0x28ebb4u: goto label_28ebb4;
        case 0x28ebb8u: goto label_28ebb8;
        case 0x28ebbcu: goto label_28ebbc;
        case 0x28ebc0u: goto label_28ebc0;
        case 0x28ebc4u: goto label_28ebc4;
        case 0x28ebc8u: goto label_28ebc8;
        case 0x28ebccu: goto label_28ebcc;
        default: break;
    }

    ctx->pc = 0x28eb88u;

label_28eb88:
    // 0x28eb88: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28eb8c:
    // 0x28eb8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28eb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28eb90:
    // 0x28eb90: 0x8c42461c  lw          $v0, 0x461C($v0)
    ctx->pc = 0x28eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17948)));
label_28eb94:
    // 0x28eb94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28eb98:
    if (ctx->pc == 0x28EB98u) {
        ctx->pc = 0x28EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB94u;
        // 0x28eb98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB9Cu;
        goto label_28eb9c;
    }
    ctx->pc = 0x28EB94u;
    {
        const bool branch_taken_0x28eb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB94u;
        // 0x28eb98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb94) {
            ctx->pc = 0x28EBBCu;
            goto label_28ebbc;
        }
    }
    ctx->pc = 0x28EB9Cu;
label_28eb9c:
    // 0x28eb9c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28eba0:
    // 0x28eba0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x28eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_28eba4:
    // 0x28eba4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28eba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28eba8:
    // 0x28eba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28eba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ebac:
    // 0x28ebac: 0xc0a5648  jal         func_295920
label_28ebb0:
    if (ctx->pc == 0x28EBB0u) {
        ctx->pc = 0x28EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBACu;
        // 0x28ebb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBB4u;
        goto label_28ebb4;
    }
    ctx->pc = 0x28EBACu;
    SET_GPR_U32(ctx, 31, 0x28EBB4u);
    ctx->pc = 0x28EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBACu;
    // 0x28ebb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EBACu, 0x28EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBB4u;
label_28ebb4:
    // 0x28ebb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ebb8:
    if (ctx->pc == 0x28EBB8u) {
        ctx->pc = 0x28EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBB4u;
        // 0x28ebb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBBCu;
        goto label_28ebbc;
    }
    ctx->pc = 0x28EBB4u;
    {
        const bool branch_taken_0x28ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBB4u;
        // 0x28ebb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebb4) {
            ctx->pc = 0x28EBC4u;
            goto label_28ebc4;
        }
    }
    ctx->pc = 0x28EBBCu;
label_28ebbc:
    // 0x28ebbc: 0x40f809  jalr        $v0
label_28ebc0:
    if (ctx->pc == 0x28EBC0u) {
        ctx->pc = 0x28EBC4u;
        goto label_28ebc4;
    }
    ctx->pc = 0x28EBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EBC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBBCu, 0x28EBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EBC4u;
label_28ebc4:
    // 0x28ebc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ebc8:
    // 0x28ebc8: 0x3e00008  jr          $ra
label_28ebcc:
    if (ctx->pc == 0x28EBCCu) {
        ctx->pc = 0x28EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBC8u;
        // 0x28ebcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBD0u;
        goto label_fallthrough_0x28ebc8;
    }
    ctx->pc = 0x28EBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBC8u;
        // 0x28ebcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28ebc8:
    ctx->pc = 0x28EBD0u;
}
