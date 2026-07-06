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

// Function: sub_00102000
// Address: 0x102000 - 0x1020a0
void sub_00102000_0x102000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102000_0x102000");
#endif

    switch (ctx->pc) {
        case 0x10201cu: goto label_10201c;
        case 0x102030u: goto label_102030;
        case 0x10203cu: goto label_10203c;
        case 0x102058u: goto label_102058;
        case 0x102064u: goto label_102064;
        case 0x102078u: goto label_102078;
        case 0x102084u: goto label_102084;
        default: break;
    }

    ctx->pc = 0x102000u;

    // 0x102000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102004: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102008: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x102008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10200c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102010: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102014: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x102014u;
    SET_GPR_U32(ctx, 31, 0x10201Cu);
    ctx->pc = 0x102018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102014u;
    // 0x102018: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003C0u, 0x102014u, 0x10201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10201Cu;
label_10201c:
    // 0x10201c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10201cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102020: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x102020u;
    {
        const bool branch_taken_0x102020 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x102024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102020u;
        // 0x102024: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102020) {
            ctx->pc = 0x102048u;
            goto label_102048;
        }
    }
    ctx->pc = 0x102028u;
    // 0x102028: 0xc0435d0  jal         func_10D740
    ctx->pc = 0x102028u;
    SET_GPR_U32(ctx, 31, 0x102030u);
    ctx->pc = 0x10202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102028u;
    // 0x10202c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D740u, 0x102028u, 0x102030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102030u;
label_102030:
    // 0x102030: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x102030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x102034: 0xc043258  jal         func_10C960
    ctx->pc = 0x102034u;
    SET_GPR_U32(ctx, 31, 0x10203Cu);
    ctx->pc = 0x102038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102034u;
    // 0x102038: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x102034u, 0x10203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10203Cu;
label_10203c:
    // 0x10203c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10203cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x102040: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x102040u;
    {
        const bool branch_taken_0x102040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102040u;
        // 0x102044: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102040) {
            ctx->pc = 0x102084u;
            goto label_102084;
        }
    }
    ctx->pc = 0x102048u;
label_102048:
    // 0x102048: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x102048u;
    {
        const bool branch_taken_0x102048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x102048) {
            ctx->pc = 0x10204Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102048u;
            // 0x10204c: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102068u;
            goto label_102068;
        }
    }
    ctx->pc = 0x102050u;
    // 0x102050: 0xc0435d0  jal         func_10D740
    ctx->pc = 0x102050u;
    SET_GPR_U32(ctx, 31, 0x102058u);
    ctx->pc = 0x102054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102050u;
    // 0x102054: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D740u, 0x102050u, 0x102058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102058u;
label_102058:
    // 0x102058: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x102058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10205c: 0xc043258  jal         func_10C960
    ctx->pc = 0x10205Cu;
    SET_GPR_U32(ctx, 31, 0x102064u);
    ctx->pc = 0x102060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10205Cu;
    // 0x102060: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x10205Cu, 0x102064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102064u;
label_102064:
    // 0x102064: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x102064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_102068:
    // 0x102068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x102068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10206c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10206cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x102070: 0xc043250  jal         func_10C940
    ctx->pc = 0x102070u;
    SET_GPR_U32(ctx, 31, 0x102078u);
    ctx->pc = 0x102074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102070u;
    // 0x102074: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C940u, 0x102070u, 0x102078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102078u;
label_102078:
    // 0x102078: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x102078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10207c: 0xc0435ea  jal         func_10D7A8
    ctx->pc = 0x10207Cu;
    SET_GPR_U32(ctx, 31, 0x102084u);
    ctx->pc = 0x102080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10207Cu;
    // 0x102080: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D7A8u, 0x10207Cu, 0x102084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102084u;
label_102084:
    // 0x102084: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x102084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102088: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10208c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10208cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102090: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102098: 0x3e00008  jr          $ra
    ctx->pc = 0x102098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102098u;
        // 0x10209c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1020A0u;
}
