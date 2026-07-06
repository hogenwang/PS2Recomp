#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EDF18
// Address: 0x1edf18 - 0x1ee210
void sub_001EDF18_0x1edf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDF18_0x1edf18");
#endif

    switch (ctx->pc) {
        case 0x1edf18u: goto label_1edf18;
        case 0x1edf1cu: goto label_1edf1c;
        case 0x1edf20u: goto label_1edf20;
        case 0x1edf24u: goto label_1edf24;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf2cu: goto label_1edf2c;
        case 0x1edf30u: goto label_1edf30;
        case 0x1edf34u: goto label_1edf34;
        case 0x1edf38u: goto label_1edf38;
        case 0x1edf3cu: goto label_1edf3c;
        case 0x1edf40u: goto label_1edf40;
        case 0x1edf44u: goto label_1edf44;
        case 0x1edf48u: goto label_1edf48;
        case 0x1edf4cu: goto label_1edf4c;
        case 0x1edf50u: goto label_1edf50;
        case 0x1edf54u: goto label_1edf54;
        case 0x1edf58u: goto label_1edf58;
        case 0x1edf5cu: goto label_1edf5c;
        case 0x1edf60u: goto label_1edf60;
        case 0x1edf64u: goto label_1edf64;
        case 0x1edf68u: goto label_1edf68;
        case 0x1edf6cu: goto label_1edf6c;
        case 0x1edf70u: goto label_1edf70;
        case 0x1edf74u: goto label_1edf74;
        case 0x1edf78u: goto label_1edf78;
        case 0x1edf7cu: goto label_1edf7c;
        case 0x1edf80u: goto label_1edf80;
        case 0x1edf84u: goto label_1edf84;
        case 0x1edf88u: goto label_1edf88;
        case 0x1edf8cu: goto label_1edf8c;
        case 0x1edf90u: goto label_1edf90;
        case 0x1edf94u: goto label_1edf94;
        case 0x1edf98u: goto label_1edf98;
        case 0x1edf9cu: goto label_1edf9c;
        case 0x1edfa0u: goto label_1edfa0;
        case 0x1edfa4u: goto label_1edfa4;
        case 0x1edfa8u: goto label_1edfa8;
        case 0x1edfacu: goto label_1edfac;
        case 0x1edfb0u: goto label_1edfb0;
        case 0x1edfb4u: goto label_1edfb4;
        case 0x1edfb8u: goto label_1edfb8;
        case 0x1edfbcu: goto label_1edfbc;
        case 0x1edfc0u: goto label_1edfc0;
        case 0x1edfc4u: goto label_1edfc4;
        case 0x1edfc8u: goto label_1edfc8;
        case 0x1edfccu: goto label_1edfcc;
        case 0x1edfd0u: goto label_1edfd0;
        case 0x1edfd4u: goto label_1edfd4;
        case 0x1edfd8u: goto label_1edfd8;
        case 0x1edfdcu: goto label_1edfdc;
        case 0x1edfe0u: goto label_1edfe0;
        case 0x1edfe4u: goto label_1edfe4;
        case 0x1edfe8u: goto label_1edfe8;
        case 0x1edfecu: goto label_1edfec;
        case 0x1edff0u: goto label_1edff0;
        case 0x1edff4u: goto label_1edff4;
        case 0x1edff8u: goto label_1edff8;
        case 0x1edffcu: goto label_1edffc;
        case 0x1ee000u: goto label_1ee000;
        case 0x1ee004u: goto label_1ee004;
        case 0x1ee008u: goto label_1ee008;
        case 0x1ee00cu: goto label_1ee00c;
        case 0x1ee010u: goto label_1ee010;
        case 0x1ee014u: goto label_1ee014;
        case 0x1ee018u: goto label_1ee018;
        case 0x1ee01cu: goto label_1ee01c;
        case 0x1ee020u: goto label_1ee020;
        case 0x1ee024u: goto label_1ee024;
        case 0x1ee028u: goto label_1ee028;
        case 0x1ee02cu: goto label_1ee02c;
        case 0x1ee030u: goto label_1ee030;
        case 0x1ee034u: goto label_1ee034;
        case 0x1ee038u: goto label_1ee038;
        case 0x1ee03cu: goto label_1ee03c;
        case 0x1ee040u: goto label_1ee040;
        case 0x1ee044u: goto label_1ee044;
        case 0x1ee048u: goto label_1ee048;
        case 0x1ee04cu: goto label_1ee04c;
        case 0x1ee050u: goto label_1ee050;
        case 0x1ee054u: goto label_1ee054;
        case 0x1ee058u: goto label_1ee058;
        case 0x1ee05cu: goto label_1ee05c;
        case 0x1ee060u: goto label_1ee060;
        case 0x1ee064u: goto label_1ee064;
        case 0x1ee068u: goto label_1ee068;
        case 0x1ee06cu: goto label_1ee06c;
        case 0x1ee070u: goto label_1ee070;
        case 0x1ee074u: goto label_1ee074;
        case 0x1ee078u: goto label_1ee078;
        case 0x1ee07cu: goto label_1ee07c;
        case 0x1ee080u: goto label_1ee080;
        case 0x1ee084u: goto label_1ee084;
        case 0x1ee088u: goto label_1ee088;
        case 0x1ee08cu: goto label_1ee08c;
        case 0x1ee090u: goto label_1ee090;
        case 0x1ee094u: goto label_1ee094;
        case 0x1ee098u: goto label_1ee098;
        case 0x1ee09cu: goto label_1ee09c;
        case 0x1ee0a0u: goto label_1ee0a0;
        case 0x1ee0a4u: goto label_1ee0a4;
        case 0x1ee0a8u: goto label_1ee0a8;
        case 0x1ee0acu: goto label_1ee0ac;
        case 0x1ee0b0u: goto label_1ee0b0;
        case 0x1ee0b4u: goto label_1ee0b4;
        case 0x1ee0b8u: goto label_1ee0b8;
        case 0x1ee0bcu: goto label_1ee0bc;
        case 0x1ee0c0u: goto label_1ee0c0;
        case 0x1ee0c4u: goto label_1ee0c4;
        case 0x1ee0c8u: goto label_1ee0c8;
        case 0x1ee0ccu: goto label_1ee0cc;
        case 0x1ee0d0u: goto label_1ee0d0;
        case 0x1ee0d4u: goto label_1ee0d4;
        case 0x1ee0d8u: goto label_1ee0d8;
        case 0x1ee0dcu: goto label_1ee0dc;
        case 0x1ee0e0u: goto label_1ee0e0;
        case 0x1ee0e4u: goto label_1ee0e4;
        case 0x1ee0e8u: goto label_1ee0e8;
        case 0x1ee0ecu: goto label_1ee0ec;
        case 0x1ee0f0u: goto label_1ee0f0;
        case 0x1ee0f4u: goto label_1ee0f4;
        case 0x1ee0f8u: goto label_1ee0f8;
        case 0x1ee0fcu: goto label_1ee0fc;
        case 0x1ee100u: goto label_1ee100;
        case 0x1ee104u: goto label_1ee104;
        case 0x1ee108u: goto label_1ee108;
        case 0x1ee10cu: goto label_1ee10c;
        case 0x1ee110u: goto label_1ee110;
        case 0x1ee114u: goto label_1ee114;
        case 0x1ee118u: goto label_1ee118;
        case 0x1ee11cu: goto label_1ee11c;
        case 0x1ee120u: goto label_1ee120;
        case 0x1ee124u: goto label_1ee124;
        case 0x1ee128u: goto label_1ee128;
        case 0x1ee12cu: goto label_1ee12c;
        case 0x1ee130u: goto label_1ee130;
        case 0x1ee134u: goto label_1ee134;
        case 0x1ee138u: goto label_1ee138;
        case 0x1ee13cu: goto label_1ee13c;
        case 0x1ee140u: goto label_1ee140;
        case 0x1ee144u: goto label_1ee144;
        case 0x1ee148u: goto label_1ee148;
        case 0x1ee14cu: goto label_1ee14c;
        case 0x1ee150u: goto label_1ee150;
        case 0x1ee154u: goto label_1ee154;
        case 0x1ee158u: goto label_1ee158;
        case 0x1ee15cu: goto label_1ee15c;
        case 0x1ee160u: goto label_1ee160;
        case 0x1ee164u: goto label_1ee164;
        case 0x1ee168u: goto label_1ee168;
        case 0x1ee16cu: goto label_1ee16c;
        case 0x1ee170u: goto label_1ee170;
        case 0x1ee174u: goto label_1ee174;
        case 0x1ee178u: goto label_1ee178;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee180u: goto label_1ee180;
        case 0x1ee184u: goto label_1ee184;
        case 0x1ee188u: goto label_1ee188;
        case 0x1ee18cu: goto label_1ee18c;
        case 0x1ee190u: goto label_1ee190;
        case 0x1ee194u: goto label_1ee194;
        case 0x1ee198u: goto label_1ee198;
        case 0x1ee19cu: goto label_1ee19c;
        case 0x1ee1a0u: goto label_1ee1a0;
        case 0x1ee1a4u: goto label_1ee1a4;
        case 0x1ee1a8u: goto label_1ee1a8;
        case 0x1ee1acu: goto label_1ee1ac;
        case 0x1ee1b0u: goto label_1ee1b0;
        case 0x1ee1b4u: goto label_1ee1b4;
        case 0x1ee1b8u: goto label_1ee1b8;
        case 0x1ee1bcu: goto label_1ee1bc;
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1c4u: goto label_1ee1c4;
        case 0x1ee1c8u: goto label_1ee1c8;
        case 0x1ee1ccu: goto label_1ee1cc;
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        default: break;
    }

    ctx->pc = 0x1edf18u;

