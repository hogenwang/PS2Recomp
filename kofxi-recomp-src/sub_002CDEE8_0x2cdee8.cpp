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

// Function: sub_002CDEE8
// Address: 0x2cdee8 - 0x2ce100
void sub_002CDEE8_0x2cdee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDEE8_0x2cdee8");
#endif

    switch (ctx->pc) {
        case 0x2cdee8u: goto label_2cdee8;
        case 0x2cdeecu: goto label_2cdeec;
        case 0x2cdef0u: goto label_2cdef0;
        case 0x2cdef4u: goto label_2cdef4;
        case 0x2cdef8u: goto label_2cdef8;
        case 0x2cdefcu: goto label_2cdefc;
        case 0x2cdf00u: goto label_2cdf00;
        case 0x2cdf04u: goto label_2cdf04;
        case 0x2cdf08u: goto label_2cdf08;
        case 0x2cdf0cu: goto label_2cdf0c;
        case 0x2cdf10u: goto label_2cdf10;
        case 0x2cdf14u: goto label_2cdf14;
        case 0x2cdf18u: goto label_2cdf18;
        case 0x2cdf1cu: goto label_2cdf1c;
        case 0x2cdf20u: goto label_2cdf20;
        case 0x2cdf24u: goto label_2cdf24;
        case 0x2cdf28u: goto label_2cdf28;
        case 0x2cdf2cu: goto label_2cdf2c;
        case 0x2cdf30u: goto label_2cdf30;
        case 0x2cdf34u: goto label_2cdf34;
        case 0x2cdf38u: goto label_2cdf38;
        case 0x2cdf3cu: goto label_2cdf3c;
        case 0x2cdf40u: goto label_2cdf40;
        case 0x2cdf44u: goto label_2cdf44;
        case 0x2cdf48u: goto label_2cdf48;
        case 0x2cdf4cu: goto label_2cdf4c;
        case 0x2cdf50u: goto label_2cdf50;
        case 0x2cdf54u: goto label_2cdf54;
        case 0x2cdf58u: goto label_2cdf58;
        case 0x2cdf5cu: goto label_2cdf5c;
        case 0x2cdf60u: goto label_2cdf60;
        case 0x2cdf64u: goto label_2cdf64;
        case 0x2cdf68u: goto label_2cdf68;
        case 0x2cdf6cu: goto label_2cdf6c;
        case 0x2cdf70u: goto label_2cdf70;
        case 0x2cdf74u: goto label_2cdf74;
        case 0x2cdf78u: goto label_2cdf78;
        case 0x2cdf7cu: goto label_2cdf7c;
        case 0x2cdf80u: goto label_2cdf80;
        case 0x2cdf84u: goto label_2cdf84;
        case 0x2cdf88u: goto label_2cdf88;
        case 0x2cdf8cu: goto label_2cdf8c;
        case 0x2cdf90u: goto label_2cdf90;
        case 0x2cdf94u: goto label_2cdf94;
        case 0x2cdf98u: goto label_2cdf98;
        case 0x2cdf9cu: goto label_2cdf9c;
        case 0x2cdfa0u: goto label_2cdfa0;
        case 0x2cdfa4u: goto label_2cdfa4;
        case 0x2cdfa8u: goto label_2cdfa8;
        case 0x2cdfacu: goto label_2cdfac;
        case 0x2cdfb0u: goto label_2cdfb0;
        case 0x2cdfb4u: goto label_2cdfb4;
        case 0x2cdfb8u: goto label_2cdfb8;
        case 0x2cdfbcu: goto label_2cdfbc;
        case 0x2cdfc0u: goto label_2cdfc0;
        case 0x2cdfc4u: goto label_2cdfc4;
        case 0x2cdfc8u: goto label_2cdfc8;
        case 0x2cdfccu: goto label_2cdfcc;
        case 0x2cdfd0u: goto label_2cdfd0;
        case 0x2cdfd4u: goto label_2cdfd4;
        case 0x2cdfd8u: goto label_2cdfd8;
        case 0x2cdfdcu: goto label_2cdfdc;
        case 0x2cdfe0u: goto label_2cdfe0;
        case 0x2cdfe4u: goto label_2cdfe4;
        case 0x2cdfe8u: goto label_2cdfe8;
        case 0x2cdfecu: goto label_2cdfec;
        case 0x2cdff0u: goto label_2cdff0;
        case 0x2cdff4u: goto label_2cdff4;
        case 0x2cdff8u: goto label_2cdff8;
        case 0x2cdffcu: goto label_2cdffc;
        case 0x2ce000u: goto label_2ce000;
        case 0x2ce004u: goto label_2ce004;
        case 0x2ce008u: goto label_2ce008;
        case 0x2ce00cu: goto label_2ce00c;
        case 0x2ce010u: goto label_2ce010;
        case 0x2ce014u: goto label_2ce014;
        case 0x2ce018u: goto label_2ce018;
        case 0x2ce01cu: goto label_2ce01c;
        case 0x2ce020u: goto label_2ce020;
        case 0x2ce024u: goto label_2ce024;
        case 0x2ce028u: goto label_2ce028;
        case 0x2ce02cu: goto label_2ce02c;
        case 0x2ce030u: goto label_2ce030;
        case 0x2ce034u: goto label_2ce034;
        case 0x2ce038u: goto label_2ce038;
        case 0x2ce03cu: goto label_2ce03c;
        case 0x2ce040u: goto label_2ce040;
        case 0x2ce044u: goto label_2ce044;
        case 0x2ce048u: goto label_2ce048;
        case 0x2ce04cu: goto label_2ce04c;
        case 0x2ce050u: goto label_2ce050;
        case 0x2ce054u: goto label_2ce054;
        case 0x2ce058u: goto label_2ce058;
        case 0x2ce05cu: goto label_2ce05c;
        case 0x2ce060u: goto label_2ce060;
        case 0x2ce064u: goto label_2ce064;
        case 0x2ce068u: goto label_2ce068;
        case 0x2ce06cu: goto label_2ce06c;
        case 0x2ce070u: goto label_2ce070;
        case 0x2ce074u: goto label_2ce074;
        case 0x2ce078u: goto label_2ce078;
        case 0x2ce07cu: goto label_2ce07c;
        case 0x2ce080u: goto label_2ce080;
        case 0x2ce084u: goto label_2ce084;
        case 0x2ce088u: goto label_2ce088;
        case 0x2ce08cu: goto label_2ce08c;
        case 0x2ce090u: goto label_2ce090;
        case 0x2ce094u: goto label_2ce094;
        case 0x2ce098u: goto label_2ce098;
        case 0x2ce09cu: goto label_2ce09c;
        case 0x2ce0a0u: goto label_2ce0a0;
        case 0x2ce0a4u: goto label_2ce0a4;
        case 0x2ce0a8u: goto label_2ce0a8;
        case 0x2ce0acu: goto label_2ce0ac;
        case 0x2ce0b0u: goto label_2ce0b0;
        case 0x2ce0b4u: goto label_2ce0b4;
        case 0x2ce0b8u: goto label_2ce0b8;
        case 0x2ce0bcu: goto label_2ce0bc;
        case 0x2ce0c0u: goto label_2ce0c0;
        case 0x2ce0c4u: goto label_2ce0c4;
        case 0x2ce0c8u: goto label_2ce0c8;
        case 0x2ce0ccu: goto label_2ce0cc;
        case 0x2ce0d0u: goto label_2ce0d0;
        case 0x2ce0d4u: goto label_2ce0d4;
        case 0x2ce0d8u: goto label_2ce0d8;
        case 0x2ce0dcu: goto label_2ce0dc;
        case 0x2ce0e0u: goto label_2ce0e0;
        case 0x2ce0e4u: goto label_2ce0e4;
        case 0x2ce0e8u: goto label_2ce0e8;
        case 0x2ce0ecu: goto label_2ce0ec;
        case 0x2ce0f0u: goto label_2ce0f0;
        case 0x2ce0f4u: goto label_2ce0f4;
        case 0x2ce0f8u: goto label_2ce0f8;
        case 0x2ce0fcu: goto label_2ce0fc;
        default: break;
    }

    ctx->pc = 0x2cdee8u;

