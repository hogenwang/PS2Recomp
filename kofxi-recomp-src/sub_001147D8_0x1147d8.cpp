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

// Function: sub_001147D8
// Address: 0x1147d8 - 0x114a18
void sub_001147D8_0x1147d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001147D8_0x1147d8");
#endif

    switch (ctx->pc) {
        case 0x114810u: goto label_114810;
        case 0x11481cu: goto label_11481c;
        case 0x114848u: goto label_114848;
        case 0x114894u: goto label_114894;
        case 0x1148bcu: goto label_1148bc;
        case 0x1148fcu: goto label_1148fc;
        case 0x114938u: goto label_114938;
        case 0x11497cu: goto label_11497c;
        case 0x11498cu: goto label_11498c;
        case 0x114994u: goto label_114994;
        case 0x1149a8u: goto label_1149a8;
        case 0x1149b8u: goto label_1149b8;
        case 0x1149d0u: goto label_1149d0;
        case 0x1149e0u: goto label_1149e0;
        case 0x1149e8u: goto label_1149e8;
        default: break;
    }

    ctx->pc = 0x1147d8u;

    // 0x1147d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1147d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1147dc: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1147dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1147e0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1147e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1147e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1147e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147e8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1147e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1147ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1147ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1147f0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1147f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1147f4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1147f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1147f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1147f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1147fc: 0x26918280  addiu       $s1, $s4, -0x7D80
    ctx->pc = 0x1147fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935168));
    // 0x114800: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x114800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x114804: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114808: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x114808u;
    SET_GPR_U32(ctx, 31, 0x114810u);
    ctx->pc = 0x11480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114808u;
    // 0x11480c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116C8u, 0x114808u, 0x114810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114810u;
label_114810:
    // 0x114810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114814: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x114814u;
    SET_GPR_U32(ctx, 31, 0x11481Cu);
    ctx->pc = 0x114818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114814u;
    // 0x114818: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x114814u, 0x11481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11481Cu;
label_11481c:
    // 0x11481c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11481cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x114820: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x114820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x114824: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114824u;
    {
        const bool branch_taken_0x114824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114824) {
            ctx->pc = 0x114840u;
            goto label_114840;
        }
    }
    ctx->pc = 0x11482Cu;
    // 0x11482c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11482Cu;
    {
        const bool branch_taken_0x11482c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11482c) {
            ctx->pc = 0x114840u;
            goto label_114840;
        }
    }
    ctx->pc = 0x114834u;
    // 0x114834: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x114834u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114838: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x114838u;
    {
        const bool branch_taken_0x114838 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114838u;
        // 0x11483c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114838) {
            ctx->pc = 0x114850u;
            goto label_114850;
        }
    }
    ctx->pc = 0x114840u;
label_114840:
    // 0x114840: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114840u;
    SET_GPR_U32(ctx, 31, 0x114848u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x114840u, 0x114848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114848u;
label_114848:
    // 0x114848: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x114848u;
    {
        const bool branch_taken_0x114848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114848u;
        // 0x11484c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114848) {
            ctx->pc = 0x1149ECu;
            goto label_1149ec;
        }
    }
    ctx->pc = 0x114850u;
label_114850:
    // 0x114850: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x114850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x114854: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x114854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x114858: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x114858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x11485c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x11485cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x114860: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x114860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x114864: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x114864u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x114868: 0xfe330010  sd          $s3, 0x10($s1)
    ctx->pc = 0x114868u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 19));
    // 0x11486c: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x11486cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x114870: 0x2463aa10  addiu       $v1, $v1, -0x55F0
    ctx->pc = 0x114870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945296));
    // 0x114874: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x114874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x114878: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11487c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114880: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x114880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x114884: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x114884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x114888: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x114888u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x11488c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11488Cu;
    SET_GPR_U32(ctx, 31, 0x114894u);
    ctx->pc = 0x114890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11488Cu;
    // 0x114890: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11488Cu, 0x114894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114894u;