label_1edf18:
    // 0x1edf18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1edf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1edf1c:
    // 0x1edf1c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1edf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1edf20:
    // 0x1edf20: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1edf20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1edf24:
    // 0x1edf24: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1edf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1edf28:
    // 0x1edf28: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1edf28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1edf2c:
    // 0x1edf2c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1edf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1edf30:
    // 0x1edf30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1edf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1edf34:
    // 0x1edf34: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1edf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1edf38:
    // 0x1edf38: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1edf38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1edf3c:
    // 0x1edf3c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1edf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_1edf40:
    // 0x1edf40: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1edf40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1edf44:
    // 0x1edf44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1edf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1edf48:
    // 0x1edf48: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1edf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1edf4c:
    // 0x1edf4c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1edf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1edf50:
    // 0x1edf50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1edf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1edf54:
    // 0x1edf54: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1edf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_1edf58:
    // 0x1edf58: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1edf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_1edf5c:
    // 0x1edf5c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1edf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1edf60:
    // 0x1edf60: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1edf60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1edf64:
    // 0x1edf64: 0x8e341fd4  lw          $s4, 0x1FD4($s1)
    ctx->pc = 0x1edf64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8148)));
label_1edf68:
    // 0x1edf68: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1edf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1edf6c:
    // 0x1edf6c: 0xc07bbb2  jal         func_1EEEC8
