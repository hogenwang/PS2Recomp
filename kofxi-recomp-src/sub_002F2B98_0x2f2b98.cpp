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

// Function: sub_002F2B98
// Address: 0x2f2b98 - 0x2f2c58
void sub_002F2B98_0x2f2b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2B98_0x2f2b98");
#endif

    switch (ctx->pc) {
        case 0x2f2bccu: goto label_2f2bcc;
        case 0x2f2be8u: goto label_2f2be8;
        case 0x2f2c18u: goto label_2f2c18;
        default: break;
    }

    ctx->pc = 0x2f2b98u;

    // 0x2f2b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f2b9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2ba0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f2ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2ba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2ba8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f2ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2bb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f2bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f2bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2bb8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2f2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2f2bbc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2BBCu;
    {
        const bool branch_taken_0x2f2bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BBCu;
        // 0x2f2bc0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bbc) {
            ctx->pc = 0x2F2BD4u;
            goto label_2f2bd4;
        }
    }
    ctx->pc = 0x2F2BC4u;
    // 0x2f2bc4: 0xc0bca84  jal         func_2F2A10
    ctx->pc = 0x2F2BC4u;
    SET_GPR_U32(ctx, 31, 0x2F2BCCu);
    ctx->pc = 0x2F2A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2A10u, 0x2F2BC4u, 0x2F2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BCCu;
label_2f2bcc:
    // 0x2f2bcc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F2BCCu;
    {
        const bool branch_taken_0x2f2bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2bcc) {
            ctx->pc = 0x2F2C20u;
            goto label_2f2c20;
        }
    }
    ctx->pc = 0x2F2BD4u;
label_2f2bd4:
    // 0x2f2bd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2f2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f2bd8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2BD8u;
    {
        const bool branch_taken_0x2f2bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BD8u;
        // 0x2f2bdc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bd8) {
            ctx->pc = 0x2F2C00u;
            goto label_2f2c00;
        }
    }
    ctx->pc = 0x2F2BE0u;
    // 0x2f2be0: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2F2BE0u;
    SET_GPR_U32(ctx, 31, 0x2F2BE8u);
    ctx->pc = 0x2F2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BE0u;
    // 0x2f2be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2F2BE0u, 0x2F2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BE8u;
label_2f2be8:
    // 0x2f2be8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2f2be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f2bec: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2f2becu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2bf0: 0x5ce00004  bgtzl       $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2BF0u;
    {
        const bool branch_taken_0x2f2bf0 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x2f2bf0) {
            ctx->pc = 0x2F2BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2BF0u;
            // 0x2f2bf4: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2C04u;
            goto label_2f2c04;
        }
    }
    ctx->pc = 0x2F2BF8u;
    // 0x2f2bf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F2BF8u;
    {
        const bool branch_taken_0x2f2bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BF8u;
        // 0x2f2bfc: 0x2402fc13  addiu       $v0, $zero, -0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bf8) {
            ctx->pc = 0x2F2C38u;
            goto label_2f2c38;
        }
    }
    ctx->pc = 0x2F2C00u;
label_2f2c00:
    // 0x2f2c00: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2f2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2f2c04:
    // 0x2f2c04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f2c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f2c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c10: 0xc0bdf70  jal         func_2F7DC0
    ctx->pc = 0x2F2C10u;
    SET_GPR_U32(ctx, 31, 0x2F2C18u);
    ctx->pc = 0x2F2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C10u;
    // 0x2f2c14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7DC0u, 0x2F2C10u, 0x2F2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C18u;
label_2f2c18:
    // 0x2f2c18: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2C18u;
    {
        const bool branch_taken_0x2f2c18 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2f2c18) {
            ctx->pc = 0x2F2C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2C18u;
            // 0x2f2c1c: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2C20u;
            goto label_2f2c20;
        }
    }
    ctx->pc = 0x2F2C20u;
label_2f2c20:
    // 0x2f2c20: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2C20u;
    {
        const bool branch_taken_0x2f2c20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C20u;
        // 0x2f2c24: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c20) {
            ctx->pc = 0x2F2C44u;
            goto label_2f2c44;
        }
    }
    ctx->pc = 0x2F2C28u;
    // 0x2f2c28: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2C28u;
    {
        const bool branch_taken_0x2f2c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C28u;
        // 0x2f2c2c: 0x2402fc15  addiu       $v0, $zero, -0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c28) {
            ctx->pc = 0x2F2C38u;
            goto label_2f2c38;
        }
    }
    ctx->pc = 0x2F2C30u;
    // 0x2f2c30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2C30u;
    {
        const bool branch_taken_0x2f2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C30u;
        // 0x2f2c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c30) {
            ctx->pc = 0x2F2C44u;
            goto label_2f2c44;
        }
    }
    ctx->pc = 0x2F2C38u;
label_2f2c38:
    // 0x2f2c38: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f2c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f2c3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2c40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f2c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2c44:
    // 0x2f2c44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f2c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2c48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C50u;
        // 0x2f2c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2C58u;
}
