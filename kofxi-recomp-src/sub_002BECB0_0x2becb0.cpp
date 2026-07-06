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

// Function: sub_002BECB0
// Address: 0x2becb0 - 0x2bedd8
void sub_002BECB0_0x2becb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BECB0_0x2becb0");
#endif

    switch (ctx->pc) {
        case 0x2becd8u: goto label_2becd8;
        case 0x2bed60u: goto label_2bed60;
        default: break;
    }

    ctx->pc = 0x2becb0u;

    // 0x2becb0: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x2becb0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2becb4: 0x18e00045  blez        $a3, . + 4 + (0x45 << 2)
    ctx->pc = 0x2BECB4u;
    {
        const bool branch_taken_0x2becb4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2BECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECB4u;
        // 0x2becb8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2becb4) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BECBCu;
    // 0x2becbc: 0x18a00043  blez        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2BECBCu;
    {
        const bool branch_taken_0x2becbc = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2becbc) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BECC4u;
    // 0x2becc4: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x2becc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2becc8: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2BECC8u;
    {
        const bool branch_taken_0x2becc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECC8u;
        // 0x2beccc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2becc8) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BECD0u;
    // 0x2becd0: 0x3c18003e  lui         $t8, 0x3E
    ctx->pc = 0x2becd0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)62 << 16));
    // 0x2becd4: 0x0  nop
    ctx->pc = 0x2becd4u;
    // NOP
label_2becd8:
    // 0x2becd8: 0x2702b7c8  addiu       $v0, $t8, -0x4838
    ctx->pc = 0x2becd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 4294948808));
    // 0x2becdc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2becdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bece0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2bece0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bece4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2bece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2bece8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BECE8u;
    {
        const bool branch_taken_0x2bece8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECE8u;
        // 0x2becec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bece8) {
            ctx->pc = 0x2BED1Cu;
            goto label_2bed1c;
        }
    }
    ctx->pc = 0x2BECF0u;
    // 0x2becf0: 0x1824018  mult        $t0, $t4, $v0
    ctx->pc = 0x2becf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2becf4: 0x1191821  addu        $v1, $t0, $t9
    ctx->pc = 0x2becf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x2becf8: 0x80620008  lb          $v0, 0x8($v1)
    ctx->pc = 0x2becf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2becfc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BECFCu;
    {
        const bool branch_taken_0x2becfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2becfc) {
            ctx->pc = 0x2BED00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BECFCu;
            // 0x2bed00: 0xa0660008  sb          $a2, 0x8($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BED10u;
            goto label_2bed10;
        }
    }
    ctx->pc = 0x2BED04u;
    // 0x2bed04: 0x14460031  bne         $v0, $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x2BED04u;
    {
        const bool branch_taken_0x2bed04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2bed04) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BED0Cu;
    // 0x2bed0c: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x2bed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
label_2bed10:
    // 0x2bed10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2bed10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BED14u;
    {
        const bool branch_taken_0x2bed14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED14u;
        // 0x2bed18: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed14) {
            ctx->pc = 0x2BED30u;
            goto label_2bed30;
        }
    }
    ctx->pc = 0x2BED1Cu;
label_2bed1c:
    // 0x2bed1c: 0x24c3ffd0  addiu       $v1, $a2, -0x30
    ctx->pc = 0x2bed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2bed20: 0x1823018  mult        $a2, $t4, $v0
    ctx->pc = 0x2bed20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2bed24: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2bed24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bed28: 0xd91021  addu        $v0, $a2, $t9
    ctx->pc = 0x2bed28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x2bed2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2bed30:
    // 0x2bed30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bed34: 0x1823018  mult        $a2, $t4, $v0
    ctx->pc = 0x2bed34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2bed38: 0xd91821  addu        $v1, $a2, $t9
    ctx->pc = 0x2bed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x2bed3c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2bed3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bed40: 0x166102a  slt         $v0, $t3, $a2
    ctx->pc = 0x2bed40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bed44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BED44u;
    {
        const bool branch_taken_0x2bed44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED44u;
        // 0x2bed48: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed44) {
            ctx->pc = 0x2BEDA8u;
            goto label_2beda8;
        }
    }
    ctx->pc = 0x2BED4Cu;
    // 0x2bed4c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2bed4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed50: 0x244fb7c8  addiu       $t7, $v0, -0x4838
    ctx->pc = 0x2bed50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2bed54: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x2bed54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed58: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bed5c: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x2bed5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_2bed60:
    // 0x2bed60: 0x145102a  slt         $v0, $t2, $a1
    ctx->pc = 0x2bed60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2bed64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BED64u;
    {
        const bool branch_taken_0x2bed64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED64u;
        // 0x2bed68: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed64) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BED6Cu;
    // 0x2bed6c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x2bed6cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bed70: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BED70u;
    {
        const bool branch_taken_0x2bed70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED70u;
        // 0x2bed74: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed70) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BED78u;
    // 0x2bed78: 0xcf1821  addu        $v1, $a2, $t7
    ctx->pc = 0x2bed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x2bed7c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2bed7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bed80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2bed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2bed84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BED84u;
    {
        const bool branch_taken_0x2bed84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED84u;
        // 0x2bed88: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed84) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BED8Cu;
    // 0x2bed8c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2bed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2bed90: 0x16d182a  slt         $v1, $t3, $t5
    ctx->pc = 0x2bed90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x2bed94: 0x4e1018  mult        $v0, $v0, $t6
    ctx->pc = 0x2bed94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bed98: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2bed9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2beda0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2BEDA0u;
    {
        const bool branch_taken_0x2beda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDA0u;
        // 0x2beda4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beda0) {
            ctx->pc = 0x2BED60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bed60;
        }
    }
    ctx->pc = 0x2BEDA8u;
label_2beda8:
    // 0x2beda8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2beda8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2bedac: 0x187102a  slt         $v0, $t4, $a3
    ctx->pc = 0x2bedacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2bedb0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEDB0u;
    {
        const bool branch_taken_0x2bedb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDB0u;
        // 0x2bedb4: 0x145102a  slt         $v0, $t2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedb0) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BEDB8u;
    // 0x2bedb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEDB8u;
    {
        const bool branch_taken_0x2bedb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDB8u;
        // 0x2bedbc: 0x8a1021  addu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedb8) {
            ctx->pc = 0x2BEDCCu;
            goto label_2bedcc;
        }
    }
    ctx->pc = 0x2BEDC0u;
    // 0x2bedc0: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2bedc0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bedc4: 0x14c0ffc4  bnez        $a2, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2BEDC4u;
    {
        const bool branch_taken_0x2bedc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDC4u;
        // 0x2bedc8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedc4) {
            ctx->pc = 0x2BECD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2becd8;
        }
    }
    ctx->pc = 0x2BEDCCu;
label_2bedcc:
    // 0x2bedcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDCCu;
        // 0x2bedd0: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDD4u;
    // 0x2bedd4: 0x0  nop
    ctx->pc = 0x2bedd4u;
    // NOP
    if (ctx->pc == 0x2bedd4u) { ctx->pc = 0x2bedd8u; }
}
