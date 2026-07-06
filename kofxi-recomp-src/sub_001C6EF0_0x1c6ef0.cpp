#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6EF0
// Address: 0x1c6ef0 - 0x1c6ff8
void sub_001C6EF0_0x1c6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6EF0_0x1c6ef0");
#endif

    switch (ctx->pc) {
        case 0x1c6fa0u: goto label_1c6fa0;
        case 0x1c6fd0u: goto label_1c6fd0;
        default: break;
    }

    ctx->pc = 0x1c6ef0u;

    // 0x1c6ef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c6ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6efc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6f00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6f08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c6f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c6f10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c6f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c6f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c6f18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6f1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c6f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c6f20: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1c6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6f24: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C6F24u;
    {
        const bool branch_taken_0x1c6f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F24u;
            // 0x1c6f28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f24) {
            ctx->pc = 0x1C6FD0u;
            goto label_1c6fd0;
        }
    }
    ctx->pc = 0x1C6F2Cu;
    // 0x1c6f2c: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x1c6f2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1c6f30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c6f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6f34: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6F34u;
    {
        const bool branch_taken_0x1c6f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F34u;
            // 0x1c6f38: 0x92070003  lbu         $a3, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f34) {
            ctx->pc = 0x1C6F60u;
            goto label_1c6f60;
        }
    }
    ctx->pc = 0x1C6F3Cu;
    // 0x1c6f3c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1c6f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6f40: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x1c6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1c6f44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c6f48: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x1c6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x1c6f4c: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x1c6f4cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c6f50: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c6f54: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x1c6f54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6F58u;
    {
        const bool branch_taken_0x1c6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F58u;
            // 0x1c6f5c: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f58) {
            ctx->pc = 0x1C6F64u;
            goto label_1c6f64;
        }
    }
    ctx->pc = 0x1C6F60u;
label_1c6f60:
    // 0x1c6f60: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1c6f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c6f64:
    // 0x1c6f64: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1c6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c6f68: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1c6f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1c6f6c: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x1c6f6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c6f70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c6f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f74: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1c6f74u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1c6f78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6f7c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c6f7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c6f80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c6f84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c6f88: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c6f8c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1c6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1c6f90: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6F90u;
    {
        const bool branch_taken_0x1c6f90 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C6F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F90u;
            // 0x1c6f94: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f90) {
            ctx->pc = 0x1C6FA8u;
            goto label_1c6fa8;
        }
    }
    ctx->pc = 0x1C6F98u;
    // 0x1c6f98: 0xc071a84  jal         func_1C6A10
    ctx->pc = 0x1C6F98u;
    SET_GPR_U32(ctx, 31, 0x1C6FA0u);
    ctx->pc = 0x1C6A10u;
    if (runtime->hasFunction(0x1C6A10u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FA0u; }
        if (ctx->pc != 0x1C6FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A10_0x1c6a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FA0u; }
        if (ctx->pc != 0x1C6FA0u) { return; }
    }
    ctx->pc = 0x1C6FA0u;
label_1c6fa0:
    // 0x1c6fa0: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x1c6fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c6fa4: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x1c6fa4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1c6fa8:
    // 0x1c6fa8: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x1c6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c6fac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c6facu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c6fb0: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6FB0u;
    {
        const bool branch_taken_0x1c6fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c6fb0) {
            ctx->pc = 0x1C6FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FB0u;
            // 0x1c6fb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6FD4u;
            goto label_1c6fd4;
        }
    }
    ctx->pc = 0x1C6FB8u;
    // 0x1c6fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c6fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c6fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fc4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c6fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fc8: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x1C6FC8u;
    SET_GPR_U32(ctx, 31, 0x1C6FD0u);
    ctx->pc = 0x1C6FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FC8u;
            // 0x1c6fcc: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (runtime->hasFunction(0x1C5FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FD0u; }
        if (ctx->pc != 0x1C6FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5FA0_0x1c5fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FD0u; }
        if (ctx->pc != 0x1C6FD0u) { return; }
    }
    ctx->pc = 0x1C6FD0u;
label_1c6fd0:
    // 0x1c6fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6fd4:
    // 0x1c6fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6fd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6fdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6fdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6fe0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c6fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6fe4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c6fe4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6fe8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c6fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FECu;
            // 0x1c6ff0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6FF4u;
    // 0x1c6ff4: 0x0  nop
    ctx->pc = 0x1c6ff4u;
    // NOP
    ctx->pc = 0x1c6ff8u;
}
