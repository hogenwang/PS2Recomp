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

// Function: sub_0028E6B8
// Address: 0x28e6b8 - 0x28e700
void sub_0028E6B8_0x28e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E6B8_0x28e6b8");
#endif

    switch (ctx->pc) {
        case 0x28e6b8u: goto label_28e6b8;
        case 0x28e6bcu: goto label_28e6bc;
        case 0x28e6c0u: goto label_28e6c0;
        case 0x28e6c4u: goto label_28e6c4;
        case 0x28e6c8u: goto label_28e6c8;
        case 0x28e6ccu: goto label_28e6cc;
        case 0x28e6d0u: goto label_28e6d0;
        case 0x28e6d4u: goto label_28e6d4;
        case 0x28e6d8u: goto label_28e6d8;
        case 0x28e6dcu: goto label_28e6dc;
        case 0x28e6e0u: goto label_28e6e0;
        case 0x28e6e4u: goto label_28e6e4;
        case 0x28e6e8u: goto label_28e6e8;
        case 0x28e6ecu: goto label_28e6ec;
        case 0x28e6f0u: goto label_28e6f0;
        case 0x28e6f4u: goto label_28e6f4;
        case 0x28e6f8u: goto label_28e6f8;
        case 0x28e6fcu: goto label_28e6fc;
        default: break;
    }

    ctx->pc = 0x28e6b8u;

label_28e6b8:
    // 0x28e6b8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e6bc:
    // 0x28e6bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e6c0:
    // 0x28e6c0: 0x8c4245e8  lw          $v0, 0x45E8($v0)
    ctx->pc = 0x28e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17896)));
label_28e6c4:
    // 0x28e6c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e6c8:
    if (ctx->pc == 0x28E6C8u) {
        ctx->pc = 0x28E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6C4u;
        // 0x28e6c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6CCu;
        goto label_28e6cc;
    }
    ctx->pc = 0x28E6C4u;
    {
        const bool branch_taken_0x28e6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6C4u;
        // 0x28e6c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6c4) {
            ctx->pc = 0x28E6ECu;
            goto label_28e6ec;
        }
    }
    ctx->pc = 0x28E6CCu;
label_28e6cc:
    // 0x28e6cc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e6d0:
    // 0x28e6d0: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x28e6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_28e6d4:
    // 0x28e6d4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e6d8:
    // 0x28e6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e6dc:
    // 0x28e6dc: 0xc0a5648  jal         func_295920
label_28e6e0:
    if (ctx->pc == 0x28E6E0u) {
        ctx->pc = 0x28E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6DCu;
        // 0x28e6e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6E4u;
        goto label_28e6e4;
    }
    ctx->pc = 0x28E6DCu;
    SET_GPR_U32(ctx, 31, 0x28E6E4u);
    ctx->pc = 0x28E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E6DCu;
    // 0x28e6e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E6DCu, 0x28E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6E4u;
label_28e6e4:
    // 0x28e6e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e6e8:
    if (ctx->pc == 0x28E6E8u) {
        ctx->pc = 0x28E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6E4u;
        // 0x28e6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6ECu;
        goto label_28e6ec;
    }
    ctx->pc = 0x28E6E4u;
    {
        const bool branch_taken_0x28e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6E4u;
        // 0x28e6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6e4) {
            ctx->pc = 0x28E6F4u;
            goto label_28e6f4;
        }
    }
    ctx->pc = 0x28E6ECu;
label_28e6ec:
    // 0x28e6ec: 0x40f809  jalr        $v0
label_28e6f0:
    if (ctx->pc == 0x28E6F0u) {
        ctx->pc = 0x28E6F4u;
        goto label_28e6f4;
    }
    ctx->pc = 0x28E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E6F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6ECu, 0x28E6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E6F4u;
label_28e6f4:
    // 0x28e6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e6f8:
    // 0x28e6f8: 0x3e00008  jr          $ra
label_28e6fc:
    if (ctx->pc == 0x28E6FCu) {
        ctx->pc = 0x28E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6F8u;
        // 0x28e6fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E700u;
        goto label_fallthrough_0x28e6f8;
    }
    ctx->pc = 0x28E6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6F8u;
        // 0x28e6fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e6f8:
    ctx->pc = 0x28E700u;
}
