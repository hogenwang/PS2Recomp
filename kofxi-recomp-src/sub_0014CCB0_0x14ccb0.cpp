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

// Function: sub_0014CCB0
// Address: 0x14ccb0 - 0x14ce20
void sub_0014CCB0_0x14ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CCB0_0x14ccb0");
#endif

    switch (ctx->pc) {
        case 0x14ccdcu: goto label_14ccdc;
        case 0x14cd24u: goto label_14cd24;
        default: break;
    }

    ctx->pc = 0x14ccb0u;

    // 0x14ccb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14ccb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ccb8: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x14ccb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x14ccbc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14ccc0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14CCC0u;
    {
        const bool branch_taken_0x14ccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCC0u;
        // 0x14ccc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ccc0) {
            ctx->pc = 0x14CD18u;
            goto label_14cd18;
        }
    }
    ctx->pc = 0x14CCC8u;
    // 0x14ccc8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14cccc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x14ccccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x14ccd0: 0x9043daf8  lbu         $v1, -0x2508($v0)
    ctx->pc = 0x14ccd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x14ccd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ccd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ccd8: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x14ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
label_14ccdc:
    // 0x14ccdc: 0x9082000a  lbu         $v0, 0xA($a0)
    ctx->pc = 0x14ccdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x14cce0: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14CCE0u;
    {
        const bool branch_taken_0x14cce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x14cce0) {
            ctx->pc = 0x14CCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CCE0u;
            // 0x14cce4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CD04u;
            goto label_14cd04;
        }
    }
    ctx->pc = 0x14CCE8u;
    // 0x14cce8: 0xc51004  sllv        $v0, $a1, $a2
    ctx->pc = 0x14cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x14ccec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14ccecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ccf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CCF0u;
    {
        const bool branch_taken_0x14ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccf0) {
            ctx->pc = 0x14CD00u;
            goto label_14cd00;
        }
    }
    ctx->pc = 0x14CCF8u;
    // 0x14ccf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14CCF8u;
    {
        const bool branch_taken_0x14ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CCF8u;
        // 0x14ccfc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ccf8) {
            ctx->pc = 0x14CD48u;
            goto label_14cd48;
        }
    }
    ctx->pc = 0x14CD00u;
label_14cd00:
    // 0x14cd00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14cd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_14cd04:
    // 0x14cd04: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x14cd04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14cd08: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14CD08u;
    {
        const bool branch_taken_0x14cd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD08u;
        // 0x14cd0c: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd08) {
            ctx->pc = 0x14CCDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ccdc;
        }
    }
    ctx->pc = 0x14CD10u;
    // 0x14cd10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14CD10u;
    {
        const bool branch_taken_0x14cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd10) {
            ctx->pc = 0x14CD48u;
            goto label_14cd48;
        }
    }
    ctx->pc = 0x14CD18u;
label_14cd18:
    // 0x14cd18: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x14cd1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14cd1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd20: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x14cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
label_14cd24:
    // 0x14cd24: 0x9082000a  lbu         $v0, 0xA($a0)
    ctx->pc = 0x14cd24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x14cd28: 0x50450003  beql        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CD28u;
    {
        const bool branch_taken_0x14cd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x14cd28) {
            ctx->pc = 0x14CD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CD28u;
            // 0x14cd2c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CD38u;
            goto label_14cd38;
        }
    }
    ctx->pc = 0x14CD30u;
    // 0x14cd30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14CD30u;
    {
        const bool branch_taken_0x14cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD30u;
        // 0x14cd34: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd30) {
            ctx->pc = 0x14CD48u;
            goto label_14cd48;
        }
    }
    ctx->pc = 0x14CD38u;
label_14cd38:
    // 0x14cd38: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x14cd38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14cd3c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14CD3Cu;
    {
        const bool branch_taken_0x14cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD3Cu;
        // 0x14cd40: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd3c) {
            ctx->pc = 0x14CD24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14cd24;
        }
    }
    ctx->pc = 0x14CD44u;
    // 0x14cd44: 0x0  nop
    ctx->pc = 0x14cd44u;
    // NOP
