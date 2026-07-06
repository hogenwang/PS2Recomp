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

// Function: sub_001DC6B8
// Address: 0x1dc6b8 - 0x1dc718
void sub_001DC6B8_0x1dc6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC6B8_0x1dc6b8");
#endif

    switch (ctx->pc) {
        case 0x1dc6ccu: goto label_1dc6cc;
        default: break;
    }

    ctx->pc = 0x1dc6b8u;

    // 0x1dc6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc6c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc6c4: 0xc074000  jal         func_1D0000
    ctx->pc = 0x1DC6C4u;
    SET_GPR_U32(ctx, 31, 0x1DC6CCu);
    ctx->pc = 0x1DC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6C4u;
    // 0x1dc6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0000u, 0x1DC6C4u, 0x1DC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC6CCu;
label_1dc6cc:
    // 0x1dc6cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC6CCu;
    {
        const bool branch_taken_0x1dc6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc6cc) {
            ctx->pc = 0x1DC6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC6CCu;
            // 0x1dc6d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC6F4u;
            goto label_1dc6f4;
        }
    }
    ctx->pc = 0x1DC6D4u;
    // 0x1dc6d4: 0x8e0203d0  lw          $v0, 0x3D0($s0)
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 976)));
    // 0x1dc6d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC6D8u;
    {
        const bool branch_taken_0x1dc6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6D8u;
        // 0x1dc6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc6d8) {
            ctx->pc = 0x1DC6F0u;
            goto label_1dc6f0;
        }
    }
    ctx->pc = 0x1DC6E0u;
    // 0x1dc6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc6e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc6e8: 0x80740d4  j           func_1D0350
    ctx->pc = 0x1DC6E8u;
    ctx->pc = 0x1DC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC6E8u;
    // 0x1dc6ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0350u, 0x1DC6E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC6F0u;
label_1dc6f0:
    // 0x1dc6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc6f4:
    // 0x1dc6f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6F8u;
        // 0x1dc6fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC700u;
    // 0x1dc700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc70c: 0x80771c6  j           func_1DC718
    ctx->pc = 0x1DC70Cu;
    ctx->pc = 0x1DC710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC70Cu;
    // 0x1dc710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    sub_001DC718_0x1dc718(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC714u;
    // 0x1dc714: 0x0  nop
    ctx->pc = 0x1dc714u;
    // NOP
}
