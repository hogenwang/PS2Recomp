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

// Function: sub_0030C2A0
// Address: 0x30c2a0 - 0x30c350
void sub_0030C2A0_0x30c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C2A0_0x30c2a0");
#endif

    switch (ctx->pc) {
        case 0x30c2c0u: goto label_30c2c0;
        case 0x30c2f4u: goto label_30c2f4;
        default: break;
    }

    ctx->pc = 0x30c2a0u;

    // 0x30c2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c2a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30c2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c2b0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x30c2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30c2b4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x30C2B4u;
    {
        const bool branch_taken_0x30c2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c2b4) {
            ctx->pc = 0x30C338u;
            goto label_30c338;
        }
    }
    ctx->pc = 0x30C2BCu;
    // 0x30c2bc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30c2c0:
    // 0x30c2c0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x30c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30c2c4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x30c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x30c2c8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C2C8u;
    {
        const bool branch_taken_0x30c2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2C8u;
        // 0x30c2cc: 0x83001b  divu        $zero, $a0, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2c8) {
            ctx->pc = 0x30C2D4u;
            goto label_30c2d4;
        }
    }
    ctx->pc = 0x30C2D0u;
    // 0x30c2d0: 0x1cd  break       0, 7
    ctx->pc = 0x30c2d0u;
    runtime->handleBreak(rdram, ctx);
label_30c2d4:
    // 0x30c2d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30c2d8: 0x8812  mflo        $s1
    ctx->pc = 0x30c2d8u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x30c2dc: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C2DCu;
    {
        const bool branch_taken_0x30c2dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c2dc) {
            ctx->pc = 0x30C2F8u;
            goto label_30c2f8;
        }
    }
    ctx->pc = 0x30C2E4u;
    // 0x30c2e4: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x30c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30c2e8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x30c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x30c2ec: 0xc0c3044  jal         func_30C110
    ctx->pc = 0x30C2ECu;
    SET_GPR_U32(ctx, 31, 0x30C2F4u);
    ctx->pc = 0x30C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C2ECu;
    // 0x30c2f0: 0x9045002c  lbu         $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C110u, 0x30C2ECu, 0x30C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C2F4u;
label_30c2f4:
    // 0x30c2f4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x30c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_30c2f8:
    // 0x30c2f8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30c2fc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x30c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30c300: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x30c300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x30c304: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30c308: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x30c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x30c30c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x30c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x30c310: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x30c310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30c314: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x30c314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30c318: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C318u;
    {
        const bool branch_taken_0x30c318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c318) {
            ctx->pc = 0x30C328u;
            goto label_30c328;
        }
    }
    ctx->pc = 0x30C320u;
    // 0x30c320: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30c320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30c324: 0x0  nop
    ctx->pc = 0x30c324u;
    // NOP
label_30c328:
    // 0x30c328: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x30c328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c32c: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30C32Cu;
    {
        const bool branch_taken_0x30c32c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c32c) {
            ctx->pc = 0x30C330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C32Cu;
            // 0x30c330: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C2C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c2c0;
        }
    }
    ctx->pc = 0x30C334u;
    // 0x30c334: 0x0  nop
    ctx->pc = 0x30c334u;
    // NOP
label_30c338:
    // 0x30c338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c344: 0x3e00008  jr          $ra
    ctx->pc = 0x30C344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C344u;
        // 0x30c348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C34Cu;
    // 0x30c34c: 0x0  nop
    ctx->pc = 0x30c34cu;
    // NOP
    if (ctx->pc == 0x30c34cu) { ctx->pc = 0x30c350u; }
}
