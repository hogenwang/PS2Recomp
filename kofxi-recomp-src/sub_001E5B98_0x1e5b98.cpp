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

// Function: sub_001E5B98
// Address: 0x1e5b98 - 0x1e5c60
void sub_001E5B98_0x1e5b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5B98_0x1e5b98");
#endif

    switch (ctx->pc) {
        case 0x1e5bd8u: goto label_1e5bd8;
        case 0x1e5bf0u: goto label_1e5bf0;
        case 0x1e5c14u: goto label_1e5c14;
        case 0x1e5c28u: goto label_1e5c28;
        default: break;
    }

    ctx->pc = 0x1e5b98u;

    // 0x1e5b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5bac: 0x8e0204dc  lw          $v0, 0x4DC($s0)
    ctx->pc = 0x1e5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1244)));
    // 0x1e5bb0: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E5BB0u;
    {
        const bool branch_taken_0x1e5bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5bb0) {
            ctx->pc = 0x1E5BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5BB0u;
            // 0x1e5bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C44u;
            goto label_1e5c44;
        }
    }
    ctx->pc = 0x1E5BB8u;
    // 0x1e5bb8: 0x8e0204e0  lw          $v0, 0x4E0($s0)
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1248)));
    // 0x1e5bbc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E5BBCu;
    {
        const bool branch_taken_0x1e5bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BBCu;
        // 0x1e5bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bbc) {
            ctx->pc = 0x1E5C40u;
            goto label_1e5c40;
        }
    }
    ctx->pc = 0x1E5BC4u;
    // 0x1e5bc4: 0x8e0304ec  lw          $v1, 0x4EC($s0)
    ctx->pc = 0x1e5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x1e5bc8: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E5BC8u;
    {
        const bool branch_taken_0x1e5bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5bc8) {
            ctx->pc = 0x1E5BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5BC8u;
            // 0x1e5bcc: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C00u;
            goto label_1e5c00;
        }
    }
    ctx->pc = 0x1E5BD0u;
    // 0x1e5bd0: 0xc078a9e  jal         func_1E2A78
    ctx->pc = 0x1E5BD0u;
    SET_GPR_U32(ctx, 31, 0x1E5BD8u);
    ctx->pc = 0x1E2A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2A78u, 0x1E5BD0u, 0x1E5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5BD8u;
label_1e5bd8:
    // 0x1e5bd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e5bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5bdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5be0: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5BE0u;
    {
        const bool branch_taken_0x1e5be0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5be0) {
            ctx->pc = 0x1E5BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5BE0u;
            // 0x1e5be4: 0x8e0304ec  lw          $v1, 0x4EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5BFCu;
            goto label_1e5bfc;
        }
    }
    ctx->pc = 0x1E5BE8u;
    // 0x1e5be8: 0xc079746  jal         func_1E5D18
    ctx->pc = 0x1E5BE8u;
    SET_GPR_U32(ctx, 31, 0x1E5BF0u);
    ctx->pc = 0x1E5BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BE8u;
    // 0x1e5bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5D18u, 0x1E5BE8u, 0x1E5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5BF0u;
label_1e5bf0:
    // 0x1e5bf0: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5BF0u;
    {
        const bool branch_taken_0x1e5bf0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BF0u;
        // 0x1e5bf4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bf0) {
            ctx->pc = 0x1E5C40u;
            goto label_1e5c40;
        }
    }
    ctx->pc = 0x1E5BF8u;
    // 0x1e5bf8: 0xae1104ec  sw          $s1, 0x4EC($s0)
    ctx->pc = 0x1e5bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 17));
label_1e5bfc:
    // 0x1e5bfc: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x1e5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1e5c00:
    // 0x1e5c00: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1e5c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e5c04: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1E5C04u;
    {
        const bool branch_taken_0x1e5c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c04) {
            ctx->pc = 0x1E5C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C04u;
            // 0x1e5c08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C44u;
            goto label_1e5c44;
        }
    }
    ctx->pc = 0x1E5C0Cu;
    // 0x1e5c0c: 0xc078aba  jal         func_1E2AE8
    ctx->pc = 0x1E5C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C14u);
    ctx->pc = 0x1E5C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C0Cu;
    // 0x1e5c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2AE8u, 0x1E5C0Cu, 0x1E5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C14u;
label_1e5c14:
    // 0x1e5c14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5c18: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5C18u;
    {
        const bool branch_taken_0x1e5c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5c18) {
            ctx->pc = 0x1E5C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C18u;
            // 0x1e5c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5C2Cu;
            goto label_1e5c2c;
        }
    }
    ctx->pc = 0x1E5C20u;
    // 0x1e5c20: 0xc079718  jal         func_1E5C60
    ctx->pc = 0x1E5C20u;
    SET_GPR_U32(ctx, 31, 0x1E5C28u);
    ctx->pc = 0x1E5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C20u;
    // 0x1e5c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5C60u, 0x1E5C20u, 0x1E5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C28u;
label_1e5c28:
    // 0x1e5c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5c2c:
    // 0x1e5c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5c38: 0x8079776  j           func_1E5DD8
    ctx->pc = 0x1E5C38u;
    ctx->pc = 0x1E5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C38u;
    // 0x1e5c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5DD8u, 0x1E5C38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E5C40u;
label_1e5c40:
    // 0x1e5c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5c44:
    // 0x1e5c44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C4Cu;
        // 0x1e5c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5C54u;
    // 0x1e5c54: 0x0  nop
    ctx->pc = 0x1e5c54u;
    // NOP
    // 0x1e5c58: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C58u;
        // 0x1e5c5c: 0x8c820504  lw          $v0, 0x504($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1284)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5C60u;
}
