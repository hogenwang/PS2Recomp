#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3598
// Address: 0x2a3598 - 0x2a3628
void sub_002A3598_0x2a3598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3598_0x2a3598");
#endif

    switch (ctx->pc) {
        case 0x2a3598u: goto label_2a3598;
        case 0x2a359cu: goto label_2a359c;
        case 0x2a35a0u: goto label_2a35a0;
        case 0x2a35a4u: goto label_2a35a4;
        case 0x2a35a8u: goto label_2a35a8;
        case 0x2a35acu: goto label_2a35ac;
        case 0x2a35b0u: goto label_2a35b0;
        case 0x2a35b4u: goto label_2a35b4;
        case 0x2a35b8u: goto label_2a35b8;
        case 0x2a35bcu: goto label_2a35bc;
        case 0x2a35c0u: goto label_2a35c0;
        case 0x2a35c4u: goto label_2a35c4;
        case 0x2a35c8u: goto label_2a35c8;
        case 0x2a35ccu: goto label_2a35cc;
        case 0x2a35d0u: goto label_2a35d0;
        case 0x2a35d4u: goto label_2a35d4;
        case 0x2a35d8u: goto label_2a35d8;
        case 0x2a35dcu: goto label_2a35dc;
        case 0x2a35e0u: goto label_2a35e0;
        case 0x2a35e4u: goto label_2a35e4;
        case 0x2a35e8u: goto label_2a35e8;
        case 0x2a35ecu: goto label_2a35ec;
        case 0x2a35f0u: goto label_2a35f0;
        case 0x2a35f4u: goto label_2a35f4;
        case 0x2a35f8u: goto label_2a35f8;
        case 0x2a35fcu: goto label_2a35fc;
        case 0x2a3600u: goto label_2a3600;
        case 0x2a3604u: goto label_2a3604;
        case 0x2a3608u: goto label_2a3608;
        case 0x2a360cu: goto label_2a360c;
        case 0x2a3610u: goto label_2a3610;
        case 0x2a3614u: goto label_2a3614;
        case 0x2a3618u: goto label_2a3618;
        case 0x2a361cu: goto label_2a361c;
        case 0x2a3620u: goto label_2a3620;
        case 0x2a3624u: goto label_2a3624;
        default: break;
    }

    ctx->pc = 0x2a3598u;

label_2a3598:
    // 0x2a3598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a359c:
    // 0x2a359c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a35a0:
    // 0x2a35a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2a35a4:
    if (ctx->pc == 0x2A35A4u) {
        ctx->pc = 0x2A35A4u;
            // 0x2a35a4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x2A35A8u;
        goto label_2a35a8;
    }
    ctx->pc = 0x2A35A0u;
    {
        const bool branch_taken_0x2a35a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35A0u;
            // 0x2a35a4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35a0) {
            ctx->pc = 0x2A35B4u;
            goto label_2a35b4;
        }
    }
    ctx->pc = 0x2A35A8u;
label_2a35a8:
    // 0x2a35a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a35ac:
    // 0x2a35ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a35b0:
    if (ctx->pc == 0x2A35B0u) {
        ctx->pc = 0x2A35B0u;
            // 0x2a35b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2A35B4u;
        goto label_2a35b4;
    }
    ctx->pc = 0x2A35ACu;
    {
        const bool branch_taken_0x2a35ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A35B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35ACu;
            // 0x2a35b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35ac) {
            ctx->pc = 0x2A35BCu;
            goto label_2a35bc;
        }
    }
    ctx->pc = 0x2A35B4u;
label_2a35b4:
    // 0x2a35b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a35b8:
    if (ctx->pc == 0x2A35B8u) {
        ctx->pc = 0x2A35B8u;
            // 0x2a35b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A35BCu;
        goto label_2a35bc;
    }
    ctx->pc = 0x2A35B4u;
    {
        const bool branch_taken_0x2a35b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35B4u;
            // 0x2a35b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35b4) {
            ctx->pc = 0x2A35C4u;
            goto label_2a35c4;
        }
    }
    ctx->pc = 0x2A35BCu;
label_2a35bc:
    // 0x2a35bc: 0x40f809  jalr        $v0
