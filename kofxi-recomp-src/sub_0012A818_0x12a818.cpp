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

// Function: sub_0012A818
// Address: 0x12a818 - 0x12b6a0
void sub_0012A818_0x12a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A818_0x12a818");
#endif

    switch (ctx->pc) {
        case 0x12a860u: goto label_12a860;
        case 0x12a8acu: goto label_12a8ac;
        case 0x12a8b0u: goto label_12a8b0;
        case 0x12a8d0u: goto label_12a8d0;
        case 0x12a924u: goto label_12a924;
        case 0x12a980u: goto label_12a980;
        case 0x12a998u: goto label_12a998;
        case 0x12a9e4u: goto label_12a9e4;
        case 0x12aa24u: goto label_12aa24;
        case 0x12aa50u: goto label_12aa50;
        case 0x12aa5cu: goto label_12aa5c;
        case 0x12aa90u: goto label_12aa90;
        case 0x12aab0u: goto label_12aab0;
        case 0x12ab30u: goto label_12ab30;
        case 0x12ab8cu: goto label_12ab8c;
        case 0x12abe8u: goto label_12abe8;
        case 0x12ac30u: goto label_12ac30;
        case 0x12ac5cu: goto label_12ac5c;
        case 0x12ac84u: goto label_12ac84;
        case 0x12ac94u: goto label_12ac94;
        case 0x12ac98u: goto label_12ac98;
        case 0x12aca0u: goto label_12aca0;
        case 0x12acd8u: goto label_12acd8;
        case 0x12acf4u: goto label_12acf4;
        case 0x12acf8u: goto label_12acf8;
        case 0x12ad0cu: goto label_12ad0c;
        case 0x12ad10u: goto label_12ad10;
        case 0x12ad18u: goto label_12ad18;
        case 0x12ad24u: goto label_12ad24;
        case 0x12ad30u: goto label_12ad30;
        case 0x12ad3cu: goto label_12ad3c;
        case 0x12ad48u: goto label_12ad48;
        case 0x12ad70u: goto label_12ad70;
        case 0x12ad88u: goto label_12ad88;
        case 0x12ade0u: goto label_12ade0;
        case 0x12ae20u: goto label_12ae20;
        case 0x12ae24u: goto label_12ae24;
        case 0x12ae38u: goto label_12ae38;
        case 0x12ae48u: goto label_12ae48;
        case 0x12ae54u: goto label_12ae54;
        case 0x12ae74u: goto label_12ae74;
        case 0x12ae88u: goto label_12ae88;
        case 0x12ae98u: goto label_12ae98;
        case 0x12aeb4u: goto label_12aeb4;
        case 0x12af28u: goto label_12af28;
        case 0x12af3cu: goto label_12af3c;
        case 0x12af4cu: goto label_12af4c;
        case 0x12af64u: goto label_12af64;
        case 0x12af7cu: goto label_12af7c;
        case 0x12af94u: goto label_12af94;
        case 0x12afacu: goto label_12afac;
        case 0x12afc0u: goto label_12afc0;
        case 0x12afd8u: goto label_12afd8;
        case 0x12b008u: goto label_12b008;
        case 0x12b018u: goto label_12b018;
        case 0x12b020u: goto label_12b020;
        case 0x12b0acu: goto label_12b0ac;
        case 0x12b0ccu: goto label_12b0cc;
        case 0x12b0d8u: goto label_12b0d8;
        case 0x12b0e8u: goto label_12b0e8;
        case 0x12b0f0u: goto label_12b0f0;
        case 0x12b114u: goto label_12b114;
        case 0x12b120u: goto label_12b120;
        case 0x12b150u: goto label_12b150;
        case 0x12b164u: goto label_12b164;
        case 0x12b180u: goto label_12b180;
        case 0x12b1c8u: goto label_12b1c8;
        case 0x12b1d4u: goto label_12b1d4;
        case 0x12b1e0u: goto label_12b1e0;
        case 0x12b230u: goto label_12b230;
        case 0x12b238u: goto label_12b238;
        case 0x12b244u: goto label_12b244;
        case 0x12b250u: goto label_12b250;
        case 0x12b25cu: goto label_12b25c;
        case 0x12b280u: goto label_12b280;
        case 0x12b2a8u: goto label_12b2a8;
        case 0x12b2b0u: goto label_12b2b0;
        case 0x12b2bcu: goto label_12b2bc;
        case 0x12b2ecu: goto label_12b2ec;
        case 0x12b2fcu: goto label_12b2fc;
        case 0x12b304u: goto label_12b304;
        case 0x12b340u: goto label_12b340;
        case 0x12b354u: goto label_12b354;
        case 0x12b35cu: goto label_12b35c;
        case 0x12b364u: goto label_12b364;
        case 0x12b378u: goto label_12b378;
        case 0x12b384u: goto label_12b384;
        case 0x12b390u: goto label_12b390;
        case 0x12b39cu: goto label_12b39c;
        case 0x12b3dcu: goto label_12b3dc;
        case 0x12b3ecu: goto label_12b3ec;
        case 0x12b3f8u: goto label_12b3f8;
        case 0x12b40cu: goto label_12b40c;
        case 0x12b424u: goto label_12b424;
        case 0x12b43cu: goto label_12b43c;
        case 0x12b450u: goto label_12b450;
        case 0x12b4b8u: goto label_12b4b8;
        case 0x12b4f0u: goto label_12b4f0;
        case 0x12b508u: goto label_12b508;
        case 0x12b54cu: goto label_12b54c;
        case 0x12b55cu: goto label_12b55c;
        case 0x12b570u: goto label_12b570;
        case 0x12b57cu: goto label_12b57c;
        case 0x12b588u: goto label_12b588;
        case 0x12b5a8u: goto label_12b5a8;
        case 0x12b5b4u: goto label_12b5b4;
        case 0x12b688u: goto label_12b688;
        case 0x12b690u: goto label_12b690;
        default: break;
    }

    ctx->pc = 0x12a818u;

label_12a818:
    // 0x12a818: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12a818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12a81c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12a81cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a820: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x12a820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x12a824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12a824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a828: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x12a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x12a82c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x12a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x12a830: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12a830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a834: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x12a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12a838: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12a838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a83c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x12a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x12a840: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x12a840u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a844: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x12a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x12a848: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x12a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x12a84c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x12a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x12a850: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x12a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x12a854: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x12a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x12a858: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12a858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12a85c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_12a860:
    // 0x12a860: 0x93cc0000  lbu         $t4, 0x0($fp)
    ctx->pc = 0x12a860u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12a864: 0xc7600  sll         $t6, $t4, 24
    ctx->pc = 0x12a864u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x12a868: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12a868u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12a86c: 0x2dcf002e  sltiu       $t7, $t6, 0x2E
    ctx->pc = 0x12a86cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x12a870: 0x11e00023  beqz        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x12A870u;
    {
        const bool branch_taken_0x12a870 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A870u;
        // 0x12a874: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a870) {
            ctx->pc = 0x12A900u;
            goto label_12a900;
        }
    }
    ctx->pc = 0x12A878u;
    // 0x12a878: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12a878u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12a87c: 0x25cebab8  addiu       $t6, $t6, -0x4548
    ctx->pc = 0x12a87cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949560));
    // 0x12a880: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12a880u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12a884: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12a884u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12a888: 0x1a00008  jr          $t5
    ctx->pc = 0x12A888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A890u: goto label_12a890;
            case 0x12A898u: goto label_12a898;
            case 0x12A8A8u: goto label_12a8a8;
            case 0x12A900u: goto label_12a900;
            case 0x12B638u: goto label_12b638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A888u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12A890u;
label_12a890:
    // 0x12a890: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12a890u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a894: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x12a894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_12a898:
    // 0x12a898: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12a898u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12a89c: 0x93cc0000  lbu         $t4, 0x0($fp)
    ctx->pc = 0x12a89cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12a8a0: 0x15800018  bnez        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x12A8A0u;
    {
        const bool branch_taken_0x12a8a0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8A0u;
        // 0x12a8a4: 0xc7600  sll         $t6, $t4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8a0) {
            ctx->pc = 0x12A904u;
            goto label_12a904;
        }
    }
    ctx->pc = 0x12A8A8u;
label_12a8a8:
    // 0x12a8a8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x12a8a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12a8ac:
    // 0x12a8ac: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x12a8acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12a8b0:
    // 0x12a8b0: 0x55800001  bnel        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12A8B0u;
    {
        const bool branch_taken_0x12a8b0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8b0) {
            ctx->pc = 0x12A8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A8B0u;
            // 0x12a8b4: 0xad9e0000  sw          $fp, 0x0($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A8B8u;
            goto label_12a8b8;
        }
    }
    ctx->pc = 0x12A8B8u;
label_12a8b8:
    // 0x12a8b8: 0x8fad0010  lw          $t5, 0x10($sp)
    ctx->pc = 0x12a8b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a8bc: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A8BCu;
    {
        const bool branch_taken_0x12a8bc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8BCu;
        // 0x12a8c0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8bc) {
            ctx->pc = 0x12A8D0u;
            goto label_12a8d0;
        }
    }
    ctx->pc = 0x12A8C4u;
    // 0x12a8c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12a8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8c8: 0xc048a5c  jal         func_122970
    ctx->pc = 0x12A8C8u;
    SET_GPR_U32(ctx, 31, 0x12A8D0u);
    ctx->pc = 0x12A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A8C8u;
    // 0x12a8cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x12A8C8u, 0x12A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8D0u;
label_12a8d0:
    // 0x12a8d0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x12a8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a8d4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x12a8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12a8d8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x12a8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a8dc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x12a8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12a8e0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x12a8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a8e4: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x12a8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12a8e8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x12a8e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a8ec: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x12a8ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12a8f0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x12a8f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a8f4: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x12a8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8F8u;
        // 0x12a8fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A900u;
label_12a900:
    // 0x12a900: 0xc7600  sll         $t6, $t4, 24
    ctx->pc = 0x12a900u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_12a904:
    // 0x12a904: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12a904u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12a908: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12a908u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12a90c: 0x15cf000f  bne         $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x12A90Cu;
    {
        const bool branch_taken_0x12a90c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A90Cu;
        // 0x12a910: 0xc2600  sll         $a0, $t4, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a90c) {
            ctx->pc = 0x12A94Cu;
            goto label_12a94c;
        }
    }
    ctx->pc = 0x12A914u;
    // 0x12a914: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x12a914u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a918: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x12a918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a91c: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12a91cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12a920: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a920u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12a924:
    // 0x12a924: 0x91ec0000  lbu         $t4, 0x0($t7)
    ctx->pc = 0x12a924u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12a928: 0xc6e00  sll         $t5, $t4, 24
    ctx->pc = 0x12a928u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x12a92c: 0xd6e03  sra         $t5, $t5, 24
    ctx->pc = 0x12a92cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 24));
    // 0x12a930: 0x0  nop
    ctx->pc = 0x12a930u;
    // NOP
    // 0x12a934: 0x0  nop
    ctx->pc = 0x12a934u;
    // NOP
    // 0x12a938: 0x51aefffa  beql        $t5, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A938u;
    {
        const bool branch_taken_0x12a938 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        if (branch_taken_0x12a938) {
            ctx->pc = 0x12A93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A938u;
            // 0x12a93c: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a924;
        }
    }
    ctx->pc = 0x12A940u;
    // 0x12a940: 0x11a0ffda  beqz        $t5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x12A940u;
    {
        const bool branch_taken_0x12a940 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A940u;
        // 0x12a944: 0x1e0f02d  daddu       $fp, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a940) {
            ctx->pc = 0x12A8ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8ac;
        }
    }
    ctx->pc = 0x12A948u;
    // 0x12a948: 0xc2600  sll         $a0, $t4, 24
    ctx->pc = 0x12a948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_12a94c:
    // 0x12a94c: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x12a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x12a950: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x12a950u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x12a954: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12a954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12a958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12a958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a95c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x12a95cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a960: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x12a960u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12a964: 0x15e00014  bnez        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x12A964u;
    {
        const bool branch_taken_0x12a964 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A964u;
        // 0x12a968: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a964) {
            ctx->pc = 0x12A9B8u;
            goto label_12a9b8;
        }
    }
    ctx->pc = 0x12A96Cu;
    // 0x12a96c: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12a96cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12a970: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A970u;
    {
        const bool branch_taken_0x12a970 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A970u;
        // 0x12a974: 0x240f002e  addiu       $t7, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a970) {
            ctx->pc = 0x12A9BCu;
            goto label_12a9bc;
        }
    }
    ctx->pc = 0x12A978u;
    // 0x12a978: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x12a978u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12a97c: 0x2a4f0009  slti        $t7, $s2, 0x9
    ctx->pc = 0x12a97cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_12a980:
    // 0x12a980: 0x11e00325  beqz        $t7, . + 4 + (0x325 << 2)
    ctx->pc = 0x12A980u;
    {
        const bool branch_taken_0x12a980 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A980u;
        // 0x12a984: 0x8fac0030  lw          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a980) {
            ctx->pc = 0x12B618u;
            goto label_12b618;
        }
    }
    ctx->pc = 0x12A988u;
    // 0x12a988: 0x18e7818  mult        $t7, $t4, $t6
    ctx->pc = 0x12a988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12a98c: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x12a98cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x12a990: 0x25efffd0  addiu       $t7, $t7, -0x30
    ctx->pc = 0x12a990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x12a994: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x12a994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
