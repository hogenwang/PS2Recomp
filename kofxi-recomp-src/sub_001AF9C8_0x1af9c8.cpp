#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF9C8
// Address: 0x1af9c8 - 0x1afe28
void sub_001AF9C8_0x1af9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF9C8_0x1af9c8");
#endif

    switch (ctx->pc) {
        case 0x1afa20u: goto label_1afa20;
        case 0x1afa5cu: goto label_1afa5c;
        case 0x1afaccu: goto label_1afacc;
        case 0x1afb38u: goto label_1afb38;
        case 0x1afc20u: goto label_1afc20;
        case 0x1afc28u: goto label_1afc28;
        case 0x1afc58u: goto label_1afc58;
        case 0x1afcecu: goto label_1afcec;
        case 0x1afd64u: goto label_1afd64;
        case 0x1afd78u: goto label_1afd78;
        case 0x1afd94u: goto label_1afd94;
        case 0x1afda4u: goto label_1afda4;
        case 0x1afdf0u: goto label_1afdf0;
        case 0x1afe04u: goto label_1afe04;
        case 0x1afe0cu: goto label_1afe0c;
        case 0x1afe14u: goto label_1afe14;
        default: break;
    }

    ctx->pc = 0x1af9c8u;

    // 0x1af9c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af9cc: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1af9ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1af9d0: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x1af9d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1af9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1af9d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9dc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1af9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1af9e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1af9e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9e4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1af9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1af9e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1af9e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9ec: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1af9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1af9f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1af9f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1af9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1af9f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1af9fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1af9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1afa00: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1afa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1afa04: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1afa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1afa08: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1afa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1afa0c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFA0Cu;
    {
        const bool branch_taken_0x1afa0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AFA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA0Cu;
            // 0x1afa10: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa0c) {
            ctx->pc = 0x1AFA28u;
            goto label_1afa28;
        }
    }
    ctx->pc = 0x1AFA14u;
    // 0x1afa14: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1afa14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1afa18: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AFA18u;
    SET_GPR_U32(ctx, 31, 0x1AFA20u);
    ctx->pc = 0x1AFA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA18u;
            // 0x1afa1c: 0x24847538  addiu       $a0, $a0, 0x7538 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA20u; }
        if (ctx->pc != 0x1AFA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA20u; }
        if (ctx->pc != 0x1AFA20u) { return; }
    }
    ctx->pc = 0x1AFA20u;
label_1afa20:
    // 0x1afa20: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x1AFA20u;
    {
        const bool branch_taken_0x1afa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA20u;
            // 0x1afa24: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa20) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFA28u;
label_1afa28:
    // 0x1afa28: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1afa2c: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x1afa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x1afa30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFA30u;
    {
        const bool branch_taken_0x1afa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA30u;
            // 0x1afa34: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa30) {
            ctx->pc = 0x1AFA50u;
            goto label_1afa50;
        }
    }
    ctx->pc = 0x1AFA38u;
    // 0x1afa38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1afa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afa3c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFA3Cu;
    {
        const bool branch_taken_0x1afa3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AFA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA3Cu;
            // 0x1afa40: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa3c) {
            ctx->pc = 0x1AFA50u;
            goto label_1afa50;
        }
    }
    ctx->pc = 0x1AFA44u;
    // 0x1afa44: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x1AFA44u;
    {
        const bool branch_taken_0x1afa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA44u;
            // 0x1afa48: 0x8c6201d0  lw          $v0, 0x1D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa44) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFA4Cu;
    // 0x1afa4c: 0x0  nop
    ctx->pc = 0x1afa4cu;
    // NOP
label_1afa50:
    // 0x1afa50: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1afa50u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1afa54: 0xc06c4d8  jal         func_1B1360
    ctx->pc = 0x1AFA54u;
    SET_GPR_U32(ctx, 31, 0x1AFA5Cu);
    ctx->pc = 0x1AFA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA54u;
            // 0x1afa58: 0x8ca401c8  lw          $a0, 0x1C8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA5Cu; }
        if (ctx->pc != 0x1AFA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1360_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA5Cu; }
        if (ctx->pc != 0x1AFA5Cu) { return; }
    }
    ctx->pc = 0x1AFA5Cu;
