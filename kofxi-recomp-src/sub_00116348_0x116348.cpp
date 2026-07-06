#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116348
// Address: 0x116348 - 0x1164c8
void sub_00116348_0x116348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116348_0x116348");
#endif

    switch (ctx->pc) {
        case 0x11636cu: goto label_11636c;
        case 0x116378u: goto label_116378;
        case 0x116380u: goto label_116380;
        case 0x116388u: goto label_116388;
        case 0x1163b0u: goto label_1163b0;
        case 0x11642cu: goto label_11642c;
        case 0x116438u: goto label_116438;
        case 0x116444u: goto label_116444;
        case 0x116454u: goto label_116454;
        case 0x116460u: goto label_116460;
        case 0x116470u: goto label_116470;
        case 0x11647cu: goto label_11647c;
        case 0x1164a0u: goto label_1164a0;
        case 0x1164b0u: goto label_1164b0;
        default: break;
    }

    ctx->pc = 0x116348u;

    // 0x116348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11634c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x116350: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x116350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x116354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116358: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x116358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11635c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116364: 0xc046422  jal         func_119088
    ctx->pc = 0x116364u;
    SET_GPR_U32(ctx, 31, 0x11636Cu);
    ctx->pc = 0x116368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116364u;
            // 0x116368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119088u;
    if (runtime->hasFunction(0x119088u)) {
        auto targetFn = runtime->lookupFunction(0x119088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11636Cu; }
        if (ctx->pc != 0x11636Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00119088_0x119088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11636Cu; }
        if (ctx->pc != 0x11636Cu) { return; }
    }
    ctx->pc = 0x11636Cu;
label_11636c:
    // 0x11636c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116370: 0xc046422  jal         func_119088
    ctx->pc = 0x116370u;
    SET_GPR_U32(ctx, 31, 0x116378u);
    ctx->pc = 0x116374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116370u;
            // 0x116374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119088u;
    if (runtime->hasFunction(0x119088u)) {
        auto targetFn = runtime->lookupFunction(0x119088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116378u; }
        if (ctx->pc != 0x116378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00119088_0x119088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116378u; }
        if (ctx->pc != 0x116378u) { return; }
    }
    ctx->pc = 0x116378u;
label_116378:
    // 0x116378: 0xc0433cc  jal         func_10CF30
    ctx->pc = 0x116378u;
    SET_GPR_U32(ctx, 31, 0x116380u);
    ctx->pc = 0x10CF30u;
    if (runtime->hasFunction(0x10CF30u)) {
        auto targetFn = runtime->lookupFunction(0x10CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116380u; }
        if (ctx->pc != 0x116380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CF30_0x10cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116380u; }
        if (ctx->pc != 0x116380u) { return; }
    }
    ctx->pc = 0x116380u;
label_116380:
    // 0x116380: 0xc04341c  jal         func_10D070
    ctx->pc = 0x116380u;
    SET_GPR_U32(ctx, 31, 0x116388u);
    ctx->pc = 0x116384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116380u;
            // 0x116384: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D070u;
    if (runtime->hasFunction(0x10D070u)) {
        auto targetFn = runtime->lookupFunction(0x10D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116388u; }
        if (ctx->pc != 0x116388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D070_0x10d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116388u; }
        if (ctx->pc != 0x116388u) { return; }
    }
    ctx->pc = 0x116388u;
label_116388:
    // 0x116388: 0x3c0a0041  lui         $t2, 0x41
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65 << 16));
    // 0x11638c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x11638cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116390: 0x25439e80  addiu       $v1, $t2, -0x6180
    ctx->pc = 0x116390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294942336));
    // 0x116394: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x116394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x116398: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x116398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11639c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11639Cu;
    {
        const bool branch_taken_0x11639c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11639Cu;
            // 0x1163a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11639c) {
            ctx->pc = 0x1163D0u;
            goto label_1163d0;
        }
    }
    ctx->pc = 0x1163A4u;
    // 0x1163a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1163a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163a8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1163a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1163ac: 0x0  nop
    ctx->pc = 0x1163acu;
    // NOP
label_1163b0:
    // 0x1163b0: 0x25439e80  addiu       $v1, $t2, -0x6180
    ctx->pc = 0x1163b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294942336));
    // 0x1163b4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1163b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1163b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1163b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1163bc: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1163bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1163c0: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1163c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1163c4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1163c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1163c8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1163C8u;
    {
        const bool branch_taken_0x1163c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1163c8) {
            ctx->pc = 0x1163CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1163C8u;
            // 0x1163cc: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1163B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1163b0;
        }
    }
    ctx->pc = 0x1163D0u;
label_1163d0:
    // 0x1163d0: 0x25469e80  addiu       $a2, $t2, -0x6180
    ctx->pc = 0x1163d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294942336));
    // 0x1163d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1163d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1163d8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1163d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1163dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1163dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1163e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1163e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1163e4: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1163e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1163e8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1163e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1163ec: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1163ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1163f0: 0xdd429e80  ld          $v0, -0x6180($t2)
    ctx->pc = 0x1163f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 4294942336)));
    // 0x1163f4: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x1163f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1163f8: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x1163f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x1163fc: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1163fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x116400: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x116400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x116404: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x116404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x116408: 0xfd429e80  sd          $v0, -0x6180($t2)
    ctx->pc = 0x116408u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294942336), GPR_U64(ctx, 2));
    // 0x11640c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x11640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116410: 0xa1459e80  sb          $a1, -0x6180($t2)
    ctx->pc = 0x116410u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294942336), (uint8_t)GPR_U32(ctx, 5));
    // 0x116414: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x116414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x116418: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x116418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x11641c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x11641cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x116420: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x116420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x116424: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x116424u;
    SET_GPR_U32(ctx, 31, 0x11642Cu);
    ctx->pc = 0x116428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116424u;
            // 0x116428: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11642Cu; }
        if (ctx->pc != 0x11642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11642Cu; }
        if (ctx->pc != 0x11642Cu) { return; }
    }
    ctx->pc = 0x11642Cu;
