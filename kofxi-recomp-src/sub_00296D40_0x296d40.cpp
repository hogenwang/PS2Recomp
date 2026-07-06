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

// Function: sub_00296D40
// Address: 0x296d40 - 0x296df8
void sub_00296D40_0x296d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296D40_0x296d40");
#endif

    switch (ctx->pc) {
        case 0x296d80u: goto label_296d80;
        case 0x296d88u: goto label_296d88;
        case 0x296d94u: goto label_296d94;
        case 0x296db4u: goto label_296db4;
        case 0x296de0u: goto label_296de0;
        default: break;
    }

    ctx->pc = 0x296d40u;

    // 0x296d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x296d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x296d54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296d58: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x296D58u;
    {
        const bool branch_taken_0x296d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D58u;
        // 0x296d5c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d58) {
            ctx->pc = 0x296DCCu;
            goto label_296dcc;
        }
    }
    ctx->pc = 0x296D60u;
    // 0x296d60: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296d64: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x296d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x296d68: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x296D68u;
    {
        const bool branch_taken_0x296d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x296d68) {
            ctx->pc = 0x296DCCu;
            goto label_296dcc;
        }
    }
    ctx->pc = 0x296D70u;
    // 0x296d70: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x296D70u;
    {
        const bool branch_taken_0x296d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d70) {
            ctx->pc = 0x296D8Cu;
            goto label_296d8c;
        }
    }
    ctx->pc = 0x296D78u;
    // 0x296d78: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296D78u;
    SET_GPR_U32(ctx, 31, 0x296D80u);
    ctx->pc = 0x296D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D78u;
    // 0x296d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296D78u, 0x296D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D80u;
label_296d80:
    // 0x296d80: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296D80u;
    SET_GPR_U32(ctx, 31, 0x296D88u);
    ctx->pc = 0x296D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D80u;
    // 0x296d84: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x296D80u, 0x296D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D88u;
label_296d88:
    // 0x296d88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x296d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_296d8c:
    // 0x296d8c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x296D8Cu;
    SET_GPR_U32(ctx, 31, 0x296D94u);
    ctx->pc = 0x296D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296D8Cu;
    // 0x296d90: 0x8c640038  lw          $a0, 0x38($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x296D8Cu, 0x296D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D94u;
label_296d94:
    // 0x296d94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296D94u;
    {
        const bool branch_taken_0x296d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D94u;
        // 0x296d98: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d94) {
            ctx->pc = 0x296DBCu;
            goto label_296dbc;
        }
    }
    ctx->pc = 0x296D9Cu;
    // 0x296d9c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x296d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x296da0: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x296da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x296da4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x296da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x296da8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x296da8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296dac: 0xc0a5648  jal         func_295920
    ctx->pc = 0x296DACu;
    SET_GPR_U32(ctx, 31, 0x296DB4u);
    ctx->pc = 0x296DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296DACu;
    // 0x296db0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x296DACu, 0x296DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296DB4u;
label_296db4:
    // 0x296db4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x296DB4u;
    {
        const bool branch_taken_0x296db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DB4u;
        // 0x296db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296db4) {
            ctx->pc = 0x296DE4u;
            goto label_296de4;
        }
    }
    ctx->pc = 0x296DBCu;
label_296dbc:
    // 0x296dbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296dc0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x296dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x296dc4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x296dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x296dc8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x296dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_296dcc:
    // 0x296dcc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296DCCu;
    {
        const bool branch_taken_0x296dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DCCu;
        // 0x296dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296dcc) {
            ctx->pc = 0x296DE4u;
            goto label_296de4;
        }
    }
    ctx->pc = 0x296DD4u;
    // 0x296dd4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x296dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296dd8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x296DD8u;
    SET_GPR_U32(ctx, 31, 0x296DE0u);
    ctx->pc = 0x296DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296DD8u;
    // 0x296ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x296DD8u, 0x296DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296DE0u;
label_296de0:
    // 0x296de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296de4:
    // 0x296de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296dec: 0x3e00008  jr          $ra
    ctx->pc = 0x296DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DECu;
        // 0x296df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296DF4u;
    // 0x296df4: 0x0  nop
    ctx->pc = 0x296df4u;
    // NOP
    if (ctx->pc == 0x296df4u) { ctx->pc = 0x296df8u; }
}
