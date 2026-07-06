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

// Function: sub_002FD760
// Address: 0x2fd760 - 0x2fdfa0
void sub_002FD760_0x2fd760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD760_0x2fd760");
#endif

    switch (ctx->pc) {
        case 0x2fd77cu: goto label_2fd77c;
        case 0x2fd798u: goto label_2fd798;
        case 0x2fd7c0u: goto label_2fd7c0;
        case 0x2fd7d8u: goto label_2fd7d8;
        case 0x2fd7f0u: goto label_2fd7f0;
        case 0x2fd820u: goto label_2fd820;
        case 0x2fd83cu: goto label_2fd83c;
        case 0x2fd858u: goto label_2fd858;
        case 0x2fd874u: goto label_2fd874;
        case 0x2fd890u: goto label_2fd890;
        case 0x2fd8acu: goto label_2fd8ac;
        case 0x2fd8c8u: goto label_2fd8c8;
        case 0x2fd8e4u: goto label_2fd8e4;
        case 0x2fd900u: goto label_2fd900;
        case 0x2fd91cu: goto label_2fd91c;
        case 0x2fd938u: goto label_2fd938;
        case 0x2fd954u: goto label_2fd954;
        case 0x2fd970u: goto label_2fd970;
        case 0x2fd98cu: goto label_2fd98c;
        case 0x2fd9a8u: goto label_2fd9a8;
        case 0x2fd9c4u: goto label_2fd9c4;
        case 0x2fdac8u: goto label_2fdac8;
        case 0x2fdb2cu: goto label_2fdb2c;
        case 0x2fdb58u: goto label_2fdb58;
        case 0x2fdb84u: goto label_2fdb84;
        case 0x2fdb90u: goto label_2fdb90;
        case 0x2fdbbcu: goto label_2fdbbc;
        case 0x2fdc14u: goto label_2fdc14;
        case 0x2fdc60u: goto label_2fdc60;
        case 0x2fdc6cu: goto label_2fdc6c;
        case 0x2fdc7cu: goto label_2fdc7c;
        case 0x2fdc88u: goto label_2fdc88;
        case 0x2fdce8u: goto label_2fdce8;
        case 0x2fdcf4u: goto label_2fdcf4;
        case 0x2fdd48u: goto label_2fdd48;
        case 0x2fdd54u: goto label_2fdd54;
        case 0x2fddd8u: goto label_2fddd8;
        case 0x2fde24u: goto label_2fde24;
        case 0x2fde30u: goto label_2fde30;
        case 0x2fde40u: goto label_2fde40;
        case 0x2fde4cu: goto label_2fde4c;
        case 0x2fded8u: goto label_2fded8;
        case 0x2fdf24u: goto label_2fdf24;
        case 0x2fdf30u: goto label_2fdf30;
        case 0x2fdf40u: goto label_2fdf40;
        case 0x2fdf4cu: goto label_2fdf4c;
        case 0x2fdf84u: goto label_2fdf84;
        default: break;
    }

    ctx->pc = 0x2fd760u;

    // 0x2fd760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fd764: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fd764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fd768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fd768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fd76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fd770: 0x8c500c50  lw          $s0, 0xC50($v0)
    ctx->pc = 0x2fd770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fd774: 0xc0bf4e8  jal         func_2FD3A0
    ctx->pc = 0x2FD774u;
    SET_GPR_U32(ctx, 31, 0x2FD77Cu);
    ctx->pc = 0x2FD778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD774u;
    // 0x2fd778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD3A0u, 0x2FD774u, 0x2FD77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD77Cu;
label_2fd77c:
    // 0x2fd77c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD77Cu;
    {
        const bool branch_taken_0x2fd77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd77c) {
            ctx->pc = 0x2FD780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD77Cu;
            // 0x2fd780: 0x27a4002e  addiu       $a0, $sp, 0x2E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD78Cu;
            goto label_2fd78c;
        }
    }
    ctx->pc = 0x2FD784u;
    // 0x2fd784: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2FD784u;
    {
        const bool branch_taken_0x2fd784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD784u;
        // 0x2fd788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd784) {
            ctx->pc = 0x2FDA00u;
            goto label_2fda00;
        }
    }
    ctx->pc = 0x2FD78Cu;
label_2fd78c:
    // 0x2fd78c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2fd78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fd790: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD790u;
    SET_GPR_U32(ctx, 31, 0x2FD798u);
    ctx->pc = 0x2FD794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD790u;
    // 0x2fd794: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD790u, 0x2FD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD798u;
label_2fd798:
    // 0x2fd798: 0x97a2002e  lhu         $v0, 0x2E($sp)
    ctx->pc = 0x2fd798u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x2fd79c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD79Cu;
    {
        const bool branch_taken_0x2fd79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd79c) {
            ctx->pc = 0x2FD7ACu;
            goto label_2fd7ac;
        }
    }
    ctx->pc = 0x2FD7A4u;
    // 0x2fd7a4: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2FD7A4u;
    {
        const bool branch_taken_0x2fd7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7A4u;
        // 0x2fd7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7a4) {
            ctx->pc = 0x2FDA00u;
            goto label_2fda00;
        }
    }
    ctx->pc = 0x2FD7ACu;
label_2fd7ac:
    // 0x2fd7ac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd7b0: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x2fd7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fd7b4: 0x2484f240  addiu       $a0, $a0, -0xDC0
    ctx->pc = 0x2fd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963776));
    // 0x2fd7b8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD7B8u;
    SET_GPR_U32(ctx, 31, 0x2FD7C0u);
    ctx->pc = 0x2FD7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7B8u;
    // 0x2fd7bc: 0x3406c000  ori         $a2, $zero, 0xC000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD7B8u, 0x2FD7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7C0u;
label_2fd7c0:
    // 0x2fd7c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd7c4: 0x3401c006  ori         $at, $zero, 0xC006
    ctx->pc = 0x2fd7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49158);
    // 0x2fd7c8: 0x2484ef90  addiu       $a0, $a0, -0x1070
    ctx->pc = 0x2fd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963088));
    // 0x2fd7cc: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd7d0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD7D0u;
    SET_GPR_U32(ctx, 31, 0x2FD7D8u);
    ctx->pc = 0x2FD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7D0u;
    // 0x2fd7d4: 0x240602a8  addiu       $a2, $zero, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD7D0u, 0x2FD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7D8u;