label_11642c:
    // 0x11642c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116430: 0xc043418  jal         func_10D060
    ctx->pc = 0x116430u;
    SET_GPR_U32(ctx, 31, 0x116438u);
    ctx->pc = 0x116434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116430u;
            // 0x116434: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    if (runtime->hasFunction(0x10D060u)) {
        auto targetFn = runtime->lookupFunction(0x10D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116438u; }
        if (ctx->pc != 0x116438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D060_0x10d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116438u; }
        if (ctx->pc != 0x116438u) { return; }
    }
    ctx->pc = 0x116438u;
label_116438:
    // 0x116438: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11643c: 0xc043408  jal         func_10D020
    ctx->pc = 0x11643Cu;
    SET_GPR_U32(ctx, 31, 0x116444u);
    ctx->pc = 0x116440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11643Cu;
            // 0x116440: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D020u;
    if (runtime->hasFunction(0x10D020u)) {
        auto targetFn = runtime->lookupFunction(0x10D020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116444u; }
        if (ctx->pc != 0x116444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifSetDmaSyscall_0x10d020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116444u; }
        if (ctx->pc != 0x116444u) { return; }
    }
    ctx->pc = 0x116444u;
label_116444:
    // 0x116444: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x116444u;
    {
        const bool branch_taken_0x116444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116444u;
            // 0x116448: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116444) {
            ctx->pc = 0x116484u;
            goto label_116484;
        }
    }
    ctx->pc = 0x11644Cu;
    // 0x11644c: 0xc043418  jal         func_10D060
    ctx->pc = 0x11644Cu;
    SET_GPR_U32(ctx, 31, 0x116454u);
    ctx->pc = 0x116450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11644Cu;
            // 0x116450: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    if (runtime->hasFunction(0x10D060u)) {
        auto targetFn = runtime->lookupFunction(0x10D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116454u; }
        if (ctx->pc != 0x116454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D060_0x10d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116454u; }
        if (ctx->pc != 0x116454u) { return; }
    }
    ctx->pc = 0x116454u;
label_116454:
    // 0x116454: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x116454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116458: 0xc043418  jal         func_10D060
    ctx->pc = 0x116458u;
    SET_GPR_U32(ctx, 31, 0x116460u);
    ctx->pc = 0x11645Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116458u;
            // 0x11645c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    if (runtime->hasFunction(0x10D060u)) {
        auto targetFn = runtime->lookupFunction(0x10D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116460u; }
        if (ctx->pc != 0x116460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D060_0x10d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116460u; }
        if (ctx->pc != 0x116460u) { return; }
    }
    ctx->pc = 0x116460u;
label_116460:
    // 0x116460: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x116460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x116464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116468: 0xc043418  jal         func_10D060
    ctx->pc = 0x116468u;
    SET_GPR_U32(ctx, 31, 0x116470u);
    ctx->pc = 0x11646Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116468u;
            // 0x11646c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    if (runtime->hasFunction(0x10D060u)) {
        auto targetFn = runtime->lookupFunction(0x10D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116470u; }
        if (ctx->pc != 0x116470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D060_0x10d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116470u; }
        if (ctx->pc != 0x116470u) { return; }
    }
    ctx->pc = 0x116470u;
label_116470:
    // 0x116470: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x116470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x116474: 0xc043418  jal         func_10D060
    ctx->pc = 0x116474u;
    SET_GPR_U32(ctx, 31, 0x11647Cu);
    ctx->pc = 0x116478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x116474u;
            // 0x116478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D060u;
    if (runtime->hasFunction(0x10D060u)) {
        auto targetFn = runtime->lookupFunction(0x10D060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11647Cu; }
        if (ctx->pc != 0x11647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D060_0x10d060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11647Cu; }
        if (ctx->pc != 0x11647Cu) { return; }
    }
    ctx->pc = 0x11647Cu;
label_11647c:
    // 0x11647c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11647Cu;
    {
        const bool branch_taken_0x11647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11647Cu;
            // 0x116480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11647c) {
            ctx->pc = 0x116488u;
            goto label_116488;
        }
    }
    ctx->pc = 0x116484u;
label_116484:
    // 0x116484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116488:
    // 0x116488: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11648c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11648cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116490: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116494: 0x3e00008  jr          $ra
    ctx->pc = 0x116494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116494u;
            // 0x116498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11649Cu;
    // 0x11649c: 0x0  nop
    ctx->pc = 0x11649cu;
    // NOP
label_1164a0:
    // 0x1164a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1164a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1164a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1164a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1164a8: 0xc04341c  jal         func_10D070
    ctx->pc = 0x1164A8u;
    SET_GPR_U32(ctx, 31, 0x1164B0u);
    ctx->pc = 0x1164ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1164A8u;
            // 0x1164ac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D070u;
    if (runtime->hasFunction(0x10D070u)) {
        auto targetFn = runtime->lookupFunction(0x10D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1164B0u; }
        if (ctx->pc != 0x1164B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D070_0x10d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1164B0u; }
        if (ctx->pc != 0x1164B0u) { return; }
    }
    ctx->pc = 0x1164B0u;
label_1164b0:
    // 0x1164b0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1164b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1164b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1164b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1164b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1164b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1164bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1164bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1164c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1164C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1164C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1164C0u;
            // 0x1164c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1164C8u;
    ctx->pc = 0x1164c8u;
}
