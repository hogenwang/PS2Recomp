#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B2FC8
// Address: 0x2b2fc8 - 0x2b30f8
void sub_002B2FC8_0x2b2fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2FC8_0x2b2fc8");
#endif

    switch (ctx->pc) {
        case 0x2b2fc8u: goto label_2b2fc8;
        case 0x2b2fccu: goto label_2b2fcc;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fd4u: goto label_2b2fd4;
        case 0x2b2fd8u: goto label_2b2fd8;
        case 0x2b2fdcu: goto label_2b2fdc;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2fe4u: goto label_2b2fe4;
        case 0x2b2fe8u: goto label_2b2fe8;
        case 0x2b2fecu: goto label_2b2fec;
        case 0x2b2ff0u: goto label_2b2ff0;
        case 0x2b2ff4u: goto label_2b2ff4;
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3000u: goto label_2b3000;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b3008u: goto label_2b3008;
        case 0x2b300cu: goto label_2b300c;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3014u: goto label_2b3014;
        case 0x2b3018u: goto label_2b3018;
        case 0x2b301cu: goto label_2b301c;
        case 0x2b3020u: goto label_2b3020;
        case 0x2b3024u: goto label_2b3024;
        case 0x2b3028u: goto label_2b3028;
        case 0x2b302cu: goto label_2b302c;
        case 0x2b3030u: goto label_2b3030;
        case 0x2b3034u: goto label_2b3034;
        case 0x2b3038u: goto label_2b3038;
        case 0x2b303cu: goto label_2b303c;
        case 0x2b3040u: goto label_2b3040;
        case 0x2b3044u: goto label_2b3044;
        case 0x2b3048u: goto label_2b3048;
        case 0x2b304cu: goto label_2b304c;
        case 0x2b3050u: goto label_2b3050;
        case 0x2b3054u: goto label_2b3054;
        case 0x2b3058u: goto label_2b3058;
        case 0x2b305cu: goto label_2b305c;
        case 0x2b3060u: goto label_2b3060;
        case 0x2b3064u: goto label_2b3064;
        case 0x2b3068u: goto label_2b3068;
        case 0x2b306cu: goto label_2b306c;
        case 0x2b3070u: goto label_2b3070;
        case 0x2b3074u: goto label_2b3074;
        case 0x2b3078u: goto label_2b3078;
        case 0x2b307cu: goto label_2b307c;
        case 0x2b3080u: goto label_2b3080;
        case 0x2b3084u: goto label_2b3084;
        case 0x2b3088u: goto label_2b3088;
        case 0x2b308cu: goto label_2b308c;
        case 0x2b3090u: goto label_2b3090;
        case 0x2b3094u: goto label_2b3094;
        case 0x2b3098u: goto label_2b3098;
        case 0x2b309cu: goto label_2b309c;
        case 0x2b30a0u: goto label_2b30a0;
        case 0x2b30a4u: goto label_2b30a4;
        case 0x2b30a8u: goto label_2b30a8;
        case 0x2b30acu: goto label_2b30ac;
        case 0x2b30b0u: goto label_2b30b0;
        case 0x2b30b4u: goto label_2b30b4;
        case 0x2b30b8u: goto label_2b30b8;
        case 0x2b30bcu: goto label_2b30bc;
        case 0x2b30c0u: goto label_2b30c0;
        case 0x2b30c4u: goto label_2b30c4;
        case 0x2b30c8u: goto label_2b30c8;
        case 0x2b30ccu: goto label_2b30cc;
        case 0x2b30d0u: goto label_2b30d0;
        case 0x2b30d4u: goto label_2b30d4;
        case 0x2b30d8u: goto label_2b30d8;
        case 0x2b30dcu: goto label_2b30dc;
        case 0x2b30e0u: goto label_2b30e0;
        case 0x2b30e4u: goto label_2b30e4;
        case 0x2b30e8u: goto label_2b30e8;
        case 0x2b30ecu: goto label_2b30ec;
        case 0x2b30f0u: goto label_2b30f0;
        case 0x2b30f4u: goto label_2b30f4;
        default: break;
    }

    ctx->pc = 0x2b2fc8u;

