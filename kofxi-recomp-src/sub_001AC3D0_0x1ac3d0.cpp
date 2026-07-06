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

// Function: sub_001AC3D0
// Address: 0x1ac3d0 - 0x1ac580
void sub_001AC3D0_0x1ac3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC3D0_0x1ac3d0");
#endif

    switch (ctx->pc) {
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3d4u: goto label_1ac3d4;
        case 0x1ac3d8u: goto label_1ac3d8;
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac3e4u: goto label_1ac3e4;
        case 0x1ac3e8u: goto label_1ac3e8;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3f0u: goto label_1ac3f0;
        case 0x1ac3f4u: goto label_1ac3f4;
        case 0x1ac3f8u: goto label_1ac3f8;
        case 0x1ac3fcu: goto label_1ac3fc;
        case 0x1ac400u: goto label_1ac400;
        case 0x1ac404u: goto label_1ac404;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac40cu: goto label_1ac40c;
        case 0x1ac410u: goto label_1ac410;
        case 0x1ac414u: goto label_1ac414;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac41cu: goto label_1ac41c;
        case 0x1ac420u: goto label_1ac420;
        case 0x1ac424u: goto label_1ac424;
        case 0x1ac428u: goto label_1ac428;
        case 0x1ac42cu: goto label_1ac42c;
        case 0x1ac430u: goto label_1ac430;
        case 0x1ac434u: goto label_1ac434;
        case 0x1ac438u: goto label_1ac438;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac444u: goto label_1ac444;
        case 0x1ac448u: goto label_1ac448;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac450u: goto label_1ac450;
        case 0x1ac454u: goto label_1ac454;
        case 0x1ac458u: goto label_1ac458;
        case 0x1ac45cu: goto label_1ac45c;
        case 0x1ac460u: goto label_1ac460;
        case 0x1ac464u: goto label_1ac464;
        case 0x1ac468u: goto label_1ac468;
        case 0x1ac46cu: goto label_1ac46c;
        case 0x1ac470u: goto label_1ac470;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac478u: goto label_1ac478;
        case 0x1ac47cu: goto label_1ac47c;
        case 0x1ac480u: goto label_1ac480;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac488u: goto label_1ac488;
        case 0x1ac48cu: goto label_1ac48c;
        case 0x1ac490u: goto label_1ac490;
        case 0x1ac494u: goto label_1ac494;
        case 0x1ac498u: goto label_1ac498;
        case 0x1ac49cu: goto label_1ac49c;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4a4u: goto label_1ac4a4;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac4acu: goto label_1ac4ac;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4b4u: goto label_1ac4b4;
        case 0x1ac4b8u: goto label_1ac4b8;
        case 0x1ac4bcu: goto label_1ac4bc;
        case 0x1ac4c0u: goto label_1ac4c0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4c8u: goto label_1ac4c8;
        case 0x1ac4ccu: goto label_1ac4cc;
        case 0x1ac4d0u: goto label_1ac4d0;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4d8u: goto label_1ac4d8;
        case 0x1ac4dcu: goto label_1ac4dc;
        case 0x1ac4e0u: goto label_1ac4e0;
        case 0x1ac4e4u: goto label_1ac4e4;
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        case 0x1ac528u: goto label_1ac528;
        case 0x1ac52cu: goto label_1ac52c;
        case 0x1ac530u: goto label_1ac530;
        case 0x1ac534u: goto label_1ac534;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac53cu: goto label_1ac53c;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac544u: goto label_1ac544;
        case 0x1ac548u: goto label_1ac548;
        case 0x1ac54cu: goto label_1ac54c;
        case 0x1ac550u: goto label_1ac550;
        case 0x1ac554u: goto label_1ac554;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac55cu: goto label_1ac55c;
        case 0x1ac560u: goto label_1ac560;
        case 0x1ac564u: goto label_1ac564;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac56cu: goto label_1ac56c;
        case 0x1ac570u: goto label_1ac570;
        case 0x1ac574u: goto label_1ac574;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac57cu: goto label_1ac57c;
        default: break;
    }

    ctx->pc = 0x1ac3d0u;

