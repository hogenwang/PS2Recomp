#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ABEB8
// Address: 0x2abeb8 - 0x2ac110
void sub_002ABEB8_0x2abeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABEB8_0x2abeb8");
#endif

    switch (ctx->pc) {
        case 0x2abeb8u: goto label_2abeb8;
        case 0x2abebcu: goto label_2abebc;
        case 0x2abec0u: goto label_2abec0;
        case 0x2abec4u: goto label_2abec4;
        case 0x2abec8u: goto label_2abec8;
        case 0x2abeccu: goto label_2abecc;
        case 0x2abed0u: goto label_2abed0;
        case 0x2abed4u: goto label_2abed4;
        case 0x2abed8u: goto label_2abed8;
        case 0x2abedcu: goto label_2abedc;
        case 0x2abee0u: goto label_2abee0;
        case 0x2abee4u: goto label_2abee4;
        case 0x2abee8u: goto label_2abee8;
        case 0x2abeecu: goto label_2abeec;
        case 0x2abef0u: goto label_2abef0;
        case 0x2abef4u: goto label_2abef4;
        case 0x2abef8u: goto label_2abef8;
        case 0x2abefcu: goto label_2abefc;
        case 0x2abf00u: goto label_2abf00;
        case 0x2abf04u: goto label_2abf04;
        case 0x2abf08u: goto label_2abf08;
        case 0x2abf0cu: goto label_2abf0c;
        case 0x2abf10u: goto label_2abf10;
        case 0x2abf14u: goto label_2abf14;
        case 0x2abf18u: goto label_2abf18;
        case 0x2abf1cu: goto label_2abf1c;
        case 0x2abf20u: goto label_2abf20;
        case 0x2abf24u: goto label_2abf24;
        case 0x2abf28u: goto label_2abf28;
        case 0x2abf2cu: goto label_2abf2c;
        case 0x2abf30u: goto label_2abf30;
        case 0x2abf34u: goto label_2abf34;
        case 0x2abf38u: goto label_2abf38;
        case 0x2abf3cu: goto label_2abf3c;
        case 0x2abf40u: goto label_2abf40;
        case 0x2abf44u: goto label_2abf44;
        case 0x2abf48u: goto label_2abf48;
        case 0x2abf4cu: goto label_2abf4c;
        case 0x2abf50u: goto label_2abf50;
        case 0x2abf54u: goto label_2abf54;
        case 0x2abf58u: goto label_2abf58;
        case 0x2abf5cu: goto label_2abf5c;
        case 0x2abf60u: goto label_2abf60;
        case 0x2abf64u: goto label_2abf64;
        case 0x2abf68u: goto label_2abf68;
        case 0x2abf6cu: goto label_2abf6c;
        case 0x2abf70u: goto label_2abf70;
        case 0x2abf74u: goto label_2abf74;
        case 0x2abf78u: goto label_2abf78;
        case 0x2abf7cu: goto label_2abf7c;
        case 0x2abf80u: goto label_2abf80;
        case 0x2abf84u: goto label_2abf84;
        case 0x2abf88u: goto label_2abf88;
        case 0x2abf8cu: goto label_2abf8c;
        case 0x2abf90u: goto label_2abf90;
        case 0x2abf94u: goto label_2abf94;
        case 0x2abf98u: goto label_2abf98;
        case 0x2abf9cu: goto label_2abf9c;
        case 0x2abfa0u: goto label_2abfa0;
        case 0x2abfa4u: goto label_2abfa4;
        case 0x2abfa8u: goto label_2abfa8;
        case 0x2abfacu: goto label_2abfac;
        case 0x2abfb0u: goto label_2abfb0;
        case 0x2abfb4u: goto label_2abfb4;
        case 0x2abfb8u: goto label_2abfb8;
        case 0x2abfbcu: goto label_2abfbc;
        case 0x2abfc0u: goto label_2abfc0;
        case 0x2abfc4u: goto label_2abfc4;
        case 0x2abfc8u: goto label_2abfc8;
        case 0x2abfccu: goto label_2abfcc;
        case 0x2abfd0u: goto label_2abfd0;
        case 0x2abfd4u: goto label_2abfd4;
        case 0x2abfd8u: goto label_2abfd8;
        case 0x2abfdcu: goto label_2abfdc;
        case 0x2abfe0u: goto label_2abfe0;
        case 0x2abfe4u: goto label_2abfe4;
        case 0x2abfe8u: goto label_2abfe8;
        case 0x2abfecu: goto label_2abfec;
        case 0x2abff0u: goto label_2abff0;
        case 0x2abff4u: goto label_2abff4;
        case 0x2abff8u: goto label_2abff8;
        case 0x2abffcu: goto label_2abffc;
        case 0x2ac000u: goto label_2ac000;
        case 0x2ac004u: goto label_2ac004;
        case 0x2ac008u: goto label_2ac008;
        case 0x2ac00cu: goto label_2ac00c;
        case 0x2ac010u: goto label_2ac010;
        case 0x2ac014u: goto label_2ac014;
        case 0x2ac018u: goto label_2ac018;
        case 0x2ac01cu: goto label_2ac01c;
        case 0x2ac020u: goto label_2ac020;
        case 0x2ac024u: goto label_2ac024;
        case 0x2ac028u: goto label_2ac028;
        case 0x2ac02cu: goto label_2ac02c;
        case 0x2ac030u: goto label_2ac030;
        case 0x2ac034u: goto label_2ac034;
        case 0x2ac038u: goto label_2ac038;
        case 0x2ac03cu: goto label_2ac03c;
        case 0x2ac040u: goto label_2ac040;
        case 0x2ac044u: goto label_2ac044;
        case 0x2ac048u: goto label_2ac048;
        case 0x2ac04cu: goto label_2ac04c;
        case 0x2ac050u: goto label_2ac050;
        case 0x2ac054u: goto label_2ac054;
        case 0x2ac058u: goto label_2ac058;
        case 0x2ac05cu: goto label_2ac05c;
        case 0x2ac060u: goto label_2ac060;
        case 0x2ac064u: goto label_2ac064;
        case 0x2ac068u: goto label_2ac068;
        case 0x2ac06cu: goto label_2ac06c;
        case 0x2ac070u: goto label_2ac070;
        case 0x2ac074u: goto label_2ac074;
        case 0x2ac078u: goto label_2ac078;
        case 0x2ac07cu: goto label_2ac07c;
        case 0x2ac080u: goto label_2ac080;
        case 0x2ac084u: goto label_2ac084;
        case 0x2ac088u: goto label_2ac088;
        case 0x2ac08cu: goto label_2ac08c;
        case 0x2ac090u: goto label_2ac090;
        case 0x2ac094u: goto label_2ac094;
        case 0x2ac098u: goto label_2ac098;
        case 0x2ac09cu: goto label_2ac09c;
        case 0x2ac0a0u: goto label_2ac0a0;
        case 0x2ac0a4u: goto label_2ac0a4;
        case 0x2ac0a8u: goto label_2ac0a8;
        case 0x2ac0acu: goto label_2ac0ac;
        case 0x2ac0b0u: goto label_2ac0b0;
        case 0x2ac0b4u: goto label_2ac0b4;
        case 0x2ac0b8u: goto label_2ac0b8;
        case 0x2ac0bcu: goto label_2ac0bc;
        case 0x2ac0c0u: goto label_2ac0c0;
        case 0x2ac0c4u: goto label_2ac0c4;
        case 0x2ac0c8u: goto label_2ac0c8;
        case 0x2ac0ccu: goto label_2ac0cc;
        case 0x2ac0d0u: goto label_2ac0d0;
        case 0x2ac0d4u: goto label_2ac0d4;
        case 0x2ac0d8u: goto label_2ac0d8;
        case 0x2ac0dcu: goto label_2ac0dc;
        case 0x2ac0e0u: goto label_2ac0e0;
        case 0x2ac0e4u: goto label_2ac0e4;
        case 0x2ac0e8u: goto label_2ac0e8;
        case 0x2ac0ecu: goto label_2ac0ec;
        case 0x2ac0f0u: goto label_2ac0f0;
        case 0x2ac0f4u: goto label_2ac0f4;
        case 0x2ac0f8u: goto label_2ac0f8;
        case 0x2ac0fcu: goto label_2ac0fc;
        case 0x2ac100u: goto label_2ac100;
        case 0x2ac104u: goto label_2ac104;
        case 0x2ac108u: goto label_2ac108;
        case 0x2ac10cu: goto label_2ac10c;
        default: break;
    }

    ctx->pc = 0x2abeb8u;

