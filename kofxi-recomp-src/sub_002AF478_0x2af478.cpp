#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AF478
// Address: 0x2af478 - 0x2af610
void sub_002AF478_0x2af478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF478_0x2af478");
#endif

    switch (ctx->pc) {
        case 0x2af49cu: goto label_2af49c;
        case 0x2af4b8u: goto label_2af4b8;
        case 0x2af4d8u: goto label_2af4d8;
        case 0x2af4fcu: goto label_2af4fc;
        case 0x2af524u: goto label_2af524;
        case 0x2af558u: goto label_2af558;
        case 0x2af5a4u: goto label_2af5a4;
        case 0x2af5ecu: goto label_2af5ec;
        default: break;
    }

    ctx->pc = 0x2af478u;

label_2af478:
    // 0x2af478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2af478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2af47c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2af47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2af480: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2af480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2af484: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2af484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af48c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2af48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af490: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2af490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2af494: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x2AF494u;
    SET_GPR_U32(ctx, 31, 0x2AF49Cu);
    ctx->pc = 0x2AF498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF494u;
            // 0x2af498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF49Cu; }
        if (ctx->pc != 0x2AF49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF49Cu; }
        if (ctx->pc != 0x2AF49Cu) { return; }
    }
    ctx->pc = 0x2AF49Cu;
label_2af49c:
    // 0x2af49c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2af49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2af4a0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2af4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af4a4: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x2af4a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF4A8u;
    {
        const bool branch_taken_0x2af4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF4A8u;
            // 0x2af4ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4a8) {
            ctx->pc = 0x2AF4C0u;
            goto label_2af4c0;
        }
    }
    ctx->pc = 0x2AF4B0u;
    // 0x2af4b0: 0xc0abd9e  jal         func_2AF678
    ctx->pc = 0x2AF4B0u;
    SET_GPR_U32(ctx, 31, 0x2AF4B8u);
    ctx->pc = 0x2AF4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF4B0u;
            // 0x2af4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AF678u;
    if (runtime->hasFunction(0x2AF678u)) {
        auto targetFn = runtime->lookupFunction(0x2AF678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF4B8u; }
        if (ctx->pc != 0x2AF4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF678_0x2af678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF4B8u; }
        if (ctx->pc != 0x2AF4B8u) { return; }
    }
    ctx->pc = 0x2AF4B8u;
label_2af4b8:
    // 0x2af4b8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2af4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2af4c0:
    // 0x2af4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4c4: 0xac620120  sw          $v0, 0x120($v1)
    ctx->pc = 0x2af4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 2));
    // 0x2af4c8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2af4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2af4cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2af4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4d0: 0xc0ad948  jal         func_2B6520
    ctx->pc = 0x2AF4D0u;
    SET_GPR_U32(ctx, 31, 0x2AF4D8u);
    ctx->pc = 0x2AF4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF4D0u;
            // 0x2af4d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6520u;
    if (runtime->hasFunction(0x2B6520u)) {
        auto targetFn = runtime->lookupFunction(0x2B6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF4D8u; }
        if (ctx->pc != 0x2AF4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6520_0x2b6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF4D8u; }
        if (ctx->pc != 0x2AF4D8u) { return; }
    }
    ctx->pc = 0x2AF4D8u;
label_2af4d8:
    // 0x2af4d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af4dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2af4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af4e0: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AF4E0u;
    {
        const bool branch_taken_0x2af4e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF4E0u;
            // 0x2af4e4: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af4e0) {
            ctx->pc = 0x2AF538u;
            goto label_2af538;
        }
    }
    ctx->pc = 0x2AF4E8u;
    // 0x2af4e8: 0x8c620120  lw          $v0, 0x120($v1)
    ctx->pc = 0x2af4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x2af4ec: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AF4ECu;
    {
        const bool branch_taken_0x2af4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af4ec) {
            ctx->pc = 0x2AF4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF4ECu;
            // 0x2af4f0: 0xac600120  sw          $zero, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AF53Cu;
            goto label_2af53c;
        }
    }
    ctx->pc = 0x2AF4F4u;
    // 0x2af4f4: 0xc0a56c0  jal         func_295B00
    ctx->pc = 0x2AF4F4u;
    SET_GPR_U32(ctx, 31, 0x2AF4FCu);
    ctx->pc = 0x295B00u;
    if (runtime->hasFunction(0x295B00u)) {
        auto targetFn = runtime->lookupFunction(0x295B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF4FCu; }
        if (ctx->pc != 0x2AF4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295B00_0x295b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF4FCu; }
        if (ctx->pc != 0x2AF4FCu) { return; }
    }
    ctx->pc = 0x2AF4FCu;
