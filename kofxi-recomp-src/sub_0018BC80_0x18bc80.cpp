#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BC80
// Address: 0x18bc80 - 0x18c060
void sub_0018BC80_0x18bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BC80_0x18bc80");
#endif

    switch (ctx->pc) {
        case 0x18bcd8u: goto label_18bcd8;
        case 0x18bdccu: goto label_18bdcc;
        case 0x18bec8u: goto label_18bec8;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf60u: goto label_18bf60;
        default: break;
    }

    ctx->pc = 0x18bc80u;

    // 0x18bc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18bc84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18bc88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bc8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bc90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18bc90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bc98: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x18bc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc9c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x18bc9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18bca0: 0x10e80085  beq         $a3, $t0, . + 4 + (0x85 << 2)
    ctx->pc = 0x18BCA0u;
    {
        const bool branch_taken_0x18bca0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x18BCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCA0u;
            // 0x18bca4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bca0) {
            ctx->pc = 0x18BEB8u;
            goto label_18beb8;
        }
    }
    ctx->pc = 0x18BCA8u;
    // 0x18bca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bcac: 0x50e30083  beql        $a3, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x18BCACu;
    {
        const bool branch_taken_0x18bcac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x18bcac) {
            ctx->pc = 0x18BCB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCACu;
            // 0x18bcb0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BEBCu;
            goto label_18bebc;
        }
    }
    ctx->pc = 0x18BCB4u;
    // 0x18bcb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bcb8: 0x50e20042  beql        $a3, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x18BCB8u;
    {
        const bool branch_taken_0x18bcb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x18bcb8) {
            ctx->pc = 0x18BCBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCB8u;
            // 0x18bcbc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BDC4u;
            goto label_18bdc4;
        }
    }
    ctx->pc = 0x18BCC0u;
    // 0x18bcc0: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BCC0u;
    {
        const bool branch_taken_0x18bcc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bcc0) {
            ctx->pc = 0x18BCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCC0u;
            // 0x18bcc4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BCD0u;
            goto label_18bcd0;
        }
    }
    ctx->pc = 0x18BCC8u;
    // 0x18bcc8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x18BCC8u;
    {
        const bool branch_taken_0x18bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCC8u;
            // 0x18bccc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcc8) {
            ctx->pc = 0x18BF20u;
            goto label_18bf20;
        }
    }
    ctx->pc = 0x18BCD0u;
label_18bcd0:
    // 0x18bcd0: 0xc063808  jal         func_18E020
    ctx->pc = 0x18BCD0u;
    SET_GPR_U32(ctx, 31, 0x18BCD8u);
    ctx->pc = 0x18BCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCD0u;
            // 0x18bcd4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (runtime->hasFunction(0x18E020u)) {
        auto targetFn = runtime->lookupFunction(0x18E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCD8u; }
        if (ctx->pc != 0x18BCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E020_0x18e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCD8u; }
        if (ctx->pc != 0x18BCD8u) { return; }
    }
    ctx->pc = 0x18BCD8u;