label_1edf70:
    if (ctx->pc == 0x1EDF70u) {
        ctx->pc = 0x1EDF70u;
            // 0x1edf70: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1EDF74u;
        goto label_1edf74;
    }
    ctx->pc = 0x1EDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF74u);
    ctx->pc = 0x1EDF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF6Cu;
            // 0x1edf70: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEEC8u;
    if (runtime->hasFunction(0x1EEEC8u)) {
        auto targetFn = runtime->lookupFunction(0x1EEEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF74u; }
        if (ctx->pc != 0x1EDF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEEC8_0x1eeec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF74u; }
        if (ctx->pc != 0x1EDF74u) { return; }
    }
    ctx->pc = 0x1EDF74u;
label_1edf74:
    // 0x1edf74: 0x5040008b  beql        $v0, $zero, . + 4 + (0x8B << 2)
label_1edf78:
    if (ctx->pc == 0x1EDF78u) {
        ctx->pc = 0x1EDF78u;
            // 0x1edf78: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1EDF7Cu;
        goto label_1edf7c;
    }
    ctx->pc = 0x1EDF74u;
    {
        const bool branch_taken_0x1edf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf74) {
            ctx->pc = 0x1EDF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF74u;
            // 0x1edf78: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE1A4u;
            goto label_1ee1a4;
        }
    }
    ctx->pc = 0x1EDF7Cu;
label_1edf7c:
    // 0x1edf7c: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x1edf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
label_1edf80:
    // 0x1edf80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1edf84:
    if (ctx->pc == 0x1EDF84u) {
        ctx->pc = 0x1EDF84u;
            // 0x1edf84: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF88u;
        goto label_1edf88;
    }
    ctx->pc = 0x1EDF80u;
    {
        const bool branch_taken_0x1edf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edf80) {
            ctx->pc = 0x1EDF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF80u;
            // 0x1edf84: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDF94u;
            goto label_1edf94;
        }
    }
    ctx->pc = 0x1EDF88u;
label_1edf88:
    // 0x1edf88: 0xc076086  jal         func_1D8218
label_1edf8c:
    if (ctx->pc == 0x1EDF8Cu) {
        ctx->pc = 0x1EDF8Cu;
            // 0x1edf8c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF90u;
        goto label_1edf90;
    }
    ctx->pc = 0x1EDF88u;
    SET_GPR_U32(ctx, 31, 0x1EDF90u);
    ctx->pc = 0x1EDF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF88u;
            // 0x1edf8c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8218u;
    if (runtime->hasFunction(0x1D8218u)) {
        auto targetFn = runtime->lookupFunction(0x1D8218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF90u; }
        if (ctx->pc != 0x1EDF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8218_0x1d8218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF90u; }
        if (ctx->pc != 0x1EDF90u) { return; }
    }
    ctx->pc = 0x1EDF90u;
label_1edf90:
    // 0x1edf90: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1edf90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1edf94:
    // 0x1edf94: 0x8e250d3c  lw          $a1, 0xD3C($s1)
    ctx->pc = 0x1edf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3388)));
label_1edf98:
    // 0x1edf98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1edf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1edf9c:
    // 0x1edf9c: 0xc07595a  jal         func_1D6568
label_1edfa0:
    if (ctx->pc == 0x1EDFA0u) {
        ctx->pc = 0x1EDFA0u;
            // 0x1edfa0: 0x8e260d40  lw          $a2, 0xD40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
        ctx->pc = 0x1EDFA4u;
        goto label_1edfa4;
    }
    ctx->pc = 0x1EDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDFA4u);
    ctx->pc = 0x1EDFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF9Cu;
            // 0x1edfa0: 0x8e260d40  lw          $a2, 0xD40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6568u;
    if (runtime->hasFunction(0x1D6568u)) {
        auto targetFn = runtime->lookupFunction(0x1D6568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFA4u; }
        if (ctx->pc != 0x1EDFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6568_0x1d6568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFA4u; }
        if (ctx->pc != 0x1EDFA4u) { return; }
    }
    ctx->pc = 0x1EDFA4u;
label_1edfa4:
    // 0x1edfa4: 0x8e220d4c  lw          $v0, 0xD4C($s1)
    ctx->pc = 0x1edfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3404)));
label_1edfa8:
    // 0x1edfa8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1edfac:
    if (ctx->pc == 0x1EDFACu) {
        ctx->pc = 0x1EDFACu;
            // 0x1edfac: 0x3c05001f  lui         $a1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
        ctx->pc = 0x1EDFB0u;
        goto label_1edfb0;
    }
    ctx->pc = 0x1EDFA8u;
    {
        const bool branch_taken_0x1edfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFA8u;
            // 0x1edfac: 0x3c05001f  lui         $a1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfa8) {
            ctx->pc = 0x1EDFC8u;
            goto label_1edfc8;
        }
    }
    ctx->pc = 0x1EDFB0u;
label_1edfb0:
    // 0x1edfb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1edfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1edfb4:
    // 0x1edfb4: 0x24a5e1d0  addiu       $a1, $a1, -0x1E30
    ctx->pc = 0x1edfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959568));
label_1edfb8:
    // 0x1edfb8: 0xc07596e  jal         func_1D65B8
label_1edfbc:
    if (ctx->pc == 0x1EDFBCu) {
        ctx->pc = 0x1EDFBCu;
            // 0x1edfbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFC0u;
        goto label_1edfc0;
    }
    ctx->pc = 0x1EDFB8u;
    SET_GPR_U32(ctx, 31, 0x1EDFC0u);
    ctx->pc = 0x1EDFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFB8u;
            // 0x1edfbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (runtime->hasFunction(0x1D65B8u)) {
        auto targetFn = runtime->lookupFunction(0x1D65B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFC0u; }
        if (ctx->pc != 0x1EDFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D65B8_0x1d65b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFC0u; }
        if (ctx->pc != 0x1EDFC0u) { return; }
    }
    ctx->pc = 0x1EDFC0u;
