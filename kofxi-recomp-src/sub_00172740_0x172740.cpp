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

// Function: sub_00172740
// Address: 0x172740 - 0x172a10
void sub_00172740_0x172740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172740_0x172740");
#endif

    switch (ctx->pc) {
        case 0x17278cu: goto label_17278c;
        case 0x1727e4u: goto label_1727e4;
        case 0x1727f8u: goto label_1727f8;
        case 0x17280cu: goto label_17280c;
        case 0x17281cu: goto label_17281c;
        case 0x172974u: goto label_172974;
        default: break;
    }

    ctx->pc = 0x172740u;

    // 0x172740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172744: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x172744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x172748: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17274c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172758: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x172758u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x17275c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x17275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x172760: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x172760u;
    {
        const bool branch_taken_0x172760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x172764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172760u;
        // 0x172764: 0xa7a0003e  sh          $zero, 0x3E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172760) {
            ctx->pc = 0x172770u;
            goto label_172770;
        }
    }
    ctx->pc = 0x172768u;
    // 0x172768: 0x562000a3  bnel        $s1, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x172768u;
    {
        const bool branch_taken_0x172768 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x172768) {
            ctx->pc = 0x17276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172768u;
            // 0x17276c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1729F8u;
            goto label_1729f8;
        }
    }
    ctx->pc = 0x172770u;
label_172770:
    // 0x172770: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x172770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x172774: 0x1020009f  beqz        $at, . + 4 + (0x9F << 2)
    ctx->pc = 0x172774u;
    {
        const bool branch_taken_0x172774 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172774) {
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x17277Cu;
    // 0x17277c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172784: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x172784u;
    SET_GPR_U32(ctx, 31, 0x17278Cu);
    ctx->pc = 0x172788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172784u;
    // 0x172788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x172784u, 0x17278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17278Cu;
label_17278c:
    // 0x17278c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x172790: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x172790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x172794: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x172794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x172798: 0x913823  subu        $a3, $a0, $s1
    ctx->pc = 0x172798u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x17279c: 0x24c65a30  addiu       $a2, $a2, 0x5A30
    ctx->pc = 0x17279cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23088));
    // 0x1727a0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1727a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1727a4: 0x9485dab0  lhu         $a1, -0x2550($a0)
    ctx->pc = 0x1727a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957744)));
    // 0x1727a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1727a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1727ac: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1727acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1727b0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1727b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1727b4: 0x24040303  addiu       $a0, $zero, 0x303
    ctx->pc = 0x1727b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x1727b8: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1727B8u;
    {
        const bool branch_taken_0x1727b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1727BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727B8u;
        // 0x1727bc: 0xc78021  addu        $s0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727b8) {
            ctx->pc = 0x172824u;
            goto label_172824;
        }
    }
    ctx->pc = 0x1727C0u;
    // 0x1727c0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1727c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1727c4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1727c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1727c8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x1727c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1727cc: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1727CCu;
    {
        const bool branch_taken_0x1727cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1727cc) {
            ctx->pc = 0x1727D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1727CCu;
            // 0x1727d0: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172804u;
            goto label_172804;
        }
    }
    ctx->pc = 0x1727D4u;
    // 0x1727d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1727d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1727d8: 0x90449480  lbu         $a0, -0x6B80($v0)
    ctx->pc = 0x1727d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x1727dc: 0xc068a2c  jal         func_1A28B0
    ctx->pc = 0x1727DCu;
    SET_GPR_U32(ctx, 31, 0x1727E4u);
    ctx->pc = 0x1727E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727DCu;
    // 0x1727e0: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A28B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A28B0u, 0x1727DCu, 0x1727E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727E4u;
