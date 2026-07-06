#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261580
// Address: 0x261580 - 0x261640
void sub_00261580_0x261580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261580_0x261580");
#endif

    switch (ctx->pc) {
        case 0x261580u: goto label_261580;
        case 0x261584u: goto label_261584;
        case 0x261588u: goto label_261588;
        case 0x26158cu: goto label_26158c;
        case 0x261590u: goto label_261590;
        case 0x261594u: goto label_261594;
        case 0x261598u: goto label_261598;
        case 0x26159cu: goto label_26159c;
        case 0x2615a0u: goto label_2615a0;
        case 0x2615a4u: goto label_2615a4;
        case 0x2615a8u: goto label_2615a8;
        case 0x2615acu: goto label_2615ac;
        case 0x2615b0u: goto label_2615b0;
        case 0x2615b4u: goto label_2615b4;
        case 0x2615b8u: goto label_2615b8;
        case 0x2615bcu: goto label_2615bc;
        case 0x2615c0u: goto label_2615c0;
        case 0x2615c4u: goto label_2615c4;
        case 0x2615c8u: goto label_2615c8;
        case 0x2615ccu: goto label_2615cc;
        case 0x2615d0u: goto label_2615d0;
        case 0x2615d4u: goto label_2615d4;
        case 0x2615d8u: goto label_2615d8;
        case 0x2615dcu: goto label_2615dc;
        case 0x2615e0u: goto label_2615e0;
        case 0x2615e4u: goto label_2615e4;
        case 0x2615e8u: goto label_2615e8;
        case 0x2615ecu: goto label_2615ec;
        case 0x2615f0u: goto label_2615f0;
        case 0x2615f4u: goto label_2615f4;
        case 0x2615f8u: goto label_2615f8;
        case 0x2615fcu: goto label_2615fc;
        case 0x261600u: goto label_261600;
        case 0x261604u: goto label_261604;
        case 0x261608u: goto label_261608;
        case 0x26160cu: goto label_26160c;
        case 0x261610u: goto label_261610;
        case 0x261614u: goto label_261614;
        case 0x261618u: goto label_261618;
        case 0x26161cu: goto label_26161c;
        case 0x261620u: goto label_261620;
        case 0x261624u: goto label_261624;
        case 0x261628u: goto label_261628;
        case 0x26162cu: goto label_26162c;
        case 0x261630u: goto label_261630;
        case 0x261634u: goto label_261634;
        case 0x261638u: goto label_261638;
        case 0x26163cu: goto label_26163c;
        default: break;
    }

    ctx->pc = 0x261580u;

label_261580:
    // 0x261580: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x261580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_261584:
    // 0x261584: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_261588:
    // 0x261588: 0x8c4219fc  lw          $v0, 0x19FC($v0)
    ctx->pc = 0x261588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6652)));
label_26158c:
    // 0x26158c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_261590:
    if (ctx->pc == 0x261590u) {
        ctx->pc = 0x261590u;
            // 0x261590: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x261594u;
        goto label_261594;
    }
    ctx->pc = 0x26158Cu;
    {
        const bool branch_taken_0x26158c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26158Cu;
            // 0x261590: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26158c) {
            ctx->pc = 0x2615A0u;
            goto label_2615a0;
        }
    }
    ctx->pc = 0x261594u;
label_261594:
    // 0x261594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261598:
    // 0x261598: 0x808a67a  j           func_2299E8
label_26159c:
    if (ctx->pc == 0x26159Cu) {
        ctx->pc = 0x26159Cu;
            // 0x26159c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2615A0u;
        goto label_2615a0;
    }
    ctx->pc = 0x261598u;
    ctx->pc = 0x26159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261598u;
            // 0x26159c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2299E8u;
    {
        auto targetFn = runtime->lookupFunction(0x2299E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2615A0u;
label_2615a0:
    // 0x2615a0: 0x40f809  jalr        $v0
label_2615a4:
    if (ctx->pc == 0x2615A4u) {
        ctx->pc = 0x2615A8u;
        goto label_2615a8;
    }
    ctx->pc = 0x2615A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2615A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2615A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2615A8u; }
            if (ctx->pc != 0x2615A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2615A8u;
label_2615a8:
    // 0x2615a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2615a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2615ac:
    // 0x2615ac: 0x3e00008  jr          $ra
label_2615b0:
    if (ctx->pc == 0x2615B0u) {
        ctx->pc = 0x2615B0u;
            // 0x2615b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2615B4u;
        goto label_2615b4;
    }
    ctx->pc = 0x2615ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2615B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2615ACu;
            // 0x2615b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2615B4u;
label_2615b4:
    // 0x2615b4: 0x0  nop
    ctx->pc = 0x2615b4u;
    // NOP
label_2615b8:
    // 0x2615b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2615b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2615bc:
    // 0x2615bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2615bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2615c0:
    // 0x2615c0: 0x8c4219f4  lw          $v0, 0x19F4($v0)
    ctx->pc = 0x2615c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6644)));