label_2fd7d8:
    // 0x2fd7d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd7dc: 0x3401c2ae  ori         $at, $zero, 0xC2AE
    ctx->pc = 0x2fd7dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49838);
    // 0x2fd7e0: 0x2484ece0  addiu       $a0, $a0, -0x1320
    ctx->pc = 0x2fd7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    // 0x2fd7e4: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd7e8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD7E8u;
    SET_GPR_U32(ctx, 31, 0x2FD7F0u);
    ctx->pc = 0x2FD7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7E8u;
    // 0x2fd7ec: 0x240602a8  addiu       $a2, $zero, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD7E8u, 0x2FD7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7F0u;
label_2fd7f0:
    // 0x2fd7f0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2fd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2fd7f4: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd7f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2fd7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2fd7fc: 0x3401c557  ori         $at, $zero, 0xC557
    ctx->pc = 0x2fd7fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50519);
    // 0x2fd800: 0x9067c556  lbu         $a3, -0x3AAA($v1)
    ctx->pc = 0x2fd800u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294952278)));
    // 0x2fd804: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x2fd804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x2fd808: 0x2484b290  addiu       $a0, $a0, -0x4D70
    ctx->pc = 0x2fd808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947472));
    // 0x2fd80c: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd810: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2fd810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2fd814: 0xa047b288  sb          $a3, -0x4D78($v0)
    ctx->pc = 0x2fd814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294947464), (uint8_t)GPR_U32(ctx, 7));
    // 0x2fd818: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD818u;
    SET_GPR_U32(ctx, 31, 0x2FD820u);
    ctx->pc = 0x2FD81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD818u;
    // 0x2fd81c: 0x3466cc24  ori         $a2, $v1, 0xCC24 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52260);
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD818u, 0x2FD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD820u;
label_2fd820:
    // 0x2fd820: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd824: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd828: 0x3421917b  ori         $at, $at, 0x917B
    ctx->pc = 0x2fd828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37243);
    // 0x2fd82c: 0x2484b280  addiu       $a0, $a0, -0x4D80
    ctx->pc = 0x2fd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947456));
    // 0x2fd830: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd834: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD834u;
    SET_GPR_U32(ctx, 31, 0x2FD83Cu);
    ctx->pc = 0x2FD838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD834u;
    // 0x2fd838: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD834u, 0x2FD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD83Cu;
label_2fd83c:
    // 0x2fd83c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd840: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd844: 0x34219182  ori         $at, $at, 0x9182
    ctx->pc = 0x2fd844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37250);
    // 0x2fd848: 0x2484b270  addiu       $a0, $a0, -0x4D90
    ctx->pc = 0x2fd848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947440));
    // 0x2fd84c: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd850: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD850u;
    SET_GPR_U32(ctx, 31, 0x2FD858u);
    ctx->pc = 0x2FD854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD850u;
    // 0x2fd854: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD850u, 0x2FD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD858u;
label_2fd858:
    // 0x2fd858: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd85c: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd860: 0x3421918d  ori         $at, $at, 0x918D
    ctx->pc = 0x2fd860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37261);
    // 0x2fd864: 0x2484b268  addiu       $a0, $a0, -0x4D98
    ctx->pc = 0x2fd864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947432));
    // 0x2fd868: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd86c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD86Cu;
    SET_GPR_U32(ctx, 31, 0x2FD874u);
    ctx->pc = 0x2FD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD86Cu;
    // 0x2fd870: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD86Cu, 0x2FD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD874u;
label_2fd874:
    // 0x2fd874: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd878: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd87c: 0x34219191  ori         $at, $at, 0x9191
    ctx->pc = 0x2fd87cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37265);
    // 0x2fd880: 0x2484b250  addiu       $a0, $a0, -0x4DB0
    ctx->pc = 0x2fd880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947408));
    // 0x2fd884: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd888: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD888u;
    SET_GPR_U32(ctx, 31, 0x2FD890u);
    ctx->pc = 0x2FD88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD888u;
    // 0x2fd88c: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD888u, 0x2FD890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD890u;
label_2fd890:
    // 0x2fd890: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd894: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x2fd894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x2fd898: 0x342191a3  ori         $at, $at, 0x91A3
    ctx->pc = 0x2fd898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37283);
    // 0x2fd89c: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x2fd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x2fd8a0: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd8a4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD8A4u;
    SET_GPR_U32(ctx, 31, 0x2FD8ACu);
    ctx->pc = 0x2FD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8A4u;
    // 0x2fd8a8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD8A4u, 0x2FD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8ACu;
label_2fd8ac:
    // 0x2fd8ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd8b0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd8b4: 0x342191ae  ori         $at, $at, 0x91AE
    ctx->pc = 0x2fd8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37294);
    // 0x2fd8b8: 0x2484ec50  addiu       $a0, $a0, -0x13B0
    ctx->pc = 0x2fd8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
    // 0x2fd8bc: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd8c0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD8C0u;
    SET_GPR_U32(ctx, 31, 0x2FD8C8u);
    ctx->pc = 0x2FD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8C0u;
    // 0x2fd8c4: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD8C0u, 0x2FD8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8C8u;
label_2fd8c8:
    // 0x2fd8c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd8cc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd8d0: 0x342191d8  ori         $at, $at, 0x91D8
    ctx->pc = 0x2fd8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37336);
    // 0x2fd8d4: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x2fd8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x2fd8d8: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd8dc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD8DCu;
    SET_GPR_U32(ctx, 31, 0x2FD8E4u);
    ctx->pc = 0x2FD8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8DCu;
    // 0x2fd8e0: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD8DCu, 0x2FD8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8E4u;
