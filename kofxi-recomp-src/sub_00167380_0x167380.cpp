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

// Function: sub_00167380
// Address: 0x167380 - 0x167670
void sub_00167380_0x167380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167380_0x167380");
#endif

    switch (ctx->pc) {
        case 0x167410u: goto label_167410;
        case 0x167450u: goto label_167450;
        case 0x1674b4u: goto label_1674b4;
        case 0x167578u: goto label_167578;
        case 0x167590u: goto label_167590;
        case 0x167598u: goto label_167598;
        case 0x1675a4u: goto label_1675a4;
        case 0x1675bcu: goto label_1675bc;
        case 0x1675d0u: goto label_1675d0;
        case 0x1675d8u: goto label_1675d8;
        case 0x1675e4u: goto label_1675e4;
        case 0x1675fcu: goto label_1675fc;
        default: break;
    }

    ctx->pc = 0x167380u;

label_167380:
    // 0x167380: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x167380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x167384: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x167384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x167388: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x167388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16738c: 0x246348c0  addiu       $v1, $v1, 0x48C0
    ctx->pc = 0x16738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18624));
    // 0x167390: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x167390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x167394: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x167394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x167398: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x167398u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16739c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1673a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1673a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1673a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1673a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1673a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1673a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1673ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1673acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1673b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1673b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1673b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1673b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1673b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1673bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1673bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1673c0: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x1673c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    // 0x1673c4: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x1673c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x1673c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1673c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1673cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1673ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673d0: 0xafa700fc  sw          $a3, 0xFC($sp)
    ctx->pc = 0x1673d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 7));
    // 0x1673d4: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1673d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1673d8: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x1673d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x1673dc: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1673dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1673e0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1673e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1673e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1673e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1673e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1673ec: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1673ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1673f0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1673f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1673f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1673f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1673f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1673f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1673fc: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1673fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167400: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x167400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167404: 0x1840008c  blez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x167404u;
    {
        const bool branch_taken_0x167404 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167404u;
        // 0x167408: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167404) {
            ctx->pc = 0x167638u;
            goto label_167638;
        }
    }
    ctx->pc = 0x16740Cu;
    // 0x16740c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_167410:
    // 0x167410: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x167410u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167414: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x167414u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x167418: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x167418u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16741c: 0x30c54000  andi        $a1, $a2, 0x4000
    ctx->pc = 0x16741cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x167420: 0x30d7001f  andi        $s7, $a2, 0x1F
    ctx->pc = 0x167420u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x167424: 0x30c20fe0  andi        $v0, $a2, 0xFE0
    ctx->pc = 0x167424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4064);
    // 0x167428: 0x2a943  sra         $s5, $v0, 5
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 5));
    // 0x16742c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x167430: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x167430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x167434: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x167434u;
    {
        const bool branch_taken_0x167434 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x167438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167434u;
        // 0x167438: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167434) {
            ctx->pc = 0x167548u;
            goto label_167548;
        }
    }
    ctx->pc = 0x16743Cu;
    // 0x16743c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x16743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x167440: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x167440u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167444: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x167444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x167448: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x167448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16744c: 0x0  nop
    ctx->pc = 0x16744cu;
    // NOP
label_167450:
    // 0x167450: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x167450u;
    {
        const bool branch_taken_0x167450 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x167450) {
            ctx->pc = 0x167454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167450u;
            // 0x167454: 0x96c3001a  lhu         $v1, 0x1A($s6) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167484u;
            goto label_167484;
        }
    }
    ctx->pc = 0x167458u;
    // 0x167458: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x167458u;
    {
        const bool branch_taken_0x167458 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x167458) {
            ctx->pc = 0x167480u;
            goto label_167480;
        }
    }
    ctx->pc = 0x167460u;
    // 0x167460: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x167460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x167464: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x167464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x167468: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x167468u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16746c: 0x2e2b823  subu        $s7, $s7, $v0
    ctx->pc = 0x16746cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x167470: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x167470u;
    {
        const bool branch_taken_0x167470 = (GPR_S32(ctx, 23) >= 0);
        if (branch_taken_0x167470) {
            ctx->pc = 0x167480u;
            goto label_167480;
        }
    }
    ctx->pc = 0x167478u;
    // 0x167478: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x167478u;
    {
        const bool branch_taken_0x167478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167478u;
        // 0x16747c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167478) {
            ctx->pc = 0x16763Cu;
            goto label_16763c;
        }
    }
    ctx->pc = 0x167480u;
