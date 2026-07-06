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

// Function: sub_0011D558
// Address: 0x11d558 - 0x11d5e8
void sub_0011D558_0x11d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D558_0x11d558");
#endif

    switch (ctx->pc) {
        case 0x11d5a0u: goto label_11d5a0;
        default: break;
    }

    ctx->pc = 0x11d558u;

    // 0x11d558: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11d558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d55c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d560: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d564: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x11d564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d568: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d56c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d570: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d578: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d57c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d580: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d584: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d588: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D588u;
    {
        const bool branch_taken_0x11d588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D588u;
        // 0x11d58c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d588) {
            ctx->pc = 0x11D598u;
            goto label_11d598;
        }
    }
    ctx->pc = 0x11D590u;
    // 0x11d590: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D590u;
    {
        const bool branch_taken_0x11d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D590u;
        // 0x11d594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d590) {
            ctx->pc = 0x11D5A4u;
            goto label_11d5a4;
        }
    }
    ctx->pc = 0x11D598u;
label_11d598:
    // 0x11d598: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D598u;
    SET_GPR_U32(ctx, 31, 0x11D5A0u);
    ctx->pc = 0x11D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D598u;
    // 0x11d59c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1C8u, 0x11D598u, 0x11D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D5A0u;
label_11d5a0:
    // 0x11d5a0: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x11d5a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_11d5a4:
    // 0x11d5a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5A8u;
        // 0x11d5ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D5B0u;
    // 0x11d5b0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x11d5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x11d5b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D5B4u;
    {
        const bool branch_taken_0x11d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5B4u;
        // 0x11d5b8: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5b4) {
            ctx->pc = 0x11D5D8u;
            goto label_11d5d8;
        }
    }
    ctx->pc = 0x11D5BCu;
    // 0x11d5bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11d5c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11d5c4: 0x2442b9b8  addiu       $v0, $v0, -0x4648
    ctx->pc = 0x11d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949304));
    // 0x11d5c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11d5d0: 0x804a7dc  j           func_129F70
    ctx->pc = 0x11D5D0u;
    ctx->pc = 0x11D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5D0u;
    // 0x11d5d4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    sub_00129F70_0x129f70(rdram, ctx, runtime); return;
    ctx->pc = 0x11D5D8u;
label_11d5d8:
    // 0x11d5d8: 0x9043b510  lbu         $v1, -0x4AF0($v0)
    ctx->pc = 0x11d5d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948112)));
    // 0x11d5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5DCu;
        // 0x11d5e0: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D5E4u;
    // 0x11d5e4: 0x0  nop
    ctx->pc = 0x11d5e4u;
    // NOP
    if (ctx->pc == 0x11d5e4u) { ctx->pc = 0x11d5e8u; }
}
