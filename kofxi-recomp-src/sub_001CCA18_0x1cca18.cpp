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

// Function: sub_001CCA18
// Address: 0x1cca18 - 0x1ccba0
void sub_001CCA18_0x1cca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA18_0x1cca18");
#endif

    switch (ctx->pc) {
        case 0x1cca18u: goto label_1cca18;
        case 0x1cca1cu: goto label_1cca1c;
        case 0x1cca20u: goto label_1cca20;
        case 0x1cca24u: goto label_1cca24;
        case 0x1cca28u: goto label_1cca28;
        case 0x1cca2cu: goto label_1cca2c;
        case 0x1cca30u: goto label_1cca30;
        case 0x1cca34u: goto label_1cca34;
        case 0x1cca38u: goto label_1cca38;
        case 0x1cca3cu: goto label_1cca3c;
        case 0x1cca40u: goto label_1cca40;
        case 0x1cca44u: goto label_1cca44;
        case 0x1cca48u: goto label_1cca48;
        case 0x1cca4cu: goto label_1cca4c;
        case 0x1cca50u: goto label_1cca50;
        case 0x1cca54u: goto label_1cca54;
        case 0x1cca58u: goto label_1cca58;
        case 0x1cca5cu: goto label_1cca5c;
        case 0x1cca60u: goto label_1cca60;
        case 0x1cca64u: goto label_1cca64;
        case 0x1cca68u: goto label_1cca68;
        case 0x1cca6cu: goto label_1cca6c;
        case 0x1cca70u: goto label_1cca70;
        case 0x1cca74u: goto label_1cca74;
        case 0x1cca78u: goto label_1cca78;
        case 0x1cca7cu: goto label_1cca7c;
        case 0x1cca80u: goto label_1cca80;
        case 0x1cca84u: goto label_1cca84;
        case 0x1cca88u: goto label_1cca88;
        case 0x1cca8cu: goto label_1cca8c;
        case 0x1cca90u: goto label_1cca90;
        case 0x1cca94u: goto label_1cca94;
        case 0x1cca98u: goto label_1cca98;
        case 0x1cca9cu: goto label_1cca9c;
        case 0x1ccaa0u: goto label_1ccaa0;
        case 0x1ccaa4u: goto label_1ccaa4;
        case 0x1ccaa8u: goto label_1ccaa8;
        case 0x1ccaacu: goto label_1ccaac;
        case 0x1ccab0u: goto label_1ccab0;
        case 0x1ccab4u: goto label_1ccab4;
        case 0x1ccab8u: goto label_1ccab8;
        case 0x1ccabcu: goto label_1ccabc;
        case 0x1ccac0u: goto label_1ccac0;
        case 0x1ccac4u: goto label_1ccac4;
        case 0x1ccac8u: goto label_1ccac8;
        case 0x1ccaccu: goto label_1ccacc;
        case 0x1ccad0u: goto label_1ccad0;
        case 0x1ccad4u: goto label_1ccad4;
        case 0x1ccad8u: goto label_1ccad8;
        case 0x1ccadcu: goto label_1ccadc;
        case 0x1ccae0u: goto label_1ccae0;
        case 0x1ccae4u: goto label_1ccae4;
        case 0x1ccae8u: goto label_1ccae8;
        case 0x1ccaecu: goto label_1ccaec;
        case 0x1ccaf0u: goto label_1ccaf0;
        case 0x1ccaf4u: goto label_1ccaf4;
        case 0x1ccaf8u: goto label_1ccaf8;
        case 0x1ccafcu: goto label_1ccafc;
        case 0x1ccb00u: goto label_1ccb00;
        case 0x1ccb04u: goto label_1ccb04;
        case 0x1ccb08u: goto label_1ccb08;
        case 0x1ccb0cu: goto label_1ccb0c;
        case 0x1ccb10u: goto label_1ccb10;
        case 0x1ccb14u: goto label_1ccb14;
        case 0x1ccb18u: goto label_1ccb18;
        case 0x1ccb1cu: goto label_1ccb1c;
        case 0x1ccb20u: goto label_1ccb20;
        case 0x1ccb24u: goto label_1ccb24;
        case 0x1ccb28u: goto label_1ccb28;
        case 0x1ccb2cu: goto label_1ccb2c;
        case 0x1ccb30u: goto label_1ccb30;
        case 0x1ccb34u: goto label_1ccb34;
        case 0x1ccb38u: goto label_1ccb38;
        case 0x1ccb3cu: goto label_1ccb3c;
        case 0x1ccb40u: goto label_1ccb40;
        case 0x1ccb44u: goto label_1ccb44;
        case 0x1ccb48u: goto label_1ccb48;
        case 0x1ccb4cu: goto label_1ccb4c;
        case 0x1ccb50u: goto label_1ccb50;
        case 0x1ccb54u: goto label_1ccb54;
        case 0x1ccb58u: goto label_1ccb58;
        case 0x1ccb5cu: goto label_1ccb5c;
        case 0x1ccb60u: goto label_1ccb60;
        case 0x1ccb64u: goto label_1ccb64;
        case 0x1ccb68u: goto label_1ccb68;
        case 0x1ccb6cu: goto label_1ccb6c;
        case 0x1ccb70u: goto label_1ccb70;
        case 0x1ccb74u: goto label_1ccb74;
        case 0x1ccb78u: goto label_1ccb78;
        case 0x1ccb7cu: goto label_1ccb7c;
        case 0x1ccb80u: goto label_1ccb80;
        case 0x1ccb84u: goto label_1ccb84;
        case 0x1ccb88u: goto label_1ccb88;
        case 0x1ccb8cu: goto label_1ccb8c;
        case 0x1ccb90u: goto label_1ccb90;
        case 0x1ccb94u: goto label_1ccb94;
        case 0x1ccb98u: goto label_1ccb98;
        case 0x1ccb9cu: goto label_1ccb9c;
        default: break;
    }

    ctx->pc = 0x1cca18u;

