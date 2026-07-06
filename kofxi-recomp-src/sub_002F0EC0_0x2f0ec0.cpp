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

// Function: sub_002F0EC0
// Address: 0x2f0ec0 - 0x2f0f58
void sub_002F0EC0_0x2f0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0EC0_0x2f0ec0");
#endif

    switch (ctx->pc) {
        case 0x2f0ef0u: goto label_2f0ef0;
        case 0x2f0f28u: goto label_2f0f28;
        case 0x2f0f44u: goto label_2f0f44;
        case 0x2f0f50u: goto label_2f0f50;
        default: break;
    }

    ctx->pc = 0x2f0ec0u;

    // 0x2f0ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f0ec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ec8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f0ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f0ecc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f0eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2f0ed0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f0ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f0ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f0ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0edc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F0EDCu;
    {
        const bool branch_taken_0x2f0edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EDCu;
        // 0x2f0ee0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0edc) {
            ctx->pc = 0x2F0F28u;
            goto label_2f0f28;
        }
    }
    ctx->pc = 0x2F0EE4u;
    // 0x2f0ee4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2f0ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f0ee8: 0xc0bc378  jal         func_2F0DE0
    ctx->pc = 0x2F0EE8u;
    SET_GPR_U32(ctx, 31, 0x2F0EF0u);
    ctx->pc = 0x2F0EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0EE8u;
    // 0x2f0eec: 0x2484ed28  addiu       $a0, $a0, -0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0DE0u, 0x2F0EE8u, 0x2F0EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0EF0u;
label_2f0ef0:
    // 0x2f0ef0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0ef4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2f0ef8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0efc: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0efcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f0f00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f0f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f0f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f08: 0x248417f8  addiu       $a0, $a0, 0x17F8
    ctx->pc = 0x2f0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6136));
    // 0x2f0f0c: 0x25081810  addiu       $t0, $t0, 0x1810
    ctx->pc = 0x2f0f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6160));
    // 0x2f0f10: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2f0f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f0f14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0F14u;
    {
        const bool branch_taken_0x2f0f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F14u;
        // 0x2f0f18: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f14) {
            ctx->pc = 0x2F0F3Cu;
            goto label_2f0f3c;
        }
    }
    ctx->pc = 0x2F0F1Cu;
    // 0x2f0f1c: 0x24050e82  addiu       $a1, $zero, 0xE82
    ctx->pc = 0x2f0f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3714));
    // 0x2f0f20: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2F0F20u;
    SET_GPR_U32(ctx, 31, 0x2F0F28u);
    ctx->pc = 0x2F0F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F20u;
    // 0x2f0f24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F0F20u, 0x2F0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F28u;
label_2f0f28:
    // 0x2f0f28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f0f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0f2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f0f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0f30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F34u;
        // 0x2f0f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0F3Cu;
label_2f0f3c:
    // 0x2f0f3c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F0F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F44u);
    ctx->pc = 0x2F0F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F3Cu;
    // 0x2f0f40: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F0F3Cu, 0x2F0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F44u;
label_2f0f44:
    // 0x2f0f44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2f0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0f48: 0xc0bc390  jal         func_2F0E40
    ctx->pc = 0x2F0F48u;
    SET_GPR_U32(ctx, 31, 0x2F0F50u);
    ctx->pc = 0x2F0F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F48u;
    // 0x2f0f4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0E40u, 0x2F0F48u, 0x2F0F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F50u;
label_2f0f50:
    // 0x2f0f50: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x2F0F50u;
    {
        const bool branch_taken_0x2f0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F50u;
        // 0x2f0f54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f50) {
            ctx->pc = 0x2F0F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0f28;
        }
    }
    ctx->pc = 0x2F0F58u;
}