label_2abeb8:
    // 0x2abeb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2abeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2abebc:
    // 0x2abebc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2abebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2abec0:
    // 0x2abec0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2abec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2abec4:
    // 0x2abec4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2abec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abec8:
    // 0x2abec8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2abec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2abecc:
    // 0x2abecc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2abeccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abed0:
    // 0x2abed0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2abed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2abed4:
    // 0x2abed4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2abed4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abed8:
    // 0x2abed8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2abed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2abedc:
    // 0x2abedc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2abedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abee0:
    // 0x2abee0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2abee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2abee4:
    // 0x2abee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2abee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2abee8:
    // 0x2abee8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2abee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2abeec:
    // 0x2abeec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2abeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2abef0:
    // 0x2abef0: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2abef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2abef4:
    // 0x2abef4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2abef8:
    if (ctx->pc == 0x2ABEF8u) {
        ctx->pc = 0x2ABEF8u;
            // 0x2abef8: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x2ABEFCu;
        goto label_2abefc;
    }
    ctx->pc = 0x2ABEF4u;
    {
        const bool branch_taken_0x2abef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABEF4u;
            // 0x2abef8: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abef4) {
            ctx->pc = 0x2ABF08u;
            goto label_2abf08;
        }
    }
    ctx->pc = 0x2ABEFCu;