label_1ac3d0:
    // 0x1ac3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac3d4:
    // 0x1ac3d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ac3d8:
    // 0x1ac3d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac3dc:
    // 0x1ac3dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ac3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1ac3e0:
    // 0x1ac3e0: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x1ac3e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_1ac3e4:
    // 0x1ac3e4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1ac3e8:
    if (ctx->pc == 0x1AC3E8u) {
        ctx->pc = 0x1AC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3E4u;
        // 0x1ac3e8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3ECu;
        goto label_1ac3ec;
    }
    ctx->pc = 0x1AC3E4u;
    {
        const bool branch_taken_0x1ac3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3e4) {
            ctx->pc = 0x1AC3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC3E4u;
            // 0x1ac3e8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC400u;
            goto label_1ac400;
        }
    }
    ctx->pc = 0x1AC3ECu;
label_1ac3ec:
    // 0x1ac3ec: 0xc06b0a0  jal         func_1AC280
label_1ac3f0:
    if (ctx->pc == 0x1AC3F0u) {
        ctx->pc = 0x1AC3F4u;
        goto label_1ac3f4;
    }
    ctx->pc = 0x1AC3ECu;
    SET_GPR_U32(ctx, 31, 0x1AC3F4u);
    ctx->pc = 0x1AC280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC280u, 0x1AC3ECu, 0x1AC3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3F4u;
label_1ac3f4:
    // 0x1ac3f4: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ac3f8:
    if (ctx->pc == 0x1AC3F8u) {
        ctx->pc = 0x1AC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3F4u;
        // 0x1ac3f8: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC3FCu;
        goto label_1ac3fc;
    }
    ctx->pc = 0x1AC3F4u;
    {
        const bool branch_taken_0x1ac3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3F4u;
        // 0x1ac3f8: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3f4) {
            ctx->pc = 0x1AC48Cu;
            goto label_1ac48c;
        }
    }
    ctx->pc = 0x1AC3FCu;
label_1ac3fc:
    // 0x1ac3fc: 0x0  nop
    ctx->pc = 0x1ac3fcu;
    // NOP
label_1ac400:
    // 0x1ac400: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1ac404:
    if (ctx->pc == 0x1AC404u) {
        ctx->pc = 0x1AC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC400u;
        // 0x1ac404: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC408u;
        goto label_1ac408;
    }
    ctx->pc = 0x1AC400u;
    {
        const bool branch_taken_0x1ac400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac400) {
            ctx->pc = 0x1AC404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC400u;
            // 0x1ac404: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC418u;
            goto label_1ac418;
        }
    }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0xc06a68e  jal         func_1A9A38
label_1ac40c:
    if (ctx->pc == 0x1AC40Cu) {
        ctx->pc = 0x1AC410u;
        goto label_1ac410;
    }
    ctx->pc = 0x1AC408u;
    SET_GPR_U32(ctx, 31, 0x1AC410u);
    ctx->pc = 0x1A9A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9A38u, 0x1AC408u, 0x1AC410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC410u;
label_1ac410:
    // 0x1ac410: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ac414:
    if (ctx->pc == 0x1AC414u) {
        ctx->pc = 0x1AC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC410u;
        // 0x1ac414: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC418u;
        goto label_1ac418;
    }
    ctx->pc = 0x1AC410u;
    {
        const bool branch_taken_0x1ac410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC410u;
        // 0x1ac414: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac410) {
            ctx->pc = 0x1AC48Cu;
            goto label_1ac48c;
        }
    }
    ctx->pc = 0x1AC418u;
label_1ac418:
    // 0x1ac418: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1ac41c:
    if (ctx->pc == 0x1AC41Cu) {
        ctx->pc = 0x1AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC418u;
        // 0x1ac41c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC420u;
        goto label_1ac420;
    }
    ctx->pc = 0x1AC418u;
    {
        const bool branch_taken_0x1ac418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac418) {
            ctx->pc = 0x1AC41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC418u;
            // 0x1ac41c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC430u;
            goto label_1ac430;
        }
    }
    ctx->pc = 0x1AC420u;
label_1ac420:
    // 0x1ac420: 0xc06b1e6  jal         func_1AC798
label_1ac424:
    if (ctx->pc == 0x1AC424u) {
        ctx->pc = 0x1AC428u;
        goto label_1ac428;
    }
    ctx->pc = 0x1AC420u;
    SET_GPR_U32(ctx, 31, 0x1AC428u);
    ctx->pc = 0x1AC798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC798u, 0x1AC420u, 0x1AC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC428u;
label_1ac428:
    // 0x1ac428: 0x10000018  b           . + 4 + (0x18 << 2)