label_167480:
    // 0x167480: 0x96c3001a  lhu         $v1, 0x1A($s6)
    ctx->pc = 0x167480u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 26)));
label_167484:
    // 0x167484: 0x25e1021  addu        $v0, $s2, $fp
    ctx->pc = 0x167484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x167488: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16748c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x167490: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167490u;
    {
        const bool branch_taken_0x167490 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x167494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167490u;
        // 0x167494: 0x3053003f  andi        $s3, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167490) {
            ctx->pc = 0x1674A4u;
            goto label_1674a4;
        }
    }
    ctx->pc = 0x167498u;
    // 0x167498: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167498u;
    {
        const bool branch_taken_0x167498 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x167498) {
            ctx->pc = 0x16749Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167498u;
            // 0x16749c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1674A8u;
            goto label_1674a8;
        }
    }
    ctx->pc = 0x1674A0u;
    // 0x1674a0: 0x2673ffc0  addiu       $s3, $s3, -0x40
    ctx->pc = 0x1674a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
label_1674a4:
    // 0x1674a4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1674a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1674a8:
    // 0x1674a8: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x1674a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1674ac: 0xc05a0a0  jal         func_168280
    ctx->pc = 0x1674ACu;
    SET_GPR_U32(ctx, 31, 0x1674B4u);
    ctx->pc = 0x1674B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674ACu;
    // 0x1674b0: 0x9604001e  lhu         $a0, 0x1E($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168280u, 0x1674ACu, 0x1674B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674B4u;
label_1674b4:
    // 0x1674b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1674b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1674b8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1674b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1674bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1674bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1674c0: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1674C0u;
    {
        const bool branch_taken_0x1674c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1674C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C0u;
        // 0x1674c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674c0) {
            ctx->pc = 0x1674E8u;
            goto label_1674e8;
        }
    }
    ctx->pc = 0x1674C8u;
    // 0x1674c8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1674c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1674cc: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1674CCu;
    {
        const bool branch_taken_0x1674cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1674cc) {
            ctx->pc = 0x1674E8u;
            goto label_1674e8;
        }
    }
    ctx->pc = 0x1674D4u;
    // 0x1674d4: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x1674d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1674d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1674d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1674dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1674DCu;
    {
        const bool branch_taken_0x1674dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674DCu;
        // 0x1674e0: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674dc) {
            ctx->pc = 0x167518u;
            goto label_167518;
        }
    }
    ctx->pc = 0x1674E4u;
    // 0x1674e4: 0x0  nop
    ctx->pc = 0x1674e4u;
    // NOP
label_1674e8:
    // 0x1674e8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1674e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1674ec: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1674ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1674f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1674F0u;
    {
        const bool branch_taken_0x1674f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1674f0) {
            ctx->pc = 0x167508u;
            goto label_167508;
        }
    }
    ctx->pc = 0x1674F8u;
    // 0x1674f8: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x1674f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1674fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167500: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x167500u;
    {
        const bool branch_taken_0x167500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167500u;
        // 0x167504: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167500) {
            ctx->pc = 0x167518u;
            goto label_167518;
        }
    }
    ctx->pc = 0x167508u;
label_167508:
    // 0x167508: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x167508u;
    {
        const bool branch_taken_0x167508 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x167508) {
            ctx->pc = 0x16750Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167508u;
            // 0x16750c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16751Cu;
            goto label_16751c;
        }
    }
    ctx->pc = 0x167510u;
    // 0x167510: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x167510u;
    {
        const bool branch_taken_0x167510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167510u;
        // 0x167514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167510) {
            ctx->pc = 0x16763Cu;
            goto label_16763c;
        }
    }
    ctx->pc = 0x167518u;
