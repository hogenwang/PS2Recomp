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

// Function: sub_00281C30
// Address: 0x281c30 - 0x281c80
void sub_00281C30_0x281c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281C30_0x281c30");
#endif

    switch (ctx->pc) {
        case 0x281c58u: goto label_281c58;
        default: break;
    }

    ctx->pc = 0x281c30u;

    // 0x281c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c3c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x281C3Cu;
    {
        const bool branch_taken_0x281c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C3Cu;
        // 0x281c40: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c3c) {
            ctx->pc = 0x281C6Cu;
            goto label_281c6c;
        }
    }
    ctx->pc = 0x281C44u;
    // 0x281c44: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x281c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x281c48: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x281C48u;
    {
        const bool branch_taken_0x281c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281c48) {
            ctx->pc = 0x281C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281C48u;
            // 0x281c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C5Cu;
            goto label_281c5c;
        }
    }
    ctx->pc = 0x281C50u;
    // 0x281c50: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x281C50u;
    SET_GPR_U32(ctx, 31, 0x281C58u);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x281C50u, 0x281C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281C58u;
label_281c58:
    // 0x281c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281c5c:
    // 0x281c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281c64: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x281C64u;
    ctx->pc = 0x281C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281C64u;
    // 0x281c68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x281C6Cu;
label_281c6c:
    // 0x281c6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281c74: 0x3e00008  jr          $ra
    ctx->pc = 0x281C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C74u;
        // 0x281c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281C7Cu;
    // 0x281c7c: 0x0  nop
    ctx->pc = 0x281c7cu;
    // NOP
}