label_1ac42c:
    if (ctx->pc == 0x1AC42Cu) {
        ctx->pc = 0x1AC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC428u;
        // 0x1ac42c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC430u;
        goto label_1ac430;
    }
    ctx->pc = 0x1AC428u;
    {
        const bool branch_taken_0x1ac428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC428u;
        // 0x1ac42c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac428) {
            ctx->pc = 0x1AC48Cu;
            goto label_1ac48c;
        }
    }
    ctx->pc = 0x1AC430u;
label_1ac430:
    // 0x1ac430: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1ac434:
    if (ctx->pc == 0x1AC434u) {
        ctx->pc = 0x1AC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC430u;
        // 0x1ac434: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC438u;
        goto label_1ac438;
    }
    ctx->pc = 0x1AC430u;
    {
        const bool branch_taken_0x1ac430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac430) {
            ctx->pc = 0x1AC434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC430u;
            // 0x1ac434: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC448u;
            goto label_1ac448;
        }
    }
    ctx->pc = 0x1AC438u;
label_1ac438:
    // 0x1ac438: 0xc06a8fa  jal         func_1AA3E8
label_1ac43c:
    if (ctx->pc == 0x1AC43Cu) {
        ctx->pc = 0x1AC440u;
        goto label_1ac440;
    }
    ctx->pc = 0x1AC438u;
    SET_GPR_U32(ctx, 31, 0x1AC440u);
    ctx->pc = 0x1AA3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA3E8u, 0x1AC438u, 0x1AC440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC440u;
label_1ac440:
    // 0x1ac440: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ac444:
    if (ctx->pc == 0x1AC444u) {
        ctx->pc = 0x1AC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC440u;
        // 0x1ac444: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC448u;
        goto label_1ac448;
    }
    ctx->pc = 0x1AC440u;
    {
        const bool branch_taken_0x1ac440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC440u;
        // 0x1ac444: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac440) {
            ctx->pc = 0x1AC48Cu;
            goto label_1ac48c;
        }
    }
    ctx->pc = 0x1AC448u;
label_1ac448:
    // 0x1ac448: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1ac44c:
    if (ctx->pc == 0x1AC44Cu) {
        ctx->pc = 0x1AC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC448u;
        // 0x1ac44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC450u;
        goto label_1ac450;
    }
    ctx->pc = 0x1AC448u;
    {
        const bool branch_taken_0x1ac448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac448) {
            ctx->pc = 0x1AC44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC448u;
            // 0x1ac44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC460u;
            goto label_1ac460;
        }
    }
    ctx->pc = 0x1AC450u;
label_1ac450:
    // 0x1ac450: 0xc06ab94  jal         func_1AAE50
label_1ac454:
    if (ctx->pc == 0x1AC454u) {
        ctx->pc = 0x1AC458u;
        goto label_1ac458;
    }
    ctx->pc = 0x1AC450u;
    SET_GPR_U32(ctx, 31, 0x1AC458u);
    ctx->pc = 0x1AAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE50u, 0x1AC450u, 0x1AC458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC458u;
label_1ac458:
    // 0x1ac458: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ac45c:
    if (ctx->pc == 0x1AC45Cu) {
        ctx->pc = 0x1AC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC458u;
        // 0x1ac45c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC460u;
        goto label_1ac460;
    }
    ctx->pc = 0x1AC458u;
    {
        const bool branch_taken_0x1ac458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC458u;
        // 0x1ac45c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac458) {
            ctx->pc = 0x1AC48Cu;
            goto label_1ac48c;
        }
    }
    ctx->pc = 0x1AC460u;
label_1ac460:
    // 0x1ac460: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1ac464:
    if (ctx->pc == 0x1AC464u) {
        ctx->pc = 0x1AC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC460u;
        // 0x1ac464: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC468u;
        goto label_1ac468;
    }
    ctx->pc = 0x1AC460u;
    {
        const bool branch_taken_0x1ac460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac460) {
            ctx->pc = 0x1AC464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC460u;
            // 0x1ac464: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC478u;
            goto label_1ac478;
        }
    }
    ctx->pc = 0x1AC468u;
label_1ac468:
    // 0x1ac468: 0xc06b460  jal         func_1AD180
label_1ac46c:
    if (ctx->pc == 0x1AC46Cu) {
        ctx->pc = 0x1AC470u;
        goto label_1ac470;
    }
    ctx->pc = 0x1AC468u;
    SET_GPR_U32(ctx, 31, 0x1AC470u);
    ctx->pc = 0x1AD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD180u, 0x1AC468u, 0x1AC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC470u;
