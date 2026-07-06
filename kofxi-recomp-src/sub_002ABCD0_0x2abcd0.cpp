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

// Function: sub_002ABCD0
// Address: 0x2abcd0 - 0x2abeb8
void sub_002ABCD0_0x2abcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABCD0_0x2abcd0");
#endif

    switch (ctx->pc) {
        case 0x2abcd0u: goto label_2abcd0;
        case 0x2abcd4u: goto label_2abcd4;
        case 0x2abcd8u: goto label_2abcd8;
        case 0x2abcdcu: goto label_2abcdc;
        case 0x2abce0u: goto label_2abce0;
        case 0x2abce4u: goto label_2abce4;
        case 0x2abce8u: goto label_2abce8;
        case 0x2abcecu: goto label_2abcec;
        case 0x2abcf0u: goto label_2abcf0;
        case 0x2abcf4u: goto label_2abcf4;
        case 0x2abcf8u: goto label_2abcf8;
        case 0x2abcfcu: goto label_2abcfc;
        case 0x2abd00u: goto label_2abd00;
        case 0x2abd04u: goto label_2abd04;
        case 0x2abd08u: goto label_2abd08;
        case 0x2abd0cu: goto label_2abd0c;
        case 0x2abd10u: goto label_2abd10;
        case 0x2abd14u: goto label_2abd14;
        case 0x2abd18u: goto label_2abd18;
        case 0x2abd1cu: goto label_2abd1c;
        case 0x2abd20u: goto label_2abd20;
        case 0x2abd24u: goto label_2abd24;
        case 0x2abd28u: goto label_2abd28;
        case 0x2abd2cu: goto label_2abd2c;
        case 0x2abd30u: goto label_2abd30;
        case 0x2abd34u: goto label_2abd34;
        case 0x2abd38u: goto label_2abd38;
        case 0x2abd3cu: goto label_2abd3c;
        case 0x2abd40u: goto label_2abd40;
        case 0x2abd44u: goto label_2abd44;
        case 0x2abd48u: goto label_2abd48;
        case 0x2abd4cu: goto label_2abd4c;
        case 0x2abd50u: goto label_2abd50;
        case 0x2abd54u: goto label_2abd54;
        case 0x2abd58u: goto label_2abd58;
        case 0x2abd5cu: goto label_2abd5c;
        case 0x2abd60u: goto label_2abd60;
        case 0x2abd64u: goto label_2abd64;
        case 0x2abd68u: goto label_2abd68;
        case 0x2abd6cu: goto label_2abd6c;
        case 0x2abd70u: goto label_2abd70;
        case 0x2abd74u: goto label_2abd74;
        case 0x2abd78u: goto label_2abd78;
        case 0x2abd7cu: goto label_2abd7c;
        case 0x2abd80u: goto label_2abd80;
        case 0x2abd84u: goto label_2abd84;
        case 0x2abd88u: goto label_2abd88;
        case 0x2abd8cu: goto label_2abd8c;
        case 0x2abd90u: goto label_2abd90;
        case 0x2abd94u: goto label_2abd94;
        case 0x2abd98u: goto label_2abd98;
        case 0x2abd9cu: goto label_2abd9c;
        case 0x2abda0u: goto label_2abda0;
        case 0x2abda4u: goto label_2abda4;
        case 0x2abda8u: goto label_2abda8;
        case 0x2abdacu: goto label_2abdac;
        case 0x2abdb0u: goto label_2abdb0;
        case 0x2abdb4u: goto label_2abdb4;
        case 0x2abdb8u: goto label_2abdb8;
        case 0x2abdbcu: goto label_2abdbc;
        case 0x2abdc0u: goto label_2abdc0;
        case 0x2abdc4u: goto label_2abdc4;
        case 0x2abdc8u: goto label_2abdc8;
        case 0x2abdccu: goto label_2abdcc;
        case 0x2abdd0u: goto label_2abdd0;
        case 0x2abdd4u: goto label_2abdd4;
        case 0x2abdd8u: goto label_2abdd8;
        case 0x2abddcu: goto label_2abddc;
        case 0x2abde0u: goto label_2abde0;
        case 0x2abde4u: goto label_2abde4;
        case 0x2abde8u: goto label_2abde8;
        case 0x2abdecu: goto label_2abdec;
        case 0x2abdf0u: goto label_2abdf0;
        case 0x2abdf4u: goto label_2abdf4;
        case 0x2abdf8u: goto label_2abdf8;
        case 0x2abdfcu: goto label_2abdfc;
        case 0x2abe00u: goto label_2abe00;
        case 0x2abe04u: goto label_2abe04;
        case 0x2abe08u: goto label_2abe08;
        case 0x2abe0cu: goto label_2abe0c;
        case 0x2abe10u: goto label_2abe10;
        case 0x2abe14u: goto label_2abe14;
        case 0x2abe18u: goto label_2abe18;
        case 0x2abe1cu: goto label_2abe1c;
        case 0x2abe20u: goto label_2abe20;
        case 0x2abe24u: goto label_2abe24;
        case 0x2abe28u: goto label_2abe28;
        case 0x2abe2cu: goto label_2abe2c;
        case 0x2abe30u: goto label_2abe30;
        case 0x2abe34u: goto label_2abe34;
        case 0x2abe38u: goto label_2abe38;
        case 0x2abe3cu: goto label_2abe3c;
        case 0x2abe40u: goto label_2abe40;
        case 0x2abe44u: goto label_2abe44;
        case 0x2abe48u: goto label_2abe48;
        case 0x2abe4cu: goto label_2abe4c;
        case 0x2abe50u: goto label_2abe50;
        case 0x2abe54u: goto label_2abe54;
        case 0x2abe58u: goto label_2abe58;
        case 0x2abe5cu: goto label_2abe5c;
        case 0x2abe60u: goto label_2abe60;
        case 0x2abe64u: goto label_2abe64;
        case 0x2abe68u: goto label_2abe68;
        case 0x2abe6cu: goto label_2abe6c;
        case 0x2abe70u: goto label_2abe70;
        case 0x2abe74u: goto label_2abe74;
        case 0x2abe78u: goto label_2abe78;
        case 0x2abe7cu: goto label_2abe7c;
        case 0x2abe80u: goto label_2abe80;
        case 0x2abe84u: goto label_2abe84;
        case 0x2abe88u: goto label_2abe88;
        case 0x2abe8cu: goto label_2abe8c;
        case 0x2abe90u: goto label_2abe90;
        case 0x2abe94u: goto label_2abe94;
        case 0x2abe98u: goto label_2abe98;
        case 0x2abe9cu: goto label_2abe9c;
        case 0x2abea0u: goto label_2abea0;
        case 0x2abea4u: goto label_2abea4;
        case 0x2abea8u: goto label_2abea8;
        case 0x2abeacu: goto label_2abeac;
        case 0x2abeb0u: goto label_2abeb0;
        case 0x2abeb4u: goto label_2abeb4;
        default: break;
    }

    ctx->pc = 0x2abcd0u;

