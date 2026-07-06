#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0D68
// Address: 0x2c0d68 - 0x2c10b8
void sub_002C0D68_0x2c0d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0D68_0x2c0d68");
#endif

    switch (ctx->pc) {
        case 0x2c0dc0u: goto label_2c0dc0;
        case 0x2c0dd8u: goto label_2c0dd8;
        case 0x2c0e10u: goto label_2c0e10;
        case 0x2c0e20u: goto label_2c0e20;
        case 0x2c0e40u: goto label_2c0e40;
        case 0x2c0e74u: goto label_2c0e74;
        case 0x2c0e88u: goto label_2c0e88;
        case 0x2c0eb0u: goto label_2c0eb0;
        case 0x2c0ec0u: goto label_2c0ec0;
        case 0x2c0ef4u: goto label_2c0ef4;
        case 0x2c0f00u: goto label_2c0f00;
        case 0x2c0f48u: goto label_2c0f48;
        case 0x2c0f8cu: goto label_2c0f8c;
        case 0x2c0fa4u: goto label_2c0fa4;
        case 0x2c0fd4u: goto label_2c0fd4;
        case 0x2c0fe4u: goto label_2c0fe4;
        case 0x2c0ff4u: goto label_2c0ff4;
        case 0x2c1018u: goto label_2c1018;
        case 0x2c1044u: goto label_2c1044;
        case 0x2c1064u: goto label_2c1064;
        case 0x2c1068u: goto label_2c1068;
        case 0x2c106cu: goto label_2c106c;
        case 0x2c1070u: goto label_2c1070;
        case 0x2c1078u: goto label_2c1078;
        case 0x2c107cu: goto label_2c107c;
        case 0x2c1080u: goto label_2c1080;
        case 0x2c1094u: goto label_2c1094;
        default: break;
    }

    ctx->pc = 0x2c0d68u;

    // 0x2c0d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c0d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c0d6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c0d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c0d70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c0d74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c0d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0d7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c0d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c0d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c0d84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c0d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d88: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0D88u;
    {
        const bool branch_taken_0x2c0d88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D88u;
            // 0x2c0d8c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d88) {
            ctx->pc = 0x2C0D98u;
            goto label_2c0d98;
        }
    }
    ctx->pc = 0x2C0D90u;
    // 0x2c0d90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C0D90u;
    {
        const bool branch_taken_0x2c0d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D90u;
            // 0x2c0d94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d90) {
            ctx->pc = 0x2C0DF4u;
            goto label_2c0df4;
        }
    }
    ctx->pc = 0x2C0D98u;
label_2c0d98:
    // 0x2c0d98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0d9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0da0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2c0da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c0da4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2c0da4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c0da8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2c0da8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2c0dac: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x2c0dacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c0db0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C0DB0u;
    {
        const bool branch_taken_0x2c0db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DB0u;
            // 0x2c0db4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0db0) {
            ctx->pc = 0x2C0DF4u;
            goto label_2c0df4;
        }
    }
    ctx->pc = 0x2C0DB8u;
    // 0x2c0db8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2c0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c0dbc: 0x0  nop
    ctx->pc = 0x2c0dbcu;
    // NOP
label_2c0dc0:
    // 0x2c0dc0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2c0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c0dc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c0dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0dc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0dcc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2c0dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0dd0: 0xc0a6c3c  jal         func_29B0F0
    ctx->pc = 0x2C0DD0u;
    SET_GPR_U32(ctx, 31, 0x2C0DD8u);
    ctx->pc = 0x2C0DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DD0u;
            // 0x2c0dd4: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B0F0u;
    if (runtime->hasFunction(0x29B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x29B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DD8u; }
        if (ctx->pc != 0x2C0DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B0F0_0x29b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DD8u; }
        if (ctx->pc != 0x2C0DD8u) { return; }
    }
    ctx->pc = 0x2C0DD8u;
label_2c0dd8:
    // 0x2c0dd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0DD8u;
    {
        const bool branch_taken_0x2c0dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DD8u;
            // 0x2c0ddc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0dd8) {
            ctx->pc = 0x2C0DF4u;
            goto label_2c0df4;
        }
    }
    ctx->pc = 0x2C0DE0u;
    // 0x2c0de0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c0de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c0de4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2c0de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2c0de8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C0DE8u;
    {
        const bool branch_taken_0x2c0de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0de8) {
            ctx->pc = 0x2C0DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DE8u;
            // 0x2c0dec: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0dc0;
        }
    }
    ctx->pc = 0x2C0DF0u;
    // 0x2c0df0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c0df4:
    // 0x2c0df4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c0df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0df8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c0df8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0dfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0e00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c0e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E08u;
            // 0x2c0e0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0E10u;
