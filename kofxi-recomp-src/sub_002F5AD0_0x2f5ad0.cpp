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

// Function: sub_002F5AD0
// Address: 0x2f5ad0 - 0x2f5ce8
void sub_002F5AD0_0x2f5ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5AD0_0x2f5ad0");
#endif

    switch (ctx->pc) {
        case 0x2f5af8u: goto label_2f5af8;
        case 0x2f5b90u: goto label_2f5b90;
        case 0x2f5be4u: goto label_2f5be4;
        case 0x2f5bf4u: goto label_2f5bf4;
        case 0x2f5c20u: goto label_2f5c20;
        default: break;
    }

    ctx->pc = 0x2f5ad0u;

label_2f5ad0:
    // 0x2f5ad0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f5ad0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5ad4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F5AD4u;
    {
        const bool branch_taken_0x2f5ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AD4u;
        // 0x2f5ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ad4) {
            ctx->pc = 0x2F5BC4u;
            goto label_2f5bc4;
        }
    }
    ctx->pc = 0x2F5ADCu;
    // 0x2f5adc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f5ae0: 0x240a0025  addiu       $t2, $zero, 0x25
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2f5ae4: 0x244904d8  addiu       $t1, $v0, 0x4D8
    ctx->pc = 0x2f5ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1240));
    // 0x2f5ae8: 0x2408002b  addiu       $t0, $zero, 0x2B
    ctx->pc = 0x2f5ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2f5aec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f5aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5af0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f5af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f5af4: 0x0  nop
    ctx->pc = 0x2f5af4u;
    // NOP
label_2f5af8:
    // 0x2f5af8: 0x144a0027  bne         $v0, $t2, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F5AF8u;
    {
        const bool branch_taken_0x2f5af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2f5af8) {
            ctx->pc = 0x2F5B98u;
            goto label_2f5b98;
        }
    }
    ctx->pc = 0x2F5B00u;
    // 0x2f5b00: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2f5b00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2f5b04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F5B04u;
    {
        const bool branch_taken_0x2f5b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B04u;
        // 0x2f5b08: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b04) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5B0Cu;
    // 0x2f5b0c: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x2f5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2f5b10: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f5b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f5b14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5B14u;
    {
        const bool branch_taken_0x2f5b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B14u;
        // 0x2f5b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b14) {
            ctx->pc = 0x2F5B3Cu;
            goto label_2f5b3c;
        }
    }
    ctx->pc = 0x2F5B1Cu;
    // 0x2f5b1c: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2f5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x2f5b20: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f5b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f5b24: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5B24u;
    {
        const bool branch_taken_0x2f5b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b24) {
            ctx->pc = 0x2F5B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B24u;
            // 0x2f5b28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B40u;
            goto label_2f5b40;
        }
    }
    ctx->pc = 0x2F5B2Cu;
    // 0x2f5b2c: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2f5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x2f5b30: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f5b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f5b34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5B34u;
    {
        const bool branch_taken_0x2f5b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b34) {
            ctx->pc = 0x2F5B40u;
            goto label_2f5b40;
        }
    }
    ctx->pc = 0x2F5B3Cu;
label_2f5b3c:
    // 0x2f5b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5b40:
    // 0x2f5b40: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F5B40u;
    {
        const bool branch_taken_0x2f5b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b40) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5B48u;
    // 0x2f5b48: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2f5b48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2f5b4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5B4Cu;
    {
        const bool branch_taken_0x2f5b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B4Cu;
        // 0x2f5b50: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b4c) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5B54u;
    // 0x2f5b54: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x2f5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2f5b58: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f5b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f5b5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5B5Cu;
    {
        const bool branch_taken_0x2f5b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B5Cu;
        // 0x2f5b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b5c) {
            ctx->pc = 0x2F5B84u;
            goto label_2f5b84;
        }
    }
    ctx->pc = 0x2F5B64u;
    // 0x2f5b64: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2f5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x2f5b68: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f5b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f5b6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5B6Cu;
    {
        const bool branch_taken_0x2f5b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b6c) {
            ctx->pc = 0x2F5B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5B6Cu;
            // 0x2f5b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B88u;
            goto label_2f5b88;
        }
    }
    ctx->pc = 0x2F5B74u;
    // 0x2f5b74: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2f5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x2f5b78: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f5b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f5b7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5B7Cu;
    {
        const bool branch_taken_0x2f5b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b7c) {
            ctx->pc = 0x2F5B88u;
            goto label_2f5b88;
        }
    }
    ctx->pc = 0x2F5B84u;
