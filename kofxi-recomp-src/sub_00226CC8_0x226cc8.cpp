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

// Function: sub_00226CC8
// Address: 0x226cc8 - 0x226d80
void sub_00226CC8_0x226cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226CC8_0x226cc8");
#endif

    switch (ctx->pc) {
        case 0x226ce4u: goto label_226ce4;
        case 0x226cecu: goto label_226cec;
        case 0x226d18u: goto label_226d18;
        case 0x226d20u: goto label_226d20;
        case 0x226d24u: goto label_226d24;
        case 0x226d3cu: goto label_226d3c;
        case 0x226d44u: goto label_226d44;
        case 0x226d74u: goto label_226d74;
        default: break;
    }

    ctx->pc = 0x226cc8u;

    // 0x226cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226ccc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226cccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226cd0: 0xade0f1dc  sw          $zero, -0xE24($t7)
    ctx->pc = 0x226cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963676), GPR_U32(ctx, 0));
    // 0x226cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x226cdc: 0xc089a6e  jal         func_2269B8
    ctx->pc = 0x226CDCu;
    SET_GPR_U32(ctx, 31, 0x226CE4u);
    ctx->pc = 0x2269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269B8u, 0x226CDCu, 0x226CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CE4u;
label_226ce4:
    // 0x226ce4: 0xc0bead0  jal         func_2FAB40
    ctx->pc = 0x226CE4u;
    SET_GPR_U32(ctx, 31, 0x226CECu);
    ctx->pc = 0x2FAB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB40u, 0x226CE4u, 0x226CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CECu;
label_226cec:
    // 0x226cec: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x226cecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x226cf0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226cf4: 0x25f03c48  addiu       $s0, $t7, 0x3C48
    ctx->pc = 0x226cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15432));
    // 0x226cf8: 0x24e73c00  addiu       $a3, $a3, 0x3C00
    ctx->pc = 0x226cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15360));
    // 0x226cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d00: 0x24050199  addiu       $a1, $zero, 0x199
    ctx->pc = 0x226d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    // 0x226d04: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x226D04u;
    {
        const bool branch_taken_0x226d04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D04u;
        // 0x226d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d04) {
            ctx->pc = 0x226D34u;
            goto label_226d34;
        }
    }
    ctx->pc = 0x226D0Cu;
    // 0x226d0c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226d10: 0x24050196  addiu       $a1, $zero, 0x196
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
    // 0x226d14: 0x24e73be0  addiu       $a3, $a3, 0x3BE0
    ctx->pc = 0x226d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15328));
label_226d18:
    // 0x226d18: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226D18u;
    SET_GPR_U32(ctx, 31, 0x226D20u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226D18u, 0x226D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D20u;
label_226d20:
    // 0x226d20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226d24:
    // 0x226d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x226d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x226D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D2Cu;
        // 0x226d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D34u;
label_226d34:
    // 0x226d34: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226D34u;
    SET_GPR_U32(ctx, 31, 0x226D3Cu);
    ctx->pc = 0x226D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D34u;
    // 0x226d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226D34u, 0x226D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D3Cu;
label_226d3c:
    // 0x226d3c: 0xc0bd332  jal         func_2F4CC8
    ctx->pc = 0x226D3Cu;
    SET_GPR_U32(ctx, 31, 0x226D44u);
    ctx->pc = 0x2F4CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4CC8u, 0x226D3Cu, 0x226D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D44u;
label_226d44:
    // 0x226d44: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226d44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d4c: 0x24e73c58  addiu       $a3, $a3, 0x3C58
    ctx->pc = 0x226d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15448));
    // 0x226d50: 0x2405019c  addiu       $a1, $zero, 0x19C
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
    // 0x226d54: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x226D54u;
    {
        const bool branch_taken_0x226d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D54u;
        // 0x226d58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d54) {
            ctx->pc = 0x226D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226d18;
        }
    }
    ctx->pc = 0x226D5Cu;
    // 0x226d5c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d64: 0x24e73c78  addiu       $a3, $a3, 0x3C78
    ctx->pc = 0x226d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15480));
    // 0x226d68: 0x2405019f  addiu       $a1, $zero, 0x19F
    ctx->pc = 0x226d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x226d6c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226D6Cu;
    SET_GPR_U32(ctx, 31, 0x226D74u);
    ctx->pc = 0x226D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D6Cu;
    // 0x226d70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226D6Cu, 0x226D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D74u;
label_226d74:
    // 0x226d74: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x226D74u;
    {
        const bool branch_taken_0x226d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D74u;
        // 0x226d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d74) {
            ctx->pc = 0x226D24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226d24;
        }
    }
    ctx->pc = 0x226D7Cu;
    // 0x226d7c: 0x0  nop
    ctx->pc = 0x226d7cu;
    // NOP
    if (ctx->pc == 0x226d7cu) { ctx->pc = 0x226d80u; }
}