label_18bcd8:
    // 0x18bcd8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18bcdc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18bce0: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x18bce0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18bce4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bce8: 0x14830091  bne         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x18BCE8u;
    {
        const bool branch_taken_0x18bce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCE8u;
            // 0x18bcec: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bce8) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BCF0u;
    // 0x18bcf0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18bcf4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x18bcf8: 0x8c63bee4  lw          $v1, -0x411C($v1)
    ctx->pc = 0x18bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x18bcfc: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x18bcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x18bd00: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18BD00u;
    {
        const bool branch_taken_0x18bd00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd00) {
            ctx->pc = 0x18BD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD00u;
            // 0x18bd04: 0x3c040200  lui         $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BD34u;
            goto label_18bd34;
        }
    }
    ctx->pc = 0x18BD08u;
    // 0x18bd08: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x18bd08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18bd0c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18bd10: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18BD10u;
    {
        const bool branch_taken_0x18bd10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x18bd10) {
            ctx->pc = 0x18BD30u;
            goto label_18bd30;
        }
    }
    ctx->pc = 0x18BD18u;
    // 0x18bd18: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x18bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x18bd1c: 0x8c84bedc  lw          $a0, -0x4124($a0)
    ctx->pc = 0x18bd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950620)));
    // 0x18bd20: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x18bd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x18bd24: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BD24u;
    {
        const bool branch_taken_0x18bd24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bd24) {
            ctx->pc = 0x18BD30u;
            goto label_18bd30;
        }
    }
    ctx->pc = 0x18BD2Cu;
    // 0x18bd2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bd30:
    // 0x18bd30: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x18bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_18bd34:
    // 0x18bd34: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x18bd34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18bd38: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x18BD38u;
    {
        const bool branch_taken_0x18bd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd38) {
            ctx->pc = 0x18BD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD38u;
            // 0x18bd3c: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BD8Cu;
            goto label_18bd8c;
        }
    }
    ctx->pc = 0x18BD40u;
    // 0x18bd40: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x18bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x18bd44: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x18bd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18bd48: 0x90869720  lbu         $a2, -0x68E0($a0)
    ctx->pc = 0x18bd48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294940448)));
    // 0x18bd4c: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x18BD4Cu;
    {
        const bool branch_taken_0x18bd4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x18bd4c) {
            ctx->pc = 0x18BD88u;
            goto label_18bd88;
        }
    }
    ctx->pc = 0x18BD54u;
    // 0x18bd54: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x18bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18bd58: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18bd5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18bd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18bd60: 0x2484db57  addiu       $a0, $a0, -0x24A9
    ctx->pc = 0x18bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957911));
    // 0x18bd64: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18bd68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18bd6c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18bd70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18bd74: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x18bd74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18bd78: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x18bd78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18bd7c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BD7Cu;
    {
        const bool branch_taken_0x18bd7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd7c) {
            ctx->pc = 0x18BD88u;
            goto label_18bd88;
        }
    }
    ctx->pc = 0x18BD84u;
    // 0x18bd84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bd88:
    // 0x18bd88: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x18bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_18bd8c:
    // 0x18bd8c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x18bd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18bd90: 0x50600068  beql        $v1, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x18BD90u;
    {
        const bool branch_taken_0x18bd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd90) {
            ctx->pc = 0x18BD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD90u;
            // 0x18bd94: 0x3c033fc0  lui         $v1, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BF34u;
            goto label_18bf34;
        }
    }
    ctx->pc = 0x18BD98u;
    // 0x18bd98: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x18bd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18bd9c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18bda0: 0x14830063  bne         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x18BDA0u;
    {
        const bool branch_taken_0x18bda0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18bda0) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BDA8u;
    // 0x18bda8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18bdac: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x18bdb0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x18bdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18bdb4: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x18BDB4u;
    {
        const bool branch_taken_0x18bdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bdb4) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BDBCu;
    // 0x18bdbc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x18BDBCu;
    {
        const bool branch_taken_0x18bdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDBCu;
            // 0x18bdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdbc) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BDC4u;
label_18bdc4:
    // 0x18bdc4: 0xc063808  jal         func_18E020
    ctx->pc = 0x18BDC4u;
    SET_GPR_U32(ctx, 31, 0x18BDCCu);
    ctx->pc = 0x18BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDC4u;
            // 0x18bdc8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (runtime->hasFunction(0x18E020u)) {
        auto targetFn = runtime->lookupFunction(0x18E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDCCu; }
        if (ctx->pc != 0x18BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E020_0x18e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDCCu; }
        if (ctx->pc != 0x18BDCCu) { return; }
    }
    ctx->pc = 0x18BDCCu;
