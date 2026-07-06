#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002966E8
// Address: 0x2966e8 - 0x296860
void sub_002966E8_0x2966e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002966E8_0x2966e8");
#endif

    switch (ctx->pc) {
        case 0x296758u: goto label_296758;
        case 0x296798u: goto label_296798;
        case 0x2967b0u: goto label_2967b0;
        case 0x2967f0u: goto label_2967f0;
        case 0x296830u: goto label_296830;
        default: break;
    }

    ctx->pc = 0x2966e8u;

    // 0x2966e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2966e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2966ec: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2966ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2966f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2966f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2966f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2966f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966f8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2966f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2966fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2966fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x296700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296704: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x296704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x296708: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x296708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29670c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x29670cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x296710: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x296710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x296714: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x296714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x296718: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x296718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29671c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x29671Cu;
    {
        const bool branch_taken_0x29671c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x296720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29671Cu;
            // 0x296720: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29671c) {
            ctx->pc = 0x296838u;
            goto label_296838;
        }
    }
    ctx->pc = 0x296724u;
    // 0x296724: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x296728: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296728u;
    {
        const bool branch_taken_0x296728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x29672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296728u;
            // 0x29672c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296728) {
            ctx->pc = 0x29673Cu;
            goto label_29673c;
        }
    }
    ctx->pc = 0x296730u;
    // 0x296730: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x296730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x296734: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x296734u;
    {
        const bool branch_taken_0x296734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296734u;
            // 0x296738: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296734) {
            ctx->pc = 0x29678Cu;
            goto label_29678c;
        }
    }
    ctx->pc = 0x29673Cu;
label_29673c:
    // 0x29673c: 0x2632004c  addiu       $s2, $s1, 0x4C
    ctx->pc = 0x29673cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x296740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x296744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296748: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x296748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29674c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x29674cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296750: 0xc0a5928  jal         func_2964A0
    ctx->pc = 0x296750u;
    SET_GPR_U32(ctx, 31, 0x296758u);
    ctx->pc = 0x296754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296750u;
            // 0x296754: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2964A0u;
    if (runtime->hasFunction(0x2964A0u)) {
        auto targetFn = runtime->lookupFunction(0x2964A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296758u; }
        if (ctx->pc != 0x296758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002964A0_0x2964a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296758u; }
        if (ctx->pc != 0x296758u) { return; }
    }
    ctx->pc = 0x296758u;
label_296758:
    // 0x296758: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x296758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29675c: 0x14500037  bne         $v0, $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x29675Cu;
    {
        const bool branch_taken_0x29675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x296760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29675Cu;
            // 0x296760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29675c) {
            ctx->pc = 0x29683Cu;
            goto label_29683c;
        }
    }
    ctx->pc = 0x296764u;
    // 0x296764: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x296764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x296768: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x296768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29676c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x29676cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x296770: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x296770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296774: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x296774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x296778: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296778u;
    {
        const bool branch_taken_0x296778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296778u;
            // 0x29677c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296778) {
            ctx->pc = 0x2967A0u;
            goto label_2967a0;
        }
    }
    ctx->pc = 0x296780u;
    // 0x296780: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x296780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x296784: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x296784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x296788: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x296788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_29678c:
    // 0x29678c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29678cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296790: 0xc0a5648  jal         func_295920
    ctx->pc = 0x296790u;
    SET_GPR_U32(ctx, 31, 0x296798u);
    ctx->pc = 0x296794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296790u;
            // 0x296794: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296798u; }
        if (ctx->pc != 0x296798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296798u; }
        if (ctx->pc != 0x296798u) { return; }
    }
    ctx->pc = 0x296798u;
label_296798:
    // 0x296798: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x296798u;
    {
        const bool branch_taken_0x296798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296798u;
            // 0x29679c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296798) {
            ctx->pc = 0x29683Cu;
            goto label_29683c;
        }
    }
    ctx->pc = 0x2967A0u;
label_2967a0:
    // 0x2967a0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2967A0u;
    {
        const bool branch_taken_0x2967a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2967A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967A0u;
            // 0x2967a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967a0) {
            ctx->pc = 0x2967C8u;
            goto label_2967c8;
        }
    }
    ctx->pc = 0x2967A8u;
    // 0x2967a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2967a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2967acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2967b0:
    // 0x2967b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2967b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2967b4: 0x14450018  bne         $v0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2967B4u;
    {
        const bool branch_taken_0x2967b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2967B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967B4u;
            // 0x2967b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967b4) {
            ctx->pc = 0x296818u;
            goto label_296818;
        }
    }
    ctx->pc = 0x2967BCu;
    // 0x2967bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2967bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2967c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2967C0u;
    {
        const bool branch_taken_0x2967c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2967C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967C0u;
            // 0x2967c4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967c0) {
            ctx->pc = 0x2967B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2967b0;
        }
    }
    ctx->pc = 0x2967C8u;
label_2967c8:
    // 0x2967c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2967c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2967cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2967ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2967d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2967d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2967d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2967d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967dc: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x2967DCu;
    {
        const bool branch_taken_0x2967dc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2967E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2967DCu;
            // 0x2967e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967dc) {
            ctx->pc = 0x296810u;
            goto label_296810;
        }
    }
    ctx->pc = 0x2967E4u;
    // 0x2967e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2967e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967e8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2967e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967ec: 0x0  nop
    ctx->pc = 0x2967ecu;
    // NOP
label_2967f0:
    // 0x2967f0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2967f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2967f4: 0x2862021  addu        $a0, $s4, $a2
    ctx->pc = 0x2967f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2967f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2967f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2967fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2967fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x296800: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x296800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x296804: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x296804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296808: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x296808u;
    {
        const bool branch_taken_0x296808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296808) {
            ctx->pc = 0x2967F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2967f0;
        }
    }
    ctx->pc = 0x296810u;
label_296810:
    // 0x296810: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x296810u;
    {
        const bool branch_taken_0x296810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296810u;
            // 0x296814: 0xae680000  sw          $t0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296810) {
            ctx->pc = 0x296838u;
            goto label_296838;
        }
    }
    ctx->pc = 0x296818u;
label_296818:
    // 0x296818: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x296818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29681c: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x29681cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x296820: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x296820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x296824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296828: 0xc0a5648  jal         func_295920
    ctx->pc = 0x296828u;
    SET_GPR_U32(ctx, 31, 0x296830u);
    ctx->pc = 0x29682Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296828u;
            // 0x29682c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296830u; }
        if (ctx->pc != 0x296830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296830u; }
        if (ctx->pc != 0x296830u) { return; }
    }
    ctx->pc = 0x296830u;
label_296830:
    // 0x296830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296830u;
    {
        const bool branch_taken_0x296830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296830u;
            // 0x296834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296830) {
            ctx->pc = 0x29683Cu;
            goto label_29683c;
        }
    }
    ctx->pc = 0x296838u;
label_296838:
    // 0x296838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29683c:
    // 0x29683c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29683cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296840: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x296840u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296844: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x296844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296848: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x296848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29684c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29684cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296850: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x296850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296854: 0x3e00008  jr          $ra
    ctx->pc = 0x296854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296854u;
            // 0x296858: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29685Cu;
    // 0x29685c: 0x0  nop
    ctx->pc = 0x29685cu;
    // NOP
    ctx->pc = 0x296860u;
}
