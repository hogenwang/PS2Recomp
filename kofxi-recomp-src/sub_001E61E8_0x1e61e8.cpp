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

// Function: sub_001E61E8
// Address: 0x1e61e8 - 0x1e6230
void sub_001E61E8_0x1e61e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E61E8_0x1e61e8");
#endif

    switch (ctx->pc) {
        case 0x1e61e8u: goto label_1e61e8;
        case 0x1e61ecu: goto label_1e61ec;
        case 0x1e61f0u: goto label_1e61f0;
        case 0x1e61f4u: goto label_1e61f4;
        case 0x1e61f8u: goto label_1e61f8;
        case 0x1e61fcu: goto label_1e61fc;
        case 0x1e6200u: goto label_1e6200;
        case 0x1e6204u: goto label_1e6204;
        case 0x1e6208u: goto label_1e6208;
        case 0x1e620cu: goto label_1e620c;
        case 0x1e6210u: goto label_1e6210;
        case 0x1e6214u: goto label_1e6214;
        case 0x1e6218u: goto label_1e6218;
        case 0x1e621cu: goto label_1e621c;
        case 0x1e6220u: goto label_1e6220;
        case 0x1e6224u: goto label_1e6224;
        case 0x1e6228u: goto label_1e6228;
        case 0x1e622cu: goto label_1e622c;
        default: break;
    }

    ctx->pc = 0x1e61e8u;

label_1e61e8:
    // 0x1e61e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e61e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e61ec:
    // 0x1e61ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e61ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e61f0:
    // 0x1e61f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e61f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e61f4:
    // 0x1e61f4: 0xc0799fc  jal         func_1E67F0
label_1e61f8:
    if (ctx->pc == 0x1E61F8u) {
        ctx->pc = 0x1E61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61F4u;
        // 0x1e61f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61FCu;
        goto label_1e61fc;
    }
    ctx->pc = 0x1E61F4u;
    SET_GPR_U32(ctx, 31, 0x1E61FCu);
    ctx->pc = 0x1E61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E61F4u;
    // 0x1e61f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67F0u, 0x1E61F4u, 0x1E61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61FCu;
label_1e61fc:
    // 0x1e61fc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_1e6200:
    if (ctx->pc == 0x1E6200u) {
        ctx->pc = 0x1E6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61FCu;
        // 0x1e6200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6204u;
        goto label_1e6204;
    }
    ctx->pc = 0x1E61FCu;
    {
        const bool branch_taken_0x1e61fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e61fc) {
            ctx->pc = 0x1E6200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E61FCu;
            // 0x1e6200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6224u;
            goto label_1e6224;
        }
    }
    ctx->pc = 0x1E6204u;
label_1e6204:
    // 0x1e6204: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1e6208:
    if (ctx->pc == 0x1E6208u) {
        ctx->pc = 0x1E6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6204u;
        // 0x1e6208: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E620Cu;
        goto label_1e620c;
    }
    ctx->pc = 0x1E6204u;
    {
        const bool branch_taken_0x1e6204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6204) {
            ctx->pc = 0x1E6208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6204u;
            // 0x1e6208: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6224u;
            goto label_1e6224;
        }
    }
    ctx->pc = 0x1E620Cu;
label_1e620c:
    // 0x1e620c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1e620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1e6210:
    // 0x1e6210: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e6214:
    if (ctx->pc == 0x1E6214u) {
        ctx->pc = 0x1E6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6210u;
        // 0x1e6214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6218u;
        goto label_1e6218;
    }
    ctx->pc = 0x1E6210u;
    {
        const bool branch_taken_0x1e6210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6210) {
            ctx->pc = 0x1E6214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6210u;
            // 0x1e6214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6224u;
            goto label_1e6224;
        }
    }
    ctx->pc = 0x1E6218u;
label_1e6218:
    // 0x1e6218: 0x40f809  jalr        $v0
label_1e621c:
    if (ctx->pc == 0x1E621Cu) {
        ctx->pc = 0x1E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6218u;
        // 0x1e621c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6220u;
        goto label_1e6220;
    }
    ctx->pc = 0x1E6218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6220u);
        ctx->pc = 0x1E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6218u;
        // 0x1e621c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6218u, 0x1E6220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6220u;
label_1e6220:
    // 0x1e6220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6224:
    // 0x1e6224: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e6224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6228:
    // 0x1e6228: 0x3e00008  jr          $ra
label_1e622c:
    if (ctx->pc == 0x1E622Cu) {
        ctx->pc = 0x1E622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6228u;
        // 0x1e622c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6230u;
        goto label_fallthrough_0x1e6228;
    }
    ctx->pc = 0x1E6228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6228u;
        // 0x1e622c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6228:
    ctx->pc = 0x1E6230u;
}
