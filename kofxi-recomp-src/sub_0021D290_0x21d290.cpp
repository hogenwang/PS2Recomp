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

// Function: sub_0021D290
// Address: 0x21d290 - 0x21d320
void sub_0021D290_0x21d290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D290_0x21d290");
#endif

    switch (ctx->pc) {
        case 0x21d2c8u: goto label_21d2c8;
        case 0x21d300u: goto label_21d300;
        default: break;
    }

    ctx->pc = 0x21d290u;

label_21d290:
    // 0x21d290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d294: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d29c: 0x248418b8  addiu       $a0, $a0, 0x18B8
    ctx->pc = 0x21d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6328));
    // 0x21d2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d2a4: 0x8043e52  j           func_10F948
    ctx->pc = 0x21D2A4u;
    ctx->pc = 0x21D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2A4u;
    // 0x21d2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21D2ACu;
    // 0x21d2ac: 0x0  nop
    ctx->pc = 0x21d2acu;
    // NOP
    // 0x21d2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d2b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d2b8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d2b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d2bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d2c0: 0xc0874a4  jal         func_21D290
    ctx->pc = 0x21D2C0u;
    SET_GPR_U32(ctx, 31, 0x21D2C8u);
    ctx->pc = 0x21D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2C0u;
    // 0x21d2c4: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D290u;
    goto label_21d290;
    ctx->pc = 0x21D2C8u;
label_21d2c8:
    // 0x21d2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d2cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2D0u;
        // 0x21d2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D2D8u;
    // 0x21d2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d2dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d2dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d2e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d2e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d2e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d2ec: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21d2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d2f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21d2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d2f8: 0xc0874a4  jal         func_21D290
    ctx->pc = 0x21D2F8u;
    SET_GPR_U32(ctx, 31, 0x21D300u);
    ctx->pc = 0x21D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2F8u;
    // 0x21d2fc: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D290u;
    goto label_21d290;
    ctx->pc = 0x21D300u;
label_21d300:
    // 0x21d300: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21d304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d308: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21d308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21d30c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d314: 0x3e00008  jr          $ra
    ctx->pc = 0x21D314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D314u;
        // 0x21d318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D31Cu;
    // 0x21d31c: 0x0  nop
    ctx->pc = 0x21d31cu;
    // NOP
}
