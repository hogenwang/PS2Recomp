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

// Function: sub_001FCAA0
// Address: 0x1fcaa0 - 0x1fcba8
void sub_001FCAA0_0x1fcaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCAA0_0x1fcaa0");
#endif

    switch (ctx->pc) {
        case 0x1fcac4u: goto label_1fcac4;
        case 0x1fcb3cu: goto label_1fcb3c;
        case 0x1fcb88u: goto label_1fcb88;
        default: break;
    }

    ctx->pc = 0x1fcaa0u;

    // 0x1fcaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fcaa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcaa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fcaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fcaac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fcaacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fcab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fcab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fcab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fcabc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FCABCu;
    SET_GPR_U32(ctx, 31, 0x1FCAC4u);
    ctx->pc = 0x1FCAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCABCu;
    // 0x1fcac0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FCABCu, 0x1FCAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAC4u;
label_1fcac4:
    // 0x1fcac4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fcac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCAC8u;
    {
        const bool branch_taken_0x1fcac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAC8u;
        // 0x1fcacc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcac8) {
            ctx->pc = 0x1FCAE8u;
            goto label_1fcae8;
        }
    }
    ctx->pc = 0x1FCAD0u;
    // 0x1fcad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcad4: 0x34a5011b  ori         $a1, $a1, 0x11B
    ctx->pc = 0x1fcad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)283);
    // 0x1fcad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcadc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fcadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcae0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FCAE0u;
    ctx->pc = 0x1FCAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCAE0u;
    // 0x1fcae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FCAE8u;
label_1fcae8:
    // 0x1fcae8: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x1fcaec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCAECu;
    {
        const bool branch_taken_0x1fcaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAECu;
        // 0x1fcaf0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaec) {
            ctx->pc = 0x1FCB04u;
            goto label_1fcb04;
        }
    }
    ctx->pc = 0x1FCAF4u;
    // 0x1fcaf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1fcaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1fcaf8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fcaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fcafc: 0x8c84eb40  lw          $a0, -0x14C0($a0)
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961984)));
    // 0x1fcb00: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1fcb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1fcb04:
    // 0x1fcb04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcb04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcb08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcb0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fcb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcb10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB10u;
        // 0x1fcb14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCB18u;
    // 0x1fcb18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fcb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fcb1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fcb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcb20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fcb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fcb24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fcb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fcb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fcb2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fcb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fcb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fcb34: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FCB34u;
    SET_GPR_U32(ctx, 31, 0x1FCB3Cu);
    ctx->pc = 0x1FCB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB34u;
    // 0x1fcb38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FCB34u, 0x1FCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB3Cu;
label_1fcb3c:
    // 0x1fcb3c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fcb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fcb40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCB40u;
    {
        const bool branch_taken_0x1fcb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB40u;
        // 0x1fcb44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb40) {
            ctx->pc = 0x1FCB60u;
            goto label_1fcb60;
        }
    }
    ctx->pc = 0x1FCB48u;
    // 0x1fcb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcb4c: 0x34a50118  ori         $a1, $a1, 0x118
    ctx->pc = 0x1fcb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)280);
    // 0x1fcb50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcb54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fcb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcb58: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FCB58u;
    ctx->pc = 0x1FCB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB58u;
    // 0x1fcb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FCB60u;
label_1fcb60:
    // 0x1fcb60: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x1fcb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x1fcb64: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCB64u;
    {
        const bool branch_taken_0x1fcb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB64u;
        // 0x1fcb68: 0x26040d88  addiu       $a0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb64) {
            ctx->pc = 0x1FCB90u;
            goto label_1fcb90;
        }
    }
    ctx->pc = 0x1FCB6Cu;
    // 0x1fcb6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fcb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcb70: 0x8c8502ac  lw          $a1, 0x2AC($a0)
    ctx->pc = 0x1fcb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 684)));
    // 0x1fcb74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1fcb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1fcb78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fcb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fcb7c: 0x8c84eb40  lw          $a0, -0x14C0($a0)
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961984)));
    // 0x1fcb80: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FCB80u;
    SET_GPR_U32(ctx, 31, 0x1FCB88u);
    ctx->pc = 0x1FCB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB80u;
    // 0x1fcb84: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1FCB80u, 0x1FCB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB88u;
label_1fcb88:
    // 0x1fcb88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1fcb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1fcb8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fcb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb90:
    // 0x1fcb90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcb94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcb94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcb98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fcb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB9Cu;
        // 0x1fcba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCBA4u;
    // 0x1fcba4: 0x0  nop
    ctx->pc = 0x1fcba4u;
    // NOP
}
