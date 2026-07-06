#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1588
// Address: 0x2b1588 - 0x2b1628
void sub_002B1588_0x2b1588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1588_0x2b1588");
#endif

    switch (ctx->pc) {
        case 0x2b1588u: goto label_2b1588;
        case 0x2b158cu: goto label_2b158c;
        case 0x2b1590u: goto label_2b1590;
        case 0x2b1594u: goto label_2b1594;
        case 0x2b1598u: goto label_2b1598;
        case 0x2b159cu: goto label_2b159c;
        case 0x2b15a0u: goto label_2b15a0;
        case 0x2b15a4u: goto label_2b15a4;
        case 0x2b15a8u: goto label_2b15a8;
        case 0x2b15acu: goto label_2b15ac;
        case 0x2b15b0u: goto label_2b15b0;
        case 0x2b15b4u: goto label_2b15b4;
        case 0x2b15b8u: goto label_2b15b8;
        case 0x2b15bcu: goto label_2b15bc;
        case 0x2b15c0u: goto label_2b15c0;
        case 0x2b15c4u: goto label_2b15c4;
        case 0x2b15c8u: goto label_2b15c8;
        case 0x2b15ccu: goto label_2b15cc;
        case 0x2b15d0u: goto label_2b15d0;
        case 0x2b15d4u: goto label_2b15d4;
        case 0x2b15d8u: goto label_2b15d8;
        case 0x2b15dcu: goto label_2b15dc;
        case 0x2b15e0u: goto label_2b15e0;
        case 0x2b15e4u: goto label_2b15e4;
        case 0x2b15e8u: goto label_2b15e8;
        case 0x2b15ecu: goto label_2b15ec;
        case 0x2b15f0u: goto label_2b15f0;
        case 0x2b15f4u: goto label_2b15f4;
        case 0x2b15f8u: goto label_2b15f8;
        case 0x2b15fcu: goto label_2b15fc;
        case 0x2b1600u: goto label_2b1600;
        case 0x2b1604u: goto label_2b1604;
        case 0x2b1608u: goto label_2b1608;
        case 0x2b160cu: goto label_2b160c;
        case 0x2b1610u: goto label_2b1610;
        case 0x2b1614u: goto label_2b1614;
        case 0x2b1618u: goto label_2b1618;
        case 0x2b161cu: goto label_2b161c;
        case 0x2b1620u: goto label_2b1620;
        case 0x2b1624u: goto label_2b1624;
        default: break;
    }

    ctx->pc = 0x2b1588u;

label_2b1588:
    // 0x2b1588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b1588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b158c:
    // 0x2b158c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2b1590:
    // 0x2b1590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1594:
    // 0x2b1594: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b1594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2b1598:
    // 0x2b1598: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_2b159c:
    // 0x2b159c: 0x26230074  addiu       $v1, $s1, 0x74
    ctx->pc = 0x2b159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_2b15a0:
    // 0x2b15a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b15a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b15a4:
    // 0x2b15a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b15a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b15a8:
    // 0x2b15a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b15a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b15ac:
    // 0x2b15ac: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2b15acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b15b0:
    // 0x2b15b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b15b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b15b4:
    // 0x2b15b4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2b15b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2b15b8:
    // 0x2b15b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b15bc:
    // 0x2b15bc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2b15bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2b15c0:
    // 0x2b15c0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2b15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2b15c4:
    // 0x2b15c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b15c8:
    if (ctx->pc == 0x2B15C8u) {
        ctx->pc = 0x2B15C8u;
            // 0x2b15c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B15CCu;
        goto label_2b15cc;
    }
    ctx->pc = 0x2B15C4u;
    {
        const bool branch_taken_0x2b15c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B15C4u;
            // 0x2b15c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15c4) {
            ctx->pc = 0x2B15E0u;
            goto label_2b15e0;
        }
    }
    ctx->pc = 0x2B15CCu;
label_2b15cc:
    // 0x2b15cc: 0xc0a5a18  jal         func_296860
label_2b15d0:
    if (ctx->pc == 0x2B15D0u) {
        ctx->pc = 0x2B15D4u;
        goto label_2b15d4;
    }
    ctx->pc = 0x2B15CCu;
    SET_GPR_U32(ctx, 31, 0x2B15D4u);
    ctx->pc = 0x296860u;
    if (runtime->hasFunction(0x296860u)) {
        auto targetFn = runtime->lookupFunction(0x296860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B15D4u; }
        if (ctx->pc != 0x2B15D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296860_0x296860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B15D4u; }
        if (ctx->pc != 0x2B15D4u) { return; }
    }
    ctx->pc = 0x2B15D4u;
label_2b15d4:
    // 0x2b15d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b15d8:
    // 0x2b15d8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b15d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2b15dc:
    // 0x2b15dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b15e0:
    // 0x2b15e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b15e4:
    // 0x2b15e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b15e8:
    if (ctx->pc == 0x2B15E8u) {
        ctx->pc = 0x2B15E8u;
            // 0x2b15e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B15ECu;
        goto label_2b15ec;
    }
    ctx->pc = 0x2B15E4u;
    {
        const bool branch_taken_0x2b15e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B15E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B15E4u;
            // 0x2b15e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15e4) {
            ctx->pc = 0x2B1608u;
            goto label_2b1608;
        }
    }
    ctx->pc = 0x2B15ECu;
label_2b15ec:
    // 0x2b15ec: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2b15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2b15f0:
    // 0x2b15f0: 0x40f809  jalr        $v0
label_2b15f4:
    if (ctx->pc == 0x2B15F4u) {
        ctx->pc = 0x2B15F8u;
        goto label_2b15f8;
    }
    ctx->pc = 0x2B15F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B15F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B15F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B15F8u; }
            if (ctx->pc != 0x2B15F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2B15F8u;
label_2b15f8:
    // 0x2b15f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b15fc:
    // 0x2b15fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2b1600:
    // 0x2b1600: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b1600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b1604:
    // 0x2b1604: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b1604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b1608:
    // 0x2b1608: 0x641ffeb  bgez        $s2, . + 4 + (-0x15 << 2)
label_2b160c:
    if (ctx->pc == 0x2B160Cu) {
        ctx->pc = 0x2B160Cu;
            // 0x2b160c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2B1610u;
        goto label_2b1610;
    }
    ctx->pc = 0x2B1608u;
    {
        const bool branch_taken_0x2b1608 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2B160Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1608u;
            // 0x2b160c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1608) {
            ctx->pc = 0x2B15B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b15b8;
        }
    }
    ctx->pc = 0x2B1610u;
label_2b1610:
    // 0x2b1610: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b1610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b1614:
    // 0x2b1614: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b1614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1618:
    // 0x2b1618: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b1618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b161c:
    // 0x2b161c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b161cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1620:
    // 0x2b1620: 0x3e00008  jr          $ra
label_2b1624:
    if (ctx->pc == 0x2B1624u) {
        ctx->pc = 0x2B1624u;
            // 0x2b1624: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2B1628u;
        goto label_fallthrough_0x2b1620;
    }
    ctx->pc = 0x2B1620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1620u;
            // 0x2b1624: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b1620:
    ctx->pc = 0x2B1628u;
    ctx->pc = 0x2b1628u;
}
