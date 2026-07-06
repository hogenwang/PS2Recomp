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

// Function: sub_001EF060
// Address: 0x1ef060 - 0x1ef0c8
void sub_001EF060_0x1ef060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF060_0x1ef060");
#endif

    switch (ctx->pc) {
        case 0x1ef08cu: goto label_1ef08c;
        case 0x1ef0a4u: goto label_1ef0a4;
        default: break;
    }

    ctx->pc = 0x1ef060u;

    // 0x1ef060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef06c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef070: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ef070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef078: 0x26021fcc  addiu       $v0, $s0, 0x1FCC
    ctx->pc = 0x1ef078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8140));
    // 0x1ef07c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ef07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ef080: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ef084: 0xc07ad76  jal         func_1EB5D8
    ctx->pc = 0x1EF084u;
    SET_GPR_U32(ctx, 31, 0x1EF08Cu);
    ctx->pc = 0x1EF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF084u;
    // 0x1ef088: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB5D8u, 0x1EF084u, 0x1EF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF08Cu;
label_1ef08c:
    // 0x1ef08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef094: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF094u;
    {
        const bool branch_taken_0x1ef094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF094u;
        // 0x1ef098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef094) {
            ctx->pc = 0x1EF0A8u;
            goto label_1ef0a8;
        }
    }
    ctx->pc = 0x1EF09Cu;
    // 0x1ef09c: 0xc07bb66  jal         func_1EED98
    ctx->pc = 0x1EF09Cu;
    SET_GPR_U32(ctx, 31, 0x1EF0A4u);
    ctx->pc = 0x1EF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF09Cu;
    // 0x1ef0a0: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EED98u, 0x1EF09Cu, 0x1EF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF0A4u;
label_1ef0a4:
    // 0x1ef0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef0a8:
    // 0x1ef0a8: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF0A8u;
    {
        const bool branch_taken_0x1ef0a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0a8) {
            ctx->pc = 0x1EF0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF0A8u;
            // 0x1ef0ac: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF0B0u;
            goto label_1ef0b0;
        }
    }
    ctx->pc = 0x1EF0B0u;
label_1ef0b0:
    // 0x1ef0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef0b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef0b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef0bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0C0u;
        // 0x1ef0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF0C8u;
}