label_2abcd0:
    // 0x2abcd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2abcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2abcd4:
    // 0x2abcd4: 0x24021070  addiu       $v0, $zero, 0x1070
    ctx->pc = 0x2abcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4208));
label_2abcd8:
    // 0x2abcd8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2abcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2abcdc:
    // 0x2abcdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2abcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2abce0:
    // 0x2abce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2abce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2abce4:
    // 0x2abce4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2abce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2abce8:
    // 0x2abce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2abcec:
    // 0x2abcec: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2abcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2abcf0:
    // 0x2abcf0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2abcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2abcf4:
    // 0x2abcf4: 0x14820036  bne         $a0, $v0, . + 4 + (0x36 << 2)
label_2abcf8:
    if (ctx->pc == 0x2ABCF8u) {
        ctx->pc = 0x2ABCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCF4u;
        // 0x2abcf8: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABCFCu;
        goto label_2abcfc;
    }
    ctx->pc = 0x2ABCF4u;
    {
        const bool branch_taken_0x2abcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCF4u;
        // 0x2abcf8: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abcf4) {
            ctx->pc = 0x2ABDD0u;
            goto label_2abdd0;
        }
    }
    ctx->pc = 0x2ABCFCu;
label_2abcfc:
    // 0x2abcfc: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2abcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2abd00:
    // 0x2abd00: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2abd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abd04:
    // 0x2abd04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2abd08:
    // 0x2abd08: 0x2053023  subu        $a2, $s0, $a1
    ctx->pc = 0x2abd08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2abd0c:
    // 0x2abd0c: 0xc0ac856  jal         func_2B2158