label_12a998:
    // 0x12a998: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12a99c: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12a99cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12a9a0: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x12a9a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12a9a4: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A9A4u;
    {
        const bool branch_taken_0x12a9a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9A4u;
        // 0x12a9a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9a4) {
            ctx->pc = 0x12A9B8u;
            goto label_12a9b8;
        }
    }
    ctx->pc = 0x12A9ACu;
    // 0x12a9ac: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12a9acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12a9b0: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x12A9B0u;
    {
        const bool branch_taken_0x12a9b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9B0u;
        // 0x12a9b4: 0x2a4f0009  slti        $t7, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9b0) {
            ctx->pc = 0x12A980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a980;
        }
    }
    ctx->pc = 0x12A9B8u;
label_12a9b8:
    // 0x12a9b8: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x12a9b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_12a9bc:
    // 0x12a9bc: 0x148f003b  bne         $a0, $t7, . + 4 + (0x3B << 2)
    ctx->pc = 0x12A9BCu;
    {
        const bool branch_taken_0x12a9bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9BCu;
        // 0x12a9c0: 0xafb2000c  sw          $s2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9bc) {
            ctx->pc = 0x12AAACu;
            goto label_12aaac;
        }
    }
    ctx->pc = 0x12A9C4u;
    // 0x12a9c4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12a9c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12a9c8: 0x1640030d  bnez        $s2, . + 4 + (0x30D << 2)
    ctx->pc = 0x12A9C8u;
    {
        const bool branch_taken_0x12a9c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9C8u;
        // 0x12a9cc: 0x83c40000  lb          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9c8) {
            ctx->pc = 0x12B600u;
            goto label_12b600;
        }
    }
    ctx->pc = 0x12A9D0u;
    // 0x12a9d0: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12a9d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12a9d4: 0x148f000c  bne         $a0, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12A9D4u;
    {
        const bool branch_taken_0x12a9d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9D4u;
        // 0x12a9d8: 0x248fffcf  addiu       $t7, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9d4) {
            ctx->pc = 0x12AA08u;
            goto label_12aa08;
        }
    }
    ctx->pc = 0x12A9DCu;
    // 0x12a9dc: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x12a9dcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9e0: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12a9e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12a9e4:
    // 0x12a9e4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a9e8: 0x81e40000  lb          $a0, 0x0($t7)
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12a9ec: 0x0  nop
    ctx->pc = 0x12a9ecu;
    // NOP
    // 0x12a9f0: 0x0  nop
    ctx->pc = 0x12a9f0u;
    // NOP
    // 0x12a9f4: 0x0  nop
    ctx->pc = 0x12a9f4u;
    // NOP
    // 0x12a9f8: 0x108efffa  beq         $a0, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A9F8u;
    {
        const bool branch_taken_0x12a9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        ctx->pc = 0x12A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9F8u;
        // 0x12a9fc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9f8) {
            ctx->pc = 0x12A9E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a9e4;
        }
    }
    ctx->pc = 0x12AA00u;
    // 0x12aa00: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x12aa00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa04: 0x248fffcf  addiu       $t7, $a0, -0x31
    ctx->pc = 0x12aa04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_12aa08:
    // 0x12aa08: 0x2def0009  sltiu       $t7, $t7, 0x9
    ctx->pc = 0x12aa08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12aa0c: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x12AA0Cu;
    {
        const bool branch_taken_0x12aa0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA0Cu;
        // 0x12aa10: 0x240f0065  addiu       $t7, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa0c) {
            ctx->pc = 0x12AAB0u;
            goto label_12aab0;
        }
    }
    ctx->pc = 0x12AA14u;
    // 0x12aa14: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x12aa14u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa18: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x12aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x12aa1c: 0x248bffd0  addiu       $t3, $a0, -0x30
    ctx->pc = 0x12aa1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12aa20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12aa20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12aa24:
    // 0x12aa24: 0x1160001b  beqz        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x12AA24u;
    {
        const bool branch_taken_0x12aa24 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA24u;
        // 0x12aa28: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa24) {
            ctx->pc = 0x12AA94u;
            goto label_12aa94;
        }
    }
    ctx->pc = 0x12AA2Cu;
    // 0x12aa2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa30: 0x4a782a  slt         $t7, $v0, $t2
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12aa34: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12AA34u;
    {
        const bool branch_taken_0x12aa34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA34u;
        // 0x12aa38: 0x1aa6821  addu        $t5, $t5, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa34) {
            ctx->pc = 0x12AA70u;
            goto label_12aa70;
        }
    }
    ctx->pc = 0x12AA3Cu;
    // 0x12aa3c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12aa40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12aa40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa44: 0x254cffff  addiu       $t4, $t2, -0x1
    ctx->pc = 0x12aa44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x12aa48: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x12aa48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12aa4c: 0x28ef0009  slti        $t7, $a3, 0x9
    ctx->pc = 0x12aa4cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_12aa50:
    // 0x12aa50: 0x11e002e5  beqz        $t7, . + 4 + (0x2E5 << 2)
    ctx->pc = 0x12AA50u;
    {
        const bool branch_taken_0x12aa50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA50u;
        // 0x12aa54: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa50) {
            ctx->pc = 0x12B5E8u;
            goto label_12b5e8;
        }
    }
    ctx->pc = 0x12AA58u;
    // 0x12aa58: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x12aa58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_12aa5c:
    // 0x12aa5c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12aa5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12aa60: 0x1580fffb  bnez        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12AA60u;
    {
        const bool branch_taken_0x12aa60 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA60u;
        // 0x12aa64: 0x28ef0009  slti        $t7, $a3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa60) {
            ctx->pc = 0x12AA50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aa50;
        }
    }
    ctx->pc = 0x12AA68u;
    // 0x12aa68: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x12aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x12aa6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12aa6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12aa70:
    // 0x12aa70: 0x2a4f0009  slti        $t7, $s2, 0x9
    ctx->pc = 0x12aa70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12aa74: 0x11e002d5  beqz        $t7, . + 4 + (0x2D5 << 2)
    ctx->pc = 0x12AA74u;
    {
        const bool branch_taken_0x12aa74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA74u;
        // 0x12aa78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa74) {
            ctx->pc = 0x12B5CCu;
            goto label_12b5cc;
        }
    }
    ctx->pc = 0x12AA7Cu;
    // 0x12aa7c: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x12aa7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12aa80: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12aa80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12aa84: 0x1cf7818  mult        $t7, $t6, $t7
    ctx->pc = 0x12aa84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x12aa88: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x12aa88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x12aa8c: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x12aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
label_12aa90:
    // 0x12aa90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12aa90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12aa94:
    // 0x12aa94: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12aa94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12aa98: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12aa9c: 0x248fffd0  addiu       $t7, $a0, -0x30
    ctx->pc = 0x12aa9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12aaa0: 0x2dee000a  sltiu       $t6, $t7, 0xA
    ctx->pc = 0x12aaa0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12aaa4: 0x15c0ffdf  bnez        $t6, . + 4 + (-0x21 << 2)
    ctx->pc = 0x12AAA4u;
    {
        const bool branch_taken_0x12aaa4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAA4u;
        // 0x12aaa8: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaa4) {
            ctx->pc = 0x12AA24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aa24;
        }
    }
    ctx->pc = 0x12AAACu;
label_12aaac:
    // 0x12aaac: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12aaacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_12aab0:
    // 0x12aab0: 0x108f0004  beq         $a0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AAB0u;
    {
        const bool branch_taken_0x12aab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAB0u;
        // 0x12aab4: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aab0) {
            ctx->pc = 0x12AAC4u;
            goto label_12aac4;
        }
    }
    ctx->pc = 0x12AAB8u;
    // 0x12aab8: 0x240f0045  addiu       $t7, $zero, 0x45
    ctx->pc = 0x12aab8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12aabc: 0x148f004a  bne         $a0, $t7, . + 4 + (0x4A << 2)
    ctx->pc = 0x12AABCu;
    {
        const bool branch_taken_0x12aabc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        if (branch_taken_0x12aabc) {
            ctx->pc = 0x12ABE8u;
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12AAC4u;
label_12aac4:
    // 0x12aac4: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AAC4u;
    {
        const bool branch_taken_0x12aac4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12aac4) {
            ctx->pc = 0x12AAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AAC4u;
            // 0x12aac8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AAE0u;
            goto label_12aae0;
        }
    }
    ctx->pc = 0x12AACCu;
    // 0x12aacc: 0x55400004  bnel        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AACCu;
    {
        const bool branch_taken_0x12aacc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x12aacc) {
            ctx->pc = 0x12AAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AACCu;
            // 0x12aad0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AAE0u;
            goto label_12aae0;
        }
    }
    ctx->pc = 0x12AAD4u;
    // 0x12aad4: 0x5120ff75  beql        $t1, $zero, . + 4 + (-0x8B << 2)
    ctx->pc = 0x12AAD4u;
    {
        const bool branch_taken_0x12aad4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aad4) {
            ctx->pc = 0x12AAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AAD4u;
            // 0x12aad8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A8ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8ac;
        }
    }
    ctx->pc = 0x12AADCu;
    // 0x12aadc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x12aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12aae0:
    // 0x12aae0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12aae0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12aae4: 0x240f002b  addiu       $t7, $zero, 0x2B
    ctx->pc = 0x12aae4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12aae8: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12aaec: 0x108f0005  beq         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AAECu;
    {
        const bool branch_taken_0x12aaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAECu;
        // 0x12aaf0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaec) {
            ctx->pc = 0x12AB04u;
            goto label_12ab04;
        }
    }
    ctx->pc = 0x12AAF4u;
    // 0x12aaf4: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12aaf8: 0x148f0005  bne         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AAF8u;
    {
        const bool branch_taken_0x12aaf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAF8u;
        // 0x12aafc: 0x248fffd0  addiu       $t7, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaf8) {
            ctx->pc = 0x12AB10u;
            goto label_12ab10;
        }
    }
    ctx->pc = 0x12AB00u;
    // 0x12ab00: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12ab00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12ab04:
    // 0x12ab04: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12ab08: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12ab0c: 0x248fffd0  addiu       $t7, $a0, -0x30
    ctx->pc = 0x12ab0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_12ab10:
    // 0x12ab10: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x12ab10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ab14: 0x11e002ab  beqz        $t7, . + 4 + (0x2AB << 2)
    ctx->pc = 0x12AB14u;
    {
        const bool branch_taken_0x12ab14 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB14u;
        // 0x12ab18: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab14) {
            ctx->pc = 0x12B5C4u;
            goto label_12b5c4;
        }
    }
    ctx->pc = 0x12AB1Cu;
    // 0x12ab1c: 0x148f000d  bne         $a0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x12AB1Cu;
    {
        const bool branch_taken_0x12ab1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x12AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB1Cu;
        // 0x12ab20: 0x248fffcf  addiu       $t7, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab1c) {
            ctx->pc = 0x12AB54u;
            goto label_12ab54;
        }
    }
    ctx->pc = 0x12AB24u;
    // 0x12ab24: 0x3c0782d  daddu       $t7, $fp, $zero
    ctx->pc = 0x12ab24u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab28: 0x240e0030  addiu       $t6, $zero, 0x30
    ctx->pc = 0x12ab28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12ab2c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12ab30:
    // 0x12ab30: 0x81e40000  lb          $a0, 0x0($t7)
    ctx->pc = 0x12ab30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ab34: 0x0  nop
    ctx->pc = 0x12ab34u;
    // NOP
    // 0x12ab38: 0x0  nop
    ctx->pc = 0x12ab38u;
    // NOP
    // 0x12ab3c: 0x0  nop
    ctx->pc = 0x12ab3cu;
    // NOP
    // 0x12ab40: 0x0  nop
    ctx->pc = 0x12ab40u;
    // NOP
    // 0x12ab44: 0x508efffa  beql        $a0, $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12AB44u;
    {
        const bool branch_taken_0x12ab44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        if (branch_taken_0x12ab44) {
            ctx->pc = 0x12AB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AB44u;
            // 0x12ab48: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AB30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ab30;
        }
    }
    ctx->pc = 0x12AB4Cu;
    // 0x12ab4c: 0x1e0f02d  daddu       $fp, $t7, $zero
    ctx->pc = 0x12ab4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab50: 0x248fffcf  addiu       $t7, $a0, -0x31
    ctx->pc = 0x12ab50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_12ab54:
    // 0x12ab54: 0x2def0009  sltiu       $t7, $t7, 0x9
    ctx->pc = 0x12ab54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12ab58: 0x11e00298  beqz        $t7, . + 4 + (0x298 << 2)
    ctx->pc = 0x12AB58u;
    {
        const bool branch_taken_0x12ab58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB58u;
        // 0x12ab5c: 0x3c0602d  daddu       $t4, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab58) {
            ctx->pc = 0x12B5BCu;
            goto label_12b5bc;
        }
    }
    ctx->pc = 0x12AB60u;
    // 0x12ab60: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x12ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12ab64: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x12ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x12ab68: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ab68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12ab6c: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12ab6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12ab70: 0x288f0030  slti        $t7, $a0, 0x30
    ctx->pc = 0x12ab70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12ab74: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12AB74u;
    {
        const bool branch_taken_0x12ab74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB74u;
        // 0x12ab78: 0x3cc7823  subu        $t7, $fp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab74) {
            ctx->pc = 0x12ABC4u;
            goto label_12abc4;
        }
    }
    ctx->pc = 0x12AB7Cu;
    // 0x12ab7c: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12ab7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12ab80: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12AB80u;
    {
        const bool branch_taken_0x12ab80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB80u;
        // 0x12ab84: 0x3cc7823  subu        $t7, $fp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab80) {
            ctx->pc = 0x12ABC4u;
            goto label_12abc4;
        }
    }
    ctx->pc = 0x12AB88u;
    // 0x12ab88: 0xdfae0018  ld          $t6, 0x18($sp)
    ctx->pc = 0x12ab88u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_12ab8c:
    // 0x12ab8c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ab8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12ab90: 0xe78b8  dsll        $t7, $t6, 2
    ctx->pc = 0x12ab90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << 2);
    // 0x12ab94: 0x1ee782d  daddu       $t7, $t7, $t6
    ctx->pc = 0x12ab94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
    // 0x12ab98: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x12ab98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12ab9c: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x12ab9cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12aba0: 0x83c40000  lb          $a0, 0x0($fp)
    ctx->pc = 0x12aba0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12aba4: 0x65efffd0  daddiu      $t7, $t7, -0x30
    ctx->pc = 0x12aba4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294967248);
    // 0x12aba8: 0x288e0030  slti        $t6, $a0, 0x30
    ctx->pc = 0x12aba8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12abac: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ABACu;
    {
        const bool branch_taken_0x12abac = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABACu;
        // 0x12abb0: 0xffaf0018  sd          $t7, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abac) {
            ctx->pc = 0x12ABC0u;
            goto label_12abc0;
        }
    }
    ctx->pc = 0x12ABB4u;
    // 0x12abb4: 0x288f003a  slti        $t7, $a0, 0x3A
    ctx->pc = 0x12abb4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x12abb8: 0x15e0fff4  bnez        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x12ABB8u;
    {
        const bool branch_taken_0x12abb8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABB8u;
        // 0x12abbc: 0xdfae0018  ld          $t6, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abb8) {
            ctx->pc = 0x12AB8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ab8c;
        }
    }
    ctx->pc = 0x12ABC0u;
