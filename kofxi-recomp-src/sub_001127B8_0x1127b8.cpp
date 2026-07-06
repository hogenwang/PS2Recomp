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

// Function: sub_001127B8
// Address: 0x1127b8 - 0x112a28
void sub_001127B8_0x1127b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001127B8_0x1127b8");
#endif

    switch (ctx->pc) {
        case 0x1127f8u: goto label_1127f8;
        case 0x112804u: goto label_112804;
        case 0x112830u: goto label_112830;
        case 0x11287cu: goto label_11287c;
        case 0x1128a4u: goto label_1128a4;
        case 0x1128e0u: goto label_1128e0;
        case 0x11291cu: goto label_11291c;
        case 0x112948u: goto label_112948;
        case 0x112954u: goto label_112954;
        case 0x112988u: goto label_112988;
        case 0x112998u: goto label_112998;
        case 0x1129a0u: goto label_1129a0;
        case 0x1129b0u: goto label_1129b0;
        case 0x1129c0u: goto label_1129c0;
        case 0x1129d8u: goto label_1129d8;
        case 0x1129e8u: goto label_1129e8;
        case 0x1129f0u: goto label_1129f0;
        default: break;
    }

    ctx->pc = 0x1127b8u;

    // 0x1127b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1127b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1127bc: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1127bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1127c0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1127c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1127c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1127c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127c8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1127c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1127cc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1127ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127d0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1127d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1127d4: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1127d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1127d8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1127d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1127dc: 0x26b18280  addiu       $s1, $s5, -0x7D80
    ctx->pc = 0x1127dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935168));
    // 0x1127e0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1127e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1127e4: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1127e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1127e8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1127e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1127ec: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1127ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1127f0: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x1127F0u;
    SET_GPR_U32(ctx, 31, 0x1127F8u);
    ctx->pc = 0x1127F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127F0u;
    // 0x1127f4: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116C8u, 0x1127F0u, 0x1127F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1127F8u;
label_1127f8:
    // 0x1127f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1127f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127fc: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x1127FCu;
    SET_GPR_U32(ctx, 31, 0x112804u);
    ctx->pc = 0x112800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127FCu;
    // 0x112800: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x1127FCu, 0x112804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112804u;
label_112804:
    // 0x112804: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x112804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x112808: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x112808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x11280c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11280Cu;
    {
        const bool branch_taken_0x11280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11280c) {
            ctx->pc = 0x112828u;
            goto label_112828;
        }
    }
    ctx->pc = 0x112814u;
    // 0x112814: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112814u;
    {
        const bool branch_taken_0x112814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112814) {
            ctx->pc = 0x112828u;
            goto label_112828;
        }
    }
    ctx->pc = 0x11281Cu;
    // 0x11281c: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x11281cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112820: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x112820u;
    {
        const bool branch_taken_0x112820 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x112824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112820u;
        // 0x112824: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112820) {
            ctx->pc = 0x112838u;
            goto label_112838;
        }
    }
    ctx->pc = 0x112828u;
label_112828:
    // 0x112828: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112828u;
    SET_GPR_U32(ctx, 31, 0x112830u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x112828u, 0x112830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112830u;
label_112830:
    // 0x112830: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x112830u;
    {
        const bool branch_taken_0x112830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112830u;
        // 0x112834: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112830) {
            ctx->pc = 0x1129F4u;
            goto label_1129f4;
        }
    }
    ctx->pc = 0x112838u;
label_112838:
    // 0x112838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x112838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11283c: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x11283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x112840: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x112840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x112844: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x112844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x112848: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x112848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x11284c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11284cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x112850: 0x2463a8a8  addiu       $v1, $v1, -0x5758
    ctx->pc = 0x112850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944936));
    // 0x112854: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x112854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x112858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11285c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x11285cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x112860: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x112860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112864: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x112864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x112868: 0x32908000  andi        $s0, $s4, 0x8000
    ctx->pc = 0x112868u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32768);
    // 0x11286c: 0xae370010  sw          $s7, 0x10($s1)
    ctx->pc = 0x11286cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 23));
    // 0x112870: 0xae3e0014  sw          $fp, 0x14($s1)
    ctx->pc = 0x112870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 30));
    // 0x112874: 0xc043318  jal         func_10CC60
    ctx->pc = 0x112874u;
    SET_GPR_U32(ctx, 31, 0x11287Cu);
    ctx->pc = 0x112878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112874u;
    // 0x112878: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x112874u, 0x11287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11287Cu;
