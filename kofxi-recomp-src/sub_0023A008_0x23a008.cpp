#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A008
// Address: 0x23a008 - 0x23a2f8
void sub_0023A008_0x23a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A008_0x23a008");
#endif

    switch (ctx->pc) {
        case 0x23a008u: goto label_23a008;
        case 0x23a00cu: goto label_23a00c;
        case 0x23a010u: goto label_23a010;
        case 0x23a014u: goto label_23a014;
        case 0x23a018u: goto label_23a018;
        case 0x23a01cu: goto label_23a01c;
        case 0x23a020u: goto label_23a020;
        case 0x23a024u: goto label_23a024;
        case 0x23a028u: goto label_23a028;
        case 0x23a02cu: goto label_23a02c;
        case 0x23a030u: goto label_23a030;
        case 0x23a034u: goto label_23a034;
        case 0x23a038u: goto label_23a038;
        case 0x23a03cu: goto label_23a03c;
        case 0x23a040u: goto label_23a040;
        case 0x23a044u: goto label_23a044;
        case 0x23a048u: goto label_23a048;
        case 0x23a04cu: goto label_23a04c;
        case 0x23a050u: goto label_23a050;
        case 0x23a054u: goto label_23a054;
        case 0x23a058u: goto label_23a058;
        case 0x23a05cu: goto label_23a05c;
        case 0x23a060u: goto label_23a060;
        case 0x23a064u: goto label_23a064;
        case 0x23a068u: goto label_23a068;
        case 0x23a06cu: goto label_23a06c;
        case 0x23a070u: goto label_23a070;
        case 0x23a074u: goto label_23a074;
        case 0x23a078u: goto label_23a078;
        case 0x23a07cu: goto label_23a07c;
        case 0x23a080u: goto label_23a080;
        case 0x23a084u: goto label_23a084;
        case 0x23a088u: goto label_23a088;
        case 0x23a08cu: goto label_23a08c;
        case 0x23a090u: goto label_23a090;
        case 0x23a094u: goto label_23a094;
        case 0x23a098u: goto label_23a098;
        case 0x23a09cu: goto label_23a09c;
        case 0x23a0a0u: goto label_23a0a0;
        case 0x23a0a4u: goto label_23a0a4;
        case 0x23a0a8u: goto label_23a0a8;
        case 0x23a0acu: goto label_23a0ac;
        case 0x23a0b0u: goto label_23a0b0;
        case 0x23a0b4u: goto label_23a0b4;
        case 0x23a0b8u: goto label_23a0b8;
        case 0x23a0bcu: goto label_23a0bc;
        case 0x23a0c0u: goto label_23a0c0;
        case 0x23a0c4u: goto label_23a0c4;
        case 0x23a0c8u: goto label_23a0c8;
        case 0x23a0ccu: goto label_23a0cc;
        case 0x23a0d0u: goto label_23a0d0;
        case 0x23a0d4u: goto label_23a0d4;
        case 0x23a0d8u: goto label_23a0d8;
        case 0x23a0dcu: goto label_23a0dc;
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a0e4u: goto label_23a0e4;
        case 0x23a0e8u: goto label_23a0e8;
        case 0x23a0ecu: goto label_23a0ec;
        case 0x23a0f0u: goto label_23a0f0;
        case 0x23a0f4u: goto label_23a0f4;
        case 0x23a0f8u: goto label_23a0f8;
        case 0x23a0fcu: goto label_23a0fc;
        case 0x23a100u: goto label_23a100;
        case 0x23a104u: goto label_23a104;
        case 0x23a108u: goto label_23a108;
        case 0x23a10cu: goto label_23a10c;
        case 0x23a110u: goto label_23a110;
        case 0x23a114u: goto label_23a114;
        case 0x23a118u: goto label_23a118;
        case 0x23a11cu: goto label_23a11c;
        case 0x23a120u: goto label_23a120;
        case 0x23a124u: goto label_23a124;
        case 0x23a128u: goto label_23a128;
        case 0x23a12cu: goto label_23a12c;
        case 0x23a130u: goto label_23a130;
        case 0x23a134u: goto label_23a134;
        case 0x23a138u: goto label_23a138;
        case 0x23a13cu: goto label_23a13c;
        case 0x23a140u: goto label_23a140;
        case 0x23a144u: goto label_23a144;
        case 0x23a148u: goto label_23a148;
        case 0x23a14cu: goto label_23a14c;
        case 0x23a150u: goto label_23a150;
        case 0x23a154u: goto label_23a154;
        case 0x23a158u: goto label_23a158;
        case 0x23a15cu: goto label_23a15c;
        case 0x23a160u: goto label_23a160;
        case 0x23a164u: goto label_23a164;
        case 0x23a168u: goto label_23a168;
        case 0x23a16cu: goto label_23a16c;
        case 0x23a170u: goto label_23a170;
        case 0x23a174u: goto label_23a174;
        case 0x23a178u: goto label_23a178;
        case 0x23a17cu: goto label_23a17c;
        case 0x23a180u: goto label_23a180;
        case 0x23a184u: goto label_23a184;
        case 0x23a188u: goto label_23a188;
        case 0x23a18cu: goto label_23a18c;
        case 0x23a190u: goto label_23a190;
        case 0x23a194u: goto label_23a194;
        case 0x23a198u: goto label_23a198;
        case 0x23a19cu: goto label_23a19c;
        case 0x23a1a0u: goto label_23a1a0;
        case 0x23a1a4u: goto label_23a1a4;
        case 0x23a1a8u: goto label_23a1a8;
        case 0x23a1acu: goto label_23a1ac;
        case 0x23a1b0u: goto label_23a1b0;
        case 0x23a1b4u: goto label_23a1b4;
        case 0x23a1b8u: goto label_23a1b8;
        case 0x23a1bcu: goto label_23a1bc;
        case 0x23a1c0u: goto label_23a1c0;
        case 0x23a1c4u: goto label_23a1c4;
        case 0x23a1c8u: goto label_23a1c8;
        case 0x23a1ccu: goto label_23a1cc;
        case 0x23a1d0u: goto label_23a1d0;
        case 0x23a1d4u: goto label_23a1d4;
        case 0x23a1d8u: goto label_23a1d8;
        case 0x23a1dcu: goto label_23a1dc;
        case 0x23a1e0u: goto label_23a1e0;
        case 0x23a1e4u: goto label_23a1e4;
        case 0x23a1e8u: goto label_23a1e8;
        case 0x23a1ecu: goto label_23a1ec;
        case 0x23a1f0u: goto label_23a1f0;
        case 0x23a1f4u: goto label_23a1f4;
        case 0x23a1f8u: goto label_23a1f8;
        case 0x23a1fcu: goto label_23a1fc;
        case 0x23a200u: goto label_23a200;
        case 0x23a204u: goto label_23a204;
        case 0x23a208u: goto label_23a208;
        case 0x23a20cu: goto label_23a20c;
        case 0x23a210u: goto label_23a210;
        case 0x23a214u: goto label_23a214;
        case 0x23a218u: goto label_23a218;
        case 0x23a21cu: goto label_23a21c;
        case 0x23a220u: goto label_23a220;
        case 0x23a224u: goto label_23a224;
        case 0x23a228u: goto label_23a228;
        case 0x23a22cu: goto label_23a22c;
        case 0x23a230u: goto label_23a230;
        case 0x23a234u: goto label_23a234;
        case 0x23a238u: goto label_23a238;
        case 0x23a23cu: goto label_23a23c;
        case 0x23a240u: goto label_23a240;
        case 0x23a244u: goto label_23a244;
        case 0x23a248u: goto label_23a248;
        case 0x23a24cu: goto label_23a24c;
        case 0x23a250u: goto label_23a250;
        case 0x23a254u: goto label_23a254;
        case 0x23a258u: goto label_23a258;
        case 0x23a25cu: goto label_23a25c;
        case 0x23a260u: goto label_23a260;
        case 0x23a264u: goto label_23a264;
        case 0x23a268u: goto label_23a268;
        case 0x23a26cu: goto label_23a26c;
        case 0x23a270u: goto label_23a270;
        case 0x23a274u: goto label_23a274;
        case 0x23a278u: goto label_23a278;
        case 0x23a27cu: goto label_23a27c;
        case 0x23a280u: goto label_23a280;
        case 0x23a284u: goto label_23a284;
        case 0x23a288u: goto label_23a288;
        case 0x23a28cu: goto label_23a28c;
        case 0x23a290u: goto label_23a290;
        case 0x23a294u: goto label_23a294;
        case 0x23a298u: goto label_23a298;
        case 0x23a29cu: goto label_23a29c;
        case 0x23a2a0u: goto label_23a2a0;
        case 0x23a2a4u: goto label_23a2a4;
        case 0x23a2a8u: goto label_23a2a8;
        case 0x23a2acu: goto label_23a2ac;
        case 0x23a2b0u: goto label_23a2b0;
        case 0x23a2b4u: goto label_23a2b4;
        case 0x23a2b8u: goto label_23a2b8;
        case 0x23a2bcu: goto label_23a2bc;
        case 0x23a2c0u: goto label_23a2c0;
        case 0x23a2c4u: goto label_23a2c4;
        case 0x23a2c8u: goto label_23a2c8;
        case 0x23a2ccu: goto label_23a2cc;
        case 0x23a2d0u: goto label_23a2d0;
        case 0x23a2d4u: goto label_23a2d4;
        case 0x23a2d8u: goto label_23a2d8;
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e0u: goto label_23a2e0;
        case 0x23a2e4u: goto label_23a2e4;
        case 0x23a2e8u: goto label_23a2e8;
        case 0x23a2ecu: goto label_23a2ec;
        case 0x23a2f0u: goto label_23a2f0;
        case 0x23a2f4u: goto label_23a2f4;
        default: break;
    }

    ctx->pc = 0x23a008u;