label_12abc0:
    // 0x12abc0: 0x3cc7823  subu        $t7, $fp, $t4
    ctx->pc = 0x12abc0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
label_12abc4:
    // 0x12abc4: 0x3c0e0098  lui         $t6, 0x98
    ctx->pc = 0x12abc4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)152 << 16));
    // 0x12abc8: 0xdfac0018  ld          $t4, 0x18($sp)
    ctx->pc = 0x12abc8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12abcc: 0x29ef0009  slti        $t7, $t7, 0x9
    ctx->pc = 0x12abccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12abd0: 0x35ce967f  ori         $t6, $t6, 0x967F
    ctx->pc = 0x12abd0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)38527);
    // 0x12abd4: 0x1cf600a  movz        $t4, $t6, $t7
    ctx->pc = 0x12abd4u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x12abd8: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ABD8u;
    {
        const bool branch_taken_0x12abd8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABD8u;
        // 0x12abdc: 0xffac0018  sd          $t4, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abd8) {
            ctx->pc = 0x12ABE8u;
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12ABE0u;
    // 0x12abe0: 0xc602f  dsubu       $t4, $zero, $t4
    ctx->pc = 0x12abe0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 12));
    // 0x12abe4: 0xffac0018  sd          $t4, 0x18($sp)
    ctx->pc = 0x12abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
label_12abe8:
    // 0x12abe8: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12ABE8u;
    {
        const bool branch_taken_0x12abe8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABE8u;
        // 0x12abec: 0xdfae0018  ld          $t6, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abe8) {
            ctx->pc = 0x12AC08u;
            goto label_12ac08;
        }
    }
    ctx->pc = 0x12ABF0u;
    // 0x12abf0: 0x1540ff2f  bnez        $t2, . + 4 + (-0xD1 << 2)
    ctx->pc = 0x12ABF0u;
    {
        const bool branch_taken_0x12abf0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABF0u;
        // 0x12abf4: 0x8fac0008  lw          $t4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abf0) {
            ctx->pc = 0x12A8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8b0;
        }
    }
    ctx->pc = 0x12ABF8u;
    // 0x12abf8: 0x1520ff2d  bnez        $t1, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x12ABF8u;
    {
        const bool branch_taken_0x12abf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x12abf8) {
            ctx->pc = 0x12A8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8b0;
        }
    }
    ctx->pc = 0x12AC00u;
    // 0x12ac00: 0x1000ff2b  b           . + 4 + (-0xD5 << 2)
    ctx->pc = 0x12AC00u;
    {
        const bool branch_taken_0x12ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC00u;
        // 0x12ac04: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac00) {
            ctx->pc = 0x12A8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8b0;
        }
    }
    ctx->pc = 0x12AC08u;
label_12ac08:
    // 0x12ac08: 0x2a4f0011  slti        $t7, $s2, 0x11
    ctx->pc = 0x12ac08u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12ac0c: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x12ac0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ac10: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ac14: 0x1cd702f  dsubu       $t6, $t6, $t5
    ctx->pc = 0x12ac14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) - GPR_U64(ctx, 13));
    // 0x12ac18: 0x24f980b  movn        $s3, $s2, $t7
    ctx->pc = 0x12ac18u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x12ac1c: 0xe603c  dsll32      $t4, $t6, 0
    ctx->pc = 0x12ac1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12ac20: 0xffae0018  sd          $t6, 0x18($sp)
    ctx->pc = 0x12ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 14));
    // 0x12ac24: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x12ac24u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x12ac28: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x12AC28u;
    SET_GPR_U32(ctx, 31, 0x12AC30u);
    ctx->pc = 0x12AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC28u;
    // 0x12ac2c: 0xafac0054  sw          $t4, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x12AC28u, 0x12AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC30u;
label_12ac30:
    // 0x12ac30: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x12ac30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12ac34: 0x8fae000c  lw          $t6, 0xC($sp)
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12ac38: 0x8fb00054  lw          $s0, 0x54($sp)
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12ac3c: 0x24e680a  movz        $t5, $s2, $t6
    ctx->pc = 0x12ac3cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 18));
    // 0x12ac40: 0x8faf0030  lw          $t7, 0x30($sp)
    ctx->pc = 0x12ac40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ac44: 0x5e10005  bgez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AC44u;
    {
        const bool branch_taken_0x12ac44 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x12AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC44u;
        // 0x12ac48: 0xafad000c  sw          $t5, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac44) {
            ctx->pc = 0x12AC5Cu;
            goto label_12ac5c;
        }
    }
    ctx->pc = 0x12AC4Cu;
    // 0x12ac4c: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x12ac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x12ac50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ac50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac54: 0xc048a46  jal         func_122918
    ctx->pc = 0x12AC54u;
    SET_GPR_U32(ctx, 31, 0x12AC5Cu);
    ctx->pc = 0x12AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC54u;
    // 0x12ac58: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12AC54u, 0x12AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC5Cu;
label_12ac5c:
    // 0x12ac5c: 0x2a6f000a  slti        $t7, $s3, 0xA
    ctx->pc = 0x12ac5cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12ac60: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12AC60u;
    {
        const bool branch_taken_0x12ac60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC60u;
        // 0x12ac64: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac60) {
            ctx->pc = 0x12ACA4u;
            goto label_12aca4;
        }
    }
    ctx->pc = 0x12AC68u;
    // 0x12ac68: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12ac68u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12ac6c: 0x1378c0  sll         $t7, $s3, 3
    ctx->pc = 0x12ac6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x12ac70: 0x25ceb978  addiu       $t6, $t6, -0x4688
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949240));
    // 0x12ac74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12ac74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac78: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12ac78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12ac7c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12AC7Cu;
    SET_GPR_U32(ctx, 31, 0x12AC84u);
    ctx->pc = 0x12AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC7Cu;
    // 0x12ac80: 0xdde4ffb8  ld          $a0, -0x48($t7) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12AC7Cu, 0x12AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC84u;
label_12ac84:
    // 0x12ac84: 0x6200244  bltz        $s1, . + 4 + (0x244 << 2)
    ctx->pc = 0x12AC84u;
    {
        const bool branch_taken_0x12ac84 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x12AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC84u;
        // 0x12ac88: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac84) {
            ctx->pc = 0x12B598u;
            goto label_12b598;
        }
    }
    ctx->pc = 0x12AC8Cu;
    // 0x12ac8c: 0xc048096  jal         func_120258
    ctx->pc = 0x12AC8Cu;
    SET_GPR_U32(ctx, 31, 0x12AC94u);
    ctx->pc = 0x12AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC8Cu;
    // 0x12ac90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120258u, 0x12AC8Cu, 0x12AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC94u;
label_12ac94:
    // 0x12ac94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12ac94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12ac98:
    // 0x12ac98: 0xc048a46  jal         func_122918
    ctx->pc = 0x12AC98u;
    SET_GPR_U32(ctx, 31, 0x12ACA0u);
    ctx->pc = 0x12AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC98u;
    // 0x12ac9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12AC98u, 0x12ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ACA0u;
label_12aca0:
    // 0x12aca0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12aca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12aca4:
    // 0x12aca4: 0x2537823  subu        $t7, $s2, $s3
    ctx->pc = 0x12aca4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x12aca8: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x12aca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x12acac: 0x1a0001f6  blez        $s0, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x12ACACu;
    {
        const bool branch_taken_0x12acac = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACACu;
        // 0x12acb0: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acac) {
            ctx->pc = 0x12B488u;
            goto label_12b488;
        }
    }
    ctx->pc = 0x12ACB4u;
    // 0x12acb4: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x12acb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x12acb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12ACB8u;
    {
        const bool branch_taken_0x12acb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACB8u;
        // 0x12acbc: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acb8) {
            ctx->pc = 0x12ACDCu;
            goto label_12acdc;
        }
    }
    ctx->pc = 0x12ACC0u;
    // 0x12acc0: 0x270c0  sll         $t6, $v0, 3
    ctx->pc = 0x12acc0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12acc4: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x12acc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x12acc8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12accc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12acccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12acd0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12ACD0u;
    SET_GPR_U32(ctx, 31, 0x12ACD8u);
    ctx->pc = 0x12ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ACD0u;
    // 0x12acd4: 0xddc40000  ld          $a0, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12ACD0u, 0x12ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ACD8u;
label_12acd8:
    // 0x12acd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12acd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12acdc:
    // 0x12acdc: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x12acdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12ace0: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x12ace0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x12ace4: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x12ACE4u;
    {
        const bool branch_taken_0x12ace4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACE4u;
        // 0x12ace8: 0x2a0f0135  slti        $t7, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ace4) {
            ctx->pc = 0x12AE20u;
            goto label_12ae20;
        }
    }
    ctx->pc = 0x12ACECu;
    // 0x12acec: 0x55e00018  bnel        $t7, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x12ACECu;
    {
        const bool branch_taken_0x12acec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12acec) {
            ctx->pc = 0x12ACF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ACECu;
            // 0x12acf0: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD50u;
            goto label_12ad50;
        }
    }
    ctx->pc = 0x12ACF4u;
label_12acf4:
    // 0x12acf4: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12acf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_12acf8:
    // 0x12acf8: 0x8fac0050  lw          $t4, 0x50($sp)
    ctx->pc = 0x12acf8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12acfc: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12acfcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12ad00: 0xaecf0000  sw          $t7, 0x0($s6)
    ctx->pc = 0x12ad00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 15));
    // 0x12ad04: 0x1180fee9  beqz        $t4, . + 4 + (-0x117 << 2)
    ctx->pc = 0x12AD04u;
    {
        const bool branch_taken_0x12ad04 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD04u;
        // 0x12ad08: 0xddd5b0c0  ld          $s5, -0x4F40($t6) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 14), 4294947008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad04) {
            ctx->pc = 0x12A8ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8ac;
        }
    }
    ctx->pc = 0x12AD0Cu;
label_12ad0c:
    // 0x12ad0c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12ad10:
    // 0x12ad10: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12AD10u;
    SET_GPR_U32(ctx, 31, 0x12AD18u);
    ctx->pc = 0x12AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD10u;
    // 0x12ad14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12AD10u, 0x12AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD18u;
