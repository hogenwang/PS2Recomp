#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6E10
// Address: 0x1f6e10 - 0x1f7028
void sub_001F6E10_0x1f6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6E10_0x1f6e10");
#endif

    switch (ctx->pc) {
        case 0x1f6ea0u: goto label_1f6ea0;
        case 0x1f6f08u: goto label_1f6f08;
        case 0x1f6f70u: goto label_1f6f70;
        case 0x1f6f78u: goto label_1f6f78;
        case 0x1f6fbcu: goto label_1f6fbc;
        case 0x1f6fdcu: goto label_1f6fdc;
        case 0x1f6fecu: goto label_1f6fec;
        case 0x1f7000u: goto label_1f7000;
        default: break;
    }

    ctx->pc = 0x1f6e10u;

    // 0x1f6e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f6e14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f6e18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f6e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f6e1c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f6e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e20: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f6e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f6e24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f6e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e28: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f6e2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f6e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e30: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f6e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f6e34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f6e34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f6e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f6e44: 0x8e832018  lw          $v1, 0x2018($s4)
    ctx->pc = 0x1f6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8216)));
    // 0x1f6e48: 0x24711128  addiu       $s1, $v1, 0x1128
    ctx->pc = 0x1f6e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x1f6e4c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f6e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f6e50: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f6e54: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f6e58: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x1f6e58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f6e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f6e60: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f6e64: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1f6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1f6e68: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1f6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1f6e6c: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x1f6e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f6e70: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x1f6e70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x1f6e74: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x1f6e74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6e78: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x1f6e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1f6e7c: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x1f6e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6e80: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1f6e80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6e84: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1f6e84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6e88: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1f6e88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1f6e8c: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x1f6e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6e90: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x1f6e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1f6e94: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x1f6e94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6e98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6E98u;
    {
        const bool branch_taken_0x1f6e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E98u;
            // 0x1f6e9c: 0x2a470004  slti        $a3, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e98) {
            ctx->pc = 0x1F6EF4u;
            goto label_1f6ef4;
        }
    }
    ctx->pc = 0x1F6EA0u;
label_1f6ea0:
    // 0x1f6ea0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f6ea0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6ea4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6EA4u;
    {
        const bool branch_taken_0x1f6ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EA4u;
            // 0x1f6ea8: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ea4) {
            ctx->pc = 0x1F6EF0u;
            goto label_1f6ef0;
        }
    }
    ctx->pc = 0x1F6EACu;
    // 0x1f6eac: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x1f6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1f6eb0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f6eb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6eb4: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6EB4u;
    {
        const bool branch_taken_0x1f6eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6eb4) {
            ctx->pc = 0x1F6EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EB4u;
            // 0x1f6eb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6EF4u;
            goto label_1f6ef4;
        }
    }
    ctx->pc = 0x1F6EBCu;
    // 0x1f6ebc: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1f6ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6ec4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1f6ec4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1f6ec8: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F6EC8u;
    {
        const bool branch_taken_0x1f6ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f6ec8) {
            ctx->pc = 0x1F6ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EC8u;
            // 0x1f6ecc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6EF4u;
            goto label_1f6ef4;
        }
    }
    ctx->pc = 0x1F6ED0u;
    // 0x1f6ed0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1f6ed0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1f6ed4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F6ED4u;
    {
        const bool branch_taken_0x1f6ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6ED4u;
            // 0x1f6ed8: 0x240200b7  addiu       $v0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ed4) {
            ctx->pc = 0x1F6F40u;
            goto label_1f6f40;
        }
    }
    ctx->pc = 0x1F6EDCu;
    // 0x1f6edc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6EDCu;
    {
        const bool branch_taken_0x1f6edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6edc) {
            ctx->pc = 0x1F6EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EDCu;
            // 0x1f6ee0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6EF4u;
            goto label_1f6ef4;
        }
    }
    ctx->pc = 0x1F6EE4u;
    // 0x1f6ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6EE4u;
    {
        const bool branch_taken_0x1f6ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EE4u;
            // 0x1f6ee8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ee4) {
            ctx->pc = 0x1F6F08u;
            goto label_1f6f08;
        }
    }
    ctx->pc = 0x1F6EECu;
    // 0x1f6eec: 0x0  nop
    ctx->pc = 0x1f6eecu;
    // NOP
