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

// Function: sub_0011D4A0
// Address: 0x11d4a0 - 0x11d558
void sub_0011D4A0_0x11d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D4A0_0x11d4a0");
#endif

    switch (ctx->pc) {
        case 0x11d4fcu: goto label_11d4fc;
        case 0x11d510u: goto label_11d510;
        case 0x11d520u: goto label_11d520;
        case 0x11d534u: goto label_11d534;
        default: break;
    }

    ctx->pc = 0x11d4a0u;

    // 0x11d4a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d4a4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d4a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11d4ac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d4b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11d4b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11d4b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4bc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d4c0: 0x72231818  mult1       $v1, $s1, $v1
    ctx->pc = 0x11d4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d4c4: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x11d4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d4c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11d4cc: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d4d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11d4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d4d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d4dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d4e0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d4e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D4E4u;
    {
        const bool branch_taken_0x11d4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4E4u;
        // 0x11d4e8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4e4) {
            ctx->pc = 0x11D4F4u;
            goto label_11d4f4;
        }
    }
    ctx->pc = 0x11D4ECu;
    // 0x11d4ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11D4ECu;
    {
        const bool branch_taken_0x11d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4ECu;
        // 0x11d4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4ec) {
            ctx->pc = 0x11D538u;
            goto label_11d538;
        }
    }
    ctx->pc = 0x11D4F4u;
label_11d4f4:
    // 0x11d4f4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11D4F4u;
    SET_GPR_U32(ctx, 31, 0x11D4FCu);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x11D4F4u, 0x11D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4FCu;
label_11d4fc:
    // 0x11d4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d508: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D508u;
    SET_GPR_U32(ctx, 31, 0x11D510u);
    ctx->pc = 0x11D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D508u;
    // 0x11d50c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1C8u, 0x11D508u, 0x11D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D510u;
label_11d510:
    // 0x11d510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d514: 0xa0530071  sb          $s3, 0x71($v0)
    ctx->pc = 0x11d514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 19));
    // 0x11d518: 0xc043556  jal         func_10D558
    ctx->pc = 0x11D518u;
    SET_GPR_U32(ctx, 31, 0x11D520u);
    ctx->pc = 0x11D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D518u;
    // 0x11d51c: 0x2485007f  addiu       $a1, $a0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D558u, 0x11D518u, 0x11D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D520u;
label_11d520:
    // 0x11d520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d524: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D524u;
    {
        const bool branch_taken_0x11d524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D524u;
        // 0x11d528: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d524) {
            ctx->pc = 0x11D53Cu;
            goto label_11d53c;
        }
    }
    ctx->pc = 0x11D52Cu;
    // 0x11d52c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11D52Cu;
    SET_GPR_U32(ctx, 31, 0x11D534u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11D52Cu, 0x11D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D534u;
label_11d534:
    // 0x11d534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d538:
    // 0x11d538: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11d538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11d53c:
    // 0x11d53c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11d53cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d540: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11d540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d544: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11d544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d54c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D54Cu;
        // 0x11d550: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D554u;
    // 0x11d554: 0x0  nop
    ctx->pc = 0x11d554u;
    // NOP
    if (ctx->pc == 0x11d554u) { ctx->pc = 0x11d558u; }
}
