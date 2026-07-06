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

// Function: sub_0034A040
// Address: 0x34a040 - 0x34a0b0
void sub_0034A040_0x34a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A040_0x34a040");
#endif

    switch (ctx->pc) {
        case 0x34a070u: goto label_34a070;
        default: break;
    }

    ctx->pc = 0x34a040u;

    // 0x34a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34a044: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34a044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34a048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34a04c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x34a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34a050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a054: 0x2463beb0  addiu       $v1, $v1, -0x4150
    ctx->pc = 0x34a054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950576));
    // 0x34a058: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x34a058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34a05c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x34a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a060: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A060u;
    {
        const bool branch_taken_0x34a060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a060) {
            ctx->pc = 0x34A064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A060u;
            // 0x34a064: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A078u;
            goto label_34a078;
        }
    }
    ctx->pc = 0x34A068u;
    // 0x34a068: 0xc055728  jal         func_155CA0
    ctx->pc = 0x34A068u;
    SET_GPR_U32(ctx, 31, 0x34A070u);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x34A068u, 0x34A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A070u;
label_34a070:
    // 0x34a070: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x34a070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x34a074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34a074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34a078:
    // 0x34a078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x34A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A07Cu;
        // 0x34a080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A084u;
    // 0x34a084: 0x0  nop
    ctx->pc = 0x34a084u;
    // NOP
    // 0x34a088: 0x0  nop
    ctx->pc = 0x34a088u;
    // NOP
    // 0x34a08c: 0x0  nop
    ctx->pc = 0x34a08cu;
    // NOP
    // 0x34a090: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a094: 0x8c43be80  lw          $v1, -0x4180($v0)
    ctx->pc = 0x34a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x34a098: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a09c: 0x80d265c  j           func_349970
    ctx->pc = 0x34A09Cu;
    ctx->pc = 0x34A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A09Cu;
    // 0x34a0a0: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349970u, 0x34A09Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34A0A4u;
    // 0x34a0a4: 0x0  nop
    ctx->pc = 0x34a0a4u;
    // NOP
    // 0x34a0a8: 0x0  nop
    ctx->pc = 0x34a0a8u;
    // NOP
    // 0x34a0ac: 0x0  nop
    ctx->pc = 0x34a0acu;
    // NOP
}
