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

// Function: sub_00286808
// Address: 0x286808 - 0x286850
void sub_00286808_0x286808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286808_0x286808");
#endif

    switch (ctx->pc) {
        case 0x28683cu: goto label_28683c;
        default: break;
    }

    ctx->pc = 0x286808u;

    // 0x286808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28680c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286814: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x286814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x286818: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x286818u;
    {
        const bool branch_taken_0x286818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286818u;
        // 0x28681c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286818) {
            ctx->pc = 0x286840u;
            goto label_286840;
        }
    }
    ctx->pc = 0x286820u;
    // 0x286820: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286824: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x286824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x286828: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x286828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28682c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286830: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x286830u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x286834: 0xc0a19ca  jal         func_286728
    ctx->pc = 0x286834u;
    SET_GPR_U32(ctx, 31, 0x28683Cu);
    ctx->pc = 0x286838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286834u;
    // 0x286838: 0xdc64fff8  ld          $a0, -0x8($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286728u, 0x286834u, 0x28683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28683Cu;
label_28683c:
    // 0x28683c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_286840:
    // 0x286840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286848: 0x3e00008  jr          $ra
    ctx->pc = 0x286848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286848u;
        // 0x28684c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286850u;
}