label_23a008:
    // 0x23a008: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23a00c:
    // 0x23a00c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23a00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23a010:
    // 0x23a010: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_23a014:
    // 0x23a014: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23a014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23a018:
    // 0x23a018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23a01c:
    // 0x23a01c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23a01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a020:
    // 0x23a020: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x23a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_23a024:
    // 0x23a024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a028:
    // 0x23a028: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23a02c:
    // 0x23a02c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23a02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23a030:
    // 0x23a030: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23a030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a034:
    // 0x23a034: 0xc08c682  jal         func_231A08
label_23a038:
    if (ctx->pc == 0x23A038u) {
        ctx->pc = 0x23A038u;
            // 0x23a038: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->pc = 0x23A03Cu;
        goto label_23a03c;
    }
    ctx->pc = 0x23A034u;
    SET_GPR_U32(ctx, 31, 0x23A03Cu);
    ctx->pc = 0x23A038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A034u;
            // 0x23a038: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A03Cu; }
        if (ctx->pc != 0x23A03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A03Cu; }
        if (ctx->pc != 0x23A03Cu) { return; }
    }
    ctx->pc = 0x23A03Cu;
label_23a03c:
    // 0x23a03c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23a03cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a040:
    // 0x23a040: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23a044:
    // 0x23a044: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a048:
    // 0x23a048: 0x3442697f  ori         $v0, $v0, 0x697F
    ctx->pc = 0x23a048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27007);