label_1ac470:
    // 0x1ac470: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ac474:
    if (ctx->pc == 0x1AC474u) {
        ctx->pc = 0x1AC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC470u;
        // 0x1ac474: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC478u;
        goto label_1ac478;
    }
    ctx->pc = 0x1AC470u;
    {
        const bool branch_taken_0x1ac470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC470u;
        // 0x1ac474: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac470) {
            ctx->pc = 0x1AC48Cu;
            goto label_1ac48c;
        }
    }
    ctx->pc = 0x1AC478u;
label_1ac478:
    // 0x1ac478: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1ac47c:
    if (ctx->pc == 0x1AC47Cu) {
        ctx->pc = 0x1AC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC478u;
        // 0x1ac47c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC480u;
        goto label_1ac480;
    }
    ctx->pc = 0x1AC478u;
    {
        const bool branch_taken_0x1ac478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac478) {
            ctx->pc = 0x1AC47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC478u;
            // 0x1ac47c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC48Cu;
            goto label_1ac48c;
        }
    }
    ctx->pc = 0x1AC480u;
label_1ac480:
    // 0x1ac480: 0xc06a60e  jal         func_1A9838
label_1ac484:
    if (ctx->pc == 0x1AC484u) {
        ctx->pc = 0x1AC488u;
        goto label_1ac488;
    }
    ctx->pc = 0x1AC480u;
    SET_GPR_U32(ctx, 31, 0x1AC488u);
    ctx->pc = 0x1A9838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9838u, 0x1AC480u, 0x1AC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC488u;
label_1ac488:
    // 0x1ac488: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ac488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ac48c:
    // 0x1ac48c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac490:
    if (ctx->pc == 0x1AC490u) {
        ctx->pc = 0x1AC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC48Cu;
        // 0x1ac490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC494u;
        goto label_1ac494;
    }
    ctx->pc = 0x1AC48Cu;
    {
        const bool branch_taken_0x1ac48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC48Cu;
        // 0x1ac490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac48c) {
            ctx->pc = 0x1AC4A8u;
            goto label_1ac4a8;
        }
    }
    ctx->pc = 0x1AC494u;
label_1ac494:
    // 0x1ac494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac498:
    // 0x1ac498: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ac498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ac49c:
    // 0x1ac49c: 0x806b12e  j           func_1AC4B8
label_1ac4a0:
    if (ctx->pc == 0x1AC4A0u) {
        ctx->pc = 0x1AC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC49Cu;
        // 0x1ac4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4A4u;
        goto label_1ac4a4;
    }
    ctx->pc = 0x1AC49Cu;
    ctx->pc = 0x1AC4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC49Cu;
    // 0x1ac4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC4B8u;
    goto label_1ac4b8;
    ctx->pc = 0x1AC4A4u;
label_1ac4a4:
    // 0x1ac4a4: 0x0  nop
    ctx->pc = 0x1ac4a4u;
    // NOP
label_1ac4a8:
    // 0x1ac4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac4ac:
    // 0x1ac4ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ac4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ac4b0:
    // 0x1ac4b0: 0x3e00008  jr          $ra
label_1ac4b4:
    if (ctx->pc == 0x1AC4B4u) {
        ctx->pc = 0x1AC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4B0u;
        // 0x1ac4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC4B8u;
        goto label_1ac4b8;
    }
    ctx->pc = 0x1AC4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4B0u;
        // 0x1ac4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC4B8u;
label_1ac4b8:
    // 0x1ac4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac4bc:
    // 0x1ac4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ac4c0:
    // 0x1ac4c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac4c4:
    // 0x1ac4c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ac4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1ac4c8:
    // 0x1ac4c8: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1ac4cc:
    // 0x1ac4cc: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1ac4d0:
    // 0x1ac4d0: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x1ac4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_1ac4d4:
    // 0x1ac4d4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1ac4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1ac4d8:
    // 0x1ac4d8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x1ac4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1ac4dc:
    // 0x1ac4dc: 0x8e0700fc  lw          $a3, 0xFC($s0)
    ctx->pc = 0x1ac4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ac4e0:
    // 0x1ac4e0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1ac4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ac4e4:
    // 0x1ac4e4: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x1ac4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1ac4e8:
    // 0x1ac4e8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1ac4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1ac4ec:
    // 0x1ac4ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ac4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1ac4f0:
    // 0x1ac4f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ac4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ac4f4:
    // 0x1ac4f4: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x1ac4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_1ac4f8:
    // 0x1ac4f8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1ac4f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1ac4fc:
    // 0x1ac4fc: 0xe0f809  jalr        $a3