label_1cca18:
    // 0x1cca18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cca1c:
    // 0x1cca1c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1cca1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cca20:
    // 0x1cca20: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_1cca24:
    if (ctx->pc == 0x1CCA24u) {
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA28u;
        goto label_1cca28;
    }
    ctx->pc = 0x1CCA20u;
    {
        const bool branch_taken_0x1cca20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca20) {
            ctx->pc = 0x1CCA48u;
            goto label_1cca48;
        }
    }
    ctx->pc = 0x1CCA28u;
label_1cca28:
    // 0x1cca28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cca28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cca2c:
    // 0x1cca2c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cca30:
    // 0x1cca30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cca30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cca34:
    // 0x1cca34: 0x2484bc80  addiu       $a0, $a0, -0x4380
    ctx->pc = 0x1cca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950016));
label_1cca38:
    // 0x1cca38: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x1cca38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
label_1cca3c:
    // 0x1cca3c: 0x8073006  j           func_1CC018
label_1cca40:
    if (ctx->pc == 0x1CCA40u) {
        ctx->pc = 0x1CCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA3Cu;
        // 0x1cca40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA44u;
        goto label_1cca44;
    }
    ctx->pc = 0x1CCA3Cu;
    ctx->pc = 0x1CCA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA3Cu;
    // 0x1cca40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCA44u;
label_1cca44:
    // 0x1cca44: 0x0  nop
    ctx->pc = 0x1cca44u;
    // NOP
label_1cca48:
    // 0x1cca48: 0x81020004  lb          $v0, 0x4($t0)
    ctx->pc = 0x1cca48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_1cca4c:
    // 0x1cca4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1cca50:
    if (ctx->pc == 0x1CCA50u) {
        ctx->pc = 0x1CCA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA4Cu;
        // 0x1cca50: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA54u;
        goto label_1cca54;
    }
    ctx->pc = 0x1CCA4Cu;
    {
        const bool branch_taken_0x1cca4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA4Cu;
        // 0x1cca50: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca4c) {
            ctx->pc = 0x1CCA70u;
            goto label_1cca70;
        }
    }
    ctx->pc = 0x1CCA54u;