label_2cdee8:
    // 0x2cdee8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cdee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2cdeec:
    // 0x2cdeec: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2cdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2cdef0:
    // 0x2cdef0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cdef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2cdef4:
    // 0x2cdef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cdef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cdef8:
    // 0x2cdef8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cdef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2cdefc:
    // 0x2cdefc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2cdefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf00:
    // 0x2cdf00: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2cdf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2cdf04:
    // 0x2cdf04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cdf04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf08:
    // 0x2cdf08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2cdf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2cdf0c:
    // 0x2cdf0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2cdf0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf10:
    // 0x2cdf10: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2cdf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2cdf14:
    // 0x2cdf14: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2cdf14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf18:
    // 0x2cdf18: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2cdf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_2cdf1c:
    // 0x2cdf1c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cdf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2cdf20:
    // 0x2cdf20: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2cdf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2cdf24:
    // 0x2cdf24: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2cdf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_2cdf28:
    // 0x2cdf28: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2cdf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2cdf2c:
    // 0x2cdf2c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x2cdf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_2cdf30:
    // 0x2cdf30: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x2cdf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
label_2cdf34:
    // 0x2cdf34: 0x8fb70080  lw          $s7, 0x80($sp)
    ctx->pc = 0x2cdf34u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2cdf38:
    // 0x2cdf38: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x2cdf38u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cdf3c:
    // 0x2cdf3c: 0x12400064  beqz        $s2, . + 4 + (0x64 << 2)
