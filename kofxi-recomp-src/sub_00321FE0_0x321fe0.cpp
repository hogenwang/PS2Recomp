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

// Function: sub_00321FE0
// Address: 0x321fe0 - 0x322030
void sub_00321FE0_0x321fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321FE0_0x321fe0");
#endif

    switch (ctx->pc) {
        case 0x321ff8u: goto label_321ff8;
        default: break;
    }

    ctx->pc = 0x321fe0u;

    // 0x321fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ff0: 0xc0c87dc  jal         func_321F70
    ctx->pc = 0x321FF0u;
    SET_GPR_U32(ctx, 31, 0x321FF8u);
    ctx->pc = 0x321FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FF0u;
    // 0x321ff4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F70u, 0x321FF0u, 0x321FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FF8u;
label_321ff8:
    // 0x321ff8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x321ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x321ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322000: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x322000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x322004: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x322004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x322008: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x322008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x32200c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322010: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x322010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x322014: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x322014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x322018: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x322018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32201c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322020: 0x3e00008  jr          $ra
    ctx->pc = 0x322020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322020u;
        // 0x322024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322028u;
    // 0x322028: 0x0  nop
    ctx->pc = 0x322028u;
    // NOP
    // 0x32202c: 0x0  nop
    ctx->pc = 0x32202cu;
    // NOP
}
