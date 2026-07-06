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

// Function: sub_002AE678
// Address: 0x2ae678 - 0x2ae6d8
void sub_002AE678_0x2ae678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE678_0x2ae678");
#endif

    switch (ctx->pc) {
        case 0x2ae6a4u: goto label_2ae6a4;
        default: break;
    }

    ctx->pc = 0x2ae678u;

    // 0x2ae678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ae678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ae67c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae680: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae684: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ae684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae68c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae690: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ae690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ae694: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ae694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae698: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2ae698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ae69c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE69Cu;
    SET_GPR_U32(ctx, 31, 0x2AE6A4u);
    ctx->pc = 0x2AE6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE69Cu;
    // 0x2ae6a0: 0x8c4400f8  lw          $a0, 0xF8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE69Cu, 0x2AE6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6A4u;
label_2ae6a4:
    // 0x2ae6a4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2ae6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2ae6a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ae6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae6ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ae6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae6b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ae6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae6b4: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x2ae6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x2ae6b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae6b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae6bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae6c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae6c4: 0x80a513c  j           func_2944F0
    ctx->pc = 0x2AE6C4u;
    ctx->pc = 0x2AE6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6C4u;
    // 0x2ae6c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    sub_002944F0_0x2944f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE6CCu;
    // 0x2ae6cc: 0x0  nop
    ctx->pc = 0x2ae6ccu;
    // NOP
    // 0x2ae6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6D0u;
        // 0x2ae6d4: 0x24021c20  addiu       $v0, $zero, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE6D8u;
}
