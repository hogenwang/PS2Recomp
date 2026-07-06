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

// Function: sub_001AC580
// Address: 0x1ac580 - 0x1ac798
void sub_001AC580_0x1ac580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC580_0x1ac580");
#endif

    switch (ctx->pc) {
        case 0x1ac6a0u: goto label_1ac6a0;
        case 0x1ac708u: goto label_1ac708;
        default: break;
    }

    ctx->pc = 0x1ac580u;

label_1ac580:
    // 0x1ac580: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1ac580u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac584: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ac584u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac588: 0x91820007  lbu         $v0, 0x7($t4)
    ctx->pc = 0x1ac588u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x1ac58c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1ac58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac590: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ac594: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x1ac594u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac598: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1ac598u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ac59c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x1ac59cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac5a0: 0x91820009  lbu         $v0, 0x9($t4)
    ctx->pc = 0x1ac5a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x1ac5a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1ac5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1ac5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ac5ac: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x1ac5acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac5b0: 0x9583002a  lhu         $v1, 0x2A($t4)
    ctx->pc = 0x1ac5b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 42)));
    // 0x1ac5b4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1ac5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1ac5b8: 0x91840008  lbu         $a0, 0x8($t4)
    ctx->pc = 0x1ac5b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1ac5bc: 0x108f0018  beq         $a0, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC5BCu;
    {
        const bool branch_taken_0x1ac5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1AC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5BCu;
        // 0x1ac5c0: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5bc) {
            ctx->pc = 0x1AC620u;
            goto label_1ac620;
        }
    }
    ctx->pc = 0x1AC5C4u;
    // 0x1ac5c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC5C4u;
    {
        const bool branch_taken_0x1ac5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac5c4) {
            ctx->pc = 0x1AC5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC5C4u;
            // 0x1ac5c8: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC5E0u;
            goto label_1ac5e0;
        }
    }
    ctx->pc = 0x1AC5CCu;
    // 0x1ac5cc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC5CCu;
    {
        const bool branch_taken_0x1ac5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac5cc) {
            ctx->pc = 0x1AC5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC5CCu;
            // 0x1ac5d0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC5F0u;
            goto label_1ac5f0;
        }
    }
    ctx->pc = 0x1AC5D4u;
    // 0x1ac5d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1AC5D4u;
    {
        const bool branch_taken_0x1ac5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5D4u;
        // 0x1ac5d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5d4) {
            ctx->pc = 0x1AC668u;
            goto label_1ac668;
        }
    }
    ctx->pc = 0x1AC5DCu;
    // 0x1ac5dc: 0x0  nop
    ctx->pc = 0x1ac5dcu;
    // NOP
label_1ac5e0:
    // 0x1ac5e0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AC5E0u;
    {
        const bool branch_taken_0x1ac5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac5e0) {
            ctx->pc = 0x1AC5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC5E0u;
            // 0x1ac5e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC668u;
            goto label_1ac668;
        }
    }
    ctx->pc = 0x1AC5E8u;
    // 0x1ac5e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AC5E8u;
    {
        const bool branch_taken_0x1ac5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5E8u;
        // 0x1ac5ec: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5e8) {
            ctx->pc = 0x1AC640u;
            goto label_1ac640;
        }
    }
    ctx->pc = 0x1AC5F0u;
label_1ac5f0:
    // 0x1ac5f0: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1ac5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ac5f4: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x1ac5f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1ac5f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ac5fc: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x1ac5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac600: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x1ac600u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x1ac604: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1ac604u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ac608: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x1ac608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1ac60c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1ac60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1ac610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac614: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AC614u;
    {
        const bool branch_taken_0x1ac614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC614u;
        // 0x1ac618: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac614) {
            ctx->pc = 0x1AC660u;
            goto label_1ac660;
        }
    }
    ctx->pc = 0x1AC61Cu;
    // 0x1ac61c: 0x0  nop
    ctx->pc = 0x1ac61cu;
    // NOP
