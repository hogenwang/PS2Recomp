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

// Function: sub_001CAC40
// Address: 0x1cac40 - 0x1cacd0
void sub_001CAC40_0x1cac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAC40_0x1cac40");
#endif

    switch (ctx->pc) {
        case 0x1cacb4u: goto label_1cacb4;
        case 0x1cacbcu: goto label_1cacbc;
        default: break;
    }

    ctx->pc = 0x1cac40u;

    // 0x1cac40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cac44: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAC44u;
    {
        const bool branch_taken_0x1cac44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC44u;
        // 0x1cac48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac44) {
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CAC4Cu;
    // 0x1cac4c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cac50: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cac54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cac58: 0x2484b8d8  addiu       $a0, $a0, -0x4728
    ctx->pc = 0x1cac58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949080));
    // 0x1cac5c: 0x24a5b868  addiu       $a1, $a1, -0x4798
    ctx->pc = 0x1cac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948968));
    // 0x1cac60: 0x8072a14  j           func_1CA850
    ctx->pc = 0x1CAC60u;
    ctx->pc = 0x1CAC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC60u;
    // 0x1cac64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAC68u;
label_1cac68:
    // 0x1cac68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cac6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAC6Cu;
    {
        const bool branch_taken_0x1cac6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC6Cu;
        // 0x1cac70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac6c) {
            ctx->pc = 0x1CAC90u;
            goto label_1cac90;
        }
    }
    ctx->pc = 0x1CAC74u;
    // 0x1cac74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cac78: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cac7c: 0x2484b8e8  addiu       $a0, $a0, -0x4718
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949096));
    // 0x1cac80: 0x24a5b898  addiu       $a1, $a1, -0x4768
    ctx->pc = 0x1cac80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
    // 0x1cac84: 0x8072a14  j           func_1CA850
    ctx->pc = 0x1CAC84u;
    ctx->pc = 0x1CAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC84u;
    // 0x1cac88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    sub_001CA850_0x1ca850(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAC8Cu;
    // 0x1cac8c: 0x0  nop
    ctx->pc = 0x1cac8cu;
    // NOP
label_1cac90:
    // 0x1cac90: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x1cac90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x1cac94: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x1cac94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x1cac98: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC98u;
        // 0x1cac9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CACA0u;
    // 0x1caca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1caca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cacac: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CACACu;
    SET_GPR_U32(ctx, 31, 0x1CACB4u);
    ctx->pc = 0x1CACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACACu;
    // 0x1cacb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CACACu, 0x1CACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACB4u;
label_1cacb4:
    // 0x1cacb4: 0xc072b34  jal         func_1CACD0
    ctx->pc = 0x1CACB4u;
    SET_GPR_U32(ctx, 31, 0x1CACBCu);
    ctx->pc = 0x1CACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACB4u;
    // 0x1cacb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CACD0u, 0x1CACB4u, 0x1CACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACBCu;
label_1cacbc:
    // 0x1cacbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cacbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cacc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cacc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cacc4: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CACC4u;
    ctx->pc = 0x1CACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACC4u;
    // 0x1cacc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CACCCu;
    // 0x1caccc: 0x0  nop
    ctx->pc = 0x1cacccu;
    // NOP
    if (ctx->pc == 0x1cacccu) { ctx->pc = 0x1cacd0u; }
}