label_2abd10:
    if (ctx->pc == 0x2ABD10u) {
        ctx->pc = 0x2ABD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD0Cu;
        // 0x2abd10: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD14u;
        goto label_2abd14;
    }
    ctx->pc = 0x2ABD0Cu;
    SET_GPR_U32(ctx, 31, 0x2ABD14u);
    ctx->pc = 0x2ABD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD0Cu;
    // 0x2abd10: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2158u, 0x2ABD0Cu, 0x2ABD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD14u;
label_2abd14:
    // 0x2abd14: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2abd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2abd18:
    // 0x2abd18: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2abd18u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2abd1c:
    // 0x2abd1c: 0x50802a  slt         $s0, $v0, $s0
    ctx->pc = 0x2abd1cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2abd20:
    // 0x2abd20: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
label_2abd24:
    if (ctx->pc == 0x2ABD24u) {
        ctx->pc = 0x2ABD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD20u;
        // 0x2abd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD28u;
        goto label_2abd28;
    }
    ctx->pc = 0x2ABD20u;
    {
        const bool branch_taken_0x2abd20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD20u;
        // 0x2abd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd20) {
            ctx->pc = 0x2ABDFCu;
            goto label_2abdfc;
        }
    }
    ctx->pc = 0x2ABD28u;
label_2abd28:
    // 0x2abd28: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2abd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2abd2c:
    // 0x2abd2c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2abd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2abd30:
    // 0x2abd30: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2abd30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2abd34:
    // 0x2abd34: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2abd38:
    if (ctx->pc == 0x2ABD38u) {
        ctx->pc = 0x2ABD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD34u;
        // 0x2abd38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD3Cu;
        goto label_2abd3c;
    }
    ctx->pc = 0x2ABD34u;
    {
        const bool branch_taken_0x2abd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD34u;
        // 0x2abd38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd34) {
            ctx->pc = 0x2ABD80u;
            goto label_2abd80;
        }
    }
    ctx->pc = 0x2ABD3Cu;
label_2abd3c:
    // 0x2abd3c: 0x24021091  addiu       $v0, $zero, 0x1091
    ctx->pc = 0x2abd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4241));
label_2abd40:
    // 0x2abd40: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x2abd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2abd44:
    // 0x2abd44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2abd48:
    if (ctx->pc == 0x2ABD48u) {
        ctx->pc = 0x2ABD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD44u;
        // 0x2abd48: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD4Cu;
        goto label_2abd4c;
    }
    ctx->pc = 0x2ABD44u;
    {
        const bool branch_taken_0x2abd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD44u;
        // 0x2abd48: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd44) {
            ctx->pc = 0x2ABD54u;
            goto label_2abd54;
        }
    }
    ctx->pc = 0x2ABD4Cu;
