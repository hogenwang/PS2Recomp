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

// Function: sub_001FD070
// Address: 0x1fd070 - 0x1fd108
void sub_001FD070_0x1fd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD070_0x1fd070");
#endif

    switch (ctx->pc) {
        case 0x1fd0b4u: goto label_1fd0b4;
        case 0x1fd0f0u: goto label_1fd0f0;
        default: break;
    }

    ctx->pc = 0x1fd070u;

    // 0x1fd070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd074: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fd074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd078: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fd078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fd07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd080: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fd080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fd084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fd088: 0x8c650950  lw          $a1, 0x950($v1)
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2384)));
    // 0x1fd08c: 0x24630d88  addiu       $v1, $v1, 0xD88
    ctx->pc = 0x1fd08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3464));
    // 0x1fd090: 0x8c700280  lw          $s0, 0x280($v1)
    ctx->pc = 0x1fd090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x1fd094: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FD094u;
    {
        const bool branch_taken_0x1fd094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD094u;
        // 0x1fd098: 0x8c71027c  lw          $s1, 0x27C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd094) {
            ctx->pc = 0x1FD0F4u;
            goto label_1fd0f4;
        }
    }
    ctx->pc = 0x1FD09Cu;
    // 0x1fd09c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1fd09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1fd0a0: 0x12230014  beq         $s1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FD0A0u;
    {
        const bool branch_taken_0x1fd0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FD0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0A0u;
        // 0x1fd0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0a0) {
            ctx->pc = 0x1FD0F4u;
            goto label_1fd0f4;
        }
    }
    ctx->pc = 0x1FD0A8u;
    // 0x1fd0a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0ac: 0xc07ef96  jal         func_1FBE58
    ctx->pc = 0x1FD0ACu;
    SET_GPR_U32(ctx, 31, 0x1FD0B4u);
    ctx->pc = 0x1FD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0ACu;
    // 0x1fd0b0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE58u, 0x1FD0ACu, 0x1FD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0B4u;
label_1fd0b4:
    // 0x1fd0b4: 0x3403ea24  ori         $v1, $zero, 0xEA24
    ctx->pc = 0x1fd0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x1fd0b8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x1fd0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1fd0bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD0BCu;
    {
        const bool branch_taken_0x1fd0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0bc) {
            ctx->pc = 0x1FD0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD0BCu;
            // 0x1fd0c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD0C4u;
            goto label_1fd0c4;
        }
    }
    ctx->pc = 0x1FD0C4u;
label_1fd0c4:
    // 0x1fd0c4: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1fd0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1fd0c8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1fd0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd0cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fd0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fd0d0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1fd0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fd0d4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1fd0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1fd0d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1fd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fd0e0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1fd0e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fd0e4: 0x2012  mflo        $a0
    ctx->pc = 0x1fd0e4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1fd0e8: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1FD0E8u;
    SET_GPR_U32(ctx, 31, 0x1FD0F0u);
    ctx->pc = 0x1FD0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0E8u;
    // 0x1fd0ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1FD0E8u, 0x1FD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0F0u;
label_1fd0f0:
    // 0x1fd0f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fd0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fd0f4:
    // 0x1fd0f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fd0f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd0f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fd0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd0fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd100: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD100u;
        // 0x1fd104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD108u;
}
