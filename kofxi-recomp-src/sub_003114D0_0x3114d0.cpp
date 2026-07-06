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

// Function: sub_003114D0
// Address: 0x3114d0 - 0x311a40
void sub_003114D0_0x3114d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003114D0_0x3114d0");
#endif

    switch (ctx->pc) {
        case 0x311534u: goto label_311534;
        case 0x311548u: goto label_311548;
        case 0x3117a0u: goto label_3117a0;
        case 0x3117f4u: goto label_3117f4;
        case 0x311800u: goto label_311800;
        case 0x3118b0u: goto label_3118b0;
        case 0x3118b8u: goto label_3118b8;
        default: break;
    }

    ctx->pc = 0x3114d0u;

    // 0x3114d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3114d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3114d4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3114d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3114d8: 0x9042f35c  lbu         $v0, -0xCA4($v0)
    ctx->pc = 0x3114d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964060)));
    // 0x3114dc: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x3114DCu;
    {
        const bool branch_taken_0x3114dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3114dc) {
            ctx->pc = 0x3116D0u;
            goto label_3116d0;
        }
    }
    ctx->pc = 0x3114E4u;
    // 0x3114e4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3114e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3114e8: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x3114e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x3114ec: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3114ECu;
    {
        const bool branch_taken_0x3114ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3114ec) {
            ctx->pc = 0x311670u;
            goto label_311670;
        }
    }
    ctx->pc = 0x3114F4u;
    // 0x3114f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3114f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3114f8: 0xa7a00026  sh          $zero, 0x26($sp)
    ctx->pc = 0x3114f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x3114fc: 0x9044daa0  lbu         $a0, -0x2560($v0)
    ctx->pc = 0x3114fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x311500: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x311500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311504: 0xa7a00024  sh          $zero, 0x24($sp)
    ctx->pc = 0x311504u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x311508: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x311508u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x31150c: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x31150cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x311510: 0xa7a0001e  sh          $zero, 0x1E($sp)
    ctx->pc = 0x311510u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x311514: 0xa7a0001c  sh          $zero, 0x1C($sp)
    ctx->pc = 0x311514u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x311518: 0xa7a0001a  sh          $zero, 0x1A($sp)
    ctx->pc = 0x311518u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x31151c: 0x18800022  blez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x31151Cu;
    {
        const bool branch_taken_0x31151c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x311520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31151Cu;
        // 0x311520: 0xa7a00018  sh          $zero, 0x18($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31151c) {
            ctx->pc = 0x3115A8u;
            goto label_3115a8;
        }
    }
    ctx->pc = 0x311524u;
    // 0x311524: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x311524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x311528: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x311528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31152c: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x31152cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
    // 0x311530: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x311530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_311534:
    // 0x311534: 0x91020005  lbu         $v0, 0x5($t0)
    ctx->pc = 0x311534u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x311538: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x311538u;
    {
        const bool branch_taken_0x311538 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311538u;
        // 0x31153c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311538) {
            ctx->pc = 0x311590u;
            goto label_311590;
        }
    }
    ctx->pc = 0x311540u;
    // 0x311540: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x311540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311544: 0x0  nop
    ctx->pc = 0x311544u;
    // NOP
label_311548:
    // 0x311548: 0x84a30154  lh          $v1, 0x154($a1)
    ctx->pc = 0x311548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 340)));
    // 0x31154c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31154Cu;
    {
        const bool branch_taken_0x31154c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31154c) {
            ctx->pc = 0x311568u;
            goto label_311568;
        }
    }
    ctx->pc = 0x311554u;
    // 0x311554: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x311554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x311558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31155c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31155Cu;
    {
        const bool branch_taken_0x31155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31155Cu;
        // 0x311560: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31155c) {
            ctx->pc = 0x311578u;
            goto label_311578;
        }
    }
    ctx->pc = 0x311564u;
    // 0x311564: 0x0  nop
    ctx->pc = 0x311564u;
    // NOP
label_311568:
    // 0x311568: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x311568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31156c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x311570: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x311570u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x311574: 0x0  nop
    ctx->pc = 0x311574u;
    // NOP
