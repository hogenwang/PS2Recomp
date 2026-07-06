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

// Function: sub_001BCB48
// Address: 0x1bcb48 - 0x1bcf70
void sub_001BCB48_0x1bcb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCB48_0x1bcb48");
#endif

    switch (ctx->pc) {
        case 0x1bcb48u: goto label_1bcb48;
        case 0x1bcb4cu: goto label_1bcb4c;
        case 0x1bcb50u: goto label_1bcb50;
        case 0x1bcb54u: goto label_1bcb54;
        case 0x1bcb58u: goto label_1bcb58;
        case 0x1bcb5cu: goto label_1bcb5c;
        case 0x1bcb60u: goto label_1bcb60;
        case 0x1bcb64u: goto label_1bcb64;
        case 0x1bcb68u: goto label_1bcb68;
        case 0x1bcb6cu: goto label_1bcb6c;
        case 0x1bcb70u: goto label_1bcb70;
        case 0x1bcb74u: goto label_1bcb74;
        case 0x1bcb78u: goto label_1bcb78;
        case 0x1bcb7cu: goto label_1bcb7c;
        case 0x1bcb80u: goto label_1bcb80;
        case 0x1bcb84u: goto label_1bcb84;
        case 0x1bcb88u: goto label_1bcb88;
        case 0x1bcb8cu: goto label_1bcb8c;
        case 0x1bcb90u: goto label_1bcb90;
        case 0x1bcb94u: goto label_1bcb94;
        case 0x1bcb98u: goto label_1bcb98;
        case 0x1bcb9cu: goto label_1bcb9c;
        case 0x1bcba0u: goto label_1bcba0;
        case 0x1bcba4u: goto label_1bcba4;
        case 0x1bcba8u: goto label_1bcba8;
        case 0x1bcbacu: goto label_1bcbac;
        case 0x1bcbb0u: goto label_1bcbb0;
        case 0x1bcbb4u: goto label_1bcbb4;
        case 0x1bcbb8u: goto label_1bcbb8;
        case 0x1bcbbcu: goto label_1bcbbc;
        case 0x1bcbc0u: goto label_1bcbc0;
        case 0x1bcbc4u: goto label_1bcbc4;
        case 0x1bcbc8u: goto label_1bcbc8;
        case 0x1bcbccu: goto label_1bcbcc;
        case 0x1bcbd0u: goto label_1bcbd0;
        case 0x1bcbd4u: goto label_1bcbd4;
        case 0x1bcbd8u: goto label_1bcbd8;
        case 0x1bcbdcu: goto label_1bcbdc;
        case 0x1bcbe0u: goto label_1bcbe0;
        case 0x1bcbe4u: goto label_1bcbe4;
        case 0x1bcbe8u: goto label_1bcbe8;
        case 0x1bcbecu: goto label_1bcbec;
        case 0x1bcbf0u: goto label_1bcbf0;
        case 0x1bcbf4u: goto label_1bcbf4;
        case 0x1bcbf8u: goto label_1bcbf8;
        case 0x1bcbfcu: goto label_1bcbfc;
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc04u: goto label_1bcc04;
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc0cu: goto label_1bcc0c;
        case 0x1bcc10u: goto label_1bcc10;
        case 0x1bcc14u: goto label_1bcc14;
        case 0x1bcc18u: goto label_1bcc18;
        case 0x1bcc1cu: goto label_1bcc1c;
        case 0x1bcc20u: goto label_1bcc20;
        case 0x1bcc24u: goto label_1bcc24;
        case 0x1bcc28u: goto label_1bcc28;
        case 0x1bcc2cu: goto label_1bcc2c;
        case 0x1bcc30u: goto label_1bcc30;
        case 0x1bcc34u: goto label_1bcc34;
        case 0x1bcc38u: goto label_1bcc38;
        case 0x1bcc3cu: goto label_1bcc3c;
        case 0x1bcc40u: goto label_1bcc40;
        case 0x1bcc44u: goto label_1bcc44;
        case 0x1bcc48u: goto label_1bcc48;
        case 0x1bcc4cu: goto label_1bcc4c;
        case 0x1bcc50u: goto label_1bcc50;
        case 0x1bcc54u: goto label_1bcc54;
        case 0x1bcc58u: goto label_1bcc58;
        case 0x1bcc5cu: goto label_1bcc5c;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcc64u: goto label_1bcc64;
        case 0x1bcc68u: goto label_1bcc68;
        case 0x1bcc6cu: goto label_1bcc6c;
        case 0x1bcc70u: goto label_1bcc70;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcc78u: goto label_1bcc78;
        case 0x1bcc7cu: goto label_1bcc7c;
        case 0x1bcc80u: goto label_1bcc80;
        case 0x1bcc84u: goto label_1bcc84;
        case 0x1bcc88u: goto label_1bcc88;
        case 0x1bcc8cu: goto label_1bcc8c;
        case 0x1bcc90u: goto label_1bcc90;
        case 0x1bcc94u: goto label_1bcc94;
        case 0x1bcc98u: goto label_1bcc98;
        case 0x1bcc9cu: goto label_1bcc9c;
        case 0x1bcca0u: goto label_1bcca0;
        case 0x1bcca4u: goto label_1bcca4;
        case 0x1bcca8u: goto label_1bcca8;
        case 0x1bccacu: goto label_1bccac;
        case 0x1bccb0u: goto label_1bccb0;
        case 0x1bccb4u: goto label_1bccb4;
        case 0x1bccb8u: goto label_1bccb8;
        case 0x1bccbcu: goto label_1bccbc;
        case 0x1bccc0u: goto label_1bccc0;
        case 0x1bccc4u: goto label_1bccc4;
        case 0x1bccc8u: goto label_1bccc8;
        case 0x1bccccu: goto label_1bcccc;
        case 0x1bccd0u: goto label_1bccd0;
        case 0x1bccd4u: goto label_1bccd4;
        case 0x1bccd8u: goto label_1bccd8;
        case 0x1bccdcu: goto label_1bccdc;
        case 0x1bcce0u: goto label_1bcce0;
        case 0x1bcce4u: goto label_1bcce4;
        case 0x1bcce8u: goto label_1bcce8;
        case 0x1bccecu: goto label_1bccec;
        case 0x1bccf0u: goto label_1bccf0;
        case 0x1bccf4u: goto label_1bccf4;
        case 0x1bccf8u: goto label_1bccf8;
        case 0x1bccfcu: goto label_1bccfc;
        case 0x1bcd00u: goto label_1bcd00;
        case 0x1bcd04u: goto label_1bcd04;
        case 0x1bcd08u: goto label_1bcd08;
        case 0x1bcd0cu: goto label_1bcd0c;
        case 0x1bcd10u: goto label_1bcd10;
        case 0x1bcd14u: goto label_1bcd14;
        case 0x1bcd18u: goto label_1bcd18;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd20u: goto label_1bcd20;
        case 0x1bcd24u: goto label_1bcd24;
        case 0x1bcd28u: goto label_1bcd28;
        case 0x1bcd2cu: goto label_1bcd2c;
        case 0x1bcd30u: goto label_1bcd30;
        case 0x1bcd34u: goto label_1bcd34;
        case 0x1bcd38u: goto label_1bcd38;
        case 0x1bcd3cu: goto label_1bcd3c;
        case 0x1bcd40u: goto label_1bcd40;
        case 0x1bcd44u: goto label_1bcd44;
        case 0x1bcd48u: goto label_1bcd48;
        case 0x1bcd4cu: goto label_1bcd4c;
        case 0x1bcd50u: goto label_1bcd50;
        case 0x1bcd54u: goto label_1bcd54;
        case 0x1bcd58u: goto label_1bcd58;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd60u: goto label_1bcd60;
        case 0x1bcd64u: goto label_1bcd64;
        case 0x1bcd68u: goto label_1bcd68;
        case 0x1bcd6cu: goto label_1bcd6c;
        case 0x1bcd70u: goto label_1bcd70;
        case 0x1bcd74u: goto label_1bcd74;
        case 0x1bcd78u: goto label_1bcd78;
        case 0x1bcd7cu: goto label_1bcd7c;
        case 0x1bcd80u: goto label_1bcd80;
        case 0x1bcd84u: goto label_1bcd84;
        case 0x1bcd88u: goto label_1bcd88;
        case 0x1bcd8cu: goto label_1bcd8c;
        case 0x1bcd90u: goto label_1bcd90;
        case 0x1bcd94u: goto label_1bcd94;
        case 0x1bcd98u: goto label_1bcd98;
        case 0x1bcd9cu: goto label_1bcd9c;
        case 0x1bcda0u: goto label_1bcda0;
        case 0x1bcda4u: goto label_1bcda4;
        case 0x1bcda8u: goto label_1bcda8;
        case 0x1bcdacu: goto label_1bcdac;
        case 0x1bcdb0u: goto label_1bcdb0;
        case 0x1bcdb4u: goto label_1bcdb4;
        case 0x1bcdb8u: goto label_1bcdb8;
        case 0x1bcdbcu: goto label_1bcdbc;
        case 0x1bcdc0u: goto label_1bcdc0;
        case 0x1bcdc4u: goto label_1bcdc4;
        case 0x1bcdc8u: goto label_1bcdc8;
        case 0x1bcdccu: goto label_1bcdcc;
        case 0x1bcdd0u: goto label_1bcdd0;
        case 0x1bcdd4u: goto label_1bcdd4;
        case 0x1bcdd8u: goto label_1bcdd8;
        case 0x1bcddcu: goto label_1bcddc;
        case 0x1bcde0u: goto label_1bcde0;
        case 0x1bcde4u: goto label_1bcde4;
        case 0x1bcde8u: goto label_1bcde8;
        case 0x1bcdecu: goto label_1bcdec;
        case 0x1bcdf0u: goto label_1bcdf0;
        case 0x1bcdf4u: goto label_1bcdf4;
        case 0x1bcdf8u: goto label_1bcdf8;
        case 0x1bcdfcu: goto label_1bcdfc;
        case 0x1bce00u: goto label_1bce00;
        case 0x1bce04u: goto label_1bce04;
        case 0x1bce08u: goto label_1bce08;
        case 0x1bce0cu: goto label_1bce0c;
        case 0x1bce10u: goto label_1bce10;
        case 0x1bce14u: goto label_1bce14;
        case 0x1bce18u: goto label_1bce18;
        case 0x1bce1cu: goto label_1bce1c;
        case 0x1bce20u: goto label_1bce20;
        case 0x1bce24u: goto label_1bce24;
        case 0x1bce28u: goto label_1bce28;
        case 0x1bce2cu: goto label_1bce2c;
        case 0x1bce30u: goto label_1bce30;
        case 0x1bce34u: goto label_1bce34;
        case 0x1bce38u: goto label_1bce38;
        case 0x1bce3cu: goto label_1bce3c;
        case 0x1bce40u: goto label_1bce40;
        case 0x1bce44u: goto label_1bce44;
        case 0x1bce48u: goto label_1bce48;
        case 0x1bce4cu: goto label_1bce4c;
        case 0x1bce50u: goto label_1bce50;
        case 0x1bce54u: goto label_1bce54;
        case 0x1bce58u: goto label_1bce58;
        case 0x1bce5cu: goto label_1bce5c;
        case 0x1bce60u: goto label_1bce60;
        case 0x1bce64u: goto label_1bce64;
        case 0x1bce68u: goto label_1bce68;
        case 0x1bce6cu: goto label_1bce6c;
        case 0x1bce70u: goto label_1bce70;
        case 0x1bce74u: goto label_1bce74;
        case 0x1bce78u: goto label_1bce78;
        case 0x1bce7cu: goto label_1bce7c;
        case 0x1bce80u: goto label_1bce80;
        case 0x1bce84u: goto label_1bce84;
        case 0x1bce88u: goto label_1bce88;
        case 0x1bce8cu: goto label_1bce8c;
        case 0x1bce90u: goto label_1bce90;
        case 0x1bce94u: goto label_1bce94;
        case 0x1bce98u: goto label_1bce98;
        case 0x1bce9cu: goto label_1bce9c;
        case 0x1bcea0u: goto label_1bcea0;
        case 0x1bcea4u: goto label_1bcea4;
        case 0x1bcea8u: goto label_1bcea8;
        case 0x1bceacu: goto label_1bceac;
        case 0x1bceb0u: goto label_1bceb0;
        case 0x1bceb4u: goto label_1bceb4;
        case 0x1bceb8u: goto label_1bceb8;
        case 0x1bcebcu: goto label_1bcebc;
        case 0x1bcec0u: goto label_1bcec0;
        case 0x1bcec4u: goto label_1bcec4;
        case 0x1bcec8u: goto label_1bcec8;
        case 0x1bceccu: goto label_1bcecc;
        case 0x1bced0u: goto label_1bced0;
        case 0x1bced4u: goto label_1bced4;
        case 0x1bced8u: goto label_1bced8;
        case 0x1bcedcu: goto label_1bcedc;
        case 0x1bcee0u: goto label_1bcee0;
        case 0x1bcee4u: goto label_1bcee4;
        case 0x1bcee8u: goto label_1bcee8;
        case 0x1bceecu: goto label_1bceec;
        case 0x1bcef0u: goto label_1bcef0;
        case 0x1bcef4u: goto label_1bcef4;
        case 0x1bcef8u: goto label_1bcef8;
        case 0x1bcefcu: goto label_1bcefc;
        case 0x1bcf00u: goto label_1bcf00;
        case 0x1bcf04u: goto label_1bcf04;
        case 0x1bcf08u: goto label_1bcf08;
        case 0x1bcf0cu: goto label_1bcf0c;
        case 0x1bcf10u: goto label_1bcf10;
        case 0x1bcf14u: goto label_1bcf14;
        case 0x1bcf18u: goto label_1bcf18;
        case 0x1bcf1cu: goto label_1bcf1c;
        case 0x1bcf20u: goto label_1bcf20;
        case 0x1bcf24u: goto label_1bcf24;
        case 0x1bcf28u: goto label_1bcf28;
        case 0x1bcf2cu: goto label_1bcf2c;
        case 0x1bcf30u: goto label_1bcf30;
        case 0x1bcf34u: goto label_1bcf34;
        case 0x1bcf38u: goto label_1bcf38;
        case 0x1bcf3cu: goto label_1bcf3c;
        case 0x1bcf40u: goto label_1bcf40;
        case 0x1bcf44u: goto label_1bcf44;
        case 0x1bcf48u: goto label_1bcf48;
        case 0x1bcf4cu: goto label_1bcf4c;
        case 0x1bcf50u: goto label_1bcf50;
        case 0x1bcf54u: goto label_1bcf54;
        case 0x1bcf58u: goto label_1bcf58;
        case 0x1bcf5cu: goto label_1bcf5c;
        case 0x1bcf60u: goto label_1bcf60;
        case 0x1bcf64u: goto label_1bcf64;
        case 0x1bcf68u: goto label_1bcf68;
        case 0x1bcf6cu: goto label_1bcf6c;
        default: break;
    }

    ctx->pc = 0x1bcb48u;

