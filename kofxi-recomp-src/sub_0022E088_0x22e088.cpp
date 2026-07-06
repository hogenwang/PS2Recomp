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

// Function: sub_0022E088
// Address: 0x22e088 - 0x22e130
void sub_0022E088_0x22e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E088_0x22e088");
#endif

    switch (ctx->pc) {
        case 0x22e0c8u: goto label_22e0c8;
        case 0x22e0d8u: goto label_22e0d8;
        case 0x22e0e0u: goto label_22e0e0;
        default: break;
    }

    ctx->pc = 0x22e088u;

    // 0x22e088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22e08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22e094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e098: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22e09c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22E09Cu;
    {
        const bool branch_taken_0x22e09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E09Cu;
        // 0x22e0a0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e09c) {
            ctx->pc = 0x22E120u;
            goto label_22e120;
        }
    }
    ctx->pc = 0x22E0A4u;
    // 0x22e0a4: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x22e0a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x22e0a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e0ac: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x22E0ACu;
    {
        const bool branch_taken_0x22e0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0ac) {
            ctx->pc = 0x22E0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E0ACu;
            // 0x22e0b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E124u;
            goto label_22e124;
        }
    }
    ctx->pc = 0x22E0B4u;
    // 0x22e0b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x22e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22e0b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E0B8u;
    {
        const bool branch_taken_0x22e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0b8) {
            ctx->pc = 0x22E0D0u;
            goto label_22e0d0;
        }
    }
    ctx->pc = 0x22E0C0u;
    // 0x22e0c0: 0xc08c1d4  jal         func_230750
    ctx->pc = 0x22E0C0u;
    SET_GPR_U32(ctx, 31, 0x22E0C8u);
    ctx->pc = 0x22E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0C0u;
    // 0x22e0c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230750u, 0x22E0C0u, 0x22E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0C8u;
label_22e0c8:
    // 0x22e0c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22E0C8u;
    {
        const bool branch_taken_0x22e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0C8u;
        // 0x22e0cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0c8) {
            ctx->pc = 0x22E120u;
            goto label_22e120;
        }
    }
    ctx->pc = 0x22E0D0u;
label_22e0d0:
    // 0x22e0d0: 0xc08c29c  jal         func_230A70
    ctx->pc = 0x22E0D0u;
    SET_GPR_U32(ctx, 31, 0x22E0D8u);
    ctx->pc = 0x22E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0D0u;
    // 0x22e0d4: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230A70u, 0x22E0D0u, 0x22E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0D8u;
label_22e0d8:
    // 0x22e0d8: 0xc08be54  jal         func_22F950
    ctx->pc = 0x22E0D8u;
    SET_GPR_U32(ctx, 31, 0x22E0E0u);
    ctx->pc = 0x22E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0D8u;
    // 0x22e0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F950u, 0x22E0D8u, 0x22E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E0E0u;
label_22e0e0:
    // 0x22e0e0: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x22e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x22e0e4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E0E4u;
    {
        const bool branch_taken_0x22e0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e0e4) {
            ctx->pc = 0x22E0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E0E4u;
            // 0x22e0e8: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E0F8u;
            goto label_22e0f8;
        }
    }
    ctx->pc = 0x22E0ECu;
    // 0x22e0ec: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22e0f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22E0F0u;
    {
        const bool branch_taken_0x22e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0F0u;
        // 0x22e0f4: 0xac6200d4  sw          $v0, 0xD4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0f0) {
            ctx->pc = 0x22E100u;
            goto label_22e100;
        }
    }
    ctx->pc = 0x22E0F8u;
label_22e0f8:
    // 0x22e0f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x22e0fc: 0xac43fa1c  sw          $v1, -0x5E4($v0)
    ctx->pc = 0x22e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965788), GPR_U32(ctx, 3));
label_22e100:
    // 0x22e100: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22e104: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x22e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x22e108: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22e108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22e110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e118: 0x8098560  j           func_261580
    ctx->pc = 0x22E118u;
    ctx->pc = 0x22E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E118u;
    // 0x22e11c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    sub_00261580_0x261580(rdram, ctx, runtime); return;
    ctx->pc = 0x22E120u;
label_22e120:
    // 0x22e120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e124:
    // 0x22e124: 0x3e00008  jr          $ra
    ctx->pc = 0x22E124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E124u;
        // 0x22e128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E12Cu;
    // 0x22e12c: 0x0  nop
    ctx->pc = 0x22e12cu;
    // NOP
    if (ctx->pc == 0x22e12cu) { ctx->pc = 0x22e130u; }
}