label_1cca54:
    // 0x1cca54: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cca54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cca58:
    // 0x1cca58: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cca58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cca5c:
    // 0x1cca5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cca5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cca60:
    // 0x1cca60: 0x2484bc90  addiu       $a0, $a0, -0x4370
    ctx->pc = 0x1cca60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950032));
label_1cca64:
    // 0x1cca64: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1cca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_1cca68:
    // 0x1cca68: 0x8073006  j           func_1CC018
label_1cca6c:
    if (ctx->pc == 0x1CCA6Cu) {
        ctx->pc = 0x1CCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA68u;
        // 0x1cca6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA70u;
        goto label_1cca70;
    }
    ctx->pc = 0x1CCA68u;
    ctx->pc = 0x1CCA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA68u;
    // 0x1cca6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCA70u;
label_1cca70:
    // 0x1cca70: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1cca74:
    if (ctx->pc == 0x1CCA74u) {
        ctx->pc = 0x1CCA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA70u;
        // 0x1cca74: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA78u;
        goto label_1cca78;
    }
    ctx->pc = 0x1CCA70u;
    {
        const bool branch_taken_0x1cca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca70) {
            ctx->pc = 0x1CCA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCA70u;
            // 0x1cca74: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCAE0u;
            goto label_1ccae0;
        }
    }
    ctx->pc = 0x1CCA78u;
label_1cca78:
    // 0x1cca78: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x1cca78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1cca7c:
    // 0x1cca7c: 0x1940002c  blez        $t2, . + 4 + (0x2C << 2)
label_1cca80:
    if (ctx->pc == 0x1CCA80u) {
        ctx->pc = 0x1CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA7Cu;
        // 0x1cca80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA84u;
        goto label_1cca84;
    }
    ctx->pc = 0x1CCA7Cu;
    {
        const bool branch_taken_0x1cca7c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA7Cu;
        // 0x1cca80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca7c) {
            ctx->pc = 0x1CCB30u;
            goto label_1ccb30;
        }
    }
    ctx->pc = 0x1CCA84u;
label_1cca84:
    // 0x1cca84: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cca88:
    // 0x1cca88: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
label_1cca8c:
    if (ctx->pc == 0x1CCA8Cu) {
        ctx->pc = 0x1CCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA88u;
        // 0x1cca8c: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA90u;
        goto label_1cca90;
    }
    ctx->pc = 0x1CCA88u;
    {
        const bool branch_taken_0x1cca88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA88u;
        // 0x1cca8c: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca88) {
            ctx->pc = 0x1CCB30u;
            goto label_1ccb30;
        }
    }
    ctx->pc = 0x1CCA90u;
label_1cca90:
    // 0x1cca90: 0x250b0008  addiu       $t3, $t0, 0x8
    ctx->pc = 0x1cca90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1cca94:
    // 0x1cca94: 0x81020005  lb          $v0, 0x5($t0)
    ctx->pc = 0x1cca94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_1cca98:
    // 0x1cca98: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x1cca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1cca9c:
    // 0x1cca9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccaa0:
    // 0x1ccaa0: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
label_1ccaa4:
    if (ctx->pc == 0x1CCAA4u) {
        ctx->pc = 0x1CCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAA0u;
        // 0x1ccaa4: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAA8u;
        goto label_1ccaa8;
    }
    ctx->pc = 0x1CCAA0u;
    {
        const bool branch_taken_0x1ccaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAA0u;
        // 0x1ccaa4: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaa0) {
            ctx->pc = 0x1CCAD0u;
            goto label_1ccad0;
        }
    }
    ctx->pc = 0x1CCAA8u;
label_1ccaa8:
    // 0x1ccaa8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_1ccaac:
    if (ctx->pc == 0x1CCAACu) {
        ctx->pc = 0x1CCAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAA8u;
        // 0x1ccaac: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAB0u;
        goto label_1ccab0;
    }
    ctx->pc = 0x1CCAA8u;
    {
        const bool branch_taken_0x1ccaa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAA8u;
        // 0x1ccaac: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaa8) {
            ctx->pc = 0x1CCAD0u;
            goto label_1ccad0;
        }
    }
    ctx->pc = 0x1CCAB0u;