label_2abefc:
    // 0x2abefc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2abefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abf00:
    // 0x2abf00: 0x10000007  b           . + 4 + (0x7 << 2)
label_2abf04:
    if (ctx->pc == 0x2ABF04u) {
        ctx->pc = 0x2ABF04u;
            // 0x2abf04: 0x8e3400c8  lw          $s4, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->pc = 0x2ABF08u;
        goto label_2abf08;
    }
    ctx->pc = 0x2ABF00u;
    {
        const bool branch_taken_0x2abf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF00u;
            // 0x2abf04: 0x8e3400c8  lw          $s4, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf00) {
            ctx->pc = 0x2ABF20u;
            goto label_2abf20;
        }
    }
    ctx->pc = 0x2ABF08u;
label_2abf08:
    // 0x2abf08: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2abf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2abf0c:
    // 0x2abf0c: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2abf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2abf10:
    // 0x2abf10: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_2abf14:
    if (ctx->pc == 0x2ABF14u) {
        ctx->pc = 0x2ABF14u;
            // 0x2abf14: 0xc0302d  daddu       $a2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF18u;
        goto label_2abf18;
    }
    ctx->pc = 0x2ABF10u;
    {
        const bool branch_taken_0x2abf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abf10) {
            ctx->pc = 0x2ABF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF10u;
            // 0x2abf14: 0xc0302d  daddu       $a2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ABF20u;
            goto label_2abf20;
        }
    }
    ctx->pc = 0x2ABF18u;
label_2abf18:
    // 0x2abf18: 0x8c540084  lw          $s4, 0x84($v0)
    ctx->pc = 0x2abf18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2abf1c:
    // 0x2abf1c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2abf1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2abf20:
    // 0x2abf20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2abf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abf24:
    // 0x2abf24: 0xc0a3954  jal         func_28E550
label_2abf28:
    if (ctx->pc == 0x2ABF28u) {
        ctx->pc = 0x2ABF28u;
            // 0x2abf28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF2Cu;
        goto label_2abf2c;
    }
    ctx->pc = 0x2ABF24u;
    SET_GPR_U32(ctx, 31, 0x2ABF2Cu);
    ctx->pc = 0x2ABF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF24u;
            // 0x2abf28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E550u;
    if (runtime->hasFunction(0x28E550u)) {
        auto targetFn = runtime->lookupFunction(0x28E550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF2Cu; }
        if (ctx->pc != 0x2ABF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E550_0x28e550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF2Cu; }
        if (ctx->pc != 0x2ABF2Cu) { return; }
    }
    ctx->pc = 0x2ABF2Cu;
label_2abf2c:
    // 0x2abf2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2abf2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abf30:
    // 0x2abf30: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
label_2abf34:
    if (ctx->pc == 0x2ABF34u) {
        ctx->pc = 0x2ABF38u;
        goto label_2abf38;
    }
    ctx->pc = 0x2ABF30u;
    {
        const bool branch_taken_0x2abf30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abf30) {
            ctx->pc = 0x2ABF60u;
            goto label_2abf60;
        }
    }
    ctx->pc = 0x2ABF38u;
label_2abf38:
    // 0x2abf38: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2abf3c:
    if (ctx->pc == 0x2ABF3Cu) {
        ctx->pc = 0x2ABF3Cu;
            // 0x2abf3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF40u;
        goto label_2abf40;
    }
    ctx->pc = 0x2ABF38u;
    {
        const bool branch_taken_0x2abf38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF38u;
            // 0x2abf3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf38) {
            ctx->pc = 0x2ABF50u;
            goto label_2abf50;
        }
    }
    ctx->pc = 0x2ABF40u;
label_2abf40:
    // 0x2abf40: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2abf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2abf44:
    // 0x2abf44: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2abf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2abf48:
    // 0x2abf48: 0x240f809  jalr        $s2
label_2abf4c:
    if (ctx->pc == 0x2ABF4Cu) {
        ctx->pc = 0x2ABF4Cu;
            // 0x2abf4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF50u;
        goto label_2abf50;
    }
    ctx->pc = 0x2ABF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2ABF50u);
        ctx->pc = 0x2ABF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF48u;
            // 0x2abf4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ABF50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF50u; }
            if (ctx->pc != 0x2ABF50u) { return; }
        }
        }
    }
    ctx->pc = 0x2ABF50u;
label_2abf50:
    // 0x2abf50: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2abf54:
    // 0x2abf54: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2abf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2abf58:
    // 0x2abf58: 0x10000052  b           . + 4 + (0x52 << 2)
