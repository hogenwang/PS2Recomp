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

// Function: sub_002CDCA8
// Address: 0x2cdca8 - 0x2cdee8
void sub_002CDCA8_0x2cdca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDCA8_0x2cdca8");
#endif

    switch (ctx->pc) {
        case 0x2cdcb8u: goto label_2cdcb8;
        case 0x2cdcc0u: goto label_2cdcc0;
        case 0x2cdcd4u: goto label_2cdcd4;
        case 0x2cdce0u: goto label_2cdce0;
        case 0x2cdcecu: goto label_2cdcec;
        case 0x2cdd3cu: goto label_2cdd3c;
        case 0x2cddb4u: goto label_2cddb4;
        default: break;
    }

    ctx->pc = 0x2cdca8u;

    // 0x2cdca8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2cdca8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cdcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcb0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2cdcb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcb4: 0x11200089  beqz        $t1, . + 4 + (0x89 << 2)
label_2cdcb8:
    if (ctx->pc == 0x2CDCB8u) {
        ctx->pc = 0x2CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCB4u;
        // 0x2cdcb8: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCBCu;
        goto label_fallthrough_0x2cdcb4;
    }
    ctx->pc = 0x2CDCB4u;
    {
        const bool branch_taken_0x2cdcb4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCB4u;
        // 0x2cdcb8: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcb4) {
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
label_fallthrough_0x2cdcb4:
    ctx->pc = 0x2CDCBCu;
    // 0x2cdcbc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2cdcbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2cdcc0:
    // 0x2cdcc0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2cdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2cdcc4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cdcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cdcc8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x2cdcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x2cdccc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cdcd0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cdcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2cdcd4:
    // 0x2cdcd4: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CDCD4u;
    {
        const bool branch_taken_0x2cdcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cdcd4) {
            ctx->pc = 0x2CDCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCD4u;
            // 0x2cdcd8: 0x8d8b0000  lw          $t3, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD10u;
            goto label_2cdd10;
        }
    }
    ctx->pc = 0x2CDCDCu;
    // 0x2cdcdc: 0x0  nop
    ctx->pc = 0x2cdcdcu;
    // NOP
label_2cdce0:
    // 0x2cdce0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2cdce4: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x2cdce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2cdce8: 0x244a0001  addiu       $t2, $v0, 0x1
    ctx->pc = 0x2cdce8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2cdcec:
    // 0x2cdcec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2cdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2cdcf0: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x2cdcf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cdcf4: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2CDCF4u;
    {
        const bool branch_taken_0x2cdcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcf4) {
            ctx->pc = 0x2CDEC8u;
            goto label_2cdec8;
        }
    }
    ctx->pc = 0x2CDCFCu;
    // 0x2cdcfc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2cdcfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2cdd00: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cdd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cdd04: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2CDD04u;
    {
        const bool branch_taken_0x2cdd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD04u;
        // 0x2cdd08: 0xad8a0000  sw          $t2, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd04) {
            ctx->pc = 0x2CDCE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdce0;
        }
    }
    ctx->pc = 0x2CDD0Cu;
    // 0x2cdd0c: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x2cdd0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2cdd10:
    // 0x2cdd10: 0x25630002  addiu       $v1, $t3, 0x2
    ctx->pc = 0x2cdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x2cdd14: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x2cdd14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cdd18: 0x14600070  bnez        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x2CDD18u;
    {
        const bool branch_taken_0x2cdd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD18u;
        // 0x2cdd1c: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd18) {
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
    ctx->pc = 0x2CDD20u;
    // 0x2cdd20: 0x10b2821  addu        $a1, $t0, $t3
    ctx->pc = 0x2cdd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x2cdd24: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cdd28: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x2cdd28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2cdd2c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CDD2Cu;
    {
        const bool branch_taken_0x2cdd2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD2Cu;
        // 0x2cdd30: 0x91430000  lbu         $v1, 0x0($t2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd2c) {
            ctx->pc = 0x2CDD50u;
            goto label_2cdd50;
        }
    }
    ctx->pc = 0x2CDD34u;
    // 0x2cdd34: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2cdd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cdd38: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x2cdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2cdd3c:
    // 0x2cdd3c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2cdd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2cdd40: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2cdd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2cdd44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cdd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cdd48: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2CDD48u;
    {
        const bool branch_taken_0x2cdd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD48u;
        // 0x2cdd4c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd48) {
            ctx->pc = 0x2CDDFCu;
            goto label_2cddfc;
        }
    }
    ctx->pc = 0x2CDD50u;
