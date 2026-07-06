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

// Function: sub_001E7BB8
// Address: 0x1e7bb8 - 0x1e7cb0
void sub_001E7BB8_0x1e7bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7BB8_0x1e7bb8");
#endif

    switch (ctx->pc) {
        case 0x1e7bc0u: goto label_1e7bc0;
        case 0x1e7bd8u: goto label_1e7bd8;
        case 0x1e7be8u: goto label_1e7be8;
        case 0x1e7c14u: goto label_1e7c14;
        case 0x1e7c34u: goto label_1e7c34;
        case 0x1e7c40u: goto label_1e7c40;
        case 0x1e7c58u: goto label_1e7c58;
        case 0x1e7c78u: goto label_1e7c78;
        case 0x1e7ca0u: goto label_1e7ca0;
        default: break;
    }

    ctx->pc = 0x1e7bb8u;

    // 0x1e7bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BB8u;
        // 0x1e7bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7BC0u;
label_1e7bc0:
    // 0x1e7bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7bc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7BC8u;
    {
        const bool branch_taken_0x1e7bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BC8u;
        // 0x1e7bcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bc8) {
            ctx->pc = 0x1E7BDCu;
            goto label_1e7bdc;
        }
    }
    ctx->pc = 0x1E7BD0u;
    // 0x1e7bd0: 0xc06de74  jal         func_1B79D0
    ctx->pc = 0x1E7BD0u;
    SET_GPR_U32(ctx, 31, 0x1E7BD8u);
    ctx->pc = 0x1B79D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79D0u, 0x1E7BD0u, 0x1E7BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BD8u;
label_1e7bd8:
    // 0x1e7bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7bdc:
    // 0x1e7bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BE0u;
        // 0x1e7be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7BE8u;
label_1e7be8:
    // 0x1e7be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BE8u;
        // 0x1e7bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7BF0u;
    // 0x1e7bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7c00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e7c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c04: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7C04u;
    {
        const bool branch_taken_0x1e7c04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C04u;
        // 0x1e7c08: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c04) {
            ctx->pc = 0x1E7C20u;
            goto label_1e7c20;
        }
    }
    ctx->pc = 0x1E7C0Cu;
    // 0x1e7c0c: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1E7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C14u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1E7C0Cu, 0x1E7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C14u;
label_1e7c14:
    // 0x1e7c14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E7C14u;
    {
        const bool branch_taken_0x1e7c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C14u;
        // 0x1e7c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c14) {
            ctx->pc = 0x1E7C7Cu;
            goto label_1e7c7c;
        }
    }
    ctx->pc = 0x1E7C1Cu;
    // 0x1e7c1c: 0x0  nop
    ctx->pc = 0x1e7c1cu;
    // NOP
label_1e7c20:
    // 0x1e7c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7c24: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7C24u;
    {
        const bool branch_taken_0x1e7c24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7c24) {
            ctx->pc = 0x1E7C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7C24u;
            // 0x1e7c28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7C48u;
            goto label_1e7c48;
        }
    }
    ctx->pc = 0x1E7C2Cu;
    // 0x1e7c2c: 0xc06db42  jal         func_1B6D08
    ctx->pc = 0x1E7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C34u);
    ctx->pc = 0x1B6D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D08u, 0x1E7C2Cu, 0x1E7C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C34u;
label_1e7c34:
    // 0x1e7c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c38: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1E7C38u;
    SET_GPR_U32(ctx, 31, 0x1E7C40u);
    ctx->pc = 0x1E7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C38u;
    // 0x1e7c3c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1E7C38u, 0x1E7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C40u;
label_1e7c40:
    // 0x1e7c40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E7C40u;
    {
        const bool branch_taken_0x1e7c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C40u;
        // 0x1e7c44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c40) {
            ctx->pc = 0x1E7C7Cu;
            goto label_1e7c7c;
        }
    }
    ctx->pc = 0x1E7C48u;
label_1e7c48:
    // 0x1e7c48: 0x54c2000c  bnel        $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E7C48u;
    {
        const bool branch_taken_0x1e7c48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7c48) {
            ctx->pc = 0x1E7C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7C48u;
            // 0x1e7c4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7C7Cu;
            goto label_1e7c7c;
        }
    }
    ctx->pc = 0x1E7C50u;
    // 0x1e7c50: 0xc06de8c  jal         func_1B7A30
    ctx->pc = 0x1E7C50u;
    SET_GPR_U32(ctx, 31, 0x1E7C58u);
    ctx->pc = 0x1B7A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A30u, 0x1E7C50u, 0x1E7C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C58u;
label_1e7c58:
    // 0x1e7c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c5c: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1e7c60: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x1e7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
    // 0x1e7c64: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1e7c64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e7c68: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1e7c68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1e7c6c: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x1e7c6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    // 0x1e7c70: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1E7C70u;
    SET_GPR_U32(ctx, 31, 0x1E7C78u);
    ctx->pc = 0x1E7C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C70u;
    // 0x1e7c74: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1E7C70u, 0x1E7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C78u;
label_1e7c78:
    // 0x1e7c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7c7c:
    // 0x1e7c7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C88u;
        // 0x1e7c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7C90u;
    // 0x1e7c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7c98: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1E7C98u;
    SET_GPR_U32(ctx, 31, 0x1E7CA0u);
    ctx->pc = 0x1B6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D90u, 0x1E7C98u, 0x1E7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CA0u;
label_1e7ca0:
    // 0x1e7ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CA8u;
        // 0x1e7cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7CB0u;
}
