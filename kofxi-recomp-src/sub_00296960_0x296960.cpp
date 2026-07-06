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

// Function: sub_00296960
// Address: 0x296960 - 0x296990
void sub_00296960_0x296960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296960_0x296960");
#endif

    switch (ctx->pc) {
        case 0x296984u: goto label_296984;
        default: break;
    }

    ctx->pc = 0x296960u;

    // 0x296960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296964: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x296964u;
    {
        const bool branch_taken_0x296964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x296968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296964u;
        // 0x296968: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296964) {
            ctx->pc = 0x29697Cu;
            goto label_29697c;
        }
    }
    ctx->pc = 0x29696Cu;
    // 0x29696c: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x29696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x296970: 0x80434830  lb          $v1, 0x4830($v0)
    ctx->pc = 0x296970u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 18480)));
    // 0x296974: 0x24464830  addiu       $a2, $v0, 0x4830
    ctx->pc = 0x296974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18480));
    // 0x296978: 0x3300a  movz        $a2, $zero, $v1
    ctx->pc = 0x296978u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_29697c:
    // 0x29697c: 0xc0a459c  jal         func_291670
    ctx->pc = 0x29697Cu;
    SET_GPR_U32(ctx, 31, 0x296984u);
    ctx->pc = 0x291670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291670u, 0x29697Cu, 0x296984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296984u;
label_296984:
    // 0x296984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296988: 0x3e00008  jr          $ra
    ctx->pc = 0x296988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296988u;
        // 0x29698c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296990u;
}
