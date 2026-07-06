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

// Function: sub_0022D8C0
// Address: 0x22d8c0 - 0x22d930
void sub_0022D8C0_0x22d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D8C0_0x22d8c0");
#endif

    switch (ctx->pc) {
        case 0x22d8d8u: goto label_22d8d8;
        case 0x22d908u: goto label_22d908;
        default: break;
    }

    ctx->pc = 0x22d8c0u;

    // 0x22d8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d8c4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x22d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x22d8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d8cc: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x22d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x22d8d0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x22d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x22d8d4: 0x0  nop
    ctx->pc = 0x22d8d4u;
    // NOP
label_22d8d8:
    // 0x22d8d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22d8dc: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x22d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x22d8e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x22d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22d8e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22d8e8: 0x0  nop
    ctx->pc = 0x22d8e8u;
    // NOP
    // 0x22d8ec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22D8ECu;
    {
        const bool branch_taken_0x22d8ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22d8ec) {
            ctx->pc = 0x22D8D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22d8d8;
        }
    }
    ctx->pc = 0x22D8F4u;
    // 0x22d8f4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x22d8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x22d8f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d8fc: 0x24c64640  addiu       $a2, $a2, 0x4640
    ctx->pc = 0x22d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17984));
    // 0x22d900: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x22D900u;
    SET_GPR_U32(ctx, 31, 0x22D908u);
    ctx->pc = 0x22D904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D900u;
    // 0x22d904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x22D900u, 0x22D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D908u;
label_22d908:
    // 0x22d908: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22d908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22d90c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x22d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x22d910: 0x82282a  slt         $a1, $a0, $v0
    ctx->pc = 0x22d910u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22d914: 0xac62fa00  sw          $v0, -0x600($v1)
    ctx->pc = 0x22d914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965760), GPR_U32(ctx, 2));
    // 0x22d918: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22d918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d920: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x22d920u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x22d924: 0x3e00008  jr          $ra
    ctx->pc = 0x22D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D924u;
        // 0x22d928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D92Cu;
    // 0x22d92c: 0x0  nop
    ctx->pc = 0x22d92cu;
    // NOP
}
