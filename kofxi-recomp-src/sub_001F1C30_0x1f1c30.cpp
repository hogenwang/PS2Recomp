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

// Function: sub_001F1C30
// Address: 0x1f1c30 - 0x1f1cd8
void sub_001F1C30_0x1f1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1C30_0x1f1c30");
#endif

    switch (ctx->pc) {
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1cb0u: goto label_1f1cb0;
        default: break;
    }

    ctx->pc = 0x1f1c30u;

    // 0x1f1c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f1c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f1c34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f1c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1c38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f1c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f1c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f1c44: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f1c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f1c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f1c4c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1f1c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c50: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f1c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f1c54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f1c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c58: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f1c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f1c5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f1c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c60: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f1c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f1c64: 0x26022010  addiu       $v0, $s0, 0x2010
    ctx->pc = 0x1f1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8208));
    // 0x1f1c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f1c6c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f1c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c70: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1f1c70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f1c74: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1c78: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1f1c78u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1f1c7c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1C7Cu;
    {
        const bool branch_taken_0x1f1c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C7Cu;
        // 0x1f1c80: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c7c) {
            ctx->pc = 0x1F1CB4u;
            goto label_1f1cb4;
        }
    }
    ctx->pc = 0x1F1C84u;
    // 0x1f1c84: 0xc07e732  jal         func_1F9CC8
    ctx->pc = 0x1F1C84u;
    SET_GPR_U32(ctx, 31, 0x1F1C8Cu);
    ctx->pc = 0x1F9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9CC8u, 0x1F1C84u, 0x1F1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C8Cu;
label_1f1c8c:
    // 0x1f1c8c: 0x26040d88  addiu       $a0, $s0, 0xD88
    ctx->pc = 0x1f1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1f1c90: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1f1c90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1c94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f1c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c98: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f1c98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c9c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1C9Cu;
    {
        const bool branch_taken_0x1f1c9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C9Cu;
        // 0x1f1ca0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c9c) {
            ctx->pc = 0x1F1CB4u;
            goto label_1f1cb4;
        }
    }
    ctx->pc = 0x1F1CA4u;
    // 0x1f1ca4: 0x26650118  addiu       $a1, $s3, 0x118
    ctx->pc = 0x1f1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x1f1ca8: 0xc07c740  jal         func_1F1D00
    ctx->pc = 0x1F1CA8u;
    SET_GPR_U32(ctx, 31, 0x1F1CB0u);
    ctx->pc = 0x1F1CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CA8u;
    // 0x1f1cac: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1D00u, 0x1F1CA8u, 0x1F1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CB0u;
label_1f1cb0:
    // 0x1f1cb0: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1f1cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_1f1cb4:
    // 0x1f1cb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f1cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1cb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f1cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f1cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f1cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1cc0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f1cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f1cc4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f1cc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1cc8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f1cc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f1ccc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f1cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CD0u;
        // 0x1f1cd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1CD8u;
}