label_2b2fc8:
    // 0x2b2fc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b2fcc:
    // 0x2b2fcc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b2fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2b2fd0:
    // 0x2b2fd0: 0x27a50003  addiu       $a1, $sp, 0x3
    ctx->pc = 0x2b2fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3));
label_2b2fd4:
    // 0x2b2fd4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2b2fd8:
    // 0x2b2fd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b2fd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fdc:
    // 0x2b2fdc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b2fe0:
    // 0x2b2fe0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b2fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fe4:
    // 0x2b2fe4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2b2fe8:
    // 0x2b2fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fec:
    // 0x2b2fec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b2fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2b2ff0:
    // 0x2b2ff0: 0x8e1100d4  lw          $s1, 0xD4($s0)
    ctx->pc = 0x2b2ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2b2ff4:
    // 0x2b2ff4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2b2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2b2ff8:
    // 0x2b2ff8: 0x920300d8  lbu         $v1, 0xD8($s0)
    ctx->pc = 0x2b2ff8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
label_2b2ffc:
    // 0x2b2ffc: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2b2ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_2b3000:
    // 0x2b3000: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2b3000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_2b3004:
    // 0x2b3004: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2b3004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2b3008:
    // 0x2b3008: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2b3008u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2b300c:
    // 0x2b300c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b300cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b3010:
    // 0x2b3010: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x2b3010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
label_2b3014:
    // 0x2b3014: 0xc0aca20  jal         func_2B2880
label_2b3018:
    if (ctx->pc == 0x2B3018u) {
        ctx->pc = 0x2B3018u;
            // 0x2b3018: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B301Cu;
        goto label_2b301c;
    }
    ctx->pc = 0x2B3014u;
    SET_GPR_U32(ctx, 31, 0x2B301Cu);
    ctx->pc = 0x2B3018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3014u;
            // 0x2b3018: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2880u;
    if (runtime->hasFunction(0x2B2880u)) {
        auto targetFn = runtime->lookupFunction(0x2B2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B301Cu; }
        if (ctx->pc != 0x2B301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2880_0x2b2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B301Cu; }
        if (ctx->pc != 0x2B301Cu) { return; }
    }
    ctx->pc = 0x2B301Cu;
label_2b301c:
    // 0x2b301c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b301cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3020:
    // 0x2b3020: 0x4c30003  bgezl       $a2, . + 4 + (0x3 << 2)
label_2b3024:
    if (ctx->pc == 0x2B3024u) {
        ctx->pc = 0x2B3024u;
            // 0x2b3024: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->pc = 0x2B3028u;
        goto label_2b3028;
    }
    ctx->pc = 0x2B3020u;
    {
        const bool branch_taken_0x2b3020 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2b3020) {
            ctx->pc = 0x2B3024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3020u;
            // 0x2b3024: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3030u;
            goto label_2b3030;
        }
    }
    ctx->pc = 0x2B3028u;
label_2b3028:
    // 0x2b3028: 0x10000020  b           . + 4 + (0x20 << 2)
label_2b302c:
    if (ctx->pc == 0x2B302Cu) {
        ctx->pc = 0x2B302Cu;
            // 0x2b302c: 0xae1100d4  sw          $s1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 17));
        ctx->pc = 0x2B3030u;
        goto label_2b3030;
    }
    ctx->pc = 0x2B3028u;
    {
        const bool branch_taken_0x2b3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3028u;
            // 0x2b302c: 0xae1100d4  sw          $s1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3028) {
            ctx->pc = 0x2B30ACu;
            goto label_2b30ac;
        }
    }
    ctx->pc = 0x2B3030u;
label_2b3030:
    // 0x2b3030: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
label_2b3034:
    if (ctx->pc == 0x2B3034u) {
        ctx->pc = 0x2B3034u;
            // 0x2b3034: 0x2261023  subu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->pc = 0x2B3038u;
        goto label_2b3038;
    }
    ctx->pc = 0x2B3030u;
    {
        const bool branch_taken_0x2b3030 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3030u;
            // 0x2b3034: 0x2261023  subu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3030) {
            ctx->pc = 0x2B30ACu;
            goto label_2b30ac;
        }
    }
    ctx->pc = 0x2B3038u;