label_14cd48:
    // 0x14cd48: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14cd4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14cd50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x14cd54: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x14cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14cd58: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x14cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x14cd5c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14cd60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14cd64: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x14cd64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x14cd68: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x14cd68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14cd6c: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x14cd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14cd70: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x14cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x14cd74: 0x90c40020  lbu         $a0, 0x20($a2)
    ctx->pc = 0x14cd74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x14cd78: 0x90c30040  lbu         $v1, 0x40($a2)
    ctx->pc = 0x14cd78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x14cd7c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14cd7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14cd80: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x14CD80u;
    {
        const bool branch_taken_0x14cd80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD80u;
        // 0x14cd84: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd80) {
            ctx->pc = 0x14CDE0u;
            goto label_14cde0;
        }
    }
    ctx->pc = 0x14CD88u;
    // 0x14cd88: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14cd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14cd8c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x14cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14cd90: 0x50a2001e  beql        $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14CD90u;
    {
        const bool branch_taken_0x14cd90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd90) {
            ctx->pc = 0x14CD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CD90u;
            // 0x14cd94: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CE0Cu;
            goto label_14ce0c;
        }
    }
    ctx->pc = 0x14CD98u;
    // 0x14cd98: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x14cd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14cd9c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CD9Cu;
    {
        const bool branch_taken_0x14cd9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd9c) {
            ctx->pc = 0x14CDB0u;
            goto label_14cdb0;
        }
    }
    ctx->pc = 0x14CDA4u;
    // 0x14cda4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14cda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cda8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CDA8u;
    {
        const bool branch_taken_0x14cda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14cda8) {
            ctx->pc = 0x14CDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CDA8u;
            // 0x14cdac: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CDBCu;
            goto label_14cdbc;
        }
    }
    ctx->pc = 0x14CDB0u;
label_14cdb0:
    // 0x14cdb0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x14cdb4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14CDB4u;
    {
        const bool branch_taken_0x14cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdb4) {
            ctx->pc = 0x14CE0Cu;
            goto label_14ce0c;
        }
    }
    ctx->pc = 0x14CDBCu;
label_14cdbc:
    // 0x14cdbc: 0x50a20013  beql        $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14CDBCu;
    {
        const bool branch_taken_0x14cdbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cdbc) {
            ctx->pc = 0x14CDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CDBCu;
            // 0x14cdc0: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CE0Cu;
            goto label_14ce0c;
        }
    }
    ctx->pc = 0x14CDC4u;
    // 0x14cdc4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CDC4u;
    {
        const bool branch_taken_0x14cdc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cdc4) {
            ctx->pc = 0x14CDD4u;
            goto label_14cdd4;
        }
    }
    ctx->pc = 0x14CDCCu;
    // 0x14cdcc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CDCCu;
    {
        const bool branch_taken_0x14cdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14cdcc) {
            ctx->pc = 0x14CDE0u;
            goto label_14cde0;
        }
    }
    ctx->pc = 0x14CDD4u;
label_14cdd4:
    // 0x14cdd4: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x14cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x14cdd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14CDD8u;
    {
        const bool branch_taken_0x14cdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdd8) {
            ctx->pc = 0x14CE0Cu;
            goto label_14ce0c;
        }
    }
    ctx->pc = 0x14CDE0u;
label_14cde0:
    // 0x14cde0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x14cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x14cde4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14cde8: 0x2463db53  addiu       $v1, $v1, -0x24AD
    ctx->pc = 0x14cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957907));
    // 0x14cdec: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x14cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
    // 0x14cdf0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14cdf4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x14cdf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14cdf8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14cdfc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x14cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14ce00: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x14ce00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ce04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ce08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14ce08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_14ce0c:
    // 0x14ce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CE14u;
    // 0x14ce14: 0x0  nop
    ctx->pc = 0x14ce14u;
    // NOP
    // 0x14ce18: 0x0  nop
    ctx->pc = 0x14ce18u;
    // NOP
    // 0x14ce1c: 0x0  nop
    ctx->pc = 0x14ce1cu;
    // NOP
}