label_12ad18:
    // 0x12ad18: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12ad1c: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12AD1Cu;
    SET_GPR_U32(ctx, 31, 0x12AD24u);
    ctx->pc = 0x12AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD1Cu;
    // 0x12ad20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12AD1Cu, 0x12AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD24u;
label_12ad24:
    // 0x12ad24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad28: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12AD28u;
    SET_GPR_U32(ctx, 31, 0x12AD30u);
    ctx->pc = 0x12AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD28u;
    // 0x12ad2c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12AD28u, 0x12AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD30u;
label_12ad30:
    // 0x12ad30: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x12ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ad34: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12AD34u;
    SET_GPR_U32(ctx, 31, 0x12AD3Cu);
    ctx->pc = 0x12AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD34u;
    // 0x12ad38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12AD34u, 0x12AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD3Cu;
label_12ad3c:
    // 0x12ad3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ad3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad40: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12AD40u;
    SET_GPR_U32(ctx, 31, 0x12AD48u);
    ctx->pc = 0x12AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD40u;
    // 0x12ad44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12AD40u, 0x12AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD48u;
label_12ad48:
    // 0x12ad48: 0x1000fed9  b           . + 4 + (-0x127 << 2)
    ctx->pc = 0x12AD48u;
    {
        const bool branch_taken_0x12ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD48u;
        // 0x12ad4c: 0x8fac0008  lw          $t4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad48) {
            ctx->pc = 0x12A8B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8b0;
        }
    }
    ctx->pc = 0x12AD50u;
label_12ad50:
    // 0x12ad50: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12AD50u;
    {
        const bool branch_taken_0x12ad50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD50u;
        // 0x12ad54: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad50) {
            ctx->pc = 0x12AE20u;
            goto label_12ae20;
        }
    }
    ctx->pc = 0x12AD58u;
    // 0x12ad58: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12AD58u;
    {
        const bool branch_taken_0x12ad58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD58u;
        // 0x12ad5c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad58) {
            ctx->pc = 0x12ADA4u;
            goto label_12ada4;
        }
    }
    ctx->pc = 0x12AD60u;
    // 0x12ad60: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12ad60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad64: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12ad64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12ad68: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x12ad68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad6c: 0x25f0ba40  addiu       $s0, $t7, -0x45C0
    ctx->pc = 0x12ad6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949440));
label_12ad70:
    // 0x12ad70: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x12ad70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12ad74: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AD74u;
    {
        const bool branch_taken_0x12ad74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ad74) {
            ctx->pc = 0x12AD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AD74u;
            // 0x12ad78: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD90u;
            goto label_12ad90;
        }
    }
    ctx->pc = 0x12AD7Cu;
    // 0x12ad7c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x12ad7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12ad80: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12AD80u;
    SET_GPR_U32(ctx, 31, 0x12AD88u);
    ctx->pc = 0x12AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD80u;
    // 0x12ad84: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12AD80u, 0x12AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD88u;
label_12ad88:
    // 0x12ad88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12ad88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad8c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12ad8cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_12ad90:
    // 0x12ad90: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x12ad90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12ad94: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x12ad94u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ad98: 0x11e0fff5  beqz        $t7, . + 4 + (-0xB << 2)
    ctx->pc = 0x12AD98u;
    {
        const bool branch_taken_0x12ad98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD98u;
        // 0x12ad9c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad98) {
            ctx->pc = 0x12AD70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad70;
        }
    }
    ctx->pc = 0x12ADA0u;
    // 0x12ada0: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x12ada0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12ada4:
    // 0x12ada4: 0x3c0efcb0  lui         $t6, 0xFCB0
    ctx->pc = 0x12ada4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64688 << 16));
    // 0x12ada8: 0x15683f  dsra32      $t5, $s5, 0
    ctx->pc = 0x12ada8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12adac: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12adacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12adb0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x12adb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12adb4: 0x25efba40  addiu       $t7, $t7, -0x45C0
    ctx->pc = 0x12adb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949440));
    // 0x12adb8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x12adb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x12adbc: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x12adbcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x12adc0: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12adc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12adc4: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x12adc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x12adc8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x12adc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12adcc: 0x2b0a824  and         $s5, $s5, $s0
    ctx->pc = 0x12adccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
    // 0x12add0: 0xdd840000  ld          $a0, 0x0($t4)
    ctx->pc = 0x12add0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12add4: 0x2ada825  or          $s5, $s5, $t5
    ctx->pc = 0x12add4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
    // 0x12add8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12ADD8u;
    SET_GPR_U32(ctx, 31, 0x12ADE0u);
    ctx->pc = 0x12ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ADD8u;
    // 0x12addc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12ADD8u, 0x12ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ADE0u;
label_12ade0:
    // 0x12ade0: 0x2683f  dsra32      $t5, $v0, 0
    ctx->pc = 0x12ade0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12ade4: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12ade4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x12ade8: 0x1ae8824  and         $s1, $t5, $t6
    ctx->pc = 0x12ade8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x12adec: 0x3c0f7ca0  lui         $t7, 0x7CA0
    ctx->pc = 0x12adecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31904 << 16));
    // 0x12adf0: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x12adf0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12adf4: 0x15e0ffc0  bnez        $t7, . + 4 + (-0x40 << 2)
    ctx->pc = 0x12ADF4u;
    {
        const bool branch_taken_0x12adf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADF4u;
        // 0x12adf8: 0x240f0022  addiu       $t7, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adf4) {
            ctx->pc = 0x12ACF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acf8;
        }
    }
    ctx->pc = 0x12ADFCu;
    // 0x12adfc: 0x3c0f7c90  lui         $t7, 0x7C90
    ctx->pc = 0x12adfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31888 << 16));
    // 0x12ae00: 0x1f1782b  sltu        $t7, $t7, $s1
    ctx->pc = 0x12ae00u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12ae04: 0x11e0019a  beqz        $t7, . + 4 + (0x19A << 2)
    ctx->pc = 0x12AE04u;
    {
        const bool branch_taken_0x12ae04 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE04u;
        // 0x12ae08: 0x3c0f7fef  lui         $t7, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae04) {
            ctx->pc = 0x12B470u;
            goto label_12b470;
        }
    }
    ctx->pc = 0x12AE0Cu;
    // 0x12ae0c: 0x50a824  and         $s5, $v0, $s0
    ctx->pc = 0x12ae0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x12ae10: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12ae10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12ae14: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12ae14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12ae18: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12ae18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12ae1c: 0x2b0a825  or          $s5, $s5, $s0
    ctx->pc = 0x12ae1cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
label_12ae20:
    // 0x12ae20: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_12ae24:
    // 0x12ae24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12ae24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae28: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x12ae28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12ae2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae30: 0xc049d8a  jal         func_127628
    ctx->pc = 0x12AE30u;
    SET_GPR_U32(ctx, 31, 0x12AE38u);
    ctx->pc = 0x12AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE30u;
    // 0x12ae34: 0x8fa80030  lw          $t0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127628u, 0x12AE30u, 0x12AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE38u;
label_12ae38:
    // 0x12ae38: 0x244e000c  addiu       $t6, $v0, 0xC
    ctx->pc = 0x12ae38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12ae3c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x12ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12ae40: 0xafae0058  sw          $t6, 0x58($sp)
    ctx->pc = 0x12ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 14));
    // 0x12ae44: 0x8faf0050  lw          $t7, 0x50($sp)
    ctx->pc = 0x12ae44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12ae48:
    // 0x12ae48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae4c: 0xc049d12  jal         func_127448
    ctx->pc = 0x12AE4Cu;
    SET_GPR_U32(ctx, 31, 0x12AE54u);
    ctx->pc = 0x12AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE4Cu;
    // 0x12ae50: 0x8de50004  lw          $a1, 0x4($t7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x12AE4Cu, 0x12AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE54u;
label_12ae54:
    // 0x12ae54: 0x8fac0050  lw          $t4, 0x50($sp)
    ctx->pc = 0x12ae54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ae58: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x12ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12ae5c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x12ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12ae60: 0x8d860010  lw          $a2, 0x10($t4)
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x12ae64: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12ae68: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12ae68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12ae6c: 0xc049c48  jal         func_127120
    ctx->pc = 0x12AE6Cu;
    SET_GPR_U32(ctx, 31, 0x12AE74u);
    ctx->pc = 0x12AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE6Cu;
    // 0x12ae70: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x12AE6Cu, 0x12AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE74u;
label_12ae74:
    // 0x12ae74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12ae78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12ae7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae80: 0xc04a05c  jal         func_128170
    ctx->pc = 0x12AE80u;
    SET_GPR_U32(ctx, 31, 0x12AE88u);
    ctx->pc = 0x12AE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE80u;
    // 0x12ae84: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128170u, 0x12AE80u, 0x12AE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE88u;
label_12ae88:
    // 0x12ae88: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x12ae8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ae90: 0xc049e26  jal         func_127898
    ctx->pc = 0x12AE90u;
    SET_GPR_U32(ctx, 31, 0x12AE98u);
    ctx->pc = 0x12AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE90u;
    // 0x12ae94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127898u, 0x12AE90u, 0x12AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE98u;
label_12ae98:
    // 0x12ae98: 0xdfad0018  ld          $t5, 0x18($sp)
    ctx->pc = 0x12ae98u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ae9c: 0x5a0016e  bltz        $t5, . + 4 + (0x16E << 2)
    ctx->pc = 0x12AE9Cu;
    {
        const bool branch_taken_0x12ae9c = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x12AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE9Cu;
        // 0x12aea0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae9c) {
            ctx->pc = 0x12B458u;
            goto label_12b458;
        }
    }
    ctx->pc = 0x12AEA4u;
    // 0x12aea4: 0x8fb10054  lw          $s1, 0x54($sp)
    ctx->pc = 0x12aea4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12aea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12aea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aeac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12aeacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aeb0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x12aeb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12aeb4:
    // 0x12aeb4: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12aeb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aeb8: 0x5e20002  bltzl       $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x12AEB8u;
    {
        const bool branch_taken_0x12aeb8 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x12aeb8) {
            ctx->pc = 0x12AEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AEB8u;
            // 0x12aebc: 0x22f8823  subu        $s1, $s1, $t7 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AEC4u;
            goto label_12aec4;
        }
    }
    ctx->pc = 0x12AEC0u;
    // 0x12aec0: 0x24f9021  addu        $s2, $s2, $t7
    ctx->pc = 0x12aec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
label_12aec4:
    // 0x12aec4: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x12aec4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12aec8: 0x25ec0433  addiu       $t4, $t7, 0x433
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1075));
    // 0x12aecc: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12aeccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12aed0: 0x25e2ffff  addiu       $v0, $t7, -0x1
    ctx->pc = 0x12aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12aed4: 0x284efc02  slti        $t6, $v0, -0x3FE
    ctx->pc = 0x12aed4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x12aed8: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AED8u;
    {
        const bool branch_taken_0x12aed8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AED8u;
        // 0x12aedc: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aed8) {
            ctx->pc = 0x12AEE8u;
            goto label_12aee8;
        }
    }
    ctx->pc = 0x12AEE0u;
    // 0x12aee0: 0x240f0036  addiu       $t7, $zero, 0x36
    ctx->pc = 0x12aee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x12aee4: 0x1ed6023  subu        $t4, $t7, $t5
    ctx->pc = 0x12aee4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_12aee8:
    // 0x12aee8: 0x22c1021  addu        $v0, $s1, $t4
    ctx->pc = 0x12aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 12)));
    // 0x12aeec: 0x24c9021  addu        $s2, $s2, $t4
    ctx->pc = 0x12aeecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x12aef0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12aef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aef4: 0x242782a  slt         $t7, $s2, $v0
    ctx->pc = 0x12aef4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12aef8: 0x24f100b  movn        $v0, $s2, $t7
    ctx->pc = 0x12aef8u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x12aefc: 0x262702a  slt         $t6, $s3, $v0
    ctx->pc = 0x12aefcu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12af00: 0x26e100b  movn        $v0, $s3, $t6
    ctx->pc = 0x12af00u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x12af04: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF04u;
    {
        const bool branch_taken_0x12af04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12af04) {
            ctx->pc = 0x12AF18u;
            goto label_12af18;
        }
    }
    ctx->pc = 0x12AF0Cu;
    // 0x12af0c: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x12af0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x12af10: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x12af10u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12af14: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x12af14u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_12af18:
    // 0x12af18: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x12AF18u;
    {
        const bool branch_taken_0x12af18 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x12AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF18u;
        // 0x12af1c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af18) {
            ctx->pc = 0x12AF50u;
            goto label_12af50;
        }
    }
    ctx->pc = 0x12AF20u;
    // 0x12af20: 0xc049eb6  jal         func_127AD8
    ctx->pc = 0x12AF20u;
    SET_GPR_U32(ctx, 31, 0x12AF28u);
    ctx->pc = 0x12AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF20u;
    // 0x12af24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127AD8u, 0x12AF20u, 0x12AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF28u;