label_2abf5c:
    if (ctx->pc == 0x2ABF5Cu) {
        ctx->pc = 0x2ABF5Cu;
            // 0x2abf5c: 0x2406080b  addiu       $a2, $zero, 0x80B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
        ctx->pc = 0x2ABF60u;
        goto label_2abf60;
    }
    ctx->pc = 0x2ABF58u;
    {
        const bool branch_taken_0x2abf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF58u;
            // 0x2abf5c: 0x2406080b  addiu       $a2, $zero, 0x80B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf58) {
            ctx->pc = 0x2AC0A4u;
            goto label_2ac0a4;
        }
    }
    ctx->pc = 0x2ABF60u;
label_2abf60:
    // 0x2abf60: 0xc0af004  jal         func_2BC010
label_2abf64:
    if (ctx->pc == 0x2ABF64u) {
        ctx->pc = 0x2ABF64u;
            // 0x2abf64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF68u;
        goto label_2abf68;
    }
    ctx->pc = 0x2ABF60u;
    SET_GPR_U32(ctx, 31, 0x2ABF68u);
    ctx->pc = 0x2ABF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF60u;
            // 0x2abf64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF68u; }
        if (ctx->pc != 0x2ABF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF68u; }
        if (ctx->pc != 0x2ABF68u) { return; }
    }
    ctx->pc = 0x2ABF68u;
label_2abf68:
    // 0x2abf68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2abf68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abf6c:
    // 0x2abf6c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2abf70:
    if (ctx->pc == 0x2ABF70u) {
        ctx->pc = 0x2ABF70u;
            // 0x2abf70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF74u;
        goto label_2abf74;
    }
    ctx->pc = 0x2ABF6Cu;
    {
        const bool branch_taken_0x2abf6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF6Cu;
            // 0x2abf70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf6c) {
            ctx->pc = 0x2ABF84u;
            goto label_2abf84;
        }
    }
    ctx->pc = 0x2ABF74u;
label_2abf74:
    // 0x2abf74: 0xc0af10e  jal         func_2BC438
label_2abf78:
    if (ctx->pc == 0x2ABF78u) {
        ctx->pc = 0x2ABF78u;
            // 0x2abf78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF7Cu;
        goto label_2abf7c;
    }
    ctx->pc = 0x2ABF74u;
    SET_GPR_U32(ctx, 31, 0x2ABF7Cu);
    ctx->pc = 0x2ABF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF74u;
            // 0x2abf78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF7Cu; }
        if (ctx->pc != 0x2ABF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF7Cu; }
        if (ctx->pc != 0x2ABF7Cu) { return; }
    }
    ctx->pc = 0x2ABF7Cu;
label_2abf7c:
    // 0x2abf7c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2abf80:
    if (ctx->pc == 0x2ABF80u) {
        ctx->pc = 0x2ABF80u;
            // 0x2abf80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF84u;
        goto label_2abf84;
    }
    ctx->pc = 0x2ABF7Cu;
    {
        const bool branch_taken_0x2abf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF7Cu;
            // 0x2abf80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf7c) {
            ctx->pc = 0x2ABFACu;
            goto label_2abfac;
        }
    }
    ctx->pc = 0x2ABF84u;
label_2abf84:
    // 0x2abf84: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2abf88:
    if (ctx->pc == 0x2ABF88u) {
        ctx->pc = 0x2ABF88u;
            // 0x2abf88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF8Cu;
        goto label_2abf8c;
    }
    ctx->pc = 0x2ABF84u;
    {
        const bool branch_taken_0x2abf84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF84u;
            // 0x2abf88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abf84) {
            ctx->pc = 0x2ABF9Cu;
            goto label_2abf9c;
        }
    }
    ctx->pc = 0x2ABF8Cu;
label_2abf8c:
    // 0x2abf8c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2abf8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2abf90:
    // 0x2abf90: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2abf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2abf94:
    // 0x2abf94: 0x240f809  jalr        $s2
label_2abf98:
    if (ctx->pc == 0x2ABF98u) {
        ctx->pc = 0x2ABF98u;
            // 0x2abf98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABF9Cu;
        goto label_2abf9c;
    }
    ctx->pc = 0x2ABF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2ABF9Cu);
        ctx->pc = 0x2ABF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABF94u;
            // 0x2abf98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ABF9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ABF9Cu; }
            if (ctx->pc != 0x2ABF9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2ABF9Cu;
label_2abf9c:
    // 0x2abf9c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2abfa0:
    // 0x2abfa0: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2abfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2abfa4:
    // 0x2abfa4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2abfa8:
    if (ctx->pc == 0x2ABFA8u) {
        ctx->pc = 0x2ABFA8u;
            // 0x2abfa8: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x2ABFACu;
        goto label_2abfac;
    }
    ctx->pc = 0x2ABFA4u;
    {
        const bool branch_taken_0x2abfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFA4u;
            // 0x2abfa8: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfa4) {
            ctx->pc = 0x2AC0A4u;
            goto label_2ac0a4;
        }
    }
    ctx->pc = 0x2ABFACu;
