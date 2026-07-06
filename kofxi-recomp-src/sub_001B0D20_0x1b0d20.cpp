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

// Function: sub_001B0D20
// Address: 0x1b0d20 - 0x1b0de8
void sub_001B0D20_0x1b0d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0D20_0x1b0d20");
#endif

    switch (ctx->pc) {
        case 0x1b0d50u: goto label_1b0d50;
        case 0x1b0d5cu: goto label_1b0d5c;
        case 0x1b0d88u: goto label_1b0d88;
        case 0x1b0da0u: goto label_1b0da0;
        case 0x1b0db4u: goto label_1b0db4;
        case 0x1b0dc8u: goto label_1b0dc8;
        default: break;
    }

    ctx->pc = 0x1b0d20u;

    // 0x1b0d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b0d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0d34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0d38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b0d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b0d3c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x1b0d3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0d40: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0D40u;
    {
        const bool branch_taken_0x1b0d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0d40) {
            ctx->pc = 0x1B0D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0D40u;
            // 0x1b0d44: 0x82110003  lb          $s1, 0x3($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0D8Cu;
            goto label_1b0d8c;
        }
    }
    ctx->pc = 0x1B0D48u;
    // 0x1b0d48: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1B0D48u;
    SET_GPR_U32(ctx, 31, 0x1B0D50u);
    ctx->pc = 0x1B0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D48u;
    // 0x1b0d4c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C60u, 0x1B0D48u, 0x1B0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D50u;
label_1b0d50:
    // 0x1b0d50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b0d54: 0xc06db42  jal         func_1B6D08
    ctx->pc = 0x1B0D54u;
    SET_GPR_U32(ctx, 31, 0x1B0D5Cu);
    ctx->pc = 0x1B0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D54u;
    // 0x1b0d58: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D08u, 0x1B0D54u, 0x1B0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D5Cu;
label_1b0d5c:
    // 0x1b0d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d60: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0d60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0d64: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1b0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0d68: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x1b0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1b0d6c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1b0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b0d70: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1b0d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b0d74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b0d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b0d78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0D78u;
    {
        const bool branch_taken_0x1b0d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D78u;
        // 0x1b0d7c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d78) {
            ctx->pc = 0x1B0D88u;
            goto label_1b0d88;
        }
    }
    ctx->pc = 0x1B0D80u;
    // 0x1b0d80: 0xc06c10c  jal         func_1B0430
    ctx->pc = 0x1B0D80u;
    SET_GPR_U32(ctx, 31, 0x1B0D88u);
    ctx->pc = 0x1B0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D80u;
    // 0x1b0d84: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0430u, 0x1B0D80u, 0x1B0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D88u;
label_1b0d88:
    // 0x1b0d88: 0x82110003  lb          $s1, 0x3($s0)
    ctx->pc = 0x1b0d88u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1b0d8c:
    // 0x1b0d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0d90: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B0D90u;
    {
        const bool branch_taken_0x1b0d90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0d90) {
            ctx->pc = 0x1B0D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0D90u;
            // 0x1b0d94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0DD4u;
            goto label_1b0dd4;
        }
    }
    ctx->pc = 0x1B0D98u;
    // 0x1b0d98: 0xc06db18  jal         func_1B6C60
    ctx->pc = 0x1B0D98u;
    SET_GPR_U32(ctx, 31, 0x1B0DA0u);
    ctx->pc = 0x1B0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D98u;
    // 0x1b0d9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C60u, 0x1B0D98u, 0x1B0DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DA0u;
label_1b0da0:
    // 0x1b0da0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b0da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0da4: 0x5651000b  bnel        $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B0DA4u;
    {
        const bool branch_taken_0x1b0da4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b0da4) {
            ctx->pc = 0x1B0DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0DA4u;
            // 0x1b0da8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0DD4u;
            goto label_1b0dd4;
        }
    }
    ctx->pc = 0x1B0DACu;
    // 0x1b0dac: 0xc06db42  jal         func_1B6D08
    ctx->pc = 0x1B0DACu;
    SET_GPR_U32(ctx, 31, 0x1B0DB4u);
    ctx->pc = 0x1B0DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DACu;
    // 0x1b0db0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D08u, 0x1B0DACu, 0x1B0DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DB4u;
label_1b0db4:
    // 0x1b0db4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0dc0: 0xc06c10c  jal         func_1B0430
    ctx->pc = 0x1B0DC0u;
    SET_GPR_U32(ctx, 31, 0x1B0DC8u);
    ctx->pc = 0x1B0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DC0u;
    // 0x1b0dc4: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0430u, 0x1B0DC0u, 0x1B0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DC8u;
label_1b0dc8:
    // 0x1b0dc8: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x1b0dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x1b0dcc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1b0dccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b0dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0dd4:
    // 0x1b0dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0ddc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b0ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE0u;
        // 0x1b0de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0DE8u;
}