label_2b3038:
    // 0x2b3038: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_2b303c:
    // 0x2b303c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2b3040:
    if (ctx->pc == 0x2B3040u) {
        ctx->pc = 0x2B3040u;
            // 0x2b3040: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x2B3044u;
        goto label_2b3044;
    }
    ctx->pc = 0x2B303Cu;
    {
        const bool branch_taken_0x2b303c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B303Cu;
            // 0x2b3040: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b303c) {
            ctx->pc = 0x2B3068u;
            goto label_2b3068;
        }
    }
    ctx->pc = 0x2B3044u;
label_2b3044:
    // 0x2b3044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b3048:
    // 0x2b3048: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b3048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b304c:
    // 0x2b304c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2b304cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2b3050:
    // 0x2b3050: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2b3050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b3054:
    // 0x2b3054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b3054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3058:
    // 0x2b3058: 0xc0a1558  jal         func_285560
label_2b305c:
    if (ctx->pc == 0x2B305Cu) {
        ctx->pc = 0x2B305Cu;
            // 0x2b305c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B3060u;
        goto label_2b3060;
    }
    ctx->pc = 0x2B3058u;
    SET_GPR_U32(ctx, 31, 0x2B3060u);
    ctx->pc = 0x2B305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3058u;
            // 0x2b305c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3060u; }
        if (ctx->pc != 0x2B3060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3060u; }
        if (ctx->pc != 0x2B3060u) { return; }
    }
    ctx->pc = 0x2B3060u;
label_2b3060:
    // 0x2b3060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3064:
    // 0x2b3064: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b3064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_2b3068:
    // 0x2b3068: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2b3068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2b306c:
    // 0x2b306c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b3070:
    if (ctx->pc == 0x2B3070u) {
        ctx->pc = 0x2B3070u;
            // 0x2b3070: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x2B3074u;
        goto label_2b3074;
    }
    ctx->pc = 0x2B306Cu;
    {
        const bool branch_taken_0x2b306c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b306c) {
            ctx->pc = 0x2B3070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B306Cu;
            // 0x2b3070: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3080u;
            goto label_2b3080;
        }
    }
    ctx->pc = 0x2B3074u;
label_2b3074:
    // 0x2b3074: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b3074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3078:
    // 0x2b3078: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b307c:
    if (ctx->pc == 0x2B307Cu) {
        ctx->pc = 0x2B307Cu;
            // 0x2b307c: 0x8e1200c8  lw          $s2, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2B3080u;
        goto label_2b3080;
    }
    ctx->pc = 0x2B3078u;
    {
        const bool branch_taken_0x2b3078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3078u;
            // 0x2b307c: 0x8e1200c8  lw          $s2, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3078) {
            ctx->pc = 0x2B3094u;
            goto label_2b3094;
        }
    }
    ctx->pc = 0x2B3080u;
label_2b3080:
    // 0x2b3080: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2b3080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2b3084:
    // 0x2b3084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b3088:
    if (ctx->pc == 0x2B3088u) {
        ctx->pc = 0x2B308Cu;
        goto label_2b308c;
    }
    ctx->pc = 0x2B3084u;
    {
        const bool branch_taken_0x2b3084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3084) {
            ctx->pc = 0x2B3094u;
            goto label_2b3094;
        }
    }
    ctx->pc = 0x2B308Cu;
label_2b308c:
    // 0x2b308c: 0x8c520084  lw          $s2, 0x84($v0)
    ctx->pc = 0x2b308cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2b3090:
    // 0x2b3090: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2b3090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b3094:
    // 0x2b3094: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2b3098:
    if (ctx->pc == 0x2B3098u) {
        ctx->pc = 0x2B3098u;
            // 0x2b3098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B309Cu;
        goto label_2b309c;
    }
    ctx->pc = 0x2B3094u;
    {
        const bool branch_taken_0x2b3094 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3094u;
            // 0x2b3098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3094) {
            ctx->pc = 0x2B30ACu;
            goto label_2b30ac;
        }
    }
    ctx->pc = 0x2B309Cu;