label_2abd4c:
    // 0x2abd4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2abd50:
    if (ctx->pc == 0x2ABD50u) {
        ctx->pc = 0x2ABD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD4Cu;
        // 0x2abd50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD54u;
        goto label_2abd54;
    }
    ctx->pc = 0x2ABD4Cu;
    {
        const bool branch_taken_0x2abd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD4Cu;
        // 0x2abd50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd4c) {
            ctx->pc = 0x2ABD5Cu;
            goto label_2abd5c;
        }
    }
    ctx->pc = 0x2ABD54u;
label_2abd54:
    // 0x2abd54: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2abd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2abd58:
    // 0x2abd58: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x2abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2abd5c:
    // 0x2abd5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2abd60:
    if (ctx->pc == 0x2ABD60u) {
        ctx->pc = 0x2ABD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD5Cu;
        // 0x2abd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD64u;
        goto label_2abd64;
    }
    ctx->pc = 0x2ABD5Cu;
    {
        const bool branch_taken_0x2abd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD5Cu;
        // 0x2abd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd5c) {
            ctx->pc = 0x2ABD70u;
            goto label_2abd70;
        }
    }
    ctx->pc = 0x2ABD64u;
label_2abd64:
    // 0x2abd64: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x2abd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_2abd68:
    // 0x2abd68: 0x40f809  jalr        $v0
label_2abd6c:
    if (ctx->pc == 0x2ABD6Cu) {
        ctx->pc = 0x2ABD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD68u;
        // 0x2abd6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD70u;
        goto label_2abd70;
    }
    ctx->pc = 0x2ABD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABD70u);
        ctx->pc = 0x2ABD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD68u;
        // 0x2abd6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD68u, 0x2ABD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABD70u;
label_2abd70:
    // 0x2abd70: 0x24031050  addiu       $v1, $zero, 0x1050
    ctx->pc = 0x2abd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4176));
label_2abd74:
    // 0x2abd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abd78:
    // 0x2abd78: 0x10000048  b           . + 4 + (0x48 << 2)
label_2abd7c:
    if (ctx->pc == 0x2ABD7Cu) {
        ctx->pc = 0x2ABD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD78u;
        // 0x2abd7c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD80u;
        goto label_2abd80;
    }
    ctx->pc = 0x2ABD78u;
    {
        const bool branch_taken_0x2abd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD78u;
        // 0x2abd7c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd78) {
            ctx->pc = 0x2ABE9Cu;
            goto label_2abe9c;
        }
    }
    ctx->pc = 0x2ABD80u;
label_2abd80:
    // 0x2abd80: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2abd84:
    if (ctx->pc == 0x2ABD84u) {
        ctx->pc = 0x2ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD80u;
        // 0x2abd84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD88u;
        goto label_2abd88;
    }
    ctx->pc = 0x2ABD80u;
    {
        const bool branch_taken_0x2abd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD80u;
        // 0x2abd84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd80) {
            ctx->pc = 0x2ABDC8u;
            goto label_2abdc8;
        }
    }
    ctx->pc = 0x2ABD88u;
label_2abd88:
    // 0x2abd88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2abd8c:
    if (ctx->pc == 0x2ABD8Cu) {
        ctx->pc = 0x2ABD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD88u;
        // 0x2abd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD90u;
        goto label_2abd90;
    }
    ctx->pc = 0x2ABD88u;
    {
        const bool branch_taken_0x2abd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD88u;
        // 0x2abd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd88) {
            ctx->pc = 0x2ABDA8u;
            goto label_2abda8;
        }
    }
    ctx->pc = 0x2ABD90u;
label_2abd90:
    // 0x2abd90: 0xc0acbea  jal         func_2B2FA8
label_2abd94:
    if (ctx->pc == 0x2ABD94u) {
        ctx->pc = 0x2ABD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD90u;
        // 0x2abd94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABD98u;
        goto label_2abd98;
    }
    ctx->pc = 0x2ABD90u;
    SET_GPR_U32(ctx, 31, 0x2ABD98u);
    ctx->pc = 0x2ABD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD90u;
    // 0x2abd94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2ABD90u, 0x2ABD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD98u;
