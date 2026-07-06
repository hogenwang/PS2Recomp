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

// Function: sub_0015EAA0
// Address: 0x15eaa0 - 0x15ed00
void sub_0015EAA0_0x15eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EAA0_0x15eaa0");
#endif

    switch (ctx->pc) {
        case 0x15eb84u: goto label_15eb84;
        case 0x15ebbcu: goto label_15ebbc;
        case 0x15ebfcu: goto label_15ebfc;
        case 0x15ec1cu: goto label_15ec1c;
        case 0x15ecb0u: goto label_15ecb0;
        default: break;
    }

    ctx->pc = 0x15eaa0u;

    // 0x15eaa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15eaa4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x15eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15eaa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15eaac: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15eab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15eab4: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x15eab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x15eab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15eab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15eabc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15eabcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15eac4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x15eac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15eac8: 0x8c634108  lw          $v1, 0x4108($v1)
    ctx->pc = 0x15eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16648)));
    // 0x15eacc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x15eaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ead0: 0x14480020  bne         $v0, $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15EAD0u;
    {
        const bool branch_taken_0x15ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x15EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD0u;
        // 0x15ead4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ead0) {
            ctx->pc = 0x15EB54u;
            goto label_15eb54;
        }
    }
    ctx->pc = 0x15EAD8u;
    // 0x15ead8: 0x4402b  sltu        $t0, $zero, $a0
    ctx->pc = 0x15ead8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x15eadc: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x15eadcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x15eae0: 0x390b0001  xori        $t3, $t0, 0x1
    ctx->pc = 0x15eae0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x15eae4: 0x2529dc9d  addiu       $t1, $t1, -0x2363
    ctx->pc = 0x15eae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958237));
    // 0x15eae8: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x15eae8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x15eaec: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x15eaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15eaf0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x15eaf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x15eaf4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x15eaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x15eaf8: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x15eaf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x15eafc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x15eafcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x15eb00: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x15eb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x15eb04: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x15eb04u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15eb08: 0x15280002  bne         $t1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15EB08u;
    {
        const bool branch_taken_0x15eb08 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x15eb08) {
            ctx->pc = 0x15EB14u;
            goto label_15eb14;
        }
    }
    ctx->pc = 0x15EB10u;
    // 0x15eb10: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x15eb10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_15eb14:
    // 0x15eb14: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x15eb14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x15eb18: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15eb1c: 0x2529dcbd  addiu       $t1, $t1, -0x2343
    ctx->pc = 0x15eb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958269));
    // 0x15eb20: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x15eb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x15eb24: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x15eb24u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15eb28: 0x15280002  bne         $t1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15EB28u;
    {
        const bool branch_taken_0x15eb28 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x15eb28) {
            ctx->pc = 0x15EB34u;
            goto label_15eb34;
        }
    }
    ctx->pc = 0x15EB30u;
    // 0x15eb30: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x15eb30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_15eb34:
    // 0x15eb34: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x15eb34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x15eb38: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x15eb38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15eb3c: 0x2529dcdd  addiu       $t1, $t1, -0x2323
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958301));
    // 0x15eb40: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x15eb40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x15eb44: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x15eb44u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15eb48: 0x55280003  bnel        $t1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EB48u;
    {
        const bool branch_taken_0x15eb48 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x15eb48) {
            ctx->pc = 0x15EB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB48u;
            // 0x15eb4c: 0x30c900ff  andi        $t1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EB58u;
            goto label_15eb58;
        }
    }
    ctx->pc = 0x15EB50u;
    // 0x15eb50: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x15eb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_15eb54:
    // 0x15eb54: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x15eb54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_15eb58:
    // 0x15eb58: 0x2408002f  addiu       $t0, $zero, 0x2F
    ctx->pc = 0x15eb58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x15eb5c: 0x15280002  bne         $t1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15EB5Cu;
    {
        const bool branch_taken_0x15eb5c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x15eb5c) {
            ctx->pc = 0x15EB68u;
            goto label_15eb68;
        }
    }
    ctx->pc = 0x15EB64u;
    // 0x15eb64: 0x6406001e  daddiu      $a2, $zero, 0x1E
    ctx->pc = 0x15eb64u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30);
label_15eb68:
    // 0x15eb68: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EB68u;
    {
        const bool branch_taken_0x15eb68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb68) {
            ctx->pc = 0x15EB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB68u;
            // 0x15eb6c: 0x90680000  lbu         $t0, 0x0($v1) (Delay Slot)
            SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EB78u;
            goto label_15eb78;
        }
    }
    ctx->pc = 0x15EB70u;
    // 0x15eb70: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x15EB70u;
    {
        const bool branch_taken_0x15eb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB70u;
        // 0x15eb74: 0x241001fa  addiu       $s0, $zero, 0x1FA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb70) {
            ctx->pc = 0x15ECE4u;
            goto label_15ece4;
        }
    }
    ctx->pc = 0x15EB78u;