label_2b309c:
    // 0x2b309c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b309cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b30a0:
    // 0x2b30a0: 0x8c8600d8  lw          $a2, 0xD8($a0)
    ctx->pc = 0x2b30a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_2b30a4:
    // 0x2b30a4: 0x260f809  jalr        $s3
label_2b30a8:
    if (ctx->pc == 0x2B30A8u) {
        ctx->pc = 0x2B30A8u;
            // 0x2b30a8: 0x24054008  addiu       $a1, $zero, 0x4008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
        ctx->pc = 0x2B30ACu;
        goto label_2b30ac;
    }
    ctx->pc = 0x2B30A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2B30ACu);
        ctx->pc = 0x2B30A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30A4u;
            // 0x2b30a8: 0x24054008  addiu       $a1, $zero, 0x4008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B30ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B30ACu; }
            if (ctx->pc != 0x2B30ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2B30ACu;
label_2b30ac:
    // 0x2b30ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b30acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b30b0:
    // 0x2b30b0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b30b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b30b4:
    // 0x2b30b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b30b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b30b8:
    // 0x2b30b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b30b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b30bc:
    // 0x2b30bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b30bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b30c0:
    // 0x2b30c0: 0x3e00008  jr          $ra
label_2b30c4:
    if (ctx->pc == 0x2B30C4u) {
        ctx->pc = 0x2B30C4u;
            // 0x2b30c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2B30C8u;
        goto label_2b30c8;
    }
    ctx->pc = 0x2B30C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B30C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30C0u;
            // 0x2b30c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B30C8u;
label_2b30c8:
    // 0x2b30c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b30c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b30cc:
    // 0x2b30cc: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2b30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_2b30d0:
    // 0x2b30d0: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_2b30d4:
    if (ctx->pc == 0x2B30D4u) {
        ctx->pc = 0x2B30D4u;
            // 0x2b30d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2B30D8u;
        goto label_2b30d8;
    }
    ctx->pc = 0x2B30D0u;
    {
        const bool branch_taken_0x2b30d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B30D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30D0u;
            // 0x2b30d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30d0) {
            ctx->pc = 0x2B30E8u;
            goto label_2b30e8;
        }
    }
    ctx->pc = 0x2B30D8u;
label_2b30d8:
    // 0x2b30d8: 0xc0acc3e  jal         func_2B30F8
label_2b30dc:
    if (ctx->pc == 0x2B30DCu) {
        ctx->pc = 0x2B30E0u;
        goto label_2b30e0;
    }
    ctx->pc = 0x2B30D8u;
    SET_GPR_U32(ctx, 31, 0x2B30E0u);
    ctx->pc = 0x2B30F8u;
    if (runtime->hasFunction(0x2B30F8u)) {
        auto targetFn = runtime->lookupFunction(0x2B30F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30E0u; }
        if (ctx->pc != 0x2B30E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B30F8_0x2b30f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B30E0u; }
        if (ctx->pc != 0x2B30E0u) { return; }
    }
    ctx->pc = 0x2B30E0u;
label_2b30e0:
    // 0x2b30e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b30e4:
    if (ctx->pc == 0x2B30E4u) {
        ctx->pc = 0x2B30E4u;
            // 0x2b30e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2B30E8u;
        goto label_2b30e8;
    }
    ctx->pc = 0x2B30E0u;
    {
        const bool branch_taken_0x2b30e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30E0u;
            // 0x2b30e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30e0) {
            ctx->pc = 0x2B30F0u;
            goto label_2b30f0;
        }
    }
    ctx->pc = 0x2B30E8u;
label_2b30e8:
    // 0x2b30e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b30e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b30ec:
    // 0x2b30ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b30ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b30f0:
    // 0x2b30f0: 0x3e00008  jr          $ra
label_2b30f4:
    if (ctx->pc == 0x2B30F4u) {
        ctx->pc = 0x2B30F4u;
            // 0x2b30f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2B30F8u;
        goto label_fallthrough_0x2b30f0;
    }
    ctx->pc = 0x2B30F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B30F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B30F0u;
            // 0x2b30f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b30f0:
    ctx->pc = 0x2B30F8u;
    ctx->pc = 0x2b30f8u;
}