label_18bdcc:
    // 0x18bdcc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18bdd0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18bdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18bdd4: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x18bdd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18bdd8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bddc: 0x14830054  bne         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x18BDDCu;
    {
        const bool branch_taken_0x18bddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDDCu;
            // 0x18bde0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bddc) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BDE4u;
    // 0x18bde4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18bde8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x18bde8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x18bdec: 0x8c63bee4  lw          $v1, -0x411C($v1)
    ctx->pc = 0x18bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x18bdf0: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x18bdf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x18bdf4: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18BDF4u;
    {
        const bool branch_taken_0x18bdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bdf4) {
            ctx->pc = 0x18BDF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDF4u;
            // 0x18bdf8: 0x3c040200  lui         $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BE28u;
            goto label_18be28;
        }
    }
    ctx->pc = 0x18BDFCu;
    // 0x18bdfc: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x18bdfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18be00: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18be04: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18BE04u;
    {
        const bool branch_taken_0x18be04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x18be04) {
            ctx->pc = 0x18BE24u;
            goto label_18be24;
        }
    }
    ctx->pc = 0x18BE0Cu;
    // 0x18be0c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x18be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x18be10: 0x8c84bedc  lw          $a0, -0x4124($a0)
    ctx->pc = 0x18be10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950620)));
    // 0x18be14: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x18be14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x18be18: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BE18u;
    {
        const bool branch_taken_0x18be18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18be18) {
            ctx->pc = 0x18BE24u;
            goto label_18be24;
        }
    }
    ctx->pc = 0x18BE20u;
    // 0x18be20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18be20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18be24:
    // 0x18be24: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x18be24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_18be28:
    // 0x18be28: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x18be28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18be2c: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x18BE2Cu;
    {
        const bool branch_taken_0x18be2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18be2c) {
            ctx->pc = 0x18BE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE2Cu;
            // 0x18be30: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BE80u;
            goto label_18be80;
        }
    }
    ctx->pc = 0x18BE34u;
    // 0x18be34: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x18be34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x18be38: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x18be38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18be3c: 0x90869720  lbu         $a2, -0x68E0($a0)
    ctx->pc = 0x18be3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294940448)));
    // 0x18be40: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x18BE40u;
    {
        const bool branch_taken_0x18be40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x18be40) {
            ctx->pc = 0x18BE7Cu;
            goto label_18be7c;
        }
    }
    ctx->pc = 0x18BE48u;
    // 0x18be48: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x18be48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18be4c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18be50: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18be54: 0x2484db57  addiu       $a0, $a0, -0x24A9
    ctx->pc = 0x18be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957911));
    // 0x18be58: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18be58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18be5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18be60: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18be60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18be64: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18be64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18be68: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x18be68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18be6c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x18be6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18be70: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BE70u;
    {
        const bool branch_taken_0x18be70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18be70) {
            ctx->pc = 0x18BE7Cu;
            goto label_18be7c;
        }
    }
    ctx->pc = 0x18BE78u;
    // 0x18be78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18be78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18be7c:
    // 0x18be7c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x18be7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_18be80:
    // 0x18be80: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x18be80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18be84: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x18BE84u;
    {
        const bool branch_taken_0x18be84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18be84) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BE8Cu;
    // 0x18be8c: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x18be8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18be90: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x18be90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x18be94: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x18BE94u;
    {
        const bool branch_taken_0x18be94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18be94) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BE9Cu;
    // 0x18be9c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18bea0: 0x8c63bedc  lw          $v1, -0x4124($v1)
    ctx->pc = 0x18bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x18bea4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x18bea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18bea8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x18BEA8u;
    {
        const bool branch_taken_0x18bea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bea8) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BEB0u;
    // 0x18beb0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18BEB0u;
    {
        const bool branch_taken_0x18beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEB0u;
            // 0x18beb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18beb0) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BEB8u;
label_18beb8:
    // 0x18beb8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18beb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18bebc:
    // 0x18bebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18bebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bec0: 0xc063808  jal         func_18E020
    ctx->pc = 0x18BEC0u;
    SET_GPR_U32(ctx, 31, 0x18BEC8u);
    ctx->pc = 0x18BEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEC0u;
            // 0x18bec4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (runtime->hasFunction(0x18E020u)) {
        auto targetFn = runtime->lookupFunction(0x18E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEC8u; }
        if (ctx->pc != 0x18BEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E020_0x18e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEC8u; }
        if (ctx->pc != 0x18BEC8u) { return; }
    }
    ctx->pc = 0x18BEC8u;