label_2c0e10:
    // 0x2c0e10: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0E10u;
    {
        const bool branch_taken_0x2c0e10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E10u;
            // 0x2c0e14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e10) {
            ctx->pc = 0x2C0E20u;
            goto label_2c0e20;
        }
    }
    ctx->pc = 0x2C0E18u;
    // 0x2c0e18: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E18u;
            // 0x2c0e1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0E20u;
label_2c0e20:
    // 0x2c0e20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0e24: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2c0e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0e28: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x2c0e28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0e2c: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x2c0e2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x2c0e30: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x2c0e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c0e34: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C0E34u;
    {
        const bool branch_taken_0x2c0e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E34u;
            // 0x2c0e38: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e34) {
            ctx->pc = 0x2C0E80u;
            goto label_2c0e80;
        }
    }
    ctx->pc = 0x2C0E3Cu;
    // 0x2c0e3c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2c0e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c0e40:
    // 0x2c0e40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2c0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c0e44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0e48: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x2c0e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c0e4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0E4Cu;
    {
        const bool branch_taken_0x2c0e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e4c) {
            ctx->pc = 0x2C0E64u;
            goto label_2c0e64;
        }
    }
    ctx->pc = 0x2C0E54u;
    // 0x2c0e54: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0E54u;
    {
        const bool branch_taken_0x2c0e54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e54) {
            ctx->pc = 0x2C0E6Cu;
            goto label_2c0e6c;
        }
    }
    ctx->pc = 0x2C0E5Cu;
    // 0x2c0e5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0E5Cu;
    {
        const bool branch_taken_0x2c0e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E5Cu;
            // 0x2c0e60: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e5c) {
            ctx->pc = 0x2C0E74u;
            goto label_2c0e74;
        }
    }
    ctx->pc = 0x2C0E64u;
label_2c0e64:
    // 0x2c0e64: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0E64u;
    {
        const bool branch_taken_0x2c0e64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e64) {
            ctx->pc = 0x2C0E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E64u;
            // 0x2c0e68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0E74u;
            goto label_2c0e74;
        }
    }
    ctx->pc = 0x2C0E6Cu;
label_2c0e6c:
    // 0x2c0e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E6Cu;
            // 0x2c0e70: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0E74u;
label_2c0e74:
    // 0x2c0e74: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x2c0e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c0e78: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C0E78u;
    {
        const bool branch_taken_0x2c0e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E78u;
            // 0x2c0e7c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e78) {
            ctx->pc = 0x2C0E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0e40;
        }
    }
    ctx->pc = 0x2C0E80u;
label_2c0e80:
    // 0x2c0e80: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E80u;
            // 0x2c0e84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0E88u;
label_2c0e88:
    // 0x2c0e88: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0E88u;
    {
        const bool branch_taken_0x2c0e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e88) {
            ctx->pc = 0x2C0EA8u;
            goto label_2c0ea8;
        }
    }
    ctx->pc = 0x2C0E90u;
    // 0x2c0e90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0e94: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2c0e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0E98u;
    {
        const bool branch_taken_0x2c0e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e98) {
            ctx->pc = 0x2C0EA8u;
            goto label_2c0ea8;
        }
    }
    ctx->pc = 0x2C0EA0u;
    // 0x2c0ea0: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0EA0u;
    {
        const bool branch_taken_0x2c0ea0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2c0ea0) {
            ctx->pc = 0x2C0EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EA0u;
            // 0x2c0ea4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0EB0u;
            goto label_2c0eb0;
        }
    }
    ctx->pc = 0x2C0EA8u;
label_2c0ea8:
    // 0x2c0ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EA8u;
            // 0x2c0eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0EB0u;
label_2c0eb0:
    // 0x2c0eb0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c0eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EB8u;
            // 0x2c0ebc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0EC0u;
label_2c0ec0:
    // 0x2c0ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0ec4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0EC4u;
    {
        const bool branch_taken_0x2c0ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EC4u;
            // 0x2c0ec8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ec4) {
            ctx->pc = 0x2C0EE4u;
            goto label_2c0ee4;
        }
    }
    ctx->pc = 0x2C0ECCu;
    // 0x2c0ecc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0ed0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2c0ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0ed4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0ED4u;
    {
        const bool branch_taken_0x2c0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0ED4u;
            // 0x2c0ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ed4) {
            ctx->pc = 0x2C0EF4u;
            goto label_2c0ef4;
        }
    }
    ctx->pc = 0x2C0EDCu;
    // 0x2c0edc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0EDCu;
    {
        const bool branch_taken_0x2c0edc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2c0edc) {
            ctx->pc = 0x2C0EECu;
            goto label_2c0eec;
        }
    }
    ctx->pc = 0x2C0EE4u;