label_2cdf40:
    if (ctx->pc == 0x2CDF40u) {
        ctx->pc = 0x2CDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF3Cu;
        // 0x2cdf40: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF44u;
        goto label_2cdf44;
    }
    ctx->pc = 0x2CDF3Cu;
    {
        const bool branch_taken_0x2cdf3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF3Cu;
        // 0x2cdf40: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf3c) {
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CDF44u;
label_2cdf44:
    // 0x2cdf44: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x2cdf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2cdf48:
    // 0x2cdf48: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2cdf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2cdf4c:
    // 0x2cdf4c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2cdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2cdf50:
    // 0x2cdf50: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2cdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cdf54:
    // 0x2cdf54: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2cdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2cdf58:
    // 0x2cdf58: 0x30420820  andi        $v0, $v0, 0x820
    ctx->pc = 0x2cdf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2080);
label_2cdf5c:
    // 0x2cdf5c: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
label_2cdf60:
    if (ctx->pc == 0x2CDF60u) {
        ctx->pc = 0x2CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF5Cu;
        // 0x2cdf60: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF64u;
        goto label_2cdf64;
    }
    ctx->pc = 0x2CDF5Cu;
    {
        const bool branch_taken_0x2cdf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF5Cu;
        // 0x2cdf60: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf5c) {
            ctx->pc = 0x2CDF88u;
            goto label_2cdf88;
        }
    }
    ctx->pc = 0x2CDF64u;
label_2cdf64:
    // 0x2cdf64: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x2cdf64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2cdf68:
    // 0x2cdf68: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2cdf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2cdf6c:
    // 0x2cdf6c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2cdf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2cdf70:
    // 0x2cdf70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cdf74:
    // 0x2cdf74: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
label_2cdf78:
    if (ctx->pc == 0x2CDF78u) {
        ctx->pc = 0x2CDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF74u;
        // 0x2cdf78: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF7Cu;
        goto label_2cdf7c;
    }
    ctx->pc = 0x2CDF74u;
    {
        const bool branch_taken_0x2cdf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF74u;
        // 0x2cdf78: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf74) {
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CDF7Cu;
label_2cdf7c:
    // 0x2cdf7c: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2cdf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2cdf80:
    // 0x2cdf80: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
label_2cdf84:
    if (ctx->pc == 0x2CDF84u) {
        ctx->pc = 0x2CDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF80u;
        // 0x2cdf84: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF88u;
        goto label_2cdf88;
    }
    ctx->pc = 0x2CDF80u;
    {
        const bool branch_taken_0x2cdf80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf80) {
            ctx->pc = 0x2CDF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF80u;
            // 0x2cdf84: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF90u;
            goto label_2cdf90;
        }
    }
    ctx->pc = 0x2CDF88u;
