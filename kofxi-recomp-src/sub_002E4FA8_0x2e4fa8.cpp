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

// Function: sub_002E4FA8
// Address: 0x2e4fa8 - 0x2e5018
void sub_002E4FA8_0x2e4fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4FA8_0x2e4fa8");
#endif

    switch (ctx->pc) {
        case 0x2e4fd0u: goto label_2e4fd0;
        case 0x2e4ff4u: goto label_2e4ff4;
        default: break;
    }

    ctx->pc = 0x2e4fa8u;

    // 0x2e4fa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e4fac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e4facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e4fb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e4fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e4fb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e4fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4fbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e4fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e4fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e4fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e4fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e4fc8: 0xc0b93de  jal         func_2E4F78
    ctx->pc = 0x2E4FC8u;
    SET_GPR_U32(ctx, 31, 0x2E4FD0u);
    ctx->pc = 0x2E4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FC8u;
    // 0x2e4fcc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F78u, 0x2E4FC8u, 0x2E4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FD0u;
label_2e4fd0:
    // 0x2e4fd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fd4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4FD4u;
    {
        const bool branch_taken_0x2e4fd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FD4u;
        // 0x2e4fd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fd4) {
            ctx->pc = 0x2E4FF8u;
            goto label_2e4ff8;
        }
    }
    ctx->pc = 0x2E4FDCu;
    // 0x2e4fdc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x2e4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x2e4fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fe4: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x2e4fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x2e4fe8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e4fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fec: 0xc0b93da  jal         func_2E4F68
    ctx->pc = 0x2E4FECu;
    SET_GPR_U32(ctx, 31, 0x2E4FF4u);
    ctx->pc = 0x2E4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FECu;
    // 0x2e4ff0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F68u, 0x2E4FECu, 0x2E4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FF4u;
label_2e4ff4:
    // 0x2e4ff4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e4ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4ff8:
    // 0x2e4ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e4ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4ffc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e4ffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5000: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e5000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5004: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e500c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E500Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E500Cu;
        // 0x2e5010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E500Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5014u;
    // 0x2e5014: 0x0  nop
    ctx->pc = 0x2e5014u;
    // NOP
    if (ctx->pc == 0x2e5014u) { ctx->pc = 0x2e5018u; }
}
