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

// Function: sub_00283810
// Address: 0x283810 - 0x283850
void sub_00283810_0x283810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283810_0x283810");
#endif

    ctx->pc = 0x283810u;

    // 0x283810: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x283810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x283814: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x283814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x283818: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x283818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x28381c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x283820: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x283820u;
    {
        const bool branch_taken_0x283820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283820) {
            ctx->pc = 0x283824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283820u;
            // 0x283824: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283830u;
            goto label_283830;
        }
    }
    ctx->pc = 0x283828u;
    // 0x283828: 0x3e00008  jr          $ra
    ctx->pc = 0x283828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283828u;
        // 0x28382c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283830u;
label_283830:
    // 0x283830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283834: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x283834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x283838: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x283838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x28383c: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x28383cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x283840: 0x90830016  lbu         $v1, 0x16($a0)
    ctx->pc = 0x283840u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x283844: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x283844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x283848: 0x3e00008  jr          $ra
    ctx->pc = 0x283848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283848u;
        // 0x28384c: 0xa0830016  sb          $v1, 0x16($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283850u;
}