label_18bec8:
    // 0x18bec8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18becc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18beccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18bed0: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x18bed0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18bed4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bed8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BED8u;
    {
        const bool branch_taken_0x18bed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BED8u;
            // 0x18bedc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bed8) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BEE0u;
    // 0x18bee0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18BEE0u;
    {
        const bool branch_taken_0x18bee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bee0) {
            ctx->pc = 0x18BF00u;
            goto label_18bf00;
        }
    }
    ctx->pc = 0x18BEE8u;
    // 0x18bee8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18beec: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x18beecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x18bef0: 0x8c65bee4  lw          $a1, -0x411C($v1)
    ctx->pc = 0x18bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x18bef4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18bef8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x18bef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x18befc: 0xac64bee4  sw          $a0, -0x411C($v1)
    ctx->pc = 0x18befcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950628), GPR_U32(ctx, 4));
label_18bf00:
    // 0x18bf00: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x18bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x18bf04: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x18bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x18bf08: 0x8c63bee4  lw          $v1, -0x411C($v1)
    ctx->pc = 0x18bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x18bf0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18bf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18bf10: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18BF10u;
    {
        const bool branch_taken_0x18bf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf10) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BF18u;
    // 0x18bf18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BF18u;
    {
        const bool branch_taken_0x18bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF18u;
            // 0x18bf1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf18) {
            ctx->pc = 0x18BF30u;
            goto label_18bf30;
        }
    }
    ctx->pc = 0x18BF20u;
label_18bf20:
    // 0x18bf20: 0xc063808  jal         func_18E020
    ctx->pc = 0x18BF20u;
    SET_GPR_U32(ctx, 31, 0x18BF28u);
    ctx->pc = 0x18BF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF20u;
            // 0x18bf24: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (runtime->hasFunction(0x18E020u)) {
        auto targetFn = runtime->lookupFunction(0x18E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF28u; }
        if (ctx->pc != 0x18BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E020_0x18e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF28u; }
        if (ctx->pc != 0x18BF28u) { return; }
    }
    ctx->pc = 0x18BF28u;
label_18bf28:
    // 0x18bf28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18bf2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18bf2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18bf30:
    // 0x18bf30: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x18bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_18bf34:
    // 0x18bf34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18bf34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18bf38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bf3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bf40: 0x3c033f90  lui         $v1, 0x3F90
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16272 << 16));
    // 0x18bf44: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18bf48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18bf48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bf4c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x18bf50: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x18bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x18bf54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18bf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bf58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18bf58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18bf5c: 0x1071804  sllv        $v1, $a3, $t0
    ctx->pc = 0x18bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
