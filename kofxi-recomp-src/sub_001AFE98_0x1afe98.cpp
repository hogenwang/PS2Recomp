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

// Function: sub_001AFE98
// Address: 0x1afe98 - 0x1aff30
void sub_001AFE98_0x1afe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFE98_0x1afe98");
#endif

    switch (ctx->pc) {
        case 0x1afeacu: goto label_1afeac;
        case 0x1afec8u: goto label_1afec8;
        case 0x1afee4u: goto label_1afee4;
        default: break;
    }

    ctx->pc = 0x1afe98u;

    // 0x1afe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afe9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1afea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1afea4: 0xc06bf90  jal         func_1AFE40
    ctx->pc = 0x1AFEA4u;
    SET_GPR_U32(ctx, 31, 0x1AFEACu);
    ctx->pc = 0x1AFE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFE40u, 0x1AFEA4u, 0x1AFEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEACu;
label_1afeac:
    // 0x1afeac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1afeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afeb0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1afeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1afeb4: 0x24847630  addiu       $a0, $a0, 0x7630
    ctx->pc = 0x1afeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30256));
    // 0x1afeb8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AFEB8u;
    {
        const bool branch_taken_0x1afeb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEB8u;
        // 0x1afebc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afeb8) {
            ctx->pc = 0x1AFEDCu;
            goto label_1afedc;
        }
    }
    ctx->pc = 0x1AFEC0u;
    // 0x1afec0: 0xc06da30  jal         func_1B68C0
    ctx->pc = 0x1AFEC0u;
    SET_GPR_U32(ctx, 31, 0x1AFEC8u);
    ctx->pc = 0x1AFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEC0u;
    // 0x1afec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B68C0u, 0x1AFEC0u, 0x1AFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEC8u;
label_1afec8:
    // 0x1afec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afecc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1afeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1afed0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1afed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1afed4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFED4u;
    {
        const bool branch_taken_0x1afed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFED4u;
        // 0x1afed8: 0x24847668  addiu       $a0, $a0, 0x7668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afed4) {
            ctx->pc = 0x1AFEF0u;
            goto label_1afef0;
        }
    }
    ctx->pc = 0x1AFEDCu;
label_1afedc:
    // 0x1afedc: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AFEDCu;
    SET_GPR_U32(ctx, 31, 0x1AFEE4u);
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1AFEDCu, 0x1AFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEE4u;
label_1afee4:
    // 0x1afee4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AFEE4u;
    {
        const bool branch_taken_0x1afee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEE4u;
        // 0x1afee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afee4) {
            ctx->pc = 0x1AFF1Cu;
            goto label_1aff1c;
        }
    }
    ctx->pc = 0x1AFEECu;
    // 0x1afeec: 0x0  nop
    ctx->pc = 0x1afeecu;
    // NOP
label_1afef0:
    // 0x1afef0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1afef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1afef4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1afef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1afef8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1afef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1afefc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1afefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1aff00: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1aff00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1aff04: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1aff04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1aff08: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1aff08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aff0c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1aff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1aff10: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1aff10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aff14: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1aff14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1aff18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aff18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aff1c:
    // 0x1aff1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aff1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aff20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aff24: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF24u;
        // 0x1aff28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFF2Cu;
    // 0x1aff2c: 0x0  nop
    ctx->pc = 0x1aff2cu;
    // NOP
    if (ctx->pc == 0x1aff2cu) { ctx->pc = 0x1aff30u; }
}
