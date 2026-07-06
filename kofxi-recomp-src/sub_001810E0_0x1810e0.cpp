#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001810E0
// Address: 0x1810e0 - 0x181a20
void sub_001810E0_0x1810e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001810E0_0x1810e0");
#endif

    switch (ctx->pc) {
        case 0x181114u: goto label_181114;
        case 0x181150u: goto label_181150;
        case 0x18117cu: goto label_18117c;
        case 0x18119cu: goto label_18119c;
        case 0x1811d0u: goto label_1811d0;
        case 0x181320u: goto label_181320;
        case 0x181358u: goto label_181358;
        case 0x181360u: goto label_181360;
        case 0x181380u: goto label_181380;
        case 0x1813d0u: goto label_1813d0;
        case 0x181454u: goto label_181454;
        case 0x181490u: goto label_181490;
        case 0x1814acu: goto label_1814ac;
        case 0x1814c8u: goto label_1814c8;
        case 0x1814d0u: goto label_1814d0;
        case 0x181504u: goto label_181504;
        case 0x181510u: goto label_181510;
        case 0x181528u: goto label_181528;
        case 0x18153cu: goto label_18153c;
        case 0x181544u: goto label_181544;
        case 0x181554u: goto label_181554;
        case 0x18156cu: goto label_18156c;
        case 0x181588u: goto label_181588;
        case 0x1815b0u: goto label_1815b0;
        case 0x1815bcu: goto label_1815bc;
        case 0x1815d0u: goto label_1815d0;
        case 0x1815e4u: goto label_1815e4;
        case 0x1815ecu: goto label_1815ec;
        case 0x181618u: goto label_181618;
        case 0x181634u: goto label_181634;
        case 0x181654u: goto label_181654;
        case 0x181660u: goto label_181660;
        case 0x1816a4u: goto label_1816a4;
        case 0x1816b0u: goto label_1816b0;
        case 0x1816d0u: goto label_1816d0;
        case 0x1816e4u: goto label_1816e4;
        case 0x1816ecu: goto label_1816ec;
        case 0x181714u: goto label_181714;
        case 0x18171cu: goto label_18171c;
        case 0x18172cu: goto label_18172c;
        case 0x181740u: goto label_181740;
        case 0x181750u: goto label_181750;
        case 0x181760u: goto label_181760;
        case 0x181768u: goto label_181768;
        case 0x1817a8u: goto label_1817a8;
        case 0x1817d4u: goto label_1817d4;
        case 0x1817fcu: goto label_1817fc;
        case 0x181824u: goto label_181824;
        case 0x18182cu: goto label_18182c;
        case 0x18183cu: goto label_18183c;
        case 0x181850u: goto label_181850;
        case 0x181870u: goto label_181870;
        case 0x1818a8u: goto label_1818a8;
        case 0x181900u: goto label_181900;
        case 0x181944u: goto label_181944;
        case 0x181970u: goto label_181970;
        case 0x181984u: goto label_181984;
        case 0x181994u: goto label_181994;
        case 0x1819d8u: goto label_1819d8;
        case 0x1819ecu: goto label_1819ec;
        case 0x1819f8u: goto label_1819f8;
        default: break;
    }

    ctx->pc = 0x1810e0u;

    // 0x1810e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1810e4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1810e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x1810e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1810e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1810ec: 0x24c63c90  addiu       $a2, $a2, 0x3C90
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15504));
    // 0x1810f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1810f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1810f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1810f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1810f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1810fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1810fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181104: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18110c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18110cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x181110: 0xa7a0005e  sh          $zero, 0x5E($sp)
    ctx->pc = 0x181110u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 0));
label_181114:
    // 0x181114: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x181114u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x181118: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18111c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x181120: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x181120u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x181124: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x181124u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x181128: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x181128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x18112c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18112Cu;
    {
        const bool branch_taken_0x18112c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x181130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18112Cu;
            // 0x181130: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18112c) {
            ctx->pc = 0x181114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_181114;
        }
    }
    ctx->pc = 0x181134u;
    // 0x181134: 0xa26004eb  sb          $zero, 0x4EB($s3)
    ctx->pc = 0x181134u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1259), (uint8_t)GPR_U32(ctx, 0));
    // 0x181138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18113c: 0x9263035c  lbu         $v1, 0x35C($s3)
    ctx->pc = 0x18113cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 860)));
    // 0x181140: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x181140u;
    {
        const bool branch_taken_0x181140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181140) {
            ctx->pc = 0x181144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181140u;
            // 0x181144: 0x9263036c  lbu         $v1, 0x36C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181154u;
            goto label_181154;
        }
    }
    ctx->pc = 0x181148u;
    // 0x181148: 0xc0617f0  jal         func_185FC0
    ctx->pc = 0x181148u;
    SET_GPR_U32(ctx, 31, 0x181150u);
    ctx->pc = 0x18114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181148u;
            // 0x18114c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185FC0u;
    if (runtime->hasFunction(0x185FC0u)) {
        auto targetFn = runtime->lookupFunction(0x185FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181150u; }
        if (ctx->pc != 0x181150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185FC0_0x185fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181150u; }
        if (ctx->pc != 0x181150u) { return; }
    }
    ctx->pc = 0x181150u;
label_181150:
    // 0x181150: 0x9263036c  lbu         $v1, 0x36C($s3)
    ctx->pc = 0x181150u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 876)));
label_181154:
    // 0x181154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181158: 0x546201c9  bnel        $v1, $v0, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x181158u;
    {
        const bool branch_taken_0x181158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181158) {
            ctx->pc = 0x18115Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181158u;
            // 0x18115c: 0x9263035c  lbu         $v1, 0x35C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 860)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181880u;
            goto label_181880;
        }
    }
    ctx->pc = 0x181160u;
    // 0x181160: 0x8e630498  lw          $v1, 0x498($s3)
    ctx->pc = 0x181160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1176)));
    // 0x181164: 0x2402f3ff  addiu       $v0, $zero, -0xC01
    ctx->pc = 0x181164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x181168: 0x8e710374  lw          $s1, 0x374($s3)
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 884)));
    // 0x18116c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181170: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181174: 0xc062668  jal         func_1899A0
    ctx->pc = 0x181174u;
    SET_GPR_U32(ctx, 31, 0x18117Cu);
    ctx->pc = 0x181178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181174u;
            // 0x181178: 0xae620498  sw          $v0, 0x498($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1899A0u;
    if (runtime->hasFunction(0x1899A0u)) {
        auto targetFn = runtime->lookupFunction(0x1899A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18117Cu; }
        if (ctx->pc != 0x18117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001899A0_0x1899a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18117Cu; }
        if (ctx->pc != 0x18117Cu) { return; }
    }
    ctx->pc = 0x18117Cu;
label_18117c:
    // 0x18117c: 0x9262036d  lbu         $v0, 0x36D($s3)
    ctx->pc = 0x18117cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
    // 0x181180: 0x26640520  addiu       $a0, $s3, 0x520
    ctx->pc = 0x181180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x181184: 0x927000f7  lbu         $s0, 0xF7($s3)
    ctx->pc = 0x181184u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 247)));
    // 0x181188: 0x2665036c  addiu       $a1, $s3, 0x36C
    ctx->pc = 0x181188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 876));
    // 0x18118c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x181190: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x181190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x181194: 0xc067d60  jal         func_19F580
    ctx->pc = 0x181194u;
    SET_GPR_U32(ctx, 31, 0x18119Cu);
    ctx->pc = 0x181198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181194u;
            // 0x181198: 0xa262036d  sb          $v0, 0x36D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 877), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F580u;
    if (runtime->hasFunction(0x19F580u)) {
        auto targetFn = runtime->lookupFunction(0x19F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18119Cu; }
        if (ctx->pc != 0x18119Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F580_0x19f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18119Cu; }
        if (ctx->pc != 0x18119Cu) { return; }
    }
    ctx->pc = 0x18119Cu;
label_18119c:
    // 0x18119c: 0xae710518  sw          $s1, 0x518($s3)
    ctx->pc = 0x18119cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 17));
    // 0x1811a0: 0x9262036e  lbu         $v0, 0x36E($s3)
    ctx->pc = 0x1811a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
    // 0x1811a4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1811a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1811a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1811A8u;
    {
        const bool branch_taken_0x1811a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1811a8) {
            ctx->pc = 0x1811ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1811A8u;
            // 0x1811ac: 0x9263036d  lbu         $v1, 0x36D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1811BCu;
            goto label_1811bc;
        }
    }
    ctx->pc = 0x1811B0u;
    // 0x1811b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1811b4: 0xa26204eb  sb          $v0, 0x4EB($s3)
    ctx->pc = 0x1811b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1259), (uint8_t)GPR_U32(ctx, 2));
    // 0x1811b8: 0x9263036d  lbu         $v1, 0x36D($s3)
    ctx->pc = 0x1811b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
label_1811bc:
    // 0x1811bc: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x1811bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1811c0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1811C0u;
    {
        const bool branch_taken_0x1811c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1811c0) {
            ctx->pc = 0x1811C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1811C0u;
            // 0x1811c4: 0x9263036e  lbu         $v1, 0x36E($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1811F0u;
            goto label_1811f0;
        }
    }
    ctx->pc = 0x1811C8u;
    // 0x1811c8: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x1811C8u;
    SET_GPR_U32(ctx, 31, 0x1811D0u);
    ctx->pc = 0x1811CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1811C8u;
            // 0x1811cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (runtime->hasFunction(0x17EA30u)) {
        auto targetFn = runtime->lookupFunction(0x17EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811D0u; }
        if (ctx->pc != 0x1811D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EA30_0x17ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811D0u; }
        if (ctx->pc != 0x1811D0u) { return; }
    }
    ctx->pc = 0x1811D0u;
