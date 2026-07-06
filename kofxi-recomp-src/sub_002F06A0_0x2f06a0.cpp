#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F06A0
// Address: 0x2f06a0 - 0x2f0728
void sub_002F06A0_0x2f06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06A0_0x2f06a0");
#endif

    switch (ctx->pc) {
        case 0x2f06ecu: goto label_2f06ec;
        case 0x2f0704u: goto label_2f0704;
        case 0x2f0708u: goto label_2f0708;
        case 0x2f0720u: goto label_2f0720;
        default: break;
    }

    ctx->pc = 0x2f06a0u;

    // 0x2f06a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f06a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f06a4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2f06a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f06ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2f06acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f06b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f06b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f06b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f06b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f06bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f06c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f06c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f06c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06c8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2f06c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f06cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f06ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F06D0u;
    {
        const bool branch_taken_0x2f06d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F06D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06D0u;
            // 0x2f06d4: 0x24050cd6  addiu       $a1, $zero, 0xCD6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f06d0) {
            ctx->pc = 0x2F0720u;
            goto label_2f0720;
        }
    }
    ctx->pc = 0x2F06D8u;
    // 0x2f06d8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f06d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f06dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f06e0: 0x24e71620  addiu       $a3, $a3, 0x1620
    ctx->pc = 0x2f06e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5664));
    // 0x2f06e4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F06E4u;
    SET_GPR_U32(ctx, 31, 0x2F06ECu);
    ctx->pc = 0x2F06E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06E4u;
            // 0x2f06e8: 0x24841640  addiu       $a0, $a0, 0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F06ECu; }
        if (ctx->pc != 0x2F06ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F06ECu; }
        if (ctx->pc != 0x2F06ECu) { return; }
    }
    ctx->pc = 0x2F06ECu;
label_2f06ec:
    // 0x2f06ec: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x2f06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x2f06f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f06f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06f4: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2f06f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2f06f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f06f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f06fc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2F06FCu;
    SET_GPR_U32(ctx, 31, 0x2F0704u);
    ctx->pc = 0x2F0700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F06FCu;
            // 0x2f0700: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0704u; }
        if (ctx->pc != 0x2F0704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0704u; }
        if (ctx->pc != 0x2F0704u) { return; }
    }
    ctx->pc = 0x2F0704u;
label_2f0704:
    // 0x2f0704: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f0704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0708:
    // 0x2f0708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f070c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f070cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0714: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f0714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0718: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0718u;
            // 0x2f071c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0720u;
label_2f0720:
    // 0x2f0720: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F0720u;
    {
        const bool branch_taken_0x2f0720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0720u;
            // 0x2f0724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0720) {
            ctx->pc = 0x2F0708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0708;
        }
    }
    ctx->pc = 0x2F0728u;
    ctx->pc = 0x2f0728u;
}
