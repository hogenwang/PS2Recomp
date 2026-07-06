#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BEDD8
// Address: 0x2bedd8 - 0x2bef18
void sub_002BEDD8_0x2bedd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEDD8_0x2bedd8");
#endif

    switch (ctx->pc) {
        case 0x2bee14u: goto label_2bee14;
        default: break;
    }

    ctx->pc = 0x2bedd8u;

    // 0x2bedd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bedd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2beddc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2beddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bede0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bede4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2bede4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bede8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bedec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bedecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bedf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bedf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bedf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bedf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bedf8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2bedf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bedfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bedfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bee04: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bee04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bee0c: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x2BEE0Cu;
    SET_GPR_U32(ctx, 31, 0x2BEE14u);
    ctx->pc = 0x2BEE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE0Cu;
            // 0x2bee10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE14u; }
        if (ctx->pc != 0x2BEE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEE14u; }
        if (ctx->pc != 0x2BEE14u) { return; }
    }
    ctx->pc = 0x2BEE14u;
label_2bee14:
    // 0x2bee14: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEE14u;
    {
        const bool branch_taken_0x2bee14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE14u;
            // 0x2bee18: 0x24430230  addiu       $v1, $v0, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee14) {
            ctx->pc = 0x2BEE24u;
            goto label_2bee24;
        }
    }
    ctx->pc = 0x2BEE1Cu;
    // 0x2bee1c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2BEE1Cu;
    {
        const bool branch_taken_0x2bee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE1Cu;
            // 0x2bee20: 0x24152721  addiu       $s5, $zero, 0x2721 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee1c) {
            ctx->pc = 0x2BEEECu;
            goto label_2beeec;
        }
    }
    ctx->pc = 0x2BEE24u;
label_2bee24:
    // 0x2bee24: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2bee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bee28: 0x70280a  movz        $a1, $v1, $s0
    ctx->pc = 0x2bee28u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2bee2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bee30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2bee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bee34: 0x122023  negu        $a0, $s2
    ctx->pc = 0x2bee34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x2bee38: 0x26270008  addiu       $a3, $s1, 0x8
    ctx->pc = 0x2bee38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2bee3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2bee3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bee40: 0x242200b  movn        $a0, $s2, $v0
    ctx->pc = 0x2bee40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    // 0x2bee44: 0x481000b  bgez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BEE44u;
    {
        const bool branch_taken_0x2bee44 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2BEE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE44u;
            // 0x2bee48: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee44) {
            ctx->pc = 0x2BEE74u;
            goto label_2bee74;
        }
    }
    ctx->pc = 0x2BEE4Cu;
    // 0x2bee4c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2bee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bee50: 0x41023  negu        $v0, $a0
    ctx->pc = 0x2bee50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2bee54: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2bee54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bee58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEE58u;
    {
        const bool branch_taken_0x2bee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE58u;
            // 0x2bee5c: 0x3c023b9a  lui         $v0, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee58) {
            ctx->pc = 0x2BEE78u;
            goto label_2bee78;
        }
    }
    ctx->pc = 0x2BEE60u;
    // 0x2bee60: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2bee60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2bee64: 0x3442ca00  ori         $v0, $v0, 0xCA00
    ctx->pc = 0x2bee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51712);
    // 0x2bee68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bee6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BEE6Cu;
    {
        const bool branch_taken_0x2bee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE6Cu;
            // 0x2bee70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee6c) {
            ctx->pc = 0x2BEEA0u;
            goto label_2beea0;
        }
    }
    ctx->pc = 0x2BEE74u;
label_2bee74:
    // 0x2bee74: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2bee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2bee78:
    // 0x2bee78: 0x3c023b9a  lui         $v0, 0x3B9A
    ctx->pc = 0x2bee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
    // 0x2bee7c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2bee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bee80: 0x3442c9ff  ori         $v0, $v0, 0xC9FF
    ctx->pc = 0x2bee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51711);
    // 0x2bee84: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2bee84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2bee88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEE88u;
    {
        const bool branch_taken_0x2bee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEE88u;
            // 0x2bee8c: 0xace40008  sw          $a0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee88) {
            ctx->pc = 0x2BEEA4u;
            goto label_2beea4;
        }
    }
    ctx->pc = 0x2BEE90u;
    // 0x2bee90: 0x3c02c465  lui         $v0, 0xC465
    ctx->pc = 0x2bee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50277 << 16));
    // 0x2bee94: 0x26860001  addiu       $a2, $s4, 0x1
    ctx->pc = 0x2bee94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2bee98: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x2bee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x2bee9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2beea0:
    // 0x2beea0: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x2beea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_2beea4:
    // 0x2beea4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2beea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2beea8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2beea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2beeac: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEEACu;
    {
        const bool branch_taken_0x2beeac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BEEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEEACu;
            // 0x2beeb0: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beeac) {
            ctx->pc = 0x2BEEC8u;
            goto label_2beec8;
        }
    }
    ctx->pc = 0x2BEEB4u;
    // 0x2beeb4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2beeb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2beeb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEEB8u;
    {
        const bool branch_taken_0x2beeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2beeb8) {
            ctx->pc = 0x2BEEC8u;
            goto label_2beec8;
        }
    }
    ctx->pc = 0x2BEEC0u;
    // 0x2beec0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEEC0u;
    {
        const bool branch_taken_0x2beec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEEC0u;
            // 0x2beec4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beec0) {
            ctx->pc = 0x2BEEE0u;
            goto label_2beee0;
        }
    }
    ctx->pc = 0x2BEEC8u;
label_2beec8:
    // 0x2beec8: 0x4c30006  bgezl       $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BEEC8u;
    {
        const bool branch_taken_0x2beec8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2beec8) {
            ctx->pc = 0x2BEECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEEC8u;
            // 0x2beecc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BEEE4u;
            goto label_2beee4;
        }
    }
    ctx->pc = 0x2BEED0u;
    // 0x2beed0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2beed4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2beed4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2beed8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2beed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2beedc: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x2beedcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_2beee0:
    // 0x2beee0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2beee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2beee4:
    // 0x2beee4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2beee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2beee8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2beee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2beeec:
    // 0x2beeec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2beeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beef0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2beef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2beef4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2beef4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2beef8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2beef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2beefc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2beefcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bef00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bef00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bef04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bef04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bef08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bef08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BEF0Cu;
            // 0x2bef10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BEF14u;
    // 0x2bef14: 0x0  nop
    ctx->pc = 0x2bef14u;
    // NOP
    ctx->pc = 0x2bef18u;
}