label_23a04c:
    // 0x23a04c: 0x1202008b  beq         $s0, $v0, . + 4 + (0x8B << 2)
label_23a050:
    if (ctx->pc == 0x23A050u) {
        ctx->pc = 0x23A050u;
            // 0x23a050: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x23A054u;
        goto label_23a054;
    }
    ctx->pc = 0x23A04Cu;
    {
        const bool branch_taken_0x23a04c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A04Cu;
            // 0x23a050: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a04c) {
            ctx->pc = 0x23A27Cu;
            goto label_23a27c;
        }
    }
    ctx->pc = 0x23A054u;
label_23a054:
    // 0x23a054: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_23a058:
    if (ctx->pc == 0x23A058u) {
        ctx->pc = 0x23A05Cu;
        goto label_23a05c;
    }
    ctx->pc = 0x23A054u;
    {
        const bool branch_taken_0x23a054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a054) {
            ctx->pc = 0x23A0FCu;
            goto label_23a0fc;
        }
    }
    ctx->pc = 0x23A05Cu;
label_23a05c:
    // 0x23a05c: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23a05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23a060:
    // 0x23a060: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a064:
    // 0x23a064: 0x3442690e  ori         $v0, $v0, 0x690E
    ctx->pc = 0x23a064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26894);
label_23a068:
    // 0x23a068: 0x12020097  beq         $s0, $v0, . + 4 + (0x97 << 2)
label_23a06c:
    if (ctx->pc == 0x23A06Cu) {
        ctx->pc = 0x23A06Cu;
            // 0x23a06c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x23A070u;
        goto label_23a070;
    }
    ctx->pc = 0x23A068u;
    {
        const bool branch_taken_0x23a068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A068u;
            // 0x23a06c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a068) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A070u;
label_23a070:
    // 0x23a070: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_23a074:
    if (ctx->pc == 0x23A074u) {
        ctx->pc = 0x23A078u;
        goto label_23a078;
    }
    ctx->pc = 0x23A070u;
    {
        const bool branch_taken_0x23a070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a070) {
            ctx->pc = 0x23A0A8u;
            goto label_23a0a8;
        }
    }
    ctx->pc = 0x23A078u;
label_23a078:
    // 0x23a078: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
label_23a07c:
    // 0x23a07c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a080:
    // 0x23a080: 0x3442697c  ori         $v0, $v0, 0x697C
    ctx->pc = 0x23a080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27004);
label_23a084:
    // 0x23a084: 0x1202008b  beq         $s0, $v0, . + 4 + (0x8B << 2)
label_23a088:
    if (ctx->pc == 0x23A088u) {
        ctx->pc = 0x23A088u;
            // 0x23a088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A08Cu;
        goto label_23a08c;
    }
    ctx->pc = 0x23A084u;
    {
        const bool branch_taken_0x23a084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A084u;
            // 0x23a088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a084) {
            ctx->pc = 0x23A2B4u;
            goto label_23a2b4;
        }
    }
    ctx->pc = 0x23A08Cu;
label_23a08c:
    // 0x23a08c: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23a090:
    // 0x23a090: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a094:
    // 0x23a094: 0x3442690c  ori         $v0, $v0, 0x690C
    ctx->pc = 0x23a094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26892);
label_23a098:
    // 0x23a098: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
label_23a09c:
    if (ctx->pc == 0x23A09Cu) {
        ctx->pc = 0x23A0A0u;
        goto label_23a0a0;
    }
    ctx->pc = 0x23A098u;
    {
        const bool branch_taken_0x23a098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a098) {
            ctx->pc = 0x23A1C0u;
            goto label_23a1c0;
        }
    }
    ctx->pc = 0x23A0A0u;
label_23a0a0:
    // 0x23a0a0: 0x10000089  b           . + 4 + (0x89 << 2)
label_23a0a4:
    if (ctx->pc == 0x23A0A4u) {
        ctx->pc = 0x23A0A4u;
            // 0x23a0a4: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x23A0A8u;
        goto label_23a0a8;
    }
    ctx->pc = 0x23A0A0u;
    {
        const bool branch_taken_0x23a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0A0u;
            // 0x23a0a4: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0a0) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A0A8u;
label_23a0a8:
    // 0x23a0a8: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23a0ac:
    // 0x23a0ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a0b0:
    // 0x23a0b0: 0x34426931  ori         $v0, $v0, 0x6931
    ctx->pc = 0x23a0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26929);
label_23a0b4:
    // 0x23a0b4: 0x12020084  beq         $s0, $v0, . + 4 + (0x84 << 2)
