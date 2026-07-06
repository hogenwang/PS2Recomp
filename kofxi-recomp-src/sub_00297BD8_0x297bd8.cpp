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

// Function: sub_00297BD8
// Address: 0x297bd8 - 0x297ca8
void sub_00297BD8_0x297bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297BD8_0x297bd8");
#endif

    switch (ctx->pc) {
        case 0x297becu: goto label_297bec;
        case 0x297c04u: goto label_297c04;
        case 0x297c0cu: goto label_297c0c;
        case 0x297c1cu: goto label_297c1c;
        case 0x297c2cu: goto label_297c2c;
        case 0x297c50u: goto label_297c50;
        case 0x297c64u: goto label_297c64;
        case 0x297c78u: goto label_297c78;
        case 0x297c90u: goto label_297c90;
        default: break;
    }

    ctx->pc = 0x297bd8u;

    // 0x297bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297be0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297be4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x297BE4u;
    SET_GPR_U32(ctx, 31, 0x297BECu);
    ctx->pc = 0x297BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BE4u;
    // 0x297be8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x297BE4u, 0x297BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BECu;
label_297bec:
    // 0x297bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bf0: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x297BF0u;
    {
        const bool branch_taken_0x297bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BF0u;
        // 0x297bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bf0) {
            ctx->pc = 0x297C90u;
            goto label_297c90;
        }
    }
    ctx->pc = 0x297BF8u;
    // 0x297bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bfc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x297BFCu;
    SET_GPR_U32(ctx, 31, 0x297C04u);
    ctx->pc = 0x297C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BFCu;
    // 0x297c00: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x297BFCu, 0x297C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C04u;
label_297c04:
    // 0x297c04: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x297C04u;
    SET_GPR_U32(ctx, 31, 0x297C0Cu);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x297C04u, 0x297C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C0Cu;
label_297c0c:
    // 0x297c0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x297C0Cu;
    {
        const bool branch_taken_0x297c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C0Cu;
        // 0x297c10: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c0c) {
            ctx->pc = 0x297C3Cu;
            goto label_297c3c;
        }
    }
    ctx->pc = 0x297C14u;
    // 0x297c14: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x297C14u;
    SET_GPR_U32(ctx, 31, 0x297C1Cu);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x297C14u, 0x297C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C1Cu;
label_297c1c:
    // 0x297c1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x297C1Cu;
    {
        const bool branch_taken_0x297c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C1Cu;
        // 0x297c20: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c1c) {
            ctx->pc = 0x297C3Cu;
            goto label_297c3c;
        }
    }
    ctx->pc = 0x297C24u;
    // 0x297c24: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x297C24u;
    SET_GPR_U32(ctx, 31, 0x297C2Cu);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x297C24u, 0x297C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C2Cu;
label_297c2c:
    // 0x297c2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297C2Cu;
    {
        const bool branch_taken_0x297c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C2Cu;
        // 0x297c30: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c2c) {
            ctx->pc = 0x297C3Cu;
            goto label_297c3c;
        }
    }
    ctx->pc = 0x297C34u;
    // 0x297c34: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x297C34u;
    {
        const bool branch_taken_0x297c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C34u;
        // 0x297c38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c34) {
            ctx->pc = 0x297C94u;
            goto label_297c94;
        }
    }
    ctx->pc = 0x297C3Cu;
label_297c3c:
    // 0x297c3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x297c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x297c40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297C40u;
    {
        const bool branch_taken_0x297c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c40) {
            ctx->pc = 0x297C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C40u;
            // 0x297c44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C54u;
            goto label_297c54;
        }
    }
    ctx->pc = 0x297C48u;
    // 0x297c48: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x297C48u;
    SET_GPR_U32(ctx, 31, 0x297C50u);
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x297C48u, 0x297C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C50u;
label_297c50:
    // 0x297c50: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x297c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_297c54:
    // 0x297c54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297C54u;
    {
        const bool branch_taken_0x297c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c54) {
            ctx->pc = 0x297C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C54u;
            // 0x297c58: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C68u;
            goto label_297c68;
        }
    }
    ctx->pc = 0x297C5Cu;
    // 0x297c5c: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x297C5Cu;
    SET_GPR_U32(ctx, 31, 0x297C64u);
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x297C5Cu, 0x297C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C64u;
label_297c64:
    // 0x297c64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x297c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_297c68:
    // 0x297c68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x297C68u;
    {
        const bool branch_taken_0x297c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297c68) {
            ctx->pc = 0x297C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297C68u;
            // 0x297c6c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297C7Cu;
            goto label_297c7c;
        }
    }
    ctx->pc = 0x297C70u;
    // 0x297c70: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x297C70u;
    SET_GPR_U32(ctx, 31, 0x297C78u);
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x297C70u, 0x297C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C78u;
label_297c78:
    // 0x297c78: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x297c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_297c7c:
    // 0x297c7c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x297c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x297c80: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x297c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x297c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x297c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c88: 0xc0a5648  jal         func_295920
    ctx->pc = 0x297C88u;
    SET_GPR_U32(ctx, 31, 0x297C90u);
    ctx->pc = 0x297C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C88u;
    // 0x297c8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x297C88u, 0x297C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C90u;
label_297c90:
    // 0x297c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x297c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297c94:
    // 0x297c94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x297C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C9Cu;
        // 0x297ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297CA4u;
    // 0x297ca4: 0x0  nop
    ctx->pc = 0x297ca4u;
    // NOP
}
