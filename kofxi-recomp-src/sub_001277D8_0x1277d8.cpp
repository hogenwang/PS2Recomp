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

// Function: sub_001277D8
// Address: 0x1277d8 - 0x127898
void sub_001277D8_0x1277d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001277D8_0x1277d8");
#endif

    switch (ctx->pc) {
        case 0x127804u: goto label_127804;
        case 0x127814u: goto label_127814;
        default: break;
    }

    ctx->pc = 0x1277d8u;

    // 0x1277d8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1277d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1277dc: 0x31cf0007  andi        $t7, $t6, 0x7
    ctx->pc = 0x1277dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)7);
    // 0x1277e0: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x1277E0u;
    {
        const bool branch_taken_0x1277e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277E0u;
        // 0x1277e4: 0x31cf0001  andi        $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277e0) {
            ctx->pc = 0x12781Cu;
            goto label_12781c;
        }
    }
    ctx->pc = 0x1277E8u;
    // 0x1277e8: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1277E8u;
    {
        const bool branch_taken_0x1277e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1277ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277E8u;
        // 0x1277ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277e8) {
            ctx->pc = 0x127814u;
            goto label_127814;
        }
    }
    ctx->pc = 0x1277F0u;
    // 0x1277f0: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x1277f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x1277f4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1277F4u;
    {
        const bool branch_taken_0x1277f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1277F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1277F4u;
        // 0x1277f8: 0xe7882  srl         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1277f4) {
            ctx->pc = 0x12780Cu;
            goto label_12780c;
        }
    }
    ctx->pc = 0x1277FCu;
    // 0x1277fc: 0xe7842  srl         $t7, $t6, 1
    ctx->pc = 0x1277fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x127800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127804:
    // 0x127804: 0x3e00008  jr          $ra
    ctx->pc = 0x127804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127804u;
        // 0x127808: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12780Cu;
label_12780c:
    // 0x12780c: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x12780Cu;
    {
        const bool branch_taken_0x12780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12780Cu;
        // 0x127810: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12780c) {
            ctx->pc = 0x127804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127804;
        }
    }
    ctx->pc = 0x127814u;
label_127814:
    // 0x127814: 0x3e00008  jr          $ra
    ctx->pc = 0x127814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12781Cu;
label_12781c:
    // 0x12781c: 0x31cfffff  andi        $t7, $t6, 0xFFFF
    ctx->pc = 0x12781cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x127820: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x127820u;
    {
        const bool branch_taken_0x127820 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127820u;
        // 0x127824: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127820) {
            ctx->pc = 0x127830u;
            goto label_127830;
        }
    }
    ctx->pc = 0x127828u;
    // 0x127828: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x127828u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12782c: 0xe7402  srl         $t6, $t6, 16
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 16));
label_127830:
    // 0x127830: 0x31cf00ff  andi        $t7, $t6, 0xFF
    ctx->pc = 0x127830u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x127834: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x127834u;
    {
        const bool branch_taken_0x127834 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127834u;
        // 0x127838: 0x31cf000f  andi        $t7, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127834) {
            ctx->pc = 0x127848u;
            goto label_127848;
        }
    }
    ctx->pc = 0x12783Cu;
    // 0x12783c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12783cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x127840: 0xe7202  srl         $t6, $t6, 8
    ctx->pc = 0x127840u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x127844: 0x31cf000f  andi        $t7, $t6, 0xF
    ctx->pc = 0x127844u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_127848:
    // 0x127848: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x127848u;
    {
        const bool branch_taken_0x127848 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127848u;
        // 0x12784c: 0x31cf0003  andi        $t7, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127848) {
            ctx->pc = 0x12785Cu;
            goto label_12785c;
        }
    }
    ctx->pc = 0x127850u;
    // 0x127850: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x127850u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x127854: 0xe7102  srl         $t6, $t6, 4
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x127858: 0x31cf0003  andi        $t7, $t6, 0x3
    ctx->pc = 0x127858u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)3);
label_12785c:
    // 0x12785c: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12785Cu;
    {
        const bool branch_taken_0x12785c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x127860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12785Cu;
        // 0x127860: 0x31cf0001  andi        $t7, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12785c) {
            ctx->pc = 0x127870u;
            goto label_127870;
        }
    }
    ctx->pc = 0x127864u;
    // 0x127864: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x127864u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x127868: 0xe7082  srl         $t6, $t6, 2
    ctx->pc = 0x127868u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x12786c: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12786cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_127870:
    // 0x127870: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x127870u;
    {
        const bool branch_taken_0x127870 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x127870) {
            ctx->pc = 0x127874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127870u;
            // 0x127874: 0xac8e0000  sw          $t6, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12788Cu;
            goto label_12788c;
        }
    }
    ctx->pc = 0x127878u;
    // 0x127878: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x127878u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12787c: 0xe7042  srl         $t6, $t6, 1
    ctx->pc = 0x12787cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x127880: 0x11c0ffe4  beqz        $t6, . + 4 + (-0x1C << 2)
    ctx->pc = 0x127880u;
    {
        const bool branch_taken_0x127880 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x127884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127880u;
        // 0x127884: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127880) {
            ctx->pc = 0x127814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127814;
        }
    }
    ctx->pc = 0x127888u;
    // 0x127888: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x127888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_12788c:
    // 0x12788c: 0x3e00008  jr          $ra
    ctx->pc = 0x12788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12788Cu;
        // 0x127890: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12788Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127894u;
    // 0x127894: 0x0  nop
    ctx->pc = 0x127894u;
    // NOP
}
