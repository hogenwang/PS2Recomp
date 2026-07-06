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

// Function: sub_002CB0A8
// Address: 0x2cb0a8 - 0x2cb100
void sub_002CB0A8_0x2cb0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB0A8_0x2cb0a8");
#endif

    switch (ctx->pc) {
        case 0x2cb0d0u: goto label_2cb0d0;
        default: break;
    }

    ctx->pc = 0x2cb0a8u;

    // 0x2cb0a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb0ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb0b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cb0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2cb0b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb0b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2cb0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb0bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cb0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb0c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cb0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cb0c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2cb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2cb0c8: 0xc0b2cd2  jal         func_2CB348
    ctx->pc = 0x2CB0C8u;
    SET_GPR_U32(ctx, 31, 0x2CB0D0u);
    ctx->pc = 0x2CB0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB0C8u;
    // 0x2cb0cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB348u, 0x2CB0C8u, 0x2CB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB0D0u;
label_2cb0d0:
    // 0x2cb0d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB0D0u;
    {
        const bool branch_taken_0x2cb0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0d0) {
            ctx->pc = 0x2CB0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB0D0u;
            // 0x2cb0d4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB0F0u;
            goto label_2cb0f0;
        }
    }
    ctx->pc = 0x2CB0D8u;
    // 0x2cb0d8: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x2cb0d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0dc: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x2cb0dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x2cb0e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2cb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cb0e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cb0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cb0e8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x2cb0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cb0ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cb0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb0f0:
    // 0x2cb0f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cb0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0F4u;
        // 0x2cb0f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB0FCu;
    // 0x2cb0fc: 0x0  nop
    ctx->pc = 0x2cb0fcu;
    // NOP
}