label_23a0b8:
    if (ctx->pc == 0x23A0B8u) {
        ctx->pc = 0x23A0B8u;
            // 0x23a0b8: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x23A0BCu;
        goto label_23a0bc;
    }
    ctx->pc = 0x23A0B4u;
    {
        const bool branch_taken_0x23a0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0B4u;
            // 0x23a0b8: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0b4) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A0BCu;
label_23a0bc:
    // 0x23a0bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23a0c0:
    if (ctx->pc == 0x23A0C0u) {
        ctx->pc = 0x23A0C4u;
        goto label_23a0c4;
    }
    ctx->pc = 0x23A0BCu;
    {
        const bool branch_taken_0x23a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a0bc) {
            ctx->pc = 0x23A0E0u;
            goto label_23a0e0;
        }
    }
    ctx->pc = 0x23A0C4u;
label_23a0c4:
    // 0x23a0c4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23a0c8:
    // 0x23a0c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a0cc:
    // 0x23a0cc: 0x34426910  ori         $v0, $v0, 0x6910
    ctx->pc = 0x23a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26896);
label_23a0d0:
    // 0x23a0d0: 0x5202003e  beql        $s0, $v0, . + 4 + (0x3E << 2)
label_23a0d4:
    if (ctx->pc == 0x23A0D4u) {
        ctx->pc = 0x23A0D4u;
            // 0x23a0d4: 0x96240030  lhu         $a0, 0x30($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x23A0D8u;
        goto label_23a0d8;
    }
    ctx->pc = 0x23A0D0u;
    {
        const bool branch_taken_0x23a0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a0d0) {
            ctx->pc = 0x23A0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0D0u;
            // 0x23a0d4: 0x96240030  lhu         $a0, 0x30($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23A1CCu;
            goto label_23a1cc;
        }
    }
    ctx->pc = 0x23A0D8u;
label_23a0d8:
    // 0x23a0d8: 0x1000007b  b           . + 4 + (0x7B << 2)
label_23a0dc:
    if (ctx->pc == 0x23A0DCu) {
        ctx->pc = 0x23A0DCu;
            // 0x23a0dc: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x23A0E0u;
        goto label_23a0e0;
    }
    ctx->pc = 0x23A0D8u;
    {
        const bool branch_taken_0x23a0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0D8u;
            // 0x23a0dc: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0d8) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A0E0u;
label_23a0e0:
    // 0x23a0e0: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x23a0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_23a0e4:
    // 0x23a0e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a0e8:
    // 0x23a0e8: 0x34426932  ori         $v0, $v0, 0x6932
    ctx->pc = 0x23a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26930);
label_23a0ec:
    // 0x23a0ec: 0x12020076  beq         $s0, $v0, . + 4 + (0x76 << 2)
label_23a0f0:
    if (ctx->pc == 0x23A0F0u) {
        ctx->pc = 0x23A0F4u;
        goto label_23a0f4;
    }
    ctx->pc = 0x23A0ECu;
    {
        const bool branch_taken_0x23a0ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a0ec) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A0F4u;
label_23a0f4:
    // 0x23a0f4: 0x10000074  b           . + 4 + (0x74 << 2)
label_23a0f8:
    if (ctx->pc == 0x23A0F8u) {
        ctx->pc = 0x23A0F8u;
            // 0x23a0f8: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x23A0FCu;
        goto label_23a0fc;
    }
    ctx->pc = 0x23A0F4u;
    {
        const bool branch_taken_0x23a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0F4u;
            // 0x23a0f8: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0f4) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A0FCu;
label_23a0fc:
    // 0x23a0fc: 0x3402c014  ori         $v0, $zero, 0xC014
    ctx->pc = 0x23a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
label_23a100:
    // 0x23a100: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a104:
    // 0x23a104: 0x3442697d  ori         $v0, $v0, 0x697D
    ctx->pc = 0x23a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27005);
label_23a108:
    // 0x23a108: 0x12020069  beq         $s0, $v0, . + 4 + (0x69 << 2)
label_23a10c:
    if (ctx->pc == 0x23A10Cu) {
        ctx->pc = 0x23A10Cu;
            // 0x23a10c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x23A110u;
        goto label_23a110;
    }
    ctx->pc = 0x23A108u;
    {
        const bool branch_taken_0x23a108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A108u;
            // 0x23a10c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a108) {
            ctx->pc = 0x23A2B0u;
            goto label_23a2b0;
        }
    }
    ctx->pc = 0x23A110u;
label_23a110:
    // 0x23a110: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_23a114:
    if (ctx->pc == 0x23A114u) {
        ctx->pc = 0x23A118u;
        goto label_23a118;
    }
    ctx->pc = 0x23A110u;
    {
        const bool branch_taken_0x23a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a110) {
            ctx->pc = 0x23A16Cu;
            goto label_23a16c;
        }
    }
    ctx->pc = 0x23A118u;
label_23a118:
    // 0x23a118: 0x34028c6c  ori         $v0, $zero, 0x8C6C
    ctx->pc = 0x23a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35948);
label_23a11c:
    // 0x23a11c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a120:
    // 0x23a120: 0x3442697a  ori         $v0, $v0, 0x697A
    ctx->pc = 0x23a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27002);
label_23a124:
    // 0x23a124: 0x12020062  beq         $s0, $v0, . + 4 + (0x62 << 2)