label_1bcb48:
    // 0x1bcb48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bcb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1bcb4c:
    // 0x1bcb4c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1bcb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1bcb50:
    // 0x1bcb50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bcb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb54:
    // 0x1bcb54: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1bcb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1bcb58:
    // 0x1bcb58: 0x24130800  addiu       $s3, $zero, 0x800
    ctx->pc = 0x1bcb58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1bcb5c:
    // 0x1bcb5c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1bcb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1bcb60:
    // 0x1bcb60: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1bcb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1bcb64:
    // 0x1bcb64: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1bcb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1bcb68:
    // 0x1bcb68: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1bcb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_1bcb6c:
    // 0x1bcb6c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bcb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1bcb70:
    // 0x1bcb70: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1bcb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1bcb74:
    // 0x1bcb74: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1bcb74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bcb78:
    // 0x1bcb78: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1bcb78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1bcb7c:
    // 0x1bcb7c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1bcb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1bcb80:
    // 0x1bcb80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bcb80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bcb84:
    // 0x1bcb84: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1bcb88:
    if (ctx->pc == 0x1BCB88u) {
        ctx->pc = 0x1BCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB84u;
        // 0x1bcb88: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB8Cu;
        goto label_1bcb8c;
    }
    ctx->pc = 0x1BCB84u;
    {
        const bool branch_taken_0x1bcb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB84u;
        // 0x1bcb88: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb84) {
            ctx->pc = 0x1BCBE8u;
            goto label_1bcbe8;
        }
    }
    ctx->pc = 0x1BCB8Cu;