label_1edfc0:
    // 0x1edfc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1edfc4:
    if (ctx->pc == 0x1EDFC4u) {
        ctx->pc = 0x1EDFC4u;
            // 0x1edfc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFC8u;
        goto label_1edfc8;
    }
    ctx->pc = 0x1EDFC0u;
    {
        const bool branch_taken_0x1edfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFC0u;
            // 0x1edfc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfc0) {
            ctx->pc = 0x1EDFDCu;
            goto label_1edfdc;
        }
    }
    ctx->pc = 0x1EDFC8u;
label_1edfc8:
    // 0x1edfc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1edfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1edfcc:
    // 0x1edfcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1edfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edfd0:
    // 0x1edfd0: 0xc07596e  jal         func_1D65B8
label_1edfd4:
    if (ctx->pc == 0x1EDFD4u) {
        ctx->pc = 0x1EDFD4u;
            // 0x1edfd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFD8u;
        goto label_1edfd8;
    }
    ctx->pc = 0x1EDFD0u;
    SET_GPR_U32(ctx, 31, 0x1EDFD8u);
    ctx->pc = 0x1EDFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFD0u;
            // 0x1edfd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (runtime->hasFunction(0x1D65B8u)) {
        auto targetFn = runtime->lookupFunction(0x1D65B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFD8u; }
        if (ctx->pc != 0x1EDFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D65B8_0x1d65b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFD8u; }
        if (ctx->pc != 0x1EDFD8u) { return; }
    }
    ctx->pc = 0x1EDFD8u;
label_1edfd8:
    // 0x1edfd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1edfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1edfdc:
    // 0x1edfdc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1edfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1edfe0:
    // 0x1edfe0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1edfe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1edfe4:
    // 0x1edfe4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1edfe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1edfe8:
    // 0x1edfe8: 0xc075982  jal         func_1D6608
label_1edfec:
    if (ctx->pc == 0x1EDFECu) {
        ctx->pc = 0x1EDFECu;
            // 0x1edfec: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1EDFF0u;
        goto label_1edff0;
    }
    ctx->pc = 0x1EDFE8u;
    SET_GPR_U32(ctx, 31, 0x1EDFF0u);
    ctx->pc = 0x1EDFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFE8u;
            // 0x1edfec: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6608u;
    if (runtime->hasFunction(0x1D6608u)) {
        auto targetFn = runtime->lookupFunction(0x1D6608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFF0u; }
        if (ctx->pc != 0x1EDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6608_0x1d6608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDFF0u; }
        if (ctx->pc != 0x1EDFF0u) { return; }
    }
    ctx->pc = 0x1EDFF0u;
label_1edff0:
    // 0x1edff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1edff4:
    if (ctx->pc == 0x1EDFF4u) {
        ctx->pc = 0x1EDFF4u;
            // 0x1edff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFF8u;
        goto label_1edff8;
    }
    ctx->pc = 0x1EDFF0u;
    {
        const bool branch_taken_0x1edff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFF0u;
            // 0x1edff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edff0) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDFF8u;
label_1edff8:
    // 0x1edff8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1edff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1edffc:
    // 0x1edffc: 0xc07b5c0  jal         func_1ED700
label_1ee000:
    if (ctx->pc == 0x1EE000u) {
        ctx->pc = 0x1EE000u;
            // 0x1ee000: 0x34a50d03  ori         $a1, $a1, 0xD03 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3331);
        ctx->pc = 0x1EE004u;
        goto label_1ee004;
    }
    ctx->pc = 0x1EDFFCu;
    SET_GPR_U32(ctx, 31, 0x1EE004u);
    ctx->pc = 0x1EE000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFFCu;
            // 0x1ee000: 0x34a50d03  ori         $a1, $a1, 0xD03 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3331);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE004u; }
        if (ctx->pc != 0x1EE004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE004u; }
        if (ctx->pc != 0x1EE004u) { return; }
    }
    ctx->pc = 0x1EE004u;
label_1ee004:
    // 0x1ee004: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ee004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1ee008:
    // 0x1ee008: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1ee008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ee00c:
    // 0x1ee00c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1ee00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1ee010:
    // 0x1ee010: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1ee010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1ee014:
    // 0x1ee014: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ee018:
    if (ctx->pc == 0x1EE018u) {
        ctx->pc = 0x1EE018u;
            // 0x1ee018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE01Cu;
        goto label_1ee01c;
    }
    ctx->pc = 0x1EE014u;
    {
        const bool branch_taken_0x1ee014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE014u;
            // 0x1ee018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee014) {
            ctx->pc = 0x1EE030u;
            goto label_1ee030;
        }
    }
    ctx->pc = 0x1EE01Cu;
label_1ee01c:
    // 0x1ee01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee020:
    // 0x1ee020: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ee020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee024:
    // 0x1ee024: 0xc07bd8c  jal         func_1EF630
label_1ee028:
    if (ctx->pc == 0x1EE028u) {
        ctx->pc = 0x1EE028u;
            // 0x1ee028: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE02Cu;
        goto label_1ee02c;
    }
    ctx->pc = 0x1EE024u;
    SET_GPR_U32(ctx, 31, 0x1EE02Cu);
    ctx->pc = 0x1EE028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE024u;
            // 0x1ee028: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF630u;
    if (runtime->hasFunction(0x1EF630u)) {
        auto targetFn = runtime->lookupFunction(0x1EF630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE02Cu; }
        if (ctx->pc != 0x1EE02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF630_0x1ef630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE02Cu; }
        if (ctx->pc != 0x1EE02Cu) { return; }
    }
    ctx->pc = 0x1EE02Cu;
