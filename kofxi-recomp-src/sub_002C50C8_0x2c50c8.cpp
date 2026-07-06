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

// Function: sub_002C50C8
// Address: 0x2c50c8 - 0x2c5110
void sub_002C50C8_0x2c50c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C50C8_0x2c50c8");
#endif

    switch (ctx->pc) {
        case 0x2c50e4u: goto label_2c50e4;
        case 0x2c50ecu: goto label_2c50ec;
        default: break;
    }

    ctx->pc = 0x2c50c8u;

    // 0x2c50c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c50c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c50cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c50d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c50d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50d4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C50D4u;
    {
        const bool branch_taken_0x2c50d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50D4u;
        // 0x2c50d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50d4) {
            ctx->pc = 0x2C5100u;
            goto label_2c5100;
        }
    }
    ctx->pc = 0x2C50DCu;
    // 0x2c50dc: 0xc0b0a08  jal         func_2C2820
    ctx->pc = 0x2C50DCu;
    SET_GPR_U32(ctx, 31, 0x2C50E4u);
    ctx->pc = 0x2C50E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50DCu;
    // 0x2c50e0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2820u, 0x2C50DCu, 0x2C50E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50E4u;
label_2c50e4:
    // 0x2c50e4: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C50E4u;
    SET_GPR_U32(ctx, 31, 0x2C50ECu);
    ctx->pc = 0x2C50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50E4u;
    // 0x2c50e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x2C50E4u, 0x2C50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50ECu;
label_2c50ec:
    // 0x2c50ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c50ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c50f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c50f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c50f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c50f8: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2C50F8u;
    ctx->pc = 0x2C50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50F8u;
    // 0x2c50fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2C5100u;
label_2c5100:
    // 0x2c5100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c5104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5108: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5108u;
        // 0x2c510c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5110u;
}
