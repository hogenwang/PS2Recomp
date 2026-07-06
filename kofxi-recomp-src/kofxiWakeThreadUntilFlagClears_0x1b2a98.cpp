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

// Function: kofxiWakeThreadUntilFlagClears
// Address: 0x1b2a98 - 0x1b2b80
void kofxiWakeThreadUntilFlagClears_0x1b2a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWakeThreadUntilFlagClears_0x1b2a98");
#endif

    switch (ctx->pc) {
        case 0x1b2af0u: goto label_1b2af0;
        case 0x1b2af8u: goto label_1b2af8;
        case 0x1b2b00u: goto label_1b2b00;
        case 0x1b2b08u: goto label_1b2b08;
        case 0x1b2b28u: goto label_1b2b28;
        default: break;
    }

    ctx->pc = 0x1b2a98u;

    // 0x1b2a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2aa8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b2aa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2ab0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2ab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2ab8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2abc: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B2ABCu;
    {
        const bool branch_taken_0x1b2abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2ABCu;
        // 0x1b2ac0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2abc) {
            ctx->pc = 0x1B2B58u;
            goto label_1b2b58;
        }
    }
    ctx->pc = 0x1B2AC4u;
    // 0x1b2ac4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2ac8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b2acc: 0x8c453000  lw          $a1, 0x3000($v0)
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12288)));
    // 0x1b2ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2ad4: 0x26103034  addiu       $s0, $s0, 0x3034
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12340));
    // 0x1b2ad8: 0x3c120beb  lui         $s2, 0xBEB
    ctx->pc = 0x1b2ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3051 << 16));
    // 0x1b2adc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b2ae0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1b2ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ae4: 0x3652c1ff  ori         $s2, $s2, 0xC1FF
    ctx->pc = 0x1b2ae4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49663);
    // 0x1b2ae8: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B2AE8u;
    SET_GPR_U32(ctx, 31, 0x1B2AF0u);
    ctx->pc = 0x1B2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AE8u;
    // 0x1b2aec: 0x3c14003e  lui         $s4, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B2AE8u, 0x1B2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AF0u;
label_1b2af0:
    // 0x1b2af0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b2af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2af4: 0x0  nop
    ctx->pc = 0x1b2af4u;
    // NOP
label_1b2af8:
    // 0x1b2af8: 0xc06cc4c  jal         func_1B3130
    ctx->pc = 0x1B2AF8u;
    SET_GPR_U32(ctx, 31, 0x1B2B00u);
    ctx->pc = 0x1B2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AF8u;
    // 0x1b2afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3130u, 0x1B2AF8u, 0x1B2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B00u;
label_1b2b00:
    // 0x1b2b00: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B2B00u;
    SET_GPR_U32(ctx, 31, 0x1B2B08u);
    ctx->pc = 0x1B2B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B00u;
    // 0x1b2b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3198u, 0x1B2B00u, 0x1B2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B08u;
label_1b2b08:
    // 0x1b2b08: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b2b0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2B10u;
    {
        const bool branch_taken_0x1b2b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B10u;
        // 0x1b2b14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b10) {
            ctx->pc = 0x1B2B28u;
            goto label_1b2b28;
        }
    }
    ctx->pc = 0x1B2B18u;
    // 0x1b2b18: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2B18u;
    {
        const bool branch_taken_0x1b2b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b18) {
            ctx->pc = 0x1B2AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2af8;
        }
    }
    ctx->pc = 0x1B2B20u;
    // 0x1b2b20: 0xc073748  jal         func_1CDD20
    ctx->pc = 0x1B2B20u;
    SET_GPR_U32(ctx, 31, 0x1B2B28u);
    ctx->pc = 0x1B2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B20u;
    // 0x1b2b24: 0x26847df0  addiu       $a0, $s4, 0x7DF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD20u, 0x1B2B20u, 0x1B2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B28u;
label_1b2b28:
    // 0x1b2b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2b30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b2b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b34: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2b34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2b40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2b44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b2b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b4c: 0x80432bc  j           func_10CAF0
    ctx->pc = 0x1B2B4Cu;
    ctx->pc = 0x1B2B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B4Cu;
    // 0x1b2b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2B54u;
    // 0x1b2b54: 0x0  nop
    ctx->pc = 0x1b2b54u;
    // NOP
label_1b2b58:
    // 0x1b2b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2b60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2b68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2b68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2b70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b2b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B74u;
        // 0x1b2b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B7Cu;
    // 0x1b2b7c: 0x0  nop
    ctx->pc = 0x1b2b7cu;
    // NOP
    if (ctx->pc == 0x1b2b7cu) { ctx->pc = 0x1b2b80u; }
}