label_1811d0:
    // 0x1811d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1811d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1811d4: 0x3c02ffed  lui         $v0, 0xFFED
    ctx->pc = 0x1811d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65517 << 16));
    // 0x1811d8: 0xa66300f2  sh          $v1, 0xF2($s3)
    ctx->pc = 0x1811d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x1811dc: 0x3442b7ff  ori         $v0, $v0, 0xB7FF
    ctx->pc = 0x1811dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47103);
    // 0x1811e0: 0x8e630270  lw          $v1, 0x270($s3)
    ctx->pc = 0x1811e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x1811e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1811e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1811e8: 0xae620270  sw          $v0, 0x270($s3)
    ctx->pc = 0x1811e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 2));
    // 0x1811ec: 0x9263036e  lbu         $v1, 0x36E($s3)
    ctx->pc = 0x1811ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
label_1811f0:
    // 0x1811f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1811f4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1811f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1811f8: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1811F8u;
    {
        const bool branch_taken_0x1811f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1811f8) {
            ctx->pc = 0x1811FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1811F8u;
            // 0x1811fc: 0x9262008c  lbu         $v0, 0x8C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18125Cu;
            goto label_18125c;
        }
    }
    ctx->pc = 0x181200u;
    // 0x181200: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181204: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x181204u;
    {
        const bool branch_taken_0x181204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181204) {
            ctx->pc = 0x181208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181204u;
            // 0x181208: 0x8e620530  lw          $v0, 0x530($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181250u;
            goto label_181250;
        }
    }
    ctx->pc = 0x18120Cu;
    // 0x18120c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181210: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x181210u;
    {
        const bool branch_taken_0x181210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181210) {
            ctx->pc = 0x181214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181210u;
            // 0x181214: 0x8e620530  lw          $v0, 0x530($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181244u;
            goto label_181244;
        }
    }
    ctx->pc = 0x181218u;
    // 0x181218: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x181218u;
    {
        const bool branch_taken_0x181218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181218) {
            ctx->pc = 0x18121Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181218u;
            // 0x18121c: 0x8e630530  lw          $v1, 0x530($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181228u;
            goto label_181228;
        }
    }
    ctx->pc = 0x181220u;
    // 0x181220: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x181220u;
    {
        const bool branch_taken_0x181220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181220u;
            // 0x181224: 0x9263036d  lbu         $v1, 0x36D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181220) {
            ctx->pc = 0x181268u;
            goto label_181268;
        }
    }
    ctx->pc = 0x181228u;
label_181228:
    // 0x181228: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x181228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x18122c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181230: 0xae620530  sw          $v0, 0x530($s3)
    ctx->pc = 0x181230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
    // 0x181234: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x181234u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x181238: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x181238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x18123c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18123Cu;
    {
        const bool branch_taken_0x18123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18123Cu;
            // 0x181240: 0xa262008c  sb          $v0, 0x8C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18123c) {
            ctx->pc = 0x181264u;
            goto label_181264;
        }
    }
    ctx->pc = 0x181244u;
label_181244:
    // 0x181244: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x181244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x181248: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x181248u;
    {
        const bool branch_taken_0x181248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18124Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181248u;
            // 0x18124c: 0xae620530  sw          $v0, 0x530($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181248) {
            ctx->pc = 0x181264u;
            goto label_181264;
        }
    }
    ctx->pc = 0x181250u;
label_181250:
    // 0x181250: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x181250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x181254: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181254u;
    {
        const bool branch_taken_0x181254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181254u;
            // 0x181258: 0xae620530  sw          $v0, 0x530($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181254) {
            ctx->pc = 0x181264u;
            goto label_181264;
        }
    }
    ctx->pc = 0x18125Cu;
label_18125c:
    // 0x18125c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x18125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x181260: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x181260u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_181264:
    // 0x181264: 0x9263036d  lbu         $v1, 0x36D($s3)
    ctx->pc = 0x181264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
label_181268:
    // 0x181268: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x181268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x18126c: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18126Cu;
    {
        const bool branch_taken_0x18126c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18126c) {
            ctx->pc = 0x181270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18126Cu;
            // 0x181270: 0x92220287  lbu         $v0, 0x287($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 647)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1812D8u;
            goto label_1812d8;
        }
    }
    ctx->pc = 0x181274u;
    // 0x181274: 0x9262036e  lbu         $v0, 0x36E($s3)
    ctx->pc = 0x181274u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
    // 0x181278: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x181278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18127c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18127Cu;
    {
        const bool branch_taken_0x18127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18127c) {
            ctx->pc = 0x181280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18127Cu;
            // 0x181280: 0x9264008c  lbu         $a0, 0x8C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181294u;
            goto label_181294;
        }
    }
    ctx->pc = 0x181284u;
    // 0x181284: 0x8e620530  lw          $v0, 0x530($s3)
    ctx->pc = 0x181284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
    // 0x181288: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x181288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x18128c: 0xae620530  sw          $v0, 0x530($s3)
    ctx->pc = 0x18128cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
    // 0x181290: 0x9264008c  lbu         $a0, 0x8C($s3)
    ctx->pc = 0x181290u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
label_181294:
    // 0x181294: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x181294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x181298: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x181298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x18129c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1812a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1812a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1812a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1812a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1812a8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1812A8u;
    {
        const bool branch_taken_0x1812a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1812a8) {
            ctx->pc = 0x1812ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1812A8u;
            // 0x1812ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1812D0u;
            goto label_1812d0;
        }
    }
    ctx->pc = 0x1812B0u;
    // 0x1812b0: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x1812b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1812b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1812B4u;
    {
        const bool branch_taken_0x1812b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1812b4) {
            ctx->pc = 0x1812B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1812B4u;
            // 0x1812b8: 0x34820080  ori         $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1812C8u;
            goto label_1812c8;
        }
    }
    ctx->pc = 0x1812BCu;
    // 0x1812bc: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x1812bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1812c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1812C0u;
    {
        const bool branch_taken_0x1812c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1812C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1812C0u;
            // 0x1812c4: 0xa262008c  sb          $v0, 0x8C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812c0) {
            ctx->pc = 0x1812CCu;
            goto label_1812cc;
        }
    }
    ctx->pc = 0x1812C8u;
label_1812c8:
    // 0x1812c8: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x1812c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_1812cc:
    // 0x1812cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1812ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1812d0:
    // 0x1812d0: 0xa262057e  sb          $v0, 0x57E($s3)
    ctx->pc = 0x1812d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1406), (uint8_t)GPR_U32(ctx, 2));
    // 0x1812d4: 0x92220287  lbu         $v0, 0x287($s1)
    ctx->pc = 0x1812d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 647)));
label_1812d8:
    // 0x1812d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1812d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1812dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1812DCu;
    {
        const bool branch_taken_0x1812dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1812dc) {
            ctx->pc = 0x1812E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1812DCu;
            // 0x1812e0: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1812F8u;
            goto label_1812f8;
        }
    }
    ctx->pc = 0x1812E4u;
    // 0x1812e4: 0x8e63049c  lw          $v1, 0x49C($s3)
    ctx->pc = 0x1812e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
    // 0x1812e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1812e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1812ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1812ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1812f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1812F0u;
    {
        const bool branch_taken_0x1812f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1812F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1812F0u;
            // 0x1812f4: 0xae62049c  sw          $v0, 0x49C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812f0) {
            ctx->pc = 0x181308u;
            goto label_181308;
        }
    }
    ctx->pc = 0x1812F8u;
label_1812f8:
    // 0x1812f8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x1812f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x1812fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1812fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x181300: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181304: 0xae62049c  sw          $v0, 0x49C($s3)
    ctx->pc = 0x181304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 2));
label_181308:
    // 0x181308: 0x9262036d  lbu         $v0, 0x36D($s3)
    ctx->pc = 0x181308u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
    // 0x18130c: 0x28420070  slti        $v0, $v0, 0x70
    ctx->pc = 0x18130cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x181310: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x181310u;
    {
        const bool branch_taken_0x181310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181310) {
            ctx->pc = 0x181314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181310u;
            // 0x181314: 0x9263036d  lbu         $v1, 0x36D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181364u;
            goto label_181364;
        }
    }
    ctx->pc = 0x181318u;
    // 0x181318: 0xc062804  jal         func_18A010
    ctx->pc = 0x181318u;
    SET_GPR_U32(ctx, 31, 0x181320u);
    ctx->pc = 0x18131Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181318u;
            // 0x18131c: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181320u; }
        if (ctx->pc != 0x181320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181320u; }
        if (ctx->pc != 0x181320u) { return; }
    }
    ctx->pc = 0x181320u;
label_181320:
    // 0x181320: 0x9263035c  lbu         $v1, 0x35C($s3)
    ctx->pc = 0x181320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 860)));
    // 0x181324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181328: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x181328u;
    {
        const bool branch_taken_0x181328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181328) {
            ctx->pc = 0x181360u;
            goto label_181360;
        }
    }
    ctx->pc = 0x181330u;
    // 0x181330: 0x8e630360  lw          $v1, 0x360($s3)
    ctx->pc = 0x181330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 864)));
    // 0x181334: 0x8e620370  lw          $v0, 0x370($s3)
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 880)));
    // 0x181338: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x181338u;
    {
        const bool branch_taken_0x181338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181338) {
            ctx->pc = 0x181360u;
            goto label_181360;
        }
    }
    ctx->pc = 0x181340u;
    // 0x181340: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x181340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x181344: 0x26640520  addiu       $a0, $s3, 0x520
    ctx->pc = 0x181344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x181348: 0xa262036d  sb          $v0, 0x36D($s3)
    ctx->pc = 0x181348u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 877), (uint8_t)GPR_U32(ctx, 2));
    // 0x18134c: 0x2665036c  addiu       $a1, $s3, 0x36C
    ctx->pc = 0x18134cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 876));
    // 0x181350: 0xc067d60  jal         func_19F580
    ctx->pc = 0x181350u;
    SET_GPR_U32(ctx, 31, 0x181358u);
    ctx->pc = 0x181354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181350u;
            // 0x181354: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F580u;
    if (runtime->hasFunction(0x19F580u)) {
        auto targetFn = runtime->lookupFunction(0x19F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181358u; }
        if (ctx->pc != 0x181358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F580_0x19f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181358u; }
        if (ctx->pc != 0x181358u) { return; }
    }
    ctx->pc = 0x181358u;
