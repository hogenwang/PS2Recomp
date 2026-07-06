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

// Function: sub_001F30D8
// Address: 0x1f30d8 - 0x1f3128
void sub_001F30D8_0x1f30d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F30D8_0x1f30d8");
#endif

    switch (ctx->pc) {
        case 0x1f3118u: goto label_1f3118;
        default: break;
    }

    ctx->pc = 0x1f30d8u;

    // 0x1f30d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f30d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f30dc: 0x2485370c  addiu       $a1, $a0, 0x370C
    ctx->pc = 0x1f30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 14092));
    // 0x1f30e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f30e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f30e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f30e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30e8: 0x24830ea0  addiu       $v1, $a0, 0xEA0
    ctx->pc = 0x1f30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3744));
    // 0x1f30ec: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1f30ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f30f0: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F30F0u;
    {
        const bool branch_taken_0x1f30f0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1F30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30F0u;
        // 0x1f30f4: 0x24880e48  addiu       $t0, $a0, 0xE48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30f0) {
            ctx->pc = 0x1F311Cu;
            goto label_1f311c;
        }
    }
    ctx->pc = 0x1F30F8u;
    // 0x1f30f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f30fc: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F30FCu;
    {
        const bool branch_taken_0x1f30fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f30fc) {
            ctx->pc = 0x1F3100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F30FCu;
            // 0x1f3100: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3120u;
            goto label_1f3120;
        }
    }
    ctx->pc = 0x1F3104u;
    // 0x1f3104: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f3104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3108: 0x8d060024  lw          $a2, 0x24($t0)
    ctx->pc = 0x1f3108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x1f310c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1f310cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f3110: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1F3110u;
    SET_GPR_U32(ctx, 31, 0x1F3118u);
    ctx->pc = 0x1F3114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3110u;
    // 0x1f3114: 0x8d070028  lw          $a3, 0x28($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1F3110u, 0x1F3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3118u;
label_1f3118:
    // 0x1f3118: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f311c:
    // 0x1f311c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3120:
    // 0x1f3120: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3120u;
        // 0x1f3124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3128u;
}