label_12af28:
    // 0x12af28: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x12af28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12af2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12af2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12af30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af34: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12AF34u;
    SET_GPR_U32(ctx, 31, 0x12AF3Cu);
    ctx->pc = 0x12AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF34u;
    // 0x12af38: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12AF34u, 0x12AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF3Cu;
label_12af3c:
    // 0x12af3c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12af40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12af40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af44: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12AF44u;
    SET_GPR_U32(ctx, 31, 0x12AF4Cu);
    ctx->pc = 0x12AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF44u;
    // 0x12af48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12AF44u, 0x12AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF4Cu;
label_12af4c:
    // 0x12af4c: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x12af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
label_12af50:
    // 0x12af50: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AF50u;
    {
        const bool branch_taken_0x12af50 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF50u;
        // 0x12af54: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af50) {
            ctx->pc = 0x12AF68u;
            goto label_12af68;
        }
    }
    ctx->pc = 0x12AF58u;
    // 0x12af58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12af58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af5c: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x12AF5Cu;
    SET_GPR_U32(ctx, 31, 0x12AF64u);
    ctx->pc = 0x12AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF5Cu;
    // 0x12af60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x12AF5Cu, 0x12AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF64u;
label_12af64:
    // 0x12af64: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x12af64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_12af68:
    // 0x12af68: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AF68u;
    {
        const bool branch_taken_0x12af68 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x12AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF68u;
        // 0x12af6c: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af68) {
            ctx->pc = 0x12AF80u;
            goto label_12af80;
        }
    }
    ctx->pc = 0x12AF70u;
    // 0x12af70: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12af70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af74: 0xc049eb6  jal         func_127AD8
    ctx->pc = 0x12AF74u;
    SET_GPR_U32(ctx, 31, 0x12AF7Cu);
    ctx->pc = 0x12AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF74u;
    // 0x12af78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127AD8u, 0x12AF74u, 0x12AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF7Cu;
label_12af7c:
    // 0x12af7c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12af80:
    // 0x12af80: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AF80u;
    {
        const bool branch_taken_0x12af80 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x12AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF80u;
        // 0x12af84: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af80) {
            ctx->pc = 0x12AF98u;
            goto label_12af98;
        }
    }
    ctx->pc = 0x12AF88u;
    // 0x12af88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12af88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12af8c: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x12AF8Cu;
    SET_GPR_U32(ctx, 31, 0x12AF94u);
    ctx->pc = 0x12AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF8Cu;
    // 0x12af90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x12AF8Cu, 0x12AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF94u;
label_12af94:
    // 0x12af94: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x12af94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_12af98:
    // 0x12af98: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AF98u;
    {
        const bool branch_taken_0x12af98 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF98u;
        // 0x12af9c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af98) {
            ctx->pc = 0x12AFB0u;
            goto label_12afb0;
        }
    }
    ctx->pc = 0x12AFA0u;
    // 0x12afa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12afa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afa4: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x12AFA4u;
    SET_GPR_U32(ctx, 31, 0x12AFACu);
    ctx->pc = 0x12AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFA4u;
    // 0x12afa8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x12AFA4u, 0x12AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFACu;
label_12afac:
    // 0x12afac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12afacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12afb0:
    // 0x12afb0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12afb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afb8: 0xc049f6a  jal         func_127DA8
    ctx->pc = 0x12AFB8u;
    SET_GPR_U32(ctx, 31, 0x12AFC0u);
    ctx->pc = 0x12AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFB8u;
    // 0x12afbc: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127DA8u, 0x12AFB8u, 0x12AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFC0u;
label_12afc0:
    // 0x12afc0: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12afc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12afc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12afc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afcc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12afccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afd0: 0xc049f50  jal         func_127D40
    ctx->pc = 0x12AFD0u;
    SET_GPR_U32(ctx, 31, 0x12AFD8u);
    ctx->pc = 0x12AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFD0u;
    // 0x12afd4: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x12AFD0u, 0x12AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFD8u;
label_12afd8:
    // 0x12afd8: 0x441001f  bgez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12AFD8u;
    {
        const bool branch_taken_0x12afd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12afd8) {
            ctx->pc = 0x12B058u;
            goto label_12b058;
        }
    }
    ctx->pc = 0x12AFE0u;
    // 0x12afe0: 0x1640ff4a  bnez        $s2, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x12AFE0u;
    {
        const bool branch_taken_0x12afe0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFE0u;
        // 0x12afe4: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afe0) {
            ctx->pc = 0x12AD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad0c;
        }
    }
    ctx->pc = 0x12AFE8u;
    // 0x12afe8: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12afe8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12afec: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12afecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12aff0: 0x55e0ff47  bnel        $t7, $zero, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x12AFF0u;
    {
        const bool branch_taken_0x12aff0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12aff0) {
            ctx->pc = 0x12AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AFF0u;
            // 0x12aff4: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad10;
        }
    }
    ctx->pc = 0x12AFF8u;
    // 0x12aff8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12aff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12affc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12affcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b000: 0xc049ef8  jal         func_127BE0
    ctx->pc = 0x12B000u;
    SET_GPR_U32(ctx, 31, 0x12B008u);
    ctx->pc = 0x12B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B000u;
    // 0x12b004: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BE0u, 0x12B000u, 0x12B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B008u;
label_12b008:
    // 0x12b008: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12b008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b00c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b010: 0xc049f50  jal         func_127D40
    ctx->pc = 0x12B010u;
    SET_GPR_U32(ctx, 31, 0x12B018u);
    ctx->pc = 0x12B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B010u;
    // 0x12b014: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D40u, 0x12B010u, 0x12B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B018u;
label_12b018:
    // 0x12b018: 0x1840ff3c  blez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x12B018u;
    {
        const bool branch_taken_0x12b018 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B018u;
        // 0x12b01c: 0x15703f  dsra32      $t6, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b018) {
            ctx->pc = 0x12AD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad0c;
        }
    }
    ctx->pc = 0x12B020u;
label_12b020:
    // 0x12b020: 0x3c0f7ff0  lui         $t7, 0x7FF0
    ctx->pc = 0x12b020u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32752 << 16));
    // 0x12b024: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x12b024u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12b028: 0x3c0dfff0  lui         $t5, 0xFFF0
    ctx->pc = 0x12b028u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65520 << 16));
    // 0x12b02c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x12b02cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x12b030: 0x3c0f000f  lui         $t7, 0xF
    ctx->pc = 0x12b030u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
    // 0x12b034: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12b034u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12b038: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b03c: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x12b03cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x12b040: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x12b040u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12b044: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12b044u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12b048: 0x2ada824  and         $s5, $s5, $t5
    ctx->pc = 0x12b048u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 13));
    // 0x12b04c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12b04cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12b050: 0x1000ff2e  b           . + 4 + (-0xD2 << 2)
    ctx->pc = 0x12B050u;
    {
        const bool branch_taken_0x12b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B050u;
        // 0x12b054: 0x2ada825  or          $s5, $s5, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b050) {
            ctx->pc = 0x12AD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad0c;
        }
    }
    ctx->pc = 0x12B058u;
label_12b058:
    // 0x12b058: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x12B058u;
    {
        const bool branch_taken_0x12b058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B058u;
        // 0x12b05c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b058) {
            ctx->pc = 0x12B148u;
            goto label_12b148;
        }
    }
    ctx->pc = 0x12B060u;
    // 0x12b060: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x12B060u;
    {
        const bool branch_taken_0x12b060 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B060u;
        // 0x12b064: 0x240ef000  addiu       $t6, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b060) {
            ctx->pc = 0x12B128u;
            goto label_12b128;
        }
    }
    ctx->pc = 0x12B068u;
    // 0x12b068: 0xe733a  dsrl        $t6, $t6, 12
    ctx->pc = 0x12b068u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 12);
    // 0x12b06c: 0x2ae7824  and         $t7, $s5, $t6
    ctx->pc = 0x12b06cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
    // 0x12b070: 0x15ee000e  bne         $t7, $t6, . + 4 + (0xE << 2)
    ctx->pc = 0x12B070u;
    {
        const bool branch_taken_0x12b070 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B070u;
        // 0x12b074: 0x15783c  dsll32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b070) {
            ctx->pc = 0x12B0ACu;
            goto label_12b0ac;
        }
    }
    ctx->pc = 0x12B078u;
    // 0x12b078: 0x15783f  dsra32      $t7, $s5, 0
    ctx->pc = 0x12b078u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12b07c: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x12b080: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12b080u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x12b084: 0x3c0d0010  lui         $t5, 0x10
    ctx->pc = 0x12b084u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16 << 16));
    // 0x12b088: 0x1ed782d  daddu       $t7, $t7, $t5
    ctx->pc = 0x12b088u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 13));
    // 0x12b08c: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x12b08cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x12b090: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x12b090u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x12b094: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12b094u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12b098: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b09c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12b09cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12b0a0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12b0a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12b0a4: 0x1000ff19  b           . + 4 + (-0xE7 << 2)
    ctx->pc = 0x12B0A4u;
    {
        const bool branch_taken_0x12b0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0A4u;
        // 0x12b0a8: 0x2aea824  and         $s5, $s5, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0a4) {
            ctx->pc = 0x12AD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad0c;
        }
    }
    ctx->pc = 0x12B0ACu;
label_12b0ac:
    // 0x12b0ac: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12b0acu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12b0b0: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x12b0b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x12b0b4: 0x11e0ff16  beqz        $t7, . + 4 + (-0xEA << 2)
    ctx->pc = 0x12B0B4u;
    {
        const bool branch_taken_0x12b0b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0B4u;
        // 0x12b0b8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0b4) {
            ctx->pc = 0x12AD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad10;
        }
    }
    ctx->pc = 0x12B0BCu;
    // 0x12b0bc: 0x16400013  bnez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x12B0BCu;
    {
        const bool branch_taken_0x12b0bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b0bc) {
            ctx->pc = 0x12B10Cu;
            goto label_12b10c;
        }
    }
    ctx->pc = 0x12B0C4u;
    // 0x12b0c4: 0xc049fca  jal         func_127F28
    ctx->pc = 0x12B0C4u;
    SET_GPR_U32(ctx, 31, 0x12B0CCu);
    ctx->pc = 0x12B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0C4u;
    // 0x12b0c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F28u, 0x12B0C4u, 0x12B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0CCu;
label_12b0cc:
    // 0x12b0cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12b0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0d0: 0xc048a5c  jal         func_122970
    ctx->pc = 0x12B0D0u;
    SET_GPR_U32(ctx, 31, 0x12B0D8u);
    ctx->pc = 0x12B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0D0u;
    // 0x12b0d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x12B0D0u, 0x12B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0D8u;
label_12b0d8:
    // 0x12b0d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0e0: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B0E0u;
    SET_GPR_U32(ctx, 31, 0x12B0E8u);
    ctx->pc = 0x12B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0E0u;
    // 0x12b0e4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B0E0u, 0x12B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0E8u;
label_12b0e8:
    // 0x12b0e8: 0x1440ff09  bnez        $v0, . + 4 + (-0xF7 << 2)
    ctx->pc = 0x12B0E8u;
    {
        const bool branch_taken_0x12b0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0E8u;
        // 0x12b0ec: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0e8) {
            ctx->pc = 0x12AD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad10;
        }
    }
    ctx->pc = 0x12B0F0u;
label_12b0f0:
    // 0x12b0f0: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12b0f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12b0f4: 0x8fad0050  lw          $t5, 0x50($sp)
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b0f8: 0xaecf0000  sw          $t7, 0x0($s6)
    ctx->pc = 0x12b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 15));
    // 0x12b0fc: 0x11a0fdeb  beqz        $t5, . + 4 + (-0x215 << 2)
    ctx->pc = 0x12B0FCu;
    {
        const bool branch_taken_0x12b0fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0FCu;
        // 0x12b100: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0fc) {
            ctx->pc = 0x12A8ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a8ac;
        }
    }
    ctx->pc = 0x12B104u;
    // 0x12b104: 0x1000ff02  b           . + 4 + (-0xFE << 2)
    ctx->pc = 0x12B104u;
    {
        const bool branch_taken_0x12b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B104u;
        // 0x12b108: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b104) {
            ctx->pc = 0x12AD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad10;
        }
    }
    ctx->pc = 0x12B10Cu;
label_12b10c:
    // 0x12b10c: 0xc049fca  jal         func_127F28
    ctx->pc = 0x12B10Cu;
    SET_GPR_U32(ctx, 31, 0x12B114u);
    ctx->pc = 0x12B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B10Cu;
    // 0x12b110: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F28u, 0x12B10Cu, 0x12B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B114u;
label_12b114:
    // 0x12b114: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b118: 0xc048a46  jal         func_122918
    ctx->pc = 0x12B118u;
    SET_GPR_U32(ctx, 31, 0x12B120u);
    ctx->pc = 0x12B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B118u;
    // 0x12b11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12B118u, 0x12B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B120u;