label_2abfac:
    // 0x2abfac: 0xc0abeb2  jal         func_2AFAC8
label_2abfb0:
    if (ctx->pc == 0x2ABFB0u) {
        ctx->pc = 0x2ABFB0u;
            // 0x2abfb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFB4u;
        goto label_2abfb4;
    }
    ctx->pc = 0x2ABFACu;
    SET_GPR_U32(ctx, 31, 0x2ABFB4u);
    ctx->pc = 0x2ABFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFACu;
            // 0x2abfb0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFAC8u;
    if (runtime->hasFunction(0x2AFAC8u)) {
        auto targetFn = runtime->lookupFunction(0x2AFAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFB4u; }
        if (ctx->pc != 0x2ABFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFAC8_0x2afac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFB4u; }
        if (ctx->pc != 0x2ABFB4u) { return; }
    }
    ctx->pc = 0x2ABFB4u;
label_2abfb4:
    // 0x2abfb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2abfb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abfb8:
    // 0x2abfb8: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2abfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2abfbc:
    // 0x2abfbc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2abfc0:
    if (ctx->pc == 0x2ABFC0u) {
        ctx->pc = 0x2ABFC4u;
        goto label_2abfc4;
    }
    ctx->pc = 0x2ABFBCu;
    {
        const bool branch_taken_0x2abfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abfbc) {
            ctx->pc = 0x2ABFF4u;
            goto label_2abff4;
        }
    }
    ctx->pc = 0x2ABFC4u;
label_2abfc4:
    // 0x2abfc4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2abfc8:
    if (ctx->pc == 0x2ABFC8u) {
        ctx->pc = 0x2ABFCCu;
        goto label_2abfcc;
    }
    ctx->pc = 0x2ABFC4u;
    {
        const bool branch_taken_0x2abfc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abfc4) {
            ctx->pc = 0x2ABFF4u;
            goto label_2abff4;
        }
    }
    ctx->pc = 0x2ABFCCu;
label_2abfcc:
    // 0x2abfcc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2abfd0:
    if (ctx->pc == 0x2ABFD0u) {
        ctx->pc = 0x2ABFD0u;
            // 0x2abfd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFD4u;
        goto label_2abfd4;
    }
    ctx->pc = 0x2ABFCCu;
    {
        const bool branch_taken_0x2abfcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFCCu;
            // 0x2abfd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfcc) {
            ctx->pc = 0x2ABFE4u;
            goto label_2abfe4;
        }
    }
    ctx->pc = 0x2ABFD4u;
label_2abfd4:
    // 0x2abfd4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2abfd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2abfd8:
    // 0x2abfd8: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2abfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2abfdc:
    // 0x2abfdc: 0x240f809  jalr        $s2
label_2abfe0:
    if (ctx->pc == 0x2ABFE0u) {
        ctx->pc = 0x2ABFE0u;
            // 0x2abfe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFE4u;
        goto label_2abfe4;
    }
    ctx->pc = 0x2ABFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2ABFE4u);
        ctx->pc = 0x2ABFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFDCu;
            // 0x2abfe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ABFE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFE4u; }
            if (ctx->pc != 0x2ABFE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2ABFE4u;
label_2abfe4:
    // 0x2abfe4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2abfe8:
    // 0x2abfe8: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2abfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2abfec:
    // 0x2abfec: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2abff0:
    if (ctx->pc == 0x2ABFF0u) {
        ctx->pc = 0x2ABFF0u;
            // 0x2abff0: 0x24060086  addiu       $a2, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->pc = 0x2ABFF4u;
        goto label_2abff4;
    }
    ctx->pc = 0x2ABFECu;
    {
        const bool branch_taken_0x2abfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ABFECu;
            // 0x2abff0: 0x24060086  addiu       $a2, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abfec) {
            ctx->pc = 0x2AC0A4u;
            goto label_2ac0a4;
        }
    }
    ctx->pc = 0x2ABFF4u;
label_2abff4:
    // 0x2abff4: 0xc0abe46  jal         func_2AF918
label_2abff8:
    if (ctx->pc == 0x2ABFF8u) {
        ctx->pc = 0x2ABFFCu;
        goto label_2abffc;
    }
    ctx->pc = 0x2ABFF4u;
    SET_GPR_U32(ctx, 31, 0x2ABFFCu);
    ctx->pc = 0x2AF918u;
    if (runtime->hasFunction(0x2AF918u)) {
        auto targetFn = runtime->lookupFunction(0x2AF918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFFCu; }
        if (ctx->pc != 0x2ABFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF918_0x2af918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABFFCu; }
        if (ctx->pc != 0x2ABFFCu) { return; }
    }
    ctx->pc = 0x2ABFFCu;
