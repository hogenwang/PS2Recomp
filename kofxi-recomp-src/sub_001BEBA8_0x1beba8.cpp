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

// Function: sub_001BEBA8
// Address: 0x1beba8 - 0x1bec10
void sub_001BEBA8_0x1beba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEBA8_0x1beba8");
#endif

    switch (ctx->pc) {
        case 0x1beba8u: goto label_1beba8;
        case 0x1bebacu: goto label_1bebac;
        case 0x1bebb0u: goto label_1bebb0;
        case 0x1bebb4u: goto label_1bebb4;
        case 0x1bebb8u: goto label_1bebb8;
        case 0x1bebbcu: goto label_1bebbc;
        case 0x1bebc0u: goto label_1bebc0;
        case 0x1bebc4u: goto label_1bebc4;
        case 0x1bebc8u: goto label_1bebc8;
        case 0x1bebccu: goto label_1bebcc;
        case 0x1bebd0u: goto label_1bebd0;
        case 0x1bebd4u: goto label_1bebd4;
        case 0x1bebd8u: goto label_1bebd8;
        case 0x1bebdcu: goto label_1bebdc;
        case 0x1bebe0u: goto label_1bebe0;
        case 0x1bebe4u: goto label_1bebe4;
        case 0x1bebe8u: goto label_1bebe8;
        case 0x1bebecu: goto label_1bebec;
        case 0x1bebf0u: goto label_1bebf0;
        case 0x1bebf4u: goto label_1bebf4;
        case 0x1bebf8u: goto label_1bebf8;
        case 0x1bebfcu: goto label_1bebfc;
        case 0x1bec00u: goto label_1bec00;
        case 0x1bec04u: goto label_1bec04;
        case 0x1bec08u: goto label_1bec08;
        case 0x1bec0cu: goto label_1bec0c;
        default: break;
    }

    ctx->pc = 0x1beba8u;

label_1beba8:
    // 0x1beba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1beba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bebac:
    // 0x1bebac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bebb0:
    // 0x1bebb0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1bebb4:
    if (ctx->pc == 0x1BEBB4u) {
        ctx->pc = 0x1BEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBB0u;
        // 0x1bebb4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBB8u;
        goto label_1bebb8;
    }
    ctx->pc = 0x1BEBB0u;
    {
        const bool branch_taken_0x1bebb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBB0u;
        // 0x1bebb4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebb0) {
            ctx->pc = 0x1BEBD0u;
            goto label_1bebd0;
        }
    }
    ctx->pc = 0x1BEBB8u;
label_1bebb8:
    // 0x1bebb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bebbc:
    // 0x1bebbc: 0xc06f838  jal         func_1BE0E0
label_1bebc0:
    if (ctx->pc == 0x1BEBC0u) {
        ctx->pc = 0x1BEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBBCu;
        // 0x1bebc0: 0x24848c28  addiu       $a0, $a0, -0x73D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBC4u;
        goto label_1bebc4;
    }
    ctx->pc = 0x1BEBBCu;
    SET_GPR_U32(ctx, 31, 0x1BEBC4u);
    ctx->pc = 0x1BEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBBCu;
    // 0x1bebc0: 0x24848c28  addiu       $a0, $a0, -0x73D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEBBCu, 0x1BEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBC4u;
label_1bebc4:
    // 0x1bebc4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bebc8:
    if (ctx->pc == 0x1BEBC8u) {
        ctx->pc = 0x1BEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBC4u;
        // 0x1bebc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBCCu;
        goto label_1bebcc;
    }
    ctx->pc = 0x1BEBC4u;
    {
        const bool branch_taken_0x1bebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBC4u;
        // 0x1bebc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebc4) {
            ctx->pc = 0x1BEC00u;
            goto label_1bec00;
        }
    }
    ctx->pc = 0x1BEBCCu;
label_1bebcc:
    // 0x1bebcc: 0x0  nop
    ctx->pc = 0x1bebccu;
    // NOP
label_1bebd0:
    // 0x1bebd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bebd4:
    // 0x1bebd4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1bebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1bebd8:
    // 0x1bebd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bebdc:
    if (ctx->pc == 0x1BEBDCu) {
        ctx->pc = 0x1BEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBD8u;
        // 0x1bebdc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBE0u;
        goto label_1bebe0;
    }
    ctx->pc = 0x1BEBD8u;
    {
        const bool branch_taken_0x1bebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bebd8) {
            ctx->pc = 0x1BEBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEBD8u;
            // 0x1bebdc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEBF0u;
            goto label_1bebf0;
        }
    }
    ctx->pc = 0x1BEBE0u;
label_1bebe0:
    // 0x1bebe0: 0x40f809  jalr        $v0
label_1bebe4:
    if (ctx->pc == 0x1BEBE4u) {
        ctx->pc = 0x1BEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBE0u;
        // 0x1bebe4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBE8u;
        goto label_1bebe8;
    }
    ctx->pc = 0x1BEBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEBE8u);
        ctx->pc = 0x1BEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBE0u;
        // 0x1bebe4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEBE0u, 0x1BEBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BEBE8u;
label_1bebe8:
    // 0x1bebe8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bebec:
    if (ctx->pc == 0x1BEBECu) {
        ctx->pc = 0x1BEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBE8u;
        // 0x1bebec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBF0u;
        goto label_1bebf0;
    }
    ctx->pc = 0x1BEBE8u;
    {
        const bool branch_taken_0x1bebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBE8u;
        // 0x1bebec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebe8) {
            ctx->pc = 0x1BEBFCu;
            goto label_1bebfc;
        }
    }
    ctx->pc = 0x1BEBF0u;
label_1bebf0:
    // 0x1bebf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bebf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bebf4:
    // 0x1bebf4: 0xc06f838  jal         func_1BE0E0
label_1bebf8:
    if (ctx->pc == 0x1BEBF8u) {
        ctx->pc = 0x1BEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBF4u;
        // 0x1bebf8: 0x24848c48  addiu       $a0, $a0, -0x73B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBFCu;
        goto label_1bebfc;
    }
    ctx->pc = 0x1BEBF4u;
    SET_GPR_U32(ctx, 31, 0x1BEBFCu);
    ctx->pc = 0x1BEBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEBF4u;
    // 0x1bebf8: 0x24848c48  addiu       $a0, $a0, -0x73B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEBF4u, 0x1BEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBFCu;
label_1bebfc:
    // 0x1bebfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bebfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bec00:
    // 0x1bec00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bec04:
    // 0x1bec04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bec04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bec08:
    // 0x1bec08: 0x3e00008  jr          $ra
label_1bec0c:
    if (ctx->pc == 0x1BEC0Cu) {
        ctx->pc = 0x1BEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC08u;
        // 0x1bec0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC10u;
        goto label_fallthrough_0x1bec08;
    }
    ctx->pc = 0x1BEC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC08u;
        // 0x1bec0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bec08:
    ctx->pc = 0x1BEC10u;
}