label_12b120:
    // 0x12b120: 0x1000fefa  b           . + 4 + (-0x106 << 2)
    ctx->pc = 0x12B120u;
    {
        const bool branch_taken_0x12b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B120u;
        // 0x12b124: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b120) {
            ctx->pc = 0x12AD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad0c;
        }
    }
    ctx->pc = 0x12B128u;
label_12b128:
    // 0x12b128: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x12b128u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x12b12c: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12b12cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12b130: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12b130u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12b134: 0x15e0ffdd  bnez        $t7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12B134u;
    {
        const bool branch_taken_0x12b134 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B134u;
        // 0x12b138: 0x15783c  dsll32      $t7, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b134) {
            ctx->pc = 0x12B0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b0ac;
        }
    }
    ctx->pc = 0x12B13Cu;
    // 0x12b13c: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x12B13Cu;
    {
        const bool branch_taken_0x12b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B13Cu;
        // 0x12b140: 0x15703f  dsra32      $t6, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b13c) {
            ctx->pc = 0x12B020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b020;
        }
    }
    ctx->pc = 0x12B144u;
    // 0x12b144: 0x0  nop
    ctx->pc = 0x12b144u;
    // NOP
label_12b148:
    // 0x12b148: 0xc04a0ba  jal         func_1282E8
    ctx->pc = 0x12B148u;
    SET_GPR_U32(ctx, 31, 0x12B150u);
    ctx->pc = 0x12B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B148u;
    // 0x12b14c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1282E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1282E8u, 0x12B148u, 0x12B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B150u;
label_12b150:
    // 0x12b150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12b154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b15c: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B15Cu;
    SET_GPR_U32(ctx, 31, 0x12B164u);
    ctx->pc = 0x12B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B15Cu;
    // 0x12b160: 0x52fbc  dsll32      $a1, $a1, 30 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B15Cu, 0x12B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B164u;
label_12b164:
    // 0x12b164: 0x5c4000ac  bgtzl       $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x12B164u;
    {
        const bool branch_taken_0x12b164 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12b164) {
            ctx->pc = 0x12B168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B164u;
            // 0x12b168: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B418u;
            goto label_12b418;
        }
    }
    ctx->pc = 0x12B16Cu;
    // 0x12b16c: 0x1240008d  beqz        $s2, . + 4 + (0x8D << 2)
    ctx->pc = 0x12B16Cu;
    {
        const bool branch_taken_0x12b16c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B16Cu;
        // 0x12b170: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b16c) {
            ctx->pc = 0x12B3A4u;
            goto label_12b3a4;
        }
    }
    ctx->pc = 0x12B174u;
    // 0x12b174: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x12b178: 0x10853c  dsll32      $s0, $s0, 20
    ctx->pc = 0x12b178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    // 0x12b17c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12b17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b180:
    // 0x12b180: 0x15703f  dsra32      $t6, $s5, 0
    ctx->pc = 0x12b180u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12b184: 0x3c137ff0  lui         $s3, 0x7FF0
    ctx->pc = 0x12b184u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32752 << 16));
    // 0x12b188: 0x1d37824  and         $t7, $t6, $s3
    ctx->pc = 0x12b188u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x12b18c: 0xafaf0030  sw          $t7, 0x30($sp)
    ctx->pc = 0x12b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 15));
    // 0x12b190: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x12b190u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b194: 0x3c0f7fe0  lui         $t7, 0x7FE0
    ctx->pc = 0x12b194u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32736 << 16));
    // 0x12b198: 0x158f0063  bne         $t4, $t7, . + 4 + (0x63 << 2)
    ctx->pc = 0x12B198u;
    {
        const bool branch_taken_0x12b198 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B198u;
        // 0x12b19c: 0x3c0f0340  lui         $t7, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b198) {
            ctx->pc = 0x12B328u;
            goto label_12b328;
        }
    }
    ctx->pc = 0x12B1A0u;
    // 0x12b1a0: 0x3c0ffcb0  lui         $t7, 0xFCB0
    ctx->pc = 0x12b1a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64688 << 16));
    // 0x12b1a4: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x12b1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x12b1a8: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x12b1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12b1ac: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12b1acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b1b0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12b1b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12b1b4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12b1b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12b1b8: 0x2aea824  and         $s5, $s5, $t6
    ctx->pc = 0x12b1b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
    // 0x12b1bc: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12b1bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12b1c0: 0xc049fca  jal         func_127F28
    ctx->pc = 0x12B1C0u;
    SET_GPR_U32(ctx, 31, 0x12B1C8u);
    ctx->pc = 0x12B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1C0u;
    // 0x12b1c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F28u, 0x12B1C0u, 0x12B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1C8u;
label_12b1c8:
    // 0x12b1c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1cc: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12B1CCu;
    SET_GPR_U32(ctx, 31, 0x12B1D4u);
    ctx->pc = 0x12B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1CCu;
    // 0x12b1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12B1CCu, 0x12B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1D4u;
label_12b1d4:
    // 0x12b1d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b1d8: 0xc048a46  jal         func_122918
    ctx->pc = 0x12B1D8u;
    SET_GPR_U32(ctx, 31, 0x12B1E0u);
    ctx->pc = 0x12B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B1D8u;
    // 0x12b1dc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12B1D8u, 0x12B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1E0u;
label_12b1e0:
    // 0x12b1e0: 0x3c0f7c9f  lui         $t7, 0x7C9F
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)31903 << 16));
    // 0x12b1e4: 0x2683f  dsra32      $t5, $v0, 0
    ctx->pc = 0x12b1e4u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12b1e8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12b1e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12b1ec: 0x1b37024  and         $t6, $t5, $s3
    ctx->pc = 0x12b1ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 19));
    // 0x12b1f0: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x12b1f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12b1f4: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x12B1F4u;
    {
        const bool branch_taken_0x12b1f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1F4u;
        // 0x12b1f8: 0x240ff801  addiu       $t7, $zero, -0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1f4) {
            ctx->pc = 0x12B264u;
            goto label_12b264;
        }
    }
    ctx->pc = 0x12B1FCu;
    // 0x12b1fc: 0xdfac0040  ld          $t4, 0x40($sp)
    ctx->pc = 0x12b1fcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b200: 0xf7d3c  dsll32      $t7, $t7, 20
    ctx->pc = 0x12b200u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
    // 0x12b204: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x12b204u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x12b208: 0x118ffeba  beq         $t4, $t7, . + 4 + (-0x146 << 2)
    ctx->pc = 0x12B208u;
    {
        const bool branch_taken_0x12b208 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B208u;
        // 0x12b20c: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b208) {
            ctx->pc = 0x12ACF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acf4;
        }
    }
    ctx->pc = 0x12B210u;
    // 0x12b210: 0x3c0f7fef  lui         $t7, 0x7FEF
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
    // 0x12b214: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x12b214u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x12b218: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12b218u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12b21c: 0x4da824  and         $s5, $v0, $t5
    ctx->pc = 0x12b21cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x12b220: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12b220u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12b224: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12b224u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x12b228: 0x2ada825  or          $s5, $s5, $t5
    ctx->pc = 0x12b228u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 13));
    // 0x12b22c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12b230:
    // 0x12b230: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12B230u;
    SET_GPR_U32(ctx, 31, 0x12B238u);
    ctx->pc = 0x12B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B230u;
    // 0x12b234: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12B230u, 0x12B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B238u;
label_12b238:
    // 0x12b238: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x12b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12b23c: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12B23Cu;
    SET_GPR_U32(ctx, 31, 0x12B244u);
    ctx->pc = 0x12B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B23Cu;
    // 0x12b240: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12B23Cu, 0x12B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B244u;
label_12b244:
    // 0x12b244: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12b244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b248: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12B248u;
    SET_GPR_U32(ctx, 31, 0x12B250u);
    ctx->pc = 0x12B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B248u;
    // 0x12b24c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12B248u, 0x12B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B250u;
label_12b250:
    // 0x12b250: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12b250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b254: 0xc049d3c  jal         func_1274F0
    ctx->pc = 0x12B254u;
    SET_GPR_U32(ctx, 31, 0x12B25Cu);
    ctx->pc = 0x12B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B254u;
    // 0x12b258: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1274F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1274F0u, 0x12B254u, 0x12B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B25Cu;
label_12b25c:
    // 0x12b25c: 0x1000fefa  b           . + 4 + (-0x106 << 2)
    ctx->pc = 0x12B25Cu;
    {
        const bool branch_taken_0x12b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B25Cu;
        // 0x12b260: 0x8faf0050  lw          $t7, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b25c) {
            ctx->pc = 0x12AE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ae48;
        }
    }
    ctx->pc = 0x12B264u;
label_12b264:
    // 0x12b264: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12b264u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b268: 0x3c0f0350  lui         $t7, 0x350
    ctx->pc = 0x12b268u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)848 << 16));
    // 0x12b26c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12b26cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12b270: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x12b270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12b274: 0x4ea824  and         $s5, $v0, $t6
    ctx->pc = 0x12b274u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x12b278: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12b278u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12b27c: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x12b27cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
label_12b280:
    // 0x12b280: 0x8fad0030  lw          $t5, 0x30($sp)
    ctx->pc = 0x12b280u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b284: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x12b284u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x12b288: 0xd783c  dsll32      $t7, $t5, 0
    ctx->pc = 0x12b288u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12b28c: 0x15683f  dsra32      $t5, $s5, 0
    ctx->pc = 0x12b28cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 21) >> (32 + 0));
    // 0x12b290: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12b290u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12b294: 0x1ae8824  and         $s1, $t5, $t6
    ctx->pc = 0x12b294u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x12b298: 0x15f1ffe5  bne         $t7, $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12B298u;
    {
        const bool branch_taken_0x12b298 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        ctx->pc = 0x12B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B298u;
        // 0x12b29c: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b298) {
            ctx->pc = 0x12B230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B2A0u;
    // 0x12b2a0: 0xc04812e  jal         func_1204B8
    ctx->pc = 0x12B2A0u;
    SET_GPR_U32(ctx, 31, 0x12B2A8u);
    ctx->pc = 0x12B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2A0u;
    // 0x12b2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1204B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204B8u, 0x12B2A0u, 0x12B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2A8u;
label_12b2a8:
    // 0x12b2a8: 0xc048096  jal         func_120258
    ctx->pc = 0x12B2A8u;
    SET_GPR_U32(ctx, 31, 0x12B2B0u);
    ctx->pc = 0x12B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2A8u;
    // 0x12b2ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120258u, 0x12B2A8u, 0x12B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2B0u;
label_12b2b0:
    // 0x12b2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b2b4: 0xc048a5c  jal         func_122970
    ctx->pc = 0x12B2B4u;
    SET_GPR_U32(ctx, 31, 0x12B2BCu);
    ctx->pc = 0x12B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2B4u;
    // 0x12b2b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x12B2B4u, 0x12B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2BCu;
label_12b2bc:
    // 0x12b2bc: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B2BCu;
    {
        const bool branch_taken_0x12b2bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2BCu;
        // 0x12b2c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2bc) {
            ctx->pc = 0x12B2D8u;
            goto label_12b2d8;
        }
    }
    ctx->pc = 0x12B2C4u;
    // 0x12b2c4: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x12b2c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x12b2c8: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12b2c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12b2cc: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12b2ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12b2d0: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x12B2D0u;
    {
        const bool branch_taken_0x12b2d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D0u;
        // 0x12b2d4: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2d0) {
            ctx->pc = 0x12B318u;
            goto label_12b318;
        }
    }
    ctx->pc = 0x12B2D8u;
label_12b2d8:
    // 0x12b2d8: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12b2d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12b2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b2e0: 0x25cebaa0  addiu       $t6, $t6, -0x4560
    ctx->pc = 0x12b2e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949536));
    // 0x12b2e4: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B2E4u;
    SET_GPR_U32(ctx, 31, 0x12B2ECu);
    ctx->pc = 0x12B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2E4u;
    // 0x12b2e8: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B2E4u, 0x12B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2ECu;
label_12b2ec:
    // 0x12b2ec: 0x440fe87  bltz        $v0, . + 4 + (-0x179 << 2)
    ctx->pc = 0x12B2ECu;
    {
        const bool branch_taken_0x12b2ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2ECu;
        // 0x12b2f0: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b2ec) {
            ctx->pc = 0x12AD0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad0c;
        }
    }
    ctx->pc = 0x12B2F4u;
    // 0x12b2f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b2f8: 0xdde4baa8  ld          $a0, -0x4558($t7)
    ctx->pc = 0x12b2f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294949544)));
