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

// Function: sub_001A7EB8
// Address: 0x1a7eb8 - 0x1a7f60
void sub_001A7EB8_0x1a7eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7EB8_0x1a7eb8");
#endif

    switch (ctx->pc) {
        case 0x1a7ee8u: goto label_1a7ee8;
        case 0x1a7ef0u: goto label_1a7ef0;
        case 0x1a7f20u: goto label_1a7f20;
        case 0x1a7f28u: goto label_1a7f28;
        case 0x1a7f30u: goto label_1a7f30;
        default: break;
    }

    ctx->pc = 0x1a7eb8u;

    // 0x1a7eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7ebc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a7ec0: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a7ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1a7ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7ec8: 0x8e22e14c  lw          $v0, -0x1EB4($s1)
    ctx->pc = 0x1a7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959436)));
    // 0x1a7ecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7ECCu;
    {
        const bool branch_taken_0x1a7ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ECCu;
        // 0x1a7ed0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ecc) {
            ctx->pc = 0x1A7EDCu;
            goto label_1a7edc;
        }
    }
    ctx->pc = 0x1A7ED4u;
    // 0x1a7ed4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7ED4u;
    {
        const bool branch_taken_0x1a7ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ED4u;
        // 0x1a7ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ed4) {
            ctx->pc = 0x1A7F4Cu;
            goto label_1a7f4c;
        }
    }
    ctx->pc = 0x1A7EDCu;
label_1a7edc:
    // 0x1a7edc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A7EDCu;
    {
        const bool branch_taken_0x1a7edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EDCu;
        // 0x1a7ee0: 0x3c1001bf  lui         $s0, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7edc) {
            ctx->pc = 0x1A7F0Cu;
            goto label_1a7f0c;
        }
    }
    ctx->pc = 0x1A7EE4u;
    // 0x1a7ee4: 0x0  nop
    ctx->pc = 0x1a7ee4u;
    // NOP
label_1a7ee8:
    // 0x1a7ee8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a7eec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a7ef0:
    // 0x1a7ef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7ef4: 0x0  nop
    ctx->pc = 0x1a7ef4u;
    // NOP
    // 0x1a7ef8: 0x0  nop
    ctx->pc = 0x1a7ef8u;
    // NOP
    // 0x1a7efc: 0x0  nop
    ctx->pc = 0x1a7efcu;
    // NOP
    // 0x1a7f00: 0x0  nop
    ctx->pc = 0x1a7f00u;
    // NOP
    // 0x1a7f04: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A7F04u;
    {
        const bool branch_taken_0x1a7f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a7f04) {
            ctx->pc = 0x1A7EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7ef0;
        }
    }
    ctx->pc = 0x1A7F0Cu;
label_1a7f0c:
    // 0x1a7f0c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a7f10: 0x26043240  addiu       $a0, $s0, 0x3240
    ctx->pc = 0x1a7f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12864));
    // 0x1a7f14: 0x34a51101  ori         $a1, $a1, 0x1101
    ctx->pc = 0x1a7f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4353);
    // 0x1a7f18: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x1A7F18u;
    SET_GPR_U32(ctx, 31, 0x1A7F20u);
    ctx->pc = 0x1A7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F18u;
    // 0x1a7f1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x1A7F18u, 0x1A7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F20u;
label_1a7f20:
    // 0x1a7f20: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7F20u;
    {
        const bool branch_taken_0x1a7f20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F20u;
        // 0x1a7f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f20) {
            ctx->pc = 0x1A7F4Cu;
            goto label_1a7f4c;
        }
    }
    ctx->pc = 0x1A7F28u;
label_1a7f28:
    // 0x1a7f28: 0xc0443cc  jal         func_110F30
    ctx->pc = 0x1A7F28u;
    SET_GPR_U32(ctx, 31, 0x1A7F30u);
    ctx->pc = 0x1A7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F28u;
    // 0x1a7f2c: 0x26043240  addiu       $a0, $s0, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F30u, 0x1A7F28u, 0x1A7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F30u;
label_1a7f30:
    // 0x1a7f30: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1A7F30u;
    {
        const bool branch_taken_0x1a7f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F30u;
        // 0x1a7f34: 0x26023240  addiu       $v0, $s0, 0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f30) {
            ctx->pc = 0x1A7F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7f28;
        }
    }
    ctx->pc = 0x1A7F38u;
    // 0x1a7f38: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a7f3c: 0x1060ffea  beqz        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A7F3Cu;
    {
        const bool branch_taken_0x1a7f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F3Cu;
        // 0x1a7f40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f3c) {
            ctx->pc = 0x1A7EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7ee8;
        }
    }
    ctx->pc = 0x1A7F44u;
    // 0x1a7f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f48: 0xae23e14c  sw          $v1, -0x1EB4($s1)
    ctx->pc = 0x1a7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294959436), GPR_U32(ctx, 3));
label_1a7f4c:
    // 0x1a7f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7f50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F58u;
        // 0x1a7f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F60u;
}
