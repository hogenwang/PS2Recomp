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

// Function: sub_002E8A28
// Address: 0x2e8a28 - 0x2e8b28
void sub_002E8A28_0x2e8a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8A28_0x2e8a28");
#endif

    switch (ctx->pc) {
        case 0x2e8a3cu: goto label_2e8a3c;
        case 0x2e8a5cu: goto label_2e8a5c;
        case 0x2e8ae8u: goto label_2e8ae8;
        case 0x2e8af4u: goto label_2e8af4;
        default: break;
    }

    ctx->pc = 0x2e8a28u;

    // 0x2e8a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e8a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e8a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e8a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e8a34: 0xc098552  jal         func_261548
    ctx->pc = 0x2E8A34u;
    SET_GPR_U32(ctx, 31, 0x2E8A3Cu);
    ctx->pc = 0x2E8A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A34u;
    // 0x2e8a38: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2E8A34u, 0x2E8A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A3Cu;
label_2e8a3c:
    // 0x2e8a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e8a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a40: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8A40u;
    {
        const bool branch_taken_0x2e8a40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A40u;
        // 0x2e8a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a40) {
            ctx->pc = 0x2E8A50u;
            goto label_2e8a50;
        }
    }
    ctx->pc = 0x2E8A48u;
    // 0x2e8a48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E8A48u;
    {
        const bool branch_taken_0x2e8a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8A48u;
        // 0x2e8a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8a48) {
            ctx->pc = 0x2E8AA0u;
            goto label_2e8aa0;
        }
    }
    ctx->pc = 0x2E8A50u;
label_2e8a50:
    // 0x2e8a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a54: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E8A54u;
    SET_GPR_U32(ctx, 31, 0x2E8A5Cu);
    ctx->pc = 0x2E8A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A54u;
    // 0x2e8a58: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2E8A54u, 0x2E8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8A5Cu;
label_2e8a5c:
    // 0x2e8a5c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2e8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2e8a60: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2e8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2e8a64: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2e8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x2e8a68: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e8a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e8a6c: 0x24638798  addiu       $v1, $v1, -0x7868
    ctx->pc = 0x2e8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936472));
    // 0x2e8a70: 0x24428568  addiu       $v0, $v0, -0x7A98
    ctx->pc = 0x2e8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935912));
    // 0x2e8a74: 0x24848ab0  addiu       $a0, $a0, -0x7550
    ctx->pc = 0x2e8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937264));
    // 0x2e8a78: 0x24a58ac0  addiu       $a1, $a1, -0x7540
    ctx->pc = 0x2e8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
    // 0x2e8a7c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2e8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2e8a80: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2e8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2e8a84: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2e8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2e8a88: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x2e8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x2e8a8c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e8a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e8a90: 0x8c62ea08  lw          $v0, -0x15F8($v1)
    ctx->pc = 0x2e8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961672)));
    // 0x2e8a94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2e8a98: 0xac70ea08  sw          $s0, -0x15F8($v1)
    ctx->pc = 0x2e8a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961672), GPR_U32(ctx, 16));
    // 0x2e8a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e8a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8aa0:
    // 0x2e8aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AA8u;
        // 0x2e8aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8AB0u;
    // 0x2e8ab0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e8ab4: 0x8043328  j           func_10CCA0
    ctx->pc = 0x2E8AB4u;
    ctx->pc = 0x2E8AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AB4u;
    // 0x2e8ab8: 0x8c44ea18  lw          $a0, -0x15E8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E8ABCu;
    // 0x2e8abc: 0x0  nop
    ctx->pc = 0x2e8abcu;
    // NOP
    // 0x2e8ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e8ac4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e8ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8acc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8ad0: 0x8c50ea08  lw          $s0, -0x15F8($v0)
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e8ad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ad8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E8AD8u;
    {
        const bool branch_taken_0x2e8ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AD8u;
        // 0x2e8adc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ad8) {
            ctx->pc = 0x2E8B0Cu;
            goto label_2e8b0c;
        }
    }
    ctx->pc = 0x2E8AE0u;
    // 0x2e8ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ae4: 0x0  nop
    ctx->pc = 0x2e8ae4u;
    // NOP
label_2e8ae8:
    // 0x2e8ae8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2e8ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e8aec: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E8AECu;
    SET_GPR_U32(ctx, 31, 0x2E8AF4u);
    ctx->pc = 0x2E8AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AECu;
    // 0x2e8af0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E8AECu, 0x2E8AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8AF4u;
label_2e8af4:
    // 0x2e8af4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8AF4u;
    {
        const bool branch_taken_0x2e8af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8af4) {
            ctx->pc = 0x2E8AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8AF4u;
            // 0x2e8af8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B04u;
            goto label_2e8b04;
        }
    }
    ctx->pc = 0x2E8AFCu;
    // 0x2e8afc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8AFCu;
    {
        const bool branch_taken_0x2e8afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AFCu;
        // 0x2e8b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8afc) {
            ctx->pc = 0x2E8B10u;
            goto label_2e8b10;
        }
    }
    ctx->pc = 0x2E8B04u;
label_2e8b04:
    // 0x2e8b04: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E8B04u;
    {
        const bool branch_taken_0x2e8b04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B04u;
        // 0x2e8b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b04) {
            ctx->pc = 0x2E8AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8ae8;
        }
    }
    ctx->pc = 0x2E8B0Cu;
label_2e8b0c:
    // 0x2e8b0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b10:
    // 0x2e8b10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8b14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B1Cu;
        // 0x2e8b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8B24u;
    // 0x2e8b24: 0x0  nop
    ctx->pc = 0x2e8b24u;
    // NOP
    if (ctx->pc == 0x2e8b24u) { ctx->pc = 0x2e8b28u; }
}