label_1bcb8c:
    // 0x1bcb8c: 0x820300ac  lb          $v1, 0xAC($s0)
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
label_1bcb90:
    // 0x1bcb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcb94:
    // 0x1bcb94: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1bcb98:
    if (ctx->pc == 0x1BCB98u) {
        ctx->pc = 0x1BCB9Cu;
        goto label_1bcb9c;
    }
    ctx->pc = 0x1BCB94u;
    {
        const bool branch_taken_0x1bcb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcb94) {
            ctx->pc = 0x1BCBE8u;
            goto label_1bcbe8;
        }
    }
    ctx->pc = 0x1BCB9Cu;
label_1bcb9c:
    // 0x1bcb9c: 0xc06db18  jal         func_1B6C60
label_1bcba0:
    if (ctx->pc == 0x1BCBA0u) {
        ctx->pc = 0x1BCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB9Cu;
        // 0x1bcba0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBA4u;
        goto label_1bcba4;
    }
    ctx->pc = 0x1BCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCBA4u);
    ctx->pc = 0x1BCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB9Cu;
    // 0x1bcba0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C60u, 0x1BCB9Cu, 0x1BCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBA4u;
label_1bcba4:
    // 0x1bcba4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bcba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcba8:
    // 0x1bcba8: 0x504300e2  beql        $v0, $v1, . + 4 + (0xE2 << 2)
label_1bcbac:
    if (ctx->pc == 0x1BCBACu) {
        ctx->pc = 0x1BCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBA8u;
        // 0x1bcbac: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBB0u;
        goto label_1bcbb0;
    }
    ctx->pc = 0x1BCBA8u;
    {
        const bool branch_taken_0x1bcba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bcba8) {
            ctx->pc = 0x1BCBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCBA8u;
            // 0x1bcbac: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCF34u;
            goto label_1bcf34;
        }
    }
    ctx->pc = 0x1BCBB0u;
label_1bcbb0:
    // 0x1bcbb0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1bcbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bcbb4:
    // 0x1bcbb4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1bcbb8:
    if (ctx->pc == 0x1BCBB8u) {
        ctx->pc = 0x1BCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBB4u;
        // 0x1bcbb8: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBBCu;
        goto label_1bcbbc;
    }
    ctx->pc = 0x1BCBB4u;
    {
        const bool branch_taken_0x1bcbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcbb4) {
            ctx->pc = 0x1BCBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCBB4u;
            // 0x1bcbb8: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCBD0u;
            goto label_1bcbd0;
        }
    }
    ctx->pc = 0x1BCBBCu;
label_1bcbbc:
    // 0x1bcbbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bcbc0:
    // 0x1bcbc0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1bcbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1bcbc4:
    // 0x1bcbc4: 0x40f809  jalr        $v0
label_1bcbc8:
    if (ctx->pc == 0x1BCBC8u) {
        ctx->pc = 0x1BCBCCu;
        goto label_1bcbcc;
    }
    ctx->pc = 0x1BCBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCBCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCBC4u, 0x1BCBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCBCCu;
label_1bcbcc:
    // 0x1bcbcc: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x1bcbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1bcbd0:
    // 0x1bcbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbd4:
    // 0x1bcbd4: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x1bcbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1bcbd8:
    // 0x1bcbd8: 0x8e0700bc  lw          $a3, 0xBC($s0)
    ctx->pc = 0x1bcbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1bcbdc:
    // 0x1bcbdc: 0xc06e406  jal         func_1B9018
label_1bcbe0:
    if (ctx->pc == 0x1BCBE0u) {
        ctx->pc = 0x1BCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBDCu;
        // 0x1bcbe0: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBE4u;
        goto label_1bcbe4;
    }
    ctx->pc = 0x1BCBDCu;
    SET_GPR_U32(ctx, 31, 0x1BCBE4u);
    ctx->pc = 0x1BCBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBDCu;
    // 0x1bcbe0: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9018u, 0x1BCBDCu, 0x1BCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBE4u;
label_1bcbe4:
    // 0x1bcbe4: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x1bcbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_1bcbe8:
    // 0x1bcbe8: 0xc06d446  jal         func_1B5118
label_1bcbec:
    if (ctx->pc == 0x1BCBECu) {
        ctx->pc = 0x1BCBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBE8u;
        // 0x1bcbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBF0u;
        goto label_1bcbf0;
    }
    ctx->pc = 0x1BCBE8u;
    SET_GPR_U32(ctx, 31, 0x1BCBF0u);
    ctx->pc = 0x1BCBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBE8u;
    // 0x1bcbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5118u, 0x1BCBE8u, 0x1BCBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBF0u;
label_1bcbf0:
    // 0x1bcbf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bcbf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbf4:
    // 0x1bcbf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcbf8:
    // 0x1bcbf8: 0x546200c9  bnel        $v1, $v0, . + 4 + (0xC9 << 2)
label_1bcbfc:
    if (ctx->pc == 0x1BCBFCu) {
        ctx->pc = 0x1BCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBF8u;
        // 0x1bcbfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC00u;
        goto label_1bcc00;
    }
    ctx->pc = 0x1BCBF8u;
    {
        const bool branch_taken_0x1bcbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcbf8) {
            ctx->pc = 0x1BCBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCBF8u;
            // 0x1bcbfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCF20u;
            goto label_1bcf20;
        }
    }
    ctx->pc = 0x1BCC00u;
label_1bcc00:
    // 0x1bcc00: 0xc06d89c  jal         func_1B6270
label_1bcc04:
    if (ctx->pc == 0x1BCC04u) {
        ctx->pc = 0x1BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC00u;
        // 0x1bcc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC08u;
        goto label_1bcc08;
    }
    ctx->pc = 0x1BCC00u;
    SET_GPR_U32(ctx, 31, 0x1BCC08u);
    ctx->pc = 0x1BCC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC00u;
    // 0x1bcc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6270u, 0x1BCC00u, 0x1BCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC08u;
label_1bcc08:
    // 0x1bcc08: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x1bcc08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1bcc0c:
    // 0x1bcc0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bcc0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc10:
    // 0x1bcc10: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x1bcc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1bcc14:
    // 0x1bcc14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1bcc18:
    if (ctx->pc == 0x1BCC18u) {
        ctx->pc = 0x1BCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC14u;
        // 0x1bcc18: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC1Cu;
        goto label_1bcc1c;
    }
    ctx->pc = 0x1BCC14u;
    {
        const bool branch_taken_0x1bcc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC14u;
        // 0x1bcc18: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc14) {
            ctx->pc = 0x1BCC48u;
            goto label_1bcc48;
        }
    }
    ctx->pc = 0x1BCC1Cu;
label_1bcc1c:
    // 0x1bcc1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bcc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc20:
    // 0x1bcc20: 0xc06ba90  jal         func_1AEA40
label_1bcc24:
    if (ctx->pc == 0x1BCC24u) {
        ctx->pc = 0x1BCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC20u;
        // 0x1bcc24: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC28u;
        goto label_1bcc28;
    }
    ctx->pc = 0x1BCC20u;
    SET_GPR_U32(ctx, 31, 0x1BCC28u);
    ctx->pc = 0x1BCC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC20u;
    // 0x1bcc24: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA40u, 0x1BCC20u, 0x1BCC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC28u;
