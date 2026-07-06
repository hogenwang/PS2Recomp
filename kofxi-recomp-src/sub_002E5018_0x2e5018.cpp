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

// Function: sub_002E5018
// Address: 0x2e5018 - 0x2e5088
void sub_002E5018_0x2e5018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5018_0x2e5018");
#endif

    switch (ctx->pc) {
        case 0x2e5040u: goto label_2e5040;
        case 0x2e5064u: goto label_2e5064;
        default: break;
    }

    ctx->pc = 0x2e5018u;

    // 0x2e5018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e501c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e5020: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e5020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e5024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e5024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e502c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e502cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5030: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e5030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e5034: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5038: 0xc0b93de  jal         func_2E4F78
    ctx->pc = 0x2E5038u;
    SET_GPR_U32(ctx, 31, 0x2E5040u);
    ctx->pc = 0x2E503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5038u;
    // 0x2e503c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F78u, 0x2E5038u, 0x2E5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5040u;
label_2e5040:
    // 0x2e5040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5044: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5044u;
    {
        const bool branch_taken_0x2e5044 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5044u;
        // 0x2e5048: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5044) {
            ctx->pc = 0x2E5068u;
            goto label_2e5068;
        }
    }
    ctx->pc = 0x2E504Cu;
    // 0x2e504c: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x2e504cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x2e5050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5054: 0x34a53c00  ori         $a1, $a1, 0x3C00
    ctx->pc = 0x2e5054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15360);
    // 0x2e5058: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e5058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e505c: 0xc0b93da  jal         func_2E4F68
    ctx->pc = 0x2E505Cu;
    SET_GPR_U32(ctx, 31, 0x2E5064u);
    ctx->pc = 0x2E5060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E505Cu;
    // 0x2e5060: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F68u, 0x2E505Cu, 0x2E5064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5064u;
label_2e5064:
    // 0x2e5064: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e5064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e5068:
    // 0x2e5068: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e506c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e506cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5070: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e5070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5074: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e507c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E507Cu;
        // 0x2e5080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5084u;
    // 0x2e5084: 0x0  nop
    ctx->pc = 0x2e5084u;
    // NOP
}