label_181358:
    // 0x181358: 0xc05fa14  jal         func_17E850
    ctx->pc = 0x181358u;
    SET_GPR_U32(ctx, 31, 0x181360u);
    ctx->pc = 0x17E850u;
    if (runtime->hasFunction(0x17E850u)) {
        auto targetFn = runtime->lookupFunction(0x17E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181360u; }
        if (ctx->pc != 0x181360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E850_0x17e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181360u; }
        if (ctx->pc != 0x181360u) { return; }
    }
    ctx->pc = 0x181360u;
label_181360:
    // 0x181360: 0x9263036d  lbu         $v1, 0x36D($s3)
    ctx->pc = 0x181360u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
label_181364:
    // 0x181364: 0x28620070  slti        $v0, $v1, 0x70
    ctx->pc = 0x181364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x181368: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x181368u;
    {
        const bool branch_taken_0x181368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181368) {
            ctx->pc = 0x18136Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181368u;
            // 0x18136c: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181468u;
            goto label_181468;
        }
    }
    ctx->pc = 0x181370u;
    // 0x181370: 0xae71051c  sw          $s1, 0x51C($s3)
    ctx->pc = 0x181370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1308), GPR_U32(ctx, 17));
    // 0x181374: 0x92650378  lbu         $a1, 0x378($s3)
    ctx->pc = 0x181374u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 888)));
    // 0x181378: 0xc05ff74  jal         func_17FDD0
    ctx->pc = 0x181378u;
    SET_GPR_U32(ctx, 31, 0x181380u);
    ctx->pc = 0x18137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181378u;
            // 0x18137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FDD0u;
    if (runtime->hasFunction(0x17FDD0u)) {
        auto targetFn = runtime->lookupFunction(0x17FDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181380u; }
        if (ctx->pc != 0x181380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FDD0_0x17fdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181380u; }
        if (ctx->pc != 0x181380u) { return; }
    }
    ctx->pc = 0x181380u;
label_181380:
    // 0x181380: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x181380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x181384: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181388: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x181388u;
    {
        const bool branch_taken_0x181388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181388) {
            ctx->pc = 0x18138Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181388u;
            // 0x18138c: 0x8e620530  lw          $v0, 0x530($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18143Cu;
            goto label_18143c;
        }
    }
    ctx->pc = 0x181390u;
    // 0x181390: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181394: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x181394u;
    {
        const bool branch_taken_0x181394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181394) {
            ctx->pc = 0x181398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181394u;
            // 0x181398: 0x8e620530  lw          $v0, 0x530($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181430u;
            goto label_181430;
        }
    }
    ctx->pc = 0x18139Cu;
    // 0x18139c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1813a0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1813A0u;
    {
        const bool branch_taken_0x1813a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1813a0) {
            ctx->pc = 0x18142Cu;
            goto label_18142c;
        }
    }
    ctx->pc = 0x1813A8u;
    // 0x1813a8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1813A8u;
    {
        const bool branch_taken_0x1813a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1813a8) {
            ctx->pc = 0x1813ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1813A8u;
            // 0x1813ac: 0x9262036d  lbu         $v0, 0x36D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 877)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1813B8u;
            goto label_1813b8;
        }
    }
    ctx->pc = 0x1813B0u;
    // 0x1813b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1813B0u;
    {
        const bool branch_taken_0x1813b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813B0u;
            // 0x1813b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813b0) {
            ctx->pc = 0x181448u;
            goto label_181448;
        }
    }
    ctx->pc = 0x1813B8u;
label_1813b8:
    // 0x1813b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1813b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813bc: 0x8e64051c  lw          $a0, 0x51C($s3)
    ctx->pc = 0x1813bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1308)));
    // 0x1813c0: 0x27a7005e  addiu       $a3, $sp, 0x5E
    ctx->pc = 0x1813c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    // 0x1813c4: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x1813c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x1813c8: 0xc05ffb4  jal         func_17FED0
    ctx->pc = 0x1813C8u;
    SET_GPR_U32(ctx, 31, 0x1813D0u);
    ctx->pc = 0x1813CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1813C8u;
            // 0x1813cc: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FED0u;
    if (runtime->hasFunction(0x17FED0u)) {
        auto targetFn = runtime->lookupFunction(0x17FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813D0u; }
        if (ctx->pc != 0x1813D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FED0_0x17fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1813D0u; }
        if (ctx->pc != 0x1813D0u) { return; }
    }
    ctx->pc = 0x1813D0u;
label_1813d0:
    // 0x1813d0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1813d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1813d4: 0x97a2005e  lhu         $v0, 0x5E($sp)
    ctx->pc = 0x1813d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x1813d8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1813d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1813dc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1813DCu;
    {
        const bool branch_taken_0x1813dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1813E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813DCu;
            // 0x1813e0: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813dc) {
            ctx->pc = 0x181424u;
            goto label_181424;
        }
    }
    ctx->pc = 0x1813E4u;
    // 0x1813e4: 0x9263008c  lbu         $v1, 0x8C($s3)
    ctx->pc = 0x1813e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1813e8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1813e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1813ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1813ECu;
    {
        const bool branch_taken_0x1813ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1813ec) {
            ctx->pc = 0x1813F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1813ECu;
            // 0x1813f0: 0x9262036e  lbu         $v0, 0x36E($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181400u;
            goto label_181400;
        }
    }
    ctx->pc = 0x1813F4u;
    // 0x1813f4: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x1813f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1813f8: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x1813f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x1813fc: 0x9262036e  lbu         $v0, 0x36E($s3)
    ctx->pc = 0x1813fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
label_181400:
    // 0x181400: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x181400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x181404: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x181404u;
    {
        const bool branch_taken_0x181404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181404) {
            ctx->pc = 0x181408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181404u;
            // 0x181408: 0x9262008c  lbu         $v0, 0x8C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18141Cu;
            goto label_18141c;
        }
    }
    ctx->pc = 0x18140Cu;
    // 0x18140c: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x18140cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x181410: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x181410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x181414: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181414u;
    {
        const bool branch_taken_0x181414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181414u;
            // 0x181418: 0xa262008c  sb          $v0, 0x8C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181414) {
            ctx->pc = 0x181424u;
            goto label_181424;
        }
    }
    ctx->pc = 0x18141Cu;
label_18141c:
    // 0x18141c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x181420: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x181420u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_181424:
    // 0x181424: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181424u;
    {
        const bool branch_taken_0x181424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181424u;
            // 0x181428: 0xa672050c  sh          $s2, 0x50C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1292), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181424) {
            ctx->pc = 0x181444u;
            goto label_181444;
        }
    }
    ctx->pc = 0x18142Cu;
label_18142c:
    // 0x18142c: 0x8e620530  lw          $v0, 0x530($s3)
    ctx->pc = 0x18142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
label_181430:
    // 0x181430: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x181430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x181434: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181434u;
    {
        const bool branch_taken_0x181434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181434u;
            // 0x181438: 0xae620530  sw          $v0, 0x530($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181434) {
            ctx->pc = 0x181444u;
            goto label_181444;
        }
    }
    ctx->pc = 0x18143Cu;
label_18143c:
    // 0x18143c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x18143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x181440: 0xae620530  sw          $v0, 0x530($s3)
    ctx->pc = 0x181440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
label_181444:
    // 0x181444: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_181448:
    // 0x181448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18144c: 0xc05fee8  jal         func_17FBA0
    ctx->pc = 0x18144Cu;
    SET_GPR_U32(ctx, 31, 0x181454u);
    ctx->pc = 0x181450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18144Cu;
            // 0x181450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FBA0u;
    if (runtime->hasFunction(0x17FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x17FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181454u; }
        if (ctx->pc != 0x181454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FBA0_0x17fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181454u; }
        if (ctx->pc != 0x181454u) { return; }
    }
    ctx->pc = 0x181454u;
label_181454:
    // 0x181454: 0xa262057d  sb          $v0, 0x57D($s3)
    ctx->pc = 0x181454u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 2));
    // 0x181458: 0x8662039a  lh          $v0, 0x39A($s3)
    ctx->pc = 0x181458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 922)));
    // 0x18145c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x181460: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x181460u;
    {
        const bool branch_taken_0x181460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181460u;
            // 0x181464: 0xa662039a  sh          $v0, 0x39A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 922), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181460) {
            ctx->pc = 0x1814B0u;
            goto label_1814b0;
        }
    }
    ctx->pc = 0x181468u;
label_181468:
    // 0x181468: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181468u;
    {
        const bool branch_taken_0x181468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181468) {
            ctx->pc = 0x18146Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181468u;
            // 0x18146c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181488u;
            goto label_181488;
        }
    }
    ctx->pc = 0x181470u;
    // 0x181470: 0x8e620530  lw          $v0, 0x530($s3)
    ctx->pc = 0x181470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
    // 0x181474: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181478: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x181478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x18147c: 0xae620530  sw          $v0, 0x530($s3)
    ctx->pc = 0x18147cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1328), GPR_U32(ctx, 2));
    // 0x181480: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x181480u;
    {
        const bool branch_taken_0x181480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181480u;
            // 0x181484: 0xa260057d  sb          $zero, 0x57D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181480) {
            ctx->pc = 0x1814B0u;
            goto label_1814b0;
        }
    }
    ctx->pc = 0x181488u;