label_311578:
    // 0x311578: 0x91020005  lbu         $v0, 0x5($t0)
    ctx->pc = 0x311578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x31157c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31157cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x311580: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x311580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x311584: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x311584u;
    {
        const bool branch_taken_0x311584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311584u;
        // 0x311588: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311584) {
            ctx->pc = 0x311548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311548;
        }
    }
    ctx->pc = 0x31158Cu;
    // 0x31158c: 0x0  nop
    ctx->pc = 0x31158cu;
    // NOP
label_311590:
    // 0x311590: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x311590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x311594: 0x144102a  slt         $v0, $t2, $a0
    ctx->pc = 0x311594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x311598: 0x25080248  addiu       $t0, $t0, 0x248
    ctx->pc = 0x311598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 584));
    // 0x31159c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x31159cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3115a0: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3115A0u;
    {
        const bool branch_taken_0x3115a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3115A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115A0u;
        // 0x3115a4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115a0) {
            ctx->pc = 0x311534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311534;
        }
    }
    ctx->pc = 0x3115A8u;
label_3115a8:
    // 0x3115a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3115a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3115ac: 0x9045db55  lbu         $a1, -0x24AB($v0)
    ctx->pc = 0x3115acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x3115b0: 0x87a40018  lh          $a0, 0x18($sp)
    ctx->pc = 0x3115b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3115b4: 0x14850008  bne         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3115B4u;
    {
        const bool branch_taken_0x3115b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3115b4) {
            ctx->pc = 0x3115D8u;
            goto label_3115d8;
        }
    }
    ctx->pc = 0x3115BCu;
    // 0x3115bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3115bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3115c0: 0x87a3001a  lh          $v1, 0x1A($sp)
    ctx->pc = 0x3115c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x3115c4: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x3115c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x3115c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3115C8u;
    {
        const bool branch_taken_0x3115c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3115c8) {
            ctx->pc = 0x3115D8u;
            goto label_3115d8;
        }
    }
    ctx->pc = 0x3115D0u;
    // 0x3115d0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x3115D0u;
    {
        const bool branch_taken_0x3115d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3115D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115D0u;
        // 0x3115d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115d0) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3115D8u;
label_3115d8:
    // 0x3115d8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3115D8u;
    {
        const bool branch_taken_0x3115d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3115d8) {
            ctx->pc = 0x3115E8u;
            goto label_3115e8;
        }
    }
    ctx->pc = 0x3115E0u;
    // 0x3115e0: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x3115E0u;
    {
        const bool branch_taken_0x3115e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115E0u;
        // 0x3115e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115e0) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3115E8u;
label_3115e8:
    // 0x3115e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3115e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3115ec: 0x87a3001a  lh          $v1, 0x1A($sp)
    ctx->pc = 0x3115ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x3115f0: 0x9044dd9d  lbu         $a0, -0x2263($v0)
    ctx->pc = 0x3115f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x3115f4: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3115F4u;
    {
        const bool branch_taken_0x3115f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3115f4) {
            ctx->pc = 0x3115F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3115F4u;
            // 0x3115f8: 0xa4082a  slt         $at, $a1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311604u;
            goto label_311604;
        }
    }
    ctx->pc = 0x3115FCu;
    // 0x3115fc: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x3115FCu;
    {
        const bool branch_taken_0x3115fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3115FCu;
        // 0x311600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3115fc) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311604u;
label_311604:
    // 0x311604: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x311604u;
    {
        const bool branch_taken_0x311604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311604) {
            ctx->pc = 0x311608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311604u;
            // 0x311608: 0x85082a  slt         $at, $a0, $a1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311624u;
            goto label_311624;
        }
    }
    ctx->pc = 0x31160Cu;
    // 0x31160c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x31160cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311610: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311610u;
    {
        const bool branch_taken_0x311610 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x311610) {
            ctx->pc = 0x311620u;
            goto label_311620;
        }
    }
    ctx->pc = 0x311618u;
    // 0x311618: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x311618u;
    {
        const bool branch_taken_0x311618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311618u;
        // 0x31161c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311618) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311620u;
label_311620:
    // 0x311620: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x311620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_311624:
    // 0x311624: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x311624u;
    {
        const bool branch_taken_0x311624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311624) {
            ctx->pc = 0x311628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311624u;
            // 0x311628: 0x87a30022  lh          $v1, 0x22($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311644u;
            goto label_311644;
        }
    }
    ctx->pc = 0x31162Cu;
    // 0x31162c: 0x87a20022  lh          $v0, 0x22($sp)
    ctx->pc = 0x31162cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x311630: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311630u;
    {
        const bool branch_taken_0x311630 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x311630) {
            ctx->pc = 0x311640u;
            goto label_311640;
        }
    }
    ctx->pc = 0x311638u;
    // 0x311638: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x311638u;
    {
        const bool branch_taken_0x311638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311638u;
        // 0x31163c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311638) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311640u;
label_311640:
    // 0x311640: 0x87a30022  lh          $v1, 0x22($sp)
    ctx->pc = 0x311640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
label_311644:
    // 0x311644: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x311644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311648: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x311648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31164c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31164Cu;
    {
        const bool branch_taken_0x31164c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31164c) {
            ctx->pc = 0x311650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31164Cu;
            // 0x311650: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31165Cu;
            goto label_31165c;
        }
    }
    ctx->pc = 0x311654u;
    // 0x311654: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x311654u;
    {
        const bool branch_taken_0x311654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311654u;
        // 0x311658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311654) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x31165Cu;
label_31165c:
    // 0x31165c: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31165Cu;
    {
        const bool branch_taken_0x31165c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31165c) {
            ctx->pc = 0x311660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31165Cu;
            // 0x311660: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311668u;
            goto label_311668;
        }
    }
    ctx->pc = 0x311664u;
    // 0x311664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311668:
    // 0x311668: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x311668u;
    {
        const bool branch_taken_0x311668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311668u;
        // 0x31166c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311668) {
            ctx->pc = 0x311A34u;
            goto label_311a34;
        }
    }
    ctx->pc = 0x311670u;
