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

// Function: sub_001A54F0
// Address: 0x1a54f0 - 0x1a56a0
void sub_001A54F0_0x1a54f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A54F0_0x1a54f0");
#endif

    switch (ctx->pc) {
        case 0x1a5548u: goto label_1a5548;
        case 0x1a55acu: goto label_1a55ac;
        default: break;
    }

    ctx->pc = 0x1a54f0u;

    // 0x1a54f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a54f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a54f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a54f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a54f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a54f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a54fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a54fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5500: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a5500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5508: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a5508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a550c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5510: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x1a5510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x1a5514: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a5514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5518: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a5518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a551c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a551cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5520: 0x2484b8a4  addiu       $a0, $a0, -0x475C
    ctx->pc = 0x1a5520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949028));
    // 0x1a5524: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a5524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a5528: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5528u;
    {
        const bool branch_taken_0x1a5528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5528u;
        // 0x1a552c: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5528) {
            ctx->pc = 0x1A553Cu;
            goto label_1a553c;
        }
    }
    ctx->pc = 0x1A5530u;
    // 0x1a5530: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a5534: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1a5538: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x1a5538u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1a553c:
    // 0x1a553c: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1A553Cu;
    {
        const bool branch_taken_0x1a553c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a553c) {
            ctx->pc = 0x1A5678u;
            goto label_1a5678;
        }
    }
    ctx->pc = 0x1A5544u;
    // 0x1a5544: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a5544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5548:
    // 0x1a5548: 0x54730049  bnel        $v1, $s3, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A5548u;
    {
        const bool branch_taken_0x1a5548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1a5548) {
            ctx->pc = 0x1A554Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5548u;
            // 0x1a554c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5670u;
            goto label_1a5670;
        }
    }
    ctx->pc = 0x1A5550u;
    // 0x1a5550: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a5554: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5554u;
    {
        const bool branch_taken_0x1a5554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a5554) {
            ctx->pc = 0x1A5558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5554u;
            // 0x1a5558: 0x242082b  sltu        $at, $s2, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5564u;
            goto label_1a5564;
        }
    }
    ctx->pc = 0x1A555Cu;
    // 0x1a555c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1A555Cu;
    {
        const bool branch_taken_0x1a555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A555Cu;
        // 0x1a5560: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a555c) {
            ctx->pc = 0x1A5684u;
            goto label_1a5684;
        }
    }
    ctx->pc = 0x1A5564u;
label_1a5564:
    // 0x1a5564: 0x50200022  beql        $at, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A5564u;
    {
        const bool branch_taken_0x1a5564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5564) {
            ctx->pc = 0x1A5568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5564u;
            // 0x1a5568: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A55F0u;
            goto label_1a55f0;
        }
    }
    ctx->pc = 0x1A556Cu;
    // 0x1a556c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a556cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5570: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a5574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5578: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a5578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a557c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A557Cu;
    {
        const bool branch_taken_0x1a557c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a557c) {
            ctx->pc = 0x1A55A4u;
            goto label_1a55a4;
        }
    }
    ctx->pc = 0x1A5584u;
    // 0x1a5584: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a5584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a5588: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1a5588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a558c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1a558cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1a5590: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a5590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5594: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a5594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a5598: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a5598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a559c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A559Cu;
    {
        const bool branch_taken_0x1a559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A559Cu;
        // 0x1a55a0: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a559c) {
            ctx->pc = 0x1A55E4u;
            goto label_1a55e4;
        }
    }
    ctx->pc = 0x1A55A4u;
label_1a55a4:
    // 0x1a55a4: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A55A4u;
    SET_GPR_U32(ctx, 31, 0x1A55ACu);
    ctx->pc = 0x1A49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49D0u, 0x1A55A4u, 0x1A55ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A55ACu;
label_1a55ac:
    // 0x1a55ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a55b0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a55b4: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x1a55b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x1a55b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a55b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a55bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a55c0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a55c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a55c8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a55cc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a55d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a55d4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A55D4u;
    {
        const bool branch_taken_0x1a55d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55d4) {
            ctx->pc = 0x1A55D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A55D4u;
            // 0x1a55d8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A55E4u;
            goto label_1a55e4;
        }
    }
    ctx->pc = 0x1A55DCu;
    // 0x1a55dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a55e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a55e4:
    // 0x1a55e4: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1a55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1a55e8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1A55E8u;
    {
        const bool branch_taken_0x1a55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55E8u;
        // 0x1a55ec: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55e8) {
            ctx->pc = 0x1A5684u;
            goto label_1a5684;
        }
    }
    ctx->pc = 0x1A55F0u;
label_1a55f0:
    // 0x1a55f0: 0x2423023  subu        $a2, $s2, $v0
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a55f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a55f8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a55fc: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A55FCu;
    {
        const bool branch_taken_0x1a55fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55FCu;
        // 0x1a5600: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55fc) {
            ctx->pc = 0x1A5668u;
            goto label_1a5668;
        }
    }
    ctx->pc = 0x1A5604u;
    // 0x1a5604: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a5608: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x1a5608u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1a560c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A560Cu;
    {
        const bool branch_taken_0x1a560c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a560c) {
            ctx->pc = 0x1A561Cu;
            goto label_1a561c;
        }
    }
    ctx->pc = 0x1A5614u;
    // 0x1a5614: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A5614u;
    {
        const bool branch_taken_0x1a5614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5614u;
        // 0x1a5618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5614) {
            ctx->pc = 0x1A5684u;
            goto label_1a5684;
        }
    }
    ctx->pc = 0x1A561Cu;
label_1a561c:
    // 0x1a561c: 0x54460009  bnel        $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A561Cu;
    {
        const bool branch_taken_0x1a561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a561c) {
            ctx->pc = 0x1A5620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A561Cu;
            // 0x1a5620: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5644u;
            goto label_1a5644;
        }
    }
    ctx->pc = 0x1A5624u;
    // 0x1a5624: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a5624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a5628: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a562c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a5630: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a5630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1a5634: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5638: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a5638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a563c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A563Cu;
    {
        const bool branch_taken_0x1a563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A563Cu;
        // 0x1a5640: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a563c) {
            ctx->pc = 0x1A565Cu;
            goto label_1a565c;
        }
    }
    ctx->pc = 0x1A5644u;
label_1a5644:
    // 0x1a5644: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a5648: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1a5648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1a564c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5650: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a5650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a5654: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1a5654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a5658: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1a5658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1a565c:
    // 0x1a565c: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1a565cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1a5660: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5660u;
    {
        const bool branch_taken_0x1a5660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5660u;
        // 0x1a5664: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5660) {
            ctx->pc = 0x1A5684u;
            goto label_1a5684;
        }
    }
    ctx->pc = 0x1A5668u;
label_1a5668:
    // 0x1a5668: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5668u;
    {
        const bool branch_taken_0x1a5668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5668u;
        // 0x1a566c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5668) {
            ctx->pc = 0x1A5684u;
            goto label_1a5684;
        }
    }
    ctx->pc = 0x1A5670u;
label_1a5670:
    // 0x1a5670: 0x5620ffb5  bnel        $s1, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1A5670u;
    {
        const bool branch_taken_0x1a5670 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5670) {
            ctx->pc = 0x1A5674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5670u;
            // 0x1a5674: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5548;
        }
    }
    ctx->pc = 0x1A5678u;
label_1a5678:
    // 0x1a5678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a567c: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x1a567cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a5680: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x1a5680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a5684:
    // 0x1a5684: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a5688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a568c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a568cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5698: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5698u;
        // 0x1a569c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A56A0u;
}