label_1ee02c:
    // 0x1ee02c: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x1ee02cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ee030:
    // 0x1ee030: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ee030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1ee034:
    // 0x1ee034: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
label_1ee038:
    if (ctx->pc == 0x1EE038u) {
        ctx->pc = 0x1EE03Cu;
        goto label_1ee03c;
    }
    ctx->pc = 0x1EE034u;
    {
        const bool branch_taken_0x1ee034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee034) {
            ctx->pc = 0x1EE080u;
            goto label_1ee080;
        }
    }
    ctx->pc = 0x1EE03Cu;
label_1ee03c:
    // 0x1ee03c: 0xc07ae2c  jal         func_1EB8B0
label_1ee040:
    if (ctx->pc == 0x1EE040u) {
        ctx->pc = 0x1EE040u;
            // 0x1ee040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE044u;
        goto label_1ee044;
    }
    ctx->pc = 0x1EE03Cu;
    SET_GPR_U32(ctx, 31, 0x1EE044u);
    ctx->pc = 0x1EE040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE03Cu;
            // 0x1ee040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8B0u;
    if (runtime->hasFunction(0x1EB8B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EB8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE044u; }
        if (ctx->pc != 0x1EE044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB8B0_0x1eb8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE044u; }
        if (ctx->pc != 0x1EE044u) { return; }
    }
    ctx->pc = 0x1EE044u;
label_1ee044:
    // 0x1ee044: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1ee048:
    if (ctx->pc == 0x1EE048u) {
        ctx->pc = 0x1EE048u;
            // 0x1ee048: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1EE04Cu;
        goto label_1ee04c;
    }
    ctx->pc = 0x1EE044u;
    {
        const bool branch_taken_0x1ee044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee044) {
            ctx->pc = 0x1EE048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE044u;
            // 0x1ee048: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE060u;
            goto label_1ee060;
        }
    }
    ctx->pc = 0x1EE04Cu;
label_1ee04c:
    // 0x1ee04c: 0xc07bbac  jal         func_1EEEB0
label_1ee050:
    if (ctx->pc == 0x1EE050u) {
        ctx->pc = 0x1EE050u;
            // 0x1ee050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE054u;
        goto label_1ee054;
    }
    ctx->pc = 0x1EE04Cu;
    SET_GPR_U32(ctx, 31, 0x1EE054u);
    ctx->pc = 0x1EE050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE04Cu;
            // 0x1ee050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEEB0u;
    if (runtime->hasFunction(0x1EEEB0u)) {
        auto targetFn = runtime->lookupFunction(0x1EEEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE054u; }
        if (ctx->pc != 0x1EE054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEEB0_0x1eeeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE054u; }
        if (ctx->pc != 0x1EE054u) { return; }
    }
    ctx->pc = 0x1EE054u;
label_1ee054:
    // 0x1ee054: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1ee054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1ee058:
    // 0x1ee058: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1ee05c:
    if (ctx->pc == 0x1EE05Cu) {
        ctx->pc = 0x1EE05Cu;
            // 0x1ee05c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE060u;
        goto label_1ee060;
    }
    ctx->pc = 0x1EE058u;
    {
        const bool branch_taken_0x1ee058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE058u;
            // 0x1ee05c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee058) {
            ctx->pc = 0x1EE198u;
            goto label_1ee198;
        }
    }
    ctx->pc = 0x1EE060u;
label_1ee060:
    // 0x1ee060: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_1ee064:
    if (ctx->pc == 0x1EE064u) {
        ctx->pc = 0x1EE068u;
        goto label_1ee068;
    }
    ctx->pc = 0x1EE060u;
    {
        const bool branch_taken_0x1ee060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ee060) {
            ctx->pc = 0x1EE080u;
            goto label_1ee080;
        }
    }
    ctx->pc = 0x1EE068u;
label_1ee068:
    // 0x1ee068: 0xc07ae34  jal         func_1EB8D0
label_1ee06c:
    if (ctx->pc == 0x1EE06Cu) {
        ctx->pc = 0x1EE06Cu;
            // 0x1ee06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE070u;
        goto label_1ee070;
    }
    ctx->pc = 0x1EE068u;
    SET_GPR_U32(ctx, 31, 0x1EE070u);
    ctx->pc = 0x1EE06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE068u;
            // 0x1ee06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8D0u;
    if (runtime->hasFunction(0x1EB8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EB8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE070u; }
        if (ctx->pc != 0x1EE070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB8D0_0x1eb8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE070u; }
        if (ctx->pc != 0x1EE070u) { return; }
    }
    ctx->pc = 0x1EE070u;
label_1ee070:
    // 0x1ee070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ee074:
    if (ctx->pc == 0x1EE074u) {
        ctx->pc = 0x1EE074u;
            // 0x1ee074: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x1EE078u;
        goto label_1ee078;
    }
    ctx->pc = 0x1EE070u;
    {
        const bool branch_taken_0x1ee070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE070u;
            // 0x1ee074: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee070) {
            ctx->pc = 0x1EE080u;
            goto label_1ee080;
        }
    }
    ctx->pc = 0x1EE078u;
label_1ee078:
    // 0x1ee078: 0x10000047  b           . + 4 + (0x47 << 2)
label_1ee07c:
    if (ctx->pc == 0x1EE07Cu) {
        ctx->pc = 0x1EE07Cu;
            // 0x1ee07c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE080u;
        goto label_1ee080;
    }
    ctx->pc = 0x1EE078u;
    {
        const bool branch_taken_0x1ee078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE078u;
            // 0x1ee07c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee078) {
            ctx->pc = 0x1EE198u;
            goto label_1ee198;
        }
    }
    ctx->pc = 0x1EE080u;
