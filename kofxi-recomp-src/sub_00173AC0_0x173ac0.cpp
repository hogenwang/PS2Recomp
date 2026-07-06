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

// Function: sub_00173AC0
// Address: 0x173ac0 - 0x173b30
void sub_00173AC0_0x173ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173AC0_0x173ac0");
#endif

    switch (ctx->pc) {
        case 0x173ae4u: goto label_173ae4;
        case 0x173aecu: goto label_173aec;
        case 0x173af4u: goto label_173af4;
        default: break;
    }

    ctx->pc = 0x173ac0u;

    // 0x173ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173ac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x173ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x173ac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173ad0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x173ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173ad8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173adc: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x173ADCu;
    {
        const bool branch_taken_0x173adc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x173AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ADCu;
        // 0x173ae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173adc) {
            ctx->pc = 0x173B08u;
            goto label_173b08;
        }
    }
    ctx->pc = 0x173AE4u;
label_173ae4:
    // 0x173ae4: 0xc05cecc  jal         func_173B30
    ctx->pc = 0x173AE4u;
    SET_GPR_U32(ctx, 31, 0x173AECu);
    ctx->pc = 0x173AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AE4u;
    // 0x173ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B30u, 0x173AE4u, 0x173AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AECu;
label_173aec:
    // 0x173aec: 0xc0581d4  jal         func_160750
    ctx->pc = 0x173AECu;
    SET_GPR_U32(ctx, 31, 0x173AF4u);
    ctx->pc = 0x173AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AECu;
    // 0x173af0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160750u, 0x173AECu, 0x173AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AF4u;
label_173af4:
    // 0x173af4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x173af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x173af8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x173af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x173afc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x173AFCu;
    {
        const bool branch_taken_0x173afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AFCu;
        // 0x173b00: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173afc) {
            ctx->pc = 0x173AE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_173ae4;
        }
    }
    ctx->pc = 0x173B04u;
    // 0x173b04: 0x0  nop
    ctx->pc = 0x173b04u;
    // NOP
label_173b08:
    // 0x173b08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x173b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173b0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x173b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x173B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B1Cu;
        // 0x173b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173B24u;
    // 0x173b24: 0x0  nop
    ctx->pc = 0x173b24u;
    // NOP
    // 0x173b28: 0x0  nop
    ctx->pc = 0x173b28u;
    // NOP
    // 0x173b2c: 0x0  nop
    ctx->pc = 0x173b2cu;
    // NOP
    if (ctx->pc == 0x173b2cu) { ctx->pc = 0x173b30u; }
}
