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

// Function: sub_00116518
// Address: 0x116518 - 0x116710
void sub_00116518_0x116518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116518_0x116518");
#endif

    switch (ctx->pc) {
        case 0x116540u: goto label_116540;
        case 0x116584u: goto label_116584;
        case 0x116594u: goto label_116594;
        case 0x11659cu: goto label_11659c;
        case 0x1165b0u: goto label_1165b0;
        case 0x1165e8u: goto label_1165e8;
        case 0x116614u: goto label_116614;
        case 0x116658u: goto label_116658;
        case 0x116664u: goto label_116664;
        case 0x116670u: goto label_116670;
        case 0x1166e0u: goto label_1166e0;
        case 0x1166f8u: goto label_1166f8;
        default: break;
    }

    ctx->pc = 0x116518u;

    // 0x116518: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x116518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11651c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x11651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x116520: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x116520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x116524: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x116524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x116528: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x116528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11652c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11652cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116530: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x116530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116534: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x116534u;
    {
        const bool branch_taken_0x116534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116534u;
        // 0x116538: 0x2451aa80  addiu       $s1, $v0, -0x5580 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116534) {
            ctx->pc = 0x116564u;
            goto label_116564;
        }
    }
    ctx->pc = 0x11653Cu;
    // 0x11653c: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x11653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_116540:
    // 0x116540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116544: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116548: 0x0  nop
    ctx->pc = 0x116548u;
    // NOP
    // 0x11654c: 0x0  nop
    ctx->pc = 0x11654cu;
    // NOP
    // 0x116550: 0x0  nop
    ctx->pc = 0x116550u;
    // NOP
    // 0x116554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116554u;
    {
        const bool branch_taken_0x116554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116554) {
            ctx->pc = 0x116540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116540;
        }
    }
    ctx->pc = 0x11655Cu;
    // 0x11655c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11655Cu;
    {
        const bool branch_taken_0x11655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11655Cu;
        // 0x116560: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11655c) {
            ctx->pc = 0x11656Cu;
            goto label_11656c;
        }
    }
    ctx->pc = 0x116564u;
label_116564:
    // 0x116564: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x116564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x116568: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x116568u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_11656c:
    // 0x11656c: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x11656cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x116570: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116570u;
    {
        const bool branch_taken_0x116570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116570u;
        // 0x116574: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116570) {
            ctx->pc = 0x11658Cu;
            goto label_11658c;
        }
    }
    ctx->pc = 0x116578u;
    // 0x116578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11657c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11657Cu;
    SET_GPR_U32(ctx, 31, 0x116584u);
    ctx->pc = 0x116580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11657Cu;
    // 0x116580: 0x2484aa90  addiu       $a0, $a0, -0x5570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11657Cu, 0x116584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116584u;
label_116584:
    // 0x116584: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x116584u;
    {
        const bool branch_taken_0x116584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116584u;
        // 0x116588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116584) {
            ctx->pc = 0x116614u;
            goto label_116614;
        }
    }
    ctx->pc = 0x11658Cu;
label_11658c:
    // 0x11658c: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11658Cu;
    SET_GPR_U32(ctx, 31, 0x116594u);
    ctx->pc = 0x116590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11658Cu;
    // 0x116590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x11658Cu, 0x116594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116594u;
label_116594:
    // 0x116594: 0xc044152  jal         func_110548
    ctx->pc = 0x116594u;
    SET_GPR_U32(ctx, 31, 0x11659Cu);
    ctx->pc = 0x110548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110548u, 0x116594u, 0x11659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11659Cu;
label_11659c:
    // 0x11659c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x11659cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1165a0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1165a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1165A4u;
    {
        const bool branch_taken_0x1165a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165A4u;
        // 0x1165a8: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165a4) {
            ctx->pc = 0x1165D4u;
            goto label_1165d4;
        }
    }
    ctx->pc = 0x1165ACu;
    // 0x1165ac: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1165acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1165b0:
    // 0x1165b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1165b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1165b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1165b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1165b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1165b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1165bc: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1165bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1165c0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1165c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1165c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1165C4u;
    {
        const bool branch_taken_0x1165c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1165c4) {
            ctx->pc = 0x1165B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1165b0;
        }
    }
    ctx->pc = 0x1165CCu;
    // 0x1165cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1165CCu;
    {
        const bool branch_taken_0x1165cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165CCu;
        // 0x1165d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165cc) {
            ctx->pc = 0x1165DCu;
            goto label_1165dc;
        }
    }
    ctx->pc = 0x1165D4u;
label_1165d4:
    // 0x1165d4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1165d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1165d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1165d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1165dc:
    // 0x1165dc: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1165DCu;
    {
        const bool branch_taken_0x1165dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1165dc) {
            ctx->pc = 0x1165E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165DCu;
            // 0x1165e0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116608u;
            goto label_116608;
        }
    }
    ctx->pc = 0x1165E4u;
    // 0x1165e4: 0x0  nop
    ctx->pc = 0x1165e4u;
    // NOP
