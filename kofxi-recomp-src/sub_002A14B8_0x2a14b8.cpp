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

// Function: sub_002A14B8
// Address: 0x2a14b8 - 0x2a15c0
void sub_002A14B8_0x2a14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A14B8_0x2a14b8");
#endif

    switch (ctx->pc) {
        case 0x2a150cu: goto label_2a150c;
        case 0x2a153cu: goto label_2a153c;
        case 0x2a1564u: goto label_2a1564;
        case 0x2a1588u: goto label_2a1588;
        default: break;
    }

    ctx->pc = 0x2a14b8u;

    // 0x2a14b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a14bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2a14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2a14c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a14c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a14c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14c8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2a14c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2a14cc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2a14ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14d0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2a14d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2a14d4: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2a14d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14d8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a14d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a14dc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2a14dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a14e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a14e4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2a14e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14e8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a14ec: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2a14ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a14f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a14f4: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2a14f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a14f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a14fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a14fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1500: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2a1500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2a1504: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A1504u;
    SET_GPR_U32(ctx, 31, 0x2A150Cu);
    ctx->pc = 0x2A1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1504u;
    // 0x2a1508: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2A1504u, 0x2A150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A150Cu;
label_2a150c:
    // 0x2a150c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a150cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1510: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A1510u;
    {
        const bool branch_taken_0x2a1510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1510u;
        // 0x2a1514: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1510) {
            ctx->pc = 0x2A156Cu;
            goto label_2a156c;
        }
    }
    ctx->pc = 0x2A1518u;
    // 0x2a1518: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2a1518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a151c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1520: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2a1520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1524: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x2a1524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1528: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a1528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a152c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a152cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1530: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a1530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1534: 0xc0a8570  jal         func_2A15C0
    ctx->pc = 0x2A1534u;
    SET_GPR_U32(ctx, 31, 0x2A153Cu);
    ctx->pc = 0x2A1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1534u;
    // 0x2a1538: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A15C0u, 0x2A1534u, 0x2A153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A153Cu;
label_2a153c:
    // 0x2a153c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a153cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1540: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2A1540u;
    {
        const bool branch_taken_0x2a1540 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1540u;
        // 0x2a1544: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1540) {
            ctx->pc = 0x2A156Cu;
            goto label_2a156c;
        }
    }
    ctx->pc = 0x2A1548u;
    // 0x2a1548: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x2a1548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a154c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A154Cu;
    {
        const bool branch_taken_0x2a154c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A154Cu;
        // 0x2a1550: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a154c) {
            ctx->pc = 0x2A156Cu;
            goto label_2a156c;
        }
    }
    ctx->pc = 0x2A1554u;
    // 0x2a1554: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a1554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1558: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2a1558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2a155c: 0xc049c22  jal         func_127088
    ctx->pc = 0x2A155Cu;
    SET_GPR_U32(ctx, 31, 0x2A1564u);
    ctx->pc = 0x2A1560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A155Cu;
    // 0x2a1560: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2A155Cu, 0x2A1564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1564u;
label_2a1564:
    // 0x2a1564: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a1564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a1568: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2a1568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2a156c:
    // 0x2a156c: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A156Cu;
    {
        const bool branch_taken_0x2a156c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A156Cu;
        // 0x2a1570: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a156c) {
            ctx->pc = 0x2A1578u;
            goto label_2a1578;
        }
    }
    ctx->pc = 0x2A1574u;
    // 0x2a1574: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2a1574u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_2a1578:
    // 0x2a1578: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1578u;
    {
        const bool branch_taken_0x2a1578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1578u;
        // 0x2a157c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1578) {
            ctx->pc = 0x2A158Cu;
            goto label_2a158c;
        }
    }
    ctx->pc = 0x2A1580u;
    // 0x2a1580: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A1580u;
    SET_GPR_U32(ctx, 31, 0x2A1588u);
    ctx->pc = 0x2A1584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1580u;
    // 0x2a1584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A1580u, 0x2A1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1588u;
label_2a1588:
    // 0x2a1588: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a1588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a158c:
    // 0x2a158c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2a158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a1590: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2a1590u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a1594: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2a1594u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1598: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a1598u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a159c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2a159cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a15a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a15a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a15a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a15a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a15a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a15a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a15ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a15acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a15b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a15b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a15b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A15B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15B4u;
        // 0x2a15b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A15B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A15BCu;
    // 0x2a15bc: 0x0  nop
    ctx->pc = 0x2a15bcu;
    // NOP
}