label_2c0ee4:
    // 0x2c0ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0EE4u;
    {
        const bool branch_taken_0x2c0ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EE4u;
            // 0x2c0ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ee4) {
            ctx->pc = 0x2C0EF4u;
            goto label_2c0ef4;
        }
    }
    ctx->pc = 0x2C0EECu;
label_2c0eec:
    // 0x2c0eec: 0xc0af084  jal         func_2BC210
    ctx->pc = 0x2C0EECu;
    SET_GPR_U32(ctx, 31, 0x2C0EF4u);
    ctx->pc = 0x2BC210u;
    if (runtime->hasFunction(0x2BC210u)) {
        auto targetFn = runtime->lookupFunction(0x2BC210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EF4u; }
        if (ctx->pc != 0x2C0EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC210_0x2bc210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0EF4u; }
        if (ctx->pc != 0x2C0EF4u) { return; }
    }
    ctx->pc = 0x2C0EF4u;
label_2c0ef4:
    // 0x2c0ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0EF8u;
            // 0x2c0efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0F00u;
label_2c0f00:
    // 0x2c0f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c0f04: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2c0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c0f08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c0f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c0f0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c0f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c0f14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c0f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c0f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c0f1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c0f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0f24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c0f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c0f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c0f2c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2C0F2Cu;
    {
        const bool branch_taken_0x2c0f2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F2Cu;
            // 0x2c0f30: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f2c) {
            ctx->pc = 0x2C0F5Cu;
            goto label_2c0f5c;
        }
    }
    ctx->pc = 0x2C0F34u;
    // 0x2c0f34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c0f38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C0F38u;
    {
        const bool branch_taken_0x2c0f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F38u;
            // 0x2c0f3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f38) {
            ctx->pc = 0x2C0F64u;
            goto label_2c0f64;
        }
    }
    ctx->pc = 0x2C0F40u;
    // 0x2c0f40: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2C0F40u;
    SET_GPR_U32(ctx, 31, 0x2C0F48u);
    ctx->pc = 0x2C0F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F40u;
            // 0x2c0f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F48u; }
        if (ctx->pc != 0x2C0F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F48u; }
        if (ctx->pc != 0x2C0F48u) { return; }
    }
    ctx->pc = 0x2C0F48u;
label_2c0f48:
    // 0x2c0f48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c0f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f4c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C0F4Cu;
    {
        const bool branch_taken_0x2c0f4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F4Cu;
            // 0x2c0f50: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f4c) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0F54u;
    // 0x2c0f54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0F54u;
    {
        const bool branch_taken_0x2c0f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F54u;
            // 0x2c0f58: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f54) {
            ctx->pc = 0x2C0F68u;
            goto label_2c0f68;
        }
    }
    ctx->pc = 0x2C0F5Cu;
label_2c0f5c:
    // 0x2c0f5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0f60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c0f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0f64:
    // 0x2c0f64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c0f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0f68:
    // 0x2c0f68: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2c0f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c0f6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0F6Cu;
    {
        const bool branch_taken_0x2c0f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F6Cu;
            // 0x2c0f70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f6c) {
            ctx->pc = 0x2C0F7Cu;
            goto label_2c0f7c;
        }
    }
    ctx->pc = 0x2C0F74u;
    // 0x2c0f74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0F74u;
    {
        const bool branch_taken_0x2c0f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F74u;
            // 0x2c0f78: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f74) {
            ctx->pc = 0x2C0F84u;
            goto label_2c0f84;
        }
    }
    ctx->pc = 0x2C0F7Cu;
label_2c0f7c:
    // 0x2c0f7c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2c0f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c0f80: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2c0f80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2c0f84:
    // 0x2c0f84: 0xc0b00e6  jal         func_2C0398
    ctx->pc = 0x2C0F84u;
    SET_GPR_U32(ctx, 31, 0x2C0F8Cu);
    ctx->pc = 0x2C0F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F84u;
            // 0x2c0f88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0398u;
    if (runtime->hasFunction(0x2C0398u)) {
        auto targetFn = runtime->lookupFunction(0x2C0398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F8Cu; }
        if (ctx->pc != 0x2C0F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0398_0x2c0398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F8Cu; }
        if (ctx->pc != 0x2C0F8Cu) { return; }
    }
    ctx->pc = 0x2C0F8Cu;