label_2cdd50:
    // 0x2cdd50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cdd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cdd54: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2cdd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2cdd58: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDD58u;
    {
        const bool branch_taken_0x2cdd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD58u;
        // 0x2cdd5c: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd58) {
            ctx->pc = 0x2CDD88u;
            goto label_2cdd88;
        }
    }
    ctx->pc = 0x2CDD60u;
    // 0x2cdd60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cdd64: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2cdd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2cdd68: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2CDD68u;
    {
        const bool branch_taken_0x2cdd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD68u;
        // 0x2cdd6c: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd68) {
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
    ctx->pc = 0x2CDD70u;
    // 0x2cdd70: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x2cdd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2cdd74: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2cdd74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2cdd78: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2cdd78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2cdd7c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2CDD7Cu;
    {
        const bool branch_taken_0x2cdd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD7Cu;
        // 0x2cdd80: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd7c) {
            ctx->pc = 0x2CDED0u;
            goto label_2cded0;
        }
    }
    ctx->pc = 0x2CDD84u;
    // 0x2cdd84: 0x0  nop
    ctx->pc = 0x2cdd84u;
    // NOP
label_2cdd88:
    // 0x2cdd88: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CDD88u;
    {
        const bool branch_taken_0x2cdd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cdd88) {
            ctx->pc = 0x2CDD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD88u;
            // 0x2cdd8c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDDC0u;
            goto label_2cddc0;
        }
    }
    ctx->pc = 0x2CDD90u;
    // 0x2cdd90: 0x25630003  addiu       $v1, $t3, 0x3
    ctx->pc = 0x2cdd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x2cdd94: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x2cdd94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cdd98: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x2CDD98u;
    {
        const bool branch_taken_0x2cdd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD98u;
        // 0x2cdd9c: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd98) {
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
    ctx->pc = 0x2CDDA0u;
    // 0x2cdda0: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x2cdda0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x2cdda4: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x2cdda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2cdda8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2cdda8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2cddac: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2cddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2cddb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cddb4:
    // 0x2cddb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CDDB4u;
    {
        const bool branch_taken_0x2cddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDB4u;
        // 0x2cddb8: 0x24420003  addiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddb4) {
            ctx->pc = 0x2CDDFCu;
            goto label_2cddfc;
        }
    }
    ctx->pc = 0x2CDDBCu;
    // 0x2cddbc: 0x0  nop
    ctx->pc = 0x2cddbcu;
    // NOP
label_2cddc0:
    // 0x2cddc0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CDDC0u;
    {
        const bool branch_taken_0x2cddc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDC0u;
        // 0x2cddc4: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddc0) {
            ctx->pc = 0x2CDE08u;
            goto label_2cde08;
        }
    }
    ctx->pc = 0x2CDDC8u;
    // 0x2cddc8: 0x25630004  addiu       $v1, $t3, 0x4
    ctx->pc = 0x2cddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2cddcc: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x2cddccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cddd0: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CDDD0u;
    {
        const bool branch_taken_0x2cddd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDD0u;
        // 0x2cddd4: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddd0) {
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
    ctx->pc = 0x2CDDD8u;
    // 0x2cddd8: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x2cddd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x2cdddc: 0x24a40004  addiu       $a0, $a1, 0x4
    ctx->pc = 0x2cdddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cdde0: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x2cdde0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2cdde4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2cdde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2cdde8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cdde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cddec: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2cddecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2cddf0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2cddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2cddf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cddf8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2cddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2cddfc:
    // 0x2cddfc: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2cddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2cde00: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2CDE00u;
    {
        const bool branch_taken_0x2cde00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE00u;
        // 0x2cde04: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde00) {
            ctx->pc = 0x2CDED0u;
            goto label_2cded0;
        }
    }
    ctx->pc = 0x2CDE08u;
