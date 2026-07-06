#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1380
// Address: 0x2c1380 - 0x2c1530
void sub_002C1380_0x2c1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1380_0x2c1380");
#endif

    switch (ctx->pc) {
        case 0x2c13a4u: goto label_2c13a4;
        case 0x2c13d8u: goto label_2c13d8;
        case 0x2c13f0u: goto label_2c13f0;
        case 0x2c1428u: goto label_2c1428;
        case 0x2c1440u: goto label_2c1440;
        case 0x2c145cu: goto label_2c145c;
        case 0x2c1478u: goto label_2c1478;
        case 0x2c14a8u: goto label_2c14a8;
        case 0x2c14b8u: goto label_2c14b8;
        case 0x2c14e4u: goto label_2c14e4;
        case 0x2c14f4u: goto label_2c14f4;
        case 0x2c150cu: goto label_2c150c;
        case 0x2c1528u: goto label_2c1528;
        default: break;
    }

    ctx->pc = 0x2c1380u;

    // 0x2c1380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1384: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c1384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c1388: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2c1388u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2c138c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c1390: 0x8e047e60  lw          $a0, 0x7E60($s0)
    ctx->pc = 0x2c1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32352)));
    // 0x2c1394: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1394u;
    {
        const bool branch_taken_0x2c1394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1394u;
            // 0x2c1398: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1394) {
            ctx->pc = 0x2C13B0u;
            goto label_2c13b0;
        }
    }
    ctx->pc = 0x2C139Cu;
    // 0x2c139c: 0xc0af0a6  jal         func_2BC298
    ctx->pc = 0x2C139Cu;
    SET_GPR_U32(ctx, 31, 0x2C13A4u);
    ctx->pc = 0x2C13A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C139Cu;
            // 0x2c13a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC298u;
    if (runtime->hasFunction(0x2BC298u)) {
        auto targetFn = runtime->lookupFunction(0x2BC298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13A4u; }
        if (ctx->pc != 0x2C13A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC298_0x2bc298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C13A4u; }
        if (ctx->pc != 0x2C13A4u) { return; }
    }
    ctx->pc = 0x2C13A4u;
label_2c13a4:
    // 0x2c13a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c13a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C13A8u;
    {
        const bool branch_taken_0x2c13a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2C13ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13A8u;
            // 0x2c13ac: 0x8e027e60  lw          $v0, 0x7E60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13a8) {
            ctx->pc = 0x2C13B8u;
            goto label_2c13b8;
        }
    }
    ctx->pc = 0x2C13B0u;
label_2c13b0:
    // 0x2c13b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C13B0u;
    {
        const bool branch_taken_0x2c13b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C13B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13B0u;
            // 0x2c13b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c13b0) {
            ctx->pc = 0x2C13C8u;
            goto label_2c13c8;
        }
    }
    ctx->pc = 0x2C13B8u;
label_2c13b8:
    // 0x2c13b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c13bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c13c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c13c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c13c8:
    // 0x2c13c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c13c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c13cc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c13ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c13d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C13D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C13D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13D0u;
            // 0x2c13d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C13D8u;
label_2c13d8:
    // 0x2c13d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c13dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c13e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c13e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c13e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c13e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C13E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C13ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C13E8u;
            // 0x2c13ec: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C13F0u;
label_2c13f0:
    // 0x2c13f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c13f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c13f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c13f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c13f8: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2c13f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2c13fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c13fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c1400: 0x8e427e60  lw          $v0, 0x7E60($s2)
    ctx->pc = 0x2c1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32352)));
    // 0x2c1404: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1408: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C1408u;
    {
        const bool branch_taken_0x2c1408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1408u;
            // 0x2c140c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1408) {
            ctx->pc = 0x2C1460u;
            goto label_2c1460;
        }
    }
    ctx->pc = 0x2C1410u;
    // 0x2c1410: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1414: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C1414u;
    {
        const bool branch_taken_0x2c1414 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C1418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1414u;
            // 0x2c1418: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1414) {
            ctx->pc = 0x2C1454u;
            goto label_2c1454;
        }
    }
    ctx->pc = 0x2C141Cu;
    // 0x2c141c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2c141cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1420: 0x8e247e60  lw          $a0, 0x7E60($s1)
    ctx->pc = 0x2c1420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32352)));
    // 0x2c1424: 0x0  nop
    ctx->pc = 0x2c1424u;
    // NOP
label_2c1428:
    // 0x2c1428: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2c1428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c142c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c142cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c1430: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c1434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c1434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1438: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2C1438u;
    SET_GPR_U32(ctx, 31, 0x2C1440u);
    ctx->pc = 0x2C143Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1438u;
            // 0x2c143c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1440u; }
        if (ctx->pc != 0x2C1440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1440u; }
        if (ctx->pc != 0x2C1440u) { return; }
    }
    ctx->pc = 0x2C1440u;
label_2c1440:
    // 0x2c1440: 0x8e237e60  lw          $v1, 0x7E60($s1)
    ctx->pc = 0x2c1440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32352)));
    // 0x2c1444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1448: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c1448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c144c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C144Cu;
    {
        const bool branch_taken_0x2c144c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C144Cu;
            // 0x2c1450: 0x8e247e60  lw          $a0, 0x7E60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c144c) {
            ctx->pc = 0x2C1428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1428;
        }
    }
    ctx->pc = 0x2C1454u;