label_167518:
    // 0x167518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16751c:
    // 0x16751c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16751Cu;
    {
        const bool branch_taken_0x16751c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x167520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16751Cu;
        // 0x167520: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16751c) {
            ctx->pc = 0x167530u;
            goto label_167530;
        }
    }
    ctx->pc = 0x167524u;
    // 0x167524: 0x1aa0003c  blez        $s5, . + 4 + (0x3C << 2)
    ctx->pc = 0x167524u;
    {
        const bool branch_taken_0x167524 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x167524) {
            ctx->pc = 0x167618u;
            goto label_167618;
        }
    }
    ctx->pc = 0x16752Cu;
    // 0x16752c: 0x0  nop
    ctx->pc = 0x16752cu;
    // NOP
label_167530:
    // 0x167530: 0x25e1021  addu        $v0, $s2, $fp
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x167534: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x167534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x167538: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x167538u;
    {
        const bool branch_taken_0x167538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167538) {
            ctx->pc = 0x167450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167450;
        }
    }
    ctx->pc = 0x167540u;
    // 0x167540: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x167540u;
    {
        const bool branch_taken_0x167540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167540u;
        // 0x167544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167540) {
            ctx->pc = 0x16763Cu;
            goto label_16763c;
        }
    }
    ctx->pc = 0x167548u;
label_167548:
    // 0x167548: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x16754c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16754Cu;
    {
        const bool branch_taken_0x16754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16754c) {
            ctx->pc = 0x167550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16754Cu;
            // 0x167550: 0x93a200d0  lbu         $v0, 0xD0($sp) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16755Cu;
            goto label_16755c;
        }
    }
    ctx->pc = 0x167554u;
    // 0x167554: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x167554u;
    {
        const bool branch_taken_0x167554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167554u;
        // 0x167558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167554) {
            ctx->pc = 0x16763Cu;
            goto label_16763c;
        }
    }
    ctx->pc = 0x16755Cu;
label_16755c:
    // 0x16755c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16755Cu;
    {
        const bool branch_taken_0x16755c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16755c) {
            ctx->pc = 0x167560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16755Cu;
            // 0x167560: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167588u;
            goto label_167588;
        }
    }
    ctx->pc = 0x167564u;
    // 0x167564: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x167564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x167568: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x167568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16756c: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x167570: 0xc059ce0  jal         func_167380
    ctx->pc = 0x167570u;
    SET_GPR_U32(ctx, 31, 0x167578u);
    ctx->pc = 0x167574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167570u;
    // 0x167574: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167380u;
    goto label_167380;
    ctx->pc = 0x167578u;
label_167578:
    // 0x167578: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x167578u;
    {
        const bool branch_taken_0x167578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167578) {
            ctx->pc = 0x167618u;
            goto label_167618;
        }
    }
    ctx->pc = 0x167580u;
    // 0x167580: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x167580u;
    {
        const bool branch_taken_0x167580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167580u;
        // 0x167584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167580) {
            ctx->pc = 0x16763Cu;
            goto label_16763c;
        }
    }
    ctx->pc = 0x167588u;
label_167588:
    // 0x167588: 0xc05c7d0  jal         func_171F40
    ctx->pc = 0x167588u;
    SET_GPR_U32(ctx, 31, 0x167590u);
    ctx->pc = 0x16758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167588u;
    // 0x16758c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F40u, 0x167588u, 0x167590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167590u;
label_167590:
    // 0x167590: 0xc05a0a0  jal         func_168280
    ctx->pc = 0x167590u;
    SET_GPR_U32(ctx, 31, 0x167598u);
    ctx->pc = 0x167594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167590u;
    // 0x167594: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168280u, 0x167590u, 0x167598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167598u;
label_167598:
    // 0x167598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16759c: 0xc059d9c  jal         func_167670
    ctx->pc = 0x16759Cu;
    SET_GPR_U32(ctx, 31, 0x1675A4u);
    ctx->pc = 0x1675A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16759Cu;
    // 0x1675a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167670u, 0x16759Cu, 0x1675A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675A4u;