label_2fd8e4:
    // 0x2fd8e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd8e8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd8ec: 0x34219222  ori         $at, $at, 0x9222
    ctx->pc = 0x2fd8ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37410);
    // 0x2fd8f0: 0x2484ec80  addiu       $a0, $a0, -0x1380
    ctx->pc = 0x2fd8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
    // 0x2fd8f4: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd8f8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD8F8u;
    SET_GPR_U32(ctx, 31, 0x2FD900u);
    ctx->pc = 0x2FD8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8F8u;
    // 0x2fd8fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD8F8u, 0x2FD900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD900u;
label_2fd900:
    // 0x2fd900: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd904: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2fd904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2fd908: 0x34219224  ori         $at, $at, 0x9224
    ctx->pc = 0x2fd908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37412);
    // 0x2fd90c: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x2fd90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x2fd910: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd914: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD914u;
    SET_GPR_U32(ctx, 31, 0x2FD91Cu);
    ctx->pc = 0x2FD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD914u;
    // 0x2fd918: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD914u, 0x2FD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD91Cu;
label_2fd91c:
    // 0x2fd91c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd920: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2fd920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2fd924: 0x342192c4  ori         $at, $at, 0x92C4
    ctx->pc = 0x2fd924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37572);
    // 0x2fd928: 0x2484ed50  addiu       $a0, $a0, -0x12B0
    ctx->pc = 0x2fd928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962512));
    // 0x2fd92c: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd930: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD930u;
    SET_GPR_U32(ctx, 31, 0x2FD938u);
    ctx->pc = 0x2FD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD930u;
    // 0x2fd934: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD930u, 0x2FD938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD938u;
label_2fd938:
    // 0x2fd938: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd93c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2fd93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2fd940: 0x34219364  ori         $at, $at, 0x9364
    ctx->pc = 0x2fd940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37732);
    // 0x2fd944: 0x2484ee90  addiu       $a0, $a0, -0x1170
    ctx->pc = 0x2fd944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962832));
    // 0x2fd948: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd94c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD94Cu;
    SET_GPR_U32(ctx, 31, 0x2FD954u);
    ctx->pc = 0x2FD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD94Cu;
    // 0x2fd950: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD94Cu, 0x2FD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD954u;
label_2fd954:
    // 0x2fd954: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd958: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2fd958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2fd95c: 0x34219404  ori         $at, $at, 0x9404
    ctx->pc = 0x2fd95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37892);
    // 0x2fd960: 0x2484ec50  addiu       $a0, $a0, -0x13B0
    ctx->pc = 0x2fd960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
    // 0x2fd964: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd968: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD968u;
    SET_GPR_U32(ctx, 31, 0x2FD970u);
    ctx->pc = 0x2FD96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD968u;
    // 0x2fd96c: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD968u, 0x2FD970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD970u;
label_2fd970:
    // 0x2fd970: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd974: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x2fd974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x2fd978: 0x3421947c  ori         $at, $at, 0x947C
    ctx->pc = 0x2fd978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38012);
    // 0x2fd97c: 0x2484ecd0  addiu       $a0, $a0, -0x1330
    ctx->pc = 0x2fd97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962384));
    // 0x2fd980: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd984: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD984u;
    SET_GPR_U32(ctx, 31, 0x2FD98Cu);
    ctx->pc = 0x2FD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD984u;
    // 0x2fd988: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD984u, 0x2FD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD98Cu;
label_2fd98c:
    // 0x2fd98c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd990: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x2fd990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x2fd994: 0x342194f4  ori         $at, $at, 0x94F4
    ctx->pc = 0x2fd994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38132);
    // 0x2fd998: 0x2484bea8  addiu       $a0, $a0, -0x4158
    ctx->pc = 0x2fd998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
    // 0x2fd99c: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd9a0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD9A0u;
    SET_GPR_U32(ctx, 31, 0x2FD9A8u);
    ctx->pc = 0x2FD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9A0u;
    // 0x2fd9a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD9A0u, 0x2FD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9A8u;
label_2fd9a8:
    // 0x2fd9a8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd9ac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fd9b0: 0x342194f8  ori         $at, $at, 0x94F8
    ctx->pc = 0x2fd9b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38136);
    // 0x2fd9b4: 0x2484ec40  addiu       $a0, $a0, -0x13C0
    ctx->pc = 0x2fd9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962240));
    // 0x2fd9b8: 0x2012821  addu        $a1, $s0, $at
    ctx->pc = 0x2fd9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd9bc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD9BCu;
    SET_GPR_U32(ctx, 31, 0x2FD9C4u);
    ctx->pc = 0x2FD9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9BCu;
    // 0x2fd9c0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2FD9BCu, 0x2FD9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9C4u;
