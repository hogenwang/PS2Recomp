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

// Function: sub_001E46B0
// Address: 0x1e46b0 - 0x1e4710
void sub_001E46B0_0x1e46b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E46B0_0x1e46b0");
#endif

    switch (ctx->pc) {
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46f4u: goto label_1e46f4;
        default: break;
    }

    ctx->pc = 0x1e46b0u;

    // 0x1e46b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e46b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e46b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e46b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e46b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e46bc: 0xc07917a  jal         func_1E45E8
    ctx->pc = 0x1E46BCu;
    SET_GPR_U32(ctx, 31, 0x1E46C4u);
    ctx->pc = 0x1E46C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46BCu;
    // 0x1e46c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E45E8u, 0x1E46BCu, 0x1E46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46C4u;
label_1e46c4:
    // 0x1e46c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e46c8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E46C8u;
    {
        const bool branch_taken_0x1e46c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e46c8) {
            ctx->pc = 0x1E46CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E46C8u;
            // 0x1e46cc: 0x8e030380  lw          $v1, 0x380($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E46D8u;
            goto label_1e46d8;
        }
    }
    ctx->pc = 0x1E46D0u;
    // 0x1e46d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E46D0u;
    {
        const bool branch_taken_0x1e46d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46D0u;
        // 0x1e46d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46d0) {
            ctx->pc = 0x1E4700u;
            goto label_1e4700;
        }
    }
    ctx->pc = 0x1E46D8u;
label_1e46d8:
    // 0x1e46d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e46d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e46dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E46DCu;
    {
        const bool branch_taken_0x1e46dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46DCu;
        // 0x1e46e0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46dc) {
            ctx->pc = 0x1E4700u;
            goto label_1e4700;
        }
    }
    ctx->pc = 0x1E46E4u;
    // 0x1e46e4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e46e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e46e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e46ec: 0xc07f992  jal         func_1FE648
    ctx->pc = 0x1E46ECu;
    SET_GPR_U32(ctx, 31, 0x1E46F4u);
    ctx->pc = 0x1E46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E46ECu;
    // 0x1e46f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE648u, 0x1E46ECu, 0x1E46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46F4u;
label_1e46f4:
    // 0x1e46f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e46f8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1e46f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1e46fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e46fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e4700:
    // 0x1e4700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4708: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4708u;
        // 0x1e470c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4710u;
}