label_2abffc:
    // 0x2abffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2abffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac000:
    // 0x2ac000: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_2ac004:
    if (ctx->pc == 0x2AC004u) {
        ctx->pc = 0x2AC004u;
            // 0x2ac004: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->pc = 0x2AC008u;
        goto label_2ac008;
    }
    ctx->pc = 0x2AC000u;
    {
        const bool branch_taken_0x2ac000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac000) {
            ctx->pc = 0x2AC004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC000u;
            // 0x2ac004: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC010u;
            goto label_2ac010;
        }
    }
    ctx->pc = 0x2AC008u;
label_2ac008:
    // 0x2ac008: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2ac00c:
    if (ctx->pc == 0x2AC00Cu) {
        ctx->pc = 0x2AC00Cu;
            // 0x2ac00c: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AC010u;
        goto label_2ac010;
    }
    ctx->pc = 0x2AC008u;
    {
        const bool branch_taken_0x2ac008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC008u;
            // 0x2ac00c: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac008) {
            ctx->pc = 0x2AC0C4u;
            goto label_2ac0c4;
        }
    }
    ctx->pc = 0x2AC010u;
label_2ac010:
    // 0x2ac010: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2ac010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2ac014:
    // 0x2ac014: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2ac018:
    if (ctx->pc == 0x2AC018u) {
        ctx->pc = 0x2AC018u;
            // 0x2ac018: 0xac500090  sw          $s0, 0x90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 16));
        ctx->pc = 0x2AC01Cu;
        goto label_2ac01c;
    }
    ctx->pc = 0x2AC014u;
    {
        const bool branch_taken_0x2ac014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac014) {
            ctx->pc = 0x2AC018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC014u;
            // 0x2ac018: 0xac500090  sw          $s0, 0x90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC02Cu;
            goto label_2ac02c;
        }
    }
    ctx->pc = 0x2AC01Cu;
label_2ac01c:
    // 0x2ac01c: 0xc0abe62  jal         func_2AF988
label_2ac020:
    if (ctx->pc == 0x2AC020u) {
        ctx->pc = 0x2AC024u;
        goto label_2ac024;
    }
    ctx->pc = 0x2AC01Cu;
    SET_GPR_U32(ctx, 31, 0x2AC024u);
    ctx->pc = 0x2AF988u;
    if (runtime->hasFunction(0x2AF988u)) {
        auto targetFn = runtime->lookupFunction(0x2AF988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC024u; }
        if (ctx->pc != 0x2AC024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF988_0x2af988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC024u; }
        if (ctx->pc != 0x2AC024u) { return; }
    }
    ctx->pc = 0x2AC024u;
label_2ac024:
    // 0x2ac024: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2ac024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2ac028:
    // 0x2ac028: 0xac500090  sw          $s0, 0x90($v0)
    ctx->pc = 0x2ac028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 16));
label_2ac02c:
    // 0x2ac02c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ac02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ac030:
    // 0x2ac030: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x2ac030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2ac034:
    // 0x2ac034: 0xae130040  sw          $s3, 0x40($s0)
    ctx->pc = 0x2ac034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 19));
label_2ac038:
    // 0x2ac038: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ac038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2ac03c:
    // 0x2ac03c: 0xc0a39c0  jal         func_28E700
label_2ac040:
    if (ctx->pc == 0x2AC040u) {
        ctx->pc = 0x2AC040u;
            // 0x2ac040: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC044u;
        goto label_2ac044;
    }
    ctx->pc = 0x2AC03Cu;
    SET_GPR_U32(ctx, 31, 0x2AC044u);
    ctx->pc = 0x2AC040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC03Cu;
            // 0x2ac040: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC044u; }
        if (ctx->pc != 0x2AC044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC044u; }
        if (ctx->pc != 0x2AC044u) { return; }
    }
    ctx->pc = 0x2AC044u;
label_2ac044:
    // 0x2ac044: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2ac048:
    if (ctx->pc == 0x2AC048u) {
        ctx->pc = 0x2AC048u;
            // 0x2ac048: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2AC04Cu;
        goto label_2ac04c;
    }
    ctx->pc = 0x2AC044u;
    {
        const bool branch_taken_0x2ac044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac044) {
            ctx->pc = 0x2AC048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC044u;
            // 0x2ac048: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC074u;
            goto label_2ac074;
        }
    }
    ctx->pc = 0x2AC04Cu;