label_2fd9c4:
    // 0x2fd9c4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fd9c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd9cc: 0x8c430c50  lw          $v1, 0xC50($v0)
    ctx->pc = 0x2fd9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fd9d0: 0x342194fe  ori         $at, $at, 0x94FE
    ctx->pc = 0x2fd9d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38142);
    // 0x2fd9d4: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd9d8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2fd9dc: 0x344295b8  ori         $v0, $v0, 0x95B8
    ctx->pc = 0x2fd9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
    // 0x2fd9e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fd9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fd9e4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2fd9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fd9e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD9E8u;
    {
        const bool branch_taken_0x2fd9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd9e8) {
            ctx->pc = 0x2FD9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD9E8u;
            // 0x2fd9ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDA00u;
            goto label_2fda00;
        }
    }
    ctx->pc = 0x2FD9F0u;
    // 0x2fd9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd9f4: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x2fd9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fd9f8: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x2fd9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fd9fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fda00:
    // 0x2fda00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fda00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fda04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fda04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fda08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDA08u;
        // 0x2fda0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA10u;
    // 0x2fda10: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fda10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fda14: 0xac409728  sw          $zero, -0x68D8($v0)
    ctx->pc = 0x2fda14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 0));
    // 0x2fda18: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x2fda18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x2fda1c: 0x8082674  j           func_2099D0
    ctx->pc = 0x2FDA1Cu;
    ctx->pc = 0x2FDA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA1Cu;
    // 0x2fda20: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FDA24u;
    // 0x2fda24: 0x0  nop
    ctx->pc = 0x2fda24u;
    // NOP
    // 0x2fda28: 0x0  nop
    ctx->pc = 0x2fda28u;
    // NOP
    // 0x2fda2c: 0x0  nop
    ctx->pc = 0x2fda2cu;
    // NOP
    // 0x2fda30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fda30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fda34: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x2fda34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x2fda38: 0xac409728  sw          $zero, -0x68D8($v0)
    ctx->pc = 0x2fda38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 0));
    // 0x2fda3c: 0x8082674  j           func_2099D0
    ctx->pc = 0x2FDA3Cu;
    ctx->pc = 0x2FDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA3Cu;
    // 0x2fda40: 0x248441f0  addiu       $a0, $a0, 0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FDA44u;
    // 0x2fda44: 0x0  nop
    ctx->pc = 0x2fda44u;
    // NOP
    // 0x2fda48: 0x0  nop
    ctx->pc = 0x2fda48u;
    // NOP
    // 0x2fda4c: 0x0  nop
    ctx->pc = 0x2fda4cu;
    // NOP
    // 0x2fda50: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fda50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fda54: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x2fda54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x2fda58: 0xac409728  sw          $zero, -0x68D8($v0)
    ctx->pc = 0x2fda58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 0));
    // 0x2fda5c: 0x8082674  j           func_2099D0
    ctx->pc = 0x2FDA5Cu;
    ctx->pc = 0x2FDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA5Cu;
    // 0x2fda60: 0x24844840  addiu       $a0, $a0, 0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FDA64u;
    // 0x2fda64: 0x0  nop
    ctx->pc = 0x2fda64u;
    // NOP
    // 0x2fda68: 0x0  nop
    ctx->pc = 0x2fda68u;
    // NOP
    // 0x2fda6c: 0x0  nop
    ctx->pc = 0x2fda6cu;
    // NOP
    // 0x2fda70: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fda70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fda74: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fda74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fda78: 0xac409728  sw          $zero, -0x68D8($v0)
    ctx->pc = 0x2fda78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 0));
    // 0x2fda7c: 0x8082674  j           func_2099D0
    ctx->pc = 0x2FDA7Cu;
    ctx->pc = 0x2FDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA7Cu;
    // 0x2fda80: 0x24840eb0  addiu       $a0, $a0, 0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FDA84u;
    // 0x2fda84: 0x0  nop
    ctx->pc = 0x2fda84u;
    // NOP
    // 0x2fda88: 0x0  nop
    ctx->pc = 0x2fda88u;
    // NOP
    // 0x2fda8c: 0x0  nop
    ctx->pc = 0x2fda8cu;
    // NOP
    // 0x2fda90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fda90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fda94: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fda94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fda98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fda98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fda9c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x2fda9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x2fdaa0: 0x9465be90  lhu         $a1, -0x4170($v1)
    ctx->pc = 0x2fdaa0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdaa4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2fdaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2fdaa8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdaac: 0xa485be90  sh          $a1, -0x4170($a0)
    ctx->pc = 0x2fdaacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950544), (uint16_t)GPR_U32(ctx, 5));
    // 0x2fdab0: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fdab0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdab4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FDAB4u;
    {
        const bool branch_taken_0x2fdab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdab4) {
            ctx->pc = 0x2FDAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDAB4u;
            // 0x2fdab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDACCu;
            goto label_2fdacc;
        }
    }
    ctx->pc = 0x2FDABCu;
    // 0x2fdabc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdac0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDAC0u;
    SET_GPR_U32(ctx, 31, 0x2FDAC8u);
    ctx->pc = 0x2FDAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAC0u;
    // 0x2fdac4: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDAC0u, 0x2FDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAC8u;
label_2fdac8:
    // 0x2fdac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdacc:
    // 0x2fdacc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDACCu;
        // 0x2fdad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAD4u;
    // 0x2fdad4: 0x0  nop
    ctx->pc = 0x2fdad4u;
    // NOP
    // 0x2fdad8: 0x0  nop
    ctx->pc = 0x2fdad8u;
    // NOP
    // 0x2fdadc: 0x0  nop
    ctx->pc = 0x2fdadcu;
    // NOP
    // 0x2fdae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdae4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdaec: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2fdaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x2fdaf0: 0x90670c40  lbu         $a3, 0xC40($v1)
    ctx->pc = 0x2fdaf0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3136)));
    // 0x2fdaf4: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x2fdaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x2fdaf8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdafc: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x2fdafcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x2fdb00: 0x9466be90  lhu         $a2, -0x4170($v1)
    ctx->pc = 0x2fdb00u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdb04: 0xa0a70c40  sb          $a3, 0xC40($a1)
    ctx->pc = 0x2fdb04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3136), (uint8_t)GPR_U32(ctx, 7));
    // 0x2fdb08: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x2fdb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fdb0c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdb10: 0xa485be90  sh          $a1, -0x4170($a0)
    ctx->pc = 0x2fdb10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950544), (uint16_t)GPR_U32(ctx, 5));
    // 0x2fdb14: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fdb14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdb18: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FDB18u;
    {
        const bool branch_taken_0x2fdb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdb18) {
            ctx->pc = 0x2FDB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDB18u;
            // 0x2fdb1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDB30u;
            goto label_2fdb30;
        }
    }
    ctx->pc = 0x2FDB20u;
    // 0x2fdb20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdb24: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDB24u;
    SET_GPR_U32(ctx, 31, 0x2FDB2Cu);
    ctx->pc = 0x2FDB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB24u;
    // 0x2fdb28: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDB24u, 0x2FDB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB2Cu;
label_2fdb2c:
    // 0x2fdb2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdb30:
    // 0x2fdb30: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB30u;
        // 0x2fdb34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB38u;
    // 0x2fdb38: 0x0  nop
    ctx->pc = 0x2fdb38u;
    // NOP
    // 0x2fdb3c: 0x0  nop
    ctx->pc = 0x2fdb3cu;
    // NOP
    // 0x2fdb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdb44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fdb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fdb48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdb4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fdb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdb50: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x2FDB50u;
    SET_GPR_U32(ctx, 31, 0x2FDB58u);
    ctx->pc = 0x2FDB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB50u;
    // 0x2fdb54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x2FDB50u, 0x2FDB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB58u;
