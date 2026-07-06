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

// Function: sub_0033CC90
// Address: 0x33cc90 - 0x33cfc0
void sub_0033CC90_0x33cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CC90_0x33cc90");
#endif

    switch (ctx->pc) {
        case 0x33cd50u: goto label_33cd50;
        case 0x33cda0u: goto label_33cda0;
        case 0x33ce34u: goto label_33ce34;
        case 0x33ce70u: goto label_33ce70;
        case 0x33ce84u: goto label_33ce84;
        case 0x33ced4u: goto label_33ced4;
        case 0x33ceecu: goto label_33ceec;
        case 0x33cf28u: goto label_33cf28;
        default: break;
    }

    ctx->pc = 0x33cc90u;

    // 0x33cc90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33cc94: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x33cc94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x33cc98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33cc9c: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x33cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x33cca0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33cca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33cca4: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x33cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x33cca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33ccac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x33ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x33ccb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33ccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33ccb4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ccb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ccbc: 0x240804b4  addiu       $t0, $zero, 0x4B4
    ctx->pc = 0x33ccbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33ccc0: 0x906a9730  lbu         $t2, -0x68D0($v1)
    ctx->pc = 0x33ccc0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940464)));
    // 0x33ccc4: 0x24e7db53  addiu       $a3, $a3, -0x24AD
    ctx->pc = 0x33ccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957907));
    // 0x33ccc8: 0x24c6dc9d  addiu       $a2, $a2, -0x2363
    ctx->pc = 0x33ccc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958237));
    // 0x33cccc: 0x24a58b11  addiu       $a1, $a1, -0x74EF
    ctx->pc = 0x33ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937361));
    // 0x33ccd0: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x33ccd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x33ccd4: 0x1484818  mult        $t1, $t2, $t0
    ctx->pc = 0x33ccd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x33ccd8: 0xa902b  sltu        $s2, $zero, $t2
    ctx->pc = 0x33ccd8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x33ccdc: 0x72488818  mult1       $s1, $s2, $t0
    ctx->pc = 0x33ccdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x33cce0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cce4: 0x24638b10  addiu       $v1, $v1, -0x74F0
    ctx->pc = 0x33cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937360));
    // 0x33cce8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x33cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x33ccec: 0x1240c0  sll         $t0, $s2, 3
    ctx->pc = 0x33ccecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x33ccf0: 0x699821  addu        $s3, $v1, $t1
    ctx->pc = 0x33ccf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33ccf4: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x33ccf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x33ccf8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x33ccf8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x33ccfc: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x33ccfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x33cd00: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x33cd00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x33cd04: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x33cd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x33cd08: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x33cd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x33cd0c: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x33cd0cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33cd10: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x33cd10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x33cd14: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x33cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x33cd18: 0x90d00000  lbu         $s0, 0x0($a2)
    ctx->pc = 0x33cd18u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33cd1c: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x33CD1Cu;
    {
        const bool branch_taken_0x33cd1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD1Cu;
        // 0x33cd20: 0xa0b00000  sb          $s0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd1c) {
            ctx->pc = 0x33CF8Cu;
            goto label_33cf8c;
        }
    }
    ctx->pc = 0x33CD24u;
    // 0x33cd24: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33cd28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33cd28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33cd2c: 0x24a54e90  addiu       $a1, $a1, 0x4E90
    ctx->pc = 0x33cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20112));
    // 0x33cd30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33cd34: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x33cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33cd38: 0x800008  jr          $a0
    ctx->pc = 0x33CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33CD40u: goto label_33cd40;
            case 0x33CDECu: goto label_33cdec;
            case 0x33CE18u: goto label_33ce18;
            case 0x33CE8Cu: goto label_33ce8c;
            case 0x33CEDCu: goto label_33cedc;
            case 0x33CF8Cu: goto label_33cf8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CD40u;
label_33cd40:
    // 0x33cd40: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x33cd40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x33cd44: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cd48: 0x18800025  blez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x33CD48u;
    {
        const bool branch_taken_0x33cd48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x33CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD48u;
        // 0x33cd4c: 0xac60e8c8  sw          $zero, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd48) {
            ctx->pc = 0x33CDE0u;
            goto label_33cde0;
        }
    }
    ctx->pc = 0x33CD50u;