label_2abd98:
    // 0x2abd98: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2abd9c:
    // 0x2abd9c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2abd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2abda0:
    // 0x2abda0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2abda4:
    if (ctx->pc == 0x2ABDA4u) {
        ctx->pc = 0x2ABDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDA0u;
        // 0x2abda4: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABDA8u;
        goto label_2abda8;
    }
    ctx->pc = 0x2ABDA0u;
    {
        const bool branch_taken_0x2abda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDA0u;
        // 0x2abda4: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abda0) {
            ctx->pc = 0x2ABE5Cu;
            goto label_2abe5c;
        }
    }
    ctx->pc = 0x2ABDA8u;
label_2abda8:
    // 0x2abda8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2abdac:
    // 0x2abdac: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2abdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2abdb0:
    // 0x2abdb0: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x2abdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2abdb4:
    // 0x2abdb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2abdb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abdb8:
    // 0x2abdb8: 0xc0a5648  jal         func_295920
label_2abdbc:
    if (ctx->pc == 0x2ABDBCu) {
        ctx->pc = 0x2ABDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDB8u;
        // 0x2abdbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABDC0u;
        goto label_2abdc0;
    }
    ctx->pc = 0x2ABDB8u;
    SET_GPR_U32(ctx, 31, 0x2ABDC0u);
    ctx->pc = 0x2ABDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABDB8u;
    // 0x2abdbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ABDB8u, 0x2ABDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDC0u;
label_2abdc0:
    // 0x2abdc0: 0x10000036  b           . + 4 + (0x36 << 2)
label_2abdc4:
    if (ctx->pc == 0x2ABDC4u) {
        ctx->pc = 0x2ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDC0u;
        // 0x2abdc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABDC8u;
        goto label_2abdc8;
    }
    ctx->pc = 0x2ABDC0u;
    {
        const bool branch_taken_0x2abdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDC0u;
        // 0x2abdc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdc0) {
            ctx->pc = 0x2ABE9Cu;
            goto label_2abe9c;
        }
    }
    ctx->pc = 0x2ABDC8u;
label_2abdc8:
    // 0x2abdc8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2abdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2abdcc:
    // 0x2abdcc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2abdccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2abdd0:
    // 0x2abdd0: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2abdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2abdd4:
    // 0x2abdd4: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x2abdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2abdd8:
    // 0x2abdd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2abddc:
    // 0x2abddc: 0x2053023  subu        $a2, $s0, $a1
    ctx->pc = 0x2abddcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2abde0:
    // 0x2abde0: 0xc0ac856  jal         func_2B2158
label_2abde4:
    if (ctx->pc == 0x2ABDE4u) {
        ctx->pc = 0x2ABDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDE0u;
        // 0x2abde4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABDE8u;
        goto label_2abde8;
    }
    ctx->pc = 0x2ABDE0u;
    SET_GPR_U32(ctx, 31, 0x2ABDE8u);
    ctx->pc = 0x2ABDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABDE0u;
    // 0x2abde4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2158u, 0x2ABDE0u, 0x2ABDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABDE8u;
label_2abde8:
    // 0x2abde8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2abde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2abdec:
    // 0x2abdec: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2abdecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2abdf0:
    // 0x2abdf0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2abdf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2abdf4:
    // 0x2abdf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2abdf8:
    if (ctx->pc == 0x2ABDF8u) {
        ctx->pc = 0x2ABDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDF4u;
        // 0x2abdf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABDFCu;
        goto label_2abdfc;
    }
    ctx->pc = 0x2ABDF4u;
    {
        const bool branch_taken_0x2abdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDF4u;
        // 0x2abdf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abdf4) {
            ctx->pc = 0x2ABE10u;
            goto label_2abe10;
        }
    }
    ctx->pc = 0x2ABDFCu;
label_2abdfc:
    // 0x2abdfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2abdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abe00:
    // 0x2abe00: 0xc0acb86  jal         func_2B2E18