label_181488:
    // 0x181488: 0xc060190  jal         func_180640
    ctx->pc = 0x181488u;
    SET_GPR_U32(ctx, 31, 0x181490u);
    ctx->pc = 0x18148Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181488u;
            // 0x18148c: 0x2665036c  addiu       $a1, $s3, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 876));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180640u;
    if (runtime->hasFunction(0x180640u)) {
        auto targetFn = runtime->lookupFunction(0x180640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181490u; }
        if (ctx->pc != 0x181490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180640_0x180640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181490u; }
        if (ctx->pc != 0x181490u) { return; }
    }
    ctx->pc = 0x181490u;
label_181490:
    // 0x181490: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x181490u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181494: 0xa662050c  sh          $v0, 0x50C($s3)
    ctx->pc = 0x181494u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1292), (uint16_t)GPR_U32(ctx, 2));
    // 0x181498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18149c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18149cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1814a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1814a4: 0xc05fee8  jal         func_17FBA0
    ctx->pc = 0x1814A4u;
    SET_GPR_U32(ctx, 31, 0x1814ACu);
    ctx->pc = 0x1814A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814A4u;
            // 0x1814a8: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FBA0u;
    if (runtime->hasFunction(0x17FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x17FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814ACu; }
        if (ctx->pc != 0x1814ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FBA0_0x17fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814ACu; }
        if (ctx->pc != 0x1814ACu) { return; }
    }
    ctx->pc = 0x1814ACu;
label_1814ac:
    // 0x1814ac: 0xa262057d  sb          $v0, 0x57D($s3)
    ctx->pc = 0x1814acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 2));
label_1814b0:
    // 0x1814b0: 0x8e630530  lw          $v1, 0x530($s3)
    ctx->pc = 0x1814b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
    // 0x1814b4: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1814b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1814b8: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1814B8u;
    {
        const bool branch_taken_0x1814b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1814b8) {
            ctx->pc = 0x1814BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1814B8u;
            // 0x1814bc: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x181594u;
            goto label_181594;
        }
    }
    ctx->pc = 0x1814C0u;
    // 0x1814c0: 0xc062d3c  jal         func_18B4F0
    ctx->pc = 0x1814C0u;
    SET_GPR_U32(ctx, 31, 0x1814C8u);
    ctx->pc = 0x1814C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814C0u;
            // 0x1814c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B4F0u;
    if (runtime->hasFunction(0x18B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814C8u; }
        if (ctx->pc != 0x1814C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B4F0_0x18b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814C8u; }
        if (ctx->pc != 0x1814C8u) { return; }
    }
    ctx->pc = 0x1814C8u;
label_1814c8:
    // 0x1814c8: 0xc062d5c  jal         func_18B570
    ctx->pc = 0x1814C8u;
    SET_GPR_U32(ctx, 31, 0x1814D0u);
    ctx->pc = 0x1814CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1814C8u;
            // 0x1814cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B570u;
    if (runtime->hasFunction(0x18B570u)) {
        auto targetFn = runtime->lookupFunction(0x18B570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814D0u; }
        if (ctx->pc != 0x1814D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B570_0x18b570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1814D0u; }
        if (ctx->pc != 0x1814D0u) { return; }
    }
    ctx->pc = 0x1814D0u;
label_1814d0:
    // 0x1814d0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1814D0u;
    {
        const bool branch_taken_0x1814d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1814d0) {
            ctx->pc = 0x1814D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1814D0u;
            // 0x1814d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1814FCu;
            goto label_1814fc;
        }
    }
    ctx->pc = 0x1814D8u;
    // 0x1814d8: 0x9263008c  lbu         $v1, 0x8C($s3)
    ctx->pc = 0x1814d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1814dc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1814dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1814e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1814E0u;
    {
        const bool branch_taken_0x1814e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1814e0) {
            ctx->pc = 0x1814E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1814E0u;
            // 0x1814e4: 0x34620080  ori         $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1814F4u;
            goto label_1814f4;
        }
    }
    ctx->pc = 0x1814E8u;
    // 0x1814e8: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x1814e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1814ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1814ECu;
    {
        const bool branch_taken_0x1814ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1814ECu;
            // 0x1814f0: 0xa262008c  sb          $v0, 0x8C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814ec) {
            ctx->pc = 0x1814F8u;
            goto label_1814f8;
        }
    }
    ctx->pc = 0x1814F4u;
label_1814f4:
    // 0x1814f4: 0xa262008c  sb          $v0, 0x8C($s3)
    ctx->pc = 0x1814f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
label_1814f8:
    // 0x1814f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1814f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1814fc:
    // 0x1814fc: 0xc06004c  jal         func_180130
    ctx->pc = 0x1814FCu;
    SET_GPR_U32(ctx, 31, 0x181504u);
    ctx->pc = 0x180130u;
    if (runtime->hasFunction(0x180130u)) {
        auto targetFn = runtime->lookupFunction(0x180130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181504u; }
        if (ctx->pc != 0x181504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180130_0x180130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181504u; }
        if (ctx->pc != 0x181504u) { return; }
    }
    ctx->pc = 0x181504u;
label_181504:
    // 0x181504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181508: 0xc0631e0  jal         func_18C780
    ctx->pc = 0x181508u;
    SET_GPR_U32(ctx, 31, 0x181510u);
    ctx->pc = 0x18150Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181508u;
            // 0x18150c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C780u;
    if (runtime->hasFunction(0x18C780u)) {
        auto targetFn = runtime->lookupFunction(0x18C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181510u; }
        if (ctx->pc != 0x181510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C780_0x18c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181510u; }
        if (ctx->pc != 0x181510u) { return; }
    }
    ctx->pc = 0x181510u;
label_181510:
    // 0x181510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181518: 0xa262057e  sb          $v0, 0x57E($s3)
    ctx->pc = 0x181518u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1406), (uint8_t)GPR_U32(ctx, 2));
    // 0x18151c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18151cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181520: 0xc05fee8  jal         func_17FBA0
    ctx->pc = 0x181520u;
    SET_GPR_U32(ctx, 31, 0x181528u);
    ctx->pc = 0x181524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181520u;
            // 0x181524: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FBA0u;
    if (runtime->hasFunction(0x17FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x17FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181528u; }
        if (ctx->pc != 0x181528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FBA0_0x17fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181528u; }
        if (ctx->pc != 0x181528u) { return; }
    }
    ctx->pc = 0x181528u;
label_181528:
    // 0x181528: 0xa262057d  sb          $v0, 0x57D($s3)
    ctx->pc = 0x181528u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 2));
    // 0x18152c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181530: 0x9265057d  lbu         $a1, 0x57D($s3)
    ctx->pc = 0x181530u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x181534: 0xc060310  jal         func_180C40
    ctx->pc = 0x181534u;
    SET_GPR_U32(ctx, 31, 0x18153Cu);
    ctx->pc = 0x181538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181534u;
            // 0x181538: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C40u;
    if (runtime->hasFunction(0x180C40u)) {
        auto targetFn = runtime->lookupFunction(0x180C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18153Cu; }
        if (ctx->pc != 0x18153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C40_0x180c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18153Cu; }
        if (ctx->pc != 0x18153Cu) { return; }
    }
    ctx->pc = 0x18153Cu;
label_18153c:
    // 0x18153c: 0xc06005c  jal         func_180170
    ctx->pc = 0x18153Cu;
    SET_GPR_U32(ctx, 31, 0x181544u);
    ctx->pc = 0x181540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18153Cu;
            // 0x181540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181544u; }
        if (ctx->pc != 0x181544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181544u; }
        if (ctx->pc != 0x181544u) { return; }
    }
    ctx->pc = 0x181544u;
label_181544:
    // 0x181544: 0xa6600534  sh          $zero, 0x534($s3)
    ctx->pc = 0x181544u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1332), (uint16_t)GPR_U32(ctx, 0));
    // 0x181548: 0x96650534  lhu         $a1, 0x534($s3)
    ctx->pc = 0x181548u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1332)));
    // 0x18154c: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x18154Cu;
    SET_GPR_U32(ctx, 31, 0x181554u);
    ctx->pc = 0x181550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18154Cu;
            // 0x181550: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    if (runtime->hasFunction(0x17F860u)) {
        auto targetFn = runtime->lookupFunction(0x17F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181554u; }
        if (ctx->pc != 0x181554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F860_0x17f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181554u; }
        if (ctx->pc != 0x181554u) { return; }
    }
    ctx->pc = 0x181554u;
label_181554:
    // 0x181554: 0x9262036e  lbu         $v0, 0x36E($s3)
    ctx->pc = 0x181554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
    // 0x181558: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x181558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18155c: 0x54400127  bnel        $v0, $zero, . + 4 + (0x127 << 2)
    ctx->pc = 0x18155Cu;
    {
        const bool branch_taken_0x18155c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18155c) {
            ctx->pc = 0x181560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18155Cu;
            // 0x181560: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1819FCu;
            goto label_1819fc;
        }
    }
    ctx->pc = 0x181564u;
    // 0x181564: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x181564u;
    SET_GPR_U32(ctx, 31, 0x18156Cu);
    ctx->pc = 0x181568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181564u;
            // 0x181568: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18156Cu; }
        if (ctx->pc != 0x18156Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18156Cu; }
        if (ctx->pc != 0x18156Cu) { return; }
    }
    ctx->pc = 0x18156Cu;
