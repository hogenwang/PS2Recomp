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

// Function: sub_0028EBD0
// Address: 0x28ebd0 - 0x28ec18
void sub_0028EBD0_0x28ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EBD0_0x28ebd0");
#endif

    switch (ctx->pc) {
        case 0x28ebd0u: goto label_28ebd0;
        case 0x28ebd4u: goto label_28ebd4;
        case 0x28ebd8u: goto label_28ebd8;
        case 0x28ebdcu: goto label_28ebdc;
        case 0x28ebe0u: goto label_28ebe0;
        case 0x28ebe4u: goto label_28ebe4;
        case 0x28ebe8u: goto label_28ebe8;
        case 0x28ebecu: goto label_28ebec;
        case 0x28ebf0u: goto label_28ebf0;
        case 0x28ebf4u: goto label_28ebf4;
        case 0x28ebf8u: goto label_28ebf8;
        case 0x28ebfcu: goto label_28ebfc;
        case 0x28ec00u: goto label_28ec00;
        case 0x28ec04u: goto label_28ec04;
        case 0x28ec08u: goto label_28ec08;
        case 0x28ec0cu: goto label_28ec0c;
        case 0x28ec10u: goto label_28ec10;
        case 0x28ec14u: goto label_28ec14;
        default: break;
    }

    ctx->pc = 0x28ebd0u;

label_28ebd0:
    // 0x28ebd0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ebd4:
    // 0x28ebd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ebd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ebd8:
    // 0x28ebd8: 0x8c424620  lw          $v0, 0x4620($v0)
    ctx->pc = 0x28ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17952)));
label_28ebdc:
    // 0x28ebdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ebe0:
    if (ctx->pc == 0x28EBE0u) {
        ctx->pc = 0x28EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBDCu;
        // 0x28ebe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBE4u;
        goto label_28ebe4;
    }
    ctx->pc = 0x28EBDCu;
    {
        const bool branch_taken_0x28ebdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBDCu;
        // 0x28ebe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebdc) {
            ctx->pc = 0x28EC04u;
            goto label_28ec04;
        }
    }
    ctx->pc = 0x28EBE4u;
label_28ebe4:
    // 0x28ebe4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ebe8:
    // 0x28ebe8: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x28ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_28ebec:
    // 0x28ebec: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ebecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ebf0:
    // 0x28ebf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ebf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ebf4:
    // 0x28ebf4: 0xc0a5648  jal         func_295920
label_28ebf8:
    if (ctx->pc == 0x28EBF8u) {
        ctx->pc = 0x28EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBF4u;
        // 0x28ebf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EBFCu;
        goto label_28ebfc;
    }
    ctx->pc = 0x28EBF4u;
    SET_GPR_U32(ctx, 31, 0x28EBFCu);
    ctx->pc = 0x28EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBF4u;
    // 0x28ebf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EBF4u, 0x28EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBFCu;
label_28ebfc:
    // 0x28ebfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ec00:
    if (ctx->pc == 0x28EC00u) {
        ctx->pc = 0x28EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBFCu;
        // 0x28ec00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC04u;
        goto label_28ec04;
    }
    ctx->pc = 0x28EBFCu;
    {
        const bool branch_taken_0x28ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBFCu;
        // 0x28ec00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebfc) {
            ctx->pc = 0x28EC0Cu;
            goto label_28ec0c;
        }
    }
    ctx->pc = 0x28EC04u;
label_28ec04:
    // 0x28ec04: 0x40f809  jalr        $v0
label_28ec08:
    if (ctx->pc == 0x28EC08u) {
        ctx->pc = 0x28EC0Cu;
        goto label_28ec0c;
    }
    ctx->pc = 0x28EC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EC0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC04u, 0x28EC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EC0Cu;
label_28ec0c:
    // 0x28ec0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ec0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ec10:
    // 0x28ec10: 0x3e00008  jr          $ra
label_28ec14:
    if (ctx->pc == 0x28EC14u) {
        ctx->pc = 0x28EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC10u;
        // 0x28ec14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EC18u;
        goto label_fallthrough_0x28ec10;
    }
    ctx->pc = 0x28EC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC10u;
        // 0x28ec14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28ec10:
    ctx->pc = 0x28EC18u;
}
