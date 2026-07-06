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

// Function: sub_00173650
// Address: 0x173650 - 0x1737a0
void sub_00173650_0x173650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173650_0x173650");
#endif

    switch (ctx->pc) {
        case 0x173684u: goto label_173684;
        default: break;
    }

    ctx->pc = 0x173650u;

    // 0x173650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173654: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x173654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x173658: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x173658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17365c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17365cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x173660: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x173660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173664: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173668: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x173668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17366c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173670: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x173670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173678: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x173678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17367c: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x17367Cu;
    SET_GPR_U32(ctx, 31, 0x173684u);
    ctx->pc = 0x173680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17367Cu;
    // 0x173680: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x17367Cu, 0x173684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173684u;
label_173684:
    // 0x173684: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x173688: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x173688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x17368c: 0x532823  subu        $a1, $v0, $s3
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x173690: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x173690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x173694: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x173698: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x173698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17369c: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x17369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x1736a0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1736a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1736a4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1736a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1736a8: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x1736a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1736ac: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1736b0: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1736B0u;
    {
        const bool branch_taken_0x1736b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1736b0) {
            ctx->pc = 0x1736B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1736B0u;
            // 0x1736b4: 0x94820010  lhu         $v0, 0x10($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1736C4u;
            goto label_1736c4;
        }
    }
    ctx->pc = 0x1736B8u;
    // 0x1736b8: 0x36020100  ori         $v0, $s0, 0x100
    ctx->pc = 0x1736b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
    // 0x1736bc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1736bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1736c0: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x1736c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_1736c4:
    // 0x1736c4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1736c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1736c8: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1736C8u;
    {
        const bool branch_taken_0x1736c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1736c8) {
            ctx->pc = 0x1736CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1736C8u;
            // 0x1736cc: 0x94820012  lhu         $v0, 0x12($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1736DCu;
            goto label_1736dc;
        }
    }
    ctx->pc = 0x1736D0u;
    // 0x1736d0: 0x36020200  ori         $v0, $s0, 0x200
    ctx->pc = 0x1736d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)512);
    // 0x1736d4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1736d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1736d8: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x1736d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_1736dc:
    // 0x1736dc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1736dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1736e0: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1736E0u;
    {
        const bool branch_taken_0x1736e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1736e0) {
            ctx->pc = 0x1736E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1736E0u;
            // 0x1736e4: 0x94820014  lhu         $v0, 0x14($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1736F4u;
            goto label_1736f4;
        }
    }
    ctx->pc = 0x1736E8u;
    // 0x1736e8: 0x36020400  ori         $v0, $s0, 0x400
    ctx->pc = 0x1736e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1024);
    // 0x1736ec: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1736ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1736f0: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x1736f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_1736f4:
    // 0x1736f4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1736f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1736f8: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1736F8u;
    {
        const bool branch_taken_0x1736f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1736f8) {
            ctx->pc = 0x1736FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1736F8u;
            // 0x1736fc: 0x94820016  lhu         $v0, 0x16($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17370Cu;
            goto label_17370c;
        }
    }
    ctx->pc = 0x173700u;
    // 0x173700: 0x36020800  ori         $v0, $s0, 0x800
    ctx->pc = 0x173700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
    // 0x173704: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x173704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x173708: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x173708u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
label_17370c:
    // 0x17370c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x17370cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x173710: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173710u;
    {
        const bool branch_taken_0x173710 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x173710) {
            ctx->pc = 0x173714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173710u;
            // 0x173714: 0x94820018  lhu         $v0, 0x18($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173724u;
            goto label_173724;
        }
    }
    ctx->pc = 0x173718u;
    // 0x173718: 0x36021000  ori         $v0, $s0, 0x1000
    ctx->pc = 0x173718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
    // 0x17371c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x173720: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x173720u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_173724:
    // 0x173724: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x173724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x173728: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x173728u;
    {
        const bool branch_taken_0x173728 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x173728) {
            ctx->pc = 0x173738u;
            goto label_173738;
        }
    }
    ctx->pc = 0x173730u;
    // 0x173730: 0x36022000  ori         $v0, $s0, 0x2000
    ctx->pc = 0x173730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x173734: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x173734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_173738:
    // 0x173738: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x173738u;
    {
        const bool branch_taken_0x173738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x173738) {
            ctx->pc = 0x17373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173738u;
            // 0x17373c: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17375Cu;
            goto label_17375c;
        }
    }
    ctx->pc = 0x173740u;
    // 0x173740: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x173740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x173744: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x173744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x173748: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x173748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17374c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17374Cu;
    {
        const bool branch_taken_0x17374c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17374c) {
            ctx->pc = 0x173750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17374Cu;
            // 0x173750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173778u;
            goto label_173778;
        }
    }
    ctx->pc = 0x173754u;
    // 0x173754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173754u;
    {
        const bool branch_taken_0x173754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173754u;
        // 0x173758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173754) {
            ctx->pc = 0x173778u;
            goto label_173778;
        }
    }
    ctx->pc = 0x17375Cu;
label_17375c:
    // 0x17375c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x17375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x173760: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x173760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x173764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173764u;
    {
        const bool branch_taken_0x173764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173764) {
            ctx->pc = 0x173774u;
            goto label_173774;
        }
    }
    ctx->pc = 0x17376Cu;
    // 0x17376c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17376Cu;
    {
        const bool branch_taken_0x17376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17376Cu;
        // 0x173770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17376c) {
            ctx->pc = 0x173778u;
            goto label_173778;
        }
    }
    ctx->pc = 0x173774u;
label_173774:
    // 0x173774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173778:
    // 0x173778: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x173778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17377c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17377cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x173780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17378c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17378cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173790: 0x3e00008  jr          $ra
    ctx->pc = 0x173790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173790u;
        // 0x173794: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173798u;
    // 0x173798: 0x0  nop
    ctx->pc = 0x173798u;
    // NOP
    // 0x17379c: 0x0  nop
    ctx->pc = 0x17379cu;
    // NOP
}