label_2c0f8c:
    // 0x2c0f8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c0f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f90: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C0F90u;
    {
        const bool branch_taken_0x2c0f90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F90u;
            // 0x2c0f94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f90) {
            ctx->pc = 0x2C0FE4u;
            goto label_2c0fe4;
        }
    }
    ctx->pc = 0x2C0F98u;
    // 0x2c0f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f9c: 0xc0af02c  jal         func_2BC0B0
    ctx->pc = 0x2C0F9Cu;
    SET_GPR_U32(ctx, 31, 0x2C0FA4u);
    ctx->pc = 0x2C0FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F9Cu;
            // 0x2c0fa0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0B0u;
    if (runtime->hasFunction(0x2BC0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FA4u; }
        if (ctx->pc != 0x2C0FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC0B0_0x2bc0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FA4u; }
        if (ctx->pc != 0x2C0FA4u) { return; }
    }
    ctx->pc = 0x2C0FA4u;
label_2c0fa4:
    // 0x2c0fa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0FA4u;
    {
        const bool branch_taken_0x2c0fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FA4u;
            // 0x2c0fa8: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fa4) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0FACu;
    // 0x2c0fac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c0fb0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C0FB0u;
    {
        const bool branch_taken_0x2c0fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fb0) {
            ctx->pc = 0x2C0FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FB0u;
            // 0x2c0fb4: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FB8u;
            goto label_2c0fb8;
        }
    }
    ctx->pc = 0x2C0FB8u;
label_2c0fb8:
    // 0x2c0fb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C0FB8u;
    {
        const bool branch_taken_0x2c0fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FB8u;
            // 0x2c0fbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fb8) {
            ctx->pc = 0x2C0FF8u;
            goto label_2c0ff8;
        }
    }
    ctx->pc = 0x2C0FC0u;
label_2c0fc0:
    // 0x2c0fc0: 0x240500d9  addiu       $a1, $zero, 0xD9
    ctx->pc = 0x2c0fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x2c0fc4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c0fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c0fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fcc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C0FCCu;
    SET_GPR_U32(ctx, 31, 0x2C0FD4u);
    ctx->pc = 0x2C0FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FCCu;
            // 0x2c0fd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FD4u; }
        if (ctx->pc != 0x2C0FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FD4u; }
        if (ctx->pc != 0x2C0FD4u) { return; }
    }
    ctx->pc = 0x2C0FD4u;
label_2c0fd4:
    // 0x2c0fd4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0FD4u;
    {
        const bool branch_taken_0x2c0fd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fd4) {
            ctx->pc = 0x2C0FE4u;
            goto label_2c0fe4;
        }
    }
    ctx->pc = 0x2C0FDCu;
    // 0x2c0fdc: 0xc0b11a4  jal         func_2C4690
    ctx->pc = 0x2C0FDCu;
    SET_GPR_U32(ctx, 31, 0x2C0FE4u);
    ctx->pc = 0x2C0FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FDCu;
            // 0x2c0fe0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4690u;
    if (runtime->hasFunction(0x2C4690u)) {
        auto targetFn = runtime->lookupFunction(0x2C4690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FE4u; }
        if (ctx->pc != 0x2C0FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4690_0x2c4690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FE4u; }
        if (ctx->pc != 0x2C0FE4u) { return; }
    }
    ctx->pc = 0x2C0FE4u;
label_2c0fe4:
    // 0x2c0fe4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0FE4u;
    {
        const bool branch_taken_0x2c0fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FE4u;
            // 0x2c0fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fe4) {
            ctx->pc = 0x2C0FF8u;
            goto label_2c0ff8;
        }
    }
    ctx->pc = 0x2C0FECu;
    // 0x2c0fec: 0xc0af176  jal         func_2BC5D8
    ctx->pc = 0x2C0FECu;
    SET_GPR_U32(ctx, 31, 0x2C0FF4u);
    ctx->pc = 0x2C0FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FECu;
            // 0x2c0ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FF4u; }
        if (ctx->pc != 0x2C0FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FF4u; }
        if (ctx->pc != 0x2C0FF4u) { return; }
    }
    ctx->pc = 0x2C0FF4u;
label_2c0ff4:
    // 0x2c0ff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ff8:
    // 0x2c0ff8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c0ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0ffc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2c0ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1000: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c1000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1004: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1008: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c1008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c100c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c100cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1010: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1010u;
            // 0x2c1014: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1018u;
