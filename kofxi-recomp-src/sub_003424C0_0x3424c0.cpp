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

// Function: sub_003424C0
// Address: 0x3424c0 - 0x342680
void sub_003424C0_0x3424c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003424C0_0x3424c0");
#endif

    switch (ctx->pc) {
        case 0x3424ecu: goto label_3424ec;
        case 0x3424f4u: goto label_3424f4;
        case 0x342504u: goto label_342504;
        case 0x342514u: goto label_342514;
        case 0x34251cu: goto label_34251c;
        case 0x342528u: goto label_342528;
        case 0x342530u: goto label_342530;
        case 0x342540u: goto label_342540;
        case 0x342550u: goto label_342550;
        case 0x342558u: goto label_342558;
        case 0x3425b0u: goto label_3425b0;
        case 0x3425d0u: goto label_3425d0;
        case 0x3425f0u: goto label_3425f0;
        case 0x342604u: goto label_342604;
        case 0x342658u: goto label_342658;
        case 0x342668u: goto label_342668;
        default: break;
    }

    ctx->pc = 0x3424c0u;

    // 0x3424c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3424c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3424c4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3424c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3424c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3424c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3424cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3424ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3424d0: 0x8c44ea64  lw          $a0, -0x159C($v0)
    ctx->pc = 0x3424d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x3424d4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3424d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3424d8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3424d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3424dc: 0x8c42ea68  lw          $v0, -0x1598($v0)
    ctx->pc = 0x3424dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x3424e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3424e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3424e4: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x3424E4u;
    SET_GPR_U32(ctx, 31, 0x3424ECu);
    ctx->pc = 0x3424E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424E4u;
    // 0x3424e8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x3424E4u, 0x3424ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424ECu;
label_3424ec:
    // 0x3424ec: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x3424ECu;
    SET_GPR_U32(ctx, 31, 0x3424F4u);
    ctx->pc = 0x3424F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424ECu;
    // 0x3424f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x3424ECu, 0x3424F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424F4u;
label_3424f4:
    // 0x3424f4: 0x3c034035  lui         $v1, 0x4035
    ctx->pc = 0x3424f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16437 << 16));
    // 0x3424f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3424f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3424fc: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x3424FCu;
    SET_GPR_U32(ctx, 31, 0x342504u);
    ctx->pc = 0x342500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424FCu;
    // 0x342500: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x3424FCu, 0x342504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342504u;
label_342504:
    // 0x342504: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x342504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x342508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x342508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34250c: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x34250Cu;
    SET_GPR_U32(ctx, 31, 0x342514u);
    ctx->pc = 0x342510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34250Cu;
    // 0x342510: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x34250Cu, 0x342514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342514u;
label_342514:
    // 0x342514: 0xc048bde  jal         func_122F78
    ctx->pc = 0x342514u;
    SET_GPR_U32(ctx, 31, 0x34251Cu);
    ctx->pc = 0x342518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342514u;
    // 0x342518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x342514u, 0x34251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34251Cu;
label_34251c:
    // 0x34251c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x34251cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x342520: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x342520u;
    SET_GPR_U32(ctx, 31, 0x342528u);
    ctx->pc = 0x342524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342520u;
    // 0x342524: 0xa062db54  sb          $v0, -0x24AC($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957908), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x342520u, 0x342528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342528u;
label_342528:
    // 0x342528: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x342528u;
    SET_GPR_U32(ctx, 31, 0x342530u);
    ctx->pc = 0x34252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342528u;
    // 0x34252c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x342528u, 0x342530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342530u;
label_342530:
    // 0x342530: 0x3c034035  lui         $v1, 0x4035
    ctx->pc = 0x342530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16437 << 16));
    // 0x342534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x342534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342538: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x342538u;
    SET_GPR_U32(ctx, 31, 0x342540u);
    ctx->pc = 0x34253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342538u;
    // 0x34253c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x342538u, 0x342540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342540u;
label_342540:
    // 0x342540: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x342540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x342544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x342544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342548: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x342548u;
    SET_GPR_U32(ctx, 31, 0x342550u);
    ctx->pc = 0x34254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342548u;
    // 0x34254c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x342548u, 0x342550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342550u;
label_342550:
    // 0x342550: 0xc048bde  jal         func_122F78
    ctx->pc = 0x342550u;
    SET_GPR_U32(ctx, 31, 0x342558u);
    ctx->pc = 0x342554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342550u;
    // 0x342554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x342550u, 0x342558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342558u;
label_342558:
    // 0x342558: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x342558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x34255c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x342560: 0xa062dd9c  sb          $v0, -0x2264($v1)
    ctx->pc = 0x342560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294958492), (uint8_t)GPR_U32(ctx, 2));
    // 0x342564: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x342564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x342568: 0x12040023  beq         $s0, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x342568u;
    {
        const bool branch_taken_0x342568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x34256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342568u;
        // 0x34256c: 0xa044db10  sb          $a0, -0x24F0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957840), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342568) {
            ctx->pc = 0x3425F8u;
            goto label_3425f8;
        }
    }
    ctx->pc = 0x342570u;
    // 0x342570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x342570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342574: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x342574u;
    {
        const bool branch_taken_0x342574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x342574) {
            ctx->pc = 0x3425D8u;
            goto label_3425d8;
        }
    }
    ctx->pc = 0x34257Cu;
    // 0x34257c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342580: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x342580u;
    {
        const bool branch_taken_0x342580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x342580) {
            ctx->pc = 0x3425B8u;
            goto label_3425b8;
        }
    }
    ctx->pc = 0x342588u;
    // 0x342588: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342588u;
    {
        const bool branch_taken_0x342588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x342588) {
            ctx->pc = 0x342598u;
            goto label_342598;
        }
    }
    ctx->pc = 0x342590u;
    // 0x342590: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x342590u;
    {
        const bool branch_taken_0x342590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342590u;
        // 0x342594: 0x2604fffc  addiu       $a0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342590) {
            ctx->pc = 0x342614u;
            goto label_342614;
        }
    }
    ctx->pc = 0x342598u;
