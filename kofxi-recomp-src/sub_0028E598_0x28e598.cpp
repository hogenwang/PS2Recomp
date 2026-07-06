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

// Function: sub_0028E598
// Address: 0x28e598 - 0x28e5e0
void sub_0028E598_0x28e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E598_0x28e598");
#endif

    switch (ctx->pc) {
        case 0x28e598u: goto label_28e598;
        case 0x28e59cu: goto label_28e59c;
        case 0x28e5a0u: goto label_28e5a0;
        case 0x28e5a4u: goto label_28e5a4;
        case 0x28e5a8u: goto label_28e5a8;
        case 0x28e5acu: goto label_28e5ac;
        case 0x28e5b0u: goto label_28e5b0;
        case 0x28e5b4u: goto label_28e5b4;
        case 0x28e5b8u: goto label_28e5b8;
        case 0x28e5bcu: goto label_28e5bc;
        case 0x28e5c0u: goto label_28e5c0;
        case 0x28e5c4u: goto label_28e5c4;
        case 0x28e5c8u: goto label_28e5c8;
        case 0x28e5ccu: goto label_28e5cc;
        case 0x28e5d0u: goto label_28e5d0;
        case 0x28e5d4u: goto label_28e5d4;
        case 0x28e5d8u: goto label_28e5d8;
        case 0x28e5dcu: goto label_28e5dc;
        default: break;
    }

    ctx->pc = 0x28e598u;

label_28e598:
    // 0x28e598: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e59c:
    // 0x28e59c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e5a0:
    // 0x28e5a0: 0x8c4245d8  lw          $v0, 0x45D8($v0)
    ctx->pc = 0x28e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17880)));
label_28e5a4:
    // 0x28e5a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e5a8:
    if (ctx->pc == 0x28E5A8u) {
        ctx->pc = 0x28E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A4u;
        // 0x28e5a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5ACu;
        goto label_28e5ac;
    }
    ctx->pc = 0x28E5A4u;
    {
        const bool branch_taken_0x28e5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A4u;
        // 0x28e5a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5a4) {
            ctx->pc = 0x28E5CCu;
            goto label_28e5cc;
        }
    }
    ctx->pc = 0x28E5ACu;
label_28e5ac:
    // 0x28e5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e5b0:
    // 0x28e5b0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e5b4:
    // 0x28e5b4: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x28e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_28e5b8:
    // 0x28e5b8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e5bc:
    // 0x28e5bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e5c0:
    // 0x28e5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e5c4:
    // 0x28e5c4: 0x80a5648  j           func_295920
label_28e5c8:
    if (ctx->pc == 0x28E5C8u) {
        ctx->pc = 0x28E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5C4u;
        // 0x28e5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5CCu;
        goto label_28e5cc;
    }
    ctx->pc = 0x28E5C4u;
    ctx->pc = 0x28E5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5C4u;
    // 0x28e5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    sub_00295920_0x295920(rdram, ctx, runtime); return;
    ctx->pc = 0x28E5CCu;
label_28e5cc:
    // 0x28e5cc: 0x40f809  jalr        $v0
label_28e5d0:
    if (ctx->pc == 0x28E5D0u) {
        ctx->pc = 0x28E5D4u;
        goto label_28e5d4;
    }
    ctx->pc = 0x28E5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E5D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E5CCu, 0x28E5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E5D4u;
label_28e5d4:
    // 0x28e5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e5d8:
    // 0x28e5d8: 0x3e00008  jr          $ra
label_28e5dc:
    if (ctx->pc == 0x28E5DCu) {
        ctx->pc = 0x28E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5D8u;
        // 0x28e5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5E0u;
        goto label_fallthrough_0x28e5d8;
    }
    ctx->pc = 0x28E5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5D8u;
        // 0x28e5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e5d8:
    ctx->pc = 0x28E5E0u;
}
