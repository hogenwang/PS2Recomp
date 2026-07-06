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

// Function: sub_001F8348
// Address: 0x1f8348 - 0x1f83a0
void sub_001F8348_0x1f8348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8348_0x1f8348");
#endif

    switch (ctx->pc) {
        case 0x1f8390u: goto label_1f8390;
        default: break;
    }

    ctx->pc = 0x1f8348u;

    // 0x1f8348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f834c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8354: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f8354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8358: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1f8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1f835c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F835Cu;
    {
        const bool branch_taken_0x1f835c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F835Cu;
        // 0x1f8360: 0x24a60950  addiu       $a2, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f835c) {
            ctx->pc = 0x1F8380u;
            goto label_1f8380;
        }
    }
    ctx->pc = 0x1F8364u;
    // 0x1f8364: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x1f8364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1f8368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f836c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F836Cu;
    {
        const bool branch_taken_0x1f836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F836Cu;
        // 0x1f8370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f836c) {
            ctx->pc = 0x1F8394u;
            goto label_1f8394;
        }
    }
    ctx->pc = 0x1F8374u;
    // 0x1f8374: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1f8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1f8378: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8378u;
    {
        const bool branch_taken_0x1f8378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8378) {
            ctx->pc = 0x1F8388u;
            goto label_1f8388;
        }
    }
    ctx->pc = 0x1F8380u;
label_1f8380:
    // 0x1f8380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8380u;
    {
        const bool branch_taken_0x1f8380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8380u;
        // 0x1f8384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8380) {
            ctx->pc = 0x1F8394u;
            goto label_1f8394;
        }
    }
    ctx->pc = 0x1F8388u;
label_1f8388:
    // 0x1f8388: 0xc07eebe  jal         func_1FBAF8
    ctx->pc = 0x1F8388u;
    SET_GPR_U32(ctx, 31, 0x1F8390u);
    ctx->pc = 0x1FBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBAF8u, 0x1F8388u, 0x1F8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8390u;
label_1f8390:
    // 0x1f8390: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f8390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f8394:
    // 0x1f8394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8398: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8398u;
        // 0x1f839c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F83A0u;
}
