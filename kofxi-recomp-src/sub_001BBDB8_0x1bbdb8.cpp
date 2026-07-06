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

// Function: sub_001BBDB8
// Address: 0x1bbdb8 - 0x1bbe08
void sub_001BBDB8_0x1bbdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBDB8_0x1bbdb8");
#endif

    switch (ctx->pc) {
        case 0x1bbde4u: goto label_1bbde4;
        case 0x1bbdecu: goto label_1bbdec;
        case 0x1bbdf4u: goto label_1bbdf4;
        default: break;
    }

    ctx->pc = 0x1bbdb8u;

    // 0x1bbdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbdbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbdc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbdc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbdc8: 0x806d94c  j           func_1B6530
    ctx->pc = 0x1BBDC8u;
    ctx->pc = 0x1BBDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDC8u;
    // 0x1bbdcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6530u, 0x1BBDC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1BBDD0u;
    // 0x1bbdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbdd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbdd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbddc: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBDDCu;
    SET_GPR_U32(ctx, 31, 0x1BBDE4u);
    ctx->pc = 0x1BBDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDDCu;
    // 0x1bbde0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BBDDCu, 0x1BBDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDE4u;
label_1bbde4:
    // 0x1bbde4: 0xc06ef82  jal         func_1BBE08
    ctx->pc = 0x1BBDE4u;
    SET_GPR_U32(ctx, 31, 0x1BBDECu);
    ctx->pc = 0x1BBDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDE4u;
    // 0x1bbde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBE08u, 0x1BBDE4u, 0x1BBDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDECu;
label_1bbdec:
    // 0x1bbdec: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BBDECu;
    SET_GPR_U32(ctx, 31, 0x1BBDF4u);
    ctx->pc = 0x1BBDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDECu;
    // 0x1bbdf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BBDECu, 0x1BBDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDF4u;
label_1bbdf4:
    // 0x1bbdf4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbdf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bbdf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbe00: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE00u;
        // 0x1bbe04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBE08u;
}