label_1727e4:
    // 0x1727e4: 0xa7a2003e  sh          $v0, 0x3E($sp)
    ctx->pc = 0x1727e4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1727e8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1727e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1727ec: 0x90449480  lbu         $a0, -0x6B80($v0)
    ctx->pc = 0x1727ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x1727f0: 0xc0ced3c  jal         func_33B4F0
    ctx->pc = 0x1727F0u;
    SET_GPR_U32(ctx, 31, 0x1727F8u);
    ctx->pc = 0x1727F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727F0u;
    // 0x1727f4: 0x97a5003e  lhu         $a1, 0x3E($sp) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B4F0u, 0x1727F0u, 0x1727F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727F8u;
label_1727f8:
    // 0x1727f8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1727F8u;
    {
        const bool branch_taken_0x1727f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1727FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727F8u;
        // 0x1727fc: 0xa7a2003e  sh          $v0, 0x3E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727f8) {
            ctx->pc = 0x172944u;
            goto label_172944;
        }
    }
    ctx->pc = 0x172800u;
    // 0x172800: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x172800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_172804:
    // 0x172804: 0xc068a2c  jal         func_1A28B0
    ctx->pc = 0x172804u;
    SET_GPR_U32(ctx, 31, 0x17280Cu);
    ctx->pc = 0x172808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172804u;
    // 0x172808: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A28B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A28B0u, 0x172804u, 0x17280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17280Cu;
label_17280c:
    // 0x17280c: 0xa7a2003e  sh          $v0, 0x3E($sp)
    ctx->pc = 0x17280cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x172810: 0x97a5003e  lhu         $a1, 0x3E($sp)
    ctx->pc = 0x172810u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x172814: 0xc0ced3c  jal         func_33B4F0
    ctx->pc = 0x172814u;
    SET_GPR_U32(ctx, 31, 0x17281Cu);
    ctx->pc = 0x172818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172814u;
    // 0x172818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B4F0u, 0x172814u, 0x17281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17281Cu;
label_17281c:
    // 0x17281c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x17281Cu;
    {
        const bool branch_taken_0x17281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17281Cu;
        // 0x172820: 0xa7a2003e  sh          $v0, 0x3E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17281c) {
            ctx->pc = 0x172944u;
            goto label_172944;
        }
    }
    ctx->pc = 0x172824u;