label_23a128:
    if (ctx->pc == 0x23A128u) {
        ctx->pc = 0x23A128u;
            // 0x23a128: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x23A12Cu;
        goto label_23a12c;
    }
    ctx->pc = 0x23A124u;
    {
        const bool branch_taken_0x23a124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A124u;
            // 0x23a128: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a124) {
            ctx->pc = 0x23A2B0u;
            goto label_23a2b0;
        }
    }
    ctx->pc = 0x23A12Cu;
label_23a12c:
    // 0x23a12c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23a130:
    if (ctx->pc == 0x23A130u) {
        ctx->pc = 0x23A134u;
        goto label_23a134;
    }
    ctx->pc = 0x23A12Cu;
    {
        const bool branch_taken_0x23a12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a12c) {
            ctx->pc = 0x23A150u;
            goto label_23a150;
        }
    }
    ctx->pc = 0x23A134u;
label_23a134:
    // 0x23a134: 0x34028040  ori         $v0, $zero, 0x8040
    ctx->pc = 0x23a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
label_23a138:
    // 0x23a138: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a13c:
    // 0x23a13c: 0x3442691a  ori         $v0, $v0, 0x691A
    ctx->pc = 0x23a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26906);
label_23a140:
    // 0x23a140: 0x12020061  beq         $s0, $v0, . + 4 + (0x61 << 2)
label_23a144:
    if (ctx->pc == 0x23A144u) {
        ctx->pc = 0x23A148u;
        goto label_23a148;
    }
    ctx->pc = 0x23A140u;
    {
        const bool branch_taken_0x23a140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a140) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A148u;
label_23a148:
    // 0x23a148: 0x1000005f  b           . + 4 + (0x5F << 2)
label_23a14c:
    if (ctx->pc == 0x23A14Cu) {
        ctx->pc = 0x23A14Cu;
            // 0x23a14c: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x23A150u;
        goto label_23a150;
    }
    ctx->pc = 0x23A148u;
    {
        const bool branch_taken_0x23a148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A148u;
            // 0x23a14c: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a148) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A150u;
label_23a150:
    // 0x23a150: 0x3402c014  ori         $v0, $zero, 0xC014
    ctx->pc = 0x23a150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49172);
label_23a154:
    // 0x23a154: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a158:
    // 0x23a158: 0x3442697b  ori         $v0, $v0, 0x697B
    ctx->pc = 0x23a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27003);
label_23a15c:
    // 0x23a15c: 0x12020054  beq         $s0, $v0, . + 4 + (0x54 << 2)
label_23a160:
    if (ctx->pc == 0x23A160u) {
        ctx->pc = 0x23A160u;
            // 0x23a160: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x23A164u;
        goto label_23a164;
    }
    ctx->pc = 0x23A15Cu;
    {
        const bool branch_taken_0x23a15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A15Cu;
            // 0x23a160: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a15c) {
            ctx->pc = 0x23A2B0u;
            goto label_23a2b0;
        }
    }
    ctx->pc = 0x23A164u;
label_23a164:
    // 0x23a164: 0x10000058  b           . + 4 + (0x58 << 2)
label_23a168:
    if (ctx->pc == 0x23A168u) {
        ctx->pc = 0x23A16Cu;
        goto label_23a16c;
    }
    ctx->pc = 0x23A164u;
    {
        const bool branch_taken_0x23a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a164) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A16Cu;
label_23a16c:
    // 0x23a16c: 0x3402c0a8  ori         $v0, $zero, 0xC0A8
    ctx->pc = 0x23a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49320);
label_23a170:
    // 0x23a170: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a174:
    // 0x23a174: 0x34426978  ori         $v0, $v0, 0x6978
    ctx->pc = 0x23a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27000);
label_23a178:
    // 0x23a178: 0x1202004d  beq         $s0, $v0, . + 4 + (0x4D << 2)
label_23a17c:
    if (ctx->pc == 0x23A17Cu) {
        ctx->pc = 0x23A17Cu;
            // 0x23a17c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x23A180u;
        goto label_23a180;
    }
    ctx->pc = 0x23A178u;
    {
        const bool branch_taken_0x23a178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A178u;
            // 0x23a17c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a178) {
            ctx->pc = 0x23A2B0u;
            goto label_23a2b0;
        }
    }
    ctx->pc = 0x23A180u;
label_23a180:
    // 0x23a180: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23a184:
    if (ctx->pc == 0x23A184u) {
        ctx->pc = 0x23A188u;
        goto label_23a188;
    }
    ctx->pc = 0x23A180u;
    {
        const bool branch_taken_0x23a180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a180) {
            ctx->pc = 0x23A1A4u;
            goto label_23a1a4;
        }
    }
    ctx->pc = 0x23A188u;
label_23a188:
    // 0x23a188: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x23a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_23a18c:
    // 0x23a18c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a190:
    // 0x23a190: 0x3442697e  ori         $v0, $v0, 0x697E
    ctx->pc = 0x23a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27006);
label_23a194:
    // 0x23a194: 0x52020044  beql        $s0, $v0, . + 4 + (0x44 << 2)
label_23a198:
    if (ctx->pc == 0x23A198u) {
        ctx->pc = 0x23A198u;
            // 0x23a198: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x23A19Cu;
        goto label_23a19c;
    }
    ctx->pc = 0x23A194u;
    {
        const bool branch_taken_0x23a194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a194) {
            ctx->pc = 0x23A198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23A194u;
            // 0x23a198: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23A2A8u;
            goto label_23a2a8;
        }
    }
    ctx->pc = 0x23A19Cu;