label_33cd50:
    // 0x33cd50: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cd54: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33cd58: 0x90679730  lbu         $a3, -0x68D0($v1)
    ctx->pc = 0x33cd58u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940464)));
    // 0x33cd5c: 0x240504b4  addiu       $a1, $zero, 0x4B4
    ctx->pc = 0x33cd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33cd60: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x33cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x33cd64: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cd68: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x33cd68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33cd6c: 0x8c66e8c8  lw          $a2, -0x1738($v1)
    ctx->pc = 0x33cd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33cd70: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x33cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x33cd74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33cd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33cd78: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x33cd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33cd7c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x33cd7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33cd80: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x33CD80u;
    {
        const bool branch_taken_0x33cd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cd80) {
            ctx->pc = 0x33CDB8u;
            goto label_33cdb8;
        }
    }
    ctx->pc = 0x33CD88u;
    // 0x33cd88: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x33cd88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33cd8c: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x33cd8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x33cd90: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CD90u;
    {
        const bool branch_taken_0x33cd90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33cd90) {
            ctx->pc = 0x33CDA8u;
            goto label_33cda8;
        }
    }
    ctx->pc = 0x33CD98u;
    // 0x33cd98: 0xc0cf3f0  jal         func_33CFC0
    ctx->pc = 0x33CD98u;
    SET_GPR_U32(ctx, 31, 0x33CDA0u);
    ctx->pc = 0x33CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFC0u, 0x33CD98u, 0x33CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CDA0u;
label_33cda0:
    // 0x33cda0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33CDA0u;
    {
        const bool branch_taken_0x33cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cda0) {
            ctx->pc = 0x33CDC8u;
            goto label_33cdc8;
        }
    }
    ctx->pc = 0x33CDA8u;
label_33cda8:
    // 0x33cda8: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x33cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33cdac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cdb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33CDB0u;
    {
        const bool branch_taken_0x33cdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDB0u;
        // 0x33cdb4: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdb0) {
            ctx->pc = 0x33CDC8u;
            goto label_33cdc8;
        }
    }
    ctx->pc = 0x33CDB8u;
label_33cdb8:
    // 0x33cdb8: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x33cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33cdbc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cdc0: 0xac64e8c8  sw          $a0, -0x1738($v1)
    ctx->pc = 0x33cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
    // 0x33cdc4: 0x0  nop
    ctx->pc = 0x33cdc4u;
    // NOP
label_33cdc8:
    // 0x33cdc8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cdcc: 0x8c64e8c8  lw          $a0, -0x1738($v1)
    ctx->pc = 0x33cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33cdd0: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x33cdd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x33cdd4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x33cdd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33cdd8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x33CDD8u;
    {
        const bool branch_taken_0x33cdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cdd8) {
            ctx->pc = 0x33CD50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33cd50;
        }
    }
    ctx->pc = 0x33CDE0u;
label_33cde0:
    // 0x33cde0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cde4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x33CDE4u;
    {
        const bool branch_taken_0x33cde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDE4u;
        // 0x33cde8: 0xac60e8c8  sw          $zero, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cde4) {
            ctx->pc = 0x33CF8Cu;
            goto label_33cf8c;
        }
    }
    ctx->pc = 0x33CDECu;
label_33cdec:
    // 0x33cdec: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33cdf0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cdf4: 0x24848b12  addiu       $a0, $a0, -0x74EE
    ctx->pc = 0x33cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937362));
    // 0x33cdf8: 0x24638b14  addiu       $v1, $v1, -0x74EC
    ctx->pc = 0x33cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937364));
    // 0x33cdfc: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x33cdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x33ce00: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33ce04: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x33ce04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33ce08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ce0c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x33ce0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33ce10: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x33CE10u;
    {
        const bool branch_taken_0x33ce10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE10u;
        // 0x33ce14: 0xac60e8c8  sw          $zero, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce10) {
            ctx->pc = 0x33CF8Cu;
            goto label_33cf8c;
        }
    }
    ctx->pc = 0x33CE18u;
