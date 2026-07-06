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

// Function: sub_001F4EB8
// Address: 0x1f4eb8 - 0x1f4f30
void sub_001F4EB8_0x1f4eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4EB8_0x1f4eb8");
#endif

    switch (ctx->pc) {
        case 0x1f4ee4u: goto label_1f4ee4;
        case 0x1f4f08u: goto label_1f4f08;
        default: break;
    }

    ctx->pc = 0x1f4eb8u;

    // 0x1f4eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EB8u;
        // 0x1f4ebc: 0x24a2fff8  addiu       $v0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4EC0u;
    // 0x1f4ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4ec4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f4ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f4ec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ecc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f4eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f4ed0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f4ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f4ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f4ed8: 0x8e302018  lw          $s0, 0x2018($s1)
    ctx->pc = 0x1f4ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8216)));
    // 0x1f4edc: 0xc07d3cc  jal         func_1F4F30
    ctx->pc = 0x1F4EDCu;
    SET_GPR_U32(ctx, 31, 0x1F4EE4u);
    ctx->pc = 0x1F4EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EDCu;
    // 0x1f4ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F30u, 0x1F4EDCu, 0x1F4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4EE4u;
label_1f4ee4:
    // 0x1f4ee4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F4EE4u;
    {
        const bool branch_taken_0x1f4ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ee4) {
            ctx->pc = 0x1F4EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4EE4u;
            // 0x1f4ee8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F20u;
            goto label_1f4f20;
        }
    }
    ctx->pc = 0x1F4EECu;
    // 0x1f4eec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4ef0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4ef4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4EF4u;
    {
        const bool branch_taken_0x1f4ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EF4u;
        // 0x1f4ef8: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ef4) {
            ctx->pc = 0x1F4F10u;
            goto label_1f4f10;
        }
    }
    ctx->pc = 0x1F4EFCu;
    // 0x1f4efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f00: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F4F00u;
    SET_GPR_U32(ctx, 31, 0x1F4F08u);
    ctx->pc = 0x1F4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F00u;
    // 0x1f4f04: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F4F00u, 0x1F4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F08u;
label_1f4f08:
    // 0x1f4f08: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4F08u;
    {
        const bool branch_taken_0x1f4f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f08) {
            ctx->pc = 0x1F4F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F08u;
            // 0x1f4f0c: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F14u;
            goto label_1f4f14;
        }
    }
    ctx->pc = 0x1F4F10u;
label_1f4f10:
    // 0x1f4f10: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1f4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1f4f14:
    // 0x1f4f14: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1f4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1f4f18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f4f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4f20:
    // 0x1f4f20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f4f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f4f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F28u;
        // 0x1f4f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4F30u;
}
