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

// Function: sub_00271AF0
// Address: 0x271af0 - 0x271be8
void sub_00271AF0_0x271af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271AF0_0x271af0");
#endif

    switch (ctx->pc) {
        case 0x271b4cu: goto label_271b4c;
        case 0x271b50u: goto label_271b50;
        case 0x271b88u: goto label_271b88;
        case 0x271b8cu: goto label_271b8c;
        default: break;
    }

    ctx->pc = 0x271af0u;

    // 0x271af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x271af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x271af4: 0x30cf0007  andi        $t7, $a2, 0x7
    ctx->pc = 0x271af4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x271af8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x271af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x271afc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x271afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x271b00: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x271b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x271b04: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x271b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x271b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x271b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b0c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x271b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x271b10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x271b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b14: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x271b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x271b18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x271b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x271b1c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x271b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x271b20: 0x15e00027  bnez        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x271B20u;
    {
        const bool branch_taken_0x271b20 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x271B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B20u;
        // 0x271b24: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b20) {
            ctx->pc = 0x271BC0u;
            goto label_271bc0;
        }
    }
    ctx->pc = 0x271B28u;
    // 0x271b28: 0x690c0007  ldl         $t4, 0x7($t0)
    ctx->pc = 0x271b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x271b2c: 0x6d0c0000  ldr         $t4, 0x0($t0)
    ctx->pc = 0x271b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x271b30: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x271b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271b34: 0x6a778  dsll        $s4, $a2, 29
    ctx->pc = 0x271b34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << 29);
    // 0x271b38: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x271b38u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x271b3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x271b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b40: 0x1a80001e  blez        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x271B40u;
    {
        const bool branch_taken_0x271b40 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x271B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B40u;
        // 0x271b44: 0xb7ac0000  sdr         $t4, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b40) {
            ctx->pc = 0x271BBCu;
            goto label_271bbc;
        }
    }
    ctx->pc = 0x271B48u;
    // 0x271b48: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x271b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_271b4c:
    // 0x271b4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x271b4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271b50:
    // 0x271b50: 0x3ab7021  addu        $t6, $sp, $t3
    ctx->pc = 0x271b50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 11)));
    // 0x271b54: 0x22b6821  addu        $t5, $s1, $t3
    ctx->pc = 0x271b54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x271b58: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x271b58u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x271b5c: 0x24b6021  addu        $t4, $s2, $t3
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x271b60: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x271b60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x271b64: 0x91ae0000  lbu         $t6, 0x0($t5)
    ctx->pc = 0x271b64u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x271b68: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x271b68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x271b6c: 0x296d0008  slti        $t5, $t3, 0x8
    ctx->pc = 0x271b6cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x271b70: 0x15a0fff7  bnez        $t5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x271B70u;
    {
        const bool branch_taken_0x271b70 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x271B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271B70u;
        // 0x271b74: 0xa18f0000  sb          $t7, 0x0($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b70) {
            ctx->pc = 0x271B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271b50;
        }
    }
    ctx->pc = 0x271B78u;
    // 0x271b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x271b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b80: 0xc09c5d4  jal         func_271750
    ctx->pc = 0x271B80u;
    SET_GPR_U32(ctx, 31, 0x271B88u);
    ctx->pc = 0x271B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271B80u;
    // 0x271b84: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271750u, 0x271B80u, 0x271B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271B88u;
label_271b88:
    // 0x271b88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x271b88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271b8c:
    // 0x271b8c: 0x20b7821  addu        $t7, $s0, $t3
    ctx->pc = 0x271b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
    // 0x271b90: 0x3ab6821  addu        $t5, $sp, $t3
    ctx->pc = 0x271b90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 11)));
    // 0x271b94: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x271b94u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x271b98: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x271b98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x271b9c: 0x296f0008  slti        $t7, $t3, 0x8
    ctx->pc = 0x271b9cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x271ba0: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x271BA0u;
    {
        const bool branch_taken_0x271ba0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x271BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BA0u;
        // 0x271ba4: 0xa1ae0000  sb          $t6, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ba0) {
            ctx->pc = 0x271B8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271b8c;
        }
    }
    ctx->pc = 0x271BA8u;
    // 0x271ba8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x271ba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x271bac: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x271bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x271bb0: 0x274782a  slt         $t7, $s3, $s4
    ctx->pc = 0x271bb0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x271bb4: 0x15e0ffe5  bnez        $t7, . + 4 + (-0x1B << 2)
    ctx->pc = 0x271BB4u;
    {
        const bool branch_taken_0x271bb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x271BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB4u;
        // 0x271bb8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bb4) {
            ctx->pc = 0x271B4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271b4c;
        }
    }
    ctx->pc = 0x271BBCu;
label_271bbc:
    // 0x271bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271bc0:
    // 0x271bc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x271bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271bc4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x271bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x271bc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x271bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271bcc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x271bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271bd0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x271bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271bd4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x271bd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x271bd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x271bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x271BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BDCu;
        // 0x271be0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271BE4u;
    // 0x271be4: 0x0  nop
    ctx->pc = 0x271be4u;
    // NOP
}