label_2fdb58:
    // 0x2fdb58: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdb5c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2fdb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fdb60: 0x90650c40  lbu         $a1, 0xC40($v1)
    ctx->pc = 0x2fdb60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3136)));
    // 0x2fdb64: 0x30842000  andi        $a0, $a0, 0x2000
    ctx->pc = 0x2fdb64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2fdb68: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdb6c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2fdb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2fdb70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDB70u;
    {
        const bool branch_taken_0x2fdb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB70u;
        // 0x2fdb74: 0xa0650c40  sb          $a1, 0xC40($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb70) {
            ctx->pc = 0x2FDB90u;
            goto label_2fdb90;
        }
    }
    ctx->pc = 0x2FDB78u;
    // 0x2fdb78: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x2fdb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x2fdb7c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDB7Cu;
    SET_GPR_U32(ctx, 31, 0x2FDB84u);
    ctx->pc = 0x2FDB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB7Cu;
    // 0x2fdb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDB7Cu, 0x2FDB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB84u;
label_2fdb84:
    // 0x2fdb84: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdb88: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDB88u;
    SET_GPR_U32(ctx, 31, 0x2FDB90u);
    ctx->pc = 0x2FDB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB88u;
    // 0x2fdb8c: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDB88u, 0x2FDB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB90u;
label_2fdb90:
    // 0x2fdb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdb94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB94u;
        // 0x2fdb98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB9Cu;
    // 0x2fdb9c: 0x0  nop
    ctx->pc = 0x2fdb9cu;
    // NOP
    // 0x2fdba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdba4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fdba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fdba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdbac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fdbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdbb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdbb4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x2FDBB4u;
    SET_GPR_U32(ctx, 31, 0x2FDBBCu);
    ctx->pc = 0x2FDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDBB4u;
    // 0x2fdbb8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x2FDBB4u, 0x2FDBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDBBCu;
label_2fdbbc:
    // 0x2fdbbc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdbc0: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fdbc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdbc4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDBC4u;
    {
        const bool branch_taken_0x2fdbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDBC4u;
        // 0x2fdbc8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbc4) {
            ctx->pc = 0x2FDBE4u;
            goto label_2fdbe4;
        }
    }
    ctx->pc = 0x2FDBCCu;
    // 0x2fdbcc: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fdbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fdbd0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdbd4: 0x90840c40  lbu         $a0, 0xC40($a0)
    ctx->pc = 0x2fdbd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3136)));
    // 0x2fdbd8: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x2fdbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x2fdbdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDBDCu;
    {
        const bool branch_taken_0x2fdbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDBDCu;
        // 0x2fdbe0: 0xa0640c40  sb          $a0, 0xC40($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbdc) {
            ctx->pc = 0x2FDBF8u;
            goto label_2fdbf8;
        }
    }
    ctx->pc = 0x2FDBE4u;
label_2fdbe4:
    // 0x2fdbe4: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fdbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fdbe8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdbec: 0x90840c40  lbu         $a0, 0xC40($a0)
    ctx->pc = 0x2fdbecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3136)));
    // 0x2fdbf0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x2fdbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2fdbf4: 0xa0640c40  sb          $a0, 0xC40($v1)
    ctx->pc = 0x2fdbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 4));
label_2fdbf8:
    // 0x2fdbf8: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2fdbf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2fdbfc: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x2fdbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x2fdc00: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FDC00u;
    {
        const bool branch_taken_0x2fdc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc00) {
            ctx->pc = 0x2FDC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDC00u;
            // 0x2fdc04: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDC3Cu;
            goto label_2fdc3c;
        }
    }
    ctx->pc = 0x2FDC08u;
    // 0x2fdc08: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x2fdc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x2fdc0c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDC0Cu;
    SET_GPR_U32(ctx, 31, 0x2FDC14u);
    ctx->pc = 0x2FDC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC0Cu;
    // 0x2fdc10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDC0Cu, 0x2FDC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC14u;
label_2fdc14:
    // 0x2fdc14: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdc18: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fdc18u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdc1c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDC1Cu;
    {
        const bool branch_taken_0x2fdc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc1c) {
            ctx->pc = 0x2FDC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDC1Cu;
            // 0x2fdc20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDC30u;
            goto label_2fdc30;
        }
    }
    ctx->pc = 0x2FDC24u;
    // 0x2fdc24: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdc28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDC28u;
    {
        const bool branch_taken_0x2fdc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC28u;
        // 0x2fdc2c: 0xa460be90  sh          $zero, -0x4170($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc28) {
            ctx->pc = 0x2FDC38u;
            goto label_2fdc38;
        }
    }
    ctx->pc = 0x2FDC30u;
label_2fdc30:
    // 0x2fdc30: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdc34: 0xa464be90  sh          $a0, -0x4170($v1)
    ctx->pc = 0x2fdc34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 4));
label_2fdc38:
    // 0x2fdc38: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x2fdc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_2fdc3c:
    // 0x2fdc3c: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FDC3Cu;
    {
        const bool branch_taken_0x2fdc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc3c) {
            ctx->pc = 0x2FDC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDC3Cu;
            // 0x2fdc40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDC8Cu;
            goto label_2fdc8c;
        }
    }
    ctx->pc = 0x2FDC44u;
    // 0x2fdc44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdc48: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x2fdc48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x2fdc4c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FDC4Cu;
    {
        const bool branch_taken_0x2fdc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc4c) {
            ctx->pc = 0x2FDC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDC4Cu;
            // 0x2fdc50: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDC74u;
            goto label_2fdc74;
        }
    }
    ctx->pc = 0x2FDC54u;
    // 0x2fdc54: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x2fdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2fdc58: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDC58u;
    SET_GPR_U32(ctx, 31, 0x2FDC60u);
    ctx->pc = 0x2FDC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC58u;
    // 0x2fdc5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDC58u, 0x2FDC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC60u;
label_2fdc60:
    // 0x2fdc60: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdc64: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDC64u;
    SET_GPR_U32(ctx, 31, 0x2FDC6Cu);
    ctx->pc = 0x2FDC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC64u;
    // 0x2fdc68: 0x8c44be84  lw          $a0, -0x417C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDC64u, 0x2FDC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC6Cu;
