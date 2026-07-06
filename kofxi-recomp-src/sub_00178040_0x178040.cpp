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

// Function: sub_00178040
// Address: 0x178040 - 0x178090
void sub_00178040_0x178040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178040_0x178040");
#endif

    switch (ctx->pc) {
        case 0x178060u: goto label_178060;
        case 0x17806cu: goto label_17806c;
        default: break;
    }

    ctx->pc = 0x178040u;

    // 0x178040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178044: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x178044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x178048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17804c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178054: 0x8c50da28  lw          $s0, -0x25D8($v0)
    ctx->pc = 0x178054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957608)));
    // 0x178058: 0xc067d80  jal         func_19F600
    ctx->pc = 0x178058u;
    SET_GPR_U32(ctx, 31, 0x178060u);
    ctx->pc = 0x17805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178058u;
    // 0x17805c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F600u, 0x178058u, 0x178060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178060u;
label_178060:
    // 0x178060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178064: 0xc067d7c  jal         func_19F5F0
    ctx->pc = 0x178064u;
    SET_GPR_U32(ctx, 31, 0x17806Cu);
    ctx->pc = 0x178068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178064u;
    // 0x178068: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F5F0u, 0x178064u, 0x17806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17806Cu;
label_17806c:
    // 0x17806c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x17806cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x178070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178078: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x178078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17807c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17807cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178080: 0x21023  negu        $v0, $v0
    ctx->pc = 0x178080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x178084: 0x3e00008  jr          $ra
    ctx->pc = 0x178084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178084u;
        // 0x178088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17808Cu;
    // 0x17808c: 0x0  nop
    ctx->pc = 0x17808cu;
    // NOP
}
