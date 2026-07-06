#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C060
// Address: 0x30c060 - 0x30c110
void sub_0030C060_0x30c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C060_0x30c060");
#endif

    switch (ctx->pc) {
        case 0x30c080u: goto label_30c080;
        case 0x30c0b0u: goto label_30c0b0;
        default: break;
    }

    ctx->pc = 0x30c060u;

    // 0x30c060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30c068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c070: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x30c070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30c074: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x30C074u;
    {
        const bool branch_taken_0x30c074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c074) {
            ctx->pc = 0x30C0F8u;
            goto label_30c0f8;
        }
    }
    ctx->pc = 0x30C07Cu;
    // 0x30c07c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x30c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30c080:
    // 0x30c080: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30c084: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x30c084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x30c088: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30C088u;
    {
        const bool branch_taken_0x30c088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C088u;
            // 0x30c08c: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c088) {
            ctx->pc = 0x30C094u;
            goto label_30c094;
        }
    }
    ctx->pc = 0x30C090u;
    // 0x30c090: 0x1cd  break       0, 7
    ctx->pc = 0x30c090u;
    runtime->handleBreak(rdram, ctx);
label_30c094:
    // 0x30c094: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30c098: 0x8812  mflo        $s1
    ctx->pc = 0x30c098u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x30c09c: 0x12230006  beq         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C09Cu;
    {
        const bool branch_taken_0x30c09c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c09c) {
            ctx->pc = 0x30C0B8u;
            goto label_30c0b8;
        }
    }
    ctx->pc = 0x30C0A4u;
    // 0x30c0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30c0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0a8: 0xc0c2fd4  jal         func_30BF50
    ctx->pc = 0x30C0A8u;
    SET_GPR_U32(ctx, 31, 0x30C0B0u);
    ctx->pc = 0x30C0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0A8u;
            // 0x30c0ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BF50u;
    if (runtime->hasFunction(0x30BF50u)) {
        auto targetFn = runtime->lookupFunction(0x30BF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0B0u; }
        if (ctx->pc != 0x30C0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BF50_0x30bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C0B0u; }
        if (ctx->pc != 0x30C0B0u) { return; }
    }
    ctx->pc = 0x30C0B0u;
label_30c0b0:
    // 0x30c0b0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x30c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x30c0b4: 0x0  nop
    ctx->pc = 0x30c0b4u;
    // NOP
label_30c0b8:
    // 0x30c0b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x30c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30c0bc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x30c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30c0c0: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x30c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x30c0c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30c0c8: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x30c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x30c0cc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x30c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x30c0d0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x30c0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30c0d4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x30c0d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30c0d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C0D8u;
    {
        const bool branch_taken_0x30c0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c0d8) {
            ctx->pc = 0x30C0E8u;
            goto label_30c0e8;
        }
    }
    ctx->pc = 0x30C0E0u;
    // 0x30c0e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30c0e4: 0x0  nop
    ctx->pc = 0x30c0e4u;
    // NOP
label_30c0e8:
    // 0x30c0e8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x30c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c0ec: 0x5600ffe4  bnel        $s0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30C0ECu;
    {
        const bool branch_taken_0x30c0ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c0ec) {
            ctx->pc = 0x30C0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C0ECu;
            // 0x30c0f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30c080;
        }
    }
    ctx->pc = 0x30C0F4u;
    // 0x30c0f4: 0x0  nop
    ctx->pc = 0x30c0f4u;
    // NOP
label_30c0f8:
    // 0x30c0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c104: 0x3e00008  jr          $ra
    ctx->pc = 0x30C104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C104u;
            // 0x30c108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C10Cu;
    // 0x30c10c: 0x0  nop
    ctx->pc = 0x30c10cu;
    // NOP
    ctx->pc = 0x30c110u;
}