label_1afa5c:
    // 0x1afa5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1afa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1afa60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1afa60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa64: 0x146400d5  bne         $v1, $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1AFA64u;
    {
        const bool branch_taken_0x1afa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AFA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA64u;
            // 0x1afa68: 0xaec301d0  sw          $v1, 0x1D0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa64) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFA6Cu;
    // 0x1afa6c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1afa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1afa70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1afa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afa74: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1afa74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1afa78: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1afa78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1afa7c: 0x8e10fc98  lw          $s0, -0x368($s0)
    ctx->pc = 0x1afa7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966424)));
    // 0x1afa80: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x1afa80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1afa84: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFA84u;
    {
        const bool branch_taken_0x1afa84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AFA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA84u;
            // 0x1afa88: 0x2602011a  addiu       $v0, $s0, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa84) {
            ctx->pc = 0x1AFA98u;
            goto label_1afa98;
        }
    }
    ctx->pc = 0x1AFA8Cu;
    // 0x1afa8c: 0x26140118  addiu       $s4, $s0, 0x118
    ctx->pc = 0x1afa8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x1afa90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFA90u;
    {
        const bool branch_taken_0x1afa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA90u;
            // 0x1afa94: 0x261e011c  addiu       $fp, $s0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa90) {
            ctx->pc = 0x1AFAA0u;
            goto label_1afaa0;
        }
    }
    ctx->pc = 0x1AFA98u;
label_1afa98:
    // 0x1afa98: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x1afa98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x1afa9c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1afa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1afaa0:
    // 0x1afaa0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1afaa4: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1AFAA4u;
    {
        const bool branch_taken_0x1afaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAA4u;
            // 0x1afaa8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afaa4) {
            ctx->pc = 0x1AFC30u;
            goto label_1afc30;
        }
    }
    ctx->pc = 0x1AFAACu;
    // 0x1afaac: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1afaacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x1afab0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1afab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1afab4: 0x26f101d8  addiu       $s1, $s7, 0x1D8
    ctx->pc = 0x1afab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 472));
    // 0x1afab8: 0x24a57570  addiu       $a1, $a1, 0x7570
    ctx->pc = 0x1afab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30064));
    // 0x1afabc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1afabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1afac0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1afac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1afac4: 0xc049c22  jal         func_127088
    ctx->pc = 0x1AFAC4u;
    SET_GPR_U32(ctx, 31, 0x1AFACCu);
    ctx->pc = 0x1AFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAC4u;
            // 0x1afac8: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (runtime->hasFunction(0x127088u)) {
        auto targetFn = runtime->lookupFunction(0x127088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFACCu; }
        if (ctx->pc != 0x1AFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127088_0x127088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFACCu; }
        if (ctx->pc != 0x1AFACCu) { return; }
    }
    ctx->pc = 0x1AFACCu;
label_1afacc:
    // 0x1afacc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFACCu;
    {
        const bool branch_taken_0x1afacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFACCu;
            // 0x1afad0: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afacc) {
            ctx->pc = 0x1AFAE0u;
            goto label_1afae0;
        }
    }
    ctx->pc = 0x1AFAD4u;
    // 0x1afad4: 0x26d001d0  addiu       $s0, $s6, 0x1D0
    ctx->pc = 0x1afad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 464));
    // 0x1afad8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1AFAD8u;
    {
        const bool branch_taken_0x1afad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAD8u;
            // 0x1afadc: 0x24847578  addiu       $a0, $a0, 0x7578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afad8) {
            ctx->pc = 0x1AFD8Cu;
            goto label_1afd8c;
        }
    }
    ctx->pc = 0x1AFAE0u;
label_1afae0:
    // 0x1afae0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1afae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1afae4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1afae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1afae8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1afae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x1afaec: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x1afaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x1afaf0: 0x90450007  lbu         $a1, 0x7($v0)
    ctx->pc = 0x1afaf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1afaf4: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x1afaf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1afaf8: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x1afaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1afafc: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1afafcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1afb00: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1afb00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1afb04: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1afb04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1afb08: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1afb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1afb0c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1afb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1afb10: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1afb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1afb14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1afb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1afb18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afb1c: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x1afb1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1afb20: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFB20u;
    {
        const bool branch_taken_0x1afb20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB20u;
            // 0x1afb24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb20) {
            ctx->pc = 0x1AFB40u;
            goto label_1afb40;
        }
    }
    ctx->pc = 0x1AFB28u;
    // 0x1afb28: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1afb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1afb2c: 0x26d001d0  addiu       $s0, $s6, 0x1D0
    ctx->pc = 0x1afb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 464));
    // 0x1afb30: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AFB30u;
    SET_GPR_U32(ctx, 31, 0x1AFB38u);
    ctx->pc = 0x1AFB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB30u;
            // 0x1afb34: 0x248475b0  addiu       $a0, $a0, 0x75B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB38u; }
        if (ctx->pc != 0x1AFB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB38u; }
        if (ctx->pc != 0x1AFB38u) { return; }
    }
    ctx->pc = 0x1AFB38u;