label_2cdf88:
    // 0x2cdf88: 0x10000051  b           . + 4 + (0x51 << 2)
label_2cdf8c:
    if (ctx->pc == 0x2CDF8Cu) {
        ctx->pc = 0x2CDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF88u;
        // 0x2cdf8c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF90u;
        goto label_2cdf90;
    }
    ctx->pc = 0x2CDF88u;
    {
        const bool branch_taken_0x2cdf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF88u;
        // 0x2cdf8c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf88) {
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CDF90u;
label_2cdf90:
    // 0x2cdf90: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x2cdf90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2cdf94:
    // 0x2cdf94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cdf98:
    if (ctx->pc == 0x2CDF98u) {
        ctx->pc = 0x2CDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF94u;
        // 0x2cdf98: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF9Cu;
        goto label_2cdf9c;
    }
    ctx->pc = 0x2CDF94u;
    {
        const bool branch_taken_0x2cdf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF94u;
        // 0x2cdf98: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf94) {
            ctx->pc = 0x2CDFB0u;
            goto label_2cdfb0;
        }
    }
    ctx->pc = 0x2CDF9Cu;
label_2cdf9c:
    // 0x2cdf9c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2cdf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2cdfa0:
    // 0x2cdfa0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cdfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cdfa4:
    // 0x2cdfa4: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x2cdfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2cdfa8:
    // 0x2cdfa8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2cdfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2cdfac:
    // 0x2cdfac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2cdfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2cdfb0:
    // 0x2cdfb0: 0x35440800  ori         $a0, $t2, 0x800
    ctx->pc = 0x2cdfb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2048);
label_2cdfb4:
    // 0x2cdfb4: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x2cdfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_2cdfb8:
    // 0x2cdfb8: 0x241ef7ff  addiu       $fp, $zero, -0x801
    ctx->pc = 0x2cdfb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2cdfbc:
    // 0x2cdfbc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2cdfc0:
    // 0x2cdfc0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2cdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2cdfc4:
    // 0x2cdfc4: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x2cdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2cdfc8:
    // 0x2cdfc8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2cdfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_2cdfcc:
    // 0x2cdfcc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2cdfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2cdfd0:
    // 0x2cdfd0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2cdfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2cdfd4:
    // 0x2cdfd4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2cdfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2cdfd8:
    // 0x2cdfd8: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2cdfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_2cdfdc:
    // 0x2cdfdc: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2cdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_2cdfe0:
    // 0x2cdfe0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2cdfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2cdfe4:
    // 0x2cdfe4: 0x0  nop
    ctx->pc = 0x2cdfe4u;
    // NOP
label_2cdfe8:
    // 0x2cdfe8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2cdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2cdfec:
    // 0x2cdfec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cdfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cdff0:
    // 0x2cdff0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2cdff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2cdff4:
    // 0x2cdff4: 0xe0f809  jalr        $a3
label_2cdff8:
    if (ctx->pc == 0x2CDFF8u) {
        ctx->pc = 0x2CDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFF4u;
        // 0x2cdff8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDFFCu;
        goto label_2cdffc;
    }
    ctx->pc = 0x2CDFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2CDFFCu);
        ctx->pc = 0x2CDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFF4u;
        // 0x2cdff8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDFF4u, 0x2CDFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDFFCu;
label_2cdffc:
    // 0x2cdffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cdffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce000:
    // 0x2ce000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce004:
    // 0x2ce004: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ce004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ce008:
    // 0x2ce008: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2ce00c:
    if (ctx->pc == 0x2CE00Cu) {
        ctx->pc = 0x2CE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE008u;
        // 0x2ce00c: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE010u;
        goto label_2ce010;
    }
    ctx->pc = 0x2CE008u;
    {
        const bool branch_taken_0x2ce008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE008u;
        // 0x2ce00c: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce008) {
            ctx->pc = 0x2CE030u;
            goto label_2ce030;
        }
    }
    ctx->pc = 0x2CE010u;
