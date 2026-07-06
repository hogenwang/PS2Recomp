#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7510
// Address: 0x1f7510 - 0x1f7588
void sub_001F7510_0x1f7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7510_0x1f7510");
#endif

    switch (ctx->pc) {
        case 0x1f7538u: goto label_1f7538;
        case 0x1f7544u: goto label_1f7544;
        case 0x1f7554u: goto label_1f7554;
        default: break;
    }

    ctx->pc = 0x1f7510u;

    // 0x1f7510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7514: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f7514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f7518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f751c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f7520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7524: 0x2451174c  addiu       $s1, $v0, 0x174C
    ctx->pc = 0x1f7524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    // 0x1f7528: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f752c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f752cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7530: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f7530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7534: 0x0  nop
    ctx->pc = 0x1f7534u;
    // NOP
label_1f7538:
    // 0x1f7538: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f7538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1f753c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F753Cu;
    SET_GPR_U32(ctx, 31, 0x1F7544u);
    ctx->pc = 0x1F7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F753Cu;
            // 0x1f7540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7544u; }
        if (ctx->pc != 0x1F7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7544u; }
        if (ctx->pc != 0x1F7544u) { return; }
    }
    ctx->pc = 0x1F7544u;
label_1f7544:
    // 0x1f7544: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7544u;
    {
        const bool branch_taken_0x1f7544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7544u;
            // 0x1f7548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7544) {
            ctx->pc = 0x1F755Cu;
            goto label_1f755c;
        }
    }
    ctx->pc = 0x1F754Cu;
    // 0x1f754c: 0xc07dd3a  jal         func_1F74E8
    ctx->pc = 0x1F754Cu;
    SET_GPR_U32(ctx, 31, 0x1F7554u);
    ctx->pc = 0x1F74E8u;
    if (runtime->hasFunction(0x1F74E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F74E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7554u; }
        if (ctx->pc != 0x1F7554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F74E8_0x1f74e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7554u; }
        if (ctx->pc != 0x1F7554u) { return; }
    }
    ctx->pc = 0x1F7554u;
label_1f7554:
    // 0x1f7554: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7554u;
    {
        const bool branch_taken_0x1f7554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7554u;
            // 0x1f7558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7554) {
            ctx->pc = 0x1F7574u;
            goto label_1f7574;
        }
    }
    ctx->pc = 0x1F755Cu;
label_1f755c:
    // 0x1f755c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f755cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f7560: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1f7560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f7564: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F7564u;
    {
        const bool branch_taken_0x1f7564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7564) {
            ctx->pc = 0x1F7568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7564u;
            // 0x1f7568: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f7538;
        }
    }
    ctx->pc = 0x1F756Cu;
    // 0x1f756c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7574:
    // 0x1f7574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f7578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f757c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f757cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7580: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7580u;
            // 0x1f7584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7588u;
    ctx->pc = 0x1f7588u;
}
