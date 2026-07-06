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

// Function: sub_00350DC0
// Address: 0x350dc0 - 0x350e10
void sub_00350DC0_0x350dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350DC0_0x350dc0");
#endif

    switch (ctx->pc) {
        case 0x350df8u: goto label_350df8;
        default: break;
    }

    ctx->pc = 0x350dc0u;

    // 0x350dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350dc4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x350dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350dcc: 0x94644310  lhu         $a0, 0x4310($v1)
    ctx->pc = 0x350dccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 17168)));
    // 0x350dd0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x350dd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x350dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x350dd8: 0xa4644310  sh          $a0, 0x4310($v1)
    ctx->pc = 0x350dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17168), (uint16_t)GPR_U32(ctx, 4));
    // 0x350ddc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x350ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x350de0: 0x28630708  slti        $v1, $v1, 0x708
    ctx->pc = 0x350de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1800) ? 1 : 0);
    // 0x350de4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x350DE4u;
    {
        const bool branch_taken_0x350de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350de4) {
            ctx->pc = 0x350DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350DE4u;
            // 0x350de8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350DFCu;
            goto label_350dfc;
        }
    }
    ctx->pc = 0x350DECu;
    // 0x350dec: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350df0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x350DF0u;
    SET_GPR_U32(ctx, 31, 0x350DF8u);
    ctx->pc = 0x350DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DF0u;
    // 0x350df4: 0x24840d90  addiu       $a0, $a0, 0xD90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x350DF0u, 0x350DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DF8u;
label_350df8:
    // 0x350df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350dfc:
    // 0x350dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x350DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DFCu;
        // 0x350e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350E04u;
    // 0x350e04: 0x0  nop
    ctx->pc = 0x350e04u;
    // NOP
    // 0x350e08: 0x0  nop
    ctx->pc = 0x350e08u;
    // NOP
    // 0x350e0c: 0x0  nop
    ctx->pc = 0x350e0cu;
    // NOP
    if (ctx->pc == 0x350e0cu) { ctx->pc = 0x350e10u; }
}
