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

// Function: sub_00323780
// Address: 0x323780 - 0x323820
void sub_00323780_0x323780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323780_0x323780");
#endif

    switch (ctx->pc) {
        case 0x3237acu: goto label_3237ac;
        case 0x3237e8u: goto label_3237e8;
        default: break;
    }

    ctx->pc = 0x323780u;

    // 0x323780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x323780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x323784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x323784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x323788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x323788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32378c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x323790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323798: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x323798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32379c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3237a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3237a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3237a4: 0x3c1001dd  lui         $s0, 0x1DD
    ctx->pc = 0x3237a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)477 << 16));
    // 0x3237a8: 0x26109410  addiu       $s0, $s0, -0x6BF0
    ctx->pc = 0x3237a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939664));
label_3237ac:
    // 0x3237ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3237acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3237b0: 0x1663000d  bne         $s3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3237B0u;
    {
        const bool branch_taken_0x3237b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x3237b0) {
            ctx->pc = 0x3237E8u;
            goto label_3237e8;
        }
    }
    ctx->pc = 0x3237B8u;
    // 0x3237b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3237b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3237bc: 0x1643000a  bne         $s2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3237BCu;
    {
        const bool branch_taken_0x3237bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3237bc) {
            ctx->pc = 0x3237E8u;
            goto label_3237e8;
        }
    }
    ctx->pc = 0x3237C4u;
    // 0x3237c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3237c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3237c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3237C8u;
    {
        const bool branch_taken_0x3237c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3237c8) {
            ctx->pc = 0x3237E0u;
            goto label_3237e0;
        }
    }
    ctx->pc = 0x3237D0u;
    // 0x3237d0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3237d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3237d4: 0x946200d4  lhu         $v0, 0xD4($v1)
    ctx->pc = 0x3237d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3237d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3237d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3237dc: 0xa46200d4  sh          $v0, 0xD4($v1)
    ctx->pc = 0x3237dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 212), (uint16_t)GPR_U32(ctx, 2));
label_3237e0:
    // 0x3237e0: 0xc0c8ad0  jal         func_322B40
    ctx->pc = 0x3237E0u;
    SET_GPR_U32(ctx, 31, 0x3237E8u);
    ctx->pc = 0x3237E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3237E0u;
    // 0x3237e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B40u, 0x3237E0u, 0x3237E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237E8u;
label_3237e8:
    // 0x3237e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3237e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3237ec: 0x2a230200  slti        $v1, $s1, 0x200
    ctx->pc = 0x3237ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3237f0: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3237F0u;
    {
        const bool branch_taken_0x3237f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3237F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237F0u;
        // 0x3237f4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237f0) {
            ctx->pc = 0x3237ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3237ac;
        }
    }
    ctx->pc = 0x3237F8u;
    // 0x3237f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3237f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3237fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3237fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32380c: 0x3e00008  jr          $ra
    ctx->pc = 0x32380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32380Cu;
        // 0x323810: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323814u;
    // 0x323814: 0x0  nop
    ctx->pc = 0x323814u;
    // NOP
    // 0x323818: 0x0  nop
    ctx->pc = 0x323818u;
    // NOP
    // 0x32381c: 0x0  nop
    ctx->pc = 0x32381cu;
    // NOP
}