label_1ee080:
    // 0x1ee080: 0x17c00021  bnez        $fp, . + 4 + (0x21 << 2)
label_1ee084:
    if (ctx->pc == 0x1EE084u) {
        ctx->pc = 0x1EE084u;
            // 0x1ee084: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1EE088u;
        goto label_1ee088;
    }
    ctx->pc = 0x1EE080u;
    {
        const bool branch_taken_0x1ee080 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE080u;
            // 0x1ee084: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee080) {
            ctx->pc = 0x1EE108u;
            goto label_1ee108;
        }
    }
    ctx->pc = 0x1EE088u;
label_1ee088:
    // 0x1ee088: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ee088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee08c:
    // 0x1ee08c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ee08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ee090:
    // 0x1ee090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee094:
    // 0x1ee094: 0xc07b884  jal         func_1EE210
label_1ee098:
    if (ctx->pc == 0x1EE098u) {
        ctx->pc = 0x1EE098u;
            // 0x1ee098: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE09Cu;
        goto label_1ee09c;
    }
    ctx->pc = 0x1EE094u;
    SET_GPR_U32(ctx, 31, 0x1EE09Cu);
    ctx->pc = 0x1EE098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE094u;
            // 0x1ee098: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE210u;
    if (runtime->hasFunction(0x1EE210u)) {
        auto targetFn = runtime->lookupFunction(0x1EE210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE09Cu; }
        if (ctx->pc != 0x1EE09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE210_0x1ee210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE09Cu; }
        if (ctx->pc != 0x1EE09Cu) { return; }
    }
    ctx->pc = 0x1EE09Cu;
label_1ee09c:
    // 0x1ee09c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ee09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ee0a0:
    // 0x1ee0a0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1ee0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1ee0a4:
    // 0x1ee0a4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ee0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ee0a8:
    // 0x1ee0a8: 0x18a0003d  blez        $a1, . + 4 + (0x3D << 2)
label_1ee0ac:
    if (ctx->pc == 0x1EE0ACu) {
        ctx->pc = 0x1EE0ACu;
            // 0x1ee0ac: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1EE0B0u;
        goto label_1ee0b0;
    }
    ctx->pc = 0x1EE0A8u;
    {
        const bool branch_taken_0x1ee0a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1EE0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0A8u;
            // 0x1ee0ac: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0a8) {
            ctx->pc = 0x1EE1A0u;
            goto label_1ee1a0;
        }
    }
    ctx->pc = 0x1EE0B0u;
label_1ee0b0:
    // 0x1ee0b0: 0x8e830158  lw          $v1, 0x158($s4)
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
label_1ee0b4:
    // 0x1ee0b4: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
label_1ee0b8:
    if (ctx->pc == 0x1EE0B8u) {
        ctx->pc = 0x1EE0B8u;
            // 0x1ee0b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1EE0BCu;
        goto label_1ee0bc;
    }
    ctx->pc = 0x1EE0B4u;
    {
        const bool branch_taken_0x1ee0b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EE0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0B4u;
            // 0x1ee0b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0b4) {
            ctx->pc = 0x1EE1A4u;
            goto label_1ee1a4;
        }
    }
    ctx->pc = 0x1EE0BCu;
label_1ee0bc:
    // 0x1ee0bc: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1ee0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1ee0c0:
    // 0x1ee0c0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1ee0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1ee0c4:
    // 0x1ee0c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ee0c8:
    if (ctx->pc == 0x1EE0C8u) {
        ctx->pc = 0x1EE0C8u;
            // 0x1ee0c8: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x1EE0CCu;
        goto label_1ee0cc;
    }
    ctx->pc = 0x1EE0C4u;
    {
        const bool branch_taken_0x1ee0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0C4u;
            // 0x1ee0c8: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0c4) {
            ctx->pc = 0x1EE0D8u;
            goto label_1ee0d8;
        }
    }
    ctx->pc = 0x1EE0CCu;
label_1ee0cc:
    // 0x1ee0cc: 0x10000032  b           . + 4 + (0x32 << 2)
label_1ee0d0:
    if (ctx->pc == 0x1EE0D0u) {
        ctx->pc = 0x1EE0D0u;
            // 0x1ee0d0: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x1EE0D4u;
        goto label_1ee0d4;
    }
    ctx->pc = 0x1EE0CCu;
    {
        const bool branch_taken_0x1ee0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0CCu;
            // 0x1ee0d0: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0cc) {
            ctx->pc = 0x1EE198u;
            goto label_1ee198;
        }
    }
    ctx->pc = 0x1EE0D4u;
label_1ee0d4:
    // 0x1ee0d4: 0x0  nop
    ctx->pc = 0x1ee0d4u;
    // NOP
label_1ee0d8:
    // 0x1ee0d8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1ee0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ee0dc:
    // 0x1ee0dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1ee0e0:
    if (ctx->pc == 0x1EE0E0u) {
        ctx->pc = 0x1EE0E0u;
            // 0x1ee0e0: 0xae860158  sw          $a2, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 6));
        ctx->pc = 0x1EE0E4u;
        goto label_1ee0e4;
    }
    ctx->pc = 0x1EE0DCu;
    {
        const bool branch_taken_0x1ee0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0dc) {
            ctx->pc = 0x1EE0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0DCu;
            // 0x1ee0e0: 0xae860158  sw          $a2, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE100u;
            goto label_1ee100;
        }
    }
    ctx->pc = 0x1EE0E4u;