label_18156c:
    // 0x18156c: 0x8666037c  lh          $a2, 0x37C($s3)
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 892)));
    // 0x181570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x181570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181574: 0x8667037e  lh          $a3, 0x37E($s3)
    ctx->pc = 0x181574u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 894)));
    // 0x181578: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x18157c: 0x92680381  lbu         $t0, 0x381($s3)
    ctx->pc = 0x18157cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 897)));
    // 0x181580: 0xc05721c  jal         func_15C870
    ctx->pc = 0x181580u;
    SET_GPR_U32(ctx, 31, 0x181588u);
    ctx->pc = 0x181584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181580u;
            // 0x181584: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181588u; }
        if (ctx->pc != 0x181588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181588u; }
        if (ctx->pc != 0x181588u) { return; }
    }
    ctx->pc = 0x181588u;
label_181588:
    // 0x181588: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x181588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18158c: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x18158Cu;
    {
        const bool branch_taken_0x18158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18158c) {
            ctx->pc = 0x1819FCu;
            goto label_1819fc;
        }
    }
    ctx->pc = 0x181594u;
label_181594:
    // 0x181594: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x181594u;
    {
        const bool branch_taken_0x181594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181594) {
            ctx->pc = 0x181598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181594u;
            // 0x181598: 0x121c3c  dsll32      $v1, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18163Cu;
            goto label_18163c;
        }
    }
    ctx->pc = 0x18159Cu;
    // 0x18159c: 0x9262008c  lbu         $v0, 0x8C($s3)
    ctx->pc = 0x18159cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1815a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1815a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815a4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1815a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1815a8: 0xc06004c  jal         func_180130
    ctx->pc = 0x1815A8u;
    SET_GPR_U32(ctx, 31, 0x1815B0u);
    ctx->pc = 0x1815ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815A8u;
            // 0x1815ac: 0xa262008c  sb          $v0, 0x8C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180130u;
    if (runtime->hasFunction(0x180130u)) {
        auto targetFn = runtime->lookupFunction(0x180130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815B0u; }
        if (ctx->pc != 0x1815B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180130_0x180130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815B0u; }
        if (ctx->pc != 0x1815B0u) { return; }
    }
    ctx->pc = 0x1815B0u;
label_1815b0:
    // 0x1815b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1815b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815b4: 0xc0631e0  jal         func_18C780
    ctx->pc = 0x1815B4u;
    SET_GPR_U32(ctx, 31, 0x1815BCu);
    ctx->pc = 0x1815B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815B4u;
            // 0x1815b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C780u;
    if (runtime->hasFunction(0x18C780u)) {
        auto targetFn = runtime->lookupFunction(0x18C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815BCu; }
        if (ctx->pc != 0x1815BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C780_0x18c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815BCu; }
        if (ctx->pc != 0x1815BCu) { return; }
    }
    ctx->pc = 0x1815BCu;
label_1815bc:
    // 0x1815bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1815bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1815c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1815c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815c8: 0xc05fee8  jal         func_17FBA0
    ctx->pc = 0x1815C8u;
    SET_GPR_U32(ctx, 31, 0x1815D0u);
    ctx->pc = 0x1815CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815C8u;
            // 0x1815cc: 0xa260057e  sb          $zero, 0x57E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1406), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FBA0u;
    if (runtime->hasFunction(0x17FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x17FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815D0u; }
        if (ctx->pc != 0x1815D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FBA0_0x17fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815D0u; }
        if (ctx->pc != 0x1815D0u) { return; }
    }
    ctx->pc = 0x1815D0u;
label_1815d0:
    // 0x1815d0: 0xa262057d  sb          $v0, 0x57D($s3)
    ctx->pc = 0x1815d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 2));
    // 0x1815d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1815d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815d8: 0x9265057d  lbu         $a1, 0x57D($s3)
    ctx->pc = 0x1815d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x1815dc: 0xc060310  jal         func_180C40
    ctx->pc = 0x1815DCu;
    SET_GPR_U32(ctx, 31, 0x1815E4u);
    ctx->pc = 0x1815E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815DCu;
            // 0x1815e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C40u;
    if (runtime->hasFunction(0x180C40u)) {
        auto targetFn = runtime->lookupFunction(0x180C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815E4u; }
        if (ctx->pc != 0x1815E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C40_0x180c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815E4u; }
        if (ctx->pc != 0x1815E4u) { return; }
    }
    ctx->pc = 0x1815E4u;
label_1815e4:
    // 0x1815e4: 0xc06005c  jal         func_180170
    ctx->pc = 0x1815E4u;
    SET_GPR_U32(ctx, 31, 0x1815ECu);
    ctx->pc = 0x1815E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1815E4u;
            // 0x1815e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815ECu; }
        if (ctx->pc != 0x1815ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1815ECu; }
        if (ctx->pc != 0x1815ECu) { return; }
    }
    ctx->pc = 0x1815ECu;
label_1815ec:
    // 0x1815ec: 0x9262036e  lbu         $v0, 0x36E($s3)
    ctx->pc = 0x1815ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
    // 0x1815f0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1815f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1815f4: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1815F4u;
    {
        const bool branch_taken_0x1815f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1815f4) {
            ctx->pc = 0x18187Cu;
            goto label_18187c;
        }
    }
    ctx->pc = 0x1815FCu;
    // 0x1815fc: 0x8e2205dc  lw          $v0, 0x5DC($s1)
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1500)));
    // 0x181600: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x181600u;
    {
        const bool branch_taken_0x181600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181600) {
            ctx->pc = 0x181604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181600u;
            // 0x181604: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181610u;
            goto label_181610;
        }
    }
    ctx->pc = 0x181608u;
    // 0x181608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x181608u;
    {
        const bool branch_taken_0x181608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181608u;
            // 0x18160c: 0x8666037c  lh          $a2, 0x37C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181608) {
            ctx->pc = 0x18161Cu;
            goto label_18161c;
        }
    }
    ctx->pc = 0x181610u;
label_181610:
    // 0x181610: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x181610u;
    SET_GPR_U32(ctx, 31, 0x181618u);
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181618u; }
        if (ctx->pc != 0x181618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181618u; }
        if (ctx->pc != 0x181618u) { return; }
    }
    ctx->pc = 0x181618u;
label_181618:
    // 0x181618: 0x8666037c  lh          $a2, 0x37C($s3)
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 892)));
label_18161c:
    // 0x18161c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181620: 0x8667037e  lh          $a3, 0x37E($s3)
    ctx->pc = 0x181620u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 894)));
    // 0x181624: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x181624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x181628: 0x92680381  lbu         $t0, 0x381($s3)
    ctx->pc = 0x181628u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 897)));
    // 0x18162c: 0xc05721c  jal         func_15C870
    ctx->pc = 0x18162Cu;
    SET_GPR_U32(ctx, 31, 0x181634u);
    ctx->pc = 0x181630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18162Cu;
            // 0x181630: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181634u; }
        if (ctx->pc != 0x181634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181634u; }
        if (ctx->pc != 0x181634u) { return; }
    }
    ctx->pc = 0x181634u;
label_181634:
    // 0x181634: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x181634u;
    {
        const bool branch_taken_0x181634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181634) {
            ctx->pc = 0x18187Cu;
            goto label_18187c;
        }
    }
    ctx->pc = 0x18163Cu;
label_18163c:
    // 0x18163c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181640: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181640u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181644: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x181644u;
    {
        const bool branch_taken_0x181644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181644) {
            ctx->pc = 0x181648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181644u;
            // 0x181648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18169Cu;
            goto label_18169c;
        }
    }
    ctx->pc = 0x18164Cu;
    // 0x18164c: 0xc06004c  jal         func_180130
    ctx->pc = 0x18164Cu;
    SET_GPR_U32(ctx, 31, 0x181654u);
    ctx->pc = 0x181650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18164Cu;
            // 0x181650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180130u;
    if (runtime->hasFunction(0x180130u)) {
        auto targetFn = runtime->lookupFunction(0x180130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181654u; }
        if (ctx->pc != 0x181654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180130_0x180130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181654u; }
        if (ctx->pc != 0x181654u) { return; }
    }
    ctx->pc = 0x181654u;
label_181654:
    // 0x181654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181658: 0xc060380  jal         func_180E00
    ctx->pc = 0x181658u;
    SET_GPR_U32(ctx, 31, 0x181660u);
    ctx->pc = 0x18165Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181658u;
            // 0x18165c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E00u;
    if (runtime->hasFunction(0x180E00u)) {
        auto targetFn = runtime->lookupFunction(0x180E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181660u; }
        if (ctx->pc != 0x181660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180E00_0x180e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181660u; }
        if (ctx->pc != 0x181660u) { return; }
    }
    ctx->pc = 0x181660u;
label_181660:
    // 0x181660: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x181660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x181664: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x181668: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x181668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x18166c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x18166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x181670: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x181670u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x181674: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x181674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x181678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18167c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x181680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x181684: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x181684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x181688: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x181688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18168c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x18168cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181694: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x181694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x181698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18169c:
    // 0x18169c: 0xc068394  jal         func_1A0E50
    ctx->pc = 0x18169Cu;
    SET_GPR_U32(ctx, 31, 0x1816A4u);
    ctx->pc = 0x1816A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18169Cu;
            // 0x1816a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E50u;
    if (runtime->hasFunction(0x1A0E50u)) {
        auto targetFn = runtime->lookupFunction(0x1A0E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816A4u; }
        if (ctx->pc != 0x1816A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0E50_0x1a0e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816A4u; }
        if (ctx->pc != 0x1816A4u) { return; }
    }
    ctx->pc = 0x1816A4u;
label_1816a4:
    // 0x1816a4: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x1816a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x1816a8: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x1816A8u;
    SET_GPR_U32(ctx, 31, 0x1816B0u);
    ctx->pc = 0x1816ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816A8u;
            // 0x1816ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (runtime->hasFunction(0x12FE90u)) {
        auto targetFn = runtime->lookupFunction(0x12FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816B0u; }
        if (ctx->pc != 0x1816B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FE90_0x12fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816B0u; }
        if (ctx->pc != 0x1816B0u) { return; }
    }
    ctx->pc = 0x1816B0u;
