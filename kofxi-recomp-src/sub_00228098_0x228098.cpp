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

// Function: sub_00228098
// Address: 0x228098 - 0x228110
void sub_00228098_0x228098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228098_0x228098");
#endif

    switch (ctx->pc) {
        case 0x2280b0u: goto label_2280b0;
        case 0x2280e8u: goto label_2280e8;
        default: break;
    }

    ctx->pc = 0x228098u;

    // 0x228098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22809c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2280a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2280a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2280a4: 0x2442f588  addiu       $v0, $v0, -0xA78
    ctx->pc = 0x2280a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964616));
    // 0x2280a8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2280a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2280ac: 0x0  nop
    ctx->pc = 0x2280acu;
    // NOP
label_2280b0:
    // 0x2280b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2280b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2280b4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x2280b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x2280b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2280b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2280bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2280bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2280c0: 0x0  nop
    ctx->pc = 0x2280c0u;
    // NOP
    // 0x2280c4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2280C4u;
    {
        const bool branch_taken_0x2280c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2280c4) {
            ctx->pc = 0x2280B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2280b0;
        }
    }
    ctx->pc = 0x2280CCu;
    // 0x2280cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2280ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2280d0: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2280d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2280d4: 0xac40f988  sw          $zero, -0x678($v0)
    ctx->pc = 0x2280d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965640), GPR_U32(ctx, 0));
    // 0x2280d8: 0x24c64300  addiu       $a2, $a2, 0x4300
    ctx->pc = 0x2280d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17152));
    // 0x2280dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2280dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2280e0: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x2280E0u;
    SET_GPR_U32(ctx, 31, 0x2280E8u);
    ctx->pc = 0x2280E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280E0u;
    // 0x2280e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x2280E0u, 0x2280E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280E8u;
label_2280e8:
    // 0x2280e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2280e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2280ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2280ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2280f0: 0x82282a  slt         $a1, $a0, $v0
    ctx->pc = 0x2280f0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2280f4: 0xac62f580  sw          $v0, -0xA80($v1)
    ctx->pc = 0x2280f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964608), GPR_U32(ctx, 2));
    // 0x2280f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2280f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2280fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2280fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228100: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x228100u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x228104: 0x3e00008  jr          $ra
    ctx->pc = 0x228104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228104u;
        // 0x228108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22810Cu;
    // 0x22810c: 0x0  nop
    ctx->pc = 0x22810cu;
    // NOP
    if (ctx->pc == 0x22810cu) { ctx->pc = 0x228110u; }
}
