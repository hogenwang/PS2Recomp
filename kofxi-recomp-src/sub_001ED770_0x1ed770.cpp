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

// Function: sub_001ED770
// Address: 0x1ed770 - 0x1ed7b0
void sub_001ED770_0x1ed770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED770_0x1ed770");
#endif

    switch (ctx->pc) {
        case 0x1ed770u: goto label_1ed770;
        case 0x1ed774u: goto label_1ed774;
        case 0x1ed778u: goto label_1ed778;
        case 0x1ed77cu: goto label_1ed77c;
        case 0x1ed780u: goto label_1ed780;
        case 0x1ed784u: goto label_1ed784;
        case 0x1ed788u: goto label_1ed788;
        case 0x1ed78cu: goto label_1ed78c;
        case 0x1ed790u: goto label_1ed790;
        case 0x1ed794u: goto label_1ed794;
        case 0x1ed798u: goto label_1ed798;
        case 0x1ed79cu: goto label_1ed79c;
        case 0x1ed7a0u: goto label_1ed7a0;
        case 0x1ed7a4u: goto label_1ed7a4;
        case 0x1ed7a8u: goto label_1ed7a8;
        case 0x1ed7acu: goto label_1ed7ac;
        default: break;
    }

    ctx->pc = 0x1ed770u;

label_1ed770:
    // 0x1ed770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ed774:
    // 0x1ed774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ed778:
    // 0x1ed778: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ed778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ed77c:
    // 0x1ed77c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1ed780:
    if (ctx->pc == 0x1ED780u) {
        ctx->pc = 0x1ED780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED77Cu;
        // 0x1ed780: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED784u;
        goto label_1ed784;
    }
    ctx->pc = 0x1ED77Cu;
    {
        const bool branch_taken_0x1ed77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED77Cu;
        // 0x1ed780: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed77c) {
            ctx->pc = 0x1ED788u;
            goto label_1ed788;
        }
    }
    ctx->pc = 0x1ED784u;
label_1ed784:
    // 0x1ed784: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ed784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1ed788:
    // 0x1ed788: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1ed78c:
    if (ctx->pc == 0x1ED78Cu) {
        ctx->pc = 0x1ED78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED788u;
        // 0x1ed78c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED790u;
        goto label_1ed790;
    }
    ctx->pc = 0x1ED788u;
    {
        const bool branch_taken_0x1ed788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED788u;
        // 0x1ed78c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed788) {
            ctx->pc = 0x1ED7A8u;
            goto label_1ed7a8;
        }
    }
    ctx->pc = 0x1ED790u;
label_1ed790:
    // 0x1ed790: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ed794:
    // 0x1ed794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ed798:
    if (ctx->pc == 0x1ED798u) {
        ctx->pc = 0x1ED79Cu;
        goto label_1ed79c;
    }
    ctx->pc = 0x1ED794u;
    {
        const bool branch_taken_0x1ed794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed794) {
            ctx->pc = 0x1ED7A8u;
            goto label_1ed7a8;
        }
    }
    ctx->pc = 0x1ED79Cu;
label_1ed79c:
    // 0x1ed79c: 0x40f809  jalr        $v0
label_1ed7a0:
    if (ctx->pc == 0x1ED7A0u) {
        ctx->pc = 0x1ED7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED79Cu;
        // 0x1ed7a0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7A4u;
        goto label_1ed7a4;
    }
    ctx->pc = 0x1ED79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED7A4u);
        ctx->pc = 0x1ED7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED79Cu;
        // 0x1ed7a0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED79Cu, 0x1ED7A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED7A4u;
label_1ed7a4:
    // 0x1ed7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed7a8:
    // 0x1ed7a8: 0x3e00008  jr          $ra
label_1ed7ac:
    if (ctx->pc == 0x1ED7ACu) {
        ctx->pc = 0x1ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7A8u;
        // 0x1ed7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED7B0u;
        goto label_fallthrough_0x1ed7a8;
    }
    ctx->pc = 0x1ED7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7A8u;
        // 0x1ed7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ed7a8:
    ctx->pc = 0x1ED7B0u;
}
