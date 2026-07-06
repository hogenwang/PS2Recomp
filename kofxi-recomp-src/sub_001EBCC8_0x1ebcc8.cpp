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

// Function: sub_001EBCC8
// Address: 0x1ebcc8 - 0x1ebd68
void sub_001EBCC8_0x1ebcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBCC8_0x1ebcc8");
#endif

    switch (ctx->pc) {
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd50u: goto label_1ebd50;
        default: break;
    }

    ctx->pc = 0x1ebcc8u;

    // 0x1ebcc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ebccc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ebcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ebcd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebcd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ebcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ebcd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ebcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebcdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebce0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ebce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebce4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ebce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ebce8: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EBCE8u;
    SET_GPR_U32(ctx, 31, 0x1EBCF0u);
    ctx->pc = 0x1EBCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCE8u;
    // 0x1ebcec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9C0u, 0x1EBCE8u, 0x1EBCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCF0u;
label_1ebcf0:
    // 0x1ebcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ebcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebcf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ebcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebcf8: 0xc07af5a  jal         func_1EBD68
    ctx->pc = 0x1EBCF8u;
    SET_GPR_U32(ctx, 31, 0x1EBD00u);
    ctx->pc = 0x1EBCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCF8u;
    // 0x1ebcfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBD68u, 0x1EBCF8u, 0x1EBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD00u;
label_1ebd00:
    // 0x1ebd00: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1ebd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ebd04: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBD04u;
    {
        const bool branch_taken_0x1ebd04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD04u;
        // 0x1ebd08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd04) {
            ctx->pc = 0x1EBD28u;
            goto label_1ebd28;
        }
    }
    ctx->pc = 0x1EBD0Cu;
    // 0x1ebd0c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ebd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ebd10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBD10u;
    {
        const bool branch_taken_0x1ebd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD10u;
        // 0x1ebd14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd10) {
            ctx->pc = 0x1EBD2Cu;
            goto label_1ebd2c;
        }
    }
    ctx->pc = 0x1EBD18u;
    // 0x1ebd18: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1ebd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ebd1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ebd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebd20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBD20u;
    {
        const bool branch_taken_0x1ebd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebd20) {
            ctx->pc = 0x1EBD30u;
            goto label_1ebd30;
        }
    }
    ctx->pc = 0x1EBD28u;
label_1ebd28:
    // 0x1ebd28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebd2c:
    // 0x1ebd2c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1ebd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ebd30:
    // 0x1ebd30: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBD30u;
    {
        const bool branch_taken_0x1ebd30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD30u;
        // 0x1ebd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd30) {
            ctx->pc = 0x1EBD44u;
            goto label_1ebd44;
        }
    }
    ctx->pc = 0x1EBD38u;
    // 0x1ebd38: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ebd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ebd3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBD3Cu;
    {
        const bool branch_taken_0x1ebd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD3Cu;
        // 0x1ebd40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd3c) {
            ctx->pc = 0x1EBD48u;
            goto label_1ebd48;
        }
    }
    ctx->pc = 0x1EBD44u;
label_1ebd44:
    // 0x1ebd44: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x1ebd44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_1ebd48:
    // 0x1ebd48: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EBD48u;
    SET_GPR_U32(ctx, 31, 0x1EBD50u);
    ctx->pc = 0x1ED9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9D8u, 0x1EBD48u, 0x1EBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD50u;
label_1ebd50:
    // 0x1ebd50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ebd50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebd54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ebd54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ebd58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebd58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebd5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ebd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ebd60: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD60u;
        // 0x1ebd64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBD68u;
}
