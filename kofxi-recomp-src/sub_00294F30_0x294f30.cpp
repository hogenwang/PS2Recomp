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

// Function: sub_00294F30
// Address: 0x294f30 - 0x295000
void sub_00294F30_0x294f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294F30_0x294f30");
#endif

    switch (ctx->pc) {
        case 0x294f9cu: goto label_294f9c;
        case 0x294facu: goto label_294fac;
        case 0x294fb4u: goto label_294fb4;
        default: break;
    }

    ctx->pc = 0x294f30u;

    // 0x294f30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294f34: 0x3e00008  jr          $ra
    ctx->pc = 0x294F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F34u;
        // 0x294f38: 0x24424bf0  addiu       $v0, $v0, 0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F3Cu;
    // 0x294f3c: 0x0  nop
    ctx->pc = 0x294f3cu;
    // NOP
    // 0x294f40: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x294f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x294f44: 0x3e00008  jr          $ra
    ctx->pc = 0x294F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F44u;
        // 0x294f48: 0xac800078  sw          $zero, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F4Cu;
    // 0x294f4c: 0x0  nop
    ctx->pc = 0x294f4cu;
    // NOP
    // 0x294f50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x294f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x294f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f58: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294F58u;
    {
        const bool branch_taken_0x294f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x294F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F58u;
        // 0x294f5c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f58) {
            ctx->pc = 0x294F68u;
            goto label_294f68;
        }
    }
    ctx->pc = 0x294F60u;
    // 0x294f60: 0x8049c48  j           func_127120
    ctx->pc = 0x294F60u;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x294F68u;
label_294f68:
    // 0x294f68: 0x3e00008  jr          $ra
    ctx->pc = 0x294F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F70u;
    // 0x294f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x294f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x294f74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x294f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x294f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294f7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x294f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x294f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x294f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x294f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x294f8c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x294F8Cu;
    {
        const bool branch_taken_0x294f8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F8Cu;
        // 0x294f90: 0x8e110078  lw          $s1, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f8c) {
            ctx->pc = 0x294FACu;
            goto label_294fac;
        }
    }
    ctx->pc = 0x294F94u;
    // 0x294f94: 0xc0a5b0c  jal         func_296C30
    ctx->pc = 0x294F94u;
    SET_GPR_U32(ctx, 31, 0x294F9Cu);
    ctx->pc = 0x296C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C30u, 0x294F94u, 0x294F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F9Cu;
label_294f9c:
    // 0x294f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x294f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fa0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x294fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fa4: 0xc049c48  jal         func_127120
    ctx->pc = 0x294FA4u;
    SET_GPR_U32(ctx, 31, 0x294FACu);
    ctx->pc = 0x294FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294FA4u;
    // 0x294fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x294FA4u, 0x294FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FACu;
label_294fac:
    // 0x294fac: 0xc0a5b0c  jal         func_296C30
    ctx->pc = 0x294FACu;
    SET_GPR_U32(ctx, 31, 0x294FB4u);
    ctx->pc = 0x294FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294FACu;
    // 0x294fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C30u, 0x294FACu, 0x294FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FB4u;
label_294fb4:
    // 0x294fb4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x294fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x294fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x294fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x294fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294fc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x294fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x294fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294fcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x294fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294fd4: 0x80aa118  j           func_2A8460
    ctx->pc = 0x294FD4u;
    ctx->pc = 0x294FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294FD4u;
    // 0x294fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8460u, 0x294FD4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x294FDCu;
    // 0x294fdc: 0x0  nop
    ctx->pc = 0x294fdcu;
    // NOP
    // 0x294fe0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x294fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fe4: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x294fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x294fe8: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x294fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x294fec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x294fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x294ff0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x294ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x294ff4: 0x80aa0e8  j           func_2A83A0
    ctx->pc = 0x294FF4u;
    ctx->pc = 0x294FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294FF4u;
    // 0x294ff8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A83A0u, 0x294FF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x294FFCu;
    // 0x294ffc: 0x0  nop
    ctx->pc = 0x294ffcu;
    // NOP
    if (ctx->pc == 0x294ffcu) { ctx->pc = 0x295000u; }
}