label_12b2fc:
    // 0x12b2fc: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B2FCu;
    SET_GPR_U32(ctx, 31, 0x12B304u);
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B2FCu, 0x12B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B304u;
label_12b304:
    // 0x12b304: 0x440fe82  bltz        $v0, . + 4 + (-0x17E << 2)
    ctx->pc = 0x12B304u;
    {
        const bool branch_taken_0x12b304 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B304u;
        // 0x12b308: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b304) {
            ctx->pc = 0x12AD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ad10;
        }
    }
    ctx->pc = 0x12B30Cu;
    // 0x12b30c: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x12B30Cu;
    {
        const bool branch_taken_0x12b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b30c) {
            ctx->pc = 0x12B230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b230;
        }
    }
    ctx->pc = 0x12B314u;
    // 0x12b314: 0x0  nop
    ctx->pc = 0x12b314u;
    // NOP
label_12b318:
    // 0x12b318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b31c: 0x25efbab0  addiu       $t7, $t7, -0x4550
    ctx->pc = 0x12b31cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949552));
    // 0x12b320: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x12B320u;
    {
        const bool branch_taken_0x12b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B320u;
        // 0x12b324: 0xdde50000  ld          $a1, 0x0($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b320) {
            ctx->pc = 0x12B2FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b2fc;
        }
    }
    ctx->pc = 0x12B328u;
label_12b328:
    // 0x12b328: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x12b328u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12b32c: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12B32Cu;
    {
        const bool branch_taken_0x12b32c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B32Cu;
        // 0x12b330: 0x240403ff  addiu       $a0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b32c) {
            ctx->pc = 0x12B37Cu;
            goto label_12b37c;
        }
    }
    ctx->pc = 0x12B334u;
    // 0x12b334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b338: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B338u;
    SET_GPR_U32(ctx, 31, 0x12B340u);
    ctx->pc = 0x12B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B338u;
    // 0x12b33c: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B338u, 0x12B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B340u;
label_12b340:
    // 0x12b340: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12B340u;
    {
        const bool branch_taken_0x12b340 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B340u;
        // 0x12b344: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b340) {
            ctx->pc = 0x12B37Cu;
            goto label_12b37c;
        }
    }
    ctx->pc = 0x12B348u;
    // 0x12b348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b34c: 0xc048a46  jal         func_122918
    ctx->pc = 0x12B34Cu;
    SET_GPR_U32(ctx, 31, 0x12B354u);
    ctx->pc = 0x12B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B34Cu;
    // 0x12b350: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12B34Cu, 0x12B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B354u;
label_12b354:
    // 0x12b354: 0xc048bde  jal         func_122F78
    ctx->pc = 0x12B354u;
    SET_GPR_U32(ctx, 31, 0x12B35Cu);
    ctx->pc = 0x12B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B354u;
    // 0x12b358: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x12B354u, 0x12B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B35Cu;
label_12b35c:
    // 0x12b35c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x12B35Cu;
    SET_GPR_U32(ctx, 31, 0x12B364u);
    ctx->pc = 0x12B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B35Cu;
    // 0x12b360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x12B35Cu, 0x12B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B364u;
label_12b364:
    // 0x12b364: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B364u;
    {
        const bool branch_taken_0x12b364 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B364u;
        // 0x12b368: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b364) {
            ctx->pc = 0x12B37Cu;
            goto label_12b37c;
        }
    }
    ctx->pc = 0x12B36Cu;
    // 0x12b36c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b370: 0xc048a5c  jal         func_122970
    ctx->pc = 0x12B370u;
    SET_GPR_U32(ctx, 31, 0x12B378u);
    ctx->pc = 0x12B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B370u;
    // 0x12b374: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x12B370u, 0x12B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B378u;
label_12b378:
    // 0x12b378: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b37c:
    // 0x12b37c: 0xc049fca  jal         func_127F28
    ctx->pc = 0x12B37Cu;
    SET_GPR_U32(ctx, 31, 0x12B384u);
    ctx->pc = 0x12B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B37Cu;
    // 0x12b380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F28u, 0x12B37Cu, 0x12B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B384u;
label_12b384:
    // 0x12b384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b388: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12B388u;
    SET_GPR_U32(ctx, 31, 0x12B390u);
    ctx->pc = 0x12B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B388u;
    // 0x12b38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12B388u, 0x12B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B390u;
label_12b390:
    // 0x12b390: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b394: 0xc048a46  jal         func_122918
    ctx->pc = 0x12B394u;
    SET_GPR_U32(ctx, 31, 0x12B39Cu);
    ctx->pc = 0x12B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B394u;
    // 0x12b398: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12B394u, 0x12B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B39Cu;
label_12b39c:
    // 0x12b39c: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x12B39Cu;
    {
        const bool branch_taken_0x12b39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B39Cu;
        // 0x12b3a0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b39c) {
            ctx->pc = 0x12B280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b280;
        }
    }
    ctx->pc = 0x12B3A4u;
label_12b3a4:
    // 0x12b3a4: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12b3a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12b3a8: 0x2af7824  and         $t7, $s5, $t7
    ctx->pc = 0x12b3a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) & GPR_U64(ctx, 15));
    // 0x12b3ac: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B3ACu;
    {
        const bool branch_taken_0x12b3ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3ACu;
        // 0x12b3b0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3ac) {
            ctx->pc = 0x12B3CCu;
            goto label_12b3cc;
        }
    }
    ctx->pc = 0x12B3B4u;
    // 0x12b3b4: 0x12afff4e  beq         $s5, $t7, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x12B3B4u;
    {
        const bool branch_taken_0x12b3b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3B4u;
        // 0x12b3b8: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3b4) {
            ctx->pc = 0x12B0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b0f0;
        }
    }
    ctx->pc = 0x12B3BCu;
    // 0x12b3bc: 0x2411fbff  addiu       $s1, $zero, -0x401
    ctx->pc = 0x12b3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x12b3c0: 0x10853c  dsll32      $s0, $s0, 20
    ctx->pc = 0x12b3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    // 0x12b3c4: 0x1000ff6e  b           . + 4 + (-0x92 << 2)
    ctx->pc = 0x12B3C4u;
    {
        const bool branch_taken_0x12b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3C4u;
        // 0x12b3c8: 0x118d3c  dsll32      $s1, $s1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3c4) {
            ctx->pc = 0x12B180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b180;
        }
    }
    ctx->pc = 0x12B3CCu;
label_12b3cc:
    // 0x12b3cc: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x12b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x12b3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b3d4: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B3D4u;
    SET_GPR_U32(ctx, 31, 0x12B3DCu);
    ctx->pc = 0x12B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3D4u;
    // 0x12b3d8: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B3D4u, 0x12B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3DCu;
label_12b3dc:
    // 0x12b3dc: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B3DCu;
    {
        const bool branch_taken_0x12b3dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12b3dc) {
            ctx->pc = 0x12B3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B3DCu;
            // 0x12b3e0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B400u;
            goto label_12b400;
        }
    }
    ctx->pc = 0x12B3E4u;
    // 0x12b3e4: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x12b3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x12b3e8: 0x10857c  dsll32      $s0, $s0, 21
    ctx->pc = 0x12b3e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 21));
label_12b3ec:
    // 0x12b3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b3f0: 0xc048a5c  jal         func_122970
    ctx->pc = 0x12B3F0u;
    SET_GPR_U32(ctx, 31, 0x12B3F8u);
    ctx->pc = 0x12B3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3F0u;
    // 0x12b3f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x12B3F0u, 0x12B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3F8u;
label_12b3f8:
    // 0x12b3f8: 0x1000ff61  b           . + 4 + (-0x9F << 2)
    ctx->pc = 0x12B3F8u;
    {
        const bool branch_taken_0x12b3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3F8u;
        // 0x12b3fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3f8) {
            ctx->pc = 0x12B180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b180;
        }
    }
    ctx->pc = 0x12B400u;
label_12b400:
    // 0x12b400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b404: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12B404u;
    SET_GPR_U32(ctx, 31, 0x12B40Cu);
    ctx->pc = 0x12B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B404u;
    // 0x12b408: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12B404u, 0x12B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B40Cu;
label_12b40c:
    // 0x12b40c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12B40Cu;
    {
        const bool branch_taken_0x12b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B40Cu;
        // 0x12b410: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b40c) {
            ctx->pc = 0x12B3ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b3ec;
        }
    }
    ctx->pc = 0x12B414u;
    // 0x12b414: 0x0  nop
    ctx->pc = 0x12b414u;
    // NOP
label_12b418:
    // 0x12b418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b41c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12B41Cu;
    SET_GPR_U32(ctx, 31, 0x12B424u);
    ctx->pc = 0x12B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B41Cu;
    // 0x12b420: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12B41Cu, 0x12B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B424u;
label_12b424:
    // 0x12b424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12b424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b428: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B428u;
    {
        const bool branch_taken_0x12b428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B428u;
        // 0x12b42c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b428) {
            ctx->pc = 0x12B440u;
            goto label_12b440;
        }
    }
    ctx->pc = 0x12B430u;
    // 0x12b430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b434: 0xc048a5c  jal         func_122970
    ctx->pc = 0x12B434u;
    SET_GPR_U32(ctx, 31, 0x12B43Cu);
    ctx->pc = 0x12B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B434u;
    // 0x12b438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x12B434u, 0x12B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B43Cu;
label_12b43c:
    // 0x12b43c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b440:
    // 0x12b440: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x12b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x12b444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b448: 0xc048a46  jal         func_122918
    ctx->pc = 0x12B448u;
    SET_GPR_U32(ctx, 31, 0x12B450u);
    ctx->pc = 0x12B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B448u;
    // 0x12b44c: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12B448u, 0x12B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B450u;
label_12b450:
    // 0x12b450: 0x1000ff4b  b           . + 4 + (-0xB5 << 2)
    ctx->pc = 0x12B450u;
    {
        const bool branch_taken_0x12b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B450u;
        // 0x12b454: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b450) {
            ctx->pc = 0x12B180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b180;
        }
    }
    ctx->pc = 0x12B458u;
label_12b458:
    // 0x12b458: 0x8fae0054  lw          $t6, 0x54($sp)
    ctx->pc = 0x12b458u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12b45c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12b45cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b460: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b464: 0xe9023  negu        $s2, $t6
    ctx->pc = 0x12b464u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x12b468: 0x1000fe92  b           . + 4 + (-0x16E << 2)
    ctx->pc = 0x12B468u;
    {
        const bool branch_taken_0x12b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B468u;
        // 0x12b46c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b468) {
            ctx->pc = 0x12AEB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aeb4;
        }
    }
    ctx->pc = 0x12B470u;
label_12b470:
    // 0x12b470: 0x3c0f0350  lui         $t7, 0x350
    ctx->pc = 0x12b470u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)848 << 16));
    // 0x12b474: 0x50a824  and         $s5, $v0, $s0
    ctx->pc = 0x12b474u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x12b478: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x12b478u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12b47c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12b47cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12b480: 0x1000fe67  b           . + 4 + (-0x199 << 2)
    ctx->pc = 0x12B480u;
    {
        const bool branch_taken_0x12b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B480u;
        // 0x12b484: 0x2afa825  or          $s5, $s5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b480) {
            ctx->pc = 0x12AE20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ae20;
        }
    }
    ctx->pc = 0x12B488u;
label_12b488:
    // 0x12b488: 0x601fe66  bgez        $s0, . + 4 + (-0x19A << 2)
    ctx->pc = 0x12B488u;
    {
        const bool branch_taken_0x12b488 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B488u;
        // 0x12b48c: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b488) {
            ctx->pc = 0x12AE24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ae24;
        }
    }
    ctx->pc = 0x12B490u;
    // 0x12b490: 0x108023  negu        $s0, $s0
    ctx->pc = 0x12b490u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x12b494: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x12b494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x12b498: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B498u;
    {
        const bool branch_taken_0x12b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B498u;
        // 0x12b49c: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b498) {
            ctx->pc = 0x12B4BCu;
            goto label_12b4bc;
        }
    }
    ctx->pc = 0x12B4A0u;
    // 0x12b4a0: 0x270c0  sll         $t6, $v0, 3
    ctx->pc = 0x12b4a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b4a4: 0x25efb978  addiu       $t7, $t7, -0x4688
    ctx->pc = 0x12b4a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949240));
    // 0x12b4a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4ac: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12b4acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12b4b0: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x12B4B0u;
    SET_GPR_U32(ctx, 31, 0x12B4B8u);
    ctx->pc = 0x12B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B4B0u;
    // 0x12b4b4: 0xddc50000  ld          $a1, 0x0($t6) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x12B4B0u, 0x12B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B4B8u;