label_114894:
    // 0x114894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x114894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114898: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x114898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11489c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x11489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1148a0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1148a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1148a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1148a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1148a8: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1148A8u;
    {
        const bool branch_taken_0x1148a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148A8u;
        // 0x1148ac: 0xae938280  sw          $s3, -0x7D80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294935168), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148a8) {
            ctx->pc = 0x114940u;
            goto label_114940;
        }
    }
    ctx->pc = 0x1148B0u;
    // 0x1148b0: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x1148b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x1148b4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1148B4u;
    SET_GPR_U32(ctx, 31, 0x1148BCu);
    ctx->pc = 0x1148B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1148B4u;
    // 0x1148b8: 0x8ea4874c  lw          $a0, -0x78B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1148B4u, 0x1148BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1148BCu;
label_1148bc:
    // 0x1148bc: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1148bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1148c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1148c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1148c4: 0x8ce386b8  lw          $v1, -0x7948($a3)
    ctx->pc = 0x1148c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936248)));
    // 0x1148c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1148c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1148cc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1148CCu;
    {
        const bool branch_taken_0x1148cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1148D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148CCu;
        // 0x1148d0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148cc) {
            ctx->pc = 0x1148F0u;
            goto label_1148f0;
        }
    }
    ctx->pc = 0x1148D4u;
    // 0x1148d4: 0x8e838280  lw          $v1, -0x7D80($s4)
    ctx->pc = 0x1148d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935168)));
    // 0x1148d8: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1148d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1148dc: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1148dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1148e0: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1148e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1148e4: 0xace386b8  sw          $v1, -0x7948($a3)
    ctx->pc = 0x1148e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294936248), GPR_U32(ctx, 3));
    // 0x1148e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1148E8u;
    {
        const bool branch_taken_0x1148e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148E8u;
        // 0x1148ec: 0xae828280  sw          $v0, -0x7D80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294935168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148e8) {
            ctx->pc = 0x114930u;
            goto label_114930;
        }
    }
    ctx->pc = 0x1148F0u;
label_1148f0:
    // 0x1148f0: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1148f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1148f4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1148f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1148f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1148f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1148fc:
    // 0x1148fc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1148fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x114900: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114900u;
    {
        const bool branch_taken_0x114900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114900u;
        // 0x114904: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114900) {
            ctx->pc = 0x114930u;
            goto label_114930;
        }
    }
    ctx->pc = 0x114908u;
    // 0x114908: 0x24e386b8  addiu       $v1, $a3, -0x7948
    ctx->pc = 0x114908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936248));
    // 0x11490c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x11490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114910: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x114910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114914: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x114914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114918: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114918u;
    {
        const bool branch_taken_0x114918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x11491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114918u;
        // 0x11491c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114918) {
            ctx->pc = 0x1148FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1148fc;
        }
    }
    ctx->pc = 0x114920u;
    // 0x114920: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x114920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x114924: 0x21823  negu        $v1, $v0
    ctx->pc = 0x114924u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x114928: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x114928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11492c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x11492cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_114930:
    // 0x114930: 0xc043320  jal         func_10CC80
    ctx->pc = 0x114930u;
    SET_GPR_U32(ctx, 31, 0x114938u);
    ctx->pc = 0x114934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114930u;
    // 0x114934: 0x8ea4874c  lw          $a0, -0x78B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x114930u, 0x114938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114938u;
label_114938:
    // 0x114938: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x114938u;
    {
        const bool branch_taken_0x114938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114938u;
        // 0x11493c: 0x26108ec0  addiu       $s0, $s0, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114938) {
            ctx->pc = 0x114950u;
            goto label_114950;
        }
    }
    ctx->pc = 0x114940u;
label_114940:
    // 0x114940: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x114944: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x114944u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x114948: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x114948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11494c: 0x26108ec0  addiu       $s0, $s0, -0x7140
    ctx->pc = 0x11494cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938304));
label_114950:
    // 0x114950: 0x26c49980  addiu       $a0, $s6, -0x6680
    ctx->pc = 0x114950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941056));
    // 0x114954: 0x26878280  addiu       $a3, $s4, -0x7D80
    ctx->pc = 0x114954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935168));
    // 0x114958: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11495c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x11495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x114960: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x114960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x114964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114968: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x114968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11496c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11496cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114970: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114974: 0xc044576  jal         func_1115D8
    ctx->pc = 0x114974u;
    SET_GPR_U32(ctx, 31, 0x11497Cu);
    ctx->pc = 0x114978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114974u;
    // 0x114978: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x114974u, 0x11497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11497Cu;