label_2615c4:
    // 0x2615c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2615c8:
    if (ctx->pc == 0x2615C8u) {
        ctx->pc = 0x2615C8u;
            // 0x2615c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2615CCu;
        goto label_2615cc;
    }
    ctx->pc = 0x2615C4u;
    {
        const bool branch_taken_0x2615c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2615C4u;
            // 0x2615c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615c4) {
            ctx->pc = 0x2615DCu;
            goto label_2615dc;
        }
    }
    ctx->pc = 0x2615CCu;
label_2615cc:
    // 0x2615cc: 0x40f809  jalr        $v0
label_2615d0:
    if (ctx->pc == 0x2615D0u) {
        ctx->pc = 0x2615D4u;
        goto label_2615d4;
    }
    ctx->pc = 0x2615CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2615D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2615D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2615D4u; }
            if (ctx->pc != 0x2615D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2615D4u;
label_2615d4:
    // 0x2615d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2615d8:
    if (ctx->pc == 0x2615D8u) {
        ctx->pc = 0x2615D8u;
            // 0x2615d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2615DCu;
        goto label_2615dc;
    }
    ctx->pc = 0x2615D4u;
    {
        const bool branch_taken_0x2615d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2615D4u;
            // 0x2615d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615d4) {
            ctx->pc = 0x2615E8u;
            goto label_2615e8;
        }
    }
    ctx->pc = 0x2615DCu;
label_2615dc:
    // 0x2615dc: 0xc08a6a4  jal         func_229A90
label_2615e0:
    if (ctx->pc == 0x2615E0u) {
        ctx->pc = 0x2615E4u;
        goto label_2615e4;
    }
    ctx->pc = 0x2615DCu;
    SET_GPR_U32(ctx, 31, 0x2615E4u);
    ctx->pc = 0x229A90u;
    if (runtime->hasFunction(0x229A90u)) {
        auto targetFn = runtime->lookupFunction(0x229A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615E4u; }
        if (ctx->pc != 0x2615E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229A90_0x229a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2615E4u; }
        if (ctx->pc != 0x2615E4u) { return; }
    }
    ctx->pc = 0x2615E4u;
label_2615e4:
    // 0x2615e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2615e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2615e8:
    // 0x2615e8: 0x3e00008  jr          $ra
label_2615ec:
    if (ctx->pc == 0x2615ECu) {
        ctx->pc = 0x2615ECu;
            // 0x2615ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2615F0u;
        goto label_2615f0;
    }
    ctx->pc = 0x2615E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2615ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2615E8u;
            // 0x2615ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2615F0u;
label_2615f0:
    // 0x2615f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2615f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2615f4:
    // 0x2615f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2615f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2615f8:
    // 0x2615f8: 0xa48818  mult        $s1, $a1, $a0
    ctx->pc = 0x2615f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2615fc:
    // 0x2615fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2615fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261600:
    // 0x261600: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_261604:
    // 0x261604: 0xc098552  jal         func_261548
label_261608:
    if (ctx->pc == 0x261608u) {
        ctx->pc = 0x261608u;
            // 0x261608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26160Cu;
        goto label_26160c;
    }
    ctx->pc = 0x261604u;
    SET_GPR_U32(ctx, 31, 0x26160Cu);
    ctx->pc = 0x261608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261604u;
            // 0x261608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26160Cu; }
        if (ctx->pc != 0x26160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26160Cu; }
        if (ctx->pc != 0x26160Cu) { return; }
    }
    ctx->pc = 0x26160Cu;
label_26160c:
    // 0x26160c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26160cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261610:
    // 0x261610: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_261614:
    if (ctx->pc == 0x261614u) {
        ctx->pc = 0x261614u;
            // 0x261614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261618u;
        goto label_261618;
    }
    ctx->pc = 0x261610u;
    {
        const bool branch_taken_0x261610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x261614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261610u;
            // 0x261614: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261610) {
            ctx->pc = 0x261624u;
            goto label_261624;
        }
    }
    ctx->pc = 0x261618u;
label_261618:
    // 0x261618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26161c:
    // 0x26161c: 0xc049cb6  jal         func_1272D8
label_261620:
    if (ctx->pc == 0x261620u) {
        ctx->pc = 0x261620u;
            // 0x261620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x261624u;
        goto label_261624;
    }
    ctx->pc = 0x26161Cu;
    SET_GPR_U32(ctx, 31, 0x261624u);
    ctx->pc = 0x261620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26161Cu;
            // 0x261620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261624u; }
        if (ctx->pc != 0x261624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261624u; }
        if (ctx->pc != 0x261624u) { return; }
    }
    ctx->pc = 0x261624u;
label_261624:
    // 0x261624: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x261624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261628:
    // 0x261628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26162c:
    // 0x26162c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26162cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261630:
    // 0x261630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261634:
    // 0x261634: 0x3e00008  jr          $ra
label_261638:
    if (ctx->pc == 0x261638u) {
        ctx->pc = 0x261638u;
            // 0x261638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26163Cu;
        goto label_26163c;
    }
    ctx->pc = 0x261634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261634u;
            // 0x261638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26163Cu;
label_26163c:
    // 0x26163c: 0x0  nop
    ctx->pc = 0x26163cu;
    // NOP
    ctx->pc = 0x261640u;
}