label_33ce18:
    // 0x33ce18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33ce1c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33ce20: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x33ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x33ce24: 0x24844e70  addiu       $a0, $a0, 0x4E70
    ctx->pc = 0x33ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    // 0x33ce28: 0xac40e8c8  sw          $zero, -0x1738($v0)
    ctx->pc = 0x33ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 0));
    // 0x33ce2c: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x33CE2Cu;
    SET_GPR_U32(ctx, 31, 0x33CE34u);
    ctx->pc = 0x33CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE2Cu;
    // 0x33ce30: 0x24a509c0  addiu       $a1, $a1, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x33CE2Cu, 0x33CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE34u;
label_33ce34:
    // 0x33ce34: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x33ce34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x33ce38: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CE38u;
    {
        const bool branch_taken_0x33ce38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE38u;
        // 0x33ce3c: 0x24a509c0  addiu       $a1, $a1, 0x9C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce38) {
            ctx->pc = 0x33CE48u;
            goto label_33ce48;
        }
    }
    ctx->pc = 0x33CE40u;
    // 0x33ce40: 0x24a27fff  addiu       $v0, $a1, 0x7FFF
    ctx->pc = 0x33ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x33ce44: 0x24456613  addiu       $a1, $v0, 0x6613
    ctx->pc = 0x33ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26131));
label_33ce48:
    // 0x33ce48: 0x240604b2  addiu       $a2, $zero, 0x4B2
    ctx->pc = 0x33ce48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
    // 0x33ce4c: 0x3402e612  ori         $v0, $zero, 0xE612
    ctx->pc = 0x33ce4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58898);
    // 0x33ce50: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x33ce50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33ce54: 0x72421818  mult1       $v1, $s2, $v0
    ctx->pc = 0x33ce54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ce58: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33ce5c: 0x2442b290  addiu       $v0, $v0, -0x4D70
    ctx->pc = 0x33ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
    // 0x33ce60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ce64: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x33ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33ce68: 0xc049c48  jal         func_127120
    ctx->pc = 0x33CE68u;
    SET_GPR_U32(ctx, 31, 0x33CE70u);
    ctx->pc = 0x33CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE68u;
    // 0x33ce6c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x33CE68u, 0x33CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE70u;
label_33ce70:
    // 0x33ce70: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33ce74: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x33ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x33ce78: 0x24844e80  addiu       $a0, $a0, 0x4E80
    ctx->pc = 0x33ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20096));
    // 0x33ce7c: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x33CE7Cu;
    SET_GPR_U32(ctx, 31, 0x33CE84u);
    ctx->pc = 0x33CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CE7Cu;
    // 0x33ce80: 0x24a509c0  addiu       $a1, $a1, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x33CE7Cu, 0x33CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CE84u;
label_33ce84:
    // 0x33ce84: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x33CE84u;
    {
        const bool branch_taken_0x33ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE84u;
        // 0x33ce88: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce84) {
            ctx->pc = 0x33CEE0u;
            goto label_33cee0;
        }
    }
    ctx->pc = 0x33CE8Cu;
label_33ce8c:
    // 0x33ce8c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x33ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33ce90: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x33ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x33ce94: 0x3403e612  ori         $v1, $zero, 0xE612
    ctx->pc = 0x33ce94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58898);
    // 0x33ce98: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x33ce98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33ce9c: 0x2433818  mult        $a3, $s2, $v1
    ctx->pc = 0x33ce9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x33cea0: 0x240204b2  addiu       $v0, $zero, 0x4B2
    ctx->pc = 0x33cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
    // 0x33cea4: 0x2484b290  addiu       $a0, $a0, -0x4D70
    ctx->pc = 0x33cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947472));
    // 0x33cea8: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x33cea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x33ceac: 0x72021818  mult1       $v1, $s0, $v0
    ctx->pc = 0x33ceacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33ceb0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x33ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33ceb4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33ceb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33cebc: 0x24428b12  addiu       $v0, $v0, -0x74EE
    ctx->pc = 0x33cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937362));
    // 0x33cec0: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x33cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x33cec4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33cec8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x33cec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cecc: 0xc049c48  jal         func_127120
    ctx->pc = 0x33CECCu;
    SET_GPR_U32(ctx, 31, 0x33CED4u);
    ctx->pc = 0x33CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CECCu;
    // 0x33ced0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x33CECCu, 0x33CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CED4u;