label_1f6ef0:
    // 0x1f6ef0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f6ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ef4:
    // 0x1f6ef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6ef8: 0x247100b  movn        $v0, $s2, $a3
    ctx->pc = 0x1f6ef8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x1f6efc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1f6efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f6f00: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F6F00u;
    {
        const bool branch_taken_0x1f6f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F00u;
            // 0x1f6f04: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f00) {
            ctx->pc = 0x1F6EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6ea0;
        }
    }
    ctx->pc = 0x1F6F08u;
label_1f6f08:
    // 0x1f6f08: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1f6f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f6f0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6F0Cu;
    {
        const bool branch_taken_0x1f6f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F0Cu;
            // 0x1f6f10: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f0c) {
            ctx->pc = 0x1F6F50u;
            goto label_1f6f50;
        }
    }
    ctx->pc = 0x1F6F14u;
    // 0x1f6f14: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x1f6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1f6f18: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1f6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1f6f1c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f6f1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6f20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f6f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f24: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x1f6f24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6f28: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1f6f28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1f6f2c: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x1f6f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6f30: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1f6f30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1f6f34: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F6F34u;
    {
        const bool branch_taken_0x1f6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F34u;
            // 0x1f6f38: 0xa2230012  sb          $v1, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f34) {
            ctx->pc = 0x1F6FA4u;
            goto label_1f6fa4;
        }
    }
    ctx->pc = 0x1F6F3Cu;
    // 0x1f6f3c: 0x0  nop
    ctx->pc = 0x1f6f3cu;
    // NOP
label_1f6f40:
    // 0x1f6f40: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f6f44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6f48: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F6F48u;
    {
        const bool branch_taken_0x1f6f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F48u;
            // 0x1f6f4c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f48) {
            ctx->pc = 0x1F6F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6f08;
        }
    }
    ctx->pc = 0x1F6F50u;
label_1f6f50:
    // 0x1f6f50: 0x9082fffd  lbu         $v0, -0x3($a0)
    ctx->pc = 0x1f6f50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967293)));
    // 0x1f6f54: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1f6f54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6f58: 0x9083fffe  lbu         $v1, -0x2($a0)
    ctx->pc = 0x1f6f58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x1f6f5c: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x1f6f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6f60: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x1f6f60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x1f6f64: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F6F64u;
    {
        const bool branch_taken_0x1f6f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F64u;
            // 0x1f6f68: 0xa2220012  sb          $v0, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f64) {
            ctx->pc = 0x1F6FA4u;
            goto label_1f6fa4;
        }
    }
    ctx->pc = 0x1F6F6Cu;
    // 0x1f6f6c: 0x0  nop
    ctx->pc = 0x1f6f6cu;
    // NOP
label_1f6f70:
    // 0x1f6f70: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1F6F70u;
    SET_GPR_U32(ctx, 31, 0x1F6F78u);
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F78u; }
        if (ctx->pc != 0x1F6F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F78u; }
        if (ctx->pc != 0x1F6F78u) { return; }
    }
    ctx->pc = 0x1F6F78u;
label_1f6f78:
    // 0x1f6f78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f6f7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6F7Cu;
    {
        const bool branch_taken_0x1f6f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f7c) {
            ctx->pc = 0x1F6F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F7Cu;
            // 0x1f6f80: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6F90u;
            goto label_1f6f90;
        }
    }
    ctx->pc = 0x1F6F84u;
    // 0x1f6f84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f6f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6f8c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1f6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1f6f90:
    // 0x1f6f90: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f6f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f6f94: 0x2131023  subu        $v0, $s0, $s3
    ctx->pc = 0x1f6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1f6f98: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1f6f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f9c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f6fa0: 0x2a470004  slti        $a3, $s2, 0x4
    ctx->pc = 0x1f6fa0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1f6fa4:
    // 0x1f6fa4: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6FA4u;
    {
        const bool branch_taken_0x1f6fa4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FA4u;
            // 0x1f6fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fa4) {
            ctx->pc = 0x1F6FCCu;
            goto label_1f6fcc;
        }
    }
    ctx->pc = 0x1F6FACu;
    // 0x1f6fac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6fb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6fb4: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1F6FB4u;
    SET_GPR_U32(ctx, 31, 0x1F6FBCu);
    ctx->pc = 0x1F6FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FB4u;
            // 0x1f6fb8: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (runtime->hasFunction(0x1D8C98u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FBCu; }
        if (ctx->pc != 0x1F6FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C98_0x1d8c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FBCu; }
        if (ctx->pc != 0x1F6FBCu) { return; }
    }
    ctx->pc = 0x1F6FBCu;
