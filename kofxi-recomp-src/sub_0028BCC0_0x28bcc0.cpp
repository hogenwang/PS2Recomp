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

// Function: sub_0028BCC0
// Address: 0x28bcc0 - 0x28bdb0
void sub_0028BCC0_0x28bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BCC0_0x28bcc0");
#endif

    switch (ctx->pc) {
        case 0x28bcf8u: goto label_28bcf8;
        case 0x28bd4cu: goto label_28bd4c;
        case 0x28bd60u: goto label_28bd60;
        case 0x28bd6cu: goto label_28bd6c;
        case 0x28bd7cu: goto label_28bd7c;
        case 0x28bd8cu: goto label_28bd8c;
        default: break;
    }

    ctx->pc = 0x28bcc0u;

    // 0x28bcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28bcc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28bcc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28bccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28bcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bcd0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x28BCD0u;
    {
        const bool branch_taken_0x28bcd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD0u;
        // 0x28bcd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcd0) {
            ctx->pc = 0x28BD04u;
            goto label_28bd04;
        }
    }
    ctx->pc = 0x28BCD8u;
    // 0x28bcd8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28bcdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28BCDCu;
    {
        const bool branch_taken_0x28bcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCDCu;
        // 0x28bce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcdc) {
            ctx->pc = 0x28BD04u;
            goto label_28bd04;
        }
    }
    ctx->pc = 0x28BCE4u;
    // 0x28bce4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28bce8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BCE8u;
    {
        const bool branch_taken_0x28bce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bce8) {
            ctx->pc = 0x28BCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BCE8u;
            // 0x28bcec: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BCFCu;
            goto label_28bcfc;
        }
    }
    ctx->pc = 0x28BCF0u;
    // 0x28bcf0: 0xc044900  jal         func_112400
    ctx->pc = 0x28BCF0u;
    SET_GPR_U32(ctx, 31, 0x28BCF8u);
    ctx->pc = 0x28BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCF0u;
    // 0x28bcf4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x28BCF0u, 0x28BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCF8u;
label_28bcf8:
    // 0x28bcf8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x28bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_28bcfc:
    // 0x28bcfc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28bd00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28bd04:
    // 0x28bd04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28bd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28bd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD0Cu;
        // 0x28bd10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BD14u;
    // 0x28bd14: 0x0  nop
    ctx->pc = 0x28bd14u;
    // NOP
    // 0x28bd18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28bd1c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28bd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28bd20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28bd24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28bd24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28bd2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28bd2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28bd34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28bd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28bd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd3c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28BD3Cu;
    {
        const bool branch_taken_0x28bd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD3Cu;
        // 0x28bd40: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd3c) {
            ctx->pc = 0x28BD8Cu;
            goto label_28bd8c;
        }
    }
    ctx->pc = 0x28BD44u;
    // 0x28bd44: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x28BD44u;
    SET_GPR_U32(ctx, 31, 0x28BD4Cu);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x28BD44u, 0x28BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD4Cu;
label_28bd4c:
    // 0x28bd4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28bd50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28bd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28bd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd58: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x28BD58u;
    SET_GPR_U32(ctx, 31, 0x28BD60u);
    ctx->pc = 0x28BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD58u;
    // 0x28bd5c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B8u, 0x28BD58u, 0x28BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD60u;
label_28bd60:
    // 0x28bd60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28bd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd64: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x28BD64u;
    SET_GPR_U32(ctx, 31, 0x28BD6Cu);
    ctx->pc = 0x28BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD64u;
    // 0x28bd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284EB0u, 0x28BD64u, 0x28BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD6Cu;
label_28bd6c:
    // 0x28bd6c: 0x1e400008  bgtz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BD6Cu;
    {
        const bool branch_taken_0x28bd6c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x28BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD6Cu;
        // 0x28bd70: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd6c) {
            ctx->pc = 0x28BD90u;
            goto label_28bd90;
        }
    }
    ctx->pc = 0x28BD74u;
    // 0x28bd74: 0xc0ae5c2  jal         func_2B9708
    ctx->pc = 0x28BD74u;
    SET_GPR_U32(ctx, 31, 0x28BD7Cu);
    ctx->pc = 0x28BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD74u;
    // 0x28bd78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9708u, 0x28BD74u, 0x28BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD7Cu;
label_28bd7c:
    // 0x28bd7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BD7Cu;
    {
        const bool branch_taken_0x28bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD7Cu;
        // 0x28bd80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd7c) {
            ctx->pc = 0x28BD90u;
            goto label_28bd90;
        }
    }
    ctx->pc = 0x28BD84u;
    // 0x28bd84: 0xc0a139e  jal         func_284E78
    ctx->pc = 0x28BD84u;
    SET_GPR_U32(ctx, 31, 0x28BD8Cu);
    ctx->pc = 0x28BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD84u;
    // 0x28bd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E78u, 0x28BD84u, 0x28BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD8Cu;
label_28bd8c:
    // 0x28bd8c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28bd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28bd90:
    // 0x28bd90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28bd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bd94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28bd94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bd98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28bd98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bd9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28bd9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28bda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bda4: 0x3e00008  jr          $ra
    ctx->pc = 0x28BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDA4u;
        // 0x28bda8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BDACu;
    // 0x28bdac: 0x0  nop
    ctx->pc = 0x28bdacu;
    // NOP
    if (ctx->pc == 0x28bdacu) { ctx->pc = 0x28bdb0u; }
}