label_1bcc28:
    // 0x1bcc28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bcc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bcc2c:
    // 0x1bcc2c: 0x24848930  addiu       $a0, $a0, -0x76D0
    ctx->pc = 0x1bcc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936880));
label_1bcc30:
    // 0x1bcc30: 0xc06ba28  jal         func_1AE8A0
label_1bcc34:
    if (ctx->pc == 0x1BCC34u) {
        ctx->pc = 0x1BCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC30u;
        // 0x1bcc34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC38u;
        goto label_1bcc38;
    }
    ctx->pc = 0x1BCC30u;
    SET_GPR_U32(ctx, 31, 0x1BCC38u);
    ctx->pc = 0x1BCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC30u;
    // 0x1bcc34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8A0u, 0x1BCC30u, 0x1BCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC38u;
label_1bcc38:
    // 0x1bcc38: 0xc06e4a0  jal         func_1B9280
label_1bcc3c:
    if (ctx->pc == 0x1BCC3Cu) {
        ctx->pc = 0x1BCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC38u;
        // 0x1bcc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC40u;
        goto label_1bcc40;
    }
    ctx->pc = 0x1BCC38u;
    SET_GPR_U32(ctx, 31, 0x1BCC40u);
    ctx->pc = 0x1BCC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC38u;
    // 0x1bcc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9280u, 0x1BCC38u, 0x1BCC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC40u;
label_1bcc40:
    // 0x1bcc40: 0x100000bc  b           . + 4 + (0xBC << 2)
label_1bcc44:
    if (ctx->pc == 0x1BCC44u) {
        ctx->pc = 0x1BCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC40u;
        // 0x1bcc44: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC48u;
        goto label_1bcc48;
    }
    ctx->pc = 0x1BCC40u;
    {
        const bool branch_taken_0x1bcc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC40u;
        // 0x1bcc44: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc40) {
            ctx->pc = 0x1BCF34u;
            goto label_1bcf34;
        }
    }
    ctx->pc = 0x1BCC48u;
label_1bcc48:
    // 0x1bcc48: 0xc06d896  jal         func_1B6258
label_1bcc4c:
    if (ctx->pc == 0x1BCC4Cu) {
        ctx->pc = 0x1BCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC48u;
        // 0x1bcc4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC50u;
        goto label_1bcc50;
    }
    ctx->pc = 0x1BCC48u;
    SET_GPR_U32(ctx, 31, 0x1BCC50u);
    ctx->pc = 0x1BCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC48u;
    // 0x1bcc4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6258u, 0x1BCC48u, 0x1BCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC50u;
label_1bcc50:
    // 0x1bcc50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc54:
    // 0x1bcc54: 0xc06d8c0  jal         func_1B6300
label_1bcc58:
    if (ctx->pc == 0x1BCC58u) {
        ctx->pc = 0x1BCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC54u;
        // 0x1bcc58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC5Cu;
        goto label_1bcc5c;
    }
    ctx->pc = 0x1BCC54u;
    SET_GPR_U32(ctx, 31, 0x1BCC5Cu);
    ctx->pc = 0x1BCC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC54u;
    // 0x1bcc58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6300u, 0x1BCC54u, 0x1BCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC5Cu;
label_1bcc5c:
    // 0x1bcc5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bcc5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc60:
    // 0x1bcc60: 0x5a80000b  blezl       $s4, . + 4 + (0xB << 2)
label_1bcc64:
    if (ctx->pc == 0x1BCC64u) {
        ctx->pc = 0x1BCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC60u;
        // 0x1bcc64: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC68u;
        goto label_1bcc68;
    }
    ctx->pc = 0x1BCC60u;
    {
        const bool branch_taken_0x1bcc60 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1bcc60) {
            ctx->pc = 0x1BCC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCC60u;
            // 0x1bcc64: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCC90u;
            goto label_1bcc90;
        }
    }
    ctx->pc = 0x1BCC68u;
label_1bcc68:
    // 0x1bcc68: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1bcc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1bcc6c:
    // 0x1bcc6c: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x1bcc6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bcc70:
    // 0x1bcc70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1bcc74:
    if (ctx->pc == 0x1BCC74u) {
        ctx->pc = 0x1BCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC70u;
        // 0x1bcc74: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC78u;
        goto label_1bcc78;
    }
    ctx->pc = 0x1BCC70u;
    {
        const bool branch_taken_0x1bcc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc70) {
            ctx->pc = 0x1BCC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCC70u;
            // 0x1bcc74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCC78u;
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCC78u;
label_1bcc78:
    // 0x1bcc78: 0x2012  mflo        $a0
    ctx->pc = 0x1bcc78u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1bcc7c:
    // 0x1bcc7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1bcc80:
    // 0x1bcc80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bcc84:
    // 0x1bcc84: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bcc88:
    if (ctx->pc == 0x1BCC88u) {
        ctx->pc = 0x1BCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC84u;
        // 0x1bcc88: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC8Cu;
        goto label_1bcc8c;
    }
    ctx->pc = 0x1BCC84u;
    {
        const bool branch_taken_0x1bcc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC84u;
        // 0x1bcc88: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc84) {
            ctx->pc = 0x1BCCB8u;
            goto label_1bccb8;
        }
    }
    ctx->pc = 0x1BCC8Cu;
label_1bcc8c:
    // 0x1bcc8c: 0x0  nop
    ctx->pc = 0x1bcc8cu;
    // NOP
label_1bcc90:
    // 0x1bcc90: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x1bcc90u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bcc94:
    // 0x1bcc94: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1bcc98:
    if (ctx->pc == 0x1BCC98u) {
        ctx->pc = 0x1BCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC94u;
        // 0x1bcc98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC9Cu;
        goto label_1bcc9c;
    }
    ctx->pc = 0x1BCC94u;
    {
        const bool branch_taken_0x1bcc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc94) {
            ctx->pc = 0x1BCC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCC94u;
            // 0x1bcc98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCC9Cu;
            goto label_1bcc9c;
        }
    }
    ctx->pc = 0x1BCC9Cu;
label_1bcc9c:
    // 0x1bcc9c: 0x2012  mflo        $a0
    ctx->pc = 0x1bcc9cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1bcca0:
    // 0x1bcca0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1bcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1bcca4:
    // 0x1bcca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bcca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bcca8:
    // 0x1bcca8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1bcca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1bccac:
    // 0x1bccac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bccb0:
    // 0x1bccb0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bccb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1bccb4:
    // 0x1bccb4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1bccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1bccb8:
    // 0x1bccb8: 0xc06d8a8  jal         func_1B62A0
label_1bccbc:
    if (ctx->pc == 0x1BCCBCu) {
        ctx->pc = 0x1BCCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCB8u;
        // 0x1bccbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCC0u;
        goto label_1bccc0;
    }
    ctx->pc = 0x1BCCB8u;
    SET_GPR_U32(ctx, 31, 0x1BCCC0u);
    ctx->pc = 0x1BCCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCB8u;
    // 0x1bccbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62A0u, 0x1BCCB8u, 0x1BCCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCC0u;
label_1bccc0:
    // 0x1bccc0: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x1bccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1bccc4:
    // 0x1bccc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bccc8:
    // 0x1bccc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcccc:
    // 0x1bcccc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1bccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bccd0:
    // 0x1bccd0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1bccd4:
    if (ctx->pc == 0x1BCCD4u) {
        ctx->pc = 0x1BCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCD0u;
        // 0x1bccd4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCD8u;
        goto label_1bccd8;
    }
    ctx->pc = 0x1BCCD0u;
    {
        const bool branch_taken_0x1bccd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bccd0) {
            ctx->pc = 0x1BCCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCCD0u;
            // 0x1bccd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCCD8u;
            goto label_1bccd8;
        }
    }
    ctx->pc = 0x1BCCD8u;