label_1f6fbc:
    // 0x1f6fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f6fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6fc0: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F6FC0u;
    {
        const bool branch_taken_0x1f6fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FC0u;
            // 0x1f6fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fc0) {
            ctx->pc = 0x1F6F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6f70;
        }
    }
    ctx->pc = 0x1F6FC8u;
    // 0x1f6fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6fcc:
    // 0x1f6fcc: 0x56a2000d  bnel        $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F6FCCu;
    {
        const bool branch_taken_0x1f6fcc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6fcc) {
            ctx->pc = 0x1F6FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FCCu;
            // 0x1f6fd0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7004u;
            goto label_1f7004;
        }
    }
    ctx->pc = 0x1F6FD4u;
    // 0x1f6fd4: 0xc07ae2c  jal         func_1EB8B0
    ctx->pc = 0x1F6FD4u;
    SET_GPR_U32(ctx, 31, 0x1F6FDCu);
    ctx->pc = 0x1F6FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FD4u;
            // 0x1f6fd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8B0u;
    if (runtime->hasFunction(0x1EB8B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EB8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FDCu; }
        if (ctx->pc != 0x1F6FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB8B0_0x1eb8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FDCu; }
        if (ctx->pc != 0x1F6FDCu) { return; }
    }
    ctx->pc = 0x1F6FDCu;
label_1f6fdc:
    // 0x1f6fdc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6FDCu;
    {
        const bool branch_taken_0x1f6fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6fdc) {
            ctx->pc = 0x1F6FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FDCu;
            // 0x1f6fe0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7004u;
            goto label_1f7004;
        }
    }
    ctx->pc = 0x1F6FE4u;
    // 0x1f6fe4: 0xc07ae46  jal         func_1EB918
    ctx->pc = 0x1F6FE4u;
    SET_GPR_U32(ctx, 31, 0x1F6FECu);
    ctx->pc = 0x1F6FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FE4u;
            // 0x1f6fe8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB918u;
    if (runtime->hasFunction(0x1EB918u)) {
        auto targetFn = runtime->lookupFunction(0x1EB918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FECu; }
        if (ctx->pc != 0x1F6FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB918_0x1eb918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FECu; }
        if (ctx->pc != 0x1F6FECu) { return; }
    }
    ctx->pc = 0x1F6FECu;
label_1f6fec:
    // 0x1f6fec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6FECu;
    {
        const bool branch_taken_0x1f6fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FECu;
            // 0x1f6ff0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fec) {
            ctx->pc = 0x1F7004u;
            goto label_1f7004;
        }
    }
    ctx->pc = 0x1F6FF4u;
    // 0x1f6ff4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f6ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ff8: 0xc07dacc  jal         func_1F6B30
    ctx->pc = 0x1F6FF8u;
    SET_GPR_U32(ctx, 31, 0x1F7000u);
    ctx->pc = 0x1F6FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FF8u;
            // 0x1f6ffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B30u;
    if (runtime->hasFunction(0x1F6B30u)) {
        auto targetFn = runtime->lookupFunction(0x1F6B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7000u; }
        if (ctx->pc != 0x1F7000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6B30_0x1f6b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7000u; }
        if (ctx->pc != 0x1F7000u) { return; }
    }
    ctx->pc = 0x1F7000u;
label_1f7000:
    // 0x1f7000: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7004:
    // 0x1f7004: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f7004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7008: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f7008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f700c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f700cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f7010: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f7010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7014: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f7014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f7018: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f7018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f701c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F701Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F701Cu;
            // 0x1f7020: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7024u;
    // 0x1f7024: 0x0  nop
    ctx->pc = 0x1f7024u;
    // NOP
    ctx->pc = 0x1f7028u;
}
