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

// Function: sub_00281C80
// Address: 0x281c80 - 0x281ce0
void sub_00281C80_0x281c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281C80_0x281c80");
#endif

    switch (ctx->pc) {
        case 0x281cb8u: goto label_281cb8;
        default: break;
    }

    ctx->pc = 0x281c80u;

    // 0x281c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281c84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x281c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x281c88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281c8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x281c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x281c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x281c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281c9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x281c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281ca0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x281ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x281ca4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281CA4u;
    {
        const bool branch_taken_0x281ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CA4u;
        // 0x281ca8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ca4) {
            ctx->pc = 0x281CCCu;
            goto label_281ccc;
        }
    }
    ctx->pc = 0x281CACu;
    // 0x281cac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x281cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x281cb0: 0xc049c22  jal         func_127088
    ctx->pc = 0x281CB0u;
    SET_GPR_U32(ctx, 31, 0x281CB8u);
    ctx->pc = 0x281CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281CB0u;
    // 0x281cb4: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x281CB0u, 0x281CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281CB8u;
label_281cb8:
    // 0x281cb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281CB8u;
    {
        const bool branch_taken_0x281cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CB8u;
        // 0x281cbc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cb8) {
            ctx->pc = 0x281CCCu;
            goto label_281ccc;
        }
    }
    ctx->pc = 0x281CC0u;
    // 0x281cc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x281cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x281cc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x281cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x281cc8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x281cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_281ccc:
    // 0x281ccc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x281cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x281CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CD4u;
        // 0x281cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281CDCu;
    // 0x281cdc: 0x0  nop
    ctx->pc = 0x281cdcu;
    // NOP
}
