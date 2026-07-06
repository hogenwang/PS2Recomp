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

// Function: sub_0030C3F0
// Address: 0x30c3f0 - 0x30c490
void sub_0030C3F0_0x30c3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C3F0_0x30c3f0");
#endif

    switch (ctx->pc) {
        case 0x30c430u: goto label_30c430;
        case 0x30c43cu: goto label_30c43c;
        case 0x30c44cu: goto label_30c44c;
        case 0x30c45cu: goto label_30c45c;
        default: break;
    }

    ctx->pc = 0x30c3f0u;

    // 0x30c3f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30c3f4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x30c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c3f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x30c3fc: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x30c3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x30c400: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30c400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30c404: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30c404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30c408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c40c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c418: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c41c: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x30c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x30c420: 0x509823  subu        $s3, $v0, $s0
    ctx->pc = 0x30c420u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30c424: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x30c424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x30c428: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C428u;
    SET_GPR_U32(ctx, 31, 0x30C430u);
    ctx->pc = 0x30C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C428u;
    // 0x30c42c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x30C428u, 0x30C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C430u;
label_30c430:
    // 0x30c430: 0x3c1201d1  lui         $s2, 0x1D1
    ctx->pc = 0x30c430u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)465 << 16));
    // 0x30c434: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30c434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c438: 0x26521e00  addiu       $s2, $s2, 0x1E00
    ctx->pc = 0x30c438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7680));
label_30c43c:
    // 0x30c43c: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x30c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x30c440: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30c440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c444: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C444u;
    SET_GPR_U32(ctx, 31, 0x30C44Cu);
    ctx->pc = 0x30C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C444u;
    // 0x30c448: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x30C444u, 0x30C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C44Cu;
label_30c44c:
    // 0x30c44c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x30c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x30c450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30c450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c454: 0xc049c48  jal         func_127120
    ctx->pc = 0x30C454u;
    SET_GPR_U32(ctx, 31, 0x30C45Cu);
    ctx->pc = 0x30C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C454u;
    // 0x30c458: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x30C454u, 0x30C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C45Cu;
label_30c45c:
    // 0x30c45c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30c45cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30c460: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x30c460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x30c464: 0x2a830100  slti        $v1, $s4, 0x100
    ctx->pc = 0x30c464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30c468: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x30C468u;
    {
        const bool branch_taken_0x30c468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C468u;
        // 0x30c46c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c468) {
            ctx->pc = 0x30C43Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c43c;
        }
    }
    ctx->pc = 0x30C470u;
    // 0x30c470: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30c470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c474: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30c474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30c478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c47c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c47cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c488: 0x3e00008  jr          $ra
    ctx->pc = 0x30C488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C488u;
        // 0x30c48c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C490u;
}