label_1afb38:
    // 0x1afb38: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1AFB38u;
    {
        const bool branch_taken_0x1afb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB38u;
            // 0x1afb3c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb38) {
            ctx->pc = 0x1AFD9Cu;
            goto label_1afd9c;
        }
    }
    ctx->pc = 0x1AFB40u;
label_1afb40:
    // 0x1afb40: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1afb40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1afb44: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1afb44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1afb48: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1afb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1afb4c: 0x8204000f  lb          $a0, 0xF($s0)
    ctx->pc = 0x1afb4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1afb50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1afb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1afb54: 0x9205000f  lbu         $a1, 0xF($s0)
    ctx->pc = 0x1afb54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1afb58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1afb58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb5c: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1afb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1afb60: 0x14910005  bne         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFB60u;
    {
        const bool branch_taken_0x1afb60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x1AFB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB60u;
            // 0x1afb64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb60) {
            ctx->pc = 0x1AFB78u;
            goto label_1afb78;
        }
    }
    ctx->pc = 0x1AFB68u;
    // 0x1afb68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1afb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1afb6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFB6Cu;
    {
        const bool branch_taken_0x1afb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB6Cu;
            // 0x1afb70: 0x24420120  addiu       $v0, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb6c) {
            ctx->pc = 0x1AFB88u;
            goto label_1afb88;
        }
    }
    ctx->pc = 0x1AFB74u;
    // 0x1afb74: 0x0  nop
    ctx->pc = 0x1afb74u;
    // NOP
label_1afb78:
    // 0x1afb78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1afb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1afb7c: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x1afb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1afb80: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1afb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1afb84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1afb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1afb88:
    // 0x1afb88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1afb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1afb8c: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x1afb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1afb90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afb94: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1afb98: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1AFB98u;
    {
        const bool branch_taken_0x1afb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AFB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB98u;
            // 0x1afb9c: 0x8e6301d8  lw          $v1, 0x1D8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb98) {
            ctx->pc = 0x1AFBD8u;
            goto label_1afbd8;
        }
    }
    ctx->pc = 0x1AFBA0u;
    // 0x1afba0: 0x8e6201d8  lw          $v0, 0x1D8($s3)
    ctx->pc = 0x1afba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x1afba4: 0x90460009  lbu         $a2, 0x9($v0)
    ctx->pc = 0x1afba4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1afba8: 0x9045000b  lbu         $a1, 0xB($v0)
    ctx->pc = 0x1afba8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1afbac: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x1afbacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1afbb0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1afbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1afbb4: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x1afbb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1afbb8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1afbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1afbbc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1afbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1afbc0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1afbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1afbc4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1afbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1afbc8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1afbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1afbcc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AFBCCu;
    {
        const bool branch_taken_0x1afbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFBCCu;
            // 0x1afbd0: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbcc) {
            ctx->pc = 0x1AFC14u;
            goto label_1afc14;
        }
    }
    ctx->pc = 0x1AFBD4u;
    // 0x1afbd4: 0x0  nop
    ctx->pc = 0x1afbd4u;
    // NOP
label_1afbd8:
    // 0x1afbd8: 0x90660009  lbu         $a2, 0x9($v1)
    ctx->pc = 0x1afbd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x1afbdc: 0x9065000b  lbu         $a1, 0xB($v1)
    ctx->pc = 0x1afbdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1afbe0: 0x9064000a  lbu         $a0, 0xA($v1)
    ctx->pc = 0x1afbe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1afbe4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1afbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1afbe8: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x1afbe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1afbec: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1afbecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1afbf0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1afbf4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1afbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1afbf8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1afbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1afbfc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1afbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1afc00: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x1afc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1afc04: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1afc04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1afc08: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1afc08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1afc0c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1afc0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x1afc10: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x1afc10u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
