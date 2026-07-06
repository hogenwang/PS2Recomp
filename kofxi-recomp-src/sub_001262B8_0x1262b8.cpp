#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001262B8
// Address: 0x1262b8 - 0x126408
void sub_001262B8_0x1262b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001262B8_0x1262b8");
#endif

    switch (ctx->pc) {
        case 0x1262f0u: goto label_1262f0;
        case 0x1262f4u: goto label_1262f4;
        case 0x126308u: goto label_126308;
        case 0x126320u: goto label_126320;
        case 0x12633cu: goto label_12633c;
        case 0x126348u: goto label_126348;
        case 0x1263a0u: goto label_1263a0;
        case 0x1263f0u: goto label_1263f0;
        default: break;
    }

    ctx->pc = 0x1262b8u;

    // 0x1262b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1262b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1262bc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1262bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1262c0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1262c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1262c4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1262c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1262c8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1262c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1262cc: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x1262ccu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1262d0: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x1262d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x1262d4: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1262D4u;
    {
        const bool branch_taken_0x1262d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1262D4u;
            // 0x1262d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262d4) {
            ctx->pc = 0x126308u;
            goto label_126308;
        }
    }
    ctx->pc = 0x1262DCu;
    // 0x1262dc: 0x248e0043  addiu       $t6, $a0, 0x43
    ctx->pc = 0x1262dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 67));
    // 0x1262e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1262e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1262e4: 0xac8f0014  sw          $t7, 0x14($a0)
    ctx->pc = 0x1262e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 15));
    // 0x1262e8: 0xac8e0010  sw          $t6, 0x10($a0)
    ctx->pc = 0x1262e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
    // 0x1262ec: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x1262ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
label_1262f0:
    // 0x1262f0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1262f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1262f4:
    // 0x1262f4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1262f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1262f8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1262f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1262fc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1262fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x126300: 0x3e00008  jr          $ra
    ctx->pc = 0x126300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126300u;
            // 0x126304: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126308u;
label_126308:
    // 0x126308: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x126308u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12630c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12630Cu;
    {
        const bool branch_taken_0x12630c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x126310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12630Cu;
            // 0x126310: 0x35cf0800  ori         $t7, $t6, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12630c) {
            ctx->pc = 0x126330u;
            goto label_126330;
        }
    }
    ctx->pc = 0x126314u;
    // 0x126314: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x126314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x126318: 0xc04966a  jal         func_1259A8
    ctx->pc = 0x126318u;
    SET_GPR_U32(ctx, 31, 0x126320u);
    ctx->pc = 0x12631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126318u;
            // 0x12631c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1259A8u;
    if (runtime->hasFunction(0x1259A8u)) {
        auto targetFn = runtime->lookupFunction(0x1259A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126320u; }
        if (ctx->pc != 0x126320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001259A8_0x1259a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126320u; }
        if (ctx->pc != 0x126320u) { return; }
    }
    ctx->pc = 0x126320u;
label_126320:
    // 0x126320: 0x4410025  bgez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x126320u;
    {
        const bool branch_taken_0x126320 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x126324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126320u;
            // 0x126324: 0x8faf0004  lw          $t7, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126320) {
            ctx->pc = 0x1263B8u;
            goto label_1263b8;
        }
    }
    ctx->pc = 0x126328u;
    // 0x126328: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x126328u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12632c: 0x35cf0800  ori         $t7, $t6, 0x800
    ctx->pc = 0x12632cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2048);
label_126330:
    // 0x126330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126334: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x126334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x126338: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x126338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_12633c:
    // 0x12633c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x126340: 0xc049a24  jal         func_126890
    ctx->pc = 0x126340u;
    SET_GPR_U32(ctx, 31, 0x126348u);
    ctx->pc = 0x126344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126340u;
            // 0x126344: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    if (runtime->hasFunction(0x126890u)) {
        auto targetFn = runtime->lookupFunction(0x126890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126348u; }
        if (ctx->pc != 0x126348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126890_0x126890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126348u; }
        if (ctx->pc != 0x126348u) { return; }
    }
    ctx->pc = 0x126348u;
label_126348:
    // 0x126348: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x126348u;
    {
        const bool branch_taken_0x126348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126348u;
            // 0x12634c: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126348) {
            ctx->pc = 0x126370u;
            goto label_126370;
        }
    }
    ctx->pc = 0x126350u;
    // 0x126350: 0x260d0043  addiu       $t5, $s0, 0x43
    ctx->pc = 0x126350u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x126354: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x126354u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126358: 0xae0d0010  sw          $t5, 0x10($s0)
    ctx->pc = 0x126358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 13));
    // 0x12635c: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x12635cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x126360: 0xae0e0014  sw          $t6, 0x14($s0)
    ctx->pc = 0x126360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
    // 0x126364: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x126364u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x126368: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x126368u;
    {
        const bool branch_taken_0x126368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12636Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126368u;
            // 0x12636c: 0xae0d0000  sw          $t5, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126368) {
            ctx->pc = 0x1262F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1262f0;
        }
    }
    ctx->pc = 0x126370u;
