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

// Function: sub_001BBE70
// Address: 0x1bbe70 - 0x1bbfc8
void sub_001BBE70_0x1bbe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBE70_0x1bbe70");
#endif

    switch (ctx->pc) {
        case 0x1bbea0u: goto label_1bbea0;
        case 0x1bbeb0u: goto label_1bbeb0;
        case 0x1bbeccu: goto label_1bbecc;
        case 0x1bbef4u: goto label_1bbef4;
        case 0x1bbf04u: goto label_1bbf04;
        case 0x1bbf50u: goto label_1bbf50;
        case 0x1bbf94u: goto label_1bbf94;
        case 0x1bbfa8u: goto label_1bbfa8;
        default: break;
    }

    ctx->pc = 0x1bbe70u;

    // 0x1bbe70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bbe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bbe74: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bbe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bbe78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbe78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe7c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bbe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1bbe80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bbe80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bbe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1bbe88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bbe88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe8c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBE8Cu;
    {
        const bool branch_taken_0x1bbe8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE8Cu;
        // 0x1bbe90: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe8c) {
            ctx->pc = 0x1BBEA8u;
            goto label_1bbea8;
        }
    }
    ctx->pc = 0x1BBE94u;
    // 0x1bbe94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bbe98: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1BBE98u;
    SET_GPR_U32(ctx, 31, 0x1BBEA0u);
    ctx->pc = 0x1BBE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE98u;
    // 0x1bbe9c: 0x248487b8  addiu       $a0, $a0, -0x7848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1BBE98u, 0x1BBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEA0u;
label_1bbea0:
    // 0x1bbea0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1BBEA0u;
    {
        const bool branch_taken_0x1bbea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEA0u;
        // 0x1bbea4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbea0) {
            ctx->pc = 0x1BBF54u;
            goto label_1bbf54;
        }
    }
    ctx->pc = 0x1BBEA8u;
label_1bbea8:
    // 0x1bbea8: 0xc06e4a0  jal         func_1B9280
    ctx->pc = 0x1BBEA8u;
    SET_GPR_U32(ctx, 31, 0x1BBEB0u);
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x1BBEA8u, 0x1BBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEB0u;
label_1bbeb0:
    // 0x1bbeb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbeb4: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x1bbeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1bbeb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bbeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbebc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bbec0: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1bbec4: 0xc06c52c  jal         func_1B14B0
    ctx->pc = 0x1BBEC4u;
    SET_GPR_U32(ctx, 31, 0x1BBECCu);
    ctx->pc = 0x1BBEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEC4u;
    // 0x1bbec8: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14B0u, 0x1BBEC4u, 0x1BBECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBECCu;
label_1bbecc:
    // 0x1bbecc: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BBECCu;
    {
        const bool branch_taken_0x1bbecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbecc) {
            ctx->pc = 0x1BBED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBECCu;
            // 0x1bbed0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBF54u;
            goto label_1bbf54;
        }
    }
    ctx->pc = 0x1BBED4u;
    // 0x1bbed4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1bbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bbed8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1BBED8u;
    {
        const bool branch_taken_0x1bbed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbed8) {
            ctx->pc = 0x1BBEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBED8u;
            // 0x1bbedc: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBF18u;
            goto label_1bbf18;
        }
    }
    ctx->pc = 0x1BBEE0u;
    // 0x1bbee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbee4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bbee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbee8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bbee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbeec: 0xc06ba90  jal         func_1AEA40
    ctx->pc = 0x1BBEECu;
    SET_GPR_U32(ctx, 31, 0x1BBEF4u);
    ctx->pc = 0x1BBEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEECu;
    // 0x1bbef0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA40u, 0x1BBEECu, 0x1BBEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEF4u;
label_1bbef4:
    // 0x1bbef4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bbef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1bbef8: 0x248487e8  addiu       $a0, $a0, -0x7818
    ctx->pc = 0x1bbef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936552));
    // 0x1bbefc: 0xc06ba28  jal         func_1AE8A0
    ctx->pc = 0x1BBEFCu;
    SET_GPR_U32(ctx, 31, 0x1BBF04u);
    ctx->pc = 0x1BBF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEFCu;
    // 0x1bbf00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8A0u, 0x1BBEFCu, 0x1BBF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF04u;
label_1bbf04:
    // 0x1bbf04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bbf08: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bbf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bbf0c: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1bbf0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bbf10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BBF10u;
    {
        const bool branch_taken_0x1bbf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF10u;
        // 0x1bbf14: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf10) {
            ctx->pc = 0x1BBF50u;
            goto label_1bbf50;
        }
    }
    ctx->pc = 0x1BBF18u;
label_1bbf18:
    // 0x1bbf18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbf1c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1bbf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bbf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1bbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bbf28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf2c: 0x8e0800b0  lw          $t0, 0xB0($s0)
    ctx->pc = 0x1bbf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1bbf30: 0xae0700b8  sw          $a3, 0xB8($s0)
    ctx->pc = 0x1bbf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 7));
    // 0x1bbf34: 0xae0800b4  sw          $t0, 0xB4($s0)
    ctx->pc = 0x1bbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 8));
    // 0x1bbf38: 0xae0600bc  sw          $a2, 0xBC($s0)
    ctx->pc = 0x1bbf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 6));
    // 0x1bbf3c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1bbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x1bbf40: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1bbf40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bbf44: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1bbf44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bbf48: 0xc06ed86  jal         func_1BB618
    ctx->pc = 0x1BBF48u;
    SET_GPR_U32(ctx, 31, 0x1BBF50u);
    ctx->pc = 0x1BBF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF48u;
    // 0x1bbf4c: 0xa20200ac  sb          $v0, 0xAC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB618u, 0x1BBF48u, 0x1BBF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF50u;
label_1bbf50:
    // 0x1bbf50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bbf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbf54:
    // 0x1bbf54: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bbf54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bbf58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bbf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbf5c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1bbf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bbf60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF60u;
        // 0x1bbf64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBF68u;
    // 0x1bbf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbf6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbf70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbf78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bbf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bbf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bbf80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bbf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bbf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1bbf88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bbf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bbf8c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF94u);
    ctx->pc = 0x1BBF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF8Cu;
    // 0x1bbf90: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BBF8Cu, 0x1BBF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF94u;
label_1bbf94:
    // 0x1bbf94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bbf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bbf9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfa0: 0xc06eff2  jal         func_1BBFC8
    ctx->pc = 0x1BBFA0u;
    SET_GPR_U32(ctx, 31, 0x1BBFA8u);
    ctx->pc = 0x1BBFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFA0u;
    // 0x1bbfa4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBFC8u, 0x1BBFA0u, 0x1BBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFA8u;
label_1bbfa8:
    // 0x1bbfa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbfa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbfac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbfacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbfb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bbfb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbfb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bbfb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bbfb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bbfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbfbc: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BBFBCu;
    ctx->pc = 0x1BBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFBCu;
    // 0x1bbfc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    ctx->pc = 0x1BBFC4u;
    // 0x1bbfc4: 0x0  nop
    ctx->pc = 0x1bbfc4u;
    // NOP
    if (ctx->pc == 0x1bbfc4u) { ctx->pc = 0x1bbfc8u; }
}