label_1ac620:
    // 0x1ac620: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ac620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ac624: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x1ac624u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac628: 0x81430000  lb          $v1, 0x0($t2)
    ctx->pc = 0x1ac628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1ac62c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x1ac62cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ac630: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x1ac630u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x1ac634: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x1ac634u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ac638: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC638u;
    {
        const bool branch_taken_0x1ac638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC638u;
        // 0x1ac63c: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac638) {
            ctx->pc = 0x1AC660u;
            goto label_1ac660;
        }
    }
    ctx->pc = 0x1AC640u;
label_1ac640:
    // 0x1ac640: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ac640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac644: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1ac644u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ac648: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x1ac648u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1ac64c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x1ac64cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac650: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x1ac650u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x1ac654: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x1ac654u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ac658: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1ac65c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ac660:
    // 0x1ac660: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1ac660u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1ac664: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ac664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac668:
    // 0x1ac668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ac668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac66c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x1ac66cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ac670: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ac670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac674: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x1ac674u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x1ac678: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ac678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ac67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac680: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x1ac680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1ac684: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1ac684u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1ac688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ac688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ac68c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1ac68cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1ac690: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1ac690u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1ac694: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x1ac694u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ac698: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC698u;
        // 0x1ac69c: 0xa0e60000  sb          $a2, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC6A0u;
label_1ac6a0:
    // 0x1ac6a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ac6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac6a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1ac6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1ac6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6b0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1ac6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1ac6b4: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x1ac6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1ac6b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ac6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ac6bc: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x1ac6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ac6c0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1ac6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1ac6c4: 0x2613000f  addiu       $s3, $s0, 0xF
    ctx->pc = 0x1ac6c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1ac6c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ac6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ac6cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ac6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6d0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1ac6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ac6d4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1ac6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1ac6d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ac6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6dc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1ac6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac6e0: 0x2603009c  addiu       $v1, $s0, 0x9C
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x1ac6e4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1ac6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ac6e8: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x1ac6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x1ac6ec: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1ac6ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6f0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1ac6f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6f4: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x1ac6f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1ac6f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ac6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ac6fc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ac6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1ac700: 0xc06b160  jal         func_1AC580
    ctx->pc = 0x1AC700u;
    SET_GPR_U32(ctx, 31, 0x1AC708u);
    ctx->pc = 0x1AC704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC700u;
    // 0x1ac704: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC580u;
    goto label_1ac580;
    ctx->pc = 0x1AC708u;
label_1ac708:
    // 0x1ac708: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC708u;
    {
        const bool branch_taken_0x1ac708 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac708) {
            ctx->pc = 0x1AC70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC708u;
            // 0x1ac70c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC718u;
            goto label_1ac718;
        }
    }
    ctx->pc = 0x1AC710u;
    // 0x1ac710: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AC710u;
    {
        const bool branch_taken_0x1ac710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC710u;
        // 0x1ac714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac710) {
            ctx->pc = 0x1AC778u;
            goto label_1ac778;
        }
    }
    ctx->pc = 0x1AC718u;
label_1ac718:
    // 0x1ac718: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ac718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ac71c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ac71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ac720: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ac720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1ac724: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ac724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1ac728: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1ac728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ac72c: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1ac72cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ac730: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1ac730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ac734: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1ac734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ac738: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ac73c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1ac73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1ac740: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1ac740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x1ac744: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ac744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac748: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x1ac748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ac74c: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1ac74cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ac750: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac754: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x1ac754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x1ac758: 0xa6030098  sh          $v1, 0x98($s0)
    ctx->pc = 0x1ac758u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ac75c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ac75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac760: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1ac760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x1ac764: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x1ac764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x1ac768: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1ac768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1ac76c: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x1ac76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
    // 0x1ac770: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1ac770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1ac774: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1ac774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1ac778:
    // 0x1ac778: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1ac778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac77c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1ac77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac780: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ac780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac784: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1ac784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ac788: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ac788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac78c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC78Cu;
        // 0x1ac790: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC794u;
    // 0x1ac794: 0x0  nop
    ctx->pc = 0x1ac794u;
    // NOP
    if (ctx->pc == 0x1ac794u) { ctx->pc = 0x1ac798u; }
}
