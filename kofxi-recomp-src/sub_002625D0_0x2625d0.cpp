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

// Function: sub_002625D0
// Address: 0x2625d0 - 0x262630
void sub_002625D0_0x2625d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002625D0_0x2625d0");
#endif

    switch (ctx->pc) {
        case 0x2625f0u: goto label_2625f0;
        case 0x262614u: goto label_262614;
        default: break;
    }

    ctx->pc = 0x2625d0u;

    // 0x2625d0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2625d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2625d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2625d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2625d8: 0x8c45d770  lw          $a1, -0x2890($v0)
    ctx->pc = 0x2625d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956912)));
    // 0x2625dc: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2625DCu;
    {
        const bool branch_taken_0x2625dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625DCu;
        // 0x2625e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625dc) {
            ctx->pc = 0x26260Cu;
            goto label_26260c;
        }
    }
    ctx->pc = 0x2625E4u;
    // 0x2625e4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2625e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2625e8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2625e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2625ec: 0x0  nop
    ctx->pc = 0x2625ecu;
    // NOP
label_2625f0:
    // 0x2625f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2625f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2625f4: 0x54660003  bnel        $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2625F4u;
    {
        const bool branch_taken_0x2625f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2625f4) {
            ctx->pc = 0x2625F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2625F4u;
            // 0x2625f8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262604u;
            goto label_262604;
        }
    }
    ctx->pc = 0x2625FCu;
    // 0x2625fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2625FCu;
    {
        const bool branch_taken_0x2625fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625FCu;
        // 0x262600: 0x2402ffe8  addiu       $v0, $zero, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625fc) {
            ctx->pc = 0x262620u;
            goto label_262620;
        }
    }
    ctx->pc = 0x262604u;
label_262604:
    // 0x262604: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x262604u;
    {
        const bool branch_taken_0x262604 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x262604) {
            ctx->pc = 0x262608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262604u;
            // 0x262608: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2625F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2625f0;
        }
    }
    ctx->pc = 0x26260Cu;
label_26260c:
    // 0x26260c: 0xc0986f8  jal         func_261BE0
    ctx->pc = 0x26260Cu;
    SET_GPR_U32(ctx, 31, 0x262614u);
    ctx->pc = 0x261BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261BE0u, 0x26260Cu, 0x262614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262614u;
label_262614:
    // 0x262614: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x262614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262618: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x262618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26261c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x26261cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_262620:
    // 0x262620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262624: 0x3e00008  jr          $ra
    ctx->pc = 0x262624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262624u;
        // 0x262628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26262Cu;
    // 0x26262c: 0x0  nop
    ctx->pc = 0x26262cu;
    // NOP
    if (ctx->pc == 0x26262cu) { ctx->pc = 0x262630u; }
}
