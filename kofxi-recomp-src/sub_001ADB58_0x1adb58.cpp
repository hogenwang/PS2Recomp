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

// Function: sub_001ADB58
// Address: 0x1adb58 - 0x1add78
void sub_001ADB58_0x1adb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADB58_0x1adb58");
#endif

    switch (ctx->pc) {
        case 0x1adba0u: goto label_1adba0;
        default: break;
    }

    ctx->pc = 0x1adb58u;

    // 0x1adb58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1adb5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1adb60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1adb60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1adb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1adb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1adb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1adb70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1adb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb74: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1adb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1adb78: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1adb78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb7c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1adb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1adb80: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1adb80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb84: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1adb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1adb88: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1adb88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1adb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1adb90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1adb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adb94: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1adb94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1adb98: 0xc06b5a0  jal         func_1AD680
    ctx->pc = 0x1ADB98u;
    SET_GPR_U32(ctx, 31, 0x1ADBA0u);
    ctx->pc = 0x1ADB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB98u;
    // 0x1adb9c: 0x27a70001  addiu       $a3, $sp, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD680u, 0x1ADB98u, 0x1ADBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADBA0u;
label_1adba0:
    // 0x1adba0: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1ADBA0u;
    {
        const bool branch_taken_0x1adba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adba0) {
            ctx->pc = 0x1ADBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADBA0u;
            // 0x1adba4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADD54u;
            goto label_1add54;
        }
    }
    ctx->pc = 0x1ADBA8u;
    // 0x1adba8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1adba8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adbac: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1adbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1adbb0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1adbb4: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x1adbb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1adbb8: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x1adbb8u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x1adbbc: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x1adbbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1adbc0: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x1ADBC0u;
    {
        const bool branch_taken_0x1adbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adbc0) {
            ctx->pc = 0x1ADBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADBC0u;
            // 0x1adbc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADD50u;
            goto label_1add50;
        }
    }
    ctx->pc = 0x1ADBC8u;
    // 0x1adbc8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1adbc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1adbcc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1adbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1adbd0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1adbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1adbd4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1adbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1adbd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adbdc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1adbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1adbe0: 0x1465002b  bne         $v1, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1ADBE0u;
    {
        const bool branch_taken_0x1adbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ADBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBE0u;
        // 0x1adbe4: 0x240aff00  addiu       $t2, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbe0) {
            ctx->pc = 0x1ADC90u;
            goto label_1adc90;
        }
    }
    ctx->pc = 0x1ADBE8u;
    // 0x1adbe8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1adbe8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1adbec: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1adbf0: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x1adbf0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1adbf4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1adbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1adbf8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1adbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1adbfc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1adbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1adc00: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1adc04: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1adc04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1adc08: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x1adc08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1adc0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADC0Cu;
    {
        const bool branch_taken_0x1adc0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC0Cu;
        // 0x1adc10: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc0c) {
            ctx->pc = 0x1ADC20u;
            goto label_1adc20;
        }
    }
    ctx->pc = 0x1ADC14u;
    // 0x1adc14: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1ADC14u;
    {
        const bool branch_taken_0x1adc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC14u;
        // 0x1adc18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc14) {
            ctx->pc = 0x1ADD50u;
            goto label_1add50;
        }
    }
    ctx->pc = 0x1ADC1Cu;
    // 0x1adc1c: 0x0  nop
    ctx->pc = 0x1adc1cu;
    // NOP
label_1adc20:
    // 0x1adc20: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x1adc20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1adc24: 0x67480a  movz        $t1, $v1, $a3
    ctx->pc = 0x1adc24u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x1adc28: 0x3c084149  lui         $t0, 0x4149
    ctx->pc = 0x1adc28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16713 << 16));
    // 0x1adc2c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1adc2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1adc30: 0x35084e46  ori         $t0, $t0, 0x4E46
    ctx->pc = 0x1adc30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20038);
    // 0x1adc34: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x1adc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1adc38: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1adc3c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1adc3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1adc40: 0x25260014  addiu       $a2, $t1, 0x14
    ctx->pc = 0x1adc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x1adc44: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1adc44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1adc48: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1adc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1adc4c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1adc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1adc50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1adc50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1adc54: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1adc54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1adc58: 0xc4480b  movn        $t1, $a2, $a0
    ctx->pc = 0x1adc58u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x1adc5c: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x1adc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1adc60: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x1adc60u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1adc64: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1adc64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1adc68: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1adc68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1adc6c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1adc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1adc70: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x1adc70u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1adc74: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1adc74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1adc78: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1adc78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1adc7c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1adc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1adc80: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1adc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1adc84: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adc88: 0x10680003  beq         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADC88u;
    {
        const bool branch_taken_0x1adc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1ADC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC88u;
        // 0x1adc8c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc88) {
            ctx->pc = 0x1ADC98u;
            goto label_1adc98;
        }
    }
    ctx->pc = 0x1ADC90u;
label_1adc90:
    // 0x1adc90: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1ADC90u;
    {
        const bool branch_taken_0x1adc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC90u;
        // 0x1adc94: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc90) {
            ctx->pc = 0x1ADD50u;
            goto label_1add50;
        }
    }
    ctx->pc = 0x1ADC98u;
label_1adc98:
    // 0x1adc98: 0x2091821  addu        $v1, $s0, $t1
    ctx->pc = 0x1adc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1adc9c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1adca0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1adca4: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x1adca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x1adca8: 0x2094021  addu        $t0, $s0, $t1
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1adcac: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1adcacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1adcb0: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x1adcb0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1adcb4: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x1adcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1adcb8: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x1adcb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1adcbc: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1adcbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1adcc0: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1adcc4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1adcc8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1adcc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1adccc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1adcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1adcd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adcd4: 0x2092821  addu        $a1, $s0, $t1
    ctx->pc = 0x1adcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1adcd8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1adcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1adcdc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1adce0: 0x2093021  addu        $a2, $s0, $t1
    ctx->pc = 0x1adce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1adce4: 0x1303821  addu        $a3, $t1, $s0
    ctx->pc = 0x1adce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x1adce8: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x1adce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1adcec: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x1adcecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1adcf0: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x1adcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1adcf4: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x1adcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1adcf8: 0xb2830007  sdl         $v1, 0x7($s4)
    ctx->pc = 0x1adcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1adcfc: 0xb6830000  sdr         $v1, 0x0($s4)
    ctx->pc = 0x1adcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add00: 0xb284000f  sdl         $a0, 0xF($s4)
    ctx->pc = 0x1add00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add04: 0xb6840008  sdr         $a0, 0x8($s4)
    ctx->pc = 0x1add04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1add08: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1add08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1add0c: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1add0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1add10: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1add10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1add14: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1add14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1add18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1add18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1add1c: 0xa6a40000  sh          $a0, 0x0($s5)
    ctx->pc = 0x1add1cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1add20: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1add20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1add24: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x1add24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1add28: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1add28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1add2c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1add2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1add30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1add30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1add34: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x1add34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1add38: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1add38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1add3c: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x1add3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1add40: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1add44: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1add44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1add48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1add48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1add4c: 0xa6640002  sh          $a0, 0x2($s3)
    ctx->pc = 0x1add4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 4));
label_1add50:
    // 0x1add50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1add50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1add54:
    // 0x1add54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1add54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1add58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1add58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1add5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1add5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1add60: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1add60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1add64: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1add64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1add68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1add68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1add6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD6Cu;
        // 0x1add70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADD74u;
    // 0x1add74: 0x0  nop
    ctx->pc = 0x1add74u;
    // NOP
}