label_2fdc6c:
    // 0x2fdc6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDC6Cu;
    {
        const bool branch_taken_0x2fdc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdc6c) {
            ctx->pc = 0x2FDC88u;
            goto label_2fdc88;
        }
    }
    ctx->pc = 0x2FDC74u;
label_2fdc74:
    // 0x2fdc74: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDC74u;
    SET_GPR_U32(ctx, 31, 0x2FDC7Cu);
    ctx->pc = 0x2FDC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC74u;
    // 0x2fdc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDC74u, 0x2FDC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC7Cu;
label_2fdc7c:
    // 0x2fdc7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdc80: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDC80u;
    SET_GPR_U32(ctx, 31, 0x2FDC88u);
    ctx->pc = 0x2FDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDC80u;
    // 0x2fdc84: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDC80u, 0x2FDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDC88u;
label_2fdc88:
    // 0x2fdc88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdc8c:
    // 0x2fdc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdc90: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC90u;
        // 0x2fdc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDC98u;
    // 0x2fdc98: 0x0  nop
    ctx->pc = 0x2fdc98u;
    // NOP
    // 0x2fdc9c: 0x0  nop
    ctx->pc = 0x2fdc9cu;
    // NOP
    // 0x2fdca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdca4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdcac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fdcb0: 0x90660c40  lbu         $a2, 0xC40($v1)
    ctx->pc = 0x2fdcb0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3136)));
    // 0x2fdcb4: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2fdcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x2fdcb8: 0x9484ea22  lhu         $a0, -0x15DE($a0)
    ctx->pc = 0x2fdcb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294961698)));
    // 0x2fdcbc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2fdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2fdcc0: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x2fdcc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2fdcc4: 0x9463ea2e  lhu         $v1, -0x15D2($v1)
    ctx->pc = 0x2fdcc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x2fdcc8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2fdcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fdccc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2fdcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2fdcd0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2fdcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2fdcd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDCD4u;
    {
        const bool branch_taken_0x2fdcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCD4u;
        // 0x2fdcd8: 0xa0a60c40  sb          $a2, 0xC40($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3136), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcd4) {
            ctx->pc = 0x2FDCF4u;
            goto label_2fdcf4;
        }
    }
    ctx->pc = 0x2FDCDCu;
    // 0x2fdcdc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x2fdcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x2fdce0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDCE0u;
    SET_GPR_U32(ctx, 31, 0x2FDCE8u);
    ctx->pc = 0x2FDCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCE0u;
    // 0x2fdce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDCE0u, 0x2FDCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDCE8u;
label_2fdce8:
    // 0x2fdce8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdcec: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDCECu;
    SET_GPR_U32(ctx, 31, 0x2FDCF4u);
    ctx->pc = 0x2FDCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCECu;
    // 0x2fdcf0: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDCECu, 0x2FDCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDCF4u;
label_2fdcf4:
    // 0x2fdcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCF8u;
        // 0x2fdcfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD00u;
    // 0x2fdd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdd04: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdd08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fdd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fdd0c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x2fdd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x2fdd10: 0x90660c40  lbu         $a2, 0xC40($v1)
    ctx->pc = 0x2fdd10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3136)));
    // 0x2fdd14: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2fdd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
    // 0x2fdd18: 0x9484ea22  lhu         $a0, -0x15DE($a0)
    ctx->pc = 0x2fdd18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294961698)));
    // 0x2fdd1c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2fdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2fdd20: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x2fdd20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2fdd24: 0x9463ea2e  lhu         $v1, -0x15D2($v1)
    ctx->pc = 0x2fdd24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x2fdd28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2fdd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2fdd2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2fdd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2fdd30: 0x30636000  andi        $v1, $v1, 0x6000
    ctx->pc = 0x2fdd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24576);
    // 0x2fdd34: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDD34u;
    {
        const bool branch_taken_0x2fdd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD34u;
        // 0x2fdd38: 0xa0a60c40  sb          $a2, 0xC40($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3136), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd34) {
            ctx->pc = 0x2FDD54u;
            goto label_2fdd54;
        }
    }
    ctx->pc = 0x2FDD3Cu;
    // 0x2fdd3c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x2fdd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x2fdd40: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDD40u;
    SET_GPR_U32(ctx, 31, 0x2FDD48u);
    ctx->pc = 0x2FDD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD40u;
    // 0x2fdd44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDD40u, 0x2FDD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD48u;
label_2fdd48:
    // 0x2fdd48: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdd4c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDD4Cu;
    SET_GPR_U32(ctx, 31, 0x2FDD54u);
    ctx->pc = 0x2FDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD4Cu;
    // 0x2fdd50: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDD4Cu, 0x2FDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD54u;
label_2fdd54:
    // 0x2fdd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fdd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdd58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD58u;
        // 0x2fdd5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD60u;
    // 0x2fdd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdd64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2fdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2fdd68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fdd70: 0x9465ea22  lhu         $a1, -0x15DE($v1)
    ctx->pc = 0x2fdd70u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x2fdd74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2fdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2fdd78: 0x9464ea2e  lhu         $a0, -0x15D2($v1)
    ctx->pc = 0x2fdd78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x2fdd7c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdd80: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2fdd80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2fdd84: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fdd84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdd88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDD88u;
    {
        const bool branch_taken_0x2fdd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD88u;
        // 0x2fdd8c: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd88) {
            ctx->pc = 0x2FDDA8u;
            goto label_2fdda8;
        }
    }
    ctx->pc = 0x2FDD90u;
    // 0x2fdd90: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fdd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fdd94: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdd98: 0x90840c40  lbu         $a0, 0xC40($a0)
    ctx->pc = 0x2fdd98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3136)));
    // 0x2fdd9c: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x2fdd9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x2fdda0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDDA0u;
    {
        const bool branch_taken_0x2fdda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDDA0u;
        // 0x2fdda4: 0xa0640c40  sb          $a0, 0xC40($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdda0) {
            ctx->pc = 0x2FDDBCu;
            goto label_2fddbc;
        }
    }
    ctx->pc = 0x2FDDA8u;