label_1ee0e4:
    // 0x1ee0e4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1ee0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ee0e8:
    // 0x1ee0e8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1ee0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ee0ec:
    // 0x1ee0ec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ee0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ee0f0:
    // 0x1ee0f0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1ee0f4:
    // 0x1ee0f4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ee0f8:
    if (ctx->pc == 0x1EE0F8u) {
        ctx->pc = 0x1EE0F8u;
            // 0x1ee0f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1EE0FCu;
        goto label_1ee0fc;
    }
    ctx->pc = 0x1EE0F4u;
    {
        const bool branch_taken_0x1ee0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0F4u;
            // 0x1ee0f8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0f4) {
            ctx->pc = 0x1EE198u;
            goto label_1ee198;
        }
    }
    ctx->pc = 0x1EE0FCu;
label_1ee0fc:
    // 0x1ee0fc: 0x0  nop
    ctx->pc = 0x1ee0fcu;
    // NOP
label_1ee100:
    // 0x1ee100: 0x10000026  b           . + 4 + (0x26 << 2)
label_1ee104:
    if (ctx->pc == 0x1EE104u) {
        ctx->pc = 0x1EE104u;
            // 0x1ee104: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1EE108u;
        goto label_1ee108;
    }
    ctx->pc = 0x1EE100u;
    {
        const bool branch_taken_0x1ee100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE100u;
            // 0x1ee104: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee100) {
            ctx->pc = 0x1EE19Cu;
            goto label_1ee19c;
        }
    }
    ctx->pc = 0x1EE108u;
label_1ee108:
    // 0x1ee108: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1ee108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1ee10c:
    // 0x1ee10c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ee10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ee110:
    // 0x1ee110: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1ee114:
    if (ctx->pc == 0x1EE114u) {
        ctx->pc = 0x1EE114u;
            // 0x1ee114: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1EE118u;
        goto label_1ee118;
    }
    ctx->pc = 0x1EE110u;
    {
        const bool branch_taken_0x1ee110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee110) {
            ctx->pc = 0x1EE114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE110u;
            // 0x1ee114: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE158u;
            goto label_1ee158;
        }
    }
    ctx->pc = 0x1EE118u;
label_1ee118:
    // 0x1ee118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee11c:
    // 0x1ee11c: 0xc07bc18  jal         func_1EF060
label_1ee120:
    if (ctx->pc == 0x1EE120u) {
        ctx->pc = 0x1EE120u;
            // 0x1ee120: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x1EE124u;
        goto label_1ee124;
    }
    ctx->pc = 0x1EE11Cu;
    SET_GPR_U32(ctx, 31, 0x1EE124u);
    ctx->pc = 0x1EE120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE11Cu;
            // 0x1ee120: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF060u;
    if (runtime->hasFunction(0x1EF060u)) {
        auto targetFn = runtime->lookupFunction(0x1EF060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE124u; }
        if (ctx->pc != 0x1EE124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF060_0x1ef060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE124u; }
        if (ctx->pc != 0x1EE124u) { return; }
    }
    ctx->pc = 0x1EE124u;
label_1ee124:
    // 0x1ee124: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ee124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1ee128:
    // 0x1ee128: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1ee12c:
    if (ctx->pc == 0x1EE12Cu) {
        ctx->pc = 0x1EE12Cu;
            // 0x1ee12c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1EE130u;
        goto label_1ee130;
    }
    ctx->pc = 0x1EE128u;
    {
        const bool branch_taken_0x1ee128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE128u;
            // 0x1ee12c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee128) {
            ctx->pc = 0x1EE1A0u;
            goto label_1ee1a0;
        }
    }
    ctx->pc = 0x1EE130u;
label_1ee130:
    // 0x1ee130: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1ee134:
    // 0x1ee134: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x1ee134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1ee138:
    // 0x1ee138: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1ee13c:
    if (ctx->pc == 0x1EE13Cu) {
        ctx->pc = 0x1EE13Cu;
            // 0x1ee13c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x1EE140u;
        goto label_1ee140;
    }
    ctx->pc = 0x1EE138u;
    {
        const bool branch_taken_0x1ee138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE138u;
            // 0x1ee13c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee138) {
            ctx->pc = 0x1EE1A0u;
            goto label_1ee1a0;
        }
    }
    ctx->pc = 0x1EE140u;
label_1ee140:
    // 0x1ee140: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ee140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee144:
    // 0x1ee144: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
label_1ee148:
    if (ctx->pc == 0x1EE148u) {
        ctx->pc = 0x1EE148u;
            // 0x1ee148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EE14Cu;
        goto label_1ee14c;
    }
    ctx->pc = 0x1EE144u;
    {
        const bool branch_taken_0x1ee144 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ee144) {
            ctx->pc = 0x1EE148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE144u;
            // 0x1ee148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE14Cu;
            goto label_1ee14c;
        }
    }
    ctx->pc = 0x1EE14Cu;
label_1ee14c:
    // 0x1ee14c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1ee14cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1ee150:
    // 0x1ee150: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ee154:
    if (ctx->pc == 0x1EE154u) {
        ctx->pc = 0x1EE154u;
            // 0x1ee154: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE158u;
        goto label_1ee158;
    }
    ctx->pc = 0x1EE150u;
    {
        const bool branch_taken_0x1ee150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE150u;
            // 0x1ee154: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee150) {
            ctx->pc = 0x1EE19Cu;
            goto label_1ee19c;
        }
    }
    ctx->pc = 0x1EE158u;
label_1ee158:
    // 0x1ee158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee15c:
    // 0x1ee15c: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x1ee15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1ee160:
    // 0x1ee160: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1ee160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ee164:
    // 0x1ee164: 0x2c53023  subu        $a2, $s6, $a1
    ctx->pc = 0x1ee164u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_1ee168:
    // 0x1ee168: 0xc07b8ee  jal         func_1EE3B8