label_1ccab0:
    // 0x1ccab0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1ccab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1ccab4:
    // 0x1ccab4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_1ccab8:
    if (ctx->pc == 0x1CCAB8u) {
        ctx->pc = 0x1CCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAB4u;
        // 0x1ccab8: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCABCu;
        goto label_1ccabc;
    }
    ctx->pc = 0x1CCAB4u;
    {
        const bool branch_taken_0x1ccab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ccab4) {
            ctx->pc = 0x1CCAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCAB4u;
            // 0x1ccab8: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCAD4u;
            goto label_1ccad4;
        }
    }
    ctx->pc = 0x1CCABCu;
label_1ccabc:
    // 0x1ccabc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1ccabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1ccac0:
    // 0x1ccac0: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x1ccac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_1ccac4:
    // 0x1ccac4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1ccac8:
    // 0x1ccac8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ccacc:
    if (ctx->pc == 0x1CCACCu) {
        ctx->pc = 0x1CCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAC8u;
        // 0x1ccacc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAD0u;
        goto label_1ccad0;
    }
    ctx->pc = 0x1CCAC8u;
    {
        const bool branch_taken_0x1ccac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAC8u;
        // 0x1ccacc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccac8) {
            ctx->pc = 0x1CCB30u;
            goto label_1ccb30;
        }
    }
    ctx->pc = 0x1CCAD0u;
label_1ccad0:
    // 0x1ccad0: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_1ccad4:
    // 0x1ccad4: 0x54e0000a  bnel        $a3, $zero, . + 4 + (0xA << 2)
label_1ccad8:
    if (ctx->pc == 0x1CCAD8u) {
        ctx->pc = 0x1CCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAD4u;
        // 0x1ccad8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCADCu;
        goto label_1ccadc;
    }
    ctx->pc = 0x1CCAD4u;
    {
        const bool branch_taken_0x1ccad4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccad4) {
            ctx->pc = 0x1CCAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCAD4u;
            // 0x1ccad8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCB00u;
            goto label_1ccb00;
        }
    }
    ctx->pc = 0x1CCADCu;
label_1ccadc:
    // 0x1ccadc: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x1ccadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_1ccae0:
    // 0x1ccae0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1ccae4:
    if (ctx->pc == 0x1CCAE4u) {
        ctx->pc = 0x1CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAE0u;
        // 0x1ccae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAE8u;
        goto label_1ccae8;
    }
    ctx->pc = 0x1CCAE0u;
    {
        const bool branch_taken_0x1ccae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAE0u;
        // 0x1ccae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccae0) {
            ctx->pc = 0x1CCB30u;
            goto label_1ccb30;
        }
    }
    ctx->pc = 0x1CCAE8u;
label_1ccae8:
    // 0x1ccae8: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x1ccae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_1ccaec:
    // 0x1ccaec: 0x40f809  jalr        $v0
label_1ccaf0:
    if (ctx->pc == 0x1CCAF0u) {
        ctx->pc = 0x1CCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAECu;
        // 0x1ccaf0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAF4u;
        goto label_1ccaf4;
    }
    ctx->pc = 0x1CCAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCAF4u);
        ctx->pc = 0x1CCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAECu;
        // 0x1ccaf0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCAECu, 0x1CCAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCAF4u;
label_1ccaf4:
    // 0x1ccaf4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ccaf8:
    if (ctx->pc == 0x1CCAF8u) {
        ctx->pc = 0x1CCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAF4u;
        // 0x1ccaf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAFCu;
        goto label_1ccafc;
    }
    ctx->pc = 0x1CCAF4u;
    {
        const bool branch_taken_0x1ccaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAF4u;
        // 0x1ccaf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaf4) {
            ctx->pc = 0x1CCB30u;
            goto label_1ccb30;
        }
    }
    ctx->pc = 0x1CCAFCu;
label_1ccafc:
    // 0x1ccafc: 0x0  nop
    ctx->pc = 0x1ccafcu;
    // NOP
