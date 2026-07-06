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

// Function: sub_002A1F90
// Address: 0x2a1f90 - 0x2a1ff8
void sub_002A1F90_0x2a1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1F90_0x2a1f90");
#endif

    switch (ctx->pc) {
        case 0x2a1fbcu: goto label_2a1fbc;
        case 0x2a1fd8u: goto label_2a1fd8;
        default: break;
    }

    ctx->pc = 0x2a1f90u;

    // 0x2a1f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a1f94: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a1f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a1f98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a1f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a1f9c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a1f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fa0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a1fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a1fa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a1fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1fac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fb0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a1fb4: 0xc0aa5e0  jal         func_2A9780
    ctx->pc = 0x2A1FB4u;
    SET_GPR_U32(ctx, 31, 0x2A1FBCu);
    ctx->pc = 0x2A1FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FB4u;
    // 0x2a1fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9780u, 0x2A1FB4u, 0x2A1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FBCu;
label_2a1fbc:
    // 0x2a1fbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a1fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fc0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a1fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2a1fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fc8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a1fc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1fd0: 0xc0a7190  jal         func_29C640
    ctx->pc = 0x2A1FD0u;
    SET_GPR_U32(ctx, 31, 0x2A1FD8u);
    ctx->pc = 0x2A1FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FD0u;
    // 0x2a1fd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C640u, 0x2A1FD0u, 0x2A1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FD8u;
label_2a1fd8:
    // 0x2a1fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1fdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a1fdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1fe0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a1fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1fe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a1fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1fec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FECu;
        // 0x2a1ff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1FF4u;
    // 0x2a1ff4: 0x0  nop
    ctx->pc = 0x2a1ff4u;
    // NOP
}