label_23a19c:
    // 0x23a19c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_23a1a0:
    if (ctx->pc == 0x23A1A0u) {
        ctx->pc = 0x23A1A0u;
            // 0x23a1a0: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x23A1A4u;
        goto label_23a1a4;
    }
    ctx->pc = 0x23A19Cu;
    {
        const bool branch_taken_0x23a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A19Cu;
            // 0x23a1a0: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a19c) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A1A4u;
label_23a1a4:
    // 0x23a1a4: 0x3402cc6c  ori         $v0, $zero, 0xCC6C
    ctx->pc = 0x23a1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52332);
label_23a1a8:
    // 0x23a1a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a1ac:
    // 0x23a1ac: 0x34426979  ori         $v0, $v0, 0x6979
    ctx->pc = 0x23a1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27001);
label_23a1b0:
    // 0x23a1b0: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
label_23a1b4:
    if (ctx->pc == 0x23A1B4u) {
        ctx->pc = 0x23A1B4u;
            // 0x23a1b4: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x23A1B8u;
        goto label_23a1b8;
    }
    ctx->pc = 0x23A1B0u;
    {
        const bool branch_taken_0x23a1b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1B0u;
            // 0x23a1b4: 0x24140019  addiu       $s4, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1b0) {
            ctx->pc = 0x23A2B0u;
            goto label_23a2b0;
        }
    }
    ctx->pc = 0x23A1B8u;
label_23a1b8:
    // 0x23a1b8: 0x10000043  b           . + 4 + (0x43 << 2)
label_23a1bc:
    if (ctx->pc == 0x23A1BCu) {
        ctx->pc = 0x23A1C0u;
        goto label_23a1c0;
    }
    ctx->pc = 0x23A1B8u;
    {
        const bool branch_taken_0x23a1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a1b8) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A1C0u;
label_23a1c0:
    // 0x23a1c0: 0xc08d504  jal         func_235410
label_23a1c4:
    if (ctx->pc == 0x23A1C4u) {
        ctx->pc = 0x23A1C4u;
            // 0x23a1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A1C8u;
        goto label_23a1c8;
    }
    ctx->pc = 0x23A1C0u;
    SET_GPR_U32(ctx, 31, 0x23A1C8u);
    ctx->pc = 0x23A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1C0u;
            // 0x23a1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235410u;
    if (runtime->hasFunction(0x235410u)) {
        auto targetFn = runtime->lookupFunction(0x235410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A1C8u; }
        if (ctx->pc != 0x23A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235410_0x235410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A1C8u; }
        if (ctx->pc != 0x23A1C8u) { return; }
    }
    ctx->pc = 0x23A1C8u;
label_23a1c8:
    // 0x23a1c8: 0x96240030  lhu         $a0, 0x30($s1)
    ctx->pc = 0x23a1c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_23a1cc:
    // 0x23a1cc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x23a1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_23a1d0:
    // 0x23a1d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23a1d4:
    if (ctx->pc == 0x23A1D4u) {
        ctx->pc = 0x23A1D4u;
            // 0x23a1d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A1D8u;
        goto label_23a1d8;
    }
    ctx->pc = 0x23A1D0u;
    {
        const bool branch_taken_0x23a1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1D0u;
            // 0x23a1d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1d0) {
            ctx->pc = 0x23A1E0u;
            goto label_23a1e0;
        }
    }
    ctx->pc = 0x23A1D8u;
label_23a1d8:
    // 0x23a1d8: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x23a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_23a1dc:
    // 0x23a1dc: 0x2c530001  sltiu       $s3, $v0, 0x1
    ctx->pc = 0x23a1dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23a1e0:
    // 0x23a1e0: 0xde220030  ld          $v0, 0x30($s1)
    ctx->pc = 0x23a1e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 48)));
label_23a1e4:
    // 0x23a1e4: 0x30903000  andi        $s0, $a0, 0x3000
    ctx->pc = 0x23a1e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12288);
label_23a1e8:
    // 0x23a1e8: 0x24033000  addiu       $v1, $zero, 0x3000
    ctx->pc = 0x23a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
label_23a1ec:
    // 0x23a1ec: 0x30420041  andi        $v0, $v0, 0x41
    ctx->pc = 0x23a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65);
label_23a1f0:
    // 0x23a1f0: 0x38420040  xori        $v0, $v0, 0x40
    ctx->pc = 0x23a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)64);
label_23a1f4:
    // 0x23a1f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23a1f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23a1f8:
    // 0x23a1f8: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x23a1f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_23a1fc:
    // 0x23a1fc: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x23a1fcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_23a200:
    // 0x23a200: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_23a204:
    if (ctx->pc == 0x23A204u) {
        ctx->pc = 0x23A204u;
            // 0x23a204: 0x3082dfff  andi        $v0, $a0, 0xDFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)57343);
        ctx->pc = 0x23A208u;
        goto label_23a208;
    }
    ctx->pc = 0x23A200u;
    {
        const bool branch_taken_0x23a200 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x23A204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A200u;
            // 0x23a204: 0x3082dfff  andi        $v0, $a0, 0xDFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)57343);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a200) {
            ctx->pc = 0x23A210u;
            goto label_23a210;
        }
    }
    ctx->pc = 0x23A208u;