label_11287c:
    // 0x11287c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11287cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112880: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x112880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112884: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x112884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112888: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x112888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x11288c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11288cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x112890: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x112890u;
    {
        const bool branch_taken_0x112890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112890u;
        // 0x112894: 0xaeb38280  sw          $s3, -0x7D80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294935168), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112890) {
            ctx->pc = 0x112924u;
            goto label_112924;
        }
    }
    ctx->pc = 0x112898u;
    // 0x112898: 0x3c160036  lui         $s6, 0x36
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)54 << 16));
    // 0x11289c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x11289Cu;
    SET_GPR_U32(ctx, 31, 0x1128A4u);
    ctx->pc = 0x1128A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11289Cu;
    // 0x1128a0: 0x8ec4874c  lw          $a0, -0x78B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x11289Cu, 0x1128A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128A4u;
label_1128a4:
    // 0x1128a4: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1128a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1128a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1128a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128ac: 0x8ce386b8  lw          $v1, -0x7948($a3)
    ctx->pc = 0x1128acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936248)));
    // 0x1128b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1128b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1128b4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1128B4u;
    {
        const bool branch_taken_0x1128b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1128B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128B4u;
        // 0x1128b8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128b4) {
            ctx->pc = 0x1128D8u;
            goto label_1128d8;
        }
    }
    ctx->pc = 0x1128BCu;
    // 0x1128bc: 0x8ea38280  lw          $v1, -0x7D80($s5)
    ctx->pc = 0x1128bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294935168)));
    // 0x1128c0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1128c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1128c4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1128c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1128c8: 0xace386b8  sw          $v1, -0x7948($a3)
    ctx->pc = 0x1128c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294936248), GPR_U32(ctx, 3));
    // 0x1128cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1128CCu;
    {
        const bool branch_taken_0x1128cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128CCu;
        // 0x1128d0: 0xaea28280  sw          $v0, -0x7D80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294935168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128cc) {
            ctx->pc = 0x112914u;
            goto label_112914;
        }
    }
    ctx->pc = 0x1128D4u;
    // 0x1128d4: 0x0  nop
    ctx->pc = 0x1128d4u;
    // NOP
label_1128d8:
    // 0x1128d8: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1128dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1128dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1128e0:
    // 0x1128e0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1128e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1128e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1128E4u;
    {
        const bool branch_taken_0x1128e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128E4u;
        // 0x1128e8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128e4) {
            ctx->pc = 0x112914u;
            goto label_112914;
        }
    }
    ctx->pc = 0x1128ECu;
    // 0x1128ec: 0x24e386b8  addiu       $v1, $a3, -0x7948
    ctx->pc = 0x1128ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936248));
    // 0x1128f0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1128f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1128f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1128f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1128f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1128fc: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1128FCu;
    {
        const bool branch_taken_0x1128fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x112900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128FCu;
        // 0x112900: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128fc) {
            ctx->pc = 0x1128E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1128e0;
        }
    }
    ctx->pc = 0x112904u;
    // 0x112904: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x112904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x112908: 0x21823  negu        $v1, $v0
    ctx->pc = 0x112908u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11290c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11290cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x112910: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x112910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_112914:
    // 0x112914: 0xc043320  jal         func_10CC80
    ctx->pc = 0x112914u;
    SET_GPR_U32(ctx, 31, 0x11291Cu);
    ctx->pc = 0x112918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112914u;
    // 0x112918: 0x8ec4874c  lw          $a0, -0x78B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x112914u, 0x11291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11291Cu;
label_11291c:
    // 0x11291c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11291Cu;
    {
        const bool branch_taken_0x11291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11291Cu;
        // 0x112920: 0x3c162000  lui         $s6, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11291c) {
            ctx->pc = 0x112930u;
            goto label_112930;
        }
    }
    ctx->pc = 0x112924u;
label_112924:
    // 0x112924: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x112924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x112928: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x112928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11292c: 0x3c162000  lui         $s6, 0x2000
    ctx->pc = 0x11292cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
label_112930:
    // 0x112930: 0x2961024  and         $v0, $s4, $s6
    ctx->pc = 0x112930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 22));
    // 0x112934: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112934u;
    {
        const bool branch_taken_0x112934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112934u;
        // 0x112938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112934) {
            ctx->pc = 0x11294Cu;
            goto label_11294c;
        }
    }
    ctx->pc = 0x11293Cu;
    // 0x11293c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112940: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x112940u;
    SET_GPR_U32(ctx, 31, 0x112948u);
    ctx->pc = 0x112944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112940u;
    // 0x112944: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x112940u, 0x112948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112948u;
label_112948:
    // 0x112948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11294c:
    // 0x11294c: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11294Cu;
    SET_GPR_U32(ctx, 31, 0x112954u);
    ctx->pc = 0x112950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11294Cu;
    // 0x112950: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11294Cu, 0x112954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112954u;