label_2ac04c:
    // 0x2ac04c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2ac050:
    if (ctx->pc == 0x2AC050u) {
        ctx->pc = 0x2AC050u;
            // 0x2ac050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC054u;
        goto label_2ac054;
    }
    ctx->pc = 0x2AC04Cu;
    {
        const bool branch_taken_0x2ac04c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC04Cu;
            // 0x2ac050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac04c) {
            ctx->pc = 0x2AC064u;
            goto label_2ac064;
        }
    }
    ctx->pc = 0x2AC054u;
label_2ac054:
    // 0x2ac054: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ac054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac058:
    // 0x2ac058: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2ac058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2ac05c:
    // 0x2ac05c: 0x240f809  jalr        $s2
label_2ac060:
    if (ctx->pc == 0x2AC060u) {
        ctx->pc = 0x2AC060u;
            // 0x2ac060: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC064u;
        goto label_2ac064;
    }
    ctx->pc = 0x2AC05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2AC064u);
        ctx->pc = 0x2AC060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC05Cu;
            // 0x2ac060: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AC064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AC064u; }
            if (ctx->pc != 0x2AC064u) { return; }
        }
        }
    }
    ctx->pc = 0x2AC064u;
label_2ac064:
    // 0x2ac064: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ac068:
    // 0x2ac068: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2ac068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2ac06c:
    // 0x2ac06c: 0x1000000d  b           . + 4 + (0xD << 2)
label_2ac070:
    if (ctx->pc == 0x2AC070u) {
        ctx->pc = 0x2AC070u;
            // 0x2ac070: 0x240600ed  addiu       $a2, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->pc = 0x2AC074u;
        goto label_2ac074;
    }
    ctx->pc = 0x2AC06Cu;
    {
        const bool branch_taken_0x2ac06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC06Cu;
            // 0x2ac070: 0x240600ed  addiu       $a2, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac06c) {
            ctx->pc = 0x2AC0A4u;
            goto label_2ac0a4;
        }
    }
    ctx->pc = 0x2AC074u;
label_2ac074:
    // 0x2ac074: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ac074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ac078:
    // 0x2ac078: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2ac07c:
    if (ctx->pc == 0x2AC07Cu) {
        ctx->pc = 0x2AC07Cu;
            // 0x2ac07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC080u;
        goto label_2ac080;
    }
    ctx->pc = 0x2AC078u;
    {
        const bool branch_taken_0x2ac078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AC07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC078u;
            // 0x2ac07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac078) {
            ctx->pc = 0x2AC0B8u;
            goto label_2ac0b8;
        }
    }
    ctx->pc = 0x2AC080u;
label_2ac080:
    // 0x2ac080: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2ac084:
    if (ctx->pc == 0x2AC084u) {
        ctx->pc = 0x2AC084u;
            // 0x2ac084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC088u;
        goto label_2ac088;
    }
    ctx->pc = 0x2AC080u;
    {
        const bool branch_taken_0x2ac080 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC080u;
            // 0x2ac084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac080) {
            ctx->pc = 0x2AC098u;
            goto label_2ac098;
        }
    }
    ctx->pc = 0x2AC088u;
label_2ac088:
    // 0x2ac088: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ac088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac08c:
    // 0x2ac08c: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2ac08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2ac090:
    // 0x2ac090: 0x240f809  jalr        $s2
label_2ac094:
    if (ctx->pc == 0x2AC094u) {
        ctx->pc = 0x2AC094u;
            // 0x2ac094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC098u;
        goto label_2ac098;
    }
    ctx->pc = 0x2AC090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2AC098u);
        ctx->pc = 0x2AC094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC090u;
            // 0x2ac094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AC098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AC098u; }
            if (ctx->pc != 0x2AC098u) { return; }
        }
        }
    }
    ctx->pc = 0x2AC098u;
label_2ac098:
    // 0x2ac098: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ac09c:
    // 0x2ac09c: 0x2405007e  addiu       $a1, $zero, 0x7E
    ctx->pc = 0x2ac09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2ac0a0:
    // 0x2ac0a0: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x2ac0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_2ac0a4:
    // 0x2ac0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ac0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac0a8:
    // 0x2ac0a8: 0xc0a5648  jal         func_295920
label_2ac0ac:
    if (ctx->pc == 0x2AC0ACu) {
        ctx->pc = 0x2AC0ACu;
            // 0x2ac0ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0B0u;
        goto label_2ac0b0;
    }
    ctx->pc = 0x2AC0A8u;
    SET_GPR_U32(ctx, 31, 0x2AC0B0u);
    ctx->pc = 0x2AC0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0A8u;
            // 0x2ac0ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0B0u; }
        if (ctx->pc != 0x2AC0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0B0u; }
        if (ctx->pc != 0x2AC0B0u) { return; }
    }
    ctx->pc = 0x2AC0B0u;
