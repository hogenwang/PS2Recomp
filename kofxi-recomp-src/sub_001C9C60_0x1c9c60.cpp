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

// Function: sub_001C9C60
// Address: 0x1c9c60 - 0x1c9cf8
void sub_001C9C60_0x1c9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9C60_0x1c9c60");
#endif

    switch (ctx->pc) {
        case 0x1c9cc0u: goto label_1c9cc0;
        case 0x1c9cd0u: goto label_1c9cd0;
        default: break;
    }

    ctx->pc = 0x1c9c60u;

    // 0x1c9c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9c64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9c68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c9c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c9c6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c9c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9c7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c9c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c9c80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c9c84: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1c9c88: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9C88u;
    {
        const bool branch_taken_0x1c9c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1C9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C88u;
        // 0x1c9c8c: 0x82440052  lb          $a0, 0x52($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c88) {
            ctx->pc = 0x1C9CA0u;
            goto label_1c9ca0;
        }
    }
    ctx->pc = 0x1C9C90u;
    // 0x1c9c90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9c94: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
    // 0x1c9c98: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C9C98u;
    {
        const bool branch_taken_0x1c9c98 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C98u;
        // 0x1c9c9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c98) {
            ctx->pc = 0x1C9CE0u;
            goto label_1c9ce0;
        }
    }
    ctx->pc = 0x1C9CA0u;
label_1c9ca0:
    // 0x1c9ca0: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9CA0u;
    {
        const bool branch_taken_0x1c9ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CA0u;
        // 0x1c9ca4: 0xa2450058  sb          $a1, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ca0) {
            ctx->pc = 0x1C9CDCu;
            goto label_1c9cdc;
        }
    }
    ctx->pc = 0x1C9CA8u;
    // 0x1c9ca8: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9CA8u;
    {
        const bool branch_taken_0x1c9ca8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1C9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CA8u;
        // 0x1c9cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ca8) {
            ctx->pc = 0x1C9CE0u;
            goto label_1c9ce0;
        }
    }
    ctx->pc = 0x1C9CB0u;
    // 0x1c9cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9cb4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c9cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9cb8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c9cbc: 0x0  nop
    ctx->pc = 0x1c9cbcu;
    // NOP
label_1c9cc0:
    // 0x1c9cc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9cc4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1c9cc8: 0xc070754  jal         func_1C1D50
    ctx->pc = 0x1C9CC8u;
    SET_GPR_U32(ctx, 31, 0x1C9CD0u);
    ctx->pc = 0x1C9CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CC8u;
    // 0x1c9ccc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1D50u, 0x1C9CC8u, 0x1C9CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CD0u;
label_1c9cd0:
    // 0x1c9cd0: 0xa2530059  sb          $s3, 0x59($s2)
    ctx->pc = 0x1c9cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 19));
    // 0x1c9cd4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9CD4u;
    {
        const bool branch_taken_0x1c9cd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CD4u;
        // 0x1c9cd8: 0xa2400058  sb          $zero, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9cd4) {
            ctx->pc = 0x1C9CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9cc0;
        }
    }
    ctx->pc = 0x1C9CDCu;
label_1c9cdc:
    // 0x1c9cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9ce0:
    // 0x1c9ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9ce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c9ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9ce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c9ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9cec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9CF0u;
        // 0x1c9cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9CF8u;
}
