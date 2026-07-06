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

// Function: sub_0028C2B8
// Address: 0x28c2b8 - 0x28c318
void sub_0028C2B8_0x28c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C2B8_0x28c2b8");
#endif

    switch (ctx->pc) {
        case 0x28c2fcu: goto label_28c2fc;
        default: break;
    }

    ctx->pc = 0x28c2b8u;

    // 0x28c2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28c2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c2c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28c2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2c8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C2C8u;
    {
        const bool branch_taken_0x28c2c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C8u;
        // 0x28c2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2c8) {
            ctx->pc = 0x28C304u;
            goto label_28c304;
        }
    }
    ctx->pc = 0x28C2D0u;
    // 0x28c2d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28c2d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28C2D4u;
    {
        const bool branch_taken_0x28c2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2D4u;
        // 0x28c2d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2d4) {
            ctx->pc = 0x28C304u;
            goto label_28c304;
        }
    }
    ctx->pc = 0x28C2DCu;
    // 0x28c2dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28c2e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C2E0u;
    {
        const bool branch_taken_0x28c2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2E0u;
        // 0x28c2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2e0) {
            ctx->pc = 0x28C304u;
            goto label_28c304;
        }
    }
    ctx->pc = 0x28C2E8u;
    // 0x28c2e8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28c2ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C2ECu;
    {
        const bool branch_taken_0x28c2ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2ECu;
        // 0x28c2f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2ec) {
            ctx->pc = 0x28C308u;
            goto label_28c308;
        }
    }
    ctx->pc = 0x28C2F4u;
    // 0x28c2f4: 0xc0a32ca  jal         func_28CB28
    ctx->pc = 0x28C2F4u;
    SET_GPR_U32(ctx, 31, 0x28C2FCu);
    ctx->pc = 0x28CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB28u, 0x28C2F4u, 0x28C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2FCu;
label_28c2fc:
    // 0x28c2fc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x28c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x28c300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c304:
    // 0x28c304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28c304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28c308:
    // 0x28c308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c30c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C30Cu;
        // 0x28c310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C314u;
    // 0x28c314: 0x0  nop
    ctx->pc = 0x28c314u;
    // NOP
    if (ctx->pc == 0x28c314u) { ctx->pc = 0x28c318u; }
}