label_1ccb00:
    // 0x1ccb00: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ccb04:
    // 0x1ccb04: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1ccb08:
    // 0x1ccb08: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x1ccb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1ccb0c:
    // 0x1ccb0c: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x1ccb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1ccb10:
    // 0x1ccb10: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x1ccb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ccb14:
    // 0x1ccb14: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x1ccb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ccb18:
    // 0x1ccb18: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x1ccb18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_1ccb1c:
    // 0x1ccb1c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1ccb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1ccb20:
    // 0x1ccb20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ccb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ccb24:
    // 0x1ccb24: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1ccb24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_1ccb28:
    // 0x1ccb28: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1ccb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1ccb2c:
    // 0x1ccb2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccb30:
    // 0x1ccb30: 0x3e00008  jr          $ra
label_1ccb34:
    if (ctx->pc == 0x1CCB34u) {
        ctx->pc = 0x1CCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB30u;
        // 0x1ccb34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB38u;
        goto label_1ccb38;
    }
    ctx->pc = 0x1CCB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB30u;
        // 0x1ccb34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCB38u;
label_1ccb38:
    // 0x1ccb38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ccb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ccb3c:
    // 0x1ccb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ccb40:
    // 0x1ccb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb44:
    // 0x1ccb44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ccb48:
    // 0x1ccb48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ccb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb4c:
    // 0x1ccb4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ccb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ccb50:
    // 0x1ccb50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ccb50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb54:
    // 0x1ccb54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ccb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ccb58:
    // 0x1ccb58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ccb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ccb5c:
    // 0x1ccb5c: 0xc0729fa  jal         func_1CA7E8
label_1ccb60:
    if (ctx->pc == 0x1CCB60u) {
        ctx->pc = 0x1CCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB5Cu;
        // 0x1ccb60: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB64u;
        goto label_1ccb64;
    }
    ctx->pc = 0x1CCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCB64u);
    ctx->pc = 0x1CCB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB5Cu;
    // 0x1ccb60: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CCB5Cu, 0x1CCB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB64u;
label_1ccb64:
    // 0x1ccb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb68:
    // 0x1ccb68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb6c:
    // 0x1ccb6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ccb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb70:
    // 0x1ccb70: 0xc0732e8  jal         func_1CCBA0
label_1ccb74:
    if (ctx->pc == 0x1CCB74u) {
        ctx->pc = 0x1CCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB70u;
        // 0x1ccb74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB78u;
        goto label_1ccb78;
    }
    ctx->pc = 0x1CCB70u;
    SET_GPR_U32(ctx, 31, 0x1CCB78u);
    ctx->pc = 0x1CCB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB70u;
    // 0x1ccb74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCBA0u, 0x1CCB70u, 0x1CCB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB78u;
label_1ccb78:
    // 0x1ccb78: 0xc072a00  jal         func_1CA800
label_1ccb7c:
    if (ctx->pc == 0x1CCB7Cu) {
        ctx->pc = 0x1CCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB78u;
        // 0x1ccb7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB80u;
        goto label_1ccb80;
    }
    ctx->pc = 0x1CCB78u;
    SET_GPR_U32(ctx, 31, 0x1CCB80u);
    ctx->pc = 0x1CCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB78u;
    // 0x1ccb7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CCB78u, 0x1CCB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB80u;
label_1ccb80:
    // 0x1ccb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ccb84:
    // 0x1ccb84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ccb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb88:
    // 0x1ccb88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ccb88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccb8c:
    // 0x1ccb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccb90:
    // 0x1ccb90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ccb90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ccb94:
    // 0x1ccb94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ccb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ccb98:
    // 0x1ccb98: 0x3e00008  jr          $ra
label_1ccb9c:
    if (ctx->pc == 0x1CCB9Cu) {
        ctx->pc = 0x1CCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB98u;
        // 0x1ccb9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBA0u;
        goto label_fallthrough_0x1ccb98;
    }
    ctx->pc = 0x1CCB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB98u;
        // 0x1ccb9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ccb98:
    ctx->pc = 0x1CCBA0u;
}
