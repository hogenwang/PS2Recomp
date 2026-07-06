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

// Function: sub_002E4DE8
// Address: 0x2e4de8 - 0x2e4e80
void sub_002E4DE8_0x2e4de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4DE8_0x2e4de8");
#endif

    switch (ctx->pc) {
        case 0x2e4e18u: goto label_2e4e18;
        case 0x2e4e34u: goto label_2e4e34;
        case 0x2e4e54u: goto label_2e4e54;
        default: break;
    }

    ctx->pc = 0x2e4de8u;

    // 0x2e4de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4dec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e4df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4df8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e4df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e4dfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e4e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e4e04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e4e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e4e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e4e0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e4e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e4e14: 0x0  nop
    ctx->pc = 0x2e4e14u;
    // NOP
label_2e4e18:
    // 0x2e4e18: 0x2a0203e9  slti        $v0, $s0, 0x3E9
    ctx->pc = 0x2e4e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x2e4e1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E4E1Cu;
    {
        const bool branch_taken_0x2e4e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E1Cu;
        // 0x2e4e20: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e1c) {
            ctx->pc = 0x2E4E60u;
            goto label_2e4e60;
        }
    }
    ctx->pc = 0x2E4E24u;
    // 0x2e4e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e2c: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x2E4E2Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E34u);
    ctx->pc = 0x2E4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E2Cu;
    // 0x2e4e30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x2E4E2Cu, 0x2E4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E34u;
label_2e4e34:
    // 0x2e4e34: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x2e4e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2e4e38: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4E38u;
    {
        const bool branch_taken_0x2e4e38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E38u;
        // 0x2e4e3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e38) {
            ctx->pc = 0x2E4E4Cu;
            goto label_2e4e4c;
        }
    }
    ctx->pc = 0x2E4E40u;
    // 0x2e4e40: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2e4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2e4e44: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4E44u;
    {
        const bool branch_taken_0x2e4e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e44) {
            ctx->pc = 0x2E4E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4E44u;
            // 0x2e4e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4E64u;
            goto label_2e4e64;
        }
    }
    ctx->pc = 0x2E4E4Cu;
label_2e4e4c:
    // 0x2e4e4c: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x2E4E4Cu;
    SET_GPR_U32(ctx, 31, 0x2E4E54u);
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x2E4E4Cu, 0x2E4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4E54u;
label_2e4e54:
    // 0x2e4e54: 0x441fff0  bgez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E4E54u;
    {
        const bool branch_taken_0x2e4e54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E54u;
        // 0x2e4e58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e54) {
            ctx->pc = 0x2E4E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e4e18;
        }
    }
    ctx->pc = 0x2E4E5Cu;
    // 0x2e4e5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e4e60:
    // 0x2e4e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4e64:
    // 0x2e4e64: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e4e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e4e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4e70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e4e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4e74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E78u;
        // 0x2e4e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4E80u;
}