label_18bf60:
    // 0x18bf60: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x18bf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x18bf64: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x18BF64u;
    {
        const bool branch_taken_0x18bf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf64) {
            ctx->pc = 0x18C038u;
            goto label_18c038;
        }
    }
    ctx->pc = 0x18BF6Cu;
    // 0x18bf6c: 0x11060028  beq         $t0, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x18BF6Cu;
    {
        const bool branch_taken_0x18bf6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x18bf6c) {
            ctx->pc = 0x18C010u;
            goto label_18c010;
        }
    }
    ctx->pc = 0x18BF74u;
    // 0x18bf74: 0x1105001c  beq         $t0, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18BF74u;
    {
        const bool branch_taken_0x18bf74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x18bf74) {
            ctx->pc = 0x18BFE8u;
            goto label_18bfe8;
        }
    }
    ctx->pc = 0x18BF7Cu;
    // 0x18bf7c: 0x11040010  beq         $t0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18BF7Cu;
    {
        const bool branch_taken_0x18bf7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x18bf7c) {
            ctx->pc = 0x18BFC0u;
            goto label_18bfc0;
        }
    }
    ctx->pc = 0x18BF84u;
    // 0x18bf84: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BF84u;
    {
        const bool branch_taken_0x18bf84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf84) {
            ctx->pc = 0x18BF98u;
            goto label_18bf98;
        }
    }
    ctx->pc = 0x18BF8Cu;
    // 0x18bf8c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18BF8Cu;
    {
        const bool branch_taken_0x18bf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf8c) {
            ctx->pc = 0x18C038u;
            goto label_18c038;
        }
    }
    ctx->pc = 0x18BF94u;
    // 0x18bf94: 0x0  nop
    ctx->pc = 0x18bf94u;
    // NOP
label_18bf98:
    // 0x18bf98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bf9c: 0x0  nop
    ctx->pc = 0x18bf9cu;
    // NOP
    // 0x18bfa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18bfa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18bfa4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x18bfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x18bfa8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18bfa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18bfac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bfacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bfb0: 0x0  nop
    ctx->pc = 0x18bfb0u;
    // NOP
    // 0x18bfb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18bfb8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18BFB8u;
    {
        const bool branch_taken_0x18bfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFB8u;
            // 0x18bfbc: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfb8) {
            ctx->pc = 0x18C038u;
            goto label_18c038;
        }
    }
    ctx->pc = 0x18BFC0u;
label_18bfc0:
    // 0x18bfc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bfc4: 0x0  nop
    ctx->pc = 0x18bfc4u;
    // NOP
    // 0x18bfc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18bfc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18bfcc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18bfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18bfd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18bfd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18bfd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bfd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bfd8: 0x0  nop
    ctx->pc = 0x18bfd8u;
    // NOP
    // 0x18bfdc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18bfe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18BFE0u;
    {
        const bool branch_taken_0x18bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFE0u;
            // 0x18bfe4: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfe0) {
            ctx->pc = 0x18C038u;
            goto label_18c038;
        }
    }
    ctx->pc = 0x18BFE8u;
label_18bfe8:
    // 0x18bfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bfec: 0x0  nop
    ctx->pc = 0x18bfecu;
    // NOP
    // 0x18bff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18bff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18bff4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18bff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x18bff8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18bff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18bffc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c000: 0x0  nop
    ctx->pc = 0x18c000u;
    // NOP
    // 0x18c004: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c008: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18C008u;
    {
        const bool branch_taken_0x18c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C008u;
            // 0x18c00c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c008) {
            ctx->pc = 0x18C038u;
            goto label_18c038;
        }
    }
    ctx->pc = 0x18C010u;
label_18c010:
    // 0x18c010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c014: 0x0  nop
    ctx->pc = 0x18c014u;
    // NOP
    // 0x18c018: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c01c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18c01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18c020: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c024: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18c024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c028: 0x0  nop
    ctx->pc = 0x18c028u;
    // NOP
    // 0x18c02c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c030: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c034: 0x0  nop
    ctx->pc = 0x18c034u;
    // NOP
label_18c038:
    // 0x18c038: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18c038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18c03c: 0x29030020  slti        $v1, $t0, 0x20
    ctx->pc = 0x18c03cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18c040: 0x5460ffc7  bnel        $v1, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x18C040u;
    {
        const bool branch_taken_0x18c040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c040) {
            ctx->pc = 0x18C044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18C040u;
            // 0x18c044: 0x1071804  sllv        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BF60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18bf60;
        }
    }
    ctx->pc = 0x18C048u;
    // 0x18c048: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18c048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c04c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c04cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c058: 0x3e00008  jr          $ra
    ctx->pc = 0x18C058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C058u;
            // 0x18c05c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C060u;
    ctx->pc = 0x18c060u;
}