label_15eb78:
    // 0x15eb78: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15eb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15eb7c: 0x11070008  beq         $t0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x15EB7Cu;
    {
        const bool branch_taken_0x15eb7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x15eb7c) {
            ctx->pc = 0x15EBA0u;
            goto label_15eba0;
        }
    }
    ctx->pc = 0x15EB84u;
label_15eb84:
    // 0x15eb84: 0x55020003  bnel        $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EB84u;
    {
        const bool branch_taken_0x15eb84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15eb84) {
            ctx->pc = 0x15EB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB84u;
            // 0x15eb88: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EB94u;
            goto label_15eb94;
        }
    }
    ctx->pc = 0x15EB8Cu;
    // 0x15eb8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15EB8Cu;
    {
        const bool branch_taken_0x15eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB8Cu;
        // 0x15eb90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb8c) {
            ctx->pc = 0x15EBA0u;
            goto label_15eba0;
        }
    }
    ctx->pc = 0x15EB94u;
label_15eb94:
    // 0x15eb94: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x15eb94u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15eb98: 0x1507fffa  bne         $t0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15EB98u;
    {
        const bool branch_taken_0x15eb98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x15eb98) {
            ctx->pc = 0x15EB84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15eb84;
        }
    }
    ctx->pc = 0x15EBA0u;
label_15eba0:
    // 0x15eba0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15EBA0u;
    {
        const bool branch_taken_0x15eba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eba0) {
            ctx->pc = 0x15EBE8u;
            goto label_15ebe8;
        }
    }
    ctx->pc = 0x15EBA8u;
    // 0x15eba8: 0x1502000f  bne         $t0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15EBA8u;
    {
        const bool branch_taken_0x15eba8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x15eba8) {
            ctx->pc = 0x15EBE8u;
            goto label_15ebe8;
        }
    }
    ctx->pc = 0x15EBB0u;
    // 0x15ebb0: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x15ebb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15ebb4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15ebb8: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x15ebb8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_15ebbc:
    // 0x15ebbc: 0x14a70003  bne         $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EBBCu;
    {
        const bool branch_taken_0x15ebbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x15ebbc) {
            ctx->pc = 0x15EBCCu;
            goto label_15ebcc;
        }
    }
    ctx->pc = 0x15EBC4u;
    // 0x15ebc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15EBC4u;
    {
        const bool branch_taken_0x15ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBC4u;
        // 0x15ebc8: 0x84700002  lh          $s0, 0x2($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebc4) {
            ctx->pc = 0x15EBE8u;
            goto label_15ebe8;
        }
    }
    ctx->pc = 0x15EBCCu;
label_15ebcc:
    // 0x15ebcc: 0x14a60002  bne         $a1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x15EBCCu;
    {
        const bool branch_taken_0x15ebcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x15ebcc) {
            ctx->pc = 0x15EBD8u;
            goto label_15ebd8;
        }
    }
    ctx->pc = 0x15EBD4u;
    // 0x15ebd4: 0x84720002  lh          $s2, 0x2($v1)
    ctx->pc = 0x15ebd4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_15ebd8:
    // 0x15ebd8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x15ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x15ebdc: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x15ebdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ebe0: 0x50a2fff6  beql        $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15EBE0u;
    {
        const bool branch_taken_0x15ebe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ebe0) {
            ctx->pc = 0x15EBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EBE0u;
            // 0x15ebe4: 0x90650001  lbu         $a1, 0x1($v1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EBBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ebbc;
        }
    }
    ctx->pc = 0x15EBE8u;
label_15ebe8:
    // 0x15ebe8: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x15ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x15ebec: 0x5043003e  beql        $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x15EBECu;
    {
        const bool branch_taken_0x15ebec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ebec) {
            ctx->pc = 0x15EBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EBECu;
            // 0x15ebf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15ECE8u;
            goto label_15ece8;
        }
    }
    ctx->pc = 0x15EBF4u;
    // 0x15ebf4: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x15EBF4u;
    SET_GPR_U32(ctx, 31, 0x15EBFCu);
    ctx->pc = 0x15EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBF4u;
    // 0x15ebf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x15EBF4u, 0x15EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBFCu;
label_15ebfc:
    // 0x15ebfc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15ebfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15ec00: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x15ec04: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x15ec04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x15ec08: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x15ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15ec0c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EC0Cu;
    {
        const bool branch_taken_0x15ec0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ec0c) {
            ctx->pc = 0x15EC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EC0Cu;
            // 0x15ec10: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC24u;
            goto label_15ec24;
        }
    }
    ctx->pc = 0x15EC14u;
    // 0x15ec14: 0xc0d4720  jal         func_351C80
    ctx->pc = 0x15EC14u;
    SET_GPR_U32(ctx, 31, 0x15EC1Cu);
    ctx->pc = 0x351C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C80u, 0x15EC14u, 0x15EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC1Cu;