label_311670:
    // 0x311670: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x311670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x311674: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x311674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x311678: 0x9045ddc0  lbu         $a1, -0x2240($v0)
    ctx->pc = 0x311678u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958528)));
    // 0x31167c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x31167cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x311680: 0x9063db78  lbu         $v1, -0x2488($v1)
    ctx->pc = 0x311680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957944)));
    // 0x311684: 0x2484deec  addiu       $a0, $a0, -0x2114
    ctx->pc = 0x311684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958828));
    // 0x311688: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x311688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31168c: 0x2442dca4  addiu       $v0, $v0, -0x235C
    ctx->pc = 0x31168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958244));
    // 0x311690: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x311690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x311694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311698: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x311698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31169c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x31169cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3116a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3116a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3116a4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3116a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3116a8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3116a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3116ac: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3116ACu;
    {
        const bool branch_taken_0x3116ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116ac) {
            ctx->pc = 0x3116B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3116ACu;
            // 0x3116b0: 0x43082a  slt         $at, $v0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3116BCu;
            goto label_3116bc;
        }
    }
    ctx->pc = 0x3116B4u;
    // 0x3116b4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x3116B4u;
    {
        const bool branch_taken_0x3116b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3116B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116B4u;
        // 0x3116b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116b4) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3116BCu;
label_3116bc:
    // 0x3116bc: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3116BCu;
    {
        const bool branch_taken_0x3116bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116bc) {
            ctx->pc = 0x3116C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3116BCu;
            // 0x3116c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3116C8u;
            goto label_3116c8;
        }
    }
    ctx->pc = 0x3116C4u;
    // 0x3116c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3116c8:
    // 0x3116c8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x3116C8u;
    {
        const bool branch_taken_0x3116c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116c8) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3116D0u;