label_23a208:
    // 0x23a208: 0x24101000  addiu       $s0, $zero, 0x1000
    ctx->pc = 0x23a208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_23a20c:
    // 0x23a20c: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x23a20cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
label_23a210:
    // 0x23a210: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_23a214:
    if (ctx->pc == 0x23A214u) {
        ctx->pc = 0x23A214u;
            // 0x23a214: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A218u;
        goto label_23a218;
    }
    ctx->pc = 0x23A210u;
    {
        const bool branch_taken_0x23a210 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A210u;
            // 0x23a214: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a210) {
            ctx->pc = 0x23A220u;
            goto label_23a220;
        }
    }
    ctx->pc = 0x23A218u;
label_23a218:
    // 0x23a218: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_23a21c:
    if (ctx->pc == 0x23A21Cu) {
        ctx->pc = 0x23A220u;
        goto label_23a220;
    }
    ctx->pc = 0x23A218u;
    {
        const bool branch_taken_0x23a218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a218) {
            ctx->pc = 0x23A22Cu;
            goto label_23a22c;
        }
    }
    ctx->pc = 0x23A220u;
label_23a220:
    // 0x23a220: 0x8c625074  lw          $v0, 0x5074($v1)
    ctx->pc = 0x23a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20596)));
label_23a224:
    // 0x23a224: 0x40f809  jalr        $v0
label_23a228:
    if (ctx->pc == 0x23A228u) {
        ctx->pc = 0x23A228u;
            // 0x23a228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A22Cu;
        goto label_23a22c;
    }
    ctx->pc = 0x23A224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A22Cu);
        ctx->pc = 0x23A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A224u;
            // 0x23a228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A22Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A22Cu; }
            if (ctx->pc != 0x23A22Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23A22Cu;
label_23a22c:
    // 0x23a22c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_23a230:
    if (ctx->pc == 0x23A230u) {
        ctx->pc = 0x23A234u;
        goto label_23a234;
    }
    ctx->pc = 0x23A22Cu;
    {
        const bool branch_taken_0x23a22c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a22c) {
            ctx->pc = 0x23A25Cu;
            goto label_23a25c;
        }
    }
    ctx->pc = 0x23A234u;
label_23a234:
    // 0x23a234: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_23a238:
    if (ctx->pc == 0x23A238u) {
        ctx->pc = 0x23A238u;
            // 0x23a238: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x23A23Cu;
        goto label_23a23c;
    }
    ctx->pc = 0x23A234u;
    {
        const bool branch_taken_0x23a234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A234u;
            // 0x23a238: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a234) {
            ctx->pc = 0x23A25Cu;
            goto label_23a25c;
        }
    }
    ctx->pc = 0x23A23Cu;
label_23a23c:
    // 0x23a23c: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x23a23cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_23a240:
    // 0x23a240: 0x8c655070  lw          $a1, 0x5070($v1)
    ctx->pc = 0x23a240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20592)));
label_23a244:
    // 0x23a244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23a248:
    // 0x23a248: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_23a24c:
    // 0x23a24c: 0xa0f809  jalr        $a1
label_23a250:
    if (ctx->pc == 0x23A250u) {
        ctx->pc = 0x23A250u;
            // 0x23a250: 0xa6220030  sh          $v0, 0x30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x23A254u;
        goto label_23a254;
    }
    ctx->pc = 0x23A24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23A254u);
        ctx->pc = 0x23A250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A24Cu;
            // 0x23a250: 0xa6220030  sh          $v0, 0x30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A254u; }
            if (ctx->pc != 0x23A254u) { return; }
        }
        }
    }
    ctx->pc = 0x23A254u;
label_23a254:
    // 0x23a254: 0x1000001c  b           . + 4 + (0x1C << 2)
label_23a258:
    if (ctx->pc == 0x23A258u) {
        ctx->pc = 0x23A25Cu;
        goto label_23a25c;
    }
    ctx->pc = 0x23A254u;
    {
        const bool branch_taken_0x23a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a254) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A25Cu;
label_23a25c:
    // 0x23a25c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_23a260:
    if (ctx->pc == 0x23A260u) {
        ctx->pc = 0x23A264u;
        goto label_23a264;
    }
    ctx->pc = 0x23A25Cu;
    {
        const bool branch_taken_0x23a25c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a25c) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A264u;
label_23a264:
    // 0x23a264: 0xc08e76a  jal         func_239DA8
label_23a268:
    if (ctx->pc == 0x23A268u) {
        ctx->pc = 0x23A268u;
            // 0x23a268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A26Cu;
        goto label_23a26c;
    }
    ctx->pc = 0x23A264u;
    SET_GPR_U32(ctx, 31, 0x23A26Cu);
    ctx->pc = 0x23A268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A264u;
            // 0x23a268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA8u;
    if (runtime->hasFunction(0x239DA8u)) {
        auto targetFn = runtime->lookupFunction(0x239DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A26Cu; }
        if (ctx->pc != 0x23A26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239DA8_0x239da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A26Cu; }
        if (ctx->pc != 0x23A26Cu) { return; }
    }
    ctx->pc = 0x23A26Cu;
label_23a26c:
    // 0x23a26c: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x23a26cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_23a270:
    // 0x23a270: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x23a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_23a274:
    // 0x23a274: 0x10000014  b           . + 4 + (0x14 << 2)
