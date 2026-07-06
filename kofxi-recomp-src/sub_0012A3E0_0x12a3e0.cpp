#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A3E0
// Address: 0x12a3e0 - 0x12a598
void sub_0012A3E0_0x12a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A3E0_0x12a3e0");
#endif

    switch (ctx->pc) {
        case 0x12a3e8u: goto label_12a3e8;
        case 0x12a3f0u: goto label_12a3f0;
        case 0x12a46cu: goto label_12a46c;
        case 0x12a500u: goto label_12a500;
        case 0x12a560u: goto label_12a560;
        default: break;
    }

    ctx->pc = 0x12a3e0u;

    // 0x12a3e0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A3E0u;
    {
        const bool branch_taken_0x12a3e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3E0u;
            // 0x12a3e4: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3e0) {
            ctx->pc = 0x12A3F0u;
            goto label_12a3f0;
        }
    }
    ctx->pc = 0x12A3E8u;
label_12a3e8:
    // 0x12a3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3E8u;
            // 0x12a3ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A3F0u;
label_12a3f0:
    // 0x12a3f0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x12a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x12a3f4: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x12A3F4u;
    {
        const bool branch_taken_0x12a3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3F4u;
            // 0x12a3f8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3f4) {
            ctx->pc = 0x12A54Cu;
            goto label_12a54c;
        }
    }
    ctx->pc = 0x12A3FCu;
    // 0x12a3fc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12a3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12a400: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x12a400u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x12a404: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x12a408: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a408u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a40c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12a40cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12a410: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a414: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12a414u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12a418: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a418u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a41c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x12a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x12a420: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12A420u;
    {
        const bool branch_taken_0x12a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A420u;
            // 0x12a424: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a420) {
            ctx->pc = 0x12A4C8u;
            goto label_12a4c8;
        }
    }
    ctx->pc = 0x12A428u;
    // 0x12a428: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x12a428u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a42c: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x12a42cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x12a430: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12a430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a434: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x12a438: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x12a438u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x12a43c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x12a43cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x12a440: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x12a440u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x12a444: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x12a444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x12a448: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x12a448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x12a44c: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x12a44cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12a450: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x12a450u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x12a454: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x12a454u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12a458: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x12a458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a45c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x12a45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a460: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x12A460u;
    {
        const bool branch_taken_0x12a460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A460u;
            // 0x12a464: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a460) {
            ctx->pc = 0x12A54Cu;
            goto label_12a54c;
        }
    }
    ctx->pc = 0x12A468u;
    // 0x12a468: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x12a468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_12a46c:
    // 0x12a46c: 0x10c0ffde  beqz        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x12A46Cu;
    {
        const bool branch_taken_0x12a46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a46c) {
            ctx->pc = 0x12A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A474u;
    // 0x12a474: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x12a474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a478: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x12a478u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12a47c: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x12a47cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x12a480: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12a480u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a484: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x12a484u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x12a488: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x12a488u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12a48c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a490: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x12A490u;
    {
        const bool branch_taken_0x12a490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A490u;
            // 0x12a494: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a490) {
            ctx->pc = 0x12A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A498u;
    // 0x12a498: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x12a498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x12a49c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x12a49cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a4a0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x12A4A0u;
    {
        const bool branch_taken_0x12a4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4A0u;
            // 0x12a4a4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4a0) {
            ctx->pc = 0x12A540u;
            goto label_12a540;
        }
    }
    ctx->pc = 0x12A4A8u;
    // 0x12a4a8: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x12a4a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12a4ac: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x12a4acu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12a4b0: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x12a4b0u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12a4b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a4b8: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12A4B8u;
    {
        const bool branch_taken_0x12a4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a4b8) {
            ctx->pc = 0x12A4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4B8u;
            // 0x12a4bc: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a46c;
        }
    }
    ctx->pc = 0x12A4C0u;
    // 0x12a4c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12A4C0u;
    {
        const bool branch_taken_0x12a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4C0u;
            // 0x12a4c4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4c0) {
            ctx->pc = 0x12A544u;
            goto label_12a544;
        }
    }
    ctx->pc = 0x12A4C8u;