label_3116d0:
    // 0x3116d0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3116d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3116d4: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x3116d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x3116d8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3116D8u;
    {
        const bool branch_taken_0x3116d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3116d8) {
            ctx->pc = 0x311784u;
            goto label_311784;
        }
    }
    ctx->pc = 0x3116E0u;
    // 0x3116e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3116e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3116e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3116e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3116e8: 0x9045ddc0  lbu         $a1, -0x2240($v0)
    ctx->pc = 0x3116e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958528)));
    // 0x3116ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3116ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3116f0: 0x9063db78  lbu         $v1, -0x2488($v1)
    ctx->pc = 0x3116f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957944)));
    // 0x3116f4: 0x2484deec  addiu       $a0, $a0, -0x2114
    ctx->pc = 0x3116f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958828));
    // 0x3116f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3116f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3116fc: 0x2442dca4  addiu       $v0, $v0, -0x235C
    ctx->pc = 0x3116fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958244));
    // 0x311700: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x311700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x311704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x311704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311708: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x311708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x31170c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x311710: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x311710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311714: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x311714u;
    {
        const bool branch_taken_0x311714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x311718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311714u;
        // 0x311718: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311714) {
            ctx->pc = 0x311734u;
            goto label_311734;
        }
    }
    ctx->pc = 0x31171Cu;
    // 0x31171c: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x31171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x311720: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x311720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x311724: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311724u;
    {
        const bool branch_taken_0x311724 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x311724) {
            ctx->pc = 0x311734u;
            goto label_311734;
        }
    }
    ctx->pc = 0x31172Cu;
    // 0x31172c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x31172Cu;
    {
        const bool branch_taken_0x31172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31172Cu;
        // 0x311730: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31172c) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311734u;
label_311734:
    // 0x311734: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311734u;
    {
        const bool branch_taken_0x311734 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x311734) {
            ctx->pc = 0x311738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311734u;
            // 0x311738: 0x4143c  dsll32      $v0, $a0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311744u;
            goto label_311744;
        }
    }
    ctx->pc = 0x31173Cu;
    // 0x31173c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x31173Cu;
    {
        const bool branch_taken_0x31173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31173Cu;
        // 0x311740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31173c) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311744u;
label_311744:
    // 0x311744: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x311744u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x311748: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311748u;
    {
        const bool branch_taken_0x311748 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x311748) {
            ctx->pc = 0x311758u;
            goto label_311758;
        }
    }
    ctx->pc = 0x311750u;
    // 0x311750: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x311750u;
    {
        const bool branch_taken_0x311750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311750u;
        // 0x311754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311750) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311758u;
label_311758:
    // 0x311758: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x311758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31175c: 0x8442d9b8  lh          $v0, -0x2648($v0)
    ctx->pc = 0x31175cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957496)));
    // 0x311760: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311760u;
    {
        const bool branch_taken_0x311760 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x311760) {
            ctx->pc = 0x311770u;
            goto label_311770;
        }
    }
    ctx->pc = 0x311768u;
    // 0x311768: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x311768u;
    {
        const bool branch_taken_0x311768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311768u;
        // 0x31176c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311768) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311770u;
label_311770:
    // 0x311770: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x311770u;
    {
        const bool branch_taken_0x311770 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x311770) {
            ctx->pc = 0x311774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311770u;
            // 0x311774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31177Cu;
            goto label_31177c;
        }
    }
    ctx->pc = 0x311778u;
    // 0x311778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31177c:
    // 0x31177c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x31177Cu;
    {
        const bool branch_taken_0x31177c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31177c) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311784u;
label_311784:
    // 0x311784: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x311784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x311788: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x311788u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x31178c: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31178Cu;
    {
        const bool branch_taken_0x31178c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x311790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31178Cu;
        // 0x311790: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31178c) {
            ctx->pc = 0x3117D0u;
            goto label_3117d0;
        }
    }
    ctx->pc = 0x311794u;
    // 0x311794: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x311794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x311798: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x311798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x31179c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x31179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_3117a0:
    // 0x3117a0: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x3117a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3117a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3117a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3117a8: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x3117a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3117ac: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3117acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3117b0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x3117b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3117b4: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3117b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3117b8: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x3117b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3117bc: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3117bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3117c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3117c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3117c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3117C4u;
    {
        const bool branch_taken_0x3117c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117C4u;
        // 0x3117c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117c4) {
            ctx->pc = 0x3117A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3117a0;
        }
    }
    ctx->pc = 0x3117CCu;
    // 0x3117cc: 0x0  nop
    ctx->pc = 0x3117ccu;
    // NOP