label_1165e8:
    // 0x1165e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1165e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1165ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1165ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1165f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1165f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1165f4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1165f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1165f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1165f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1165FCu;
    {
        const bool branch_taken_0x1165fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1165fc) {
            ctx->pc = 0x1165E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1165e8;
        }
    }
    ctx->pc = 0x116604u;
    // 0x116604: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x116604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_116608:
    // 0x116608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11660c: 0xc0458d2  jal         func_116348
    ctx->pc = 0x11660Cu;
    SET_GPR_U32(ctx, 31, 0x116614u);
    ctx->pc = 0x116610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11660Cu;
    // 0x116610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116348u, 0x11660Cu, 0x116614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116614u;
label_116614:
    // 0x116614: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x116614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116618: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x116618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11661c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x11661cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116620: 0x3e00008  jr          $ra
    ctx->pc = 0x116620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116620u;
        // 0x116624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116628u;
    // 0x116628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11662c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x116630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116634: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x116638: 0x3c100011  lui         $s0, 0x11
    ctx->pc = 0x116638u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17 << 16));
    // 0x11663c: 0x26106b40  addiu       $s0, $s0, 0x6B40
    ctx->pc = 0x11663cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27456));
    // 0x116640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116644: 0xac518a98  sw          $s1, -0x7568($v0)
    ctx->pc = 0x116644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937240), GPR_U32(ctx, 17));
    // 0x116648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11664c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116650: 0xc043244  jal         func_10C910
    ctx->pc = 0x116650u;
    SET_GPR_U32(ctx, 31, 0x116658u);
    ctx->pc = 0x116654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116650u;
    // 0x116654: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C910u, 0x116650u, 0x116658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116658u;
label_116658:
    // 0x116658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11665c: 0xc043244  jal         func_10C910
    ctx->pc = 0x11665Cu;
    SET_GPR_U32(ctx, 31, 0x116664u);
    ctx->pc = 0x116660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11665Cu;
    // 0x116660: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C910u, 0x11665Cu, 0x116664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116664u;
label_116664:
    // 0x116664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116668: 0xc043244  jal         func_10C910
    ctx->pc = 0x116668u;
    SET_GPR_U32(ctx, 31, 0x116670u);
    ctx->pc = 0x11666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116668u;
    // 0x11666c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C910u, 0x116668u, 0x116670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116670u;
label_116670:
    // 0x116670: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x116670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116678: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11667c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11667cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116680: 0x3e00008  jr          $ra
    ctx->pc = 0x116680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116680u;
        // 0x116684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116688u;
    // 0x116688: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x116688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11668c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11668cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116690: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x116690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x116694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116698: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x116698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x11669c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11669Cu;
    {
        const bool branch_taken_0x11669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1166A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11669Cu;
        // 0x1166a0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11669c) {
            ctx->pc = 0x1166B0u;
            goto label_1166b0;
        }
    }
    ctx->pc = 0x1166A4u;
    // 0x1166a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1166a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1166A8u;
    {
        const bool branch_taken_0x1166a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166A8u;
        // 0x1166ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166a8) {
            ctx->pc = 0x1166FCu;
            goto label_1166fc;
        }
    }
    ctx->pc = 0x1166B0u;
label_1166b0:
    // 0x1166b0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1166b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1166b4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1166b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1166b8: 0x24428aa0  addiu       $v0, $v0, -0x7560
    ctx->pc = 0x1166b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937248));
    // 0x1166bc: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1166bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1166c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1166c4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1166c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1166C8u;
    {
        const bool branch_taken_0x1166c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166C8u;
        // 0x1166cc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166c8) {
            ctx->pc = 0x1166E8u;
            goto label_1166e8;
        }
    }
    ctx->pc = 0x1166D0u;
    // 0x1166d0: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1166d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1166d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1166d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166d8: 0xc043244  jal         func_10C910
    ctx->pc = 0x1166D8u;
    SET_GPR_U32(ctx, 31, 0x1166E0u);
    ctx->pc = 0x1166DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166D8u;
    // 0x1166dc: 0x24a56d80  addiu       $a1, $a1, 0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C910u, 0x1166D8u, 0x1166E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166E0u;
label_1166e0:
    // 0x1166e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1166E0u;
    {
        const bool branch_taken_0x1166e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166E0u;
        // 0x1166e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166e0) {
            ctx->pc = 0x1166FCu;
            goto label_1166fc;
        }
    }
    ctx->pc = 0x1166E8u;
label_1166e8:
    // 0x1166e8: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1166e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1166ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1166ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166f0: 0xc043248  jal         func_10C920
    ctx->pc = 0x1166F0u;
    SET_GPR_U32(ctx, 31, 0x1166F8u);
    ctx->pc = 0x1166F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166F0u;
    // 0x1166f4: 0x24a56d80  addiu       $a1, $a1, 0x6D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C920u, 0x1166F0u, 0x1166F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166F8u;
label_1166f8:
    // 0x1166f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1166f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1166fc:
    // 0x1166fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1166fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116704: 0x3e00008  jr          $ra
    ctx->pc = 0x116704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116704u;
        // 0x116708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11670Cu;
    // 0x11670c: 0x0  nop
    ctx->pc = 0x11670cu;
    // NOP
    if (ctx->pc == 0x11670cu) { ctx->pc = 0x116710u; }
}
