#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234BA0
// Address: 0x234ba0 - 0x234c58
void sub_00234BA0_0x234ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234BA0_0x234ba0");
#endif

    switch (ctx->pc) {
        case 0x234bb8u: goto label_234bb8;
        case 0x234bc8u: goto label_234bc8;
        case 0x234bfcu: goto label_234bfc;
        case 0x234c04u: goto label_234c04;
        case 0x234c18u: goto label_234c18;
        default: break;
    }

    ctx->pc = 0x234ba0u;

    // 0x234ba0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x234ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x234ba4: 0x8c49fcb8  lw          $t1, -0x348($v0)
    ctx->pc = 0x234ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966456)));
    // 0x234ba8: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x234BA8u;
    {
        const bool branch_taken_0x234ba8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BA8u;
            // 0x234bac: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ba8) {
            ctx->pc = 0x234BFCu;
            goto label_234bfc;
        }
    }
    ctx->pc = 0x234BB0u;
    // 0x234bb0: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x234bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x234bb4: 0x0  nop
    ctx->pc = 0x234bb4u;
    // NOP
label_234bb8:
    // 0x234bb8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x234bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bbc: 0x11400011  beqz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x234BBCu;
    {
        const bool branch_taken_0x234bbc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BBCu;
            // 0x234bc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bbc) {
            ctx->pc = 0x234C04u;
            goto label_234c04;
        }
    }
    ctx->pc = 0x234BC4u;
    // 0x234bc4: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_234bc8:
    // 0x234bc8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x234bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x234bcc: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x234bccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x234bd0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x234bd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234bd4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x234BD4u;
    {
        const bool branch_taken_0x234bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x234BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BD4u;
            // 0x234bd8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bd4) {
            ctx->pc = 0x234BF0u;
            goto label_234bf0;
        }
    }
    ctx->pc = 0x234BDCu;
    // 0x234bdc: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x234bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x234be0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x234BE0u;
    {
        const bool branch_taken_0x234be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BE0u;
            // 0x234be4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234be0) {
            ctx->pc = 0x234BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234bc8;
        }
    }
    ctx->pc = 0x234BE8u;
    // 0x234be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x234BE8u;
    {
        const bool branch_taken_0x234be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BE8u;
            // 0x234bec: 0x80e20000  lb          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234be8) {
            ctx->pc = 0x234C08u;
            goto label_234c08;
        }
    }
    ctx->pc = 0x234BF0u;
label_234bf0:
    // 0x234bf0: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x234bf4: 0x5520fff0  bnel        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x234BF4u;
    {
        const bool branch_taken_0x234bf4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x234bf4) {
            ctx->pc = 0x234BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234BF4u;
            // 0x234bf8: 0x8d2a000c  lw          $t2, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234bb8;
        }
    }
    ctx->pc = 0x234BFCu;
label_234bfc:
    // 0x234bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x234BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234BFCu;
            // 0x234c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234C04u;
label_234c04:
    // 0x234c04: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x234c04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_234c08:
    // 0x234c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x234C0Cu;
    {
        const bool branch_taken_0x234c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C0Cu;
            // 0x234c10: 0x90e80000  lbu         $t0, 0x0($a3) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c0c) {
            ctx->pc = 0x234C48u;
            goto label_234c48;
        }
    }
    ctx->pc = 0x234C14u;
    // 0x234c14: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x234c14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_234c18:
    // 0x234c18: 0x2502ffd0  addiu       $v0, $t0, -0x30
    ctx->pc = 0x234c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
    // 0x234c1c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x234c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x234c20: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x234C20u;
    {
        const bool branch_taken_0x234c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C20u;
            // 0x234c24: 0xca1818  mult        $v1, $a2, $t2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c20) {
            ctx->pc = 0x234BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234bfc;
        }
    }
    ctx->pc = 0x234C28u;
    // 0x234c28: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x234c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x234c2c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x234c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x234c30: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x234c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x234c34: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x234c34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x234c38: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x234c38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x234c3c: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x234c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x234c40: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x234C40u;
    {
        const bool branch_taken_0x234c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C40u;
            // 0x234c44: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c40) {
            ctx->pc = 0x234C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234c18;
        }
    }
    ctx->pc = 0x234C48u;
label_234c48:
    // 0x234c48: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x234C48u;
    {
        const bool branch_taken_0x234c48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x234c48) {
            ctx->pc = 0x234C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234C48u;
            // 0x234c4c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234C50u;
            goto label_234c50;
        }
    }
    ctx->pc = 0x234C50u;
label_234c50:
    // 0x234c50: 0x3e00008  jr          $ra
    ctx->pc = 0x234C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C50u;
            // 0x234c54: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234C58u;
    ctx->pc = 0x234c58u;
}