label_2cde08:
    // 0x2cde08: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CDE08u;
    {
        const bool branch_taken_0x2cde08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE08u;
        // 0x2cde0c: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde08) {
            ctx->pc = 0x2CDE60u;
            goto label_2cde60;
        }
    }
    ctx->pc = 0x2CDE10u;
    // 0x2cde10: 0x25630005  addiu       $v1, $t3, 0x5
    ctx->pc = 0x2cde10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x2cde14: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x2cde14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cde18: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2CDE18u;
    {
        const bool branch_taken_0x2cde18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE18u;
        // 0x2cde1c: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde18) {
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
    ctx->pc = 0x2CDE20u;
    // 0x2cde20: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x2cde20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x2cde24: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x2cde24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x2cde28: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x2cde28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2cde2c: 0x91440003  lbu         $a0, 0x3($t2)
    ctx->pc = 0x2cde2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x2cde30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2cde30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2cde34: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2cde34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cde38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cde38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cde3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2cde3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2cde40: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2cde40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2cde44: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2cde44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2cde48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cde48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cde4c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2cde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2cde50: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2cde50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2cde54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2CDE54u;
    {
        const bool branch_taken_0x2cde54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE54u;
        // 0x2cde58: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde54) {
            ctx->pc = 0x2CDED0u;
            goto label_2cded0;
        }
    }
    ctx->pc = 0x2CDE5Cu;
    // 0x2cde5c: 0x0  nop
    ctx->pc = 0x2cde5cu;
    // NOP
label_2cde60:
    // 0x2cde60: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CDE60u;
    {
        const bool branch_taken_0x2cde60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE60u;
        // 0x2cde64: 0x25630006  addiu       $v1, $t3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde60) {
            ctx->pc = 0x2CDEC0u;
            goto label_2cdec0;
        }
    }
    ctx->pc = 0x2CDE68u;
    // 0x2cde68: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x2cde68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cde6c: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CDE6Cu;
    {
        const bool branch_taken_0x2cde6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE6Cu;
        // 0x2cde70: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde6c) {
            ctx->pc = 0x2CDEDCu;
            goto label_2cdedc;
        }
    }
    ctx->pc = 0x2CDE74u;
    // 0x2cde74: 0x91440002  lbu         $a0, 0x2($t2)
    ctx->pc = 0x2cde74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2cde78: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x2cde78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x2cde7c: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x2cde7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x2cde80: 0x91430003  lbu         $v1, 0x3($t2)
    ctx->pc = 0x2cde80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x2cde84: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2cde84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2cde88: 0x91450004  lbu         $a1, 0x4($t2)
    ctx->pc = 0x2cde88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2cde8c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2cde8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2cde90: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2cde90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cde94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cde94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cde98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2cde98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cde9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cde9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cdea0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2cdea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2cdea4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2cdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2cdea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cdeac: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2cdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2cdeb0: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2cdeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2cdeb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDEB4u;
    {
        const bool branch_taken_0x2cdeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEB4u;
        // 0x2cdeb8: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdeb4) {
            ctx->pc = 0x2CDED0u;
            goto label_2cded0;
        }
    }
    ctx->pc = 0x2CDEBCu;
    // 0x2cdebc: 0x0  nop
    ctx->pc = 0x2cdebcu;
    // NOP
label_2cdec0:
    // 0x2cdec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEC0u;
        // 0x2cdec4: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDEC8u;
label_2cdec8:
    // 0x2cdec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEC8u;
        // 0x2cdecc: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDED0u;
label_2cded0:
    // 0x2cded0: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x2cded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2cded4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x2cded4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cded8: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x2cded8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_2cdedc:
    // 0x2cdedc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDEE4u;
    // 0x2cdee4: 0x0  nop
    ctx->pc = 0x2cdee4u;
    // NOP
}
