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

// Function: sub_002ACA80
// Address: 0x2aca80 - 0x2acb30
void sub_002ACA80_0x2aca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA80_0x2aca80");
#endif

    switch (ctx->pc) {
        case 0x2acaa8u: goto label_2acaa8;
        case 0x2acae8u: goto label_2acae8;
        case 0x2acb18u: goto label_2acb18;
        default: break;
    }

    ctx->pc = 0x2aca80u;

    // 0x2aca80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aca84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aca88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aca8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aca90: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2aca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2aca94: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2aca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2aca98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACA98u;
    {
        const bool branch_taken_0x2aca98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aca98) {
            ctx->pc = 0x2ACA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACA98u;
            // 0x2aca9c: 0x8c620034  lw          $v0, 0x34($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACAB8u;
            goto label_2acab8;
        }
    }
    ctx->pc = 0x2ACAA0u;
    // 0x2acaa0: 0xc0ab2cc  jal         func_2ACB30
    ctx->pc = 0x2ACAA0u;
    SET_GPR_U32(ctx, 31, 0x2ACAA8u);
    ctx->pc = 0x2ACAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACAA0u;
    // 0x2acaa4: 0x8e050114  lw          $a1, 0x114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACB30u, 0x2ACAA0u, 0x2ACAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAA8u;
label_2acaa8:
    // 0x2acaa8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ACAA8u;
    {
        const bool branch_taken_0x2acaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAA8u;
        // 0x2acaac: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acaa8) {
            ctx->pc = 0x2ACB04u;
            goto label_2acb04;
        }
    }
    ctx->pc = 0x2ACAB0u;
    // 0x2acab0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2acab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acab4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2acab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2acab8:
    // 0x2acab8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2ACAB8u;
    {
        const bool branch_taken_0x2acab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAB8u;
        // 0x2acabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acab8) {
            ctx->pc = 0x2ACB1Cu;
            goto label_2acb1c;
        }
    }
    ctx->pc = 0x2ACAC0u;
    // 0x2acac0: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2acac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2acac4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2acac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2acac8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2acac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2acacc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2acaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2acad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACAD0u;
    {
        const bool branch_taken_0x2acad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAD0u;
        // 0x2acad4: 0x34028001  ori         $v0, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acad0) {
            ctx->pc = 0x2ACAE0u;
            goto label_2acae0;
        }
    }
    ctx->pc = 0x2ACAD8u;
    // 0x2acad8: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x2acad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x2acadc: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x2acadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_2acae0:
    // 0x2acae0: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2ACAE0u;
    SET_GPR_U32(ctx, 31, 0x2ACAE8u);
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2ACAE0u, 0x2ACAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAE8u;
label_2acae8:
    // 0x2acae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2acae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acaec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACAECu;
    {
        const bool branch_taken_0x2acaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAECu;
        // 0x2acaf0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acaec) {
            ctx->pc = 0x2ACB04u;
            goto label_2acb04;
        }
    }
    ctx->pc = 0x2ACAF4u;
    // 0x2acaf4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2acaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2acaf8: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2acaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2acafc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACAFCu;
    {
        const bool branch_taken_0x2acafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAFCu;
        // 0x2acb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acafc) {
            ctx->pc = 0x2ACB1Cu;
            goto label_2acb1c;
        }
    }
    ctx->pc = 0x2ACB04u;
label_2acb04:
    // 0x2acb04: 0x240500db  addiu       $a1, $zero, 0xDB
    ctx->pc = 0x2acb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x2acb08: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2acb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2acb0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acb0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acb10: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ACB10u;
    SET_GPR_U32(ctx, 31, 0x2ACB18u);
    ctx->pc = 0x2ACB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB10u;
    // 0x2acb14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ACB10u, 0x2ACB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB18u;
label_2acb18:
    // 0x2acb18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2acb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acb1c:
    // 0x2acb1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2acb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acb20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acb20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acb24: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB24u;
        // 0x2acb28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACB2Cu;
    // 0x2acb2c: 0x0  nop
    ctx->pc = 0x2acb2cu;
    // NOP
    if (ctx->pc == 0x2acb2cu) { ctx->pc = 0x2acb30u; }
}