label_2abe04:
    if (ctx->pc == 0x2ABE04u) {
        ctx->pc = 0x2ABE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE00u;
        // 0x2abe04: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE08u;
        goto label_2abe08;
    }
    ctx->pc = 0x2ABE00u;
    SET_GPR_U32(ctx, 31, 0x2ABE08u);
    ctx->pc = 0x2ABE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE00u;
    // 0x2abe04: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2E18u, 0x2ABE00u, 0x2ABE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE08u;
label_2abe08:
    // 0x2abe08: 0x10000025  b           . + 4 + (0x25 << 2)
label_2abe0c:
    if (ctx->pc == 0x2ABE0Cu) {
        ctx->pc = 0x2ABE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE08u;
        // 0x2abe0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE10u;
        goto label_2abe10;
    }
    ctx->pc = 0x2ABE08u;
    {
        const bool branch_taken_0x2abe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE08u;
        // 0x2abe0c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe08) {
            ctx->pc = 0x2ABEA0u;
            goto label_2abea0;
        }
    }
    ctx->pc = 0x2ABE10u;
label_2abe10:
    // 0x2abe10: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2abe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2abe14:
    // 0x2abe14: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_2abe18:
    if (ctx->pc == 0x2ABE18u) {
        ctx->pc = 0x2ABE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE14u;
        // 0x2abe18: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE1Cu;
        goto label_2abe1c;
    }
    ctx->pc = 0x2ABE14u;
    {
        const bool branch_taken_0x2abe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe14) {
            ctx->pc = 0x2ABE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE14u;
            // 0x2abe18: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE70u;
            goto label_2abe70;
        }
    }
    ctx->pc = 0x2ABE1Cu;
label_2abe1c:
    // 0x2abe1c: 0xde220100  ld          $v0, 0x100($s1)
    ctx->pc = 0x2abe1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 256)));
label_2abe20:
    // 0x2abe20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2abe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2abe24:
    // 0x2abe24: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2abe28:
    if (ctx->pc == 0x2ABE28u) {
        ctx->pc = 0x2ABE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE24u;
        // 0x2abe28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE2Cu;
        goto label_2abe2c;
    }
    ctx->pc = 0x2ABE24u;
    {
        const bool branch_taken_0x2abe24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE24u;
        // 0x2abe28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe24) {
            ctx->pc = 0x2ABE9Cu;
            goto label_2abe9c;
        }
    }
    ctx->pc = 0x2ABE2Cu;
label_2abe2c:
    // 0x2abe2c: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2abe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2abe30:
    // 0x2abe30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2abe34:
    // 0x2abe34: 0x8ca60044  lw          $a2, 0x44($a1)
    ctx->pc = 0x2abe34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_2abe38:
    // 0x2abe38: 0xc049c22  jal         func_127088
label_2abe3c:
    if (ctx->pc == 0x2ABE3Cu) {
        ctx->pc = 0x2ABE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE38u;
        // 0x2abe3c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE40u;
        goto label_2abe40;
    }
    ctx->pc = 0x2ABE38u;
    SET_GPR_U32(ctx, 31, 0x2ABE40u);
    ctx->pc = 0x2ABE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE38u;
    // 0x2abe3c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2ABE38u, 0x2ABE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE40u;
label_2abe40:
    // 0x2abe40: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2abe44:
    if (ctx->pc == 0x2ABE44u) {
        ctx->pc = 0x2ABE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE40u;
        // 0x2abe44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE48u;
        goto label_2abe48;
    }
    ctx->pc = 0x2ABE40u;
    {
        const bool branch_taken_0x2abe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE40u;
        // 0x2abe44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe40) {
            ctx->pc = 0x2ABE98u;
            goto label_2abe98;
        }
    }
    ctx->pc = 0x2ABE48u;
label_2abe48:
    // 0x2abe48: 0xc0acbea  jal         func_2B2FA8