label_33ced4:
    // 0x33ced4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x33CED4u;
    {
        const bool branch_taken_0x33ced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CED4u;
        // 0x33ced8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ced4) {
            ctx->pc = 0x33CF90u;
            goto label_33cf90;
        }
    }
    ctx->pc = 0x33CEDCu;
label_33cedc:
    // 0x33cedc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33cee0:
    // 0x33cee0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33cee4: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33CEE4u;
    SET_GPR_U32(ctx, 31, 0x33CEECu);
    ctx->pc = 0x33CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CEE4u;
    // 0x33cee8: 0xa04395c0  sb          $v1, -0x6A40($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BA10u, 0x33CEE4u, 0x33CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CEECu;
label_33ceec:
    // 0x33ceec: 0x3402e612  ori         $v0, $zero, 0xE612
    ctx->pc = 0x33ceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58898);
    // 0x33cef0: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x33cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x33cef4: 0x2423818  mult        $a3, $s2, $v0
    ctx->pc = 0x33cef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x33cef8: 0x24a5b290  addiu       $a1, $a1, -0x4D70
    ctx->pc = 0x33cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947472));
    // 0x33cefc: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x33cefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x33cf00: 0x240204b2  addiu       $v0, $zero, 0x4B2
    ctx->pc = 0x33cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
    // 0x33cf04: 0x72021818  mult1       $v1, $s0, $v0
    ctx->pc = 0x33cf04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33cf08: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33cf0c: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x33cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x33cf10: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x33cf10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33cf14: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x33cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33cf18: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x33cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33cf1c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x33cf1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33cf20: 0xc049c48  jal         func_127120
    ctx->pc = 0x33CF20u;
    SET_GPR_U32(ctx, 31, 0x33CF28u);
    ctx->pc = 0x33CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CF20u;
    // 0x33cf24: 0x26650002  addiu       $a1, $s3, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x33CF20u, 0x33CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CF28u;
label_33cf28:
    // 0x33cf28: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cf2c: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x33cf2cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33cf30: 0x24638b12  addiu       $v1, $v1, -0x74EE
    ctx->pc = 0x33cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937362));
    // 0x33cf34: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x33cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33cf38: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x33cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x33cf3c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x33cf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x33cf40: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x33cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x33cf44: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33cf44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33cf48: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cf4c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x33cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33cf50: 0x24638af0  addiu       $v1, $v1, -0x7510
    ctx->pc = 0x33cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937328));
    // 0x33cf54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33cf58: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x33cf58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33cf5c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cf60: 0x24638af2  addiu       $v1, $v1, -0x750E
    ctx->pc = 0x33cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937330));
    // 0x33cf64: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x33cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33cf68: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cf6c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x33cf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33cf70: 0x24638af4  addiu       $v1, $v1, -0x750C
    ctx->pc = 0x33cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937332));
    // 0x33cf74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33cf78: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x33cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x33cf7c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cf80: 0xac60e8c8  sw          $zero, -0x1738($v1)
    ctx->pc = 0x33cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 0));
    // 0x33cf84: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33cf88: 0xac60e8b0  sw          $zero, -0x1750($v1)
    ctx->pc = 0x33cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961328), GPR_U32(ctx, 0));
label_33cf8c:
    // 0x33cf8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cf90:
    // 0x33cf90: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33cf94: 0xa0649740  sb          $a0, -0x68C0($v1)
    ctx->pc = 0x33cf94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940480), (uint8_t)GPR_U32(ctx, 4));
    // 0x33cf98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33cf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33cf9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33cf9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33cfa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33cfa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cfa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33cfa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cfa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33cfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cfac: 0x3e00008  jr          $ra
    ctx->pc = 0x33CFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFACu;
        // 0x33cfb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CFB4u;
    // 0x33cfb4: 0x0  nop
    ctx->pc = 0x33cfb4u;
    // NOP
    // 0x33cfb8: 0x0  nop
    ctx->pc = 0x33cfb8u;
    // NOP
    // 0x33cfbc: 0x0  nop
    ctx->pc = 0x33cfbcu;
    // NOP
}