label_15ec1c:
    // 0x15ec1c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15ec1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15ec20: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x15ec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_15ec24:
    // 0x15ec24: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x15ec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x15ec28: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15EC28u;
    {
        const bool branch_taken_0x15ec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec28) {
            ctx->pc = 0x15EC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EC28u;
            // 0x15ec2c: 0x101c3c  dsll32      $v1, $s0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC98u;
            goto label_15ec98;
        }
    }
    ctx->pc = 0x15EC30u;
    // 0x15ec30: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x15ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x15ec34: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EC34u;
    {
        const bool branch_taken_0x15ec34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec34) {
            ctx->pc = 0x15EC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EC34u;
            // 0x15ec38: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC44u;
            goto label_15ec44;
        }
    }
    ctx->pc = 0x15EC3Cu;
    // 0x15ec3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15EC3Cu;
    {
        const bool branch_taken_0x15ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC3Cu;
        // 0x15ec40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec3c) {
            ctx->pc = 0x15EC70u;
            goto label_15ec70;
        }
    }
    ctx->pc = 0x15EC44u;
label_15ec44:
    // 0x15ec44: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EC44u;
    {
        const bool branch_taken_0x15ec44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec44) {
            ctx->pc = 0x15EC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EC44u;
            // 0x15ec48: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EC4Cu;
    // 0x15ec4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15EC4Cu;
    {
        const bool branch_taken_0x15ec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC4Cu;
        // 0x15ec50: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec4c) {
            ctx->pc = 0x15EC70u;
            goto label_15ec70;
        }
    }
    ctx->pc = 0x15EC54u;
label_15ec54:
    // 0x15ec54: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EC54u;
    {
        const bool branch_taken_0x15ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec54) {
            ctx->pc = 0x15EC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EC54u;
            // 0x15ec58: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC64u;
            goto label_15ec64;
        }
    }
    ctx->pc = 0x15EC5Cu;
    // 0x15ec5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15EC5Cu;
    {
        const bool branch_taken_0x15ec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC5Cu;
        // 0x15ec60: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec5c) {
            ctx->pc = 0x15EC70u;
            goto label_15ec70;
        }
    }
    ctx->pc = 0x15EC64u;
label_15ec64:
    // 0x15ec64: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EC64u;
    {
        const bool branch_taken_0x15ec64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec64) {
            ctx->pc = 0x15EC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EC64u;
            // 0x15ec68: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC74u;
            goto label_15ec74;
        }
    }
    ctx->pc = 0x15EC6Cu;
    // 0x15ec6c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15ec70:
    // 0x15ec70: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x15ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_15ec74:
    // 0x15ec74: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EC74u;
    {
        const bool branch_taken_0x15ec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec74) {
            ctx->pc = 0x15EC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EC74u;
            // 0x15ec78: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EC84u;
            goto label_15ec84;
        }
    }
    ctx->pc = 0x15EC7Cu;
    // 0x15ec7c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15ec7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x15ec80: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x15ec80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_15ec84:
    // 0x15ec84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ec84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15ec88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15ec8c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x15ec8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15ec90: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x15ec90u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x15ec94: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x15ec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_15ec98:
    // 0x15ec98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ec9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15ec9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15eca0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15ECA0u;
    {
        const bool branch_taken_0x15eca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15eca0) {
            ctx->pc = 0x15ECE4u;
            goto label_15ece4;
        }
    }
    ctx->pc = 0x15ECA8u;
    // 0x15eca8: 0xc067c48  jal         func_19F120
    ctx->pc = 0x15ECA8u;
    SET_GPR_U32(ctx, 31, 0x15ECB0u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x15ECA8u, 0x15ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ECB0u;
label_15ecb0:
    // 0x15ecb0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x15ecb0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ecb4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x15ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x15ecb8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x15ecb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15ecbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15ecbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ecc0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15ecc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15ecc4: 0x0  nop
    ctx->pc = 0x15ecc4u;
    // NOP
    // 0x15ecc8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x15ecc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x15eccc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x15ecccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x15ecd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15ecd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15ecd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15ecd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15ecd8: 0x0  nop
    ctx->pc = 0x15ecd8u;
    // NOP
    // 0x15ecdc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x15ecdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15ece0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x15ece0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_15ece4:
    // 0x15ece4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15ece4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ece8:
    // 0x15ece8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ece8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ecec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ececu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ecf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ecf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ecf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ecf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ecf8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECF8u;
        // 0x15ecfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ECF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ED00u;
}
