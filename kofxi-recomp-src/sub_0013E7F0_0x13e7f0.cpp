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

// Function: sub_0013E7F0
// Address: 0x13e7f0 - 0x13e850
void sub_0013E7F0_0x13e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E7F0_0x13e7f0");
#endif

    switch (ctx->pc) {
        case 0x13e80cu: goto label_13e80c;
        case 0x13e82cu: goto label_13e82c;
        default: break;
    }

    ctx->pc = 0x13e7f0u;

    // 0x13e7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e804: 0xc062a7c  jal         func_18A9F0
    ctx->pc = 0x13E804u;
    SET_GPR_U32(ctx, 31, 0x13E80Cu);
    ctx->pc = 0x13E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E804u;
    // 0x13e808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9F0u, 0x13E804u, 0x13E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E80Cu;
label_13e80c:
    // 0x13e80c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e810: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13e814: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E814u;
    {
        const bool branch_taken_0x13e814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e814) {
            ctx->pc = 0x13E818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E814u;
            // 0x13e818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E824u;
            goto label_13e824;
        }
    }
    ctx->pc = 0x13E81Cu;
    // 0x13e81c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E81Cu;
    {
        const bool branch_taken_0x13e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E81Cu;
        // 0x13e820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e81c) {
            ctx->pc = 0x13E838u;
            goto label_13e838;
        }
    }
    ctx->pc = 0x13E824u;
label_13e824:
    // 0x13e824: 0xc062ad4  jal         func_18AB50
    ctx->pc = 0x13E824u;
    SET_GPR_U32(ctx, 31, 0x13E82Cu);
    ctx->pc = 0x13E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E824u;
    // 0x13e828: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AB50u, 0x13E824u, 0x13E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E82Cu;
label_13e82c:
    // 0x13e82c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e830: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x13e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x13e834: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e838:
    // 0x13e838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e83c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e83cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e844: 0x3e00008  jr          $ra
    ctx->pc = 0x13E844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E844u;
        // 0x13e848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E84Cu;
    // 0x13e84c: 0x0  nop
    ctx->pc = 0x13e84cu;
    // NOP
    if (ctx->pc == 0x13e84cu) { ctx->pc = 0x13e850u; }
}