label_112954:
    // 0x112954: 0x26108ec0  addiu       $s0, $s0, -0x7140
    ctx->pc = 0x112954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938304));
    // 0x112958: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x112958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11295c: 0x26a78280  addiu       $a3, $s5, -0x7D80
    ctx->pc = 0x11295cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935168));
    // 0x112960: 0x24449980  addiu       $a0, $v0, -0x6680
    ctx->pc = 0x112960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x112964: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112968: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x112968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11296c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x11296cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x112970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112974: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x112974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x112978: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x112978u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11297c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11297cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112980: 0xc044576  jal         func_1115D8
    ctx->pc = 0x112980u;
    SET_GPR_U32(ctx, 31, 0x112988u);
    ctx->pc = 0x112984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112980u;
    // 0x112984: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x112980u, 0x112988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112988u;
label_112988:
    // 0x112988: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112988u;
    {
        const bool branch_taken_0x112988 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112988u;
        // 0x11298c: 0x2d01025  or          $v0, $s6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112988) {
            ctx->pc = 0x1129A8u;
            goto label_1129a8;
        }
    }
    ctx->pc = 0x112990u;
    // 0x112990: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112990u;
    SET_GPR_U32(ctx, 31, 0x112998u);
    ctx->pc = 0x112994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112990u;
    // 0x112994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x112990u, 0x112998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112998u;
label_112998:
    // 0x112998: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112998u;
    SET_GPR_U32(ctx, 31, 0x1129A0u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x112998u, 0x1129A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129A0u;
label_1129a0:
    // 0x1129a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1129A0u;
    {
        const bool branch_taken_0x1129a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129A0u;
        // 0x1129a4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129a0) {
            ctx->pc = 0x1129F4u;
            goto label_1129f4;
        }
    }
    ctx->pc = 0x1129A8u;
label_1129a8:
    // 0x1129a8: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1129A8u;
    SET_GPR_U32(ctx, 31, 0x1129B0u);
    ctx->pc = 0x1129ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129A8u;
    // 0x1129ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1129A8u, 0x1129B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129B0u;
label_1129b0:
    // 0x1129b0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1129B0u;
    {
        const bool branch_taken_0x1129b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1129b0) {
            ctx->pc = 0x1129C8u;
            goto label_1129c8;
        }
    }
    ctx->pc = 0x1129B8u;
    // 0x1129b8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1129B8u;
    SET_GPR_U32(ctx, 31, 0x1129C0u);
    ctx->pc = 0x1129BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129B8u;
    // 0x1129bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1129B8u, 0x1129C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129C0u;
label_1129c0:
    // 0x1129c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1129C0u;
    {
        const bool branch_taken_0x1129c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129C0u;
        // 0x1129c4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129c0) {
            ctx->pc = 0x1129F4u;
            goto label_1129f4;
        }
    }
    ctx->pc = 0x1129C8u;
label_1129c8:
    // 0x1129c8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1129C8u;
    {
        const bool branch_taken_0x1129c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129c8) {
            ctx->pc = 0x1129E0u;
            goto label_1129e0;
        }
    }
    ctx->pc = 0x1129D0u;
    // 0x1129d0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1129D0u;
    SET_GPR_U32(ctx, 31, 0x1129D8u);
    ctx->pc = 0x1129D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129D0u;
    // 0x1129d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1129D0u, 0x1129D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129D8u;
label_1129d8:
    // 0x1129d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1129D8u;
    {
        const bool branch_taken_0x1129d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129D8u;
        // 0x1129dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129d8) {
            ctx->pc = 0x1129F4u;
            goto label_1129f4;
        }
    }
    ctx->pc = 0x1129E0u;
label_1129e0:
    // 0x1129e0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1129E0u;
    SET_GPR_U32(ctx, 31, 0x1129E8u);
    ctx->pc = 0x1129E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129E0u;
    // 0x1129e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1129E0u, 0x1129E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129E8u;
label_1129e8:
    // 0x1129e8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1129E8u;
    SET_GPR_U32(ctx, 31, 0x1129F0u);
    ctx->pc = 0x1129ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129E8u;
    // 0x1129ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1129E8u, 0x1129F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129F0u;
label_1129f0:
    // 0x1129f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1129f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1129f4:
    // 0x1129f4: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1129f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1129f8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1129f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1129fc: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1129fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112a00: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x112a00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112a04: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x112a04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112a08: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x112a08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112a0c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x112a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112a10: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x112a10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112a14: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x112a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112a18: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x112a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x112A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A1Cu;
        // 0x112a20: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A24u;
    // 0x112a24: 0x0  nop
    ctx->pc = 0x112a24u;
    // NOP
    if (ctx->pc == 0x112a24u) { ctx->pc = 0x112a28u; }
}
