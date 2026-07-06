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

// Function: sub_00122598
// Address: 0x122598 - 0x122660
void sub_00122598_0x122598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122598_0x122598");
#endif

    switch (ctx->pc) {
        case 0x1225c0u: goto label_1225c0;
        case 0x1225c4u: goto label_1225c4;
        default: break;
    }

    ctx->pc = 0x122598u;

    // 0x122598: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x122598u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12259c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12259cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225a0: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x1225a0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1225a4: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x1225a4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1225a8: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1225A8u;
    {
        const bool branch_taken_0x1225a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225A8u;
        // 0x1225ac: 0x8c8d0004  lw          $t5, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225a8) {
            ctx->pc = 0x122610u;
            goto label_122610;
        }
    }
    ctx->pc = 0x1225B0u;
    // 0x1225b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1225b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1225b4: 0x240b07ff  addiu       $t3, $zero, 0x7FF
    ctx->pc = 0x1225b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1225b8: 0xf7cfc  dsll32      $t7, $t7, 19
    ctx->pc = 0x1225b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 19));
    // 0x1225bc: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x1225bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
label_1225c0:
    // 0x1225c0: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x1225c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1225c4:
    // 0x1225c4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1225c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1225c8: 0xe753c  dsll32      $t6, $t6, 20
    ctx->pc = 0x1225c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 20));
    // 0x1225cc: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x1225ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x1225d0: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x1225d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x1225d4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1225d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1225d8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1225d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1225dc: 0x316e07ff  andi        $t6, $t3, 0x7FF
    ctx->pc = 0x1225dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x1225e0: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x1225e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1225e4: 0xe753c  dsll32      $t6, $t6, 20
    ctx->pc = 0x1225e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 20));
    // 0x1225e8: 0xf7d3c  dsll32      $t7, $t7, 20
    ctx->pc = 0x1225e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
    // 0x1225ec: 0xd6ffc  dsll32      $t5, $t5, 31
    ctx->pc = 0x1225ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 31));
    // 0x1225f0: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x1225f0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x1225f4: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x1225f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x1225f8: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x1225f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1225fc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x1225fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x122600: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x122600u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x122604: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x122604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x122608: 0x3e00008  jr          $ra
    ctx->pc = 0x122608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122608u;
        // 0x12260c: 0x4d1025  or          $v0, $v0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122610u;
label_122610:
    // 0x122610: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x122610u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x122614: 0x51e0000f  beql        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x122614u;
    {
        const bool branch_taken_0x122614 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x122614) {
            ctx->pc = 0x122618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122614u;
            // 0x122618: 0x240b07ff  addiu       $t3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122654u;
            goto label_122654;
        }
    }
    ctx->pc = 0x12261Cu;
    // 0x12261c: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x12261cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x122620: 0x51e0ffe7  beql        $t7, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x122620u;
    {
        const bool branch_taken_0x122620 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x122620) {
            ctx->pc = 0x122624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122620u;
            // 0x122624: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1225C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1225c0;
        }
    }
    ctx->pc = 0x122628u;
    // 0x122628: 0x1180ffe6  beqz        $t4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x122628u;
    {
        const bool branch_taken_0x122628 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122628u;
        // 0x12262c: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122628) {
            ctx->pc = 0x1225C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1225c4;
        }
    }
    ctx->pc = 0x122630u;
    // 0x122630: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x122630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122634: 0x288ffc02  slti        $t7, $a0, -0x3FE
    ctx->pc = 0x122634u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x122638: 0x55e0ffe1  bnel        $t7, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x122638u;
    {
        const bool branch_taken_0x122638 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122638) {
            ctx->pc = 0x12263Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122638u;
            // 0x12263c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1225C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1225c0;
        }
    }
    ctx->pc = 0x122640u;
    // 0x122640: 0x288f0400  slti        $t7, $a0, 0x400
    ctx->pc = 0x122640u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x122644: 0x248b03ff  addiu       $t3, $a0, 0x3FF
    ctx->pc = 0x122644u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x122648: 0x15e0ffdd  bnez        $t7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x122648u;
    {
        const bool branch_taken_0x122648 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122648u;
        // 0x12264c: 0xc623a  dsrl        $t4, $t4, 8 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122648) {
            ctx->pc = 0x1225C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1225c0;
        }
    }
    ctx->pc = 0x122650u;
    // 0x122650: 0x240b07ff  addiu       $t3, $zero, 0x7FF
    ctx->pc = 0x122650u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_122654:
    // 0x122654: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x122654u;
    {
        const bool branch_taken_0x122654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122654u;
        // 0x122658: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122654) {
            ctx->pc = 0x1225C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1225c0;
        }
    }
    ctx->pc = 0x12265Cu;
    // 0x12265c: 0x0  nop
    ctx->pc = 0x12265cu;
    // NOP
}
