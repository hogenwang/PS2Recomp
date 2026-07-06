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

// Function: sub_0028EEB0
// Address: 0x28eeb0 - 0x28eef8
void sub_0028EEB0_0x28eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EEB0_0x28eeb0");
#endif

    switch (ctx->pc) {
        case 0x28eeb0u: goto label_28eeb0;
        case 0x28eeb4u: goto label_28eeb4;
        case 0x28eeb8u: goto label_28eeb8;
        case 0x28eebcu: goto label_28eebc;
        case 0x28eec0u: goto label_28eec0;
        case 0x28eec4u: goto label_28eec4;
        case 0x28eec8u: goto label_28eec8;
        case 0x28eeccu: goto label_28eecc;
        case 0x28eed0u: goto label_28eed0;
        case 0x28eed4u: goto label_28eed4;
        case 0x28eed8u: goto label_28eed8;
        case 0x28eedcu: goto label_28eedc;
        case 0x28eee0u: goto label_28eee0;
        case 0x28eee4u: goto label_28eee4;
        case 0x28eee8u: goto label_28eee8;
        case 0x28eeecu: goto label_28eeec;
        case 0x28eef0u: goto label_28eef0;
        case 0x28eef4u: goto label_28eef4;
        default: break;
    }

    ctx->pc = 0x28eeb0u;

label_28eeb0:
    // 0x28eeb0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28eeb4:
    // 0x28eeb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28eeb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28eeb8:
    // 0x28eeb8: 0x8c424628  lw          $v0, 0x4628($v0)
    ctx->pc = 0x28eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17960)));
label_28eebc:
    // 0x28eebc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28eec0:
    if (ctx->pc == 0x28EEC0u) {
        ctx->pc = 0x28EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEBCu;
        // 0x28eec0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EEC4u;
        goto label_28eec4;
    }
    ctx->pc = 0x28EEBCu;
    {
        const bool branch_taken_0x28eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEBCu;
        // 0x28eec0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eebc) {
            ctx->pc = 0x28EEE4u;
            goto label_28eee4;
        }
    }
    ctx->pc = 0x28EEC4u;
label_28eec4:
    // 0x28eec4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28eec8:
    // 0x28eec8: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x28eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_28eecc:
    // 0x28eecc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28eeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28eed0:
    // 0x28eed0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28eed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eed4:
    // 0x28eed4: 0xc0a5648  jal         func_295920
label_28eed8:
    if (ctx->pc == 0x28EED8u) {
        ctx->pc = 0x28EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EED4u;
        // 0x28eed8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EEDCu;
        goto label_28eedc;
    }
    ctx->pc = 0x28EED4u;
    SET_GPR_U32(ctx, 31, 0x28EEDCu);
    ctx->pc = 0x28EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EED4u;
    // 0x28eed8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EED4u, 0x28EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEDCu;
label_28eedc:
    // 0x28eedc: 0x10000003  b           . + 4 + (0x3 << 2)
label_28eee0:
    if (ctx->pc == 0x28EEE0u) {
        ctx->pc = 0x28EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEDCu;
        // 0x28eee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EEE4u;
        goto label_28eee4;
    }
    ctx->pc = 0x28EEDCu;
    {
        const bool branch_taken_0x28eedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEDCu;
        // 0x28eee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eedc) {
            ctx->pc = 0x28EEECu;
            goto label_28eeec;
        }
    }
    ctx->pc = 0x28EEE4u;
label_28eee4:
    // 0x28eee4: 0x40f809  jalr        $v0
label_28eee8:
    if (ctx->pc == 0x28EEE8u) {
        ctx->pc = 0x28EEECu;
        goto label_28eeec;
    }
    ctx->pc = 0x28EEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EEECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EEE4u, 0x28EEECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EEECu;
label_28eeec:
    // 0x28eeec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eef0:
    // 0x28eef0: 0x3e00008  jr          $ra
label_28eef4:
    if (ctx->pc == 0x28EEF4u) {
        ctx->pc = 0x28EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEF0u;
        // 0x28eef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EEF8u;
        goto label_fallthrough_0x28eef0;
    }
    ctx->pc = 0x28EEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEF0u;
        // 0x28eef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28eef0:
    ctx->pc = 0x28EEF8u;
}
