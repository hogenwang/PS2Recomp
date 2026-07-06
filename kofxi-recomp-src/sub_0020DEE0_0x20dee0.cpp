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

// Function: sub_0020DEE0
// Address: 0x20dee0 - 0x20df80
void sub_0020DEE0_0x20dee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DEE0_0x20dee0");
#endif

    switch (ctx->pc) {
        case 0x20df0cu: goto label_20df0c;
        case 0x20df2cu: goto label_20df2c;
        default: break;
    }

    ctx->pc = 0x20dee0u;

    // 0x20dee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20dee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20dee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20deec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20deecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20def0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20def0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20def4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20def8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20def8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20defc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20defcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20df00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20df00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20DF04u;
    {
        const bool branch_taken_0x20df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF04u;
        // 0x20df08: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20df04) {
            ctx->pc = 0x20DF40u;
            goto label_20df40;
        }
    }
    ctx->pc = 0x20DF0Cu;
label_20df0c:
    // 0x20df0c: 0x11230008  beq         $t1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DF0Cu;
    {
        const bool branch_taken_0x20df0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20df0c) {
            ctx->pc = 0x20DF30u;
            goto label_20df30;
        }
    }
    ctx->pc = 0x20DF14u;
    // 0x20df14: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20df14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20df18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20df1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df20: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20df20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df24: 0xc08373c  jal         func_20DCF0
    ctx->pc = 0x20DF24u;
    SET_GPR_U32(ctx, 31, 0x20DF2Cu);
    ctx->pc = 0x20DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF24u;
    // 0x20df28: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DCF0u, 0x20DF24u, 0x20DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF2Cu;
label_20df2c:
    // 0x20df2c: 0x0  nop
    ctx->pc = 0x20df2cu;
    // NOP
label_20df30:
    // 0x20df30: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x20df30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x20df34: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x20df34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x20df38: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x20df38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20df3c: 0x0  nop
    ctx->pc = 0x20df3cu;
    // NOP
label_20df40:
    // 0x20df40: 0x96290000  lhu         $t1, 0x0($s1)
    ctx->pc = 0x20df40u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20df44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20df44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20df48: 0x11230003  beq         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DF48u;
    {
        const bool branch_taken_0x20df48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20df48) {
            ctx->pc = 0x20DF58u;
            goto label_20df58;
        }
    }
    ctx->pc = 0x20DF50u;
    // 0x20df50: 0x5e00ffee  bgtzl       $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20DF50u;
    {
        const bool branch_taken_0x20df50 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x20df50) {
            ctx->pc = 0x20DF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DF50u;
            // 0x20df54: 0x3403fffe  ori         $v1, $zero, 0xFFFE (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DF0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20df0c;
        }
    }
    ctx->pc = 0x20DF58u;
label_20df58:
    // 0x20df58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20df58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20df5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20df5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20df60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20df60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20df64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20df64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20df68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20df68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20df6c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DF6Cu;
        // 0x20df70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DF74u;
    // 0x20df74: 0x0  nop
    ctx->pc = 0x20df74u;
    // NOP
    // 0x20df78: 0x0  nop
    ctx->pc = 0x20df78u;
    // NOP
    // 0x20df7c: 0x0  nop
    ctx->pc = 0x20df7cu;
    // NOP
}