label_1bccd8:
    // 0x1bccd8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1bccd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bccdc:
    // 0x1bccdc: 0x2812  mflo        $a1
    ctx->pc = 0x1bccdcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1bcce0:
    // 0x1bcce0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1bcce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1bcce4:
    // 0x1bcce4: 0xc06d45c  jal         func_1B5170
label_1bcce8:
    if (ctx->pc == 0x1BCCE8u) {
        ctx->pc = 0x1BCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCE4u;
        // 0x1bcce8: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCECu;
        goto label_1bccec;
    }
    ctx->pc = 0x1BCCE4u;
    SET_GPR_U32(ctx, 31, 0x1BCCECu);
    ctx->pc = 0x1BCCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCE4u;
    // 0x1bcce8: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5170u, 0x1BCCE4u, 0x1BCCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCECu;
label_1bccec:
    // 0x1bccec: 0x5a800034  blezl       $s4, . + 4 + (0x34 << 2)
label_1bccf0:
    if (ctx->pc == 0x1BCCF0u) {
        ctx->pc = 0x1BCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCECu;
        // 0x1bccf0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCF4u;
        goto label_1bccf4;
    }
    ctx->pc = 0x1BCCECu;
    {
        const bool branch_taken_0x1bccec = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1bccec) {
            ctx->pc = 0x1BCCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCCECu;
            // 0x1bccf0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCDC0u;
            goto label_1bcdc0;
        }
    }
    ctx->pc = 0x1BCCF4u;
label_1bccf4:
    // 0x1bccf4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1bccf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1bccf8:
    // 0x1bccf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bccfc:
    // 0x1bccfc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1bcd00:
    if (ctx->pc == 0x1BCD00u) {
        ctx->pc = 0x1BCD04u;
        goto label_1bcd04;
    }
    ctx->pc = 0x1BCCFCu;
    {
        const bool branch_taken_0x1bccfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bccfc) {
            ctx->pc = 0x1BCD10u;
            goto label_1bcd10;
        }
    }
    ctx->pc = 0x1BCD04u;
label_1bcd04:
    // 0x1bcd04: 0x10000019  b           . + 4 + (0x19 << 2)
label_1bcd08:
    if (ctx->pc == 0x1BCD08u) {
        ctx->pc = 0x1BCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD04u;
        // 0x1bcd08: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD0Cu;
        goto label_1bcd0c;
    }
    ctx->pc = 0x1BCD04u;
    {
        const bool branch_taken_0x1bcd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD04u;
        // 0x1bcd08: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd04) {
            ctx->pc = 0x1BCD6Cu;
            goto label_1bcd6c;
        }
    }
    ctx->pc = 0x1BCD0Cu;
label_1bcd0c:
    // 0x1bcd0c: 0x0  nop
    ctx->pc = 0x1bcd0cu;
    // NOP
label_1bcd10:
    // 0x1bcd10: 0xc06d8e4  jal         func_1B6390
label_1bcd14:
    if (ctx->pc == 0x1BCD14u) {
        ctx->pc = 0x1BCD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD10u;
        // 0x1bcd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD18u;
        goto label_1bcd18;
    }
    ctx->pc = 0x1BCD10u;
    SET_GPR_U32(ctx, 31, 0x1BCD18u);
    ctx->pc = 0x1BCD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD10u;
    // 0x1bcd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6390u, 0x1BCD10u, 0x1BCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD18u;
label_1bcd18:
    // 0x1bcd18: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_1bcd1c:
    if (ctx->pc == 0x1BCD1Cu) {
        ctx->pc = 0x1BCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD18u;
        // 0x1bcd1c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD20u;
        goto label_1bcd20;
    }
    ctx->pc = 0x1BCD18u;
    {
        const bool branch_taken_0x1bcd18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd18) {
            ctx->pc = 0x1BCD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCD18u;
            // 0x1bcd1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCD20u;
            goto label_1bcd20;
        }
    }
    ctx->pc = 0x1BCD20u;
label_1bcd20:
    // 0x1bcd20: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x1bcd20u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bcd24:
    // 0x1bcd24: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x1bcd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_1bcd28:
    // 0x1bcd28: 0x1810  mfhi        $v1
    ctx->pc = 0x1bcd28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bcd2c:
    // 0x1bcd2c: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x1bcd2cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bcd30:
    // 0x1bcd30: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x1bcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1bcd34:
    // 0x1bcd34: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1bcd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_1bcd38:
    // 0x1bcd38: 0x1012  mflo        $v0
    ctx->pc = 0x1bcd38u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1bcd3c:
    // 0x1bcd3c: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x1bcd3cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bcd40:
    // 0x1bcd40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bcd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd44:
    // 0x1bcd44: 0x2010  mfhi        $a0
    ctx->pc = 0x1bcd44u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bcd48:
    // 0x1bcd48: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x1bcd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_1bcd4c:
    // 0x1bcd4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1bcd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bcd50:
    // 0x1bcd50: 0xc06dc04  jal         func_1B7010
label_1bcd54:
    if (ctx->pc == 0x1BCD54u) {
        ctx->pc = 0x1BCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD50u;
        // 0x1bcd54: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD58u;
        goto label_1bcd58;
    }
    ctx->pc = 0x1BCD50u;
    SET_GPR_U32(ctx, 31, 0x1BCD58u);
    ctx->pc = 0x1BCD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD50u;
    // 0x1bcd54: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7010u, 0x1BCD50u, 0x1BCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD58u;
label_1bcd58:
    // 0x1bcd58: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1bcd58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_1bcd5c:
    // 0x1bcd5c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bcd60:
    // 0x1bcd60: 0x24a5c730  addiu       $a1, $a1, -0x38D0
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952752));
label_1bcd64:
    // 0x1bcd64: 0xc06dbec  jal         func_1B6FB0
label_1bcd68:
    if (ctx->pc == 0x1BCD68u) {
        ctx->pc = 0x1BCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD64u;
        // 0x1bcd68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD6Cu;
        goto label_1bcd6c;
    }
    ctx->pc = 0x1BCD64u;
    SET_GPR_U32(ctx, 31, 0x1BCD6Cu);
    ctx->pc = 0x1BCD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD64u;
    // 0x1bcd68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB0u, 0x1BCD64u, 0x1BCD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD6Cu;
label_1bcd6c:
    // 0x1bcd6c: 0xc06d8de  jal         func_1B6378
label_1bcd70:
    if (ctx->pc == 0x1BCD70u) {
        ctx->pc = 0x1BCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD6Cu;
        // 0x1bcd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD74u;
        goto label_1bcd74;
    }
    ctx->pc = 0x1BCD6Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD74u);
    ctx->pc = 0x1BCD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD6Cu;
    // 0x1bcd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6378u, 0x1BCD6Cu, 0x1BCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD74u;
label_1bcd74:
    // 0x1bcd74: 0xc06d8cc  jal         func_1B6330
label_1bcd78:
    if (ctx->pc == 0x1BCD78u) {
        ctx->pc = 0x1BCD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD74u;
        // 0x1bcd78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD7Cu;
        goto label_1bcd7c;
    }
    ctx->pc = 0x1BCD74u;
    SET_GPR_U32(ctx, 31, 0x1BCD7Cu);
    ctx->pc = 0x1BCD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD74u;
    // 0x1bcd78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6330u, 0x1BCD74u, 0x1BCD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD7Cu;
label_1bcd7c:
    // 0x1bcd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd80:
    // 0x1bcd80: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1bcd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1bcd84:
    // 0x1bcd84: 0xc06d884  jal         func_1B6210
label_1bcd88:
    if (ctx->pc == 0x1BCD88u) {
        ctx->pc = 0x1BCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD84u;
        // 0x1bcd88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD8Cu;
        goto label_1bcd8c;
    }
    ctx->pc = 0x1BCD84u;
    SET_GPR_U32(ctx, 31, 0x1BCD8Cu);
    ctx->pc = 0x1BCD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD84u;
    // 0x1bcd88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6210u, 0x1BCD84u, 0x1BCD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD8Cu;