label_2fdda8:
    // 0x2fdda8: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fdda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fddac: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fddb0: 0x90840c40  lbu         $a0, 0xC40($a0)
    ctx->pc = 0x2fddb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3136)));
    // 0x2fddb4: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x2fddb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2fddb8: 0xa0640c40  sb          $a0, 0xC40($v1)
    ctx->pc = 0x2fddb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 4));
label_2fddbc:
    // 0x2fddbc: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2fddbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2fddc0: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x2fddc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x2fddc4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FDDC4u;
    {
        const bool branch_taken_0x2fddc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fddc4) {
            ctx->pc = 0x2FDDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDDC4u;
            // 0x2fddc8: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDE00u;
            goto label_2fde00;
        }
    }
    ctx->pc = 0x2FDDCCu;
    // 0x2fddcc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x2fddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x2fddd0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDDD0u;
    SET_GPR_U32(ctx, 31, 0x2FDDD8u);
    ctx->pc = 0x2FDDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDDD0u;
    // 0x2fddd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDDD0u, 0x2FDDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDDD8u;
label_2fddd8:
    // 0x2fddd8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdddc: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fdddcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdde0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDDE0u;
    {
        const bool branch_taken_0x2fdde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdde0) {
            ctx->pc = 0x2FDDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDDE0u;
            // 0x2fdde4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDDF4u;
            goto label_2fddf4;
        }
    }
    ctx->pc = 0x2FDDE8u;
    // 0x2fdde8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fddec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDDECu;
    {
        const bool branch_taken_0x2fddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDDECu;
        // 0x2fddf0: 0xa460be90  sh          $zero, -0x4170($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fddec) {
            ctx->pc = 0x2FDDFCu;
            goto label_2fddfc;
        }
    }
    ctx->pc = 0x2FDDF4u;
label_2fddf4:
    // 0x2fddf4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fddf8: 0xa464be90  sh          $a0, -0x4170($v1)
    ctx->pc = 0x2fddf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 4));
label_2fddfc:
    // 0x2fddfc: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x2fddfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_2fde00:
    // 0x2fde00: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FDE00u;
    {
        const bool branch_taken_0x2fde00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fde00) {
            ctx->pc = 0x2FDE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDE00u;
            // 0x2fde04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDE50u;
            goto label_2fde50;
        }
    }
    ctx->pc = 0x2FDE08u;
    // 0x2fde08: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fde08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fde0c: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x2fde0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x2fde10: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FDE10u;
    {
        const bool branch_taken_0x2fde10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fde10) {
            ctx->pc = 0x2FDE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDE10u;
            // 0x2fde14: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDE38u;
            goto label_2fde38;
        }
    }
    ctx->pc = 0x2FDE18u;
    // 0x2fde18: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x2fde18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2fde1c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDE1Cu;
    SET_GPR_U32(ctx, 31, 0x2FDE24u);
    ctx->pc = 0x2FDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE1Cu;
    // 0x2fde20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDE1Cu, 0x2FDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE24u;
label_2fde24:
    // 0x2fde24: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fde24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fde28: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDE28u;
    SET_GPR_U32(ctx, 31, 0x2FDE30u);
    ctx->pc = 0x2FDE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE28u;
    // 0x2fde2c: 0x8c44be84  lw          $a0, -0x417C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDE28u, 0x2FDE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE30u;
label_2fde30:
    // 0x2fde30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDE30u;
    {
        const bool branch_taken_0x2fde30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fde30) {
            ctx->pc = 0x2FDE4Cu;
            goto label_2fde4c;
        }
    }
    ctx->pc = 0x2FDE38u;
label_2fde38:
    // 0x2fde38: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDE38u;
    SET_GPR_U32(ctx, 31, 0x2FDE40u);
    ctx->pc = 0x2FDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE38u;
    // 0x2fde3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDE38u, 0x2FDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE40u;
label_2fde40:
    // 0x2fde40: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fde40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fde44: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDE44u;
    SET_GPR_U32(ctx, 31, 0x2FDE4Cu);
    ctx->pc = 0x2FDE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDE44u;
    // 0x2fde48: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDE44u, 0x2FDE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDE4Cu;
label_2fde4c:
    // 0x2fde4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fde4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fde50:
    // 0x2fde50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fde50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fde54: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE54u;
        // 0x2fde58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDE5Cu;
    // 0x2fde5c: 0x0  nop
    ctx->pc = 0x2fde5cu;
    // NOP
    // 0x2fde60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fde60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fde64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2fde64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2fde68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fde68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fde6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fde6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fde70: 0x9465ea22  lhu         $a1, -0x15DE($v1)
    ctx->pc = 0x2fde70u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x2fde74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x2fde74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x2fde78: 0x9464ea2e  lhu         $a0, -0x15D2($v1)
    ctx->pc = 0x2fde78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x2fde7c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fde7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fde80: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2fde80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2fde84: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fde84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fde88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FDE88u;
    {
        const bool branch_taken_0x2fde88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE88u;
        // 0x2fde8c: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde88) {
            ctx->pc = 0x2FDEA8u;
            goto label_2fdea8;
        }
    }
    ctx->pc = 0x2FDE90u;
    // 0x2fde90: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fde90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fde94: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fde94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fde98: 0x90840c40  lbu         $a0, 0xC40($a0)
    ctx->pc = 0x2fde98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3136)));
    // 0x2fde9c: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x2fde9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x2fdea0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDEA0u;
    {
        const bool branch_taken_0x2fdea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEA0u;
        // 0x2fdea4: 0xa0640c40  sb          $a0, 0xC40($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdea0) {
            ctx->pc = 0x2FDEBCu;
            goto label_2fdebc;
        }
    }
    ctx->pc = 0x2FDEA8u;
label_2fdea8:
    // 0x2fdea8: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2fdea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2fdeac: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2fdeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2fdeb0: 0x90840c40  lbu         $a0, 0xC40($a0)
    ctx->pc = 0x2fdeb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3136)));
    // 0x2fdeb4: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x2fdeb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2fdeb8: 0xa0640c40  sb          $a0, 0xC40($v1)
    ctx->pc = 0x2fdeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 4));
