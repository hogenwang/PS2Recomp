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

// Function: sub_00211DB8
// Address: 0x211db8 - 0x211e48
void sub_00211DB8_0x211db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211DB8_0x211db8");
#endif

    switch (ctx->pc) {
        case 0x211df0u: goto label_211df0;
        case 0x211e28u: goto label_211e28;
        default: break;
    }

    ctx->pc = 0x211db8u;

label_211db8:
    // 0x211db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211dbc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211dc4: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x211dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x211dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211dcc: 0x8043e52  j           func_10F948
    ctx->pc = 0x211DCCu;
    ctx->pc = 0x211DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DCCu;
    // 0x211dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x211DD4u;
    // 0x211dd4: 0x0  nop
    ctx->pc = 0x211dd4u;
    // NOP
    // 0x211dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211ddc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x211ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211de0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211de0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211de8: 0xc08476e  jal         func_211DB8
    ctx->pc = 0x211DE8u;
    SET_GPR_U32(ctx, 31, 0x211DF0u);
    ctx->pc = 0x211DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DE8u;
    // 0x211dec: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DB8u;
    goto label_211db8;
    ctx->pc = 0x211DF0u;
label_211df0:
    // 0x211df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211df8: 0x3e00008  jr          $ra
    ctx->pc = 0x211DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DF8u;
        // 0x211dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211E00u;
    // 0x211e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211e04: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211e04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211e10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211e14: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x211e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211e18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211e1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x211e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211e20: 0xc08476e  jal         func_211DB8
    ctx->pc = 0x211E20u;
    SET_GPR_U32(ctx, 31, 0x211E28u);
    ctx->pc = 0x211E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211E20u;
    // 0x211e24: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DB8u;
    goto label_211db8;
    ctx->pc = 0x211E28u;
label_211e28:
    // 0x211e28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x211e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211e30: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x211e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x211e34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x211E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E3Cu;
        // 0x211e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211E44u;
    // 0x211e44: 0x0  nop
    ctx->pc = 0x211e44u;
    // NOP
}