label_1bcd8c:
    // 0x1bcd8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd90:
    // 0x1bcd90: 0xc06d88c  jal         func_1B6230
label_1bcd94:
    if (ctx->pc == 0x1BCD94u) {
        ctx->pc = 0x1BCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD90u;
        // 0x1bcd94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD98u;
        goto label_1bcd98;
    }
    ctx->pc = 0x1BCD90u;
    SET_GPR_U32(ctx, 31, 0x1BCD98u);
    ctx->pc = 0x1BCD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD90u;
    // 0x1bcd94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6230u, 0x1BCD90u, 0x1BCD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD98u;
label_1bcd98:
    // 0x1bcd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcd9c:
    // 0x1bcd9c: 0xc06d888  jal         func_1B6220
label_1bcda0:
    if (ctx->pc == 0x1BCDA0u) {
        ctx->pc = 0x1BCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD9Cu;
        // 0x1bcda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDA4u;
        goto label_1bcda4;
    }
    ctx->pc = 0x1BCD9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCDA4u);
    ctx->pc = 0x1BCDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD9Cu;
    // 0x1bcda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6220u, 0x1BCD9Cu, 0x1BCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDA4u;
label_1bcda4:
    // 0x1bcda4: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_1bcda8:
    // 0x1bcda8: 0x24a5c4e0  addiu       $a1, $a1, -0x3B20
    ctx->pc = 0x1bcda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952160));
label_1bcdac:
    // 0x1bcdac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcdb0:
    // 0x1bcdb0: 0xc06d880  jal         func_1B6200
label_1bcdb4:
    if (ctx->pc == 0x1BCDB4u) {
        ctx->pc = 0x1BCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDB0u;
        // 0x1bcdb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDB8u;
        goto label_1bcdb8;
    }
    ctx->pc = 0x1BCDB0u;
    SET_GPR_U32(ctx, 31, 0x1BCDB8u);
    ctx->pc = 0x1BCDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDB0u;
    // 0x1bcdb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6200u, 0x1BCDB0u, 0x1BCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDB8u;
label_1bcdb8:
    // 0x1bcdb8: 0x10000016  b           . + 4 + (0x16 << 2)
label_1bcdbc:
    if (ctx->pc == 0x1BCDBCu) {
        ctx->pc = 0x1BCDC0u;
        goto label_1bcdc0;
    }
    ctx->pc = 0x1BCDB8u;
    {
        const bool branch_taken_0x1bcdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcdb8) {
            ctx->pc = 0x1BCE14u;
            goto label_1bce14;
        }
    }
    ctx->pc = 0x1BCDC0u;
label_1bcdc0:
    // 0x1bcdc0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1bcdc4:
    if (ctx->pc == 0x1BCDC4u) {
        ctx->pc = 0x1BCDC8u;
        goto label_1bcdc8;
    }
    ctx->pc = 0x1BCDC0u;
    {
        const bool branch_taken_0x1bcdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcdc0) {
            ctx->pc = 0x1BCDD4u;
            goto label_1bcdd4;
        }
    }
    ctx->pc = 0x1BCDC8u;
label_1bcdc8:
    // 0x1bcdc8: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1bcdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_1bcdcc:
    // 0x1bcdcc: 0xc06dc04  jal         func_1B7010
label_1bcdd0:
    if (ctx->pc == 0x1BCDD0u) {
        ctx->pc = 0x1BCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDCCu;
        // 0x1bcdd0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDD4u;
        goto label_1bcdd4;
    }
    ctx->pc = 0x1BCDCCu;
    SET_GPR_U32(ctx, 31, 0x1BCDD4u);
    ctx->pc = 0x1BCDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDCCu;
    // 0x1bcdd0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7010u, 0x1BCDCCu, 0x1BCDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDD4u;
label_1bcdd4:
    // 0x1bcdd4: 0xc06d8b4  jal         func_1B62D0
label_1bcdd8:
    if (ctx->pc == 0x1BCDD8u) {
        ctx->pc = 0x1BCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDD4u;
        // 0x1bcdd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDDCu;
        goto label_1bcddc;
    }
    ctx->pc = 0x1BCDD4u;
    SET_GPR_U32(ctx, 31, 0x1BCDDCu);
    ctx->pc = 0x1BCDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDD4u;
    // 0x1bcdd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62D0u, 0x1BCDD4u, 0x1BCDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDDCu;
label_1bcddc:
    // 0x1bcddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcde0:
    // 0x1bcde0: 0xc06d884  jal         func_1B6210
label_1bcde4:
    if (ctx->pc == 0x1BCDE4u) {
        ctx->pc = 0x1BCDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDE0u;
        // 0x1bcde4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDE8u;
        goto label_1bcde8;
    }
    ctx->pc = 0x1BCDE0u;
    SET_GPR_U32(ctx, 31, 0x1BCDE8u);
    ctx->pc = 0x1BCDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDE0u;
    // 0x1bcde4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6210u, 0x1BCDE0u, 0x1BCDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDE8u;
label_1bcde8:
    // 0x1bcde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcdec:
    // 0x1bcdec: 0xc06d88c  jal         func_1B6230
label_1bcdf0:
    if (ctx->pc == 0x1BCDF0u) {
        ctx->pc = 0x1BCDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDECu;
        // 0x1bcdf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDF4u;
        goto label_1bcdf4;
    }
    ctx->pc = 0x1BCDECu;
    SET_GPR_U32(ctx, 31, 0x1BCDF4u);
    ctx->pc = 0x1BCDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDECu;
    // 0x1bcdf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6230u, 0x1BCDECu, 0x1BCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDF4u;
label_1bcdf4:
    // 0x1bcdf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcdf8:
    // 0x1bcdf8: 0xc06d888  jal         func_1B6220
label_1bcdfc:
    if (ctx->pc == 0x1BCDFCu) {
        ctx->pc = 0x1BCDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDF8u;
        // 0x1bcdfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE00u;
        goto label_1bce00;
    }
    ctx->pc = 0x1BCDF8u;
    SET_GPR_U32(ctx, 31, 0x1BCE00u);
    ctx->pc = 0x1BCDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDF8u;
    // 0x1bcdfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6220u, 0x1BCDF8u, 0x1BCE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE00u;
label_1bce00:
    // 0x1bce00: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1bce00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_1bce04:
    // 0x1bce04: 0x24a5c860  addiu       $a1, $a1, -0x37A0
    ctx->pc = 0x1bce04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953056));
label_1bce08:
    // 0x1bce08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bce08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bce0c:
    // 0x1bce0c: 0xc06d880  jal         func_1B6200
label_1bce10:
    if (ctx->pc == 0x1BCE10u) {
        ctx->pc = 0x1BCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE0Cu;
        // 0x1bce10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE14u;
        goto label_1bce14;
    }
    ctx->pc = 0x1BCE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BCE14u);
    ctx->pc = 0x1BCE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE0Cu;
    // 0x1bce10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6200u, 0x1BCE0Cu, 0x1BCE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE14u;
label_1bce14:
    // 0x1bce14: 0xc06d896  jal         func_1B6258
label_1bce18:
    if (ctx->pc == 0x1BCE18u) {
        ctx->pc = 0x1BCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE14u;
        // 0x1bce18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE1Cu;
        goto label_1bce1c;
    }
    ctx->pc = 0x1BCE14u;
    SET_GPR_U32(ctx, 31, 0x1BCE1Cu);
    ctx->pc = 0x1BCE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE14u;
    // 0x1bce18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6258u, 0x1BCE14u, 0x1BCE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE1Cu;
label_1bce1c:
    // 0x1bce1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bce20:
    // 0x1bce20: 0xc06d89c  jal         func_1B6270
