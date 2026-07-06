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

// Function: sub_001C1510
// Address: 0x1c1510 - 0x1c15c8
void sub_001C1510_0x1c1510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1510_0x1c1510");
#endif

    switch (ctx->pc) {
        case 0x1c1534u: goto label_1c1534;
        case 0x1c155cu: goto label_1c155c;
        case 0x1c1578u: goto label_1c1578;
        case 0x1c1588u: goto label_1c1588;
        case 0x1c15a4u: goto label_1c15a4;
        case 0x1c15acu: goto label_1c15ac;
        default: break;
    }

    ctx->pc = 0x1c1510u;

    // 0x1c1510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c151c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1528: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c152c: 0xc070506  jal         func_1C1418
    ctx->pc = 0x1C152Cu;
    SET_GPR_U32(ctx, 31, 0x1C1534u);
    ctx->pc = 0x1C1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C152Cu;
    // 0x1c1530: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1418u, 0x1C152Cu, 0x1C1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1534u;
label_1c1534:
    // 0x1c1534: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c153c: 0x8c47c840  lw          $a3, -0x37C0($v0)
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953024)));
    // 0x1c1540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1544: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x1c1544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c1548: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1c1548u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c154c: 0x14e3000c  bne         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C154Cu;
    {
        const bool branch_taken_0x1c154c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C154Cu;
        // 0x1c1550: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c154c) {
            ctx->pc = 0x1C1580u;
            goto label_1c1580;
        }
    }
    ctx->pc = 0x1C1554u;
    // 0x1c1554: 0xc0451f6  jal         func_1147D8
    ctx->pc = 0x1C1554u;
    SET_GPR_U32(ctx, 31, 0x1C155Cu);
    ctx->pc = 0x1C1558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1554u;
    // 0x1c1558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1147D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1147D8u, 0x1C1554u, 0x1C155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C155Cu;
label_1c155c:
    // 0x1c155c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c155cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1564: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x1c1564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x1c1568: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1568u;
    {
        const bool branch_taken_0x1c1568 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1568u;
        // 0x1c156c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1568) {
            ctx->pc = 0x1C15A4u;
            goto label_1c15a4;
        }
    }
    ctx->pc = 0x1C1570u;
    // 0x1c1570: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C1570u;
    SET_GPR_U32(ctx, 31, 0x1C1578u);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C1570u, 0x1C1578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1578u;
label_1c1578:
    // 0x1c1578: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C1578u;
    {
        const bool branch_taken_0x1c1578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1578) {
            ctx->pc = 0x1C15A4u;
            goto label_1c15a4;
        }
    }
    ctx->pc = 0x1C1580u;
label_1c1580:
    // 0x1c1580: 0xc04495e  jal         func_112578
    ctx->pc = 0x1C1580u;
    SET_GPR_U32(ctx, 31, 0x1C1588u);
    ctx->pc = 0x112578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112578u, 0x1C1580u, 0x1C1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1588u;
label_1c1588:
    // 0x1c1588: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c158c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c158cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1590: 0x248499d0  addiu       $a0, $a0, -0x6630
    ctx->pc = 0x1c1590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941136));
    // 0x1c1594: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1594u;
    {
        const bool branch_taken_0x1c1594 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1594u;
        // 0x1c1598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1594) {
            ctx->pc = 0x1C15A4u;
            goto label_1c15a4;
        }
    }
    ctx->pc = 0x1C159Cu;
    // 0x1c159c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C159Cu;
    SET_GPR_U32(ctx, 31, 0x1C15A4u);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C159Cu, 0x1C15A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15A4u;
label_1c15a4:
    // 0x1c15a4: 0xc070514  jal         func_1C1450
    ctx->pc = 0x1C15A4u;
    SET_GPR_U32(ctx, 31, 0x1C15ACu);
    ctx->pc = 0x1C1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1450u, 0x1C15A4u, 0x1C15ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15ACu;
label_1c15ac:
    // 0x1c15ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c15acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c15b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c15b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c15b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c15b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c15b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c15bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c15bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c15c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C15C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C15C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15C0u;
        // 0x1c15c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C15C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C15C8u;
}