label_1675a4:
    // 0x1675a4: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1675a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1675a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675ac: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1675acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1675b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1675b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675b4: 0xc059ce0  jal         func_167380
    ctx->pc = 0x1675B4u;
    SET_GPR_U32(ctx, 31, 0x1675BCu);
    ctx->pc = 0x1675B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675B4u;
    // 0x1675b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167380u;
    goto label_167380;
    ctx->pc = 0x1675BCu;
label_1675bc:
    // 0x1675bc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1675BCu;
    {
        const bool branch_taken_0x1675bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1675bc) {
            ctx->pc = 0x1675C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1675BCu;
            // 0x1675c0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167610u;
            goto label_167610;
        }
    }
    ctx->pc = 0x1675C4u;
    // 0x1675c4: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1675c8: 0xc05c7d0  jal         func_171F40
    ctx->pc = 0x1675C8u;
    SET_GPR_U32(ctx, 31, 0x1675D0u);
    ctx->pc = 0x1675CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675C8u;
    // 0x1675cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F40u, 0x1675C8u, 0x1675D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675D0u;
label_1675d0:
    // 0x1675d0: 0xc05a0a0  jal         func_168280
    ctx->pc = 0x1675D0u;
    SET_GPR_U32(ctx, 31, 0x1675D8u);
    ctx->pc = 0x1675D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675D0u;
    // 0x1675d4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168280u, 0x1675D0u, 0x1675D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675D8u;
label_1675d8:
    // 0x1675d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1675d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675dc: 0xc059d9c  jal         func_167670
    ctx->pc = 0x1675DCu;
    SET_GPR_U32(ctx, 31, 0x1675E4u);
    ctx->pc = 0x1675E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675DCu;
    // 0x1675e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167670u, 0x1675DCu, 0x1675E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675E4u;
label_1675e4:
    // 0x1675e4: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x1675e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1675e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1675e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675ec: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1675ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x1675f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1675f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675f4: 0xc059ce0  jal         func_167380
    ctx->pc = 0x1675F4u;
    SET_GPR_U32(ctx, 31, 0x1675FCu);
    ctx->pc = 0x1675F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1675F4u;
    // 0x1675f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167380u;
    goto label_167380;
    ctx->pc = 0x1675FCu;
label_1675fc:
    // 0x1675fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1675FCu;
    {
        const bool branch_taken_0x1675fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1675fc) {
            ctx->pc = 0x16760Cu;
            goto label_16760c;
        }
    }
    ctx->pc = 0x167604u;
    // 0x167604: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x167604u;
    {
        const bool branch_taken_0x167604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167604u;
        // 0x167608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167604) {
            ctx->pc = 0x16763Cu;
            goto label_16763c;
        }
    }
    ctx->pc = 0x16760Cu;
label_16760c:
    // 0x16760c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_167610:
    // 0x167610: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x167610u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x167614: 0xa3a200d0  sb          $v0, 0xD0($sp)
    ctx->pc = 0x167614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 2));
label_167618:
    // 0x167618: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16761c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x167620: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x167620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x167624: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x167624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167628: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x167628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16762c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x16762cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x167630: 0x5440ff77  bnel        $v0, $zero, . + 4 + (-0x89 << 2)
    ctx->pc = 0x167630u;
    {
        const bool branch_taken_0x167630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167630) {
            ctx->pc = 0x167634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167630u;
            // 0x167634: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167410;
        }
    }
    ctx->pc = 0x167638u;
label_167638:
    // 0x167638: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x167638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16763c:
    // 0x16763c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16763cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167640: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x167640u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167644: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x167644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167648: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x167648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16764c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16764cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x167650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16765c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16765cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167664: 0x3e00008  jr          $ra
    ctx->pc = 0x167664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167664u;
        // 0x167668: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16766Cu;
    // 0x16766c: 0x0  nop
    ctx->pc = 0x16766cu;
    // NOP
}
