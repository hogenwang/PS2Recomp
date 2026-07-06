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

// Function: sub_00261AD8
// Address: 0x261ad8 - 0x261be0
void sub_00261AD8_0x261ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261AD8_0x261ad8");
#endif

    switch (ctx->pc) {
        case 0x261b10u: goto label_261b10;
        case 0x261b40u: goto label_261b40;
        case 0x261b50u: goto label_261b50;
        case 0x261b6cu: goto label_261b6c;
        case 0x261b80u: goto label_261b80;
        default: break;
    }

    ctx->pc = 0x261ad8u;

    // 0x261ad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x261ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x261adc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x261adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x261ae0: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x261ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x261ae4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x261ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x261ae8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x261ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x261aec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x261aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261af0: 0x8e62d768  lw          $v0, -0x2898($s3)
    ctx->pc = 0x261af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956904)));
    // 0x261af4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261af8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x261af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x261afc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x261AFCu;
    {
        const bool branch_taken_0x261afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AFCu;
        // 0x261b00: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261afc) {
            ctx->pc = 0x261B48u;
            goto label_261b48;
        }
    }
    ctx->pc = 0x261B04u;
    // 0x261b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x261B08u;
    {
        const bool branch_taken_0x261b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B08u;
        // 0x261b0c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b08) {
            ctx->pc = 0x261B1Cu;
            goto label_261b1c;
        }
    }
    ctx->pc = 0x261B10u;
label_261b10:
    // 0x261b10: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x261b14: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x261B14u;
    {
        const bool branch_taken_0x261b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b14) {
            ctx->pc = 0x261B48u;
            goto label_261b48;
        }
    }
    ctx->pc = 0x261B1Cu;
label_261b1c:
    // 0x261b1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x261b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x261b20: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x261B20u;
    {
        const bool branch_taken_0x261b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x261B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B20u;
        // 0x261b24: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b20) {
            ctx->pc = 0x261B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261b10;
        }
    }
    ctx->pc = 0x261B28u;
    // 0x261b28: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x261B28u;
    {
        const bool branch_taken_0x261b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B28u;
        // 0x261b2c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b28) {
            ctx->pc = 0x261B48u;
            goto label_261b48;
        }
    }
    ctx->pc = 0x261B30u;
    // 0x261b30: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x261b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x261b34: 0x24a57238  addiu       $a1, $a1, 0x7238
    ctx->pc = 0x261b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29240));
    // 0x261b38: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x261B38u;
    SET_GPR_U32(ctx, 31, 0x261B40u);
    ctx->pc = 0x261B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B38u;
    // 0x261b3c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x261B38u, 0x261B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B40u;
label_261b40:
    // 0x261b40: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x261B40u;
    {
        const bool branch_taken_0x261b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B40u;
        // 0x261b44: 0x2402ffe7  addiu       $v0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b40) {
            ctx->pc = 0x261BC4u;
            goto label_261bc4;
        }
    }
    ctx->pc = 0x261B48u;
label_261b48:
    // 0x261b48: 0xc098552  jal         func_261548
    ctx->pc = 0x261B48u;
    SET_GPR_U32(ctx, 31, 0x261B50u);
    ctx->pc = 0x261B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B48u;
    // 0x261b4c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x261B48u, 0x261B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B50u;
label_261b50:
    // 0x261b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b54: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x261B54u;
    {
        const bool branch_taken_0x261b54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x261B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B54u;
        // 0x261b58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b54) {
            ctx->pc = 0x261B74u;
            goto label_261b74;
        }
    }
    ctx->pc = 0x261B5Cu;
    // 0x261b5c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x261b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x261b60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x261b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x261b64: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x261B64u;
    SET_GPR_U32(ctx, 31, 0x261B6Cu);
    ctx->pc = 0x261B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B64u;
    // 0x261b68: 0x24a57268  addiu       $a1, $a1, 0x7268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x261B64u, 0x261B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B6Cu;
label_261b6c:
    // 0x261b6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x261B6Cu;
    {
        const bool branch_taken_0x261b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B6Cu;
        // 0x261b70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b6c) {
            ctx->pc = 0x261BC4u;
            goto label_261bc4;
        }
    }
    ctx->pc = 0x261B74u;
label_261b74:
    // 0x261b74: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x261b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x261b78: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x261B78u;
    SET_GPR_U32(ctx, 31, 0x261B80u);
    ctx->pc = 0x261B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B78u;
    // 0x261b7c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x261B78u, 0x261B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B80u;
label_261b80:
    // 0x261b80: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x261b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x261b84: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x261b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x261b88: 0x8c641a00  lw          $a0, 0x1A00($v1)
    ctx->pc = 0x261b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6656)));
    // 0x261b8c: 0x8c451a04  lw          $a1, 0x1A04($v0)
    ctx->pc = 0x261b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6660)));
    // 0x261b90: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x261b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x261b94: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x261B94u;
    {
        const bool branch_taken_0x261b94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x261B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B94u;
        // 0x261b98: 0xae050028  sw          $a1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b94) {
            ctx->pc = 0x261BB0u;
            goto label_261bb0;
        }
    }
    ctx->pc = 0x261B9Cu;
    // 0x261b9c: 0x8e62d768  lw          $v0, -0x2898($s3)
    ctx->pc = 0x261b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956904)));
    // 0x261ba0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x261ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x261ba4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261BA4u;
    {
        const bool branch_taken_0x261ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BA4u;
        // 0x261ba8: 0xae70d768  sw          $s0, -0x2898($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294956904), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ba4) {
            ctx->pc = 0x261BC0u;
            goto label_261bc0;
        }
    }
    ctx->pc = 0x261BACu;
    // 0x261bac: 0x0  nop
    ctx->pc = 0x261bacu;
    // NOP
label_261bb0:
    // 0x261bb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x261bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x261bb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x261bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x261bb8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x261bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x261bbc: 0x0  nop
    ctx->pc = 0x261bbcu;
    // NOP
label_261bc0:
    // 0x261bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x261bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261bc4:
    // 0x261bc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x261bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261bc8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x261bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261bcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x261bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261bd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x261bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x261BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BD8u;
        // 0x261bdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261BE0u;
}
