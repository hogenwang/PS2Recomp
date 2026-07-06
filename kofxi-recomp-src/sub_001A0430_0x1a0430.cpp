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

// Function: sub_001A0430
// Address: 0x1a0430 - 0x1a04b0
void sub_001A0430_0x1a0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0430_0x1a0430");
#endif

    switch (ctx->pc) {
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0478u: goto label_1a0478;
        default: break;
    }

    ctx->pc = 0x1a0430u;

    // 0x1a0430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0438: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a043c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0440: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a0440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0444: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0448: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x1a0448u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x1a044c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0450: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x1a0450u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x1a0454: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x1a0454u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x1a0458: 0x2652dac0  addiu       $s2, $s2, -0x2540
    ctx->pc = 0x1a0458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957760));
    // 0x1a045c: 0x2631dab8  addiu       $s1, $s1, -0x2548
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957752));
    // 0x1a0460: 0x2610da90  addiu       $s0, $s0, -0x2570
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957712));
label_1a0464:
    // 0x1a0464: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0468: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1a0468u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a046c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1a046cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0470: 0xc068100  jal         func_1A0400
    ctx->pc = 0x1A0470u;
    SET_GPR_U32(ctx, 31, 0x1A0478u);
    ctx->pc = 0x1A0474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0470u;
    // 0x1a0474: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0400u, 0x1A0470u, 0x1A0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0478u;
label_1a0478:
    // 0x1a0478: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a0478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a047c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a047cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a0480: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x1a0480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a0484: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a0488: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A0488u;
    {
        const bool branch_taken_0x1a0488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0488u;
        // 0x1a048c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0488) {
            ctx->pc = 0x1A0464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0464;
        }
    }
    ctx->pc = 0x1A0490u;
    // 0x1a0490: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0494: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a049c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a049cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a04a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a04a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a04a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A04A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04A4u;
        // 0x1a04a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A04A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A04ACu;
    // 0x1a04ac: 0x0  nop
    ctx->pc = 0x1a04acu;
    // NOP
}