label_12b4b8:
    // 0x12b4b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12b4b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b4bc:
    // 0x12b4bc: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x12b4bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12b4c0: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x12b4c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x12b4c4: 0x1200fe56  beqz        $s0, . + 4 + (-0x1AA << 2)
    ctx->pc = 0x12B4C4u;
    {
        const bool branch_taken_0x12b4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4C4u;
        // 0x12b4c8: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4c4) {
            ctx->pc = 0x12AE20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ae20;
        }
    }
    ctx->pc = 0x12B4CCu;
    // 0x12b4cc: 0x2a0f0020  slti        $t7, $s0, 0x20
    ctx->pc = 0x12b4ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x12b4d0: 0x11e0ff07  beqz        $t7, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x12B4D0u;
    {
        const bool branch_taken_0x12b4d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4D0u;
        // 0x12b4d4: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4d0) {
            ctx->pc = 0x12B0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b0f0;
        }
    }
    ctx->pc = 0x12B4D8u;
    // 0x12b4d8: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12B4D8u;
    {
        const bool branch_taken_0x12b4d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4D8u;
        // 0x12b4dc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4d8) {
            ctx->pc = 0x12B524u;
            goto label_12b524;
        }
    }
    ctx->pc = 0x12B4E0u;
    // 0x12b4e0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x12b4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4e4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12b4e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12b4e8: 0x180982d  daddu       $s3, $t4, $zero
    ctx->pc = 0x12b4e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4ec: 0x25f0ba68  addiu       $s0, $t7, -0x4598
    ctx->pc = 0x12b4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949480));
label_12b4f0:
    // 0x12b4f0: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x12b4f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12b4f4: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B4F4u;
    {
        const bool branch_taken_0x12b4f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b4f4) {
            ctx->pc = 0x12B4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B4F4u;
            // 0x12b4f8: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B510u;
            goto label_12b510;
        }
    }
    ctx->pc = 0x12B4FCu;
    // 0x12b4fc: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x12b4fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b500: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12B500u;
    SET_GPR_U32(ctx, 31, 0x12B508u);
    ctx->pc = 0x12B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B500u;
    // 0x12b504: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12B500u, 0x12B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B508u;
label_12b508:
    // 0x12b508: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12b508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b50c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x12b50cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_12b510:
    // 0x12b510: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x12b510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12b514: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x12b514u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b518: 0x11e0fff5  beqz        $t7, . + 4 + (-0xB << 2)
    ctx->pc = 0x12B518u;
    {
        const bool branch_taken_0x12b518 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B518u;
        // 0x12b51c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b518) {
            ctx->pc = 0x12B4F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b4f0;
        }
    }
    ctx->pc = 0x12B520u;
    // 0x12b520: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x12b520u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12b524:
    // 0x12b524: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12b524u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12b528: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x12b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x12b52c: 0xc70c0  sll         $t6, $t4, 3
    ctx->pc = 0x12b52cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x12b530: 0x25efba68  addiu       $t7, $t7, -0x4598
    ctx->pc = 0x12b530u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949480));
    // 0x12b534: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12b534u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12b538: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b53c: 0xddd00000  ld          $s0, 0x0($t6)
    ctx->pc = 0x12b53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12b540: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b544: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12B544u;
    SET_GPR_U32(ctx, 31, 0x12B54Cu);
    ctx->pc = 0x12B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B544u;
    // 0x12b548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12B544u, 0x12B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B54Cu;
label_12b54c:
    // 0x12b54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b550: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12b550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b554: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B554u;
    SET_GPR_U32(ctx, 31, 0x12B55Cu);
    ctx->pc = 0x12B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B554u;
    // 0x12b558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B554u, 0x12B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B55Cu;
label_12b55c:
    // 0x12b55c: 0x5440fe31  bnel        $v0, $zero, . + 4 + (-0x1CF << 2)
    ctx->pc = 0x12B55Cu;
    {
        const bool branch_taken_0x12b55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b55c) {
            ctx->pc = 0x12B560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B55Cu;
            // 0x12b560: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AE24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ae24;
        }
    }
    ctx->pc = 0x12B564u;
    // 0x12b564: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x12b564u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b568: 0xc048a46  jal         func_122918
    ctx->pc = 0x12B568u;
    SET_GPR_U32(ctx, 31, 0x12B570u);
    ctx->pc = 0x12B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B568u;
    // 0x12b56c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12B568u, 0x12B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B570u;
label_12b570:
    // 0x12b570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b574: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x12B574u;
    SET_GPR_U32(ctx, 31, 0x12B57Cu);
    ctx->pc = 0x12B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B574u;
    // 0x12b578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x12B574u, 0x12B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B57Cu;
label_12b57c:
    // 0x12b57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b580: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x12B580u;
    SET_GPR_U32(ctx, 31, 0x12B588u);
    ctx->pc = 0x12B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B580u;
    // 0x12b584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x12B580u, 0x12B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B588u;
label_12b588:
    // 0x12b588: 0x1040fed9  beqz        $v0, . + 4 + (-0x127 << 2)
    ctx->pc = 0x12B588u;
    {
        const bool branch_taken_0x12b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B588u;
        // 0x12b58c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b588) {
            ctx->pc = 0x12B0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b0f0;
        }
    }
    ctx->pc = 0x12B590u;
    // 0x12b590: 0x1000fe24  b           . + 4 + (-0x1DC << 2)
    ctx->pc = 0x12B590u;
    {
        const bool branch_taken_0x12b590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B590u;
        // 0x12b594: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b590) {
            ctx->pc = 0x12AE24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ae24;
        }
    }
    ctx->pc = 0x12B598u;
label_12b598:
    // 0x12b598: 0x11787a  dsrl        $t7, $s1, 1
    ctx->pc = 0x12b598u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 1);
    // 0x12b59c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x12b59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x12b5a0: 0xc048096  jal         func_120258
    ctx->pc = 0x12B5A0u;
    SET_GPR_U32(ctx, 31, 0x12B5A8u);
    ctx->pc = 0x12B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5A0u;
    // 0x12b5a4: 0x8f2025  or          $a0, $a0, $t7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120258u, 0x12B5A0u, 0x12B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5A8u;
label_12b5a8:
    // 0x12b5a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5ac: 0xc048a46  jal         func_122918
    ctx->pc = 0x12B5ACu;
    SET_GPR_U32(ctx, 31, 0x12B5B4u);
    ctx->pc = 0x12B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5ACu;
    // 0x12b5b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x12B5ACu, 0x12B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B5B4u;
label_12b5b4:
    // 0x12b5b4: 0x1000fdb8  b           . + 4 + (-0x248 << 2)
    ctx->pc = 0x12B5B4u;
    {
        const bool branch_taken_0x12b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5B4u;
        // 0x12b5b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5b4) {
            ctx->pc = 0x12AC98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ac98;
        }
    }
    ctx->pc = 0x12B5BCu;
label_12b5bc:
    // 0x12b5bc: 0x1000fd8a  b           . + 4 + (-0x276 << 2)
    ctx->pc = 0x12B5BCu;
    {
        const bool branch_taken_0x12b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5BCu;
        // 0x12b5c0: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5bc) {
            ctx->pc = 0x12ABE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12B5C4u;
label_12b5c4:
    // 0x12b5c4: 0x1000fd88  b           . + 4 + (-0x278 << 2)
    ctx->pc = 0x12B5C4u;
    {
        const bool branch_taken_0x12b5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5C4u;
        // 0x12b5c8: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5c4) {
            ctx->pc = 0x12ABE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12abe8;
        }
    }
    ctx->pc = 0x12B5CCu;
label_12b5cc:
    // 0x12b5cc: 0x2a4f0011  slti        $t7, $s2, 0x11
    ctx->pc = 0x12b5ccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b5d0: 0x11e0fd2f  beqz        $t7, . + 4 + (-0x2D1 << 2)
    ctx->pc = 0x12B5D0u;
    {
        const bool branch_taken_0x12b5d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5D0u;
        // 0x12b5d4: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5d0) {
            ctx->pc = 0x12AA90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aa90;
        }
    }
    ctx->pc = 0x12B5D8u;
    // 0x12b5d8: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x12b5d8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x12b5dc: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x12b5dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12b5e0: 0x1000fd2b  b           . + 4 + (-0x2D5 << 2)
    ctx->pc = 0x12B5E0u;
    {
        const bool branch_taken_0x12b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5E0u;
        // 0x12b5e4: 0x16f882d  daddu       $s1, $t3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5e0) {
            ctx->pc = 0x12AA90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aa90;
        }
    }
    ctx->pc = 0x12B5E8u;
label_12b5e8:
    // 0x12b5e8: 0x28ef0011  slti        $t7, $a3, 0x11
    ctx->pc = 0x12b5e8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12b5ec: 0x11e0fd1b  beqz        $t7, . + 4 + (-0x2E5 << 2)
    ctx->pc = 0x12B5ECu;
    {
        const bool branch_taken_0x12b5ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5ECu;
        // 0x12b5f0: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5ec) {
            ctx->pc = 0x12AA5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aa5c;
        }
    }
    ctx->pc = 0x12B5F4u;
    // 0x12b5f4: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x12b5f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x12b5f8: 0x1000fd18  b           . + 4 + (-0x2E8 << 2)
    ctx->pc = 0x12B5F8u;
    {
        const bool branch_taken_0x12b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5F8u;
        // 0x12b5fc: 0xf8878  dsll        $s1, $t7, 1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 15) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5f8) {
            ctx->pc = 0x12AA5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aa5c;
        }
    }
    ctx->pc = 0x12B600u;
label_12b600:
    // 0x12b600: 0x248bffd0  addiu       $t3, $a0, -0x30
    ctx->pc = 0x12b600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12b604: 0x2d6f000a  sltiu       $t7, $t3, 0xA
    ctx->pc = 0x12b604u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12b608: 0x11e0fd29  beqz        $t7, . + 4 + (-0x2D7 << 2)
    ctx->pc = 0x12B608u;
    {
        const bool branch_taken_0x12b608 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B608u;
        // 0x12b60c: 0x240f0065  addiu       $t7, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b608) {
            ctx->pc = 0x12AAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aab0;
        }
    }
    ctx->pc = 0x12B610u;
    // 0x12b610: 0x1000fd04  b           . + 4 + (-0x2FC << 2)
    ctx->pc = 0x12B610u;
    {
        const bool branch_taken_0x12b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b610) {
            ctx->pc = 0x12AA24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12aa24;
        }
    }
    ctx->pc = 0x12B618u;
label_12b618:
    // 0x12b618: 0x2a4f0010  slti        $t7, $s2, 0x10
    ctx->pc = 0x12b618u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12b61c: 0x11e0fcde  beqz        $t7, . + 4 + (-0x322 << 2)
    ctx->pc = 0x12B61Cu;
    {
        const bool branch_taken_0x12b61c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B61Cu;
        // 0x12b620: 0x1178b8  dsll        $t7, $s1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b61c) {
            ctx->pc = 0x12A998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a998;
        }
    }
    ctx->pc = 0x12B624u;
    // 0x12b624: 0x1f1782d  daddu       $t7, $t7, $s1
    ctx->pc = 0x12b624u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 17));
    // 0x12b628: 0xf7878  dsll        $t7, $t7, 1
    ctx->pc = 0x12b628u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 1);
    // 0x12b62c: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x12b62cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12b630: 0x1000fcd9  b           . + 4 + (-0x327 << 2)
    ctx->pc = 0x12B630u;
    {
        const bool branch_taken_0x12b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B630u;
        // 0x12b634: 0x65f1ffd0  daddiu      $s1, $t7, -0x30 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294967248);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b630) {
            ctx->pc = 0x12A998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a998;
        }
    }
    ctx->pc = 0x12B638u;
label_12b638:
    // 0x12b638: 0x1000fc89  b           . + 4 + (-0x377 << 2)
    ctx->pc = 0x12B638u;
    {
        const bool branch_taken_0x12b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B638u;
        // 0x12b63c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b638) {
            ctx->pc = 0x12A860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a860;
        }
    }
    ctx->pc = 0x12B640u;
    // 0x12b640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b644: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12b644u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b64c: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x12b64cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x12b650: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12b650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b654: 0x8dc4bde8  lw          $a0, -0x4218($t6)
    ctx->pc = 0x12b654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294950376)));
    // 0x12b658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b65c: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x12b65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b660: 0x804aa06  j           func_12A818
    ctx->pc = 0x12B660u;
    ctx->pc = 0x12B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B660u;
    // 0x12b664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A818u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_12a818;
    ctx->pc = 0x12B668u;
    // 0x12b668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b66c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x12b66cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b670: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12b670u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12b674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b678: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b67c: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x12b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12b680: 0xc04aa06  jal         func_12A818
    ctx->pc = 0x12B680u;
    SET_GPR_U32(ctx, 31, 0x12B688u);
    ctx->pc = 0x12B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B680u;
    // 0x12b684: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A818u;
    goto label_12a818;
    ctx->pc = 0x12B688u;
label_12b688:
    // 0x12b688: 0xc048c12  jal         func_123048
    ctx->pc = 0x12B688u;
    SET_GPR_U32(ctx, 31, 0x12B690u);
    ctx->pc = 0x12B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B688u;
    // 0x12b68c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x12B688u, 0x12B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B690u;
label_12b690:
    // 0x12b690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b694: 0x3e00008  jr          $ra
    ctx->pc = 0x12B694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B694u;
        // 0x12b698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B69Cu;
    // 0x12b69c: 0x0  nop
    ctx->pc = 0x12b69cu;
    // NOP
}