label_3117d0:
    // 0x3117d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3117d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3117d4: 0x9047daa0  lbu         $a3, -0x2560($v0)
    ctx->pc = 0x3117d4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x3117d8: 0x18e0002f  blez        $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x3117D8u;
    {
        const bool branch_taken_0x3117d8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3117DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117D8u;
        // 0x3117dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117d8) {
            ctx->pc = 0x311898u;
            goto label_311898;
        }
    }
    ctx->pc = 0x3117E0u;
    // 0x3117e0: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x3117e0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x3117e4: 0x27ab0008  addiu       $t3, $sp, 0x8
    ctx->pc = 0x3117e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3117e8: 0x258cdb50  addiu       $t4, $t4, -0x24B0
    ctx->pc = 0x3117e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294957904));
    // 0x3117ec: 0x27aa0028  addiu       $t2, $sp, 0x28
    ctx->pc = 0x3117ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x3117f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3117f4:
    // 0x3117f4: 0x91850005  lbu         $a1, 0x5($t4)
    ctx->pc = 0x3117f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x3117f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3117f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3117fc: 0x0  nop
    ctx->pc = 0x3117fcu;
    // NOP
label_311800:
    // 0x311800: 0x1881021  addu        $v0, $t4, $t0
    ctx->pc = 0x311800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x311804: 0x90460028  lbu         $a2, 0x28($v0)
    ctx->pc = 0x311804u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x311808: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x311808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31180c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x31180cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x311810: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x311810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x311814: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x311814u;
    {
        const bool branch_taken_0x311814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x311818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311814u;
        // 0x311818: 0x8c420078  lw          $v0, 0x78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311814) {
            ctx->pc = 0x311868u;
            goto label_311868;
        }
    }
    ctx->pc = 0x31181Cu;
    // 0x31181c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31181Cu;
    {
        const bool branch_taken_0x31181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31181c) {
            ctx->pc = 0x311858u;
            goto label_311858;
        }
    }
    ctx->pc = 0x311824u;
    // 0x311824: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x311824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x311828: 0x1682021  addu        $a0, $t3, $t0
    ctx->pc = 0x311828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x31182c: 0x904204f0  lbu         $v0, 0x4F0($v0)
    ctx->pc = 0x31182cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1264)));
    // 0x311830: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x311830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x311834: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x311834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x311838: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x311838u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31183c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x31183Cu;
    {
        const bool branch_taken_0x31183c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31183c) {
            ctx->pc = 0x311870u;
            goto label_311870;
        }
    }
    ctx->pc = 0x311844u;
    // 0x311844: 0x91820001  lbu         $v0, 0x1($t4)
    ctx->pc = 0x311844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x311848: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x311848u;
    {
        const bool branch_taken_0x311848 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x311848) {
            ctx->pc = 0x311870u;
            goto label_311870;
        }
    }
    ctx->pc = 0x311850u;
    // 0x311850: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x311850u;
    {
        const bool branch_taken_0x311850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311850u;
        // 0x311854: 0xa1440000  sb          $a0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311850) {
            ctx->pc = 0x311870u;
            goto label_311870;
        }
    }
    ctx->pc = 0x311858u;
label_311858:
    // 0x311858: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x311858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x31185c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31185Cu;
    {
        const bool branch_taken_0x31185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31185Cu;
        // 0x311860: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31185c) {
            ctx->pc = 0x311870u;
            goto label_311870;
        }
    }
    ctx->pc = 0x311864u;
    // 0x311864: 0x0  nop
    ctx->pc = 0x311864u;
    // NOP
label_311868:
    // 0x311868: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x311868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x31186c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x31186cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_311870:
    // 0x311870: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x311870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x311874: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x311874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x311878: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x311878u;
    {
        const bool branch_taken_0x311878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311878) {
            ctx->pc = 0x311800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311800;
        }
    }
    ctx->pc = 0x311880u;
    // 0x311880: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x311880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x311884: 0x258c0248  addiu       $t4, $t4, 0x248
    ctx->pc = 0x311884u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 584));
    // 0x311888: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x311888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31188c: 0x256b0003  addiu       $t3, $t3, 0x3
    ctx->pc = 0x31188cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x311890: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x311890u;
    {
        const bool branch_taken_0x311890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311890u;
        // 0x311894: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311890) {
            ctx->pc = 0x3117F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3117f4;
        }
    }
    ctx->pc = 0x311898u;
label_311898:
    // 0x311898: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x311898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31189c: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x31189cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x3118a0: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3118A0u;
    {
        const bool branch_taken_0x3118a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3118A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118A0u;
        // 0x3118a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118a0) {
            ctx->pc = 0x311900u;
            goto label_311900;
        }
    }
    ctx->pc = 0x3118A8u;
    // 0x3118a8: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x3118a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3118ac: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x3118acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3118b0:
    // 0x3118b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3118b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3118b4: 0x0  nop
    ctx->pc = 0x3118b4u;
    // NOP
