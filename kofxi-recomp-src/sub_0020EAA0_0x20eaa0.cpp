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

// Function: sub_0020EAA0
// Address: 0x20eaa0 - 0x20eb80
void sub_0020EAA0_0x20eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EAA0_0x20eaa0");
#endif

    switch (ctx->pc) {
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb1cu: goto label_20eb1c;
        default: break;
    }

    ctx->pc = 0x20eaa0u;

    // 0x20eaa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20eaa4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20eaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20eaa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x20eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20eaac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x20eaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x20eab0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x20eab4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x20eab4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eab8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20eab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20eabc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x20eabcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eac0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20eac4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x20eac4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eac8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20eacc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20eaccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ead0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20ead4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x20ead4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ead8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20eadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20eae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20eae4: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x20eae4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20eae8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x20EAE8u;
    {
        const bool branch_taken_0x20eae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAE8u;
        // 0x20eaec: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eae8) {
            ctx->pc = 0x20EB48u;
            goto label_20eb48;
        }
    }
    ctx->pc = 0x20EAF0u;
label_20eaf0:
    // 0x20eaf0: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x20EAF0u;
    {
        const bool branch_taken_0x20eaf0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAF0u;
        // 0x20eaf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaf0) {
            ctx->pc = 0x20EB30u;
            goto label_20eb30;
        }
    }
    ctx->pc = 0x20EAF8u;
    // 0x20eaf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20eaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eafc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20eafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb00:
    // 0x20eb00: 0x2573026  xor         $a2, $s2, $s7
    ctx->pc = 0x20eb00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 23));
    // 0x20eb04: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x20eb04u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20eb08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20eb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20eb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20eb10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb14: 0xc083a64  jal         func_20E990
    ctx->pc = 0x20EB14u;
    SET_GPR_U32(ctx, 31, 0x20EB1Cu);
    ctx->pc = 0x20EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB14u;
    // 0x20eb18: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E990u, 0x20EB14u, 0x20EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB1Cu;
label_20eb1c:
    // 0x20eb1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20eb1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20eb20: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x20eb20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x20eb24: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x20eb24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x20eb28: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x20EB28u;
    {
        const bool branch_taken_0x20eb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB28u;
        // 0x20eb2c: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb28) {
            ctx->pc = 0x20EB00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20eb00;
        }
    }
    ctx->pc = 0x20EB30u;
label_20eb30:
    // 0x20eb30: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x20eb30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x20eb34: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x20eb34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20eb38: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20eb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20eb3c: 0x1483ffec  bne         $a0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x20EB3Cu;
    {
        const bool branch_taken_0x20eb3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20eb3c) {
            ctx->pc = 0x20EAF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20eaf0;
        }
    }
    ctx->pc = 0x20EB44u;
    // 0x20eb44: 0x0  nop
    ctx->pc = 0x20eb44u;
    // NOP
label_20eb48:
    // 0x20eb48: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x20eb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20eb4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x20eb4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20eb50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20eb50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20eb54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20eb54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eb58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20eb58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20eb5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20eb5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20eb60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20eb60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20eb64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20eb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20eb68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20eb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20eb6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20eb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eb70: 0x3e00008  jr          $ra
    ctx->pc = 0x20EB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB70u;
        // 0x20eb74: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EB78u;
    // 0x20eb78: 0x0  nop
    ctx->pc = 0x20eb78u;
    // NOP
    // 0x20eb7c: 0x0  nop
    ctx->pc = 0x20eb7cu;
    // NOP
    if (ctx->pc == 0x20eb7cu) { ctx->pc = 0x20eb80u; }
}
