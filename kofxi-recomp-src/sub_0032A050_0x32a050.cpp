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

// Function: sub_0032A050
// Address: 0x32a050 - 0x32a0a0
void sub_0032A050_0x32a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A050_0x32a050");
#endif

    switch (ctx->pc) {
        case 0x32a078u: goto label_32a078;
        case 0x32a080u: goto label_32a080;
        default: break;
    }

    ctx->pc = 0x32a050u;

    // 0x32a050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32a05c: 0x9482012c  lhu         $v0, 0x12C($a0)
    ctx->pc = 0x32a05cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x32a060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a064: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x32a064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x32a068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A068u;
    {
        const bool branch_taken_0x32a068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A068u;
        // 0x32a06c: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a068) {
            ctx->pc = 0x32A078u;
            goto label_32a078;
        }
    }
    ctx->pc = 0x32A070u;
    // 0x32a070: 0xc0ca828  jal         func_32A0A0
    ctx->pc = 0x32A070u;
    SET_GPR_U32(ctx, 31, 0x32A078u);
    ctx->pc = 0x32A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A0A0u, 0x32A070u, 0x32A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A078u;
label_32a078:
    // 0x32a078: 0xc0ca844  jal         func_32A110
    ctx->pc = 0x32A078u;
    SET_GPR_U32(ctx, 31, 0x32A080u);
    ctx->pc = 0x32A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A078u;
    // 0x32a07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A110u, 0x32A078u, 0x32A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A080u;
label_32a080:
    // 0x32a080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32a084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a08c: 0x3e00008  jr          $ra
    ctx->pc = 0x32A08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A08Cu;
        // 0x32a090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A094u;
    // 0x32a094: 0x0  nop
    ctx->pc = 0x32a094u;
    // NOP
    // 0x32a098: 0x0  nop
    ctx->pc = 0x32a098u;
    // NOP
    // 0x32a09c: 0x0  nop
    ctx->pc = 0x32a09cu;
    // NOP
}