label_342598:
    // 0x342598: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x342598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x34259c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3425a0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3425a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3425a4: 0x24849420  addiu       $a0, $a0, -0x6BE0
    ctx->pc = 0x3425a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939680));
    // 0x3425a8: 0xc0558e0  jal         func_156380
    ctx->pc = 0x3425A8u;
    SET_GPR_U32(ctx, 31, 0x3425B0u);
    ctx->pc = 0x3425ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425A8u;
    // 0x3425ac: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x3425A8u, 0x3425B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425B0u;
label_3425b0:
    // 0x3425b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3425B0u;
    {
        const bool branch_taken_0x3425b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3425B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425B0u;
        // 0x3425b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425b0) {
            ctx->pc = 0x34265Cu;
            goto label_34265c;
        }
    }
    ctx->pc = 0x3425B8u;
label_3425b8:
    // 0x3425b8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3425b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3425bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3425c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3425c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3425c4: 0x248491d0  addiu       $a0, $a0, -0x6E30
    ctx->pc = 0x3425c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939088));
    // 0x3425c8: 0xc0558e0  jal         func_156380
    ctx->pc = 0x3425C8u;
    SET_GPR_U32(ctx, 31, 0x3425D0u);
    ctx->pc = 0x3425CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425C8u;
    // 0x3425cc: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x3425C8u, 0x3425D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425D0u;
label_3425d0:
    // 0x3425d0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3425D0u;
    {
        const bool branch_taken_0x3425d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3425d0) {
            ctx->pc = 0x342658u;
            goto label_342658;
        }
    }
    ctx->pc = 0x3425D8u;
label_3425d8:
    // 0x3425d8: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x3425d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x3425dc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3425dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3425e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3425e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3425e4: 0x2484b290  addiu       $a0, $a0, -0x4D70
    ctx->pc = 0x3425e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947472));
    // 0x3425e8: 0xc0558e0  jal         func_156380
    ctx->pc = 0x3425E8u;
    SET_GPR_U32(ctx, 31, 0x3425F0u);
    ctx->pc = 0x3425ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425E8u;
    // 0x3425ec: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x3425E8u, 0x3425F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425F0u;
label_3425f0:
    // 0x3425f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3425F0u;
    {
        const bool branch_taken_0x3425f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3425f0) {
            ctx->pc = 0x342658u;
            goto label_342658;
        }
    }
    ctx->pc = 0x3425F8u;
label_3425f8:
    // 0x3425f8: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x3425f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x3425fc: 0xc0558e0  jal         func_156380
    ctx->pc = 0x3425FCu;
    SET_GPR_U32(ctx, 31, 0x342604u);
    ctx->pc = 0x342600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425FCu;
    // 0x342600: 0x2484b040  addiu       $a0, $a0, -0x4FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x3425FCu, 0x342604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342604u;
label_342604:
    // 0x342604: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x342604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x342608: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x342608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34260c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34260Cu;
    {
        const bool branch_taken_0x34260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34260Cu;
        // 0x342610: 0xa043da08  sb          $v1, -0x25F8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34260c) {
            ctx->pc = 0x342658u;
            goto label_342658;
        }
    }
    ctx->pc = 0x342614u;
label_342614:
    // 0x342614: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x342614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x342618: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x342618u;
    {
        const bool branch_taken_0x342618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x342618) {
            ctx->pc = 0x342624u;
            goto label_342624;
        }
    }
    ctx->pc = 0x342620u;
    // 0x342620: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x342620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_342624:
    // 0x342624: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x342624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x342628: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x342628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34262c: 0xa064db54  sb          $a0, -0x24AC($v1)
    ctx->pc = 0x34262cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957908), (uint8_t)GPR_U32(ctx, 4));
    // 0x342630: 0xa044dd9c  sb          $a0, -0x2264($v0)
    ctx->pc = 0x342630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958492), (uint8_t)GPR_U32(ctx, 4));
    // 0x342634: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x342634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x342638: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x342638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34263c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x34263cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x342640: 0xa043da08  sb          $v1, -0x25F8($v0)
    ctx->pc = 0x342640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 3));
    // 0x342644: 0x2484b890  addiu       $a0, $a0, -0x4770
    ctx->pc = 0x342644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    // 0x342648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x342648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34264c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x342650: 0xc0558e0  jal         func_156380
    ctx->pc = 0x342650u;
    SET_GPR_U32(ctx, 31, 0x342658u);
    ctx->pc = 0x342654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342650u;
    // 0x342654: 0xa443dab0  sh          $v1, -0x2550($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957744), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x342650u, 0x342658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342658u;
label_342658:
    // 0x342658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x342658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34265c:
    // 0x34265c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x342660: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x342660u;
    SET_GPR_U32(ctx, 31, 0x342668u);
    ctx->pc = 0x342664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342660u;
    // 0x342664: 0xa043db56  sb          $v1, -0x24AA($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957910), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x342660u, 0x342668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342668u;
label_342668:
    // 0x342668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34266c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34266cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342670: 0x3e00008  jr          $ra
    ctx->pc = 0x342670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342670u;
        // 0x342674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342678u;
    // 0x342678: 0x0  nop
    ctx->pc = 0x342678u;
    // NOP
    // 0x34267c: 0x0  nop
    ctx->pc = 0x34267cu;
    // NOP
    if (ctx->pc == 0x34267cu) { ctx->pc = 0x342680u; }
}