label_2af4fc:
    // 0x2af4fc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2af4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2af500: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2af500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af504: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2af504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af50c: 0xac600120  sw          $zero, 0x120($v1)
    ctx->pc = 0x2af50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
    // 0x2af510: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2af510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2af514: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2af514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2af518: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af51c: 0xc0ad948  jal         func_2B6520
    ctx->pc = 0x2AF51Cu;
    SET_GPR_U32(ctx, 31, 0x2AF524u);
    ctx->pc = 0x2AF520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF51Cu;
            // 0x2af520: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6520u;
    if (runtime->hasFunction(0x2B6520u)) {
        auto targetFn = runtime->lookupFunction(0x2B6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF524u; }
        if (ctx->pc != 0x2AF524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6520_0x2b6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF524u; }
        if (ctx->pc != 0x2AF524u) { return; }
    }
    ctx->pc = 0x2AF524u;
label_2af524:
    // 0x2af524: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2af524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2af528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af52c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2af52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2af530: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF530u;
    {
        const bool branch_taken_0x2af530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF530u;
            // 0x2af534: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af530) {
            ctx->pc = 0x2AF53Cu;
            goto label_2af53c;
        }
    }
    ctx->pc = 0x2AF538u;
label_2af538:
    // 0x2af538: 0xac600120  sw          $zero, 0x120($v1)
    ctx->pc = 0x2af538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 0));
label_2af53c:
    // 0x2af53c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2af53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af540: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2af540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af544: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2af544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af548: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2af548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af550: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF550u;
            // 0x2af554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF558u;
label_2af558:
    // 0x2af558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2af558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2af55c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2af55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2af560: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2af560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2af564: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2af564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af568: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2af568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2af56c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2af56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2af570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af574: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2af574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2af578: 0x245100b4  addiu       $s1, $v0, 0xB4
    ctx->pc = 0x2af578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2af57c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2af57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2af580: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF580u;
    {
        const bool branch_taken_0x2af580 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF580u;
            // 0x2af584: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af580) {
            ctx->pc = 0x2AF598u;
            goto label_2af598;
        }
    }
    ctx->pc = 0x2AF588u;
    // 0x2af588: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x2af588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x2af58c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2af58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2af590: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF590u;
    {
        const bool branch_taken_0x2af590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AF594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF590u;
            // 0x2af594: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af590) {
            ctx->pc = 0x2AF5CCu;
            goto label_2af5cc;
        }
    }
    ctx->pc = 0x2AF598u;
label_2af598:
    // 0x2af598: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2af598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af59c: 0xc0abd1e  jal         func_2AF478
    ctx->pc = 0x2AF59Cu;
    SET_GPR_U32(ctx, 31, 0x2AF5A4u);
    ctx->pc = 0x2AF5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF59Cu;
            // 0x2af5a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AF478u;
    goto label_2af478;
    ctx->pc = 0x2AF5A4u;
label_2af5a4:
    // 0x2af5a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5a8: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AF5A8u;
    {
        const bool branch_taken_0x2af5a8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2AF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF5A8u;
            // 0x2af5ac: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af5a8) {
            ctx->pc = 0x2AF5F0u;
            goto label_2af5f0;
        }
    }
    ctx->pc = 0x2AF5B0u;
    // 0x2af5b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2af5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2af5b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2af5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2af5b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2af5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af5bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2af5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2af5c0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2af5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x2af5c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2af5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2af5c8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2af5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2af5cc:
    // 0x2af5cc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2af5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2af5d0: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x2af5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2af5d4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2af5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2af5d8: 0xc2800b  movn        $s0, $a2, $v0
    ctx->pc = 0x2af5d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x2af5dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2af5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5e0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2af5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af5e4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2AF5E4u;
    SET_GPR_U32(ctx, 31, 0x2AF5ECu);
    ctx->pc = 0x2AF5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF5E4u;
            // 0x2af5e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5ECu; }
        if (ctx->pc != 0x2AF5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF5ECu; }
        if (ctx->pc != 0x2AF5ECu) { return; }
    }
    ctx->pc = 0x2AF5ECu;
label_2af5ec:
    // 0x2af5ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2af5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2af5f0:
    // 0x2af5f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2af5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af5f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2af5f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af5f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2af5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af5fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2af5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af604: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF604u;
            // 0x2af608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF60Cu;
    // 0x2af60c: 0x0  nop
    ctx->pc = 0x2af60cu;
    // NOP
    ctx->pc = 0x2af610u;
}