label_2ce010:
    // 0x2ce010: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2ce010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2ce014:
    // 0x2ce014: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_2ce018:
    if (ctx->pc == 0x2CE018u) {
        ctx->pc = 0x2CE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE014u;
        // 0x2ce018: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE01Cu;
        goto label_2ce01c;
    }
    ctx->pc = 0x2CE014u;
    {
        const bool branch_taken_0x2ce014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce014) {
            ctx->pc = 0x2CE018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE014u;
            // 0x2ce018: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CE01Cu;
label_2ce01c:
    // 0x2ce01c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2ce01cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_2ce020:
    // 0x2ce020: 0xc0b29b4  jal         func_2CA6D0
label_2ce024:
    if (ctx->pc == 0x2CE024u) {
        ctx->pc = 0x2CE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE020u;
        // 0x2ce024: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE028u;
        goto label_2ce028;
    }
    ctx->pc = 0x2CE020u;
    SET_GPR_U32(ctx, 31, 0x2CE028u);
    ctx->pc = 0x2CE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE020u;
    // 0x2ce024: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6D0u, 0x2CE020u, 0x2CE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE028u;
label_2ce028:
    // 0x2ce028: 0x10000029  b           . + 4 + (0x29 << 2)
label_2ce02c:
    if (ctx->pc == 0x2CE02Cu) {
        ctx->pc = 0x2CE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE028u;
        // 0x2ce02c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE030u;
        goto label_2ce030;
    }
    ctx->pc = 0x2CE028u;
    {
        const bool branch_taken_0x2ce028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE028u;
        // 0x2ce02c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce028) {
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CE030u;
label_2ce030:
    // 0x2ce030: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ce030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce034:
    // 0x2ce034: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2ce034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2ce038:
    // 0x2ce038: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x2ce038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce03c:
    // 0x2ce03c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ce03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ce040:
    // 0x2ce040: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x2ce040u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ce044:
    // 0x2ce044: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2ce044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2ce048:
    // 0x2ce048: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ce048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce04c:
    // 0x2ce04c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2ce04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2ce050:
    // 0x2ce050: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2ce050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2ce054:
    // 0x2ce054: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x2ce054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_2ce058:
    // 0x2ce058: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2ce058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2ce05c:
    // 0x2ce05c: 0x40f809  jalr        $v0
label_2ce060:
    if (ctx->pc == 0x2CE060u) {
        ctx->pc = 0x2CE064u;
        goto label_2ce064;
    }
    ctx->pc = 0x2CE05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CE064u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE05Cu, 0x2CE064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE064u;
label_2ce064:
    // 0x2ce064: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2ce068:
    if (ctx->pc == 0x2CE068u) {
        ctx->pc = 0x2CE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE064u;
        // 0x2ce068: 0x2b42823  subu        $a1, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE06Cu;
        goto label_2ce06c;
    }
    ctx->pc = 0x2CE064u;
    {
        const bool branch_taken_0x2ce064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE064u;
        // 0x2ce068: 0x2b42823  subu        $a1, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce064) {
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CE06Cu;
label_2ce06c:
    // 0x2ce06c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ce06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce070:
    // 0x2ce070: 0x5e2024  and         $a0, $v0, $fp
    ctx->pc = 0x2ce070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_2ce074:
    // 0x2ce074: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2ce074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2ce078:
    // 0x2ce078: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2ce07c:
    if (ctx->pc == 0x2CE07Cu) {
        ctx->pc = 0x2CE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE078u;
        // 0x2ce07c: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE080u;
        goto label_2ce080;
    }
    ctx->pc = 0x2CE078u;
    {
        const bool branch_taken_0x2ce078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE078u;
        // 0x2ce07c: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce078) {
            ctx->pc = 0x2CE0C0u;
            goto label_2ce0c0;
        }
    }
    ctx->pc = 0x2CE080u;
label_2ce080:
    // 0x2ce080: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2ce080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2ce084:
    // 0x2ce084: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ce088:
    if (ctx->pc == 0x2CE088u) {
        ctx->pc = 0x2CE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE084u;
        // 0x2ce088: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE08Cu;
        goto label_2ce08c;
    }
    ctx->pc = 0x2CE084u;
    {
        const bool branch_taken_0x2ce084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce084) {
            ctx->pc = 0x2CE088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE084u;
            // 0x2ce088: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE098u;
            goto label_2ce098;
        }
    }
    ctx->pc = 0x2CE08Cu;
label_2ce08c:
    // 0x2ce08c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ce090:
    if (ctx->pc == 0x2CE090u) {
        ctx->pc = 0x2CE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE08Cu;
        // 0x2ce090: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE094u;
        goto label_2ce094;
    }
    ctx->pc = 0x2CE08Cu;
    {
        const bool branch_taken_0x2ce08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE08Cu;
        // 0x2ce090: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce08c) {
            ctx->pc = 0x2CE09Cu;
            goto label_2ce09c;
        }
    }
    ctx->pc = 0x2CE094u;
