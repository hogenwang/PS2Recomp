#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00104AE0
// Address: 0x104ae0 - 0x104ba0
void sub_00104AE0_0x104ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104AE0_0x104ae0");
#endif

    switch (ctx->pc) {
        case 0x104b74u: goto label_104b74;
        case 0x104b78u: goto label_104b78;
        case 0x104b88u: goto label_104b88;
        default: break;
    }

    ctx->pc = 0x104ae0u;

    // 0x104ae0: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x104ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x104ae4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x104ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104ae8: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x104AE8u;
    {
        const bool branch_taken_0x104ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104ae8) {
            ctx->pc = 0x104C00u;
            return;
        }
    }
    ctx->pc = 0x104AF0u;
    // 0x104af0: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x104af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x104af4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x104AF4u;
    {
        const bool branch_taken_0x104af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104af4) {
            ctx->pc = 0x104AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104AF4u;
            // 0x104af8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104B88u;
            goto label_104b88;
        }
    }
    ctx->pc = 0x104AFCu;
    // 0x104afc: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x104AFCu;
    {
        const bool branch_taken_0x104afc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x104B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104AFCu;
            // 0x104b00: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104afc) {
            ctx->pc = 0x104B10u;
            goto label_104b10;
        }
    }
    ctx->pc = 0x104B04u;
    // 0x104b04: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x104b08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104B08u;
    {
        const bool branch_taken_0x104b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B08u;
            // 0x104b0c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b08) {
            ctx->pc = 0x104B14u;
            goto label_104b14;
        }
    }
    ctx->pc = 0x104B10u;
label_104b10:
    // 0x104b10: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x104b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_104b14:
    // 0x104b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104b18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x104b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x104b1c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104B1Cu;
    {
        const bool branch_taken_0x104b1c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x104B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B1Cu;
            // 0x104b20: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b1c) {
            ctx->pc = 0x104B30u;
            goto label_104b30;
        }
    }
    ctx->pc = 0x104B24u;
    // 0x104b24: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x104b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x104b28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104B28u;
    {
        const bool branch_taken_0x104b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B28u;
            // 0x104b2c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b28) {
            ctx->pc = 0x104B34u;
            goto label_104b34;
        }
    }
    ctx->pc = 0x104B30u;
label_104b30:
    // 0x104b30: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x104b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_104b34:
    // 0x104b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104b38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104b3c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x104b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x104b40: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x104b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x104b44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x104b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x104b48: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x104B48u;
    {
        const bool branch_taken_0x104b48 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x104B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B48u;
            // 0x104b4c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b48) {
            ctx->pc = 0x104B54u;
            goto label_104b54;
        }
    }
    ctx->pc = 0x104B50u;
    // 0x104b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104b54:
    // 0x104b54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104b54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104b5c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x104b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x104b60: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x104b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x104b64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x104b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x104b68: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104B68u;
    {
        const bool branch_taken_0x104b68 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x104B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B68u;
            // 0x104b6c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b68) {
            ctx->pc = 0x104B74u;
            goto label_104b74;
        }
    }
    ctx->pc = 0x104B70u;
    // 0x104b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104b74:
    // 0x104b74: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104b74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_104b78:
    // 0x104b78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x104b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x104b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x104b80: 0x3e00008  jr          $ra
    ctx->pc = 0x104B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B80u;
            // 0x104b84: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104B88u;
label_104b88:
    // 0x104b88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x104b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104b8c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x104B8Cu;
    {
        const bool branch_taken_0x104b8c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x104B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104B8Cu;
            // 0x104b90: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b8c) {
            ctx->pc = 0x104B98u;
            goto label_104b98;
        }
    }
    ctx->pc = 0x104B94u;
    // 0x104b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_104b98:
    // 0x104b98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104b98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x104ba0u;
}
