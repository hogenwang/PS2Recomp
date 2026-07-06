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

// Function: sub_001A1450
// Address: 0x1a1450 - 0x1a1550
void sub_001A1450_0x1a1450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1450_0x1a1450");
#endif

    switch (ctx->pc) {
        case 0x1a146cu: goto label_1a146c;
        case 0x1a1490u: goto label_1a1490;
        case 0x1a1500u: goto label_1a1500;
        case 0x1a150cu: goto label_1a150c;
        case 0x1a1530u: goto label_1a1530;
        default: break;
    }

    ctx->pc = 0x1a1450u;

    // 0x1a1450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a145c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1460: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1464: 0xc04008c  jal         func_100230
    ctx->pc = 0x1A1464u;
    SET_GPR_U32(ctx, 31, 0x1A146Cu);
    ctx->pc = 0x1A1468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1464u;
    // 0x1a1468: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x1A1464u, 0x1A146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A146Cu;
label_1a146c:
    // 0x1a146c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a146cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1470: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a1470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1474: 0x2484e690  addiu       $a0, $a0, -0x1970
    ctx->pc = 0x1a1474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    // 0x1a1478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a147c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a147cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a1480: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1a1480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a1484: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1a1484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a1488: 0xc040370  jal         func_100DC0
    ctx->pc = 0x1A1488u;
    SET_GPR_U32(ctx, 31, 0x1A1490u);
    ctx->pc = 0x1A148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1488u;
    // 0x1a148c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100DC0u, 0x1A1488u, 0x1A1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1490u;
label_1a1490:
    // 0x1a1490: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1494: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x1a1494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a1498: 0x9446e6c8  lhu         $a2, -0x1938($v0)
    ctx->pc = 0x1a1498u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960840)));
    // 0x1a149c: 0x6408008c  daddiu      $t0, $zero, 0x8C
    ctx->pc = 0x1a149cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)140);
    // 0x1a14a0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a14a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a14a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a14a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a14ac: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x1a14acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1a14b0: 0x9445e6f0  lhu         $a1, -0x1910($v0)
    ctx->pc = 0x1a14b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960880)));
    // 0x1a14b4: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1a14b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1a14b8: 0xa486e6c8  sh          $a2, -0x1938($a0)
    ctx->pc = 0x1a14b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294960840), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a14bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a14c0: 0xa72024  and         $a0, $a1, $a3
    ctx->pc = 0x1a14c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1a14c4: 0x9442e700  lhu         $v0, -0x1900($v0)
    ctx->pc = 0x1a14c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960896)));
    // 0x1a14c8: 0x882825  or          $a1, $a0, $t0
    ctx->pc = 0x1a14c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x1a14cc: 0x64040118  daddiu      $a0, $zero, 0x118
    ctx->pc = 0x1a14ccu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)280);
    // 0x1a14d0: 0xa465e6f0  sh          $a1, -0x1910($v1)
    ctx->pc = 0x1a14d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294960880), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a14d4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a14d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1a14d8: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1a14d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a14dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a14e0: 0xa443e700  sh          $v1, -0x1900($v0)
    ctx->pc = 0x1a14e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294960896), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a14e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a14e8: 0x9443e7f0  lhu         $v1, -0x1810($v0)
    ctx->pc = 0x1a14e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x1a14ec: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1a14f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a14f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a14f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a14f8: 0xc069dfc  jal         func_1A77F0
    ctx->pc = 0x1A14F8u;
    SET_GPR_U32(ctx, 31, 0x1A1500u);
    ctx->pc = 0x1A14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14F8u;
    // 0x1a14fc: 0xa443e7f0  sh          $v1, -0x1810($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961136), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77F0u, 0x1A14F8u, 0x1A1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1500u;
label_1a1500:
    // 0x1a1500: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1504: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x1A1504u;
    SET_GPR_U32(ctx, 31, 0x1A150Cu);
    ctx->pc = 0x1A1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1504u;
    // 0x1a1508: 0xa04095d0  sb          $zero, -0x6A30($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940112), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x1A1504u, 0x1A150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A150Cu;
label_1a150c:
    // 0x1a150c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1510: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1510u;
        // 0x1a1514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1518u;
    // 0x1a1518: 0x0  nop
    ctx->pc = 0x1a1518u;
    // NOP
    // 0x1a151c: 0x0  nop
    ctx->pc = 0x1a151cu;
    // NOP
    // 0x1a1520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1528: 0xc06cfe4  jal         func_1B3F90
    ctx->pc = 0x1A1528u;
    SET_GPR_U32(ctx, 31, 0x1A1530u);
    ctx->pc = 0x1A152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1528u;
    // 0x1a152c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F90u, 0x1A1528u, 0x1A1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1530u;
label_1a1530:
    // 0x1a1530: 0xf  sync
    ctx->pc = 0x1a1530u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a1534: 0x42000038  ei
    ctx->pc = 0x1a1534u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a1538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a153c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a153cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1540: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1540u;
        // 0x1a1544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1548u;
    // 0x1a1548: 0x0  nop
    ctx->pc = 0x1a1548u;
    // NOP
    // 0x1a154c: 0x0  nop
    ctx->pc = 0x1a154cu;
    // NOP
    if (ctx->pc == 0x1a154cu) { ctx->pc = 0x1a1550u; }
}