label_12a4c8:
    // 0x12a4c8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x12a4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a4cc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12A4CCu;
    {
        const bool branch_taken_0x12a4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4CCu;
            // 0x12a4d0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4cc) {
            ctx->pc = 0x12A540u;
            goto label_12a540;
        }
    }
    ctx->pc = 0x12A4D4u;
    // 0x12a4d4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x12a4d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a4d8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x12a4d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a4dc: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12A4DCu;
    {
        const bool branch_taken_0x12a4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4DCu;
            // 0x12a4e0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4dc) {
            ctx->pc = 0x12A54Cu;
            goto label_12a54c;
        }
    }
    ctx->pc = 0x12A4E4u;
    // 0x12a4e4: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x12a4e8: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x12a4e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x12a4ec: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x12a4ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x12a4f0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x12a4f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x12a4f4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x12a4f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x12a4f8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x12a4f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x12a4fc: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x12a4fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_12a500:
    // 0x12a500: 0x10c0ffb9  beqz        $a2, . + 4 + (-0x47 << 2)
    ctx->pc = 0x12A500u;
    {
        const bool branch_taken_0x12a500 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a500) {
            ctx->pc = 0x12A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A508u;
    // 0x12a508: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x12a508u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a50c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x12a50cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12a510: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x12a510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x12a514: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a518: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x12a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x12a51c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x12A51Cu;
    {
        const bool branch_taken_0x12a51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A51Cu;
            // 0x12a520: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a51c) {
            ctx->pc = 0x12A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A524u;
    // 0x12a524: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x12a524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a528: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A528u;
    {
        const bool branch_taken_0x12a528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A528u;
            // 0x12a52c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a528) {
            ctx->pc = 0x12A540u;
            goto label_12a540;
        }
    }
    ctx->pc = 0x12A530u;
    // 0x12a530: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x12a530u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a534: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x12a534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12a538: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12A538u;
    {
        const bool branch_taken_0x12a538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a538) {
            ctx->pc = 0x12A53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A538u;
            // 0x12a53c: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a500;
        }
    }
    ctx->pc = 0x12A540u;
label_12a540:
    // 0x12a540: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x12a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12a544:
    // 0x12a544: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x12a544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a548: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12a548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12a54c:
    // 0x12a54c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12A54Cu;
    {
        const bool branch_taken_0x12a54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A54Cu;
            // 0x12a550: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a54c) {
            ctx->pc = 0x12A588u;
            goto label_12a588;
        }
    }
    ctx->pc = 0x12A554u;
    // 0x12a554: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12A554u;
    {
        const bool branch_taken_0x12a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A554u;
            // 0x12a558: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a554) {
            ctx->pc = 0x12A57Cu;
            goto label_12a57c;
        }
    }
    ctx->pc = 0x12A55Cu;
    // 0x12a55c: 0x0  nop
    ctx->pc = 0x12a55cu;
    // NOP
label_12a560:
    // 0x12a560: 0x10c0ffa1  beqz        $a2, . + 4 + (-0x5F << 2)
    ctx->pc = 0x12A560u;
    {
        const bool branch_taken_0x12a560 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a560) {
            ctx->pc = 0x12A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A568u;
    // 0x12a568: 0x10e0ff9f  beqz        $a3, . + 4 + (-0x61 << 2)
    ctx->pc = 0x12A568u;
    {
        const bool branch_taken_0x12a568 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A568u;
            // 0x12a56c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a568) {
            ctx->pc = 0x12A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A570u;
    // 0x12a570: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12a570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12a574: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x12a574u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a578: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12a578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_12a57c:
    // 0x12a57c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x12a57cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a580: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12A580u;
    {
        const bool branch_taken_0x12a580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A580u;
            // 0x12a584: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a580) {
            ctx->pc = 0x12A560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a560;
        }
    }
    ctx->pc = 0x12A588u;
label_12a588:
    // 0x12a588: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x12a588u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a58c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x12a58cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a590: 0x3e00008  jr          $ra
    ctx->pc = 0x12A590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A590u;
            // 0x12a594: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A598u;
    ctx->pc = 0x12a598u;
}