label_11497c:
    // 0x11497c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11497Cu;
    {
        const bool branch_taken_0x11497c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11497Cu;
        // 0x114980: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11497c) {
            ctx->pc = 0x11499Cu;
            goto label_11499c;
        }
    }
    ctx->pc = 0x114984u;
    // 0x114984: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114984u;
    SET_GPR_U32(ctx, 31, 0x11498Cu);
    ctx->pc = 0x114988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114984u;
    // 0x114988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x114984u, 0x11498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11498Cu;
label_11498c:
    // 0x11498c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11498Cu;
    SET_GPR_U32(ctx, 31, 0x114994u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x11498Cu, 0x114994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114994u;
label_114994:
    // 0x114994: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x114994u;
    {
        const bool branch_taken_0x114994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114994u;
        // 0x114998: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114994) {
            ctx->pc = 0x1149ECu;
            goto label_1149ec;
        }
    }
    ctx->pc = 0x11499Cu;
label_11499c:
    // 0x11499c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1149a0: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1149A0u;
    SET_GPR_U32(ctx, 31, 0x1149A8u);
    ctx->pc = 0x1149A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149A0u;
    // 0x1149a4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1149A0u, 0x1149A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149A8u;
label_1149a8:
    // 0x1149a8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1149A8u;
    {
        const bool branch_taken_0x1149a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1149a8) {
            ctx->pc = 0x1149C0u;
            goto label_1149c0;
        }
    }
    ctx->pc = 0x1149B0u;
    // 0x1149b0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1149B0u;
    SET_GPR_U32(ctx, 31, 0x1149B8u);
    ctx->pc = 0x1149B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149B0u;
    // 0x1149b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1149B0u, 0x1149B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149B8u;
label_1149b8:
    // 0x1149b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1149B8u;
    {
        const bool branch_taken_0x1149b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149B8u;
        // 0x1149bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149b8) {
            ctx->pc = 0x1149ECu;
            goto label_1149ec;
        }
    }
    ctx->pc = 0x1149C0u;
label_1149c0:
    // 0x1149c0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1149C0u;
    {
        const bool branch_taken_0x1149c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1149c0) {
            ctx->pc = 0x1149D8u;
            goto label_1149d8;
        }
    }
    ctx->pc = 0x1149C8u;
    // 0x1149c8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1149C8u;
    SET_GPR_U32(ctx, 31, 0x1149D0u);
    ctx->pc = 0x1149CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149C8u;
    // 0x1149cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1149C8u, 0x1149D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149D0u;
label_1149d0:
    // 0x1149d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1149D0u;
    {
        const bool branch_taken_0x1149d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149D0u;
        // 0x1149d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149d0) {
            ctx->pc = 0x1149ECu;
            goto label_1149ec;
        }
    }
    ctx->pc = 0x1149D8u;
label_1149d8:
    // 0x1149d8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1149D8u;
    SET_GPR_U32(ctx, 31, 0x1149E0u);
    ctx->pc = 0x1149DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149D8u;
    // 0x1149dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1149D8u, 0x1149E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149E0u;
label_1149e0:
    // 0x1149e0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1149E0u;
    SET_GPR_U32(ctx, 31, 0x1149E8u);
    ctx->pc = 0x1149E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149E0u;
    // 0x1149e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1149E0u, 0x1149E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149E8u;
label_1149e8:
    // 0x1149e8: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x1149e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1149ec:
    // 0x1149ec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1149ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1149f0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1149f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1149f4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1149f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1149f8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1149f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1149fc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1149fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114a00: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114a04: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114a08: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x114A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114A0Cu;
        // 0x114a10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114A14u;
    // 0x114a14: 0x0  nop
    ctx->pc = 0x114a14u;
    // NOP
    if (ctx->pc == 0x114a14u) { ctx->pc = 0x114a18u; }
}
