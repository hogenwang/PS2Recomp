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

// Function: sub_00231970
// Address: 0x231970 - 0x2319c8
void sub_00231970_0x231970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231970_0x231970");
#endif

    switch (ctx->pc) {
        case 0x231994u: goto label_231994;
        default: break;
    }

    ctx->pc = 0x231970u;

    // 0x231970: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x231974: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231978: 0xac44acc0  sw          $a0, -0x5340($v0)
    ctx->pc = 0x231978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945984), GPR_U32(ctx, 4));
    // 0x23197c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x23197cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x231980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231984: 0x24c64718  addiu       $a2, $a2, 0x4718
    ctx->pc = 0x231984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18200));
    // 0x231988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23198c: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x23198Cu;
    SET_GPR_U32(ctx, 31, 0x231994u);
    ctx->pc = 0x231990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23198Cu;
    // 0x231990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x23198Cu, 0x231994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231994u;
label_231994:
    // 0x231994: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x231994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x231998: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231998u;
    {
        const bool branch_taken_0x231998 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231998u;
        // 0x23199c: 0xac62fa20  sw          $v0, -0x5E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231998) {
            ctx->pc = 0x2319A8u;
            goto label_2319a8;
        }
    }
    ctx->pc = 0x2319A0u;
    // 0x2319a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2319A0u;
    {
        const bool branch_taken_0x2319a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2319A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319A0u;
        // 0x2319a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2319a0) {
            ctx->pc = 0x2319B8u;
            goto label_2319b8;
        }
    }
    ctx->pc = 0x2319A8u;
label_2319a8:
    // 0x2319a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2319a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2319ac: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2319acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2319b0: 0xac62acc4  sw          $v0, -0x533C($v1)
    ctx->pc = 0x2319b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945988), GPR_U32(ctx, 2));
    // 0x2319b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2319b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2319b8:
    // 0x2319b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2319b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2319bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2319BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2319C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319BCu;
        // 0x2319c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2319BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2319C4u;
    // 0x2319c4: 0x0  nop
    ctx->pc = 0x2319c4u;
    // NOP
}