label_172824:
    // 0x172824: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x172824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x172828: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172828u;
    {
        const bool branch_taken_0x172828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172828) {
            ctx->pc = 0x17282Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172828u;
            // 0x17282c: 0x30640040  andi        $a0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172840u;
            goto label_172840;
        }
    }
    ctx->pc = 0x172830u;
    // 0x172830: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x172830u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x172834: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x172834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x172838: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x172838u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17283c: 0x30640040  andi        $a0, $v1, 0x40
    ctx->pc = 0x17283cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_172840:
    // 0x172840: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172840u;
    {
        const bool branch_taken_0x172840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172840) {
            ctx->pc = 0x172844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172840u;
            // 0x172844: 0x30640080  andi        $a0, $v1, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172858u;
            goto label_172858;
        }
    }
    ctx->pc = 0x172848u;
    // 0x172848: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x172848u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x17284c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x17284cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x172850: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x172850u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x172854: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x172854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_172858:
    // 0x172858: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172858u;
    {
        const bool branch_taken_0x172858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172858) {
            ctx->pc = 0x17285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172858u;
            // 0x17285c: 0x30640020  andi        $a0, $v1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172870u;
            goto label_172870;
        }
    }
    ctx->pc = 0x172860u;
    // 0x172860: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x172860u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x172864: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x172864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x172868: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x172868u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17286c: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x17286cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_172870:
    // 0x172870: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172870u;
    {
        const bool branch_taken_0x172870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172870) {
            ctx->pc = 0x172874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172870u;
            // 0x172874: 0x30644000  andi        $a0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172888u;
            goto label_172888;
        }
    }
    ctx->pc = 0x172878u;
    // 0x172878: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x172878u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x17287c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x17287cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x172880: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x172880u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x172884: 0x30644000  andi        $a0, $v1, 0x4000
    ctx->pc = 0x172884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_172888:
    // 0x172888: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172888u;
    {
        const bool branch_taken_0x172888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172888) {
            ctx->pc = 0x17288Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172888u;
            // 0x17288c: 0x30642000  andi        $a0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1728A0u;
            goto label_1728a0;
        }
    }
    ctx->pc = 0x172890u;
    // 0x172890: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x172890u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x172894: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x172894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x172898: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x172898u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17289c: 0x30642000  andi        $a0, $v1, 0x2000
    ctx->pc = 0x17289cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_1728a0:
    // 0x1728a0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1728A0u;
    {
        const bool branch_taken_0x1728a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728a0) {
            ctx->pc = 0x1728A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728A0u;
            // 0x1728a4: 0x30648000  andi        $a0, $v1, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1728B8u;
            goto label_1728b8;
        }
    }
    ctx->pc = 0x1728A8u;
    // 0x1728a8: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x1728a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x1728ac: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x1728acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x1728b0: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x1728b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x1728b4: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x1728b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1728b8:
    // 0x1728b8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1728B8u;
    {
        const bool branch_taken_0x1728b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728b8) {
            ctx->pc = 0x1728BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728B8u;
            // 0x1728bc: 0x30641000  andi        $a0, $v1, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1728D0u;
            goto label_1728d0;
        }
    }
    ctx->pc = 0x1728C0u;
    // 0x1728c0: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x1728c0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x1728c4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x1728c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1728c8: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x1728c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x1728cc: 0x30641000  andi        $a0, $v1, 0x1000
    ctx->pc = 0x1728ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_1728d0:
    // 0x1728d0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1728D0u;
    {
        const bool branch_taken_0x1728d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728d0) {
            ctx->pc = 0x1728D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728D0u;
            // 0x1728d4: 0x30640800  andi        $a0, $v1, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1728E8u;
            goto label_1728e8;
        }
    }
    ctx->pc = 0x1728D8u;
    // 0x1728d8: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x1728d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x1728dc: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x1728dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x1728e0: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x1728e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x1728e4: 0x30640800  andi        $a0, $v1, 0x800
    ctx->pc = 0x1728e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_1728e8:
    // 0x1728e8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1728E8u;
    {
        const bool branch_taken_0x1728e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728e8) {
            ctx->pc = 0x1728ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728E8u;
            // 0x1728ec: 0x30640008  andi        $a0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172900u;
            goto label_172900;
        }
    }
    ctx->pc = 0x1728F0u;
    // 0x1728f0: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x1728f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x1728f4: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x1728f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x1728f8: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x1728f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x1728fc: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x1728fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_172900:
    // 0x172900: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172900u;
    {
        const bool branch_taken_0x172900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172900) {
            ctx->pc = 0x172904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172900u;
            // 0x172904: 0x30640200  andi        $a0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172918u;
            goto label_172918;
        }
    }
    ctx->pc = 0x172908u;
    // 0x172908: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x172908u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x17290c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x17290cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x172910: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x172910u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x172914: 0x30640200  andi        $a0, $v1, 0x200
    ctx->pc = 0x172914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_172918:
    // 0x172918: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172918u;
    {
        const bool branch_taken_0x172918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172918) {
            ctx->pc = 0x17291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172918u;
            // 0x17291c: 0x30630100  andi        $v1, $v1, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172930u;
            goto label_172930;
        }
    }
    ctx->pc = 0x172920u;
    // 0x172920: 0x97a4003e  lhu         $a0, 0x3E($sp)
    ctx->pc = 0x172920u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x172924: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x172924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x172928: 0xa7a4003e  sh          $a0, 0x3E($sp)
    ctx->pc = 0x172928u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17292c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x17292cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_172930:
    // 0x172930: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172930u;
    {
        const bool branch_taken_0x172930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172930) {
            ctx->pc = 0x172944u;
            goto label_172944;
        }
    }
    ctx->pc = 0x172938u;
    // 0x172938: 0x97a3003e  lhu         $v1, 0x3E($sp)
    ctx->pc = 0x172938u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x17293c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x17293cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x172940: 0xa7a3003e  sh          $v1, 0x3E($sp)
    ctx->pc = 0x172940u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 3));
