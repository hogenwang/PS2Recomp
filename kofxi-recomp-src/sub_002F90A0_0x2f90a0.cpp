#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F90A0
// Address: 0x2f90a0 - 0x2f9140
void sub_002F90A0_0x2f90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F90A0_0x2f90a0");
#endif

    switch (ctx->pc) {
        case 0x2f90a0u: goto label_2f90a0;
        case 0x2f90a4u: goto label_2f90a4;
        case 0x2f90a8u: goto label_2f90a8;
        case 0x2f90acu: goto label_2f90ac;
        case 0x2f90b0u: goto label_2f90b0;
        case 0x2f90b4u: goto label_2f90b4;
        case 0x2f90b8u: goto label_2f90b8;
        case 0x2f90bcu: goto label_2f90bc;
        case 0x2f90c0u: goto label_2f90c0;
        case 0x2f90c4u: goto label_2f90c4;
        case 0x2f90c8u: goto label_2f90c8;
        case 0x2f90ccu: goto label_2f90cc;
        case 0x2f90d0u: goto label_2f90d0;
        case 0x2f90d4u: goto label_2f90d4;
        case 0x2f90d8u: goto label_2f90d8;
        case 0x2f90dcu: goto label_2f90dc;
        case 0x2f90e0u: goto label_2f90e0;
        case 0x2f90e4u: goto label_2f90e4;
        case 0x2f90e8u: goto label_2f90e8;
        case 0x2f90ecu: goto label_2f90ec;
        case 0x2f90f0u: goto label_2f90f0;
        case 0x2f90f4u: goto label_2f90f4;
        case 0x2f90f8u: goto label_2f90f8;
        case 0x2f90fcu: goto label_2f90fc;
        case 0x2f9100u: goto label_2f9100;
        case 0x2f9104u: goto label_2f9104;
        case 0x2f9108u: goto label_2f9108;
        case 0x2f910cu: goto label_2f910c;
        case 0x2f9110u: goto label_2f9110;
        case 0x2f9114u: goto label_2f9114;
        case 0x2f9118u: goto label_2f9118;
        case 0x2f911cu: goto label_2f911c;
        case 0x2f9120u: goto label_2f9120;
        case 0x2f9124u: goto label_2f9124;
        case 0x2f9128u: goto label_2f9128;
        case 0x2f912cu: goto label_2f912c;
        case 0x2f9130u: goto label_2f9130;
        case 0x2f9134u: goto label_2f9134;
        case 0x2f9138u: goto label_2f9138;
        case 0x2f913cu: goto label_2f913c;
        default: break;
    }

    ctx->pc = 0x2f90a0u;

label_2f90a0:
    // 0x2f90a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f90a4:
    // 0x2f90a4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x2f90a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_2f90a8:
    // 0x2f90a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2f90ac:
    // 0x2f90ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f90acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2f90b0:
    // 0x2f90b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f90b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f90b4:
    // 0x2f90b4: 0xa48818  mult        $s1, $a1, $a0
    ctx->pc = 0x2f90b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2f90b8:
    // 0x2f90b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2f90b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f90bc:
    // 0x2f90bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f90c0:
    if (ctx->pc == 0x2F90C0u) {
        ctx->pc = 0x2F90C0u;
            // 0x2f90c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2F90C4u;
        goto label_2f90c4;
    }
    ctx->pc = 0x2F90BCu;
    {
        const bool branch_taken_0x2f90bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90BCu;
            // 0x2f90c0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90bc) {
            ctx->pc = 0x2F90E4u;
            goto label_2f90e4;
        }
    }
    ctx->pc = 0x2F90C4u;
label_2f90c4:
    // 0x2f90c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_2f90c8:
    if (ctx->pc == 0x2F90C8u) {
        ctx->pc = 0x2F90C8u;
            // 0x2f90c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F90CCu;
        goto label_2f90cc;
    }
    ctx->pc = 0x2F90C4u;
    {
        const bool branch_taken_0x2f90c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90C4u;
            // 0x2f90c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90c4) {
            ctx->pc = 0x2F912Cu;
            goto label_2f912c;
        }
    }
    ctx->pc = 0x2F90CCu;
label_2f90cc:
    // 0x2f90cc: 0x224001b  divu        $zero, $s1, $a0
    ctx->pc = 0x2f90ccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_2f90d0:
    // 0x2f90d0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2f90d4:
    if (ctx->pc == 0x2F90D4u) {
        ctx->pc = 0x2F90D4u;
            // 0x2f90d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2F90D8u;
        goto label_2f90d8;
    }
    ctx->pc = 0x2F90D0u;
    {
        const bool branch_taken_0x2f90d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f90d0) {
            ctx->pc = 0x2F90D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90D0u;
            // 0x2f90d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F90D8u;
            goto label_2f90d8;
        }
    }
    ctx->pc = 0x2F90D8u;
label_2f90d8:
    // 0x2f90d8: 0x1012  mflo        $v0
    ctx->pc = 0x2f90d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2f90dc:
    // 0x2f90dc: 0x14450013  bne         $v0, $a1, . + 4 + (0x13 << 2)