label_1bce24:
    if (ctx->pc == 0x1BCE24u) {
        ctx->pc = 0x1BCE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE20u;
        // 0x1bce24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE28u;
        goto label_1bce28;
    }
    ctx->pc = 0x1BCE20u;
    SET_GPR_U32(ctx, 31, 0x1BCE28u);
    ctx->pc = 0x1BCE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE20u;
    // 0x1bce24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6270u, 0x1BCE20u, 0x1BCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE28u;
label_1bce28:
    // 0x1bce28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bce2c:
    // 0x1bce2c: 0xc06d8b4  jal         func_1B62D0
label_1bce30:
    if (ctx->pc == 0x1BCE30u) {
        ctx->pc = 0x1BCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE2Cu;
        // 0x1bce30: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE34u;
        goto label_1bce34;
    }
    ctx->pc = 0x1BCE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BCE34u);
    ctx->pc = 0x1BCE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE2Cu;
    // 0x1bce30: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62D0u, 0x1BCE2Cu, 0x1BCE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE34u;
label_1bce34:
    // 0x1bce34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bce38:
    // 0x1bce38: 0xc06d8a2  jal         func_1B6288
label_1bce3c:
    if (ctx->pc == 0x1BCE3Cu) {
        ctx->pc = 0x1BCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE38u;
        // 0x1bce3c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE40u;
        goto label_1bce40;
    }
    ctx->pc = 0x1BCE38u;
    SET_GPR_U32(ctx, 31, 0x1BCE40u);
    ctx->pc = 0x1BCE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE38u;
    // 0x1bce3c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6288u, 0x1BCE38u, 0x1BCE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE40u;
label_1bce40:
    // 0x1bce40: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bce44:
    // 0x1bce44: 0xc06d33c  jal         func_1B4CF0
label_1bce48:
    if (ctx->pc == 0x1BCE48u) {
        ctx->pc = 0x1BCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE44u;
        // 0x1bce48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE4Cu;
        goto label_1bce4c;
    }
    ctx->pc = 0x1BCE44u;
    SET_GPR_U32(ctx, 31, 0x1BCE4Cu);
    ctx->pc = 0x1BCE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE44u;
    // 0x1bce48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CF0u, 0x1BCE44u, 0x1BCE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE4Cu;
label_1bce4c:
    // 0x1bce4c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bce50:
    // 0x1bce50: 0xc06d324  jal         func_1B4C90
label_1bce54:
    if (ctx->pc == 0x1BCE54u) {
        ctx->pc = 0x1BCE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE50u;
        // 0x1bce54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE58u;
        goto label_1bce58;
    }
    ctx->pc = 0x1BCE50u;
    SET_GPR_U32(ctx, 31, 0x1BCE58u);
    ctx->pc = 0x1BCE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE50u;
    // 0x1bce54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C90u, 0x1BCE50u, 0x1BCE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE58u;
label_1bce58:
    // 0x1bce58: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bce5c:
    // 0x1bce5c: 0xc06d31e  jal         func_1B4C78
label_1bce60:
    if (ctx->pc == 0x1BCE60u) {
        ctx->pc = 0x1BCE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE5Cu;
        // 0x1bce60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE64u;
        goto label_1bce64;
    }
    ctx->pc = 0x1BCE5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCE64u);
    ctx->pc = 0x1BCE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE5Cu;
    // 0x1bce60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C78u, 0x1BCE5Cu, 0x1BCE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE64u;
label_1bce64:
    // 0x1bce64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bce64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bce68:
    // 0x1bce68: 0xc06d376  jal         func_1B4DD8
label_1bce6c:
    if (ctx->pc == 0x1BCE6Cu) {
        ctx->pc = 0x1BCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE68u;
        // 0x1bce6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE70u;
        goto label_1bce70;
    }
    ctx->pc = 0x1BCE68u;
    SET_GPR_U32(ctx, 31, 0x1BCE70u);
    ctx->pc = 0x1BCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE68u;
    // 0x1bce6c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4DD8u, 0x1BCE68u, 0x1BCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE70u;
label_1bce70:
    // 0x1bce70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bce70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bce74:
    // 0x1bce74: 0xc06e822  jal         func_1BA088
label_1bce78:
    if (ctx->pc == 0x1BCE78u) {
        ctx->pc = 0x1BCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE74u;
        // 0x1bce78: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE7Cu;
        goto label_1bce7c;
    }
    ctx->pc = 0x1BCE74u;
    SET_GPR_U32(ctx, 31, 0x1BCE7Cu);
    ctx->pc = 0x1BCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE74u;
    // 0x1bce78: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA088u, 0x1BCE74u, 0x1BCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE7Cu;
label_1bce7c:
    // 0x1bce7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bce80:
    // 0x1bce80: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bce80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bce84:
    // 0x1bce84: 0xc06ecb4  jal         func_1BB2D0
label_1bce88:
    if (ctx->pc == 0x1BCE88u) {
        ctx->pc = 0x1BCE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE84u;
        // 0x1bce88: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE8Cu;
        goto label_1bce8c;
    }
    ctx->pc = 0x1BCE84u;
    SET_GPR_U32(ctx, 31, 0x1BCE8Cu);
    ctx->pc = 0x1BCE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE84u;
    // 0x1bce88: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2D0u, 0x1BCE84u, 0x1BCE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE8Cu;
label_1bce8c:
    // 0x1bce8c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1bce90:
    // 0x1bce90: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1bce94:
    if (ctx->pc == 0x1BCE94u) {
        ctx->pc = 0x1BCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE90u;
        // 0x1bce94: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE98u;
        goto label_1bce98;
    }
    ctx->pc = 0x1BCE90u;
    {
        const bool branch_taken_0x1bce90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE90u;
        // 0x1bce94: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce90) {
            ctx->pc = 0x1BCEA0u;
            goto label_1bcea0;
        }
    }
    ctx->pc = 0x1BCE98u;
label_1bce98:
    // 0x1bce98: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1bce9c:
    if (ctx->pc == 0x1BCE9Cu) {
        ctx->pc = 0x1BCEA0u;
        goto label_1bcea0;
    }
    ctx->pc = 0x1BCE98u;
    {
        const bool branch_taken_0x1bce98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce98) {
            ctx->pc = 0x1BCEA8u;
            goto label_1bcea8;
        }
    }
    ctx->pc = 0x1BCEA0u;
label_1bcea0:
    // 0x1bcea0: 0xc06eca0  jal         func_1BB280
label_1bcea4:
    if (ctx->pc == 0x1BCEA4u) {
        ctx->pc = 0x1BCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEA0u;
        // 0x1bcea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEA8u;
        goto label_1bcea8;
    }
    ctx->pc = 0x1BCEA0u;
    SET_GPR_U32(ctx, 31, 0x1BCEA8u);
    ctx->pc = 0x1BCEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEA0u;
    // 0x1bcea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB280u, 0x1BCEA0u, 0x1BCEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEA8u;
label_1bcea8:
    // 0x1bcea8: 0xc06f1fe  jal         func_1BC7F8
label_1bceac:
    if (ctx->pc == 0x1BCEACu) {
        ctx->pc = 0x1BCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEA8u;
        // 0x1bceac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEB0u;
        goto label_1bceb0;
    }
    ctx->pc = 0x1BCEA8u;
    SET_GPR_U32(ctx, 31, 0x1BCEB0u);
    ctx->pc = 0x1BCEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEA8u;
    // 0x1bceac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC7F8u, 0x1BCEA8u, 0x1BCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEB0u;
label_1bceb0:
    // 0x1bceb0: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1bceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1bceb4:
    // 0x1bceb4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1bceb8:
    if (ctx->pc == 0x1BCEB8u) {
        ctx->pc = 0x1BCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEB4u;
        // 0x1bceb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEBCu;
        goto label_1bcebc;
    }
    ctx->pc = 0x1BCEB4u;
    {
        const bool branch_taken_0x1bceb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bceb4) {
            ctx->pc = 0x1BCEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCEB4u;
            // 0x1bceb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCEC8u;
            goto label_1bcec8;
        }
    }
    ctx->pc = 0x1BCEBCu;
