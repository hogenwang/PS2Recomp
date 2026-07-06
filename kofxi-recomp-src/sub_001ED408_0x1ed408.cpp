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

// Function: sub_001ED408
// Address: 0x1ed408 - 0x1ed440
void sub_001ED408_0x1ed408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED408_0x1ed408");
#endif

    switch (ctx->pc) {
        case 0x1ed408u: goto label_1ed408;
        case 0x1ed40cu: goto label_1ed40c;
        case 0x1ed410u: goto label_1ed410;
        case 0x1ed414u: goto label_1ed414;
        case 0x1ed418u: goto label_1ed418;
        case 0x1ed41cu: goto label_1ed41c;
        case 0x1ed420u: goto label_1ed420;
        case 0x1ed424u: goto label_1ed424;
        case 0x1ed428u: goto label_1ed428;
        case 0x1ed42cu: goto label_1ed42c;
        case 0x1ed430u: goto label_1ed430;
        case 0x1ed434u: goto label_1ed434;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed43cu: goto label_1ed43c;
        default: break;
    }

    ctx->pc = 0x1ed408u;

label_1ed408:
    // 0x1ed408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ed40c:
    // 0x1ed40c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ed40cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ed410:
    // 0x1ed410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ed414:
    // 0x1ed414: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ed414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1ed418:
    // 0x1ed418: 0x40f809  jalr        $v0
label_1ed41c:
    if (ctx->pc == 0x1ED41Cu) {
        ctx->pc = 0x1ED41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED418u;
        // 0x1ed41c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED420u;
        goto label_1ed420;
    }
    ctx->pc = 0x1ED418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED420u);
        ctx->pc = 0x1ED41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED418u;
        // 0x1ed41c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED418u, 0x1ED420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED420u;
label_1ed420:
    // 0x1ed420: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ed420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ed424:
    // 0x1ed424: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed428:
    // 0x1ed428: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ed428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1ed42c:
    // 0x1ed42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed430:
    // 0x1ed430: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1ed430u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1ed434:
    // 0x1ed434: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ed434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed438:
    // 0x1ed438: 0x3e00008  jr          $ra
label_1ed43c:
    if (ctx->pc == 0x1ED43Cu) {
        ctx->pc = 0x1ED43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED438u;
        // 0x1ed43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED440u;
        goto label_fallthrough_0x1ed438;
    }
    ctx->pc = 0x1ED438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED438u;
        // 0x1ed43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ed438:
    ctx->pc = 0x1ED440u;
}