label_1ee16c:
    if (ctx->pc == 0x1EE16Cu) {
        ctx->pc = 0x1EE16Cu;
            // 0x1ee16c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->pc = 0x1EE170u;
        goto label_1ee170;
    }
    ctx->pc = 0x1EE168u;
    SET_GPR_U32(ctx, 31, 0x1EE170u);
    ctx->pc = 0x1EE16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE168u;
            // 0x1ee16c: 0x2e52821  addu        $a1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE3B8u;
    if (runtime->hasFunction(0x1EE3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1EE3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE170u; }
        if (ctx->pc != 0x1EE170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE3B8_0x1ee3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE170u; }
        if (ctx->pc != 0x1EE170u) { return; }
    }
    ctx->pc = 0x1EE170u;
label_1ee170:
    // 0x1ee170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee174:
    // 0x1ee174: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ee174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1ee178:
    // 0x1ee178: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ee178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee17c:
    // 0x1ee17c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1ee180:
    if (ctx->pc == 0x1EE180u) {
        ctx->pc = 0x1EE180u;
            // 0x1ee180: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1EE184u;
        goto label_1ee184;
    }
    ctx->pc = 0x1EE17Cu;
    {
        const bool branch_taken_0x1ee17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EE180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE17Cu;
            // 0x1ee180: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee17c) {
            ctx->pc = 0x1EE198u;
            goto label_1ee198;
        }
    }
    ctx->pc = 0x1EE184u;
label_1ee184:
    // 0x1ee184: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ee184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee188:
    // 0x1ee188: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ee188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1ee18c:
    // 0x1ee18c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ee190:
    // 0x1ee190: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1ee190u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1ee194:
    // 0x1ee194: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ee198:
    // 0x1ee198: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x1ee198u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_1ee19c:
    // 0x1ee19c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1ee1a0:
    // 0x1ee1a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ee1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee1a4:
    // 0x1ee1a4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ee1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ee1a8:
    // 0x1ee1a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ee1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee1ac:
    // 0x1ee1ac: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ee1acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ee1b0:
    // 0x1ee1b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ee1b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee1b4:
    // 0x1ee1b4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1ee1b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1ee1b8:
    // 0x1ee1b8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1ee1b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee1bc:
    // 0x1ee1bc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1ee1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1ee1c0:
    // 0x1ee1c0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1ee1c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ee1c4:
    // 0x1ee1c4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1ee1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1ee1c8:
    // 0x1ee1c8: 0x3e00008  jr          $ra
label_1ee1cc:
    if (ctx->pc == 0x1EE1CCu) {
        ctx->pc = 0x1EE1CCu;
            // 0x1ee1cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1EE1D0u;
        goto label_1ee1d0;
    }
    ctx->pc = 0x1EE1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1C8u;
            // 0x1ee1cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE1D0u;
label_1ee1d0:
    // 0x1ee1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee1d4:
    // 0x1ee1d4: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1ee1d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1ee1d8:
    // 0x1ee1d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee1dc:
    // 0x1ee1dc: 0x8c830d4c  lw          $v1, 0xD4C($a0)
    ctx->pc = 0x1ee1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3404)));
label_1ee1e0:
    // 0x1ee1e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1ee1e4:
    if (ctx->pc == 0x1EE1E4u) {
        ctx->pc = 0x1EE1E4u;
            // 0x1ee1e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1E8u;
        goto label_1ee1e8;
    }
    ctx->pc = 0x1EE1E0u;
    {
        const bool branch_taken_0x1ee1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1E0u;
            // 0x1ee1e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1e0) {
            ctx->pc = 0x1EE200u;
            goto label_1ee200;
        }
    }
    ctx->pc = 0x1EE1E8u;
label_1ee1e8:
    // 0x1ee1e8: 0xdc820990  ld          $v0, 0x990($a0)
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 2448)));
label_1ee1ec:
    // 0x1ee1ec: 0xa3a70000  sb          $a3, 0x0($sp)
    ctx->pc = 0x1ee1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 7));
label_1ee1f0:
    // 0x1ee1f0: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x1ee1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
label_1ee1f4:
    // 0x1ee1f4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1ee1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1ee1f8:
    // 0x1ee1f8: 0x60f809  jalr        $v1
label_1ee1fc:
    if (ctx->pc == 0x1EE1FCu) {
        ctx->pc = 0x1EE1FCu;
            // 0x1ee1fc: 0x8c840d50  lw          $a0, 0xD50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3408)));
        ctx->pc = 0x1EE200u;
        goto label_1ee200;
    }
    ctx->pc = 0x1EE1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EE200u);
        ctx->pc = 0x1EE1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1F8u;
            // 0x1ee1fc: 0x8c840d50  lw          $a0, 0xD50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3408)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE200u; }
            if (ctx->pc != 0x1EE200u) { return; }
        }
        }
    }
    ctx->pc = 0x1EE200u;
label_1ee200:
    // 0x1ee200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee204:
    // 0x1ee204: 0x3e00008  jr          $ra
label_1ee208:
    if (ctx->pc == 0x1EE208u) {
        ctx->pc = 0x1EE208u;
            // 0x1ee208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EE20Cu;
        goto label_1ee20c;
    }
    ctx->pc = 0x1EE204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE204u;
            // 0x1ee208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE20Cu;
label_1ee20c:
    // 0x1ee20c: 0x0  nop
    ctx->pc = 0x1ee20cu;
    // NOP
    ctx->pc = 0x1ee210u;
}