label_1bcebc:
    // 0x1bcebc: 0xc06a5e2  jal         func_1A9788
label_1bcec0:
    if (ctx->pc == 0x1BCEC0u) {
        ctx->pc = 0x1BCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEBCu;
        // 0x1bcec0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEC4u;
        goto label_1bcec4;
    }
    ctx->pc = 0x1BCEBCu;
    SET_GPR_U32(ctx, 31, 0x1BCEC4u);
    ctx->pc = 0x1BCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEBCu;
    // 0x1bcec0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9788u, 0x1BCEBCu, 0x1BCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEC4u;
label_1bcec4:
    // 0x1bcec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcec8:
    // 0x1bcec8: 0xc06d890  jal         func_1B6240
label_1bcecc:
    if (ctx->pc == 0x1BCECCu) {
        ctx->pc = 0x1BCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEC8u;
        // 0x1bcecc: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCED0u;
        goto label_1bced0;
    }
    ctx->pc = 0x1BCEC8u;
    SET_GPR_U32(ctx, 31, 0x1BCED0u);
    ctx->pc = 0x1BCECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEC8u;
    // 0x1bcecc: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6240u, 0x1BCEC8u, 0x1BCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCED0u;
label_1bced0:
    // 0x1bced0: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
label_1bced4:
    if (ctx->pc == 0x1BCED4u) {
        ctx->pc = 0x1BCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCED0u;
        // 0x1bced4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCED8u;
        goto label_1bced8;
    }
    ctx->pc = 0x1BCED0u;
    {
        const bool branch_taken_0x1bced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1bced0) {
            ctx->pc = 0x1BCED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCED0u;
            // 0x1bced4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCEF0u;
            goto label_1bcef0;
        }
    }
    ctx->pc = 0x1BCED8u;
label_1bced8:
    // 0x1bced8: 0xc06d93e  jal         func_1B64F8
label_1bcedc:
    if (ctx->pc == 0x1BCEDCu) {
        ctx->pc = 0x1BCEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCED8u;
        // 0x1bcedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEE0u;
        goto label_1bcee0;
    }
    ctx->pc = 0x1BCED8u;
    SET_GPR_U32(ctx, 31, 0x1BCEE0u);
    ctx->pc = 0x1BCEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCED8u;
    // 0x1bcedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B64F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B64F8u, 0x1BCED8u, 0x1BCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEE0u;
label_1bcee0:
    // 0x1bcee0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bcee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bcee4:
    // 0x1bcee4: 0xc06d37a  jal         func_1B4DE8
label_1bcee8:
    if (ctx->pc == 0x1BCEE8u) {
        ctx->pc = 0x1BCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEE4u;
        // 0x1bcee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEECu;
        goto label_1bceec;
    }
    ctx->pc = 0x1BCEE4u;
    SET_GPR_U32(ctx, 31, 0x1BCEECu);
    ctx->pc = 0x1BCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEE4u;
    // 0x1bcee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4DE8u, 0x1BCEE4u, 0x1BCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEECu;
label_1bceec:
    // 0x1bceec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1bceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bcef0:
    // 0x1bcef0: 0xc06d2e6  jal         func_1B4B98
label_1bcef4:
    if (ctx->pc == 0x1BCEF4u) {
        ctx->pc = 0x1BCEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEF0u;
        // 0x1bcef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEF8u;
        goto label_1bcef8;
    }
    ctx->pc = 0x1BCEF0u;
    SET_GPR_U32(ctx, 31, 0x1BCEF8u);
    ctx->pc = 0x1BCEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEF0u;
    // 0x1bcef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B98u, 0x1BCEF0u, 0x1BCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEF8u;
label_1bcef8:
    // 0x1bcef8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bcef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1bcefc:
    // 0x1bcefc: 0x8c42c3b8  lw          $v0, -0x3C48($v0)
    ctx->pc = 0x1bcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951864)));
label_1bcf00:
    // 0x1bcf00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bcf04:
    if (ctx->pc == 0x1BCF04u) {
        ctx->pc = 0x1BCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF00u;
        // 0x1bcf04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF08u;
        goto label_1bcf08;
    }
    ctx->pc = 0x1BCF00u;
    {
        const bool branch_taken_0x1bcf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF00u;
        // 0x1bcf04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf00) {
            ctx->pc = 0x1BCF18u;
            goto label_1bcf18;
        }
    }
    ctx->pc = 0x1BCF08u;
label_1bcf08:
    // 0x1bcf08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bcf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf0c:
    // 0x1bcf0c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1bcf0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf10:
    // 0x1bcf10: 0x40f809  jalr        $v0
label_1bcf14:
    if (ctx->pc == 0x1BCF14u) {
        ctx->pc = 0x1BCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF10u;
        // 0x1bcf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF18u;
        goto label_1bcf18;
    }
    ctx->pc = 0x1BCF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCF18u);
        ctx->pc = 0x1BCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF10u;
        // 0x1bcf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCF10u, 0x1BCF18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCF18u;
label_1bcf18:
    // 0x1bcf18: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bcf1c:
    if (ctx->pc == 0x1BCF1Cu) {
        ctx->pc = 0x1BCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF18u;
        // 0x1bcf1c: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF20u;
        goto label_1bcf20;
    }
    ctx->pc = 0x1BCF18u;
    {
        const bool branch_taken_0x1bcf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF18u;
        // 0x1bcf1c: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf18) {
            ctx->pc = 0x1BCF30u;
            goto label_1bcf30;
        }
    }
    ctx->pc = 0x1BCF20u;
label_1bcf20:
    // 0x1bcf20: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1bcf24:
    if (ctx->pc == 0x1BCF24u) {
        ctx->pc = 0x1BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF20u;
        // 0x1bcf24: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF28u;
        goto label_1bcf28;
    }
    ctx->pc = 0x1BCF20u;
    {
        const bool branch_taken_0x1bcf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcf20) {
            ctx->pc = 0x1BCF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCF20u;
            // 0x1bcf24: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCF34u;
            goto label_1bcf34;
        }
    }
    ctx->pc = 0x1BCF28u;
label_1bcf28:
    // 0x1bcf28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bcf2c:
    // 0x1bcf2c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1bcf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1bcf30:
    // 0x1bcf30: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1bcf30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bcf34:
    // 0x1bcf34: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1bcf34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bcf38:
    // 0x1bcf38: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1bcf38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bcf3c:
    // 0x1bcf3c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1bcf3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1bcf40:
    // 0x1bcf40: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bcf40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bcf44:
    // 0x1bcf44: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1bcf44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1bcf48:
    // 0x1bcf48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bcf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bcf4c:
    // 0x1bcf4c: 0x3e00008  jr          $ra
label_1bcf50:
    if (ctx->pc == 0x1BCF50u) {
        ctx->pc = 0x1BCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF4Cu;
        // 0x1bcf50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF54u;
        goto label_1bcf54;
    }
    ctx->pc = 0x1BCF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF4Cu;
        // 0x1bcf50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCF54u;
label_1bcf54:
    // 0x1bcf54: 0x0  nop
    ctx->pc = 0x1bcf54u;
    // NOP
label_1bcf58:
    // 0x1bcf58: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1bcf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1bcf5c:
    // 0x1bcf5c: 0x2463c3b8  addiu       $v1, $v1, -0x3C48
    ctx->pc = 0x1bcf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951864));
label_1bcf60:
    // 0x1bcf60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bcf64:
    // 0x1bcf64: 0x3e00008  jr          $ra
label_1bcf68:
    if (ctx->pc == 0x1BCF68u) {
        ctx->pc = 0x1BCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF64u;
        // 0x1bcf68: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF6Cu;
        goto label_1bcf6c;
    }
    ctx->pc = 0x1BCF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF64u;
        // 0x1bcf68: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCF6Cu;
label_1bcf6c:
    // 0x1bcf6c: 0x0  nop
    ctx->pc = 0x1bcf6cu;
    // NOP
}
