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

// Function: sub_00340470
// Address: 0x340470 - 0x3404d0
void sub_00340470_0x340470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340470_0x340470");
#endif

    ctx->pc = 0x340470u;

    // 0x340470: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x340470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x340474: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x340474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x340478: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x340478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x34047c: 0x5020000c  beql        $at, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34047Cu;
    {
        const bool branch_taken_0x34047c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34047c) {
            ctx->pc = 0x340480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34047Cu;
            // 0x340480: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3404B0u;
            goto label_3404b0;
        }
    }
    ctx->pc = 0x340484u;
    // 0x340484: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x340484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x340488: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x340488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x34048c: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x34048cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x340490: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x340490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x340494: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340494u;
    {
        const bool branch_taken_0x340494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x340498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340494u;
        // 0x340498: 0x44001a  div         $zero, $v0, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x340494) {
            ctx->pc = 0x3404A0u;
            goto label_3404a0;
        }
    }
    ctx->pc = 0x34049Cu;
    // 0x34049c: 0x1cd  break       0, 7
    ctx->pc = 0x34049cu;
    runtime->handleBreak(rdram, ctx);
label_3404a0:
    // 0x3404a0: 0x1012  mflo        $v0
    ctx->pc = 0x3404a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3404a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3404a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3404a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3404A8u;
    {
        const bool branch_taken_0x3404a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3404ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404A8u;
        // 0x3404ac: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404a8) {
            ctx->pc = 0x3404C8u;
            goto label_3404c8;
        }
    }
    ctx->pc = 0x3404B0u;
label_3404b0:
    // 0x3404b0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x3404b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3404b4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3404B4u;
    {
        const bool branch_taken_0x3404b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3404B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404B4u;
        // 0x3404b8: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3404b4) {
            ctx->pc = 0x3404C0u;
            goto label_3404c0;
        }
    }
    ctx->pc = 0x3404BCu;
    // 0x3404bc: 0x1cd  break       0, 7
    ctx->pc = 0x3404bcu;
    runtime->handleBreak(rdram, ctx);
label_3404c0:
    // 0x3404c0: 0x1012  mflo        $v0
    ctx->pc = 0x3404c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3404c4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3404c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3404c8:
    // 0x3404c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3404C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3404CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404C8u;
        // 0x3404cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3404C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3404D0u;
}