label_1afc14:
    // 0x1afc14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AFC14u;
    {
        const bool branch_taken_0x1afc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC14u;
            // 0x1afc18: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc14) {
            ctx->pc = 0x1AFC34u;
            goto label_1afc34;
        }
    }
    ctx->pc = 0x1AFC1Cu;
    // 0x1afc1c: 0x0  nop
    ctx->pc = 0x1afc1cu;
    // NOP
label_1afc20:
    // 0x1afc20: 0xc06be16  jal         func_1AF858
    ctx->pc = 0x1AFC20u;
    SET_GPR_U32(ctx, 31, 0x1AFC28u);
    ctx->pc = 0x1AFC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC20u;
            // 0x1afc24: 0xaec201d0  sw          $v0, 0x1D0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF858u;
    if (runtime->hasFunction(0x1AF858u)) {
        auto targetFn = runtime->lookupFunction(0x1AF858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC28u; }
        if (ctx->pc != 0x1AFC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF858_0x1af858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC28u; }
        if (ctx->pc != 0x1AFC28u) { return; }
    }
    ctx->pc = 0x1AFC28u;
label_1afc28:
    // 0x1afc28: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1AFC28u;
    {
        const bool branch_taken_0x1afc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc28) {
            ctx->pc = 0x1AFD40u;
            goto label_1afd40;
        }
    }
    ctx->pc = 0x1AFC30u;
label_1afc30:
    // 0x1afc30: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1afc30u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1afc34:
    // 0x1afc34: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1afc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1afc38: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x1afc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x1afc3c: 0x2a240  sll         $s4, $v0, 9
    ctx->pc = 0x1afc3cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x1afc40: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x1afc40u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1afc44: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x1AFC44u;
    {
        const bool branch_taken_0x1afc44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC44u;
            // 0x1afc48: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc44) {
            ctx->pc = 0x1AFD50u;
            goto label_1afd50;
        }
    }
    ctx->pc = 0x1AFC4Cu;
    // 0x1afc4c: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1afc4cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1afc50: 0x26b201c4  addiu       $s2, $s5, 0x1C4
    ctx->pc = 0x1afc50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 452));
    // 0x1afc54: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x1afc54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1afc58:
    // 0x1afc58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afc5c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AFC5Cu;
    {
        const bool branch_taken_0x1afc5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC5Cu;
            // 0x1afc60: 0x8ee301d8  lw          $v1, 0x1D8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc5c) {
            ctx->pc = 0x1AFCB8u;
            goto label_1afcb8;
        }
    }
    ctx->pc = 0x1AFC64u;
    // 0x1afc64: 0x8ee201d8  lw          $v0, 0x1D8($s7)
    ctx->pc = 0x1afc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 472)));
    // 0x1afc68: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1afc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1afc6c: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1afc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc70: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1afc70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afc74: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1afc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1afc78: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x1afc78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1afc7c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1afc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1afc80: 0x90850003  lbu         $a1, 0x3($a0)
    ctx->pc = 0x1afc80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1afc84: 0xfe3821  addu        $a3, $a3, $fp
    ctx->pc = 0x1afc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x1afc88: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1afc88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1afc8c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1afc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1afc90: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1afc90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afc94: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1afc94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1afc98: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1afc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1afc9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1afc9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1afca0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1afca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1afca4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1afca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1afca8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1afca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1afcac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1afcacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1afcb0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1AFCB0u;
    {
        const bool branch_taken_0x1afcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCB0u;
            // 0x1afcb4: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcb0) {
            ctx->pc = 0x1AFD1Cu;
            goto label_1afd1c;
        }
    }
    ctx->pc = 0x1AFCB8u;
