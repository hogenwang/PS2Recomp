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

// Function: sub_001E8EF0
// Address: 0x1e8ef0 - 0x1e8fa8
void sub_001E8EF0_0x1e8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8EF0_0x1e8ef0");
#endif

    switch (ctx->pc) {
        case 0x1e8f08u: goto label_1e8f08;
        case 0x1e8f30u: goto label_1e8f30;
        case 0x1e8f40u: goto label_1e8f40;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8f58u: goto label_1e8f58;
        default: break;
    }

    ctx->pc = 0x1e8ef0u;

    // 0x1e8ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8efc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8f00: 0xc07a67c  jal         func_1E99F0
    ctx->pc = 0x1E8F00u;
    SET_GPR_U32(ctx, 31, 0x1E8F08u);
    ctx->pc = 0x1E8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F00u;
    // 0x1e8f04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E99F0u, 0x1E8F00u, 0x1E8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F08u;
label_1e8f08:
    // 0x1e8f08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e8f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f0c: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E8F0Cu;
    {
        const bool branch_taken_0x1e8f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f0c) {
            ctx->pc = 0x1E8F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8F0Cu;
            // 0x1e8f10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8F94u;
            goto label_1e8f94;
        }
    }
    ctx->pc = 0x1E8F14u;
    // 0x1e8f14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e8f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e8f18: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E8F18u;
    {
        const bool branch_taken_0x1e8f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f18) {
            ctx->pc = 0x1E8F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8F18u;
            // 0x1e8f1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8F94u;
            goto label_1e8f94;
        }
    }
    ctx->pc = 0x1E8F20u;
    // 0x1e8f20: 0x8e02205c  lw          $v0, 0x205C($s0)
    ctx->pc = 0x1e8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8284)));
    // 0x1e8f24: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e8f24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8f28: 0xc07a3ea  jal         func_1E8FA8
    ctx->pc = 0x1E8F28u;
    SET_GPR_U32(ctx, 31, 0x1E8F30u);
    ctx->pc = 0x1E8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F28u;
    // 0x1e8f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8FA8u, 0x1E8F28u, 0x1E8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F30u;
label_1e8f30:
    // 0x1e8f30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E8F30u;
    {
        const bool branch_taken_0x1e8f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F30u;
        // 0x1e8f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f30) {
            ctx->pc = 0x1E8F90u;
            goto label_1e8f90;
        }
    }
    ctx->pc = 0x1E8F38u;
    // 0x1e8f38: 0xc06e6d2  jal         func_1B9B48
    ctx->pc = 0x1E8F38u;
    SET_GPR_U32(ctx, 31, 0x1E8F40u);
    ctx->pc = 0x1B9B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9B48u, 0x1E8F38u, 0x1E8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F40u;
label_1e8f40:
    // 0x1e8f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f44: 0xc06e6b0  jal         func_1B9AC0
    ctx->pc = 0x1E8F44u;
    SET_GPR_U32(ctx, 31, 0x1E8F4Cu);
    ctx->pc = 0x1E8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F44u;
    // 0x1e8f48: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9AC0u, 0x1E8F44u, 0x1E8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F4Cu;
label_1e8f4c:
    // 0x1e8f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f50: 0xc06e6f4  jal         func_1B9BD0
    ctx->pc = 0x1E8F50u;
    SET_GPR_U32(ctx, 31, 0x1E8F58u);
    ctx->pc = 0x1E8F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8F50u;
    // 0x1e8f54: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9BD0u, 0x1E8F50u, 0x1E8F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8F58u;
label_1e8f58:
    // 0x1e8f58: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e8f5c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1e8f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1e8f60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8f64: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1e8f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e8f68: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e8f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e8f6c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1e8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1e8f70: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1e8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e8f74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e8f78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e8f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f7c: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x1e8f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1e8f80: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x1e8f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e8f84: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1e8f84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1e8f88: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1e8f88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1e8f8c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1e8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1e8f90:
    // 0x1e8f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e8f94:
    // 0x1e8f94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e8f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F9Cu;
        // 0x1e8fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8FA4u;
    // 0x1e8fa4: 0x0  nop
    ctx->pc = 0x1e8fa4u;
    // NOP
    if (ctx->pc == 0x1e8fa4u) { ctx->pc = 0x1e8fa8u; }
}
