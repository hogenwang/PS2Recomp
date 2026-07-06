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

// Function: sub_001A1380
// Address: 0x1a1380 - 0x1a1450
void sub_001A1380_0x1a1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1380_0x1a1380");
#endif

    switch (ctx->pc) {
        case 0x1a139cu: goto label_1a139c;
        case 0x1a13c0u: goto label_1a13c0;
        case 0x1a1430u: goto label_1a1430;
        case 0x1a1440u: goto label_1a1440;
        default: break;
    }

    ctx->pc = 0x1a1380u;

    // 0x1a1380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1384: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a138c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a138cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1390: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1a1390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a1394: 0xc04008c  jal         func_100230
    ctx->pc = 0x1A1394u;
    SET_GPR_U32(ctx, 31, 0x1A139Cu);
    ctx->pc = 0x1A1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1394u;
    // 0x1a1398: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x1A1394u, 0x1A139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A139Cu;
label_1a139c:
    // 0x1a139c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a139cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a13a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a13a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a13a4: 0x2484e690  addiu       $a0, $a0, -0x1970
    ctx->pc = 0x1a13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    // 0x1a13a8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a13a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a13ac: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1a13acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a13b0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1a13b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a13b4: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1a13b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a13b8: 0xc040370  jal         func_100DC0
    ctx->pc = 0x1A13B8u;
    SET_GPR_U32(ctx, 31, 0x1A13C0u);
    ctx->pc = 0x1A13BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13B8u;
    // 0x1a13bc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100DC0u, 0x1A13B8u, 0x1A13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13C0u;
label_1a13c0:
    // 0x1a13c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a13c4: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x1a13c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a13c8: 0x9446e6c8  lhu         $a2, -0x1938($v0)
    ctx->pc = 0x1a13c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960840)));
    // 0x1a13cc: 0x6408008c  daddiu      $t0, $zero, 0x8C
    ctx->pc = 0x1a13ccu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)140);
    // 0x1a13d0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a13d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a13d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a13dc: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x1a13dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1a13e0: 0x9445e6f0  lhu         $a1, -0x1910($v0)
    ctx->pc = 0x1a13e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960880)));
    // 0x1a13e4: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1a13e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1a13e8: 0xa486e6c8  sh          $a2, -0x1938($a0)
    ctx->pc = 0x1a13e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294960840), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a13ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a13f0: 0xa72024  and         $a0, $a1, $a3
    ctx->pc = 0x1a13f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1a13f4: 0x9442e700  lhu         $v0, -0x1900($v0)
    ctx->pc = 0x1a13f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960896)));
    // 0x1a13f8: 0x882825  or          $a1, $a0, $t0
    ctx->pc = 0x1a13f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x1a13fc: 0x64040118  daddiu      $a0, $zero, 0x118
    ctx->pc = 0x1a13fcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)280);
    // 0x1a1400: 0xa465e6f0  sh          $a1, -0x1910($v1)
    ctx->pc = 0x1a1400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294960880), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1404: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a1404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1a1408: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1a1408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a140c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a140cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1410: 0xa443e700  sh          $v1, -0x1900($v0)
    ctx->pc = 0x1a1410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294960896), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1414: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1418: 0x9443e7f0  lhu         $v1, -0x1810($v0)
    ctx->pc = 0x1a1418u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x1a141c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1a141cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1a1420: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1424: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a1424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a1428: 0xc069dfc  jal         func_1A77F0
    ctx->pc = 0x1A1428u;
    SET_GPR_U32(ctx, 31, 0x1A1430u);
    ctx->pc = 0x1A142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1428u;
    // 0x1a142c: 0xa443e7f0  sh          $v1, -0x1810($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961136), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77F0u, 0x1A1428u, 0x1A1430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1430u;
label_1a1430:
    // 0x1a1430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1434: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1438: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x1A1438u;
    SET_GPR_U32(ctx, 31, 0x1A1440u);
    ctx->pc = 0x1A143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1438u;
    // 0x1a143c: 0xa04395d0  sb          $v1, -0x6A30($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940112), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x1A1438u, 0x1A1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1440u;
label_1a1440:
    // 0x1a1440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1444: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1444u;
        // 0x1a1448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A144Cu;
    // 0x1a144c: 0x0  nop
    ctx->pc = 0x1a144cu;
    // NOP
    if (ctx->pc == 0x1a144cu) { ctx->pc = 0x1a1450u; }
}