label_2c1018:
    // 0x2c1018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c1018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c101c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2c101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1020: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2c1020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c1024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1028: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c102c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c102cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c1030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1034: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c1034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1038: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c103c: 0xc0a69c2  jal         func_29A708
    ctx->pc = 0x2C103Cu;
    SET_GPR_U32(ctx, 31, 0x2C1044u);
    ctx->pc = 0x2C1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C103Cu;
            // 0x2c1040: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (runtime->hasFunction(0x29A708u)) {
        auto targetFn = runtime->lookupFunction(0x29A708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1044u; }
        if (ctx->pc != 0x2C1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A708_0x29a708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1044u; }
        if (ctx->pc != 0x2C1044u) { return; }
    }
    ctx->pc = 0x2C1044u;
label_2c1044:
    // 0x2c1044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1048: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C1048u;
    {
        const bool branch_taken_0x2c1048 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C104Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1048u;
            // 0x2c104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1048) {
            ctx->pc = 0x2C1070u;
            goto label_2c1070;
        }
    }
    ctx->pc = 0x2C1050u;
    // 0x2c1050: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c1050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c1054: 0x240500dd  addiu       $a1, $zero, 0xDD
    ctx->pc = 0x2c1054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x2c1058: 0x240600a3  addiu       $a2, $zero, 0xA3
    ctx->pc = 0x2c1058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x2c105c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c105cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1060: 0xc0a5648  jal         func_295920
label_2c1064:
    if (ctx->pc == 0x2C1064u) {
        ctx->pc = 0x2C1064u;
            // 0x2c1064: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1068u;
        goto label_2c1068;
    }
    ctx->pc = 0x2C1060u;
    SET_GPR_U32(ctx, 31, 0x2C1068u);
    ctx->pc = 0x2C1064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1060u;
            // 0x2c1064: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1068u; }
        if (ctx->pc != 0x2C1068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1068u; }
        if (ctx->pc != 0x2C1068u) { return; }
    }
    ctx->pc = 0x2C1068u;
label_2c1068:
    // 0x2c1068: 0x1000000b  b           . + 4 + (0xB << 2)
label_2c106c:
    if (ctx->pc == 0x2C106Cu) {
        ctx->pc = 0x2C106Cu;
            // 0x2c106c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1070u;
        goto label_2c1070;
    }
    ctx->pc = 0x2C1068u;
    {
        const bool branch_taken_0x2c1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1068u;
            // 0x2c106c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1068) {
            ctx->pc = 0x2C1098u;
            goto label_2c1098;
        }
    }
    ctx->pc = 0x2C1070u;
label_2c1070:
    // 0x2c1070: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c1070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1074: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c1074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c1078:
    // 0x2c1078: 0xc0b042e  jal         func_2C10B8
label_2c107c:
    if (ctx->pc == 0x2C107Cu) {
        ctx->pc = 0x2C107Cu;
            // 0x2c107c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1080u;
        goto label_2c1080;
    }
    ctx->pc = 0x2C1078u;
    SET_GPR_U32(ctx, 31, 0x2C1080u);
    ctx->pc = 0x2C107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1078u;
            // 0x2c107c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C10B8u;
    if (runtime->hasFunction(0x2C10B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C10B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1080u; }
        if (ctx->pc != 0x2C1080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C10B8_0x2c10b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1080u; }
        if (ctx->pc != 0x2C1080u) { return; }
    }
    ctx->pc = 0x2C1080u;
label_2c1080:
    // 0x2c1080: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c1080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1084: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1084u;
    {
        const bool branch_taken_0x2c1084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1084u;
            // 0x2c1088: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1084) {
            ctx->pc = 0x2C1098u;
            goto label_2c1098;
        }
    }
    ctx->pc = 0x2C108Cu;
    // 0x2c108c: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x2C108Cu;
    SET_GPR_U32(ctx, 31, 0x2C1094u);
    ctx->pc = 0x2C1090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C108Cu;
            // 0x2c1090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1094u; }
        if (ctx->pc != 0x2C1094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1094u; }
        if (ctx->pc != 0x2C1094u) { return; }
    }
    ctx->pc = 0x2C1094u;
label_2c1094:
    // 0x2c1094: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1098:
    // 0x2c1098: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c109c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2c109cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c10a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c10a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c10a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2c10a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c10a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c10a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c10ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C10ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C10B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C10ACu;
            // 0x2c10b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C10B4u;
    // 0x2c10b4: 0x0  nop
    ctx->pc = 0x2c10b4u;
    // NOP
    ctx->pc = 0x2c10b8u;
}