label_1816b0:
    // 0x1816b0: 0xa260028a  sb          $zero, 0x28A($s3)
    ctx->pc = 0x1816b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 650), (uint8_t)GPR_U32(ctx, 0));
    // 0x1816b4: 0x8e620530  lw          $v0, 0x530($s3)
    ctx->pc = 0x1816b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1328)));
    // 0x1816b8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1816b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1816bc: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1816BCu;
    {
        const bool branch_taken_0x1816bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1816bc) {
            ctx->pc = 0x1816C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1816BCu;
            // 0x1816c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181748u;
            goto label_181748;
        }
    }
    ctx->pc = 0x1816C4u;
    // 0x1816c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1816c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816c8: 0xc0631e0  jal         func_18C780
    ctx->pc = 0x1816C8u;
    SET_GPR_U32(ctx, 31, 0x1816D0u);
    ctx->pc = 0x1816CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816C8u;
            // 0x1816cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C780u;
    if (runtime->hasFunction(0x18C780u)) {
        auto targetFn = runtime->lookupFunction(0x18C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816D0u; }
        if (ctx->pc != 0x1816D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C780_0x18c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816D0u; }
        if (ctx->pc != 0x1816D0u) { return; }
    }
    ctx->pc = 0x1816D0u;
label_1816d0:
    // 0x1816d0: 0xa260057d  sb          $zero, 0x57D($s3)
    ctx->pc = 0x1816d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 0));
    // 0x1816d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1816d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816d8: 0x9265057d  lbu         $a1, 0x57D($s3)
    ctx->pc = 0x1816d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x1816dc: 0xc060310  jal         func_180C40
    ctx->pc = 0x1816DCu;
    SET_GPR_U32(ctx, 31, 0x1816E4u);
    ctx->pc = 0x1816E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816DCu;
            // 0x1816e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C40u;
    if (runtime->hasFunction(0x180C40u)) {
        auto targetFn = runtime->lookupFunction(0x180C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816E4u; }
        if (ctx->pc != 0x1816E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C40_0x180c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816E4u; }
        if (ctx->pc != 0x1816E4u) { return; }
    }
    ctx->pc = 0x1816E4u;
label_1816e4:
    // 0x1816e4: 0xc06005c  jal         func_180170
    ctx->pc = 0x1816E4u;
    SET_GPR_U32(ctx, 31, 0x1816ECu);
    ctx->pc = 0x1816E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1816E4u;
            // 0x1816e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816ECu; }
        if (ctx->pc != 0x1816ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1816ECu; }
        if (ctx->pc != 0x1816ECu) { return; }
    }
    ctx->pc = 0x1816ECu;
label_1816ec:
    // 0x1816ec: 0x9222027f  lbu         $v0, 0x27F($s1)
    ctx->pc = 0x1816ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 639)));
    // 0x1816f0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1816f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1816f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1816f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1816fc: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1816FCu;
    {
        const bool branch_taken_0x1816fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1816fc) {
            ctx->pc = 0x181700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1816FCu;
            // 0x181700: 0x2664028c  addiu       $a0, $s3, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 652));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181734u;
            goto label_181734;
        }
    }
    ctx->pc = 0x181704u;
    // 0x181704: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181708: 0x2664028c  addiu       $a0, $s3, 0x28C
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 652));
    // 0x18170c: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x18170Cu;
    SET_GPR_U32(ctx, 31, 0x181714u);
    ctx->pc = 0x181710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18170Cu;
            // 0x181710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181714u; }
        if (ctx->pc != 0x181714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181714u; }
        if (ctx->pc != 0x181714u) { return; }
    }
    ctx->pc = 0x181714u;
label_181714:
    // 0x181714: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x181714u;
    SET_GPR_U32(ctx, 31, 0x18171Cu);
    ctx->pc = 0x181718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181714u;
            // 0x181718: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18171Cu; }
        if (ctx->pc != 0x18171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18171Cu; }
        if (ctx->pc != 0x18171Cu) { return; }
    }
    ctx->pc = 0x18171Cu;
label_18171c:
    // 0x18171c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181720: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181724: 0xc05721c  jal         func_15C870
    ctx->pc = 0x181724u;
    SET_GPR_U32(ctx, 31, 0x18172Cu);
    ctx->pc = 0x181728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181724u;
            // 0x181728: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18172Cu; }
        if (ctx->pc != 0x18172Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18172Cu; }
        if (ctx->pc != 0x18172Cu) { return; }
    }
    ctx->pc = 0x18172Cu;
label_18172c:
    // 0x18172c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x18172Cu;
    {
        const bool branch_taken_0x18172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18172Cu;
            // 0x181730: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18172c) {
            ctx->pc = 0x181874u;
            goto label_181874;
        }
    }
    ctx->pc = 0x181734u;
label_181734:
    // 0x181734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181738: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x181738u;
    SET_GPR_U32(ctx, 31, 0x181740u);
    ctx->pc = 0x18173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181738u;
            // 0x18173c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181740u; }
        if (ctx->pc != 0x181740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181740u; }
        if (ctx->pc != 0x181740u) { return; }
    }
    ctx->pc = 0x181740u;
label_181740:
    // 0x181740: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x181740u;
    {
        const bool branch_taken_0x181740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181740) {
            ctx->pc = 0x181870u;
            goto label_181870;
        }
    }
    ctx->pc = 0x181748u;
label_181748:
    // 0x181748: 0xc0631e0  jal         func_18C780
    ctx->pc = 0x181748u;
    SET_GPR_U32(ctx, 31, 0x181750u);
    ctx->pc = 0x18174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181748u;
            // 0x18174c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C780u;
    if (runtime->hasFunction(0x18C780u)) {
        auto targetFn = runtime->lookupFunction(0x18C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181750u; }
        if (ctx->pc != 0x181750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C780_0x18c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181750u; }
        if (ctx->pc != 0x181750u) { return; }
    }
    ctx->pc = 0x181750u;
label_181750:
    // 0x181750: 0x9265057d  lbu         $a1, 0x57D($s3)
    ctx->pc = 0x181750u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x181754: 0x93a6005e  lbu         $a2, 0x5E($sp)
    ctx->pc = 0x181754u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x181758: 0xc060310  jal         func_180C40
    ctx->pc = 0x181758u;
    SET_GPR_U32(ctx, 31, 0x181760u);
    ctx->pc = 0x18175Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181758u;
            // 0x18175c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C40u;
    if (runtime->hasFunction(0x180C40u)) {
        auto targetFn = runtime->lookupFunction(0x180C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181760u; }
        if (ctx->pc != 0x181760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C40_0x180c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181760u; }
        if (ctx->pc != 0x181760u) { return; }
    }
    ctx->pc = 0x181760u;
label_181760:
    // 0x181760: 0xc06005c  jal         func_180170
    ctx->pc = 0x181760u;
    SET_GPR_U32(ctx, 31, 0x181768u);
    ctx->pc = 0x181764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181760u;
            // 0x181764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181768u; }
        if (ctx->pc != 0x181768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181768u; }
        if (ctx->pc != 0x181768u) { return; }
    }
    ctx->pc = 0x181768u;
label_181768:
    // 0x181768: 0x9223027f  lbu         $v1, 0x27F($s1)
    ctx->pc = 0x181768u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 639)));
    // 0x18176c: 0x8262057d  lb          $v0, 0x57D($s3)
    ctx->pc = 0x18176cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x181770: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x181770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x181774: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x181774u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x181778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x181778u;
    {
        const bool branch_taken_0x181778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181778u;
            // 0x18177c: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181778) {
            ctx->pc = 0x18178Cu;
            goto label_18178c;
        }
    }
    ctx->pc = 0x181780u;
    // 0x181780: 0x97a2005e  lhu         $v0, 0x5E($sp)
    ctx->pc = 0x181780u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x181784: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181784u;
    {
        const bool branch_taken_0x181784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181784u;
            // 0x181788: 0xa6620534  sh          $v0, 0x534($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1332), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181784) {
            ctx->pc = 0x18179Cu;
            goto label_18179c;
        }
    }
    ctx->pc = 0x18178Cu;
label_18178c:
    // 0x18178c: 0x97a3005e  lhu         $v1, 0x5E($sp)
    ctx->pc = 0x18178cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x181790: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x181794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x181794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x181798: 0xa6620534  sh          $v0, 0x534($s3)
    ctx->pc = 0x181798u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1332), (uint16_t)GPR_U32(ctx, 2));
label_18179c:
    // 0x18179c: 0x96650534  lhu         $a1, 0x534($s3)
    ctx->pc = 0x18179cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1332)));
    // 0x1817a0: 0xc05fe18  jal         func_17F860
    ctx->pc = 0x1817A0u;
    SET_GPR_U32(ctx, 31, 0x1817A8u);
    ctx->pc = 0x1817A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1817A0u;
            // 0x1817a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F860u;
    if (runtime->hasFunction(0x17F860u)) {
        auto targetFn = runtime->lookupFunction(0x17F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817A8u; }
        if (ctx->pc != 0x1817A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F860_0x17f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817A8u; }
        if (ctx->pc != 0x1817A8u) { return; }
    }
    ctx->pc = 0x1817A8u;
