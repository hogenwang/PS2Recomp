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

// Function: sub_002F84D0
// Address: 0x2f84d0 - 0x2f8528
void sub_002F84D0_0x2f84d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F84D0_0x2f84d0");
#endif

    ctx->pc = 0x2f84d0u;

    // 0x2f84d0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2f84d4: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x2f84d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f84d8: 0x2446b7c8  addiu       $a2, $v0, -0x4838
    ctx->pc = 0x2f84d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2f84dc: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2f84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f84e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f84e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f84e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f84e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f84e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F84E8u;
    {
        const bool branch_taken_0x2f84e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f84e8) {
            ctx->pc = 0x2F851Cu;
            goto label_2f851c;
        }
    }
    ctx->pc = 0x2F84F0u;
    // 0x2f84f0: 0x80840001  lb          $a0, 0x1($a0)
    ctx->pc = 0x2f84f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2f84f4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2f84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f84f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f84f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f84fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f84fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f8500: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8500u;
    {
        const bool branch_taken_0x2f8500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8500u;
        // 0x2f8504: 0x24a2ffd0  addiu       $v0, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8500) {
            ctx->pc = 0x2F851Cu;
            goto label_2f851c;
        }
    }
    ctx->pc = 0x2F8508u;
    // 0x2f8508: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2f8508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f850c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2f850cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f8510: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2f8510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2f8514: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8514u;
        // 0x2f8518: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F851Cu;
label_2f851c:
    // 0x2f851c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F851Cu;
        // 0x2f8520: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8524u;
    // 0x2f8524: 0x0  nop
    ctx->pc = 0x2f8524u;
    // NOP
    if (ctx->pc == 0x2f8524u) { ctx->pc = 0x2f8528u; }
}