label_2c1454:
    // 0x2c1454: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x2C1454u;
    SET_GPR_U32(ctx, 31, 0x2C145Cu);
    ctx->pc = 0x2C1458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1454u;
            // 0x2c1458: 0x8e447e60  lw          $a0, 0x7E60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C145Cu; }
        if (ctx->pc != 0x2C145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C145Cu; }
        if (ctx->pc != 0x2C145Cu) { return; }
    }
    ctx->pc = 0x2C145Cu;
label_2c145c:
    // 0x2c145c: 0xae407e60  sw          $zero, 0x7E60($s2)
    ctx->pc = 0x2c145cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32352), GPR_U32(ctx, 0));
label_2c1460:
    // 0x2c1460: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1464: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1468: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c146c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c146cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1470: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1470u;
            // 0x2c1474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1478u;
label_2c1478:
    // 0x2c1478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c147c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c1480: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x2c1480u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x2c1484: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1488: 0x8e427e60  lw          $v0, 0x7E60($s2)
    ctx->pc = 0x2c1488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32352)));
    // 0x2c148c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c148cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1490: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c1490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c1494: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1494u;
    {
        const bool branch_taken_0x2c1494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1494u;
            // 0x2c1498: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1494) {
            ctx->pc = 0x2C14B0u;
            goto label_2c14b0;
        }
    }
    ctx->pc = 0x2C149Cu;
    // 0x2c149c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2c149cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2c14a0: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2C14A0u;
    SET_GPR_U32(ctx, 31, 0x2C14A8u);
    ctx->pc = 0x2C14A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14A0u;
            // 0x2c14a4: 0x248413d8  addiu       $a0, $a0, 0x13D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14A8u; }
        if (ctx->pc != 0x2C14A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14A8u; }
        if (ctx->pc != 0x2C14A8u) { return; }
    }
    ctx->pc = 0x2C14A8u;
label_2c14a8:
    // 0x2c14a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C14A8u;
    {
        const bool branch_taken_0x2c14a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C14ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14A8u;
            // 0x2c14ac: 0xae427e60  sw          $v0, 0x7E60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14a8) {
            ctx->pc = 0x2C14F4u;
            goto label_2c14f4;
        }
    }
    ctx->pc = 0x2C14B0u;
label_2c14b0:
    // 0x2c14b0: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C14B0u;
    SET_GPR_U32(ctx, 31, 0x2C14B8u);
    ctx->pc = 0x2C14B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14B0u;
            // 0x2c14b4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14B8u; }
        if (ctx->pc != 0x2C14B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14B8u; }
        if (ctx->pc != 0x2C14B8u) { return; }
    }
    ctx->pc = 0x2C14B8u;
label_2c14b8:
    // 0x2c14b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c14b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c14bc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C14BCu;
    {
        const bool branch_taken_0x2c14bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C14C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14BCu;
            // 0x2c14c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14bc) {
            ctx->pc = 0x2C14F4u;
            goto label_2c14f4;
        }
    }
    ctx->pc = 0x2C14C4u;
    // 0x2c14c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c14c8: 0x8e447e60  lw          $a0, 0x7E60($s2)
    ctx->pc = 0x2c14c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32352)));
    // 0x2c14cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c14d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c14d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2c14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2c14d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c14dc: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2C14DCu;
    SET_GPR_U32(ctx, 31, 0x2C14E4u);
    ctx->pc = 0x2C14E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14DCu;
            // 0x2c14e0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14E4u; }
        if (ctx->pc != 0x2C14E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14E4u; }
        if (ctx->pc != 0x2C14E4u) { return; }
    }
    ctx->pc = 0x2C14E4u;
label_2c14e4:
    // 0x2c14e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C14E4u;
    {
        const bool branch_taken_0x2c14e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C14E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14E4u;
            // 0x2c14e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c14e4) {
            ctx->pc = 0x2C1510u;
            goto label_2c1510;
        }
    }
    ctx->pc = 0x2C14ECu;
    // 0x2c14ec: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2C14ECu;
    SET_GPR_U32(ctx, 31, 0x2C14F4u);
    ctx->pc = 0x2C14F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C14ECu;
            // 0x2c14f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14F4u; }
        if (ctx->pc != 0x2C14F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C14F4u; }
        if (ctx->pc != 0x2C14F4u) { return; }
    }
    ctx->pc = 0x2C14F4u;
label_2c14f4:
    // 0x2c14f4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c14f8: 0x240500da  addiu       $a1, $zero, 0xDA
    ctx->pc = 0x2c14f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x2c14fc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c14fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c1500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c1500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1504: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C1504u;
    SET_GPR_U32(ctx, 31, 0x2C150Cu);
    ctx->pc = 0x2C1508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1504u;
            // 0x2c1508: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C150Cu; }
        if (ctx->pc != 0x2C150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C150Cu; }
        if (ctx->pc != 0x2C150Cu) { return; }
    }
    ctx->pc = 0x2C150Cu;
label_2c150c:
    // 0x2c150c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c150cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1510:
    // 0x2c1510: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1518: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c151c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c151cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1520: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1520u;
            // 0x2c1524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1528u;
label_2c1528:
    // 0x2c1528: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C152Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1528u;
            // 0x2c152c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1530u;
    ctx->pc = 0x2c1530u;
}