label_1817a8:
    // 0x1817a8: 0x9262036e  lbu         $v0, 0x36E($s3)
    ctx->pc = 0x1817a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 878)));
    // 0x1817ac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1817acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1817b0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1817B0u;
    {
        const bool branch_taken_0x1817b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1817b0) {
            ctx->pc = 0x1817B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1817B0u;
            // 0x1817b4: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x181800u;
            goto label_181800;
        }
    }
    ctx->pc = 0x1817B8u;
    // 0x1817b8: 0x8e2205dc  lw          $v0, 0x5DC($s1)
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1500)));
    // 0x1817bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1817BCu;
    {
        const bool branch_taken_0x1817bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1817bc) {
            ctx->pc = 0x1817C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1817BCu;
            // 0x1817c0: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1817CCu;
            goto label_1817cc;
        }
    }
    ctx->pc = 0x1817C4u;
    // 0x1817c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1817C4u;
    {
        const bool branch_taken_0x1817c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1817C4u;
            // 0x1817c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817c4) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x1817CCu;
label_1817cc:
    // 0x1817cc: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x1817CCu;
    SET_GPR_U32(ctx, 31, 0x1817D4u);
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817D4u; }
        if (ctx->pc != 0x1817D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817D4u; }
        if (ctx->pc != 0x1817D4u) { return; }
    }
    ctx->pc = 0x1817D4u;
label_1817d4:
    // 0x1817d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1817d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1817d8:
    // 0x1817d8: 0x8666037c  lh          $a2, 0x37C($s3)
    ctx->pc = 0x1817d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 892)));
    // 0x1817dc: 0x9222027e  lbu         $v0, 0x27E($s1)
    ctx->pc = 0x1817dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 638)));
    // 0x1817e0: 0x320a00ff  andi        $t2, $s0, 0xFF
    ctx->pc = 0x1817e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1817e4: 0x8667037e  lh          $a3, 0x37E($s3)
    ctx->pc = 0x1817e4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 894)));
    // 0x1817e8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1817e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1817ec: 0x92680381  lbu         $t0, 0x381($s3)
    ctx->pc = 0x1817ecu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 897)));
    // 0x1817f0: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x1817f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x1817f4: 0xc05721c  jal         func_15C870
    ctx->pc = 0x1817F4u;
    SET_GPR_U32(ctx, 31, 0x1817FCu);
    ctx->pc = 0x1817F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1817F4u;
            // 0x1817f8: 0x24903  sra         $t1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817FCu; }
        if (ctx->pc != 0x1817FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817FCu; }
        if (ctx->pc != 0x1817FCu) { return; }
    }
    ctx->pc = 0x1817FCu;
label_1817fc:
    // 0x1817fc: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1817fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_181800:
    // 0x181800: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x181800u;
    {
        const bool branch_taken_0x181800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x181800) {
            ctx->pc = 0x181804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181800u;
            // 0x181804: 0x2664028c  addiu       $a0, $s3, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 652));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181844u;
            goto label_181844;
        }
    }
    ctx->pc = 0x181808u;
    // 0x181808: 0x9222027f  lbu         $v0, 0x27F($s1)
    ctx->pc = 0x181808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 639)));
    // 0x18180c: 0x2664028c  addiu       $a0, $s3, 0x28C
    ctx->pc = 0x18180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 652));
    // 0x181810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181814: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x181814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x181818: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x181818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x18181c: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x18181Cu;
    SET_GPR_U32(ctx, 31, 0x181824u);
    ctx->pc = 0x181820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18181Cu;
            // 0x181820: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181824u; }
        if (ctx->pc != 0x181824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181824u; }
        if (ctx->pc != 0x181824u) { return; }
    }
    ctx->pc = 0x181824u;
label_181824:
    // 0x181824: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x181824u;
    SET_GPR_U32(ctx, 31, 0x18182Cu);
    ctx->pc = 0x181828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181824u;
            // 0x181828: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18182Cu; }
        if (ctx->pc != 0x18182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18182Cu; }
        if (ctx->pc != 0x18182Cu) { return; }
    }
    ctx->pc = 0x18182Cu;
label_18182c:
    // 0x18182c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181830: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181834: 0xc05721c  jal         func_15C870
    ctx->pc = 0x181834u;
    SET_GPR_U32(ctx, 31, 0x18183Cu);
    ctx->pc = 0x181838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181834u;
            // 0x181838: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18183Cu; }
        if (ctx->pc != 0x18183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18183Cu; }
        if (ctx->pc != 0x18183Cu) { return; }
    }
    ctx->pc = 0x18183Cu;
label_18183c:
    // 0x18183c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18183Cu;
    {
        const bool branch_taken_0x18183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18183Cu;
            // 0x181840: 0x8262057d  lb          $v0, 0x57D($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18183c) {
            ctx->pc = 0x181854u;
            goto label_181854;
        }
    }
    ctx->pc = 0x181844u;
label_181844:
    // 0x181844: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181848: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x181848u;
    SET_GPR_U32(ctx, 31, 0x181850u);
    ctx->pc = 0x18184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181848u;
            // 0x18184c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181850u; }
        if (ctx->pc != 0x181850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181850u; }
        if (ctx->pc != 0x181850u) { return; }
    }
    ctx->pc = 0x181850u;
label_181850:
    // 0x181850: 0x8262057d  lb          $v0, 0x57D($s3)
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
label_181854:
    // 0x181854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181854u;
    {
        const bool branch_taken_0x181854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181854) {
            ctx->pc = 0x181870u;
            goto label_181870;
        }
    }
    ctx->pc = 0x18185Cu;
    // 0x18185c: 0x92620381  lbu         $v0, 0x381($s3)
    ctx->pc = 0x18185cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 897)));
    // 0x181860: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x181864: 0x90450050  lbu         $a1, 0x50($v0)
    ctx->pc = 0x181864u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x181868: 0xc058674  jal         func_1619D0
    ctx->pc = 0x181868u;
    SET_GPR_U32(ctx, 31, 0x181870u);
    ctx->pc = 0x18186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181868u;
            // 0x18186c: 0x266405f8  addiu       $a0, $s3, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1619D0u;
    if (runtime->hasFunction(0x1619D0u)) {
        auto targetFn = runtime->lookupFunction(0x1619D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181870u; }
        if (ctx->pc != 0x181870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001619D0_0x1619d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181870u; }
        if (ctx->pc != 0x181870u) { return; }
    }
    ctx->pc = 0x181870u;
label_181870:
    // 0x181870: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x181870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_181874:
    // 0x181874: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x181874u;
    {
        const bool branch_taken_0x181874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181874) {
            ctx->pc = 0x1819FCu;
            goto label_1819fc;
        }
    }
    ctx->pc = 0x18187Cu;
label_18187c:
    // 0x18187c: 0x9263035c  lbu         $v1, 0x35C($s3)
    ctx->pc = 0x18187cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 860)));
label_181880:
    // 0x181880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181884: 0x5462005d  bnel        $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x181884u;
    {
        const bool branch_taken_0x181884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181884) {
            ctx->pc = 0x181888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181884u;
            // 0x181888: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1819FCu;
            goto label_1819fc;
        }
    }
    ctx->pc = 0x18188Cu;
    // 0x18188c: 0x8e640364  lw          $a0, 0x364($s3)
    ctx->pc = 0x18188cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 868)));
    // 0x181890: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x181890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x181894: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x181894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x181898: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x181898u;
    {
        const bool branch_taken_0x181898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181898) {
            ctx->pc = 0x18189Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181898u;
            // 0x18189c: 0x92620287  lbu         $v0, 0x287($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 647)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1818B0u;
            goto label_1818b0;
        }
    }
    ctx->pc = 0x1818A0u;
    // 0x1818a0: 0xc06005c  jal         func_180170
    ctx->pc = 0x1818A0u;
    SET_GPR_U32(ctx, 31, 0x1818A8u);
    ctx->pc = 0x1818A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1818A0u;
            // 0x1818a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818A8u; }
        if (ctx->pc != 0x1818A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1818A8u; }
        if (ctx->pc != 0x1818A8u) { return; }
    }
    ctx->pc = 0x1818A8u;
label_1818a8:
    // 0x1818a8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1818A8u;
    {
        const bool branch_taken_0x1818a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1818A8u;
            // 0x1818ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818a8) {
            ctx->pc = 0x1819FCu;
            goto label_1819fc;
        }
    }
    ctx->pc = 0x1818B0u;
label_1818b0:
    // 0x1818b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1818b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1818b4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1818B4u;
    {
        const bool branch_taken_0x1818b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1818b4) {
            ctx->pc = 0x1818B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1818B4u;
            // 0x1818b8: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1818D4u;
            goto label_1818d4;
        }
    }
    ctx->pc = 0x1818BCu;
    // 0x1818bc: 0x8e63049c  lw          $v1, 0x49C($s3)
    ctx->pc = 0x1818bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
    // 0x1818c0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1818c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1818c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1818c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1818cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1818CCu;
    {
        const bool branch_taken_0x1818cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1818CCu;
            // 0x1818d0: 0xae62049c  sw          $v0, 0x49C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818cc) {
            ctx->pc = 0x1818E0u;
            goto label_1818e0;
        }
    }
    ctx->pc = 0x1818D4u;
label_1818d4:
    // 0x1818d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1818d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1818d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1818d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1818dc: 0xae62049c  sw          $v0, 0x49C($s3)
    ctx->pc = 0x1818dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 2));
label_1818e0:
    // 0x1818e0: 0x8e630270  lw          $v1, 0x270($s3)
    ctx->pc = 0x1818e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x1818e4: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x1818e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
    // 0x1818e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1818e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1818ec: 0xae620270  sw          $v0, 0x270($s3)
    ctx->pc = 0x1818ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 624), GPR_U32(ctx, 2));
    // 0x1818f0: 0xae640518  sw          $a0, 0x518($s3)
    ctx->pc = 0x1818f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1304), GPR_U32(ctx, 4));
    // 0x1818f4: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x1818f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x1818f8: 0xc04bfa4  jal         func_12FE90
    ctx->pc = 0x1818F8u;
    SET_GPR_U32(ctx, 31, 0x181900u);
    ctx->pc = 0x1818FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1818F8u;
            // 0x1818fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE90u;
    if (runtime->hasFunction(0x12FE90u)) {
        auto targetFn = runtime->lookupFunction(0x12FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181900u; }
        if (ctx->pc != 0x181900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FE90_0x12fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181900u; }
        if (ctx->pc != 0x181900u) { return; }
    }
    ctx->pc = 0x181900u;
