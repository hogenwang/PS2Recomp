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

// Function: sub_0011DFD8
// Address: 0x11dfd8 - 0x11e0a8
void sub_0011DFD8_0x11dfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DFD8_0x11dfd8");
#endif

    switch (ctx->pc) {
        case 0x11e020u: goto label_11e020;
        case 0x11e08cu: goto label_11e08c;
        default: break;
    }

    ctx->pc = 0x11dfd8u;

    // 0x11dfd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11dfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11dfdc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11dfe0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11dfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11dfe4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x11dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x11dfe8: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11dfe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11dfec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11dff0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11dff4: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11dff8: 0xac43dd40  sw          $v1, -0x22C0($v0)
    ctx->pc = 0x11dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 3));
    // 0x11dffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e000: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e008: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11e008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e00c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11e00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e010: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11e010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e014: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11e014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e018: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E018u;
    SET_GPR_U32(ctx, 31, 0x11E020u);
    ctx->pc = 0x11E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E018u;
    // 0x11e01c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11E018u, 0x11E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E020u;
label_11e020:
    // 0x11e020: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E020u;
    {
        const bool branch_taken_0x11e020 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11e020) {
            ctx->pc = 0x11E024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E020u;
            // 0x11e024: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E02Cu;
            goto label_11e02c;
        }
    }
    ctx->pc = 0x11E028u;
    // 0x11e028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e02c:
    // 0x11e02c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e030: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e034: 0x3e00008  jr          $ra
    ctx->pc = 0x11E034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E034u;
        // 0x11e038: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E03Cu;
    // 0x11e03c: 0x0  nop
    ctx->pc = 0x11e03cu;
    // NOP
    // 0x11e040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e044: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11e048: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11e048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11e04c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x11e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11e050: 0x2450dd40  addiu       $s0, $v0, -0x22C0
    ctx->pc = 0x11e050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x11e054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e058: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x11e058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x11e05c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11e060: 0xac46dd40  sw          $a2, -0x22C0($v0)
    ctx->pc = 0x11e060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958400), GPR_U32(ctx, 6));
    // 0x11e064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e068: 0x2464db00  addiu       $a0, $v1, -0x2500
    ctx->pc = 0x11e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957824));
    // 0x11e06c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11e070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e074: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11e074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e078: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e07c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11e07cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e080: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11e080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e084: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11E084u;
    SET_GPR_U32(ctx, 31, 0x11E08Cu);
    ctx->pc = 0x11E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E084u;
    // 0x11e088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11E084u, 0x11E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E08Cu;
label_11e08c:
    // 0x11e08c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E08Cu;
    {
        const bool branch_taken_0x11e08c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11e08c) {
            ctx->pc = 0x11E090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E08Cu;
            // 0x11e090: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E098u;
            goto label_11e098;
        }
    }
    ctx->pc = 0x11E094u;
    // 0x11e094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e098:
    // 0x11e098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e09c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11e09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0A0u;
        // 0x11e0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0A8u;
}