label_1afcb8:
    // 0x1afcb8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1afcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1afcbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1afcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1afcc0: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1afcc0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1afcc4: 0x90450003  lbu         $a1, 0x3($v0)
    ctx->pc = 0x1afcc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1afcc8: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1afcc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1afccc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1afcccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1afcd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1afcd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afcd4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1afcd8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1afcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1afcdc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1afcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1afce0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1afce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1afce4: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1AFCE4u;
    SET_GPR_U32(ctx, 31, 0x1AFCECu);
    ctx->pc = 0x1AFCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCE4u;
            // 0x1afce8: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (runtime->hasFunction(0x1B1A88u)) {
        auto targetFn = runtime->lookupFunction(0x1B1A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCECu; }
        if (ctx->pc != 0x1AFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1A88_0x1b1a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCECu; }
        if (ctx->pc != 0x1AFCECu) { return; }
    }
    ctx->pc = 0x1AFCECu;
label_1afcec:
    // 0x1afcec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1afcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afcf0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1afcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1afcf4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1afcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1afcf8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AFCF8u;
    {
        const bool branch_taken_0x1afcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCF8u;
            // 0x1afcfc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcf8) {
            ctx->pc = 0x1AFD80u;
            goto label_1afd80;
        }
    }
    ctx->pc = 0x1AFD00u;
    // 0x1afd00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afd04: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1afd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afd08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1afd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1afd0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1afd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1afd10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1afd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1afd14: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x1afd14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1afd18: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1afd18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1afd1c:
    // 0x1afd1c: 0x8d2201c4  lw          $v0, 0x1C4($t1)
    ctx->pc = 0x1afd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 452)));
    // 0x1afd20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1afd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1afd24: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1afd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1afd28: 0x5040ffbd  beql        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1AFD28u;
    {
        const bool branch_taken_0x1afd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd28) {
            ctx->pc = 0x1AFD2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD28u;
            // 0x1afd2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AFC20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1afc20;
        }
    }
    ctx->pc = 0x1AFD30u;
    // 0x1afd30: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1afd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1afd34: 0x234982a  slt         $s3, $s1, $s4
    ctx->pc = 0x1afd34u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1afd38: 0x5660ffc7  bnel        $s3, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1AFD38u;
    {
        const bool branch_taken_0x1afd38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afd38) {
            ctx->pc = 0x1AFD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD38u;
            // 0x1afd3c: 0x8203000f  lb          $v1, 0xF($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AFC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1afc58;
        }
    }
    ctx->pc = 0x1AFD40u;
label_1afd40:
    // 0x1afd40: 0x1660001e  bnez        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AFD40u;
    {
        const bool branch_taken_0x1afd40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD40u;
            // 0x1afd44: 0x8ec201d0  lw          $v0, 0x1D0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd40) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFD48u;
    // 0x1afd48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1afd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1afd4c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1afd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1afd50:
    // 0x1afd50: 0x245101c8  addiu       $s1, $v0, 0x1C8
    ctx->pc = 0x1afd50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x1afd54: 0x8c6501dc  lw          $a1, 0x1DC($v1)
    ctx->pc = 0x1afd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x1afd58: 0x8ee601d8  lw          $a2, 0x1D8($s7)
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 472)));
    // 0x1afd5c: 0xc06c2ae  jal         func_1B0AB8
    ctx->pc = 0x1AFD5Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD64u);
    ctx->pc = 0x1AFD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD5Cu;
            // 0x1afd60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AB8u;
    if (runtime->hasFunction(0x1B0AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD64u; }
        if (ctx->pc != 0x1AFD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AB8_0x1b0ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD64u; }
        if (ctx->pc != 0x1AFD64u) { return; }
    }
    ctx->pc = 0x1AFD64u;
label_1afd64:
    // 0x1afd64: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AFD64u;
    {
        const bool branch_taken_0x1afd64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1afd64) {
            ctx->pc = 0x1AFD68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD64u;
            // 0x1afd68: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AFDB0u;
            goto label_1afdb0;
        }
    }
    ctx->pc = 0x1AFD6Cu;
    // 0x1afd6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1afd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1afd70: 0xc06be16  jal         func_1AF858
    ctx->pc = 0x1AFD70u;
    SET_GPR_U32(ctx, 31, 0x1AFD78u);
    ctx->pc = 0x1AFD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD70u;
            // 0x1afd74: 0xaec201d0  sw          $v0, 0x1D0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF858u;
    if (runtime->hasFunction(0x1AF858u)) {
        auto targetFn = runtime->lookupFunction(0x1AF858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD78u; }
        if (ctx->pc != 0x1AFD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF858_0x1af858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD78u; }
        if (ctx->pc != 0x1AFD78u) { return; }
    }
    ctx->pc = 0x1AFD78u;