label_2fdebc:
    // 0x2fdebc: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2fdebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2fdec0: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x2fdec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x2fdec4: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FDEC4u;
    {
        const bool branch_taken_0x2fdec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdec4) {
            ctx->pc = 0x2FDEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDEC4u;
            // 0x2fdec8: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDF00u;
            goto label_2fdf00;
        }
    }
    ctx->pc = 0x2FDECCu;
    // 0x2fdecc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x2fdeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x2fded0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDED0u;
    SET_GPR_U32(ctx, 31, 0x2FDED8u);
    ctx->pc = 0x2FDED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDED0u;
    // 0x2fded4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDED0u, 0x2FDED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDED8u;
label_2fded8:
    // 0x2fded8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fded8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdedc: 0x9463be90  lhu         $v1, -0x4170($v1)
    ctx->pc = 0x2fdedcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950544)));
    // 0x2fdee0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDEE0u;
    {
        const bool branch_taken_0x2fdee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdee0) {
            ctx->pc = 0x2FDEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDEE0u;
            // 0x2fdee4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDEF4u;
            goto label_2fdef4;
        }
    }
    ctx->pc = 0x2FDEE8u;
    // 0x2fdee8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdeec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDEECu;
    {
        const bool branch_taken_0x2fdeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEECu;
        // 0x2fdef0: 0xa460be90  sh          $zero, -0x4170($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdeec) {
            ctx->pc = 0x2FDEFCu;
            goto label_2fdefc;
        }
    }
    ctx->pc = 0x2FDEF4u;
label_2fdef4:
    // 0x2fdef4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdef8: 0xa464be90  sh          $a0, -0x4170($v1)
    ctx->pc = 0x2fdef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 4));
label_2fdefc:
    // 0x2fdefc: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x2fdefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_2fdf00:
    // 0x2fdf00: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FDF00u;
    {
        const bool branch_taken_0x2fdf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf00) {
            ctx->pc = 0x2FDF54u;
            goto label_2fdf54;
        }
    }
    ctx->pc = 0x2FDF08u;
    // 0x2fdf08: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdf0c: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x2fdf0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x2fdf10: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FDF10u;
    {
        const bool branch_taken_0x2fdf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf10) {
            ctx->pc = 0x2FDF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDF10u;
            // 0x2fdf14: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDF38u;
            goto label_2fdf38;
        }
    }
    ctx->pc = 0x2FDF18u;
    // 0x2fdf18: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x2fdf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x2fdf1c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDF1Cu;
    SET_GPR_U32(ctx, 31, 0x2FDF24u);
    ctx->pc = 0x2FDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF1Cu;
    // 0x2fdf20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDF1Cu, 0x2FDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF24u;
label_2fdf24:
    // 0x2fdf24: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdf28: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDF28u;
    SET_GPR_U32(ctx, 31, 0x2FDF30u);
    ctx->pc = 0x2FDF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF28u;
    // 0x2fdf2c: 0x8c44be84  lw          $a0, -0x417C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDF28u, 0x2FDF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF30u;
label_2fdf30:
    // 0x2fdf30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDF30u;
    {
        const bool branch_taken_0x2fdf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf30) {
            ctx->pc = 0x2FDF4Cu;
            goto label_2fdf4c;
        }
    }
    ctx->pc = 0x2FDF38u;
label_2fdf38:
    // 0x2fdf38: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x2FDF38u;
    SET_GPR_U32(ctx, 31, 0x2FDF40u);
    ctx->pc = 0x2FDF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF38u;
    // 0x2fdf3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x2FDF38u, 0x2FDF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF40u;
label_2fdf40:
    // 0x2fdf40: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdf44: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDF44u;
    SET_GPR_U32(ctx, 31, 0x2FDF4Cu);
    ctx->pc = 0x2FDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF44u;
    // 0x2fdf48: 0x8c44be80  lw          $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDF44u, 0x2FDF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF4Cu;
label_2fdf4c:
    // 0x2fdf4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FDF4Cu;
    {
        const bool branch_taken_0x2fdf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF4Cu;
        // 0x2fdf50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf4c) {
            ctx->pc = 0x2FDF88u;
            goto label_2fdf88;
        }
    }
    ctx->pc = 0x2FDF54u;
label_2fdf54:
    // 0x2fdf54: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdf58: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x2fdf58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x2fdf5c: 0x9465be92  lhu         $a1, -0x416E($v1)
    ctx->pc = 0x2fdf5cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950546)));
    // 0x2fdf60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2fdf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2fdf64: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x2fdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x2fdf68: 0xa485be92  sh          $a1, -0x416E($a0)
    ctx->pc = 0x2fdf68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950546), (uint16_t)GPR_U32(ctx, 5));
    // 0x2fdf6c: 0x9463be92  lhu         $v1, -0x416E($v1)
    ctx->pc = 0x2fdf6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950546)));
    // 0x2fdf70: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDF70u;
    {
        const bool branch_taken_0x2fdf70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fdf70) {
            ctx->pc = 0x2FDF84u;
            goto label_2fdf84;
        }
    }
    ctx->pc = 0x2FDF78u;
    // 0x2fdf78: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fdf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fdf7c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FDF7Cu;
    SET_GPR_U32(ctx, 31, 0x2FDF84u);
    ctx->pc = 0x2FDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF7Cu;
    // 0x2fdf80: 0x8c44be84  lw          $a0, -0x417C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FDF7Cu, 0x2FDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF84u;
label_2fdf84:
    // 0x2fdf84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdf88:
    // 0x2fdf88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fdf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF8Cu;
        // 0x2fdf90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF94u;
    // 0x2fdf94: 0x0  nop
    ctx->pc = 0x2fdf94u;
    // NOP
    // 0x2fdf98: 0x0  nop
    ctx->pc = 0x2fdf98u;
    // NOP
    // 0x2fdf9c: 0x0  nop
    ctx->pc = 0x2fdf9cu;
    // NOP
    if (ctx->pc == 0x2fdf9cu) { ctx->pc = 0x2fdfa0u; }
}
