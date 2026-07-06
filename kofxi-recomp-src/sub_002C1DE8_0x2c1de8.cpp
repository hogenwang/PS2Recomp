#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1DE8
// Address: 0x2c1de8 - 0x2c1e80
void sub_002C1DE8_0x2c1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1DE8_0x2c1de8");
#endif

    switch (ctx->pc) {
        case 0x2c1e30u: goto label_2c1e30;
        case 0x2c1e48u: goto label_2c1e48;
        default: break;
    }

    ctx->pc = 0x2c1de8u;

    // 0x2c1de8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c1dec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c1decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c1df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1df4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c1df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c1dfc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c1dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c1e04: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1E04u;
    {
        const bool branch_taken_0x2c1e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E04u;
            // 0x2c1e08: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e04) {
            ctx->pc = 0x2C1E14u;
            goto label_2c1e14;
        }
    }
    ctx->pc = 0x2C1E0Cu;
    // 0x2c1e0c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C1E0Cu;
    {
        const bool branch_taken_0x2c1e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E0Cu;
            // 0x2c1e10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e0c) {
            ctx->pc = 0x2C1E64u;
            goto label_2c1e64;
        }
    }
    ctx->pc = 0x2C1E14u;
label_2c1e14:
    // 0x2c1e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1e18: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x2c1e18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c1e1c: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x2c1e1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c1e20: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2c1e20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2c1e24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C1E24u;
    {
        const bool branch_taken_0x2c1e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E24u;
            // 0x2c1e28: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e24) {
            ctx->pc = 0x2C1E50u;
            goto label_2c1e50;
        }
    }
    ctx->pc = 0x2C1E2Cu;
    // 0x2c1e2c: 0x0  nop
    ctx->pc = 0x2c1e2cu;
    // NOP
label_2c1e30:
    // 0x2c1e30: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2c1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c1e34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c1e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1e3c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2c1e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1e40: 0xc0a6c3c  jal         func_29B0F0
    ctx->pc = 0x2C1E40u;
    SET_GPR_U32(ctx, 31, 0x2C1E48u);
    ctx->pc = 0x2C1E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E40u;
            // 0x2c1e44: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B0F0u;
    if (runtime->hasFunction(0x29B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x29B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E48u; }
        if (ctx->pc != 0x2C1E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B0F0_0x29b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E48u; }
        if (ctx->pc != 0x2C1E48u) { return; }
    }
    ctx->pc = 0x2C1E48u;
label_2c1e48:
    // 0x2c1e48: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1E48u;
    {
        const bool branch_taken_0x2c1e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E48u;
            // 0x2c1e4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e48) {
            ctx->pc = 0x2C1E64u;
            goto label_2c1e64;
        }
    }
    ctx->pc = 0x2C1E50u;
label_2c1e50:
    // 0x2c1e50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c1e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c1e54: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2c1e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c1e58: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C1E58u;
    {
        const bool branch_taken_0x2c1e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e58) {
            ctx->pc = 0x2C1E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E58u;
            // 0x2c1e5c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1e30;
        }
    }
    ctx->pc = 0x2C1E60u;
    // 0x2c1e60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c1e64:
    // 0x2c1e64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1e68: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c1e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1e6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1e70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c1e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1e78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E78u;
            // 0x2c1e7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1E80u;
    ctx->pc = 0x2c1e80u;
}
