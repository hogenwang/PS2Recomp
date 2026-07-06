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

// Function: sub_00264AA0
// Address: 0x264aa0 - 0x264c58
void sub_00264AA0_0x264aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264AA0_0x264aa0");
#endif

    switch (ctx->pc) {
        case 0x264ac0u: goto label_264ac0;
        case 0x264ad0u: goto label_264ad0;
        case 0x264ad4u: goto label_264ad4;
        case 0x264b00u: goto label_264b00;
        case 0x264b9cu: goto label_264b9c;
        case 0x264be8u: goto label_264be8;
        case 0x264bf0u: goto label_264bf0;
        case 0x264c40u: goto label_264c40;
        default: break;
    }

    ctx->pc = 0x264aa0u;

label_264aa0:
    // 0x264aa0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x264aa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264aa4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x264aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x264aa8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x264AA8u;
    {
        const bool branch_taken_0x264aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AA8u;
        // 0x264aac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264aa8) {
            ctx->pc = 0x264B58u;
            goto label_264b58;
        }
    }
    ctx->pc = 0x264AB0u;
    // 0x264ab0: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x264ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x264ab4: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x264ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x264ab8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x264ab8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264abc: 0x0  nop
    ctx->pc = 0x264abcu;
    // NOP
label_264ac0:
    // 0x264ac0: 0x10660021  beq         $v1, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x264AC0u;
    {
        const bool branch_taken_0x264ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ac0) {
            ctx->pc = 0x264B48u;
            goto label_264b48;
        }
    }
    ctx->pc = 0x264AC8u;
    // 0x264ac8: 0x1446000f  bne         $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x264AC8u;
    {
        const bool branch_taken_0x264ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x264ac8) {
            ctx->pc = 0x264B08u;
            goto label_264b08;
        }
    }
    ctx->pc = 0x264AD0u;
label_264ad0:
    // 0x264ad0: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x264ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_264ad4:
    // 0x264ad4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x264ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x264ad8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x264AD8u;
    {
        const bool branch_taken_0x264ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AD8u;
        // 0x264adc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ad8) {
            ctx->pc = 0x264B4Cu;
            goto label_264b4c;
        }
    }
    ctx->pc = 0x264AE0u;
    // 0x264ae0: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x264ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x264ae4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x264ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x264ae8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x264AE8u;
    {
        const bool branch_taken_0x264ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AE8u;
        // 0x264aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ae8) {
            ctx->pc = 0x264B4Cu;
            goto label_264b4c;
        }
    }
    ctx->pc = 0x264AF0u;
    // 0x264af0: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x264af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x264af4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x264af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x264af8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x264AF8u;
    {
        const bool branch_taken_0x264af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AF8u;
        // 0x264afc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264af8) {
            ctx->pc = 0x264B4Cu;
            goto label_264b4c;
        }
    }
    ctx->pc = 0x264B00u;
label_264b00:
    // 0x264b00: 0x3e00008  jr          $ra
    ctx->pc = 0x264B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B00u;
        // 0x264b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264B08u;
label_264b08:
    // 0x264b08: 0x10a6fff2  beq         $a1, $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x264B08u;
    {
        const bool branch_taken_0x264b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x264B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B08u;
        // 0x264b0c: 0x2462ffbf  addiu       $v0, $v1, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b08) {
            ctx->pc = 0x264AD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264ad4;
        }
    }
    ctx->pc = 0x264B10u;
    // 0x264b10: 0x10a0ffef  beqz        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x264B10u;
    {
        const bool branch_taken_0x264b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B10u;
        // 0x264b14: 0x2c42001a  sltiu       $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b10) {
            ctx->pc = 0x264AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264ad0;
        }
    }
    ctx->pc = 0x264B18u;
    // 0x264b18: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x264B18u;
    {
        const bool branch_taken_0x264b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B18u;
        // 0x264b1c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b18) {
            ctx->pc = 0x264B4Cu;
            goto label_264b4c;
        }
    }
    ctx->pc = 0x264B20u;
    // 0x264b20: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x264b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x264b24: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x264b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x264b28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264B28u;
    {
        const bool branch_taken_0x264b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B28u;
        // 0x264b2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b28) {
            ctx->pc = 0x264B4Cu;
            goto label_264b4c;
        }
    }
    ctx->pc = 0x264B30u;
    // 0x264b30: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x264b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x264b34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x264b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x264b38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264B38u;
    {
        const bool branch_taken_0x264b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B38u;
        // 0x264b3c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b38) {
            ctx->pc = 0x264B4Cu;
            goto label_264b4c;
        }
    }
    ctx->pc = 0x264B40u;
    // 0x264b40: 0x1467ffef  bne         $v1, $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x264B40u;
    {
        const bool branch_taken_0x264b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x264b40) {
            ctx->pc = 0x264B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264b00;
        }
    }
    ctx->pc = 0x264B48u;
label_264b48:
    // 0x264b48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x264b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_264b4c:
    // 0x264b4c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x264b4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b50: 0x5460ffdb  bnel        $v1, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x264B50u;
    {
        const bool branch_taken_0x264b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264b50) {
            ctx->pc = 0x264B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264B50u;
            // 0x264b54: 0x80850000  lb          $a1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264ac0;
        }
    }
    ctx->pc = 0x264B58u;
