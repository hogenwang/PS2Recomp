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

// Function: sub_00322B00
// Address: 0x322b00 - 0x322b40
void sub_00322B00_0x322b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322B00_0x322b00");
#endif

    switch (ctx->pc) {
        case 0x322b1cu: goto label_322b1c;
        default: break;
    }

    ctx->pc = 0x322b00u;

    // 0x322b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322b04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x322b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322b0c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x322b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x322b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322b14: 0xc067d64  jal         func_19F590
    ctx->pc = 0x322B14u;
    SET_GPR_U32(ctx, 31, 0x322B1Cu);
    ctx->pc = 0x322B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322B14u;
    // 0x322b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x322B14u, 0x322B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322B1Cu;
label_322b1c:
    // 0x322b1c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x322b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x322b20: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x322b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x322b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x322B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B2Cu;
        // 0x322b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322B34u;
    // 0x322b34: 0x0  nop
    ctx->pc = 0x322b34u;
    // NOP
    // 0x322b38: 0x0  nop
    ctx->pc = 0x322b38u;
    // NOP
    // 0x322b3c: 0x0  nop
    ctx->pc = 0x322b3cu;
    // NOP
}