label_2f5b84:
    // 0x2f5b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5b88:
    // 0x2f5b88: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F5B88u;
    {
        const bool branch_taken_0x2f5b88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B88u;
        // 0x2f5b8c: 0x24c60003  addiu       $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b88) {
            ctx->pc = 0x2F5BB4u;
            goto label_2f5bb4;
        }
    }
    ctx->pc = 0x2F5B90u;
label_2f5b90:
    // 0x2f5b90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B90u;
        // 0x2f5b94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5B98u;
label_2f5b98:
    // 0x2f5b98: 0x10480006  beq         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5B98u;
    {
        const bool branch_taken_0x2f5b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x2F5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B98u;
        // 0x2f5b9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b98) {
            ctx->pc = 0x2F5BB4u;
            goto label_2f5bb4;
        }
    }
    ctx->pc = 0x2F5BA0u;
    // 0x2f5ba0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2f5ba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5ba4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2f5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2f5ba8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f5ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5bac: 0x1467fff8  bne         $v1, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F5BACu;
    {
        const bool branch_taken_0x2f5bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2f5bac) {
            ctx->pc = 0x2F5B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5BB4u;
label_2f5bb4:
    // 0x2f5bb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f5bb8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2f5bb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f5bbc: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2F5BBCu;
    {
        const bool branch_taken_0x2f5bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BBCu;
        // 0x2f5bc0: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bbc) {
            ctx->pc = 0x2F5AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5af8;
        }
    }
    ctx->pc = 0x2F5BC4u;
label_2f5bc4:
    // 0x2f5bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BC4u;
        // 0x2f5bc8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5BCCu;
    // 0x2f5bcc: 0x0  nop
    ctx->pc = 0x2f5bccu;
    // NOP
    // 0x2f5bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5bdc: 0xc0bd6b4  jal         func_2F5AD0
    ctx->pc = 0x2F5BDCu;
    SET_GPR_U32(ctx, 31, 0x2F5BE4u);
    ctx->pc = 0x2F5BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BDCu;
    // 0x2f5be0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5AD0u;
    goto label_2f5ad0;
    ctx->pc = 0x2F5BE4u;
label_2f5be4:
    // 0x2f5be4: 0x442003b  bltzl       $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2F5BE4u;
    {
        const bool branch_taken_0x2f5be4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f5be4) {
            ctx->pc = 0x2F5BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5BE4u;
            // 0x2f5be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CD4u;
            goto label_2f5cd4;
        }
    }
    ctx->pc = 0x2F5BECu;
    // 0x2f5bec: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F5BECu;
    SET_GPR_U32(ctx, 31, 0x2F5BF4u);
    ctx->pc = 0x2F5BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BECu;
    // 0x2f5bf0: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F5BECu, 0x2F5BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BF4u;
label_2f5bf4:
    // 0x2f5bf4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f5bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bf8: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5BF8u;
    {
        const bool branch_taken_0x2f5bf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bf8) {
            ctx->pc = 0x2F5BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5BF8u;
            // 0x2f5bfc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5C08u;
            goto label_2f5c08;
        }
    }
    ctx->pc = 0x2F5C00u;
    // 0x2f5c00: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F5C00u;
    {
        const bool branch_taken_0x2f5c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C00u;
        // 0x2f5c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c00) {
            ctx->pc = 0x2F5CD4u;
            goto label_2f5cd4;
        }
    }
    ctx->pc = 0x2F5C08u;
label_2f5c08:
    // 0x2f5c08: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F5C08u;
    {
        const bool branch_taken_0x2f5c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C08u;
        // 0x2f5c0c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c08) {
            ctx->pc = 0x2F5CCCu;
            goto label_2f5ccc;
        }
    }
    ctx->pc = 0x2F5C10u;
    // 0x2f5c10: 0x240a0025  addiu       $t2, $zero, 0x25
    ctx->pc = 0x2f5c10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2f5c14: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2f5c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f5c18: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2f5c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f5c1c: 0x0  nop
    ctx->pc = 0x2f5c1cu;
    // NOP