label_264b58:
    // 0x264b58: 0x3e00008  jr          $ra
    ctx->pc = 0x264B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B58u;
        // 0x264b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264B60u;
    // 0x264b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264b64: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x264b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x264b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264b6c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x264b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264b70: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x264B70u;
    {
        const bool branch_taken_0x264b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x264B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B70u;
        // 0x264b74: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b70) {
            ctx->pc = 0x264B94u;
            goto label_264b94;
        }
    }
    ctx->pc = 0x264B78u;
    // 0x264b78: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x264b78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x264b7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264B7Cu;
    {
        const bool branch_taken_0x264b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x264b7c) {
            ctx->pc = 0x264B8Cu;
            goto label_264b8c;
        }
    }
    ctx->pc = 0x264B84u;
    // 0x264b84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264B84u;
    {
        const bool branch_taken_0x264b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B84u;
        // 0x264b88: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b84) {
            ctx->pc = 0x264B94u;
            goto label_264b94;
        }
    }
    ctx->pc = 0x264B8Cu;
label_264b8c:
    // 0x264b8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264B8Cu;
    {
        const bool branch_taken_0x264b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B8Cu;
        // 0x264b90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b8c) {
            ctx->pc = 0x264B9Cu;
            goto label_264b9c;
        }
    }
    ctx->pc = 0x264B94u;
label_264b94:
    // 0x264b94: 0xc0992a8  jal         func_264AA0
    ctx->pc = 0x264B94u;
    SET_GPR_U32(ctx, 31, 0x264B9Cu);
    ctx->pc = 0x264AA0u;
    goto label_264aa0;
    ctx->pc = 0x264B9Cu;
label_264b9c:
    // 0x264b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x264BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BA0u;
        // 0x264ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264BA8u;
    // 0x264ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264bac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x264bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264bb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264BB0u;
    {
        const bool branch_taken_0x264bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BB0u;
        // 0x264bb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bb0) {
            ctx->pc = 0x264BC0u;
            goto label_264bc0;
        }
    }
    ctx->pc = 0x264BB8u;
    // 0x264bb8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x264BB8u;
    {
        const bool branch_taken_0x264bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BB8u;
        // 0x264bbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bb8) {
            ctx->pc = 0x264C4Cu;
            goto label_264c4c;
        }
    }
    ctx->pc = 0x264BC0u;
label_264bc0:
    // 0x264bc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x264bc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bc4: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x264bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x264bc8: 0x2462ffdf  addiu       $v0, $v1, -0x21
    ctx->pc = 0x264bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967263));
    // 0x264bcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x264bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264bd0: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x264bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x264bd4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x264BD4u;
    {
        const bool branch_taken_0x264bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BD4u;
        // 0x264bd8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bd4) {
            ctx->pc = 0x264C48u;
            goto label_264c48;
        }
    }
    ctx->pc = 0x264BDCu;
    // 0x264bdc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x264BDCu;
    {
        const bool branch_taken_0x264bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264bdc) {
            ctx->pc = 0x264C24u;
            goto label_264c24;
        }
    }
    ctx->pc = 0x264BE4u;
    // 0x264be4: 0x0  nop
    ctx->pc = 0x264be4u;
    // NOP
label_264be8:
    // 0x264be8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264BE8u;
    {
        const bool branch_taken_0x264be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BE8u;
        // 0x264bec: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264be8) {
            ctx->pc = 0x264BFCu;
            goto label_264bfc;
        }
    }
    ctx->pc = 0x264BF0u;
label_264bf0:
    // 0x264bf0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x264bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264bf4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x264bf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264bf8: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x264bf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_264bfc:
    // 0x264bfc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x264bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x264c00: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x264c00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x264c04: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x264C04u;
    {
        const bool branch_taken_0x264c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C04u;
        // 0x264c08: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c04) {
            ctx->pc = 0x264C2Cu;
            goto label_264c2c;
        }
    }
    ctx->pc = 0x264C0Cu;
    // 0x264c0c: 0x2462ffdf  addiu       $v0, $v1, -0x21
    ctx->pc = 0x264c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967263));
    // 0x264c10: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x264c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x264c14: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x264C14u;
    {
        const bool branch_taken_0x264c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c14) {
            ctx->pc = 0x264C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264C14u;
            // 0x264c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264C4Cu;
            goto label_264c4c;
        }
    }
    ctx->pc = 0x264C1Cu;
    // 0x264c1c: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x264C1Cu;
    {
        const bool branch_taken_0x264c1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x264C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C1Cu;
        // 0x264c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c1c) {
            ctx->pc = 0x264BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264be8;
        }
    }
    ctx->pc = 0x264C24u;
label_264c24:
    // 0x264c24: 0x1466fff2  bne         $v1, $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x264C24u;
    {
        const bool branch_taken_0x264c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x264C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C24u;
        // 0x264c28: 0x3862005c  xori        $v0, $v1, 0x5C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)92);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c24) {
            ctx->pc = 0x264BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264bf0;
        }
    }
    ctx->pc = 0x264C2Cu;
label_264c2c:
    // 0x264c2c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x264c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x264c30: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264C30u;
    {
        const bool branch_taken_0x264c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C30u;
        // 0x264c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c30) {
            ctx->pc = 0x264C4Cu;
            goto label_264c4c;
        }
    }
    ctx->pc = 0x264C38u;
    // 0x264c38: 0xc0992a8  jal         func_264AA0
    ctx->pc = 0x264C38u;
    SET_GPR_U32(ctx, 31, 0x264C40u);
    ctx->pc = 0x264AA0u;
    goto label_264aa0;
    ctx->pc = 0x264C40u;
label_264c40:
    // 0x264c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C40u;
    {
        const bool branch_taken_0x264c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C40u;
        // 0x264c44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c40) {
            ctx->pc = 0x264C50u;
            goto label_264c50;
        }
    }
    ctx->pc = 0x264C48u;
label_264c48:
    // 0x264c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x264c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264c4c:
    // 0x264c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264c50:
    // 0x264c50: 0x3e00008  jr          $ra
    ctx->pc = 0x264C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C50u;
        // 0x264c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264C58u;
}