label_2ac0b0:
    // 0x2ac0b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ac0b4:
    if (ctx->pc == 0x2AC0B4u) {
        ctx->pc = 0x2AC0B8u;
        goto label_2ac0b8;
    }
    ctx->pc = 0x2AC0B0u;
    {
        const bool branch_taken_0x2ac0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac0b0) {
            ctx->pc = 0x2AC0C4u;
            goto label_2ac0c4;
        }
    }
    ctx->pc = 0x2AC0B8u;
label_2ac0b8:
    // 0x2ac0b8: 0xc0abeae  jal         func_2AFAB8
label_2ac0bc:
    if (ctx->pc == 0x2AC0BCu) {
        ctx->pc = 0x2AC0BCu;
            // 0x2ac0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AC0C0u;
        goto label_2ac0c0;
    }
    ctx->pc = 0x2AC0B8u;
    SET_GPR_U32(ctx, 31, 0x2AC0C0u);
    ctx->pc = 0x2AC0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0B8u;
            // 0x2ac0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFAB8u;
    if (runtime->hasFunction(0x2AFAB8u)) {
        auto targetFn = runtime->lookupFunction(0x2AFAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0C0u; }
        if (ctx->pc != 0x2AC0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFAB8_0x2afab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0C0u; }
        if (ctx->pc != 0x2AC0C0u) { return; }
    }
    ctx->pc = 0x2AC0C0u;
label_2ac0c0:
    // 0x2ac0c0: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2ac0c0u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ac0c4:
    // 0x2ac0c4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_2ac0c8:
    if (ctx->pc == 0x2AC0C8u) {
        ctx->pc = 0x2AC0CCu;
        goto label_2ac0cc;
    }
    ctx->pc = 0x2AC0C4u;
    {
        const bool branch_taken_0x2ac0c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac0c4) {
            ctx->pc = 0x2AC0D4u;
            goto label_2ac0d4;
        }
    }
    ctx->pc = 0x2AC0CCu;
label_2ac0cc:
    // 0x2ac0cc: 0xc0af176  jal         func_2BC5D8
label_2ac0d0:
    if (ctx->pc == 0x2AC0D0u) {
        ctx->pc = 0x2AC0D0u;
            // 0x2ac0d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0D4u;
        goto label_2ac0d4;
    }
    ctx->pc = 0x2AC0CCu;
    SET_GPR_U32(ctx, 31, 0x2AC0D4u);
    ctx->pc = 0x2AC0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0CCu;
            // 0x2ac0d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0D4u; }
        if (ctx->pc != 0x2AC0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0D4u; }
        if (ctx->pc != 0x2AC0D4u) { return; }
    }
    ctx->pc = 0x2AC0D4u;
label_2ac0d4:
    // 0x2ac0d4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2ac0d8:
    if (ctx->pc == 0x2AC0D8u) {
        ctx->pc = 0x2AC0D8u;
            // 0x2ac0d8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0DCu;
        goto label_2ac0dc;
    }
    ctx->pc = 0x2AC0D4u;
    {
        const bool branch_taken_0x2ac0d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0D4u;
            // 0x2ac0d8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0d4) {
            ctx->pc = 0x2AC0E8u;
            goto label_2ac0e8;
        }
    }
    ctx->pc = 0x2AC0DCu;
label_2ac0dc:
    // 0x2ac0dc: 0xc0a390c  jal         func_28E430
label_2ac0e0:
    if (ctx->pc == 0x2AC0E0u) {
        ctx->pc = 0x2AC0E0u;
            // 0x2ac0e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0E4u;
        goto label_2ac0e4;
    }
    ctx->pc = 0x2AC0DCu;
    SET_GPR_U32(ctx, 31, 0x2AC0E4u);
    ctx->pc = 0x2AC0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0DCu;
            // 0x2ac0e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0E4u; }
        if (ctx->pc != 0x2AC0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC0E4u; }
        if (ctx->pc != 0x2AC0E4u) { return; }
    }
    ctx->pc = 0x2AC0E4u;
label_2ac0e4:
    // 0x2ac0e4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2ac0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ac0e8:
    // 0x2ac0e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ac0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ac0ec:
    // 0x2ac0ec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2ac0ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ac0f0:
    // 0x2ac0f0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ac0f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ac0f4:
    // 0x2ac0f4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ac0f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ac0f8:
    // 0x2ac0f8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ac0f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ac0fc:
    // 0x2ac0fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ac0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ac100:
    // 0x2ac100: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ac100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac104:
    // 0x2ac104: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ac104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac108:
    // 0x2ac108: 0x3e00008  jr          $ra
label_2ac10c:
    if (ctx->pc == 0x2AC10Cu) {
        ctx->pc = 0x2AC10Cu;
            // 0x2ac10c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2AC110u;
        goto label_fallthrough_0x2ac108;
    }
    ctx->pc = 0x2AC108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC108u;
            // 0x2ac10c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ac108:
    ctx->pc = 0x2AC110u;
    ctx->pc = 0x2ac110u;
}
