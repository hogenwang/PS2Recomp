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

// Function: sub_002B2A28
// Address: 0x2b2a28 - 0x2b2b30
void sub_002B2A28_0x2b2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2A28_0x2b2a28");
#endif

    switch (ctx->pc) {
        case 0x2b2a6cu: goto label_2b2a6c;
        case 0x2b2a78u: goto label_2b2a78;
        case 0x2b2a80u: goto label_2b2a80;
        case 0x2b2aacu: goto label_2b2aac;
        case 0x2b2accu: goto label_2b2acc;
        default: break;
    }

    ctx->pc = 0x2b2a28u;

    // 0x2b2a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a38: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2a3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2b2a40: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x2b2a40u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b2a44: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2A44u;
    {
        const bool branch_taken_0x2b2a44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A44u;
        // 0x2b2a48: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a44) {
            ctx->pc = 0x2B2A58u;
            goto label_2b2a58;
        }
    }
    ctx->pc = 0x2B2A4Cu;
    // 0x2b2a4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2b2a50: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2A50u;
    {
        const bool branch_taken_0x2b2a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b2a50) {
            ctx->pc = 0x2B2A78u;
            goto label_2b2a78;
        }
    }
    ctx->pc = 0x2B2A58u;
label_2b2a58:
    // 0x2b2a58: 0x240500d5  addiu       $a1, $zero, 0xD5
    ctx->pc = 0x2b2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x2b2a5c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x2b2a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2b2a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b2a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a64: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B2A64u;
    SET_GPR_U32(ctx, 31, 0x2B2A6Cu);
    ctx->pc = 0x2B2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A64u;
    // 0x2b2a68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B2A64u, 0x2B2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A6Cu;
label_2b2a6c:
    // 0x2b2a6c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2B2A6Cu;
    {
        const bool branch_taken_0x2b2a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A6Cu;
        // 0x2b2a70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a6c) {
            ctx->pc = 0x2B2B1Cu;
            goto label_2b2b1c;
        }
    }
    ctx->pc = 0x2B2A74u;
    // 0x2b2a74: 0x0  nop
    ctx->pc = 0x2b2a74u;
    // NOP
label_2b2a78:
    // 0x2b2a78: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x2B2A78u;
    SET_GPR_U32(ctx, 31, 0x2B2A80u);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x2B2A78u, 0x2B2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A80u;
label_2b2a80:
    // 0x2b2a80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b2a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b2a84: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b2a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b2a88: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2A88u;
    {
        const bool branch_taken_0x2b2a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A88u;
        // 0x2b2a8c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a88) {
            ctx->pc = 0x2B2AB4u;
            goto label_2b2ab4;
        }
    }
    ctx->pc = 0x2B2A90u;
    // 0x2b2a90: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2a94: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b2a98: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2b2a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2b2a9c: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x2b2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b2aa0: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b2aa4: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2B2AA4u;
    SET_GPR_U32(ctx, 31, 0x2B2AACu);
    ctx->pc = 0x2B2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AA4u;
    // 0x2b2aa8: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x2B2AA4u, 0x2B2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2AACu;
label_2b2aac:
    // 0x2b2aac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2AACu;
    {
        const bool branch_taken_0x2b2aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AACu;
        // 0x2b2ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2aac) {
            ctx->pc = 0x2B2AD0u;
            goto label_2b2ad0;
        }
    }
    ctx->pc = 0x2B2AB4u;
label_2b2ab4:
    // 0x2b2ab4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b2ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b2ab8: 0x240500d5  addiu       $a1, $zero, 0xD5
    ctx->pc = 0x2b2ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x2b2abc: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x2b2abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x2b2ac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b2ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ac4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B2AC4u;
    SET_GPR_U32(ctx, 31, 0x2B2ACCu);
    ctx->pc = 0x2B2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2AC4u;
    // 0x2b2ac8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B2AC4u, 0x2B2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2ACCu;
label_2b2acc:
    // 0x2b2acc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b2accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b2ad0:
    // 0x2b2ad0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2ad4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b2ad8: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2AD8u;
    {
        const bool branch_taken_0x2b2ad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AD8u;
        // 0x2b2adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ad8) {
            ctx->pc = 0x2B2AF4u;
            goto label_2b2af4;
        }
    }
    ctx->pc = 0x2B2AE0u;
    // 0x2b2ae0: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2b2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2b2ae4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2b2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2b2ae8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2aec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B2AECu;
    {
        const bool branch_taken_0x2b2aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AECu;
        // 0x2b2af0: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2aec) {
            ctx->pc = 0x2B2B1Cu;
            goto label_2b2b1c;
        }
    }
    ctx->pc = 0x2B2AF4u;
label_2b2af4:
    // 0x2b2af4: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2AF4u;
    {
        const bool branch_taken_0x2b2af4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AF4u;
        // 0x2b2af8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2af4) {
            ctx->pc = 0x2B2B1Cu;
            goto label_2b2b1c;
        }
    }
    ctx->pc = 0x2B2AFCu;
    // 0x2b2afc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2b2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2b2b00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b2b04: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2b2b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2b2b08: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2b0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b2b10: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2b2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b2b14: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x2B2B14u;
    {
        const bool branch_taken_0x2b2b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B14u;
        // 0x2b2b18: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b14) {
            ctx->pc = 0x2B2A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b2a78;
        }
    }
    ctx->pc = 0x2B2B1Cu;
label_2b2b1c:
    // 0x2b2b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2b24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B24u;
        // 0x2b2b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2B2Cu;
    // 0x2b2b2c: 0x0  nop
    ctx->pc = 0x2b2b2cu;
    // NOP
    if (ctx->pc == 0x2b2b2cu) { ctx->pc = 0x2b2b30u; }
}