label_126370:
    // 0x126370: 0x3c0e0012  lui         $t6, 0x12
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)18 << 16));
    // 0x126374: 0x8e0d0054  lw          $t5, 0x54($s0)
    ctx->pc = 0x126374u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x126378: 0x25ce4d40  addiu       $t6, $t6, 0x4D40
    ctx->pc = 0x126378u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 19776));
    // 0x12637c: 0x35ef0080  ori         $t7, $t7, 0x80
    ctx->pc = 0x12637cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)128);
    // 0x126380: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x126380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x126384: 0xadae003c  sw          $t6, 0x3C($t5)
    ctx->pc = 0x126384u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 14));
    // 0x126388: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x126388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12638c: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x12638cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x126390: 0x1240ffd7  beqz        $s2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x126390u;
    {
        const bool branch_taken_0x126390 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x126394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126390u;
            // 0x126394: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126390) {
            ctx->pc = 0x1262F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1262f0;
        }
    }
    ctx->pc = 0x126398u;
    // 0x126398: 0xc043504  jal         func_10D410
    ctx->pc = 0x126398u;
    SET_GPR_U32(ctx, 31, 0x1263A0u);
    ctx->pc = 0x12639Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126398u;
            // 0x12639c: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D410u;
    if (runtime->hasFunction(0x10D410u)) {
        auto targetFn = runtime->lookupFunction(0x10D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1263A0u; }
        if (ctx->pc != 0x1263A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D410_0x10d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1263A0u; }
        if (ctx->pc != 0x1263A0u) { return; }
    }
    ctx->pc = 0x1263A0u;
label_1263a0:
    // 0x1263a0: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1263A0u;
    {
        const bool branch_taken_0x1263a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263a0) {
            ctx->pc = 0x1263A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1263A0u;
            // 0x1263a4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1262F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1262f4;
        }
    }
    ctx->pc = 0x1263A8u;
    // 0x1263a8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1263a8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1263ac: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1263acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1263b0: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1263B0u;
    {
        const bool branch_taken_0x1263b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263B0u;
            // 0x1263b4: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263b0) {
            ctx->pc = 0x1262F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1262f0;
        }
    }
    ctx->pc = 0x1263B8u;
label_1263b8:
    // 0x1263b8: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1263bc: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1263bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1263c0: 0x31eff000  andi        $t7, $t7, 0xF000
    ctx->pc = 0x1263c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61440);
    // 0x1263c4: 0x39ee2000  xori        $t6, $t7, 0x2000
    ctx->pc = 0x1263c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)8192);
    // 0x1263c8: 0x15ed000b  bne         $t7, $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x1263C8u;
    {
        const bool branch_taken_0x1263c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        ctx->pc = 0x1263CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263C8u;
            // 0x1263cc: 0x2dd20001  sltiu       $s2, $t6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263c8) {
            ctx->pc = 0x1263F8u;
            goto label_1263f8;
        }
    }
    ctx->pc = 0x1263D0u;
    // 0x1263d0: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x1263d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x1263d4: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x1263d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1263d8: 0x25ef9a40  addiu       $t7, $t7, -0x65C0
    ctx->pc = 0x1263d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941248));
    // 0x1263dc: 0x15cf0007  bne         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1263DCu;
    {
        const bool branch_taken_0x1263dc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1263E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263DCu;
            // 0x1263e0: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263dc) {
            ctx->pc = 0x1263FCu;
            goto label_1263fc;
        }
    }
    ctx->pc = 0x1263E4u;
    // 0x1263e4: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1263e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1263e8: 0x35ef0400  ori         $t7, $t7, 0x400
    ctx->pc = 0x1263e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1024);
    // 0x1263ec: 0x0  nop
    ctx->pc = 0x1263ecu;
    // NOP
label_1263f0:
    // 0x1263f0: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1263F0u;
    {
        const bool branch_taken_0x1263f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263F0u;
            // 0x1263f4: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263f0) {
            ctx->pc = 0x12633Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12633c;
        }
    }
    ctx->pc = 0x1263F8u;
label_1263f8:
    // 0x1263f8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1263f8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1263fc:
    // 0x1263fc: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1263FCu;
    {
        const bool branch_taken_0x1263fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263FCu;
            // 0x126400: 0x35ef0800  ori         $t7, $t7, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263fc) {
            ctx->pc = 0x1263F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1263f0;
        }
    }
    ctx->pc = 0x126404u;
    // 0x126404: 0x0  nop
    ctx->pc = 0x126404u;
    // NOP
    ctx->pc = 0x126408u;
}