label_2ce094:
    // 0x2ce094: 0x0  nop
    ctx->pc = 0x2ce094u;
    // NOP
label_2ce098:
    // 0x2ce098: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2ce098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_2ce09c:
    // 0x2ce09c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ce09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ce0a0:
    // 0x2ce0a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ce0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ce0a4:
    // 0x2ce0a4: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x2ce0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2ce0a8:
    // 0x2ce0a8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2ce0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2ce0ac:
    // 0x2ce0ac: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2ce0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2ce0b0:
    // 0x2ce0b0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2ce0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2ce0b4:
    // 0x2ce0b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2ce0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2ce0b8:
    // 0x2ce0b8: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
label_2ce0bc:
    if (ctx->pc == 0x2CE0BCu) {
        ctx->pc = 0x2CE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0B8u;
        // 0x2ce0bc: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE0C0u;
        goto label_2ce0c0;
    }
    ctx->pc = 0x2CE0B8u;
    {
        const bool branch_taken_0x2ce0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0B8u;
        // 0x2ce0bc: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0b8) {
            ctx->pc = 0x2CDFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CE0C0u;
label_2ce0c0:
    // 0x2ce0c0: 0x16950003  bne         $s4, $s5, . + 4 + (0x3 << 2)
label_2ce0c4:
    if (ctx->pc == 0x2CE0C4u) {
        ctx->pc = 0x2CE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0C0u;
        // 0x2ce0c4: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE0C8u;
        goto label_2ce0c8;
    }
    ctx->pc = 0x2CE0C0u;
    {
        const bool branch_taken_0x2ce0c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x2CE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0C0u;
        // 0x2ce0c4: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0c0) {
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CE0C8u;
label_2ce0c8:
    // 0x2ce0c8: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x2ce0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_2ce0cc:
    // 0x2ce0cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce0d0:
    // 0x2ce0d0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ce0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce0d4:
    // 0x2ce0d4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2ce0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ce0d8:
    // 0x2ce0d8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ce0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ce0dc:
    // 0x2ce0dc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2ce0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2ce0e0:
    // 0x2ce0e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ce0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ce0e4:
    // 0x2ce0e4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2ce0e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2ce0e8:
    // 0x2ce0e8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ce0e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ce0ec:
    // 0x2ce0ec: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2ce0ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2ce0f0:
    // 0x2ce0f0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2ce0f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ce0f4:
    // 0x2ce0f4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2ce0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2ce0f8:
    // 0x2ce0f8: 0x3e00008  jr          $ra
label_2ce0fc:
    if (ctx->pc == 0x2CE0FCu) {
        ctx->pc = 0x2CE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0F8u;
        // 0x2ce0fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE100u;
        goto label_fallthrough_0x2ce0f8;
    }
    ctx->pc = 0x2CE0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0F8u;
        // 0x2ce0fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ce0f8:
    ctx->pc = 0x2CE100u;
}