label_181900:
    // 0x181900: 0xa260028a  sb          $zero, 0x28A($s3)
    ctx->pc = 0x181900u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 650), (uint8_t)GPR_U32(ctx, 0));
    // 0x181904: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x181904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x181908: 0xa260057e  sb          $zero, 0x57E($s3)
    ctx->pc = 0x181908u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1406), (uint8_t)GPR_U32(ctx, 0));
    // 0x18190c: 0x92630368  lbu         $v1, 0x368($s3)
    ctx->pc = 0x18190cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 872)));
    // 0x181910: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x181910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x181914: 0xa2630368  sb          $v1, 0x368($s3)
    ctx->pc = 0x181914u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 872), (uint8_t)GPR_U32(ctx, 3));
    // 0x181918: 0x92630368  lbu         $v1, 0x368($s3)
    ctx->pc = 0x181918u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 872)));
    // 0x18191c: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x18191Cu;
    {
        const bool branch_taken_0x18191c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18191c) {
            ctx->pc = 0x181920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18191Cu;
            // 0x181920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1819F0u;
            goto label_1819f0;
        }
    }
    ctx->pc = 0x181924u;
    // 0x181924: 0x28620070  slti        $v0, $v1, 0x70
    ctx->pc = 0x181924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x181928: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x181928u;
    {
        const bool branch_taken_0x181928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181928) {
            ctx->pc = 0x18192Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181928u;
            // 0x18192c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18197Cu;
            goto label_18197c;
        }
    }
    ctx->pc = 0x181930u;
    // 0x181930: 0x8e620364  lw          $v0, 0x364($s3)
    ctx->pc = 0x181930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 868)));
    // 0x181934: 0xae62051c  sw          $v0, 0x51C($s3)
    ctx->pc = 0x181934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1308), GPR_U32(ctx, 2));
    // 0x181938: 0x9265035d  lbu         $a1, 0x35D($s3)
    ctx->pc = 0x181938u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 861)));
    // 0x18193c: 0xc05ff74  jal         func_17FDD0
    ctx->pc = 0x18193Cu;
    SET_GPR_U32(ctx, 31, 0x181944u);
    ctx->pc = 0x181940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18193Cu;
            // 0x181940: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FDD0u;
    if (runtime->hasFunction(0x17FDD0u)) {
        auto targetFn = runtime->lookupFunction(0x17FDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181944u; }
        if (ctx->pc != 0x181944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FDD0_0x17fdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181944u; }
        if (ctx->pc != 0x181944u) { return; }
    }
    ctx->pc = 0x181944u;
label_181944:
    // 0x181944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x181944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x181948: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x181948u;
    {
        const bool branch_taken_0x181948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181948) {
            ctx->pc = 0x18194Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181948u;
            // 0x18194c: 0x92620368  lbu         $v0, 0x368($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181958u;
            goto label_181958;
        }
    }
    ctx->pc = 0x181950u;
    // 0x181950: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x181950u;
    {
        const bool branch_taken_0x181950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181950) {
            ctx->pc = 0x181978u;
            goto label_181978;
        }
    }
    ctx->pc = 0x181958u;
label_181958:
    // 0x181958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18195c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181960: 0x27a7005e  addiu       $a3, $sp, 0x5E
    ctx->pc = 0x181960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    // 0x181964: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x181964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x181968: 0xc05ff8c  jal         func_17FE30
    ctx->pc = 0x181968u;
    SET_GPR_U32(ctx, 31, 0x181970u);
    ctx->pc = 0x18196Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181968u;
            // 0x18196c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FE30u;
    if (runtime->hasFunction(0x17FE30u)) {
        auto targetFn = runtime->lookupFunction(0x17FE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181970u; }
        if (ctx->pc != 0x181970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FE30_0x17fe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181970u; }
        if (ctx->pc != 0x181970u) { return; }
    }
    ctx->pc = 0x181970u;
label_181970:
    // 0x181970: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x181970u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181974: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x181974u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_181978:
    // 0x181978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18197c:
    // 0x18197c: 0xc06003c  jal         func_1800F0
    ctx->pc = 0x18197Cu;
    SET_GPR_U32(ctx, 31, 0x181984u);
    ctx->pc = 0x1800F0u;
    if (runtime->hasFunction(0x1800F0u)) {
        auto targetFn = runtime->lookupFunction(0x1800F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181984u; }
        if (ctx->pc != 0x181984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001800F0_0x1800f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181984u; }
        if (ctx->pc != 0x181984u) { return; }
    }
    ctx->pc = 0x181984u;
label_181984:
    // 0x181984: 0x8e640364  lw          $a0, 0x364($s3)
    ctx->pc = 0x181984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 868)));
    // 0x181988: 0x9266035d  lbu         $a2, 0x35D($s3)
    ctx->pc = 0x181988u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 861)));
    // 0x18198c: 0xc06008c  jal         func_180230
    ctx->pc = 0x18198Cu;
    SET_GPR_U32(ctx, 31, 0x181994u);
    ctx->pc = 0x181990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18198Cu;
            // 0x181990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180230u;
    if (runtime->hasFunction(0x180230u)) {
        auto targetFn = runtime->lookupFunction(0x180230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181994u; }
        if (ctx->pc != 0x181994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180230_0x180230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181994u; }
        if (ctx->pc != 0x181994u) { return; }
    }
    ctx->pc = 0x181994u;
label_181994:
    // 0x181994: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x181994u;
    {
        const bool branch_taken_0x181994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181994) {
            ctx->pc = 0x181998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181994u;
            // 0x181998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1819CCu;
            goto label_1819cc;
        }
    }
    ctx->pc = 0x18199Cu;
    // 0x18199c: 0x8e630494  lw          $v1, 0x494($s3)
    ctx->pc = 0x18199cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x1819a0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1819a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1819a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1819a8: 0xae620494  sw          $v0, 0x494($s3)
    ctx->pc = 0x1819a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 2));
    // 0x1819ac: 0x92620368  lbu         $v0, 0x368($s3)
    ctx->pc = 0x1819acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 872)));
    // 0x1819b0: 0x28420070  slti        $v0, $v0, 0x70
    ctx->pc = 0x1819b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x1819b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1819B4u;
    {
        const bool branch_taken_0x1819b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1819b4) {
            ctx->pc = 0x1819C8u;
            goto label_1819c8;
        }
    }
    ctx->pc = 0x1819BCu;
    // 0x1819bc: 0x8662039a  lh          $v0, 0x39A($s3)
    ctx->pc = 0x1819bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 922)));
    // 0x1819c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1819c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1819c4: 0xa662039a  sh          $v0, 0x39A($s3)
    ctx->pc = 0x1819c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 922), (uint16_t)GPR_U32(ctx, 2));
label_1819c8:
    // 0x1819c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1819c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1819cc:
    // 0x1819cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1819ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1819d0: 0xc05fee8  jal         func_17FBA0
    ctx->pc = 0x1819D0u;
    SET_GPR_U32(ctx, 31, 0x1819D8u);
    ctx->pc = 0x1819D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1819D0u;
            // 0x1819d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FBA0u;
    if (runtime->hasFunction(0x17FBA0u)) {
        auto targetFn = runtime->lookupFunction(0x17FBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819D8u; }
        if (ctx->pc != 0x1819D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FBA0_0x17fba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819D8u; }
        if (ctx->pc != 0x1819D8u) { return; }
    }
    ctx->pc = 0x1819D8u;
label_1819d8:
    // 0x1819d8: 0xa262057d  sb          $v0, 0x57D($s3)
    ctx->pc = 0x1819d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1405), (uint8_t)GPR_U32(ctx, 2));
    // 0x1819dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1819dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819e0: 0x9265057d  lbu         $a1, 0x57D($s3)
    ctx->pc = 0x1819e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1405)));
    // 0x1819e4: 0xc060310  jal         func_180C40
    ctx->pc = 0x1819E4u;
    SET_GPR_U32(ctx, 31, 0x1819ECu);
    ctx->pc = 0x1819E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1819E4u;
            // 0x1819e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C40u;
    if (runtime->hasFunction(0x180C40u)) {
        auto targetFn = runtime->lookupFunction(0x180C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819ECu; }
        if (ctx->pc != 0x1819ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C40_0x180c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819ECu; }
        if (ctx->pc != 0x1819ECu) { return; }
    }
    ctx->pc = 0x1819ECu;
label_1819ec:
    // 0x1819ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1819ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1819f0:
    // 0x1819f0: 0xc06005c  jal         func_180170
    ctx->pc = 0x1819F0u;
    SET_GPR_U32(ctx, 31, 0x1819F8u);
    ctx->pc = 0x180170u;
    if (runtime->hasFunction(0x180170u)) {
        auto targetFn = runtime->lookupFunction(0x180170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819F8u; }
        if (ctx->pc != 0x1819F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180170_0x180170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819F8u; }
        if (ctx->pc != 0x1819F8u) { return; }
    }
    ctx->pc = 0x1819F8u;
label_1819f8:
    // 0x1819f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1819f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1819fc:
    // 0x1819fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1819fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181a00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181a04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181a10: 0x3e00008  jr          $ra
    ctx->pc = 0x181A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A10u;
            // 0x181a14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181A18u;
    // 0x181a18: 0x0  nop
    ctx->pc = 0x181a18u;
    // NOP
    // 0x181a1c: 0x0  nop
    ctx->pc = 0x181a1cu;
    // NOP
    ctx->pc = 0x181a20u;
}
