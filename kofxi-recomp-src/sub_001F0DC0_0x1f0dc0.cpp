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

// Function: sub_001F0DC0
// Address: 0x1f0dc0 - 0x1f0e48
void sub_001F0DC0_0x1f0dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0DC0_0x1f0dc0");
#endif

    switch (ctx->pc) {
        case 0x1f0de4u: goto label_1f0de4;
        case 0x1f0df4u: goto label_1f0df4;
        default: break;
    }

    ctx->pc = 0x1f0dc0u;

    // 0x1f0dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0dd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f0dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f0dd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f0dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f0dd8: 0x8e122020  lw          $s2, 0x2020($s0)
    ctx->pc = 0x1f0dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8224)));
    // 0x1f0ddc: 0xc07ab68  jal         func_1EADA0
    ctx->pc = 0x1F0DDCu;
    SET_GPR_U32(ctx, 31, 0x1F0DE4u);
    ctx->pc = 0x1F0DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DDCu;
    // 0x1f0de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EADA0u, 0x1F0DDCu, 0x1F0DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DE4u;
label_1f0de4:
    // 0x1f0de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0de8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f0de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dec: 0xc07ad84  jal         func_1EB610
    ctx->pc = 0x1F0DECu;
    SET_GPR_U32(ctx, 31, 0x1F0DF4u);
    ctx->pc = 0x1F0DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DECu;
    // 0x1f0df0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB610u, 0x1F0DECu, 0x1F0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DF4u;
label_1f0df4:
    // 0x1f0df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0df8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1f0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1f0dfc: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x1f0dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f0e00: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f0e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f0e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e08: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x1f0e08u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f0e0c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0E0Cu;
    {
        const bool branch_taken_0x1f0e0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E0Cu;
        // 0x1f0e10: 0x34a50f1c  ori         $a1, $a1, 0xF1C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3868);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e0c) {
            ctx->pc = 0x1F0E30u;
            goto label_1f0e30;
        }
    }
    ctx->pc = 0x1F0E14u;
    // 0x1f0e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0e18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0e1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f0e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0e24: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F0E24u;
    ctx->pc = 0x1F0E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E24u;
    // 0x1f0e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F0E2Cu;
    // 0x1f0e2c: 0x0  nop
    ctx->pc = 0x1f0e2cu;
    // NOP
label_1f0e30:
    // 0x1f0e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0e34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f0e38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f0e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f0e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0e40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E40u;
        // 0x1f0e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0E48u;
}