label_1afd78:
    // 0x1afd78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1AFD78u;
    {
        const bool branch_taken_0x1afd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD78u;
            // 0x1afd7c: 0x8ec201d0  lw          $v0, 0x1D0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd78) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFD80u;
label_1afd80:
    // 0x1afd80: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1afd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1afd84: 0x26d001d0  addiu       $s0, $s6, 0x1D0
    ctx->pc = 0x1afd84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 464));
    // 0x1afd88: 0x248475e8  addiu       $a0, $a0, 0x75E8
    ctx->pc = 0x1afd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30184));
label_1afd8c:
    // 0x1afd8c: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD94u);
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD94u; }
        if (ctx->pc != 0x1AFD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD94u; }
        if (ctx->pc != 0x1AFD94u) { return; }
    }
    ctx->pc = 0x1AFD94u;
label_1afd94:
    // 0x1afd94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1afd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1afd98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1afd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1afd9c:
    // 0x1afd9c: 0xc06be16  jal         func_1AF858
    ctx->pc = 0x1AFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFDA4u);
    ctx->pc = 0x1AF858u;
    if (runtime->hasFunction(0x1AF858u)) {
        auto targetFn = runtime->lookupFunction(0x1AF858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDA4u; }
        if (ctx->pc != 0x1AFDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF858_0x1af858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDA4u; }
        if (ctx->pc != 0x1AFDA4u) { return; }
    }
    ctx->pc = 0x1AFDA4u;
label_1afda4:
    // 0x1afda4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDA4u;
            // 0x1afda8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDBCu;
            goto label_1afdbc;
        }
    }
    ctx->pc = 0x1AFDACu;
    // 0x1afdac: 0x0  nop
    ctx->pc = 0x1afdacu;
    // NOP
label_1afdb0:
    // 0x1afdb0: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x1afdb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1afdb4: 0xaec301d0  sw          $v1, 0x1D0($s6)
    ctx->pc = 0x1afdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 464), GPR_U32(ctx, 3));
    // 0x1afdb8: 0x8ec201d0  lw          $v0, 0x1D0($s6)
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 464)));
label_1afdbc:
    // 0x1afdbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1afdbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afdc0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1afdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afdc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afdc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afdc8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1afdc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1afdcc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1afdccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afdd0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1afdd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1afdd4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1afdd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1afdd8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1afdd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1afddc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1afddcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1afde0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1afde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1afde4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDE4u;
            // 0x1afde8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFDECu;
    // 0x1afdec: 0x0  nop
    ctx->pc = 0x1afdecu;
    // NOP
label_1afdf0:
    // 0x1afdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afdf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afdf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1afdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1afdfc: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AFDFCu;
    SET_GPR_U32(ctx, 31, 0x1AFE04u);
    ctx->pc = 0x1AFE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDFCu;
            // 0x1afe00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE04u; }
        if (ctx->pc != 0x1AFE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE04u; }
        if (ctx->pc != 0x1AFE04u) { return; }
    }
    ctx->pc = 0x1AFE04u;
label_1afe04:
    // 0x1afe04: 0xc06bf8a  jal         func_1AFE28
    ctx->pc = 0x1AFE04u;
    SET_GPR_U32(ctx, 31, 0x1AFE0Cu);
    ctx->pc = 0x1AFE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE04u;
            // 0x1afe08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE28u;
    if (runtime->hasFunction(0x1AFE28u)) {
        auto targetFn = runtime->lookupFunction(0x1AFE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE0Cu; }
        if (ctx->pc != 0x1AFE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFE28_0x1afe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE0Cu; }
        if (ctx->pc != 0x1AFE0Cu) { return; }
    }
    ctx->pc = 0x1AFE0Cu;
label_1afe0c:
    // 0x1afe0c: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AFE0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE14u);
    ctx->pc = 0x1AFE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE0Cu;
            // 0x1afe10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE14u; }
        if (ctx->pc != 0x1AFE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE14u; }
        if (ctx->pc != 0x1AFE14u) { return; }
    }
    ctx->pc = 0x1AFE14u;
label_1afe14:
    // 0x1afe14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1afe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afe18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1afe18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afe1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afe1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afe20: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE20u;
            // 0x1afe24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFE28u;
    ctx->pc = 0x1afe28u;
}
