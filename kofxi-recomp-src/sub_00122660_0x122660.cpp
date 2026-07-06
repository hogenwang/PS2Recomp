#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122660
// Address: 0x122660 - 0x1226f0
void sub_00122660_0x122660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122660_0x122660");
#endif

    switch (ctx->pc) {
        case 0x1226b4u: goto label_1226b4;
        case 0x1226bcu: goto label_1226bc;
        case 0x1226c8u: goto label_1226c8;
        case 0x1226d0u: goto label_1226d0;
        default: break;
    }

    ctx->pc = 0x122660u;

    // 0x122660: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x122660u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122664: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x122664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x122668: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x122668u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12266c: 0xe6ffe  dsrl32      $t5, $t6, 31
    ctx->pc = 0x12266cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) >> (32 + 31));
    // 0x122670: 0xe653e  dsrl32      $t4, $t6, 20
    ctx->pc = 0x122670u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) >> (32 + 20));
    // 0x122674: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x122674u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x122678: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x122678u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
    // 0x12267c: 0x318c07ff  andi        $t4, $t4, 0x7FF
    ctx->pc = 0x12267cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2047);
    // 0x122680: 0x11800011  beqz        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x122680u;
    {
        const bool branch_taken_0x122680 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x122684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122680u;
            // 0x122684: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122680) {
            ctx->pc = 0x1226C8u;
            goto label_1226c8;
        }
    }
    ctx->pc = 0x122688u;
    // 0x122688: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x122688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x12268c: 0x158f0010  bne         $t4, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12268Cu;
    {
        const bool branch_taken_0x12268c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x122690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12268Cu;
            // 0x122690: 0xe7a38  dsll        $t7, $t6, 8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12268c) {
            ctx->pc = 0x1226D0u;
            goto label_1226d0;
        }
    }
    ctx->pc = 0x122694u;
    // 0x122694: 0x11c0000c  beqz        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x122694u;
    {
        const bool branch_taken_0x122694 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x122698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122694u;
            // 0x122698: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122694) {
            ctx->pc = 0x1226C8u;
            goto label_1226c8;
        }
    }
    ctx->pc = 0x12269Cu;
    // 0x12269c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12269cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1226a0: 0xf7cfc  dsll32      $t7, $t7, 19
    ctx->pc = 0x1226a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 19));
    // 0x1226a4: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x1226a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x1226a8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226A8u;
    {
        const bool branch_taken_0x1226a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1226A8u;
            // 0x1226ac: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226a8) {
            ctx->pc = 0x1226BCu;
            goto label_1226bc;
        }
    }
    ctx->pc = 0x1226B0u;
    // 0x1226b0: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x1226b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_1226b4:
    // 0x1226b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1226B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1226B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1226B4u;
            // 0x1226b8: 0xfcae0010  sd          $t6, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1226BCu;
label_1226bc:
    // 0x1226bc: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1226BCu;
    {
        const bool branch_taken_0x1226bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1226BCu;
            // 0x1226c0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226bc) {
            ctx->pc = 0x1226B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1226b4;
        }
    }
    ctx->pc = 0x1226C4u;
    // 0x1226c4: 0x0  nop
    ctx->pc = 0x1226c4u;
    // NOP
label_1226c8:
    // 0x1226c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1226C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1226CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1226C8u;
            // 0x1226cc: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1226D0u;
label_1226d0:
    // 0x1226d0: 0x258dfc01  addiu       $t5, $t4, -0x3FF
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966273));
    // 0x1226d4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1226d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1226d8: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x1226d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
    // 0x1226dc: 0xe773c  dsll32      $t6, $t6, 28
    ctx->pc = 0x1226dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 28));
    // 0x1226e0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x1226e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x1226e4: 0xfcaf0010  sd          $t7, 0x10($a1)
    ctx->pc = 0x1226e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 15));
    // 0x1226e8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1226E8u;
    {
        const bool branch_taken_0x1226e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1226E8u;
            // 0x1226ec: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226e8) {
            ctx->pc = 0x1226C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1226c8;
        }
    }
    ctx->pc = 0x1226F0u;
    ctx->pc = 0x1226f0u;
}