label_1ac500:
    if (ctx->pc == 0x1AC500u) {
        ctx->pc = 0x1AC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4FCu;
        // 0x1ac500: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC504u;
        goto label_1ac504;
    }
    ctx->pc = 0x1AC4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1AC504u);
        ctx->pc = 0x1AC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4FCu;
        // 0x1ac500: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC4FCu, 0x1AC504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC504u;
label_1ac504:
    // 0x1ac504: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1ac504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1ac508:
    // 0x1ac508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ac508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ac50c:
    // 0x1ac50c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1ac50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_1ac510:
    // 0x1ac510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac514:
    // 0x1ac514: 0x3e00008  jr          $ra
label_1ac518:
    if (ctx->pc == 0x1AC518u) {
        ctx->pc = 0x1AC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC514u;
        // 0x1ac518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC51Cu;
        goto label_1ac51c;
    }
    ctx->pc = 0x1AC514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC514u;
        // 0x1ac518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC51Cu;
label_1ac51c:
    // 0x1ac51c: 0x0  nop
    ctx->pc = 0x1ac51cu;
    // NOP
label_1ac520:
    // 0x1ac520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac524:
    // 0x1ac524: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ac524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ac528:
    // 0x1ac528: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ac528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1ac52c:
    // 0x1ac52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ac530:
    // 0x1ac530: 0x2450e6a8  addiu       $s0, $v0, -0x1958
    ctx->pc = 0x1ac530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960808));
label_1ac534:
    // 0x1ac534: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ac534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ac538:
    // 0x1ac538: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1ac538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ac53c:
    // 0x1ac53c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ac53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ac540:
    // 0x1ac540: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ac540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac544:
    // 0x1ac544: 0x0  nop
    ctx->pc = 0x1ac544u;
    // NOP
label_1ac548:
    // 0x1ac548: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ac548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac54c:
    // 0x1ac54c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_1ac550:
    if (ctx->pc == 0x1AC550u) {
        ctx->pc = 0x1AC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC54Cu;
        // 0x1ac550: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC554u;
        goto label_1ac554;
    }
    ctx->pc = 0x1AC54Cu;
    {
        const bool branch_taken_0x1ac54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1ac54c) {
            ctx->pc = 0x1AC550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC54Cu;
            // 0x1ac550: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC560u;
            goto label_1ac560;
        }
    }
    ctx->pc = 0x1AC554u;
label_1ac554:
    // 0x1ac554: 0xc06b0f4  jal         func_1AC3D0
label_1ac558:
    if (ctx->pc == 0x1AC558u) {
        ctx->pc = 0x1AC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC554u;
        // 0x1ac558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC55Cu;
        goto label_1ac55c;
    }
    ctx->pc = 0x1AC554u;
    SET_GPR_U32(ctx, 31, 0x1AC55Cu);
    ctx->pc = 0x1AC558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC554u;
    // 0x1ac558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC3D0u;
    goto label_1ac3d0;
    ctx->pc = 0x1AC55Cu;
label_1ac55c:
    // 0x1ac55c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ac55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ac560:
    // 0x1ac560: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_1ac564:
    if (ctx->pc == 0x1AC564u) {
        ctx->pc = 0x1AC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC560u;
        // 0x1ac564: 0x26100104  addiu       $s0, $s0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC568u;
        goto label_1ac568;
    }
    ctx->pc = 0x1AC560u;
    {
        const bool branch_taken_0x1ac560 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1AC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC560u;
        // 0x1ac564: 0x26100104  addiu       $s0, $s0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac560) {
            ctx->pc = 0x1AC548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ac548;
        }
    }
    ctx->pc = 0x1AC568u;
label_1ac568:
    // 0x1ac568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac56c:
    // 0x1ac56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ac56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ac570:
    // 0x1ac570: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ac570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac574:
    // 0x1ac574: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ac574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ac578:
    // 0x1ac578: 0x3e00008  jr          $ra
label_1ac57c:
    if (ctx->pc == 0x1AC57Cu) {
        ctx->pc = 0x1AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC578u;
        // 0x1ac57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC580u;
        goto label_fallthrough_0x1ac578;
    }
    ctx->pc = 0x1AC578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC578u;
        // 0x1ac57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac578:
    ctx->pc = 0x1AC580u;
}