label_2f5c20:
    // 0x2f5c20: 0x544a0025  bnel        $v0, $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F5C20u;
    {
        const bool branch_taken_0x2f5c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2f5c20) {
            ctx->pc = 0x2F5C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5C20u;
            // 0x2f5c24: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5CB8u;
            goto label_2f5cb8;
        }
    }
    ctx->pc = 0x2F5C28u;
    // 0x2f5c28: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x2f5c28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2f5c2c: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x2f5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2f5c30: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2f5c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f5c34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f5c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f5c38: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F5C38u;
    {
        const bool branch_taken_0x2f5c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C38u;
        // 0x2f5c3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c38) {
            ctx->pc = 0x2F5C68u;
            goto label_2f5c68;
        }
    }
    ctx->pc = 0x2F5C40u;
    // 0x2f5c40: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2f5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x2f5c44: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f5c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f5c48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5C48u;
    {
        const bool branch_taken_0x2f5c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C48u;
        // 0x2f5c4c: 0x2465ffc9  addiu       $a1, $v1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c48) {
            ctx->pc = 0x2F5C68u;
            goto label_2f5c68;
        }
    }
    ctx->pc = 0x2F5C50u;
    // 0x2f5c50: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2f5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x2f5c54: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2f5c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5c5c: 0x2463ffa9  addiu       $v1, $v1, -0x57
    ctx->pc = 0x2f5c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967209));
    // 0x2f5c60: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2f5c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f5c64: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2f5c64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2f5c68:
    // 0x2f5c68: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2f5c68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2f5c6c: 0x2464ffd0  addiu       $a0, $v1, -0x30
    ctx->pc = 0x2f5c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2f5c70: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2f5c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f5c74: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f5c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f5c78: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F5C78u;
    {
        const bool branch_taken_0x2f5c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C78u;
        // 0x2f5c7c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c78) {
            ctx->pc = 0x2F5CACu;
            goto label_2f5cac;
        }
    }
    ctx->pc = 0x2F5C80u;
    // 0x2f5c80: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2f5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x2f5c84: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f5c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f5c88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5C88u;
    {
        const bool branch_taken_0x2f5c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C88u;
        // 0x2f5c8c: 0x2464ffc9  addiu       $a0, $v1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c88) {
            ctx->pc = 0x2F5CA8u;
            goto label_2f5ca8;
        }
    }
    ctx->pc = 0x2F5C90u;
    // 0x2f5c90: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2f5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x2f5c94: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2f5c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5c9c: 0x2463ffa9  addiu       $v1, $v1, -0x57
    ctx->pc = 0x2f5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967209));
    // 0x2f5ca0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2f5ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f5ca4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2f5ca4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2f5ca8:
    // 0x2f5ca8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2f5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2f5cac:
    // 0x2f5cac: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x2f5cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2f5cb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5CB0u;
    {
        const bool branch_taken_0x2f5cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CB0u;
        // 0x2f5cb4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cb0) {
            ctx->pc = 0x2F5CBCu;
            goto label_2f5cbc;
        }
    }
    ctx->pc = 0x2F5CB8u;
label_2f5cb8:
    // 0x2f5cb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f5cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f5cbc:
    // 0x2f5cbc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2f5cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5cc0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f5cc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5cc4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2F5CC4u;
    {
        const bool branch_taken_0x2f5cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CC4u;
        // 0x2f5cc8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cc4) {
            ctx->pc = 0x2F5C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5c20;
        }
    }
    ctx->pc = 0x2F5CCCu;
label_2f5ccc:
    // 0x2f5ccc: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x2f5cccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5cd0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f5cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f5cd4:
    // 0x2f5cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CDCu;
        // 0x2f5ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5CE4u;
    // 0x2f5ce4: 0x0  nop
    ctx->pc = 0x2f5ce4u;
    // NOP
    if (ctx->pc == 0x2f5ce4u) { ctx->pc = 0x2f5ce8u; }
}
