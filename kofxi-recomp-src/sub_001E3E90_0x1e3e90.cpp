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

// Function: sub_001E3E90
// Address: 0x1e3e90 - 0x1e3f00
void sub_001E3E90_0x1e3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3E90_0x1e3e90");
#endif

    switch (ctx->pc) {
        case 0x1e3ee8u: goto label_1e3ee8;
        default: break;
    }

    ctx->pc = 0x1e3e90u;

    // 0x1e3e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3e94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3e9c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1e3e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e3ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e3ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e3ea4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x1e3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1e3ea8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3EA8u;
    {
        const bool branch_taken_0x1e3ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EA8u;
        // 0x1e3eac: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ea8) {
            ctx->pc = 0x1E3ED8u;
            goto label_1e3ed8;
        }
    }
    ctx->pc = 0x1E3EB0u;
    // 0x1e3eb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3EB0u;
    {
        const bool branch_taken_0x1e3eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EB0u;
        // 0x1e3eb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3eb0) {
            ctx->pc = 0x1E3EC8u;
            goto label_1e3ec8;
        }
    }
    ctx->pc = 0x1E3EB8u;
    // 0x1e3eb8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3EB8u;
    {
        const bool branch_taken_0x1e3eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3eb8) {
            ctx->pc = 0x1E3EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3EB8u;
            // 0x1e3ebc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3EE8u;
            goto label_1e3ee8;
        }
    }
    ctx->pc = 0x1E3EC0u;
    // 0x1e3ec0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3EC0u;
    {
        const bool branch_taken_0x1e3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EC0u;
        // 0x1e3ec4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ec0) {
            ctx->pc = 0x1E3EE0u;
            goto label_1e3ee0;
        }
    }
    ctx->pc = 0x1E3EC8u;
label_1e3ec8:
    // 0x1e3ec8: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3EC8u;
    {
        const bool branch_taken_0x1e3ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EC8u;
        // 0x1e3ecc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ec8) {
            ctx->pc = 0x1E3EECu;
            goto label_1e3eec;
        }
    }
    ctx->pc = 0x1E3ED0u;
    // 0x1e3ed0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3ED0u;
    {
        const bool branch_taken_0x1e3ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ED0u;
        // 0x1e3ed4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ed0) {
            ctx->pc = 0x1E3EE0u;
            goto label_1e3ee0;
        }
    }
    ctx->pc = 0x1E3ED8u;
label_1e3ed8:
    // 0x1e3ed8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3ED8u;
    {
        const bool branch_taken_0x1e3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3ED8u;
        // 0x1e3edc: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ed8) {
            ctx->pc = 0x1E3EE8u;
            goto label_1e3ee8;
        }
    }
    ctx->pc = 0x1E3EE0u;
label_1e3ee0:
    // 0x1e3ee0: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E3EE0u;
    SET_GPR_U32(ctx, 31, 0x1E3EE8u);
    ctx->pc = 0x1E3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3EE0u;
    // 0x1e3ee4: 0x2484db30  addiu       $a0, $a0, -0x24D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E3EE0u, 0x1E3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3EE8u;
label_1e3ee8:
    // 0x1e3ee8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3eec:
    // 0x1e3eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e3ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EF4u;
        // 0x1e3ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3EFCu;
    // 0x1e3efc: 0x0  nop
    ctx->pc = 0x1e3efcu;
    // NOP
}
