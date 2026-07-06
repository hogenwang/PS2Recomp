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

// Function: sub_001A4B80
// Address: 0x1a4b80 - 0x1a4c80
void sub_001A4B80_0x1a4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4B80_0x1a4b80");
#endif

    switch (ctx->pc) {
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4c1cu: goto label_1a4c1c;
        default: break;
    }

    ctx->pc = 0x1a4b80u;

    // 0x1a4b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a4b84: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4b88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b98: 0x8c44b8f0  lw          $a0, -0x4710($v0)
    ctx->pc = 0x1a4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949104)));
    // 0x1a4b9c: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x1a4b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x1a4ba0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4BA0u;
    {
        const bool branch_taken_0x1a4ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BA0u;
        // 0x1a4ba4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ba0) {
            ctx->pc = 0x1A4BB4u;
            goto label_1a4bb4;
        }
    }
    ctx->pc = 0x1A4BA8u;
    // 0x1a4ba8: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x1a4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a4bac: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1a4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1a4bb0: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1a4bb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a4bb4:
    // 0x1a4bb4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4BB4u;
    {
        const bool branch_taken_0x1a4bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bb4) {
            ctx->pc = 0x1A4BF0u;
            goto label_1a4bf0;
        }
    }
    ctx->pc = 0x1A4BBCu;
    // 0x1a4bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4bc0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4bc4:
    // 0x1a4bc4: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4BC4u;
    {
        const bool branch_taken_0x1a4bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4bc4) {
            ctx->pc = 0x1A4BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4BC4u;
            // 0x1a4bc8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4BE8u;
            goto label_1a4be8;
        }
    }
    ctx->pc = 0x1A4BCCu;
    // 0x1a4bcc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a4bd0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1a4bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a4bd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4BD4u;
    {
        const bool branch_taken_0x1a4bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bd4) {
            ctx->pc = 0x1A4BE4u;
            goto label_1a4be4;
        }
    }
    ctx->pc = 0x1A4BDCu;
    // 0x1a4bdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4BDCu;
    {
        const bool branch_taken_0x1a4bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BDCu;
        // 0x1a4be0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bdc) {
            ctx->pc = 0x1A4BF0u;
            goto label_1a4bf0;
        }
    }
    ctx->pc = 0x1A4BE4u;
label_1a4be4:
    // 0x1a4be4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1a4be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a4be8:
    // 0x1a4be8: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A4BE8u;
    {
        const bool branch_taken_0x1a4be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4be8) {
            ctx->pc = 0x1A4BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4BE8u;
            // 0x1a4bec: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a4bc4;
        }
    }
    ctx->pc = 0x1A4BF0u;
label_1a4bf0:
    // 0x1a4bf0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4BF0u;
    {
        const bool branch_taken_0x1a4bf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bf0) {
            ctx->pc = 0x1A4BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4BF0u;
            // 0x1a4bf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C00u;
            goto label_1a4c00;
        }
    }
    ctx->pc = 0x1A4BF8u;
    // 0x1a4bf8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1A4BF8u;
    {
        const bool branch_taken_0x1a4bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BF8u;
        // 0x1a4bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bf8) {
            ctx->pc = 0x1A4C64u;
            goto label_1a4c64;
        }
    }
    ctx->pc = 0x1A4C00u;
label_1a4c00:
    // 0x1a4c00: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a4c04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4c08: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x1a4c08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a4c0c: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4C0Cu;
    {
        const bool branch_taken_0x1a4c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c0c) {
            ctx->pc = 0x1A4C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4C0Cu;
            // 0x1a4c10: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C64u;
            goto label_1a4c64;
        }
    }
    ctx->pc = 0x1A4C14u;
    // 0x1a4c14: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A4C14u;
    SET_GPR_U32(ctx, 31, 0x1A4C1Cu);
    ctx->pc = 0x1A49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49D0u, 0x1A4C14u, 0x1A4C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C1Cu;
label_1a4c1c:
    // 0x1a4c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4c20: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a4c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a4c24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4c28: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1a4c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a4c2c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1a4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1a4c30: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a4c34: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a4c38: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a4c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a4c3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a4c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4c40: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a4c44: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a4c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1a4c48: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1a4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1a4c4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a4c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4c50: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4C50u;
    {
        const bool branch_taken_0x1a4c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c50) {
            ctx->pc = 0x1A4C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4C50u;
            // 0x1a4c54: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4C60u;
            goto label_1a4c60;
        }
    }
    ctx->pc = 0x1A4C58u;
    // 0x1a4c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a4c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a4c5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a4c60:
    // 0x1a4c60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4c64:
    // 0x1a4c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C70u;
        // 0x1a4c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C78u;
    // 0x1a4c78: 0x0  nop
    ctx->pc = 0x1a4c78u;
    // NOP
    // 0x1a4c7c: 0x0  nop
    ctx->pc = 0x1a4c7cu;
    // NOP
}
