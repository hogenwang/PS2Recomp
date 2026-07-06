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

// Function: sub_001F81A0
// Address: 0x1f81a0 - 0x1f8220
void sub_001F81A0_0x1f81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F81A0_0x1f81a0");
#endif

    switch (ctx->pc) {
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81c4u: goto label_1f81c4;
        case 0x1f81d4u: goto label_1f81d4;
        case 0x1f81e4u: goto label_1f81e4;
        default: break;
    }

    ctx->pc = 0x1f81a0u;

    // 0x1f81a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f81a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f81a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f81a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f81a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f81a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f81ac: 0xc07e088  jal         func_1F8220
    ctx->pc = 0x1F81ACu;
    SET_GPR_U32(ctx, 31, 0x1F81B4u);
    ctx->pc = 0x1F81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81ACu;
    // 0x1f81b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8220u, 0x1F81ACu, 0x1F81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81B4u;
label_1f81b4:
    // 0x1f81b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F81B4u;
    {
        const bool branch_taken_0x1f81b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B4u;
        // 0x1f81b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81b4) {
            ctx->pc = 0x1F81F8u;
            goto label_1f81f8;
        }
    }
    ctx->pc = 0x1F81BCu;
    // 0x1f81bc: 0xc07e0a4  jal         func_1F8290
    ctx->pc = 0x1F81BCu;
    SET_GPR_U32(ctx, 31, 0x1F81C4u);
    ctx->pc = 0x1F8290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8290u, 0x1F81BCu, 0x1F81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C4u;
label_1f81c4:
    // 0x1f81c4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F81C4u;
    {
        const bool branch_taken_0x1f81c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81C4u;
        // 0x1f81c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81c4) {
            ctx->pc = 0x1F81F8u;
            goto label_1f81f8;
        }
    }
    ctx->pc = 0x1F81CCu;
    // 0x1f81cc: 0xc07e0d2  jal         func_1F8348
    ctx->pc = 0x1F81CCu;
    SET_GPR_U32(ctx, 31, 0x1F81D4u);
    ctx->pc = 0x1F8348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8348u, 0x1F81CCu, 0x1F81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81D4u;
label_1f81d4:
    // 0x1f81d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F81D4u;
    {
        const bool branch_taken_0x1f81d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D4u;
        // 0x1f81d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81d4) {
            ctx->pc = 0x1F81F8u;
            goto label_1f81f8;
        }
    }
    ctx->pc = 0x1F81DCu;
    // 0x1f81dc: 0xc07e0e8  jal         func_1F83A0
    ctx->pc = 0x1F81DCu;
    SET_GPR_U32(ctx, 31, 0x1F81E4u);
    ctx->pc = 0x1F83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83A0u, 0x1F81DCu, 0x1F81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81E4u;
label_1f81e4:
    // 0x1f81e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F81E4u;
    {
        const bool branch_taken_0x1f81e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81E4u;
        // 0x1f81e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81e4) {
            ctx->pc = 0x1F81FCu;
            goto label_1f81fc;
        }
    }
    ctx->pc = 0x1F81ECu;
    // 0x1f81ec: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1f81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f81f0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F81F0u;
    {
        const bool branch_taken_0x1f81f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f81f0) {
            ctx->pc = 0x1F81F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F81F0u;
            // 0x1f81f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8210u;
            goto label_1f8210;
        }
    }
    ctx->pc = 0x1F81F8u;
label_1f81f8:
    // 0x1f81f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f81f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f81fc:
    // 0x1f81fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f81fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8200: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8204: 0x807e130  j           func_1F84C0
    ctx->pc = 0x1F8204u;
    ctx->pc = 0x1F8208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8204u;
    // 0x1f8208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C0u, 0x1F8204u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1F820Cu;
    // 0x1f820c: 0x0  nop
    ctx->pc = 0x1f820cu;
    // NOP
label_1f8210:
    // 0x1f8210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8214: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8214u;
        // 0x1f8218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F821Cu;
    // 0x1f821c: 0x0  nop
    ctx->pc = 0x1f821cu;
    // NOP
}
