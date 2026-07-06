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

// Function: sub_001EC300
// Address: 0x1ec300 - 0x1ec368
void sub_001EC300_0x1ec300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC300_0x1ec300");
#endif

    switch (ctx->pc) {
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec330u: goto label_1ec330;
        default: break;
    }

    ctx->pc = 0x1ec300u;

    // 0x1ec300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec308: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ec308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec30c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1ec30cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ec310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec318: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ec318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec31c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ec31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ec320: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC320u;
    {
        const bool branch_taken_0x1ec320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC320u;
        // 0x1ec324: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec320) {
            ctx->pc = 0x1EC34Cu;
            goto label_1ec34c;
        }
    }
    ctx->pc = 0x1EC328u;
label_1ec328:
    // 0x1ec328: 0xc076086  jal         func_1D8218
    ctx->pc = 0x1EC328u;
    SET_GPR_U32(ctx, 31, 0x1EC330u);
    ctx->pc = 0x1EC32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC328u;
    // 0x1ec32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8218u, 0x1EC328u, 0x1EC330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC330u;
label_1ec330:
    // 0x1ec330: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC330u;
    {
        const bool branch_taken_0x1ec330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1EC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC330u;
        // 0x1ec334: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec330) {
            ctx->pc = 0x1EC340u;
            goto label_1ec340;
        }
    }
    ctx->pc = 0x1EC338u;
    // 0x1ec338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC338u;
    {
        const bool branch_taken_0x1ec338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC338u;
        // 0x1ec33c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec338) {
            ctx->pc = 0x1EC350u;
            goto label_1ec350;
        }
    }
    ctx->pc = 0x1EC340u;
label_1ec340:
    // 0x1ec340: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1ec340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ec344: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EC344u;
    {
        const bool branch_taken_0x1ec344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC344u;
        // 0x1ec348: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec344) {
            ctx->pc = 0x1EC328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec328;
        }
    }
    ctx->pc = 0x1EC34Cu;
label_1ec34c:
    // 0x1ec34c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec350:
    // 0x1ec350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec35c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ec35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec360: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC360u;
        // 0x1ec364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC368u;
}