label_2a35c0:
    if (ctx->pc == 0x2A35C0u) {
        ctx->pc = 0x2A35C0u;
            // 0x2a35c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A35C4u;
        goto label_2a35c4;
    }
    ctx->pc = 0x2A35BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A35C4u);
        ctx->pc = 0x2A35C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35BCu;
            // 0x2a35c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A35C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A35C4u; }
            if (ctx->pc != 0x2A35C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A35C4u;
label_2a35c4:
    // 0x2a35c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a35c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a35c8:
    // 0x2a35c8: 0x3e00008  jr          $ra
label_2a35cc:
    if (ctx->pc == 0x2A35CCu) {
        ctx->pc = 0x2A35CCu;
            // 0x2a35cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A35D0u;
        goto label_2a35d0;
    }
    ctx->pc = 0x2A35C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A35CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35C8u;
            // 0x2a35cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A35D0u;
label_2a35d0:
    // 0x2a35d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a35d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a35d4:
    // 0x2a35d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a35d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a35d8:
    // 0x2a35d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a35d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2a35dc:
    // 0x2a35dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a35dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a35e0:
    // 0x2a35e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2a35e4:
    if (ctx->pc == 0x2A35E4u) {
        ctx->pc = 0x2A35E4u;
            // 0x2a35e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A35E8u;
        goto label_2a35e8;
    }
    ctx->pc = 0x2A35E0u;
    {
        const bool branch_taken_0x2a35e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35E0u;
            // 0x2a35e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35e0) {
            ctx->pc = 0x2A35F4u;
            goto label_2a35f4;
        }
    }
    ctx->pc = 0x2A35E8u;
label_2a35e8:
    // 0x2a35e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2a35ec:
    // 0x2a35ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a35f0:
    if (ctx->pc == 0x2A35F0u) {
        ctx->pc = 0x2A35F0u;
            // 0x2a35f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2A35F4u;
        goto label_2a35f4;
    }
    ctx->pc = 0x2A35ECu;
    {
        const bool branch_taken_0x2a35ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A35F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35ECu;
            // 0x2a35f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35ec) {
            ctx->pc = 0x2A35FCu;
            goto label_2a35fc;
        }
    }
    ctx->pc = 0x2A35F4u;
label_2a35f4:
    // 0x2a35f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a35f8:
    if (ctx->pc == 0x2A35F8u) {
        ctx->pc = 0x2A35F8u;
            // 0x2a35f8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->pc = 0x2A35FCu;
        goto label_2a35fc;
    }
    ctx->pc = 0x2A35F4u;
    {
        const bool branch_taken_0x2a35f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35F4u;
            // 0x2a35f8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35f4) {
            ctx->pc = 0x2A3608u;
            goto label_2a3608;
        }
    }
    ctx->pc = 0x2A35FCu;
label_2a35fc:
    // 0x2a35fc: 0x40f809  jalr        $v0
label_2a3600:
    if (ctx->pc == 0x2A3600u) {
        ctx->pc = 0x2A3600u;
            // 0x2a3600: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A3604u;
        goto label_2a3604;
    }
    ctx->pc = 0x2A35FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3604u);
        ctx->pc = 0x2A3600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35FCu;
            // 0x2a3600: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3604u; }
            if (ctx->pc != 0x2A3604u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3604u;
label_2a3604:
    // 0x2a3604: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3608:
    // 0x2a3608: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2a360c:
    if (ctx->pc == 0x2A360Cu) {
        ctx->pc = 0x2A360Cu;
            // 0x2a360c: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2A3610u;
        goto label_2a3610;
    }
    ctx->pc = 0x2A3608u;
    {
        const bool branch_taken_0x2a3608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A360Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3608u;
            // 0x2a360c: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3608) {
            ctx->pc = 0x2A3614u;
            goto label_2a3614;
        }
    }
    ctx->pc = 0x2A3610u;
label_2a3610:
    // 0x2a3610: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2a3610u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_2a3614:
    // 0x2a3614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3618:
    // 0x2a3618: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a3618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a361c:
    // 0x2a361c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a361cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3620:
    // 0x2a3620: 0x3e00008  jr          $ra
label_2a3624:
    if (ctx->pc == 0x2A3624u) {
        ctx->pc = 0x2A3624u;
            // 0x2a3624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A3628u;
        goto label_fallthrough_0x2a3620;
    }
    ctx->pc = 0x2A3620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3620u;
            // 0x2a3624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a3620:
    ctx->pc = 0x2A3628u;
    ctx->pc = 0x2a3628u;
}
