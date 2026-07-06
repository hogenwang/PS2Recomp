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

// Function: sub_001DE5A8
// Address: 0x1de5a8 - 0x1de5f8
void sub_001DE5A8_0x1de5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE5A8_0x1de5a8");
#endif

    switch (ctx->pc) {
        case 0x1de5bcu: goto label_1de5bc;
        default: break;
    }

    ctx->pc = 0x1de5a8u;

    // 0x1de5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de5b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de5b4: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1DE5B4u;
    SET_GPR_U32(ctx, 31, 0x1DE5BCu);
    ctx->pc = 0x1DE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5B4u;
    // 0x1de5b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1DE5B4u, 0x1DE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5BCu;
label_1de5bc:
    // 0x1de5bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5c0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1de5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1de5c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1de5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de5c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE5C8u;
    {
        const bool branch_taken_0x1de5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5C8u;
        // 0x1de5cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5c8) {
            ctx->pc = 0x1DE5E4u;
            goto label_1de5e4;
        }
    }
    ctx->pc = 0x1DE5D0u;
    // 0x1de5d0: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1de5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1de5d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1de5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5d8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1de5dc: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x1de5dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1de5e0: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x1de5e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_1de5e4:
    // 0x1de5e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de5e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1de5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE5F8u;
}
