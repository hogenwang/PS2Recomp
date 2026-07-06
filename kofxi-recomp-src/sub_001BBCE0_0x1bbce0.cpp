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

// Function: sub_001BBCE0
// Address: 0x1bbce0 - 0x1bbd18
void sub_001BBCE0_0x1bbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBCE0_0x1bbce0");
#endif

    switch (ctx->pc) {
        case 0x1bbcf4u: goto label_1bbcf4;
        case 0x1bbcfcu: goto label_1bbcfc;
        case 0x1bbd04u: goto label_1bbd04;
        default: break;
    }

    ctx->pc = 0x1bbce0u;

    // 0x1bbce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbcec: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBCECu;
    SET_GPR_U32(ctx, 31, 0x1BBCF4u);
    ctx->pc = 0x1BBCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCECu;
    // 0x1bbcf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BBCECu, 0x1BBCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCF4u;
label_1bbcf4:
    // 0x1bbcf4: 0xc06ef46  jal         func_1BBD18
    ctx->pc = 0x1BBCF4u;
    SET_GPR_U32(ctx, 31, 0x1BBCFCu);
    ctx->pc = 0x1BBCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCF4u;
    // 0x1bbcf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD18u, 0x1BBCF4u, 0x1BBCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCFCu;
label_1bbcfc:
    // 0x1bbcfc: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BBCFCu;
    SET_GPR_U32(ctx, 31, 0x1BBD04u);
    ctx->pc = 0x1BBD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCFCu;
    // 0x1bbd00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BBCFCu, 0x1BBD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD04u;
label_1bbd04:
    // 0x1bbd04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbd08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bbd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd10: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD10u;
        // 0x1bbd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBD18u;
}
