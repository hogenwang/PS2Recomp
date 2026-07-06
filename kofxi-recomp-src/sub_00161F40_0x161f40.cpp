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

// Function: sub_00161F40
// Address: 0x161f40 - 0x162030
void sub_00161F40_0x161f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161F40_0x161f40");
#endif

    switch (ctx->pc) {
        case 0x161f74u: goto label_161f74;
        case 0x161fb0u: goto label_161fb0;
        default: break;
    }

    ctx->pc = 0x161f40u;

    // 0x161f40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x161f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x161f44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x161f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x161f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x161f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x161f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x161f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x161f50: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x161f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x161f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161f58: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x161f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161f60: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x161f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161f68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x161f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f6c: 0xc0587a0  jal         func_161E80
    ctx->pc = 0x161F6Cu;
    SET_GPR_U32(ctx, 31, 0x161F74u);
    ctx->pc = 0x161F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F6Cu;
    // 0x161f70: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161E80u, 0x161F6Cu, 0x161F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F74u;
label_161f74:
    // 0x161f74: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x161F74u;
    {
        const bool branch_taken_0x161f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161f74) {
            ctx->pc = 0x161F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161F74u;
            // 0x161f78: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16200Cu;
            goto label_16200c;
        }
    }
    ctx->pc = 0x161F7Cu;
    // 0x161f7c: 0xa4540004  sh          $s4, 0x4($v0)
    ctx->pc = 0x161f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 20));
    // 0x161f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161f84: 0xa4530006  sh          $s3, 0x6($v0)
    ctx->pc = 0x161f84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x161f88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f8c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x161f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x161f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x161f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f94: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x161f94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x161f98: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x161f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x161f9c: 0xa452000a  sh          $s2, 0xA($v0)
    ctx->pc = 0x161f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 18));
    // 0x161fa0: 0xa451000e  sh          $s1, 0xE($v0)
    ctx->pc = 0x161fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x161fa4: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x161fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x161fa8: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x161fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x161fac: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x161facu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
label_161fb0:
    // 0x161fb0: 0xa4a40020  sh          $a0, 0x20($a1)
    ctx->pc = 0x161fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fb4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x161fb8: 0xa4a4002c  sh          $a0, 0x2C($a1)
    ctx->pc = 0x161fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fbc: 0x28c30042  slti        $v1, $a2, 0x42
    ctx->pc = 0x161fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x161fc0: 0xa4a40038  sh          $a0, 0x38($a1)
    ctx->pc = 0x161fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fc4: 0xa4a40044  sh          $a0, 0x44($a1)
    ctx->pc = 0x161fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fc8: 0xa4a40050  sh          $a0, 0x50($a1)
    ctx->pc = 0x161fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fcc: 0xa4a4005c  sh          $a0, 0x5C($a1)
    ctx->pc = 0x161fccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fd0: 0xa4a40068  sh          $a0, 0x68($a1)
    ctx->pc = 0x161fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fd4: 0xa4a40074  sh          $a0, 0x74($a1)
    ctx->pc = 0x161fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 116), (uint16_t)GPR_U32(ctx, 4));
    // 0x161fd8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x161FD8u;
    {
        const bool branch_taken_0x161fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FD8u;
        // 0x161fdc: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fd8) {
            ctx->pc = 0x161FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161fb0;
        }
    }
    ctx->pc = 0x161FE0u;
    // 0x161fe0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x161fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x161fe4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x161fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x161fe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161fec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161ff0: 0xa4640020  sh          $a0, 0x20($v1)
    ctx->pc = 0x161ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x161ff4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161FF4u;
    {
        const bool branch_taken_0x161ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FF4u;
        // 0x161ff8: 0xa464002c  sh          $a0, 0x2C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ff4) {
            ctx->pc = 0x162008u;
            goto label_162008;
        }
    }
    ctx->pc = 0x161FFCu;
    // 0x161ffc: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x161ffcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x162000: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x162000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x162004: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x162004u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
label_162008:
    // 0x162008: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x162008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16200c:
    // 0x16200c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16200cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162010: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x162010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x162014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16201c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16201cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162024: 0x3e00008  jr          $ra
    ctx->pc = 0x162024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162024u;
        // 0x162028: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16202Cu;
    // 0x16202c: 0x0  nop
    ctx->pc = 0x16202cu;
    // NOP
}