label_23a278:
    if (ctx->pc == 0x23A278u) {
        ctx->pc = 0x23A278u;
            // 0x23a278: 0xa6220030  sh          $v0, 0x30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x23A27Cu;
        goto label_23a27c;
    }
    ctx->pc = 0x23A274u;
    {
        const bool branch_taken_0x23a274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A274u;
            // 0x23a278: 0xa6220030  sh          $v0, 0x30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a274) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A27Cu;
label_23a27c:
    // 0x23a27c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x23a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23a280:
    // 0x23a280: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x23a280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_23a284:
    // 0x23a284: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_23a288:
    if (ctx->pc == 0x23A288u) {
        ctx->pc = 0x23A288u;
            // 0x23a288: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x23A28Cu;
        goto label_23a28c;
    }
    ctx->pc = 0x23A284u;
    {
        const bool branch_taken_0x23a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A284u;
            // 0x23a288: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a284) {
            ctx->pc = 0x23A2D4u;
            goto label_23a2d4;
        }
    }
    ctx->pc = 0x23A28Cu;
label_23a28c:
    // 0x23a28c: 0x8e22027c  lw          $v0, 0x27C($s1)
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_23a290:
    // 0x23a290: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x23a290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23a294:
    // 0x23a294: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_23a298:
    if (ctx->pc == 0x23A298u) {
        ctx->pc = 0x23A298u;
            // 0x23a298: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x23A29Cu;
        goto label_23a29c;
    }
    ctx->pc = 0x23A294u;
    {
        const bool branch_taken_0x23a294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A294u;
            // 0x23a298: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a294) {
            ctx->pc = 0x23A2D4u;
            goto label_23a2d4;
        }
    }
    ctx->pc = 0x23A29Cu;
label_23a29c:
    // 0x23a29c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x23a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23a2a0:
    // 0x23a2a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_23a2a4:
    if (ctx->pc == 0x23A2A4u) {
        ctx->pc = 0x23A2A4u;
            // 0x23a2a4: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
        ctx->pc = 0x23A2A8u;
        goto label_23a2a8;
    }
    ctx->pc = 0x23A2A0u;
    {
        const bool branch_taken_0x23a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2A0u;
            // 0x23a2a4: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2a0) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A2A8u;
label_23a2a8:
    // 0x23a2a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_23a2ac:
    if (ctx->pc == 0x23A2ACu) {
        ctx->pc = 0x23A2ACu;
            // 0x23a2ac: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x23A2B0u;
        goto label_23a2b0;
    }
    ctx->pc = 0x23A2A8u;
    {
        const bool branch_taken_0x23a2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2A8u;
            // 0x23a2ac: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2a8) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A2B0u;
label_23a2b0:
    // 0x23a2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23a2b4:
    // 0x23a2b4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x23a2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_23a2b8:
    // 0x23a2b8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x23a2b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_23a2bc:
    // 0x23a2bc: 0xc08fff8  jal         func_23FFE0
label_23a2c0:
    if (ctx->pc == 0x23A2C0u) {
        ctx->pc = 0x23A2C0u;
            // 0x23a2c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A2C4u;
        goto label_23a2c4;
    }
    ctx->pc = 0x23A2BCu;
    SET_GPR_U32(ctx, 31, 0x23A2C4u);
    ctx->pc = 0x23A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2BCu;
            // 0x23a2c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FFE0u;
    if (runtime->hasFunction(0x23FFE0u)) {
        auto targetFn = runtime->lookupFunction(0x23FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2C4u; }
        if (ctx->pc != 0x23A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023FFE0_0x23ffe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2C4u; }
        if (ctx->pc != 0x23A2C4u) { return; }
    }
    ctx->pc = 0x23A2C4u;
label_23a2c4:
    // 0x23a2c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23a2c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a2c8:
    // 0x23a2c8: 0xc08c698  jal         func_231A60
label_23a2cc:
    if (ctx->pc == 0x23A2CCu) {
        ctx->pc = 0x23A2CCu;
            // 0x23a2cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A2D0u;
        goto label_23a2d0;
    }
    ctx->pc = 0x23A2C8u;
    SET_GPR_U32(ctx, 31, 0x23A2D0u);
    ctx->pc = 0x23A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2C8u;
            // 0x23a2cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2D0u; }
        if (ctx->pc != 0x23A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2D0u; }
        if (ctx->pc != 0x23A2D0u) { return; }
    }
    ctx->pc = 0x23A2D0u;
label_23a2d0:
    // 0x23a2d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x23a2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23a2d4:
    // 0x23a2d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23a2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23a2d8:
    // 0x23a2d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x23a2d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23a2dc:
    // 0x23a2dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23a2dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23a2e0:
    // 0x23a2e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23a2e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23a2e4:
    // 0x23a2e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23a2e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23a2e8:
    // 0x23a2e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23a2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23a2ec:
    // 0x23a2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a2f0:
    // 0x23a2f0: 0x3e00008  jr          $ra
label_23a2f4:
    if (ctx->pc == 0x23A2F4u) {
        ctx->pc = 0x23A2F4u;
            // 0x23a2f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23A2F8u;
        goto label_fallthrough_0x23a2f0;
    }
    ctx->pc = 0x23A2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2F0u;
            // 0x23a2f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a2f0:
    ctx->pc = 0x23A2F8u;
    ctx->pc = 0x23a2f8u;
}