label_2abe4c:
    if (ctx->pc == 0x2ABE4Cu) {
        ctx->pc = 0x2ABE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE48u;
        // 0x2abe4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE50u;
        goto label_2abe50;
    }
    ctx->pc = 0x2ABE48u;
    SET_GPR_U32(ctx, 31, 0x2ABE50u);
    ctx->pc = 0x2ABE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE48u;
    // 0x2abe4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2ABE48u, 0x2ABE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE50u;
label_2abe50:
    // 0x2abe50: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2abe54:
    // 0x2abe54: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2abe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2abe58:
    // 0x2abe58: 0x240600e7  addiu       $a2, $zero, 0xE7
    ctx->pc = 0x2abe58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_2abe5c:
    // 0x2abe5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2abe5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abe60:
    // 0x2abe60: 0xc0a5648  jal         func_295920
label_2abe64:
    if (ctx->pc == 0x2ABE64u) {
        ctx->pc = 0x2ABE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE60u;
        // 0x2abe64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE68u;
        goto label_2abe68;
    }
    ctx->pc = 0x2ABE60u;
    SET_GPR_U32(ctx, 31, 0x2ABE68u);
    ctx->pc = 0x2ABE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE60u;
    // 0x2abe64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ABE60u, 0x2ABE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE68u;
label_2abe68:
    // 0x2abe68: 0x1000000c  b           . + 4 + (0xC << 2)
label_2abe6c:
    if (ctx->pc == 0x2ABE6Cu) {
        ctx->pc = 0x2ABE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE68u;
        // 0x2abe6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE70u;
        goto label_2abe70;
    }
    ctx->pc = 0x2ABE68u;
    {
        const bool branch_taken_0x2abe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE68u;
        // 0x2abe6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe68) {
            ctx->pc = 0x2ABE9Cu;
            goto label_2abe9c;
        }
    }
    ctx->pc = 0x2ABE70u;
label_2abe70:
    // 0x2abe70: 0xac500044  sw          $s0, 0x44($v0)
    ctx->pc = 0x2abe70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
label_2abe74:
    // 0x2abe74: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2abe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2abe78:
    // 0x2abe78: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x2abe78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2abe7c:
    // 0x2abe7c: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x2abe7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2abe80:
    // 0x2abe80: 0x6a44000f  ldl         $a0, 0xF($s2)
    ctx->pc = 0x2abe80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2abe84:
    // 0x2abe84: 0x6e440008  ldr         $a0, 0x8($s2)
    ctx->pc = 0x2abe84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2abe88:
    // 0x2abe88: 0xb062004f  sdl         $v0, 0x4F($v1)
    ctx->pc = 0x2abe88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2abe8c:
    // 0x2abe8c: 0xb4620048  sdr         $v0, 0x48($v1)
    ctx->pc = 0x2abe8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2abe90:
    // 0x2abe90: 0xb0640057  sdl         $a0, 0x57($v1)
    ctx->pc = 0x2abe90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2abe94:
    // 0x2abe94: 0xb4640050  sdr         $a0, 0x50($v1)
    ctx->pc = 0x2abe94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2abe98:
    // 0x2abe98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abe9c:
    // 0x2abe9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2abe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2abea0:
    // 0x2abea0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2abea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2abea4:
    // 0x2abea4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2abea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2abea8:
    // 0x2abea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2abeac:
    // 0x2abeac: 0x3e00008  jr          $ra
label_2abeb0:
    if (ctx->pc == 0x2ABEB0u) {
        ctx->pc = 0x2ABEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEACu;
        // 0x2abeb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABEB4u;
        goto label_2abeb4;
    }
    ctx->pc = 0x2ABEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEACu;
        // 0x2abeb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABEB4u;
label_2abeb4:
    // 0x2abeb4: 0x0  nop
    ctx->pc = 0x2abeb4u;
    // NOP
}
