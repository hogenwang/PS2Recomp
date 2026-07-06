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

// Function: sub_001DF878
// Address: 0x1df878 - 0x1df8f8
void sub_001DF878_0x1df878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF878_0x1df878");
#endif

    switch (ctx->pc) {
        case 0x1df8c8u: goto label_1df8c8;
        default: break;
    }

    ctx->pc = 0x1df878u;

    // 0x1df878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df87c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1df87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1df880: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1df880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df884: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1df884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1df888: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1df888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1df88c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1df88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1df890: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1df890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1df894: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1df894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df898: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1df898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1df89c: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1df89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1df8a0: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1df8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1df8a4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF8A4u;
    {
        const bool branch_taken_0x1df8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8A4u;
        // 0x1df8a8: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8a4) {
            ctx->pc = 0x1DF8C8u;
            goto label_1df8c8;
        }
    }
    ctx->pc = 0x1DF8ACu;
    // 0x1df8ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF8ACu;
    {
        const bool branch_taken_0x1df8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ACu;
        // 0x1df8b0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ac) {
            ctx->pc = 0x1DF8CCu;
            goto label_1df8cc;
        }
    }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1df8b8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1df8bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1df8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8c0: 0xc080cde  jal         func_203378
    ctx->pc = 0x1DF8C0u;
    SET_GPR_U32(ctx, 31, 0x1DF8C8u);
    ctx->pc = 0x1DF8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8C0u;
    // 0x1df8c4: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203378u, 0x1DF8C0u, 0x1DF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8C8u;
label_1df8c8:
    // 0x1df8c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1df8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1df8cc:
    // 0x1df8cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF8CCu;
    {
        const bool branch_taken_0x1df8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8CCu;
        // 0x1df8d0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8cc) {
            ctx->pc = 0x1DF8E4u;
            goto label_1df8e4;
        }
    }
    ctx->pc = 0x1DF8D4u;
    // 0x1df8d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8D4u;
    {
        const bool branch_taken_0x1df8d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1df8d4) {
            ctx->pc = 0x1DF8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF8D4u;
            // 0x1df8d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF8E8u;
            goto label_1df8e8;
        }
    }
    ctx->pc = 0x1DF8DCu;
    // 0x1df8dc: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1df8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1df8e0: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x1df8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_1df8e4:
    // 0x1df8e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1df8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df8e8:
    // 0x1df8e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1df8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ECu;
        // 0x1df8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF8F4u;
    // 0x1df8f4: 0x0  nop
    ctx->pc = 0x1df8f4u;
    // NOP
}