label_2f90e0:
    if (ctx->pc == 0x2F90E0u) {
        ctx->pc = 0x2F90E0u;
            // 0x2f90e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F90E4u;
        goto label_2f90e4;
    }
    ctx->pc = 0x2F90DCu;
    {
        const bool branch_taken_0x2f90dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F90E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90DCu;
            // 0x2f90e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90dc) {
            ctx->pc = 0x2F912Cu;
            goto label_2f912c;
        }
    }
    ctx->pc = 0x2F90E4u;
label_2f90e4:
    // 0x2f90e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2f90e8:
    // 0x2f90e8: 0x8c42065c  lw          $v0, 0x65C($v0)
    ctx->pc = 0x2f90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
label_2f90ec:
    // 0x2f90ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f90f0:
    if (ctx->pc == 0x2F90F0u) {
        ctx->pc = 0x2F90F4u;
        goto label_2f90f4;
    }
    ctx->pc = 0x2F90ECu;
    {
        const bool branch_taken_0x2f90ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f90ec) {
            ctx->pc = 0x2F911Cu;
            goto label_2f911c;
        }
    }
    ctx->pc = 0x2F90F4u;
label_2f90f4:
    // 0x2f90f4: 0x40f809  jalr        $v0
label_2f90f8:
    if (ctx->pc == 0x2F90F8u) {
        ctx->pc = 0x2F90F8u;
            // 0x2f90f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F90FCu;
        goto label_2f90fc;
    }
    ctx->pc = 0x2F90F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F90FCu);
        ctx->pc = 0x2F90F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90F4u;
            // 0x2f90f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F90FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F90FCu; }
            if (ctx->pc != 0x2F90FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F90FCu;
label_2f90fc:
    // 0x2f90fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f90fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9100:
    // 0x2f9100: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2f9104:
    if (ctx->pc == 0x2F9104u) {
        ctx->pc = 0x2F9104u;
            // 0x2f9104: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9108u;
        goto label_2f9108;
    }
    ctx->pc = 0x2F9100u;
    {
        const bool branch_taken_0x2f9100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9100u;
            // 0x2f9104: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9100) {
            ctx->pc = 0x2F9128u;
            goto label_2f9128;
        }
    }
    ctx->pc = 0x2F9108u;
label_2f9108:
    // 0x2f9108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f910c:
    // 0x2f910c: 0xc049cb6  jal         func_1272D8
label_2f9110:
    if (ctx->pc == 0x2F9110u) {
        ctx->pc = 0x2F9110u;
            // 0x2f9110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9114u;
        goto label_2f9114;
    }
    ctx->pc = 0x2F910Cu;
    SET_GPR_U32(ctx, 31, 0x2F9114u);
    ctx->pc = 0x2F9110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F910Cu;
            // 0x2f9110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9114u; }
        if (ctx->pc != 0x2F9114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9114u; }
        if (ctx->pc != 0x2F9114u) { return; }
    }
    ctx->pc = 0x2F9114u;
label_2f9114:
    // 0x2f9114: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f9118:
    if (ctx->pc == 0x2F9118u) {
        ctx->pc = 0x2F9118u;
            // 0x2f9118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F911Cu;
        goto label_2f911c;
    }
    ctx->pc = 0x2F9114u;
    {
        const bool branch_taken_0x2f9114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9114u;
            // 0x2f9118: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9114) {
            ctx->pc = 0x2F912Cu;
            goto label_2f912c;
        }
    }
    ctx->pc = 0x2F911Cu;
label_2f911c:
    // 0x2f911c: 0xc048ca4  jal         func_123290
label_2f9120:
    if (ctx->pc == 0x2F9120u) {
        ctx->pc = 0x2F9124u;
        goto label_2f9124;
    }
    ctx->pc = 0x2F911Cu;
    SET_GPR_U32(ctx, 31, 0x2F9124u);
    ctx->pc = 0x123290u;
    if (runtime->hasFunction(0x123290u)) {
        auto targetFn = runtime->lookupFunction(0x123290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9124u; }
        if (ctx->pc != 0x2F9124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123290_0x123290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9124u; }
        if (ctx->pc != 0x2F9124u) { return; }
    }
    ctx->pc = 0x2F9124u;
label_2f9124:
    // 0x2f9124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f9124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9128:
    // 0x2f9128: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f9128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f912c:
    // 0x2f912c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f912cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f9130:
    // 0x2f9130: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f9130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9134:
    // 0x2f9134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9138:
    // 0x2f9138: 0x3e00008  jr          $ra
label_2f913c:
    if (ctx->pc == 0x2F913Cu) {
        ctx->pc = 0x2F913Cu;
            // 0x2f913c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2F9140u;
        goto label_fallthrough_0x2f9138;
    }
    ctx->pc = 0x2F9138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F913Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9138u;
            // 0x2f913c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f9138:
    ctx->pc = 0x2F9140u;
    ctx->pc = 0x2f9140u;
}
