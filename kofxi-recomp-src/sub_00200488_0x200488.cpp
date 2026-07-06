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

// Function: sub_00200488
// Address: 0x200488 - 0x2004c8
void sub_00200488_0x200488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200488_0x200488");
#endif

    switch (ctx->pc) {
        case 0x20049cu: goto label_20049c;
        default: break;
    }

    ctx->pc = 0x200488u;

    // 0x200488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20048c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200490: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200494: 0xc080132  jal         func_2004C8
    ctx->pc = 0x200494u;
    SET_GPR_U32(ctx, 31, 0x20049Cu);
    ctx->pc = 0x200498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200494u;
    // 0x200498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x200494u, 0x20049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20049Cu;
label_20049c:
    // 0x20049c: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x20049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2004a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2004A0u;
    {
        const bool branch_taken_0x2004a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2004A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004A0u;
        // 0x2004a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004a0) {
            ctx->pc = 0x2004B8u;
            goto label_2004b8;
        }
    }
    ctx->pc = 0x2004A8u;
    // 0x2004a8: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x2004a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2004ac: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2004acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2004b0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2004b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2004b4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2004b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2004b8:
    // 0x2004b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2004b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2004bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2004bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2004c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2004C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2004C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004C0u;
        // 0x2004c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2004C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2004C8u;
}
