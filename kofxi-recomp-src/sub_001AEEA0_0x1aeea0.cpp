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

// Function: sub_001AEEA0
// Address: 0x1aeea0 - 0x1aef20
void sub_001AEEA0_0x1aeea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEEA0_0x1aeea0");
#endif

    switch (ctx->pc) {
        case 0x1aeec4u: goto label_1aeec4;
        case 0x1aeed8u: goto label_1aeed8;
        case 0x1aeee0u: goto label_1aeee0;
        case 0x1aeee8u: goto label_1aeee8;
        case 0x1aeef0u: goto label_1aeef0;
        default: break;
    }

    ctx->pc = 0x1aeea0u;

    // 0x1aeea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aeea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aeea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aeea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aeea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aeea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeeac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aeeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aeeb0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1aeeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aeeb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aeeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aeeb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aeeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aeebc: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1AEEBCu;
    SET_GPR_U32(ctx, 31, 0x1AEEC4u);
    ctx->pc = 0x1AEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEBCu;
    // 0x1aeec0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1AEEBCu, 0x1AEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEC4u;
label_1aeec4:
    // 0x1aeec4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AEEC4u;
    {
        const bool branch_taken_0x1aeec4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aeec4) {
            ctx->pc = 0x1AEEE8u;
            goto label_1aeee8;
        }
    }
    ctx->pc = 0x1AEECCu;
    // 0x1aeecc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AEECCu;
    {
        const bool branch_taken_0x1aeecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEECCu;
        // 0x1aeed0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeecc) {
            ctx->pc = 0x1AEF08u;
            goto label_1aef08;
        }
    }
    ctx->pc = 0x1AEED4u;
    // 0x1aeed4: 0x0  nop
    ctx->pc = 0x1aeed4u;
    // NOP
label_1aeed8:
    // 0x1aeed8: 0xc06cfea  jal         func_1B3FA8
    ctx->pc = 0x1AEED8u;
    SET_GPR_U32(ctx, 31, 0x1AEEE0u);
    ctx->pc = 0x1B3FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3FA8u, 0x1AEED8u, 0x1AEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEE0u;
label_1aeee0:
    // 0x1aeee0: 0xc06bb4e  jal         func_1AED38
    ctx->pc = 0x1AEEE0u;
    SET_GPR_U32(ctx, 31, 0x1AEEE8u);
    ctx->pc = 0x1AED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED38u, 0x1AEEE0u, 0x1AEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEE8u;
label_1aeee8:
    // 0x1aeee8: 0xc06be5e  jal         func_1AF978
    ctx->pc = 0x1AEEE8u;
    SET_GPR_U32(ctx, 31, 0x1AEEF0u);
    ctx->pc = 0x1AEEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEE8u;
    // 0x1aeeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF978u, 0x1AEEE8u, 0x1AEEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEF0u;
label_1aeef0:
    // 0x1aeef0: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEEF0u;
    {
        const bool branch_taken_0x1aeef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEF0u;
        // 0x1aeef4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeef0) {
            ctx->pc = 0x1AEF00u;
            goto label_1aef00;
        }
    }
    ctx->pc = 0x1AEEF8u;
    // 0x1aeef8: 0x1451fff7  bne         $v0, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AEEF8u;
    {
        const bool branch_taken_0x1aeef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1AEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEF8u;
        // 0x1aeefc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeef8) {
            ctx->pc = 0x1AEED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aeed8;
        }
    }
    ctx->pc = 0x1AEF00u;
label_1aef00:
    // 0x1aef00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aef00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aef04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aef08:
    // 0x1aef08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aef08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aef0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aef0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aef10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aef14: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF14u;
        // 0x1aef18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF1Cu;
    // 0x1aef1c: 0x0  nop
    ctx->pc = 0x1aef1cu;
    // NOP
}