label_172944:
    // 0x172944: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x172944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x172948: 0x3c04fe00  lui         $a0, 0xFE00
    ctx->pc = 0x172948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65024 << 16));
    // 0x17294c: 0x8c639478  lw          $v1, -0x6B88($v1)
    ctx->pc = 0x17294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939768)));
    // 0x172950: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x172950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x172954: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x172954u;
    {
        const bool branch_taken_0x172954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172954) {
            ctx->pc = 0x172958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172954u;
            // 0x172958: 0x96040004  lhu         $a0, 0x4($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172980u;
            goto label_172980;
        }
    }
    ctx->pc = 0x17295Cu;
    // 0x17295c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x17295cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x172960: 0x90639480  lbu         $v1, -0x6B80($v1)
    ctx->pc = 0x172960u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939776)));
    // 0x172964: 0x14710023  bne         $v1, $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x172964u;
    {
        const bool branch_taken_0x172964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x172964) {
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x17296Cu;
    // 0x17296c: 0xc0d1034  jal         func_3440D0
    ctx->pc = 0x17296Cu;
    SET_GPR_U32(ctx, 31, 0x172974u);
    ctx->pc = 0x172970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17296Cu;
    // 0x172970: 0x27a4003e  addiu       $a0, $sp, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3440D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3440D0u, 0x17296Cu, 0x172974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172974u;
label_172974:
    // 0x172974: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x172974u;
    {
        const bool branch_taken_0x172974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172974) {
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x17297Cu;
    // 0x17297c: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x17297cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_172980:
    // 0x172980: 0x97a3003e  lhu         $v1, 0x3E($sp)
    ctx->pc = 0x172980u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x172984: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x172984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x172988: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x172988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17298c: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x17298cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x172990: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x172990u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x172994: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x172994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x172998: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x172998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17299c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x17299cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1729a0: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x1729a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1729a4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1729a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1729a8: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1729a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1729ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1729acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1729b0: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x1729b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1729b4: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x1729b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1729b8: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x1729b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1729bc: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x1729bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1729c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1729c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1729c4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1729C4u;
    {
        const bool branch_taken_0x1729c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1729c4) {
            ctx->pc = 0x1729C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1729C4u;
            // 0x1729c8: 0x96030222  lhu         $v1, 0x222($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1729DCu;
            goto label_1729dc;
        }
    }
    ctx->pc = 0x1729CCu;
    // 0x1729cc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1729d0: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x1729d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x1729d4: 0xa6000222  sh          $zero, 0x222($s0)
    ctx->pc = 0x1729d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x1729d8: 0x96030222  lhu         $v1, 0x222($s0)
    ctx->pc = 0x1729d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
label_1729dc:
    // 0x1729dc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1729DCu;
    {
        const bool branch_taken_0x1729dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1729dc) {
            ctx->pc = 0x1729E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1729DCu;
            // 0x1729e0: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x1729E4u;
    // 0x1729e4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1729e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1729e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1729E8u;
    {
        const bool branch_taken_0x1729e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E8u;
        // 0x1729ec: 0xa603000a  sh          $v1, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729e8) {
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x1729F0u;
    // 0x1729f0: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x1729f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1729f4:
    // 0x1729f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1729f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1729f8:
    // 0x1729f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1729f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1729fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1729fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172a00: 0x3e00008  jr          $ra
    ctx->pc = 0x172A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A00u;
        // 0x172a04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172A08u;
    // 0x172a08: 0x0  nop
    ctx->pc = 0x172a08u;
    // NOP
    // 0x172a0c: 0x0  nop
    ctx->pc = 0x172a0cu;
    // NOP
}
