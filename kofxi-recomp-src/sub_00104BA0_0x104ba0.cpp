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

// Function: sub_00104BA0
// Address: 0x104ba0 - 0x104c68
void sub_00104BA0_0x104ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104BA0_0x104ba0");
#endif

    switch (ctx->pc) {
        case 0x104c00u: goto label_104c00;
        default: break;
    }

    ctx->pc = 0x104ba0u;

    // 0x104ba0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x104ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x104ba4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x104ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x104ba8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x104ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x104bac: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104BACu;
    {
        const bool branch_taken_0x104bac = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x104BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BACu;
        // 0x104bb0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bac) {
            ctx->pc = 0x104BB8u;
            goto label_104bb8;
        }
    }
    ctx->pc = 0x104BB4u;
    // 0x104bb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104bb8:
    // 0x104bb8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104bb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104bc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104bc4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x104bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x104bc8: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x104BC8u;
    {
        const bool branch_taken_0x104bc8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x104BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BC8u;
        // 0x104bcc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bc8) {
            ctx->pc = 0x104BDCu;
            goto label_104bdc;
        }
    }
    ctx->pc = 0x104BD0u;
    // 0x104bd0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x104bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x104bd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104BD4u;
    {
        const bool branch_taken_0x104bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BD4u;
        // 0x104bd8: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bd4) {
            ctx->pc = 0x104BE0u;
            goto label_104be0;
        }
    }
    ctx->pc = 0x104BDCu;
label_104bdc:
    // 0x104bdc: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x104bdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_104be0:
    // 0x104be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104be4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x104be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x104be8: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104BE8u;
    {
        const bool branch_taken_0x104be8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x104BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BE8u;
        // 0x104bec: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104be8) {
            ctx->pc = 0x104BF8u;
            goto label_104bf8;
        }
    }
    ctx->pc = 0x104BF0u;
    // 0x104bf0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x104BF0u;
    {
        const bool branch_taken_0x104bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BF0u;
        // 0x104bf4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bf0) {
            ctx->pc = 0x104B74u;
            return;
        }
    }
    ctx->pc = 0x104BF8u;
label_104bf8:
    // 0x104bf8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x104BF8u;
    {
        const bool branch_taken_0x104bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BF8u;
        // 0x104bfc: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bf8) {
            ctx->pc = 0x104B78u;
            return;
        }
    }
    ctx->pc = 0x104C00u;
label_104c00:
    // 0x104c00: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x104C00u;
    {
        const bool branch_taken_0x104c00 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x104C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C00u;
        // 0x104c04: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c00) {
            ctx->pc = 0x104C14u;
            goto label_104c14;
        }
    }
    ctx->pc = 0x104C08u;
    // 0x104c08: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x104c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x104c0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104C0Cu;
    {
        const bool branch_taken_0x104c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C0Cu;
        // 0x104c10: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c0c) {
            ctx->pc = 0x104C18u;
            goto label_104c18;
        }
    }
    ctx->pc = 0x104C14u;
label_104c14:
    // 0x104c14: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x104c14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_104c18:
    // 0x104c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104c1c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x104c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x104c20: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104C20u;
    {
        const bool branch_taken_0x104c20 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x104C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C20u;
        // 0x104c24: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c20) {
            ctx->pc = 0x104C34u;
            goto label_104c34;
        }
    }
    ctx->pc = 0x104C28u;
    // 0x104c28: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x104c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x104c2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104C2Cu;
    {
        const bool branch_taken_0x104c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C2Cu;
        // 0x104c30: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c2c) {
            ctx->pc = 0x104C38u;
            goto label_104c38;
        }
    }
    ctx->pc = 0x104C34u;
label_104c34:
    // 0x104c34: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x104c34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_104c38:
    // 0x104c38: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x104c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x104c3c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x104c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x104c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104c44: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x104c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x104c48: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x104C48u;
    {
        const bool branch_taken_0x104c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x104C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C48u;
        // 0x104c4c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c48) {
            ctx->pc = 0x104C5Cu;
            goto label_104c5c;
        }
    }
    ctx->pc = 0x104C50u;
    // 0x104c50: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x104c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x104c54: 0x3e00008  jr          $ra
    ctx->pc = 0x104C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C54u;
        // 0x104c58: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104C5Cu;
label_104c5c:
    // 0x104c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x104C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C5Cu;
        // 0x104c60: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104C64u;
    // 0x104c64: 0x0  nop
    ctx->pc = 0x104c64u;
    // NOP
}