label_3118b8:
    // 0x3118b8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3118b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3118bc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3118bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3118c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3118C0u;
    {
        const bool branch_taken_0x3118c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3118c0) {
            ctx->pc = 0x3118D8u;
            goto label_3118d8;
        }
    }
    ctx->pc = 0x3118C8u;
    // 0x3118c8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3118c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3118cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3118ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3118d0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3118d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3118d4: 0x0  nop
    ctx->pc = 0x3118d4u;
    // NOP
label_3118d8:
    // 0x3118d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3118d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3118dc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3118dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3118e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3118E0u;
    {
        const bool branch_taken_0x3118e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3118e0) {
            ctx->pc = 0x3118B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3118b8;
        }
    }
    ctx->pc = 0x3118E8u;
    // 0x3118e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3118e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3118ec: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x3118ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3118f0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3118f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3118f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3118F4u;
    {
        const bool branch_taken_0x3118f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3118F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118F4u;
        // 0x3118f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118f4) {
            ctx->pc = 0x3118B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3118b0;
        }
    }
    ctx->pc = 0x3118FCu;
    // 0x3118fc: 0x0  nop
    ctx->pc = 0x3118fcu;
    // NOP
label_311900:
    // 0x311900: 0x93a3002d  lbu         $v1, 0x2D($sp)
    ctx->pc = 0x311900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x311904: 0x93a2002c  lbu         $v0, 0x2C($sp)
    ctx->pc = 0x311904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x311908: 0x50430033  beql        $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x311908u;
    {
        const bool branch_taken_0x311908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x311908) {
            ctx->pc = 0x31190Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311908u;
            // 0x31190c: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3119D8u;
            goto label_3119d8;
        }
    }
    ctx->pc = 0x311910u;
    // 0x311910: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x311910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x311914: 0x50200019  beql        $at, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x311914u;
    {
        const bool branch_taken_0x311914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x311914) {
            ctx->pc = 0x311918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311914u;
            // 0x311918: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31197Cu;
            goto label_31197c;
        }
    }
    ctx->pc = 0x31191Cu;
    // 0x31191c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x31191cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x311920: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311920u;
    {
        const bool branch_taken_0x311920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311920) {
            ctx->pc = 0x311930u;
            goto label_311930;
        }
    }
    ctx->pc = 0x311928u;
    // 0x311928: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x311928u;
    {
        const bool branch_taken_0x311928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311928u;
        // 0x31192c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311928) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311930u;
label_311930:
    // 0x311930: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x311930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x311934: 0x8442d9b8  lh          $v0, -0x2648($v0)
    ctx->pc = 0x311934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957496)));
    // 0x311938: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x311938u;
    {
        const bool branch_taken_0x311938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311938) {
            ctx->pc = 0x311958u;
            goto label_311958;
        }
    }
    ctx->pc = 0x311940u;
    // 0x311940: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x311940u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x311944: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x311944u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x311948: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x311948u;
    {
        const bool branch_taken_0x311948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311948) {
            ctx->pc = 0x31194Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311948u;
            // 0x31194c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311950u;
    // 0x311950: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x311950u;
    {
        const bool branch_taken_0x311950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311950u;
        // 0x311954: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311950) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311958u;
label_311958:
    // 0x311958: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311958u;
    {
        const bool branch_taken_0x311958 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x311958) {
            ctx->pc = 0x311968u;
            goto label_311968;
        }
    }
    ctx->pc = 0x311960u;
    // 0x311960: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x311960u;
    {
        const bool branch_taken_0x311960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311960u;
        // 0x311964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311960) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311968u;
label_311968:
    // 0x311968: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x311968u;
    {
        const bool branch_taken_0x311968 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x311968) {
            ctx->pc = 0x31196Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311968u;
            // 0x31196c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311974u;
            goto label_311974;
        }
    }
    ctx->pc = 0x311970u;
    // 0x311970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311974:
    // 0x311974: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x311974u;
    {
        const bool branch_taken_0x311974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311974) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x31197Cu;
label_31197c:
    // 0x31197c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31197Cu;
    {
        const bool branch_taken_0x31197c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31197c) {
            ctx->pc = 0x31198Cu;
            goto label_31198c;
        }
    }
    ctx->pc = 0x311984u;
    // 0x311984: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x311984u;
    {
        const bool branch_taken_0x311984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311984u;
        // 0x311988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311984) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x31198Cu;
label_31198c:
    // 0x31198c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31198cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x311990: 0x8442d9b8  lh          $v0, -0x2648($v0)
    ctx->pc = 0x311990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957496)));
    // 0x311994: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x311994u;
    {
        const bool branch_taken_0x311994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311994) {
            ctx->pc = 0x3119B4u;
            goto label_3119b4;
        }
    }
    ctx->pc = 0x31199Cu;
    // 0x31199c: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x31199cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3119a0: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x3119a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x3119a4: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3119A4u;
    {
        const bool branch_taken_0x3119a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3119a4) {
            ctx->pc = 0x3119A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3119A4u;
            // 0x3119a8: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3119ACu;
    // 0x3119ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3119ACu;
    {
        const bool branch_taken_0x3119ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119ACu;
        // 0x3119b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119ac) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3119B4u;
label_3119b4:
    // 0x3119b4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3119B4u;
    {
        const bool branch_taken_0x3119b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3119b4) {
            ctx->pc = 0x3119C4u;
            goto label_3119c4;
        }
    }
    ctx->pc = 0x3119BCu;
    // 0x3119bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3119BCu;
    {
        const bool branch_taken_0x3119bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119BCu;
        // 0x3119c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119bc) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3119C4u;
label_3119c4:
    // 0x3119c4: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3119C4u;
    {
        const bool branch_taken_0x3119c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3119c4) {
            ctx->pc = 0x3119C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3119C4u;
            // 0x3119c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3119D0u;
            goto label_3119d0;
        }
    }
    ctx->pc = 0x3119CCu;
    // 0x3119cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3119ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3119d0:
    // 0x3119d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3119D0u;
    {
        const bool branch_taken_0x3119d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3119d0) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3119D8u;
label_3119d8:
    // 0x3119d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3119D8u;
    {
        const bool branch_taken_0x3119d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3119d8) {
            ctx->pc = 0x3119E8u;
            goto label_3119e8;
        }
    }
    ctx->pc = 0x3119E0u;
    // 0x3119e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3119E0u;
    {
        const bool branch_taken_0x3119e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119E0u;
        // 0x3119e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119e0) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x3119E8u;
label_3119e8:
    // 0x3119e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3119e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3119ec: 0x8442d9b8  lh          $v0, -0x2648($v0)
    ctx->pc = 0x3119ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957496)));
    // 0x3119f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3119F0u;
    {
        const bool branch_taken_0x3119f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3119f0) {
            ctx->pc = 0x311A10u;
            goto label_311a10;
        }
    }
    ctx->pc = 0x3119F8u;
    // 0x3119f8: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x3119f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3119fc: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x3119fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x311a00: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311A00u;
    {
        const bool branch_taken_0x311a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311a00) {
            ctx->pc = 0x311A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311A00u;
            // 0x311a04: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311A08u;
    // 0x311a08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x311A08u;
    {
        const bool branch_taken_0x311a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A08u;
        // 0x311a0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a08) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311A10u;
label_311a10:
    // 0x311a10: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311A10u;
    {
        const bool branch_taken_0x311a10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x311a10) {
            ctx->pc = 0x311A20u;
            goto label_311a20;
        }
    }
    ctx->pc = 0x311A18u;
    // 0x311a18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x311A18u;
    {
        const bool branch_taken_0x311a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A18u;
        // 0x311a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a18) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311A20u;
label_311a20:
    // 0x311a20: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311A20u;
    {
        const bool branch_taken_0x311a20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x311a20) {
            ctx->pc = 0x311A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311A20u;
            // 0x311a24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311A28u;
    // 0x311a28: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x311A28u;
    {
        const bool branch_taken_0x311a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A28u;
        // 0x311a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a28) {
            ctx->pc = 0x311A30u;
            goto label_311a30;
        }
    }
    ctx->pc = 0x311A30u;
label_311a30:
    // 0x311a30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x311a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_311a34:
    // 0x311a34: 0x3e00008  jr          $ra
    ctx->pc = 0x311A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311A3Cu;
    // 0x311a3c: 0x0  nop
    ctx->pc = 0x311a3cu;
    // NOP
}
