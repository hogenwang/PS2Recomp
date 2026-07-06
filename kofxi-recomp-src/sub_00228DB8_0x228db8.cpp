#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228DB8
// Address: 0x228db8 - 0x229170
void sub_00228DB8_0x228db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228DB8_0x228db8");
#endif

    switch (ctx->pc) {
        case 0x228e00u: goto label_228e00;
        case 0x228e4cu: goto label_228e4c;
        case 0x228ea4u: goto label_228ea4;
        case 0x228eb8u: goto label_228eb8;
        case 0x228f08u: goto label_228f08;
        case 0x228f58u: goto label_228f58;
        case 0x228fa0u: goto label_228fa0;
        case 0x229058u: goto label_229058;
        case 0x2290a0u: goto label_2290a0;
        case 0x22912cu: goto label_22912c;
        default: break;
    }

    ctx->pc = 0x228db8u;

    // 0x228db8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x228db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x228dbc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x228dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x228dc0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x228dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x228dc4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x228dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x228dc8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x228dc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x228dcc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x228dd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x228dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x228dd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x228dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x228dd8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x228dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x228ddc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x228ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228de0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x228de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x228de4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x228de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x228de8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x228de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x228dec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x228decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x228df0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x228df4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x228DF4u;
    {
        const bool branch_taken_0x228df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228DF4u;
            // 0x228df8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228df4) {
            ctx->pc = 0x228E24u;
            goto label_228e24;
        }
    }
    ctx->pc = 0x228DFCu;
    // 0x228dfc: 0x3c1601c1  lui         $s6, 0x1C1
    ctx->pc = 0x228dfcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)449 << 16));
label_228e00:
    // 0x228e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x228e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x228e04: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x228e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x228e08: 0x0  nop
    ctx->pc = 0x228e08u;
    // NOP
    // 0x228e0c: 0x0  nop
    ctx->pc = 0x228e0cu;
    // NOP
    // 0x228e10: 0x0  nop
    ctx->pc = 0x228e10u;
    // NOP
    // 0x228e14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x228E14u;
    {
        const bool branch_taken_0x228e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x228e14) {
            ctx->pc = 0x228E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228e00;
        }
    }
    ctx->pc = 0x228E1Cu;
    // 0x228e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x228E1Cu;
    {
        const bool branch_taken_0x228e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E1Cu;
            // 0x228e20: 0x8ec2a748  lw          $v0, -0x58B8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e1c) {
            ctx->pc = 0x228E2Cu;
            goto label_228e2c;
        }
    }
    ctx->pc = 0x228E24u;
label_228e24:
    // 0x228e24: 0x3c1601c1  lui         $s6, 0x1C1
    ctx->pc = 0x228e24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)449 << 16));
    // 0x228e28: 0x8ec2a748  lw          $v0, -0x58B8($s6)
    ctx->pc = 0x228e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944584)));
label_228e2c:
    // 0x228e2c: 0x11a080  sll         $s4, $s1, 2
    ctx->pc = 0x228e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x228e30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x228e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x228e34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x228e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228e38: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x228E38u;
    {
        const bool branch_taken_0x228e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E38u;
            // 0x228e3c: 0x8ec2a748  lw          $v0, -0x58B8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e38) {
            ctx->pc = 0x229038u;
            goto label_229038;
        }
    }
    ctx->pc = 0x228E40u;
    // 0x228e40: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x228e40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x228e44: 0xc08a2ec  jal         func_228BB0
    ctx->pc = 0x228E44u;
    SET_GPR_U32(ctx, 31, 0x228E4Cu);
    ctx->pc = 0x228E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228E44u;
            // 0x228e48: 0x8e44a724  lw          $a0, -0x58DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944548)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228BB0u;
    if (runtime->hasFunction(0x228BB0u)) {
        auto targetFn = runtime->lookupFunction(0x228BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E4Cu; }
        if (ctx->pc != 0x228E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228BB0_0x228bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E4Cu; }
        if (ctx->pc != 0x228E4Cu) { return; }
    }
    ctx->pc = 0x228E4Cu;
label_228e4c:
    // 0x228e4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x228e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e50: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x228E50u;
    {
        const bool branch_taken_0x228e50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E50u;
            // 0x228e54: 0x8e45a724  lw          $a1, -0x58DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e50) {
            ctx->pc = 0x228E60u;
            goto label_228e60;
        }
    }
    ctx->pc = 0x228E58u;
    // 0x228e58: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x228E58u;
    {
        const bool branch_taken_0x228e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E58u;
            // 0x228e5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e58) {
            ctx->pc = 0x22902Cu;
            goto label_22902c;
        }
    }
    ctx->pc = 0x228E60u;
label_228e60:
    // 0x228e60: 0x3c1501c1  lui         $s5, 0x1C1
    ctx->pc = 0x228e60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)449 << 16));
    // 0x228e64: 0x8ea2a794  lw          $v0, -0x586C($s5)
    ctx->pc = 0x228e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944660)));
    // 0x228e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x228e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228e6c: 0x2251806  srlv        $v1, $a1, $s1
    ctx->pc = 0x228e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
    // 0x228e70: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x228e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x228e74: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x228e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x228e78: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x228e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x228e7c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x228e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x228e80: 0xaea2a794  sw          $v0, -0x586C($s5)
    ctx->pc = 0x228e80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944660), GPR_U32(ctx, 2));
    // 0x228e84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228e88: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x228e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x228e8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x228e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x228e90: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x228e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x228e94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x228E94u;
    {
        const bool branch_taken_0x228e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E94u;
            // 0x228e98: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e94) {
            ctx->pc = 0x228EC0u;
            goto label_228ec0;
        }
    }
    ctx->pc = 0x228E9Cu;
    // 0x228e9c: 0xc08a45c  jal         func_229170
    ctx->pc = 0x228E9Cu;
    SET_GPR_U32(ctx, 31, 0x228EA4u);
    ctx->pc = 0x228EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228E9Cu;
            // 0x228ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229170u;
    if (runtime->hasFunction(0x229170u)) {
        auto targetFn = runtime->lookupFunction(0x229170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EA4u; }
        if (ctx->pc != 0x228EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229170_0x229170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EA4u; }
        if (ctx->pc != 0x228EA4u) { return; }
    }
    ctx->pc = 0x228EA4u;
label_228ea4:
    // 0x228ea4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x228ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ea8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x228EA8u;
    {
        const bool branch_taken_0x228ea8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x228EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228EA8u;
            // 0x228eac: 0x8e42a724  lw          $v0, -0x58DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ea8) {
            ctx->pc = 0x228EC4u;
            goto label_228ec4;
        }
    }
    ctx->pc = 0x228EB0u;
    // 0x228eb0: 0xc08a534  jal         func_2294D0
    ctx->pc = 0x228EB0u;
    SET_GPR_U32(ctx, 31, 0x228EB8u);
    ctx->pc = 0x228EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228EB0u;
            // 0x228eb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2294D0u;
    if (runtime->hasFunction(0x2294D0u)) {
        auto targetFn = runtime->lookupFunction(0x2294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EB8u; }
        if (ctx->pc != 0x228EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002294D0_0x2294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EB8u; }
        if (ctx->pc != 0x228EB8u) { return; }
    }
    ctx->pc = 0x228EB8u;
label_228eb8:
    // 0x228eb8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x228EB8u;
    {
        const bool branch_taken_0x228eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228EB8u;
            // 0x228ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228eb8) {
            ctx->pc = 0x22902Cu;
            goto label_22902c;
        }
    }
    ctx->pc = 0x228EC0u;
label_228ec0:
    // 0x228ec0: 0x8e42a724  lw          $v0, -0x58DC($s2)
    ctx->pc = 0x228ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944548)));
label_228ec4:
    // 0x228ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x228ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228ec8: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x228ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x228ecc: 0xa4d1000a  sh          $s1, 0xA($a2)
    ctx->pc = 0x228eccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x228ed0: 0x2221006  srlv        $v0, $v0, $s1
    ctx->pc = 0x228ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x228ed4: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x228ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x228ed8: 0xa4c2000e  sh          $v0, 0xE($a2)
    ctx->pc = 0x228ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x228edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ee0: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x228ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x228ee4: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x228ee4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228ee8: 0x2d220020  sltiu       $v0, $t1, 0x20
    ctx->pc = 0x228ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x228eec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x228EECu;
    {
        const bool branch_taken_0x228eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228EECu;
            // 0x228ef0: 0xacd30004  sw          $s3, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228eec) {
            ctx->pc = 0x228F38u;
            goto label_228f38;
        }
    }
    ctx->pc = 0x228EF4u;
    // 0x228ef4: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x228ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x228ef8: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x228ef8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x228efc: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x228efcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x228f00: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x228f00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x228f04: 0x0  nop
    ctx->pc = 0x228f04u;
    // NOP
label_228f08:
    // 0x228f08: 0x71142  srl         $v0, $a3, 5
    ctx->pc = 0x228f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x228f0c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x228f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x228f10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x228f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x228f14: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x228f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x228f18: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x228f1c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x228f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x228f20: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x228f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x228f24: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x228f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x228f28: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x228F28u;
    {
        const bool branch_taken_0x228f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228F28u;
            // 0x228f2c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f28) {
            ctx->pc = 0x228F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228f08;
        }
    }
    ctx->pc = 0x228F30u;
    // 0x228f30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x228F30u;
    {
        const bool branch_taken_0x228f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228F30u;
            // 0x228f34: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f30) {
            ctx->pc = 0x228F48u;
            goto label_228f48;
        }
    }
    ctx->pc = 0x228F38u;
label_228f38:
    // 0x228f38: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x228f38u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x228f3c: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x228f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x228f40: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x228f44: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x228f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_228f48:
    // 0x228f48: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x228F48u;
    {
        const bool branch_taken_0x228f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228f48) {
            ctx->pc = 0x228F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228F48u;
            // 0x228f4c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228F8Cu;
            goto label_228f8c;
        }
    }
    ctx->pc = 0x228F50u;
    // 0x228f50: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x228f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x228f54: 0x0  nop
    ctx->pc = 0x228f54u;
    // NOP
label_228f58:
    // 0x228f58: 0x71942  srl         $v1, $a3, 5
    ctx->pc = 0x228f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x228f5c: 0x30e5001f  andi        $a1, $a3, 0x1F
    ctx->pc = 0x228f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x228f60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228f64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x228f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228f68: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x228f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x228f6c: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x228f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x228f70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228f74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x228f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x228f78: 0xe9282a  slt         $a1, $a3, $t1
    ctx->pc = 0x228f78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x228f7c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x228f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x228f80: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x228F80u;
    {
        const bool branch_taken_0x228f80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x228F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228F80u;
            // 0x228f84: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f80) {
            ctx->pc = 0x228F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228f58;
        }
    }
    ctx->pc = 0x228F88u;
    // 0x228f88: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x228f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_228f8c:
    // 0x228f8c: 0x54c20019  bnel        $a2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x228F8Cu;
    {
        const bool branch_taken_0x228f8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x228f8c) {
            ctx->pc = 0x228F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228F8Cu;
            // 0x228f90: 0x8d62a73c  lw          $v0, -0x58C4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294944572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228FF4u;
            goto label_228ff4;
        }
    }
    ctx->pc = 0x228F94u;
    // 0x228f94: 0x1a000016  blez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x228F94u;
    {
        const bool branch_taken_0x228f94 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x228F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228F94u;
            // 0x228f98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f94) {
            ctx->pc = 0x228FF0u;
            goto label_228ff0;
        }
    }
    ctx->pc = 0x228F9Cu;
    // 0x228f9c: 0x24c80010  addiu       $t0, $a2, 0x10
    ctx->pc = 0x228f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_228fa0:
    // 0x228fa0: 0x72942  srl         $a1, $a3, 5
    ctx->pc = 0x228fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x228fa4: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x228fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x228fa8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x228fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x228fac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x228facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228fb0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x228fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x228fb4: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x228fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x228fb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x228fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x228fbc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x228fbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x228fc0: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x228fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
    // 0x228fc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x228fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x228fc8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x228fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x228fcc: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x228fccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x228fd0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x228fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x228fd4: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x228fd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x228fd8: 0x94c3000e  lhu         $v1, 0xE($a2)
    ctx->pc = 0x228fd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x228fdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x228fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228fe0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x228fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x228fe4: 0xa4c2000c  sh          $v0, 0xC($a2)
    ctx->pc = 0x228fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x228fe8: 0x1e00ffed  bgtz        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x228FE8u;
    {
        const bool branch_taken_0x228fe8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x228FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228FE8u;
            // 0x228fec: 0xa4c3000e  sh          $v1, 0xE($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fe8) {
            ctx->pc = 0x228FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_228fa0;
        }
    }
    ctx->pc = 0x228FF0u;
label_228ff0:
    // 0x228ff0: 0x8d62a73c  lw          $v0, -0x58C4($t3)
    ctx->pc = 0x228ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294944572)));
label_228ff4:
    // 0x228ff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228ff8: 0x8d84a728  lw          $a0, -0x58D8($t4)
    ctx->pc = 0x228ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294944552)));
    // 0x228ffc: 0x8d45a740  lw          $a1, -0x58C0($t2)
    ctx->pc = 0x228ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294944576)));
    // 0x229000: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x229000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x229004: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x229004u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x229008: 0x8ec3a748  lw          $v1, -0x58B8($s6)
    ctx->pc = 0x229008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944584)));
    // 0x22900c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x22900cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x229010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x229010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x229014: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x229014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x229018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22901c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x22901cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x229020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x229020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229024: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x229024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x229028: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x229028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_22902c:
    // 0x22902c: 0x10e00045  beqz        $a3, . + 4 + (0x45 << 2)
    ctx->pc = 0x22902Cu;
    {
        const bool branch_taken_0x22902c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x229030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22902Cu;
            // 0x229030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22902c) {
            ctx->pc = 0x229144u;
            goto label_229144;
        }
    }
    ctx->pc = 0x229034u;
    // 0x229034: 0x8ec2a748  lw          $v0, -0x58B8($s6)
    ctx->pc = 0x229034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944584)));
label_229038:
    // 0x229038: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x229038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x22903c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22903cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229040: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x229040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x229044: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229044u;
    {
        const bool branch_taken_0x229044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229044u;
            // 0x229048: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229044) {
            ctx->pc = 0x22907Cu;
            goto label_22907c;
        }
    }
    ctx->pc = 0x22904Cu;
    // 0x22904c: 0x3c1501c1  lui         $s5, 0x1C1
    ctx->pc = 0x22904cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)449 << 16));
    // 0x229050: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229054: 0x0  nop
    ctx->pc = 0x229054u;
    // NOP
label_229058:
    // 0x229058: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x229058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x22905c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x229060: 0x0  nop
    ctx->pc = 0x229060u;
    // NOP
    // 0x229064: 0x0  nop
    ctx->pc = 0x229064u;
    // NOP
    // 0x229068: 0x0  nop
    ctx->pc = 0x229068u;
    // NOP
    // 0x22906c: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22906Cu;
    {
        const bool branch_taken_0x22906c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22906c) {
            ctx->pc = 0x229058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229058;
        }
    }
    ctx->pc = 0x229074u;
    // 0x229074: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x229074u;
    {
        const bool branch_taken_0x229074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229074u;
            // 0x229078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229074) {
            ctx->pc = 0x22908Cu;
            goto label_22908c;
        }
    }
    ctx->pc = 0x22907Cu;
label_22907c:
    // 0x22907c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22907cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229080: 0x3c1501c1  lui         $s5, 0x1C1
    ctx->pc = 0x229080u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)449 << 16));
    // 0x229084: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22908c:
    // 0x22908c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x229090: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x229090u;
    {
        const bool branch_taken_0x229090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229090u;
            // 0x229094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229090) {
            ctx->pc = 0x2290C4u;
            goto label_2290c4;
        }
    }
    ctx->pc = 0x229098u;
    // 0x229098: 0x2486fff0  addiu       $a2, $a0, -0x10
    ctx->pc = 0x229098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x22909c: 0x0  nop
    ctx->pc = 0x22909cu;
    // NOP
label_2290a0:
    // 0x2290a0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2290a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2290a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2290a8: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x2290a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2290ac: 0x0  nop
    ctx->pc = 0x2290acu;
    // NOP
    // 0x2290b0: 0x0  nop
    ctx->pc = 0x2290b0u;
    // NOP
    // 0x2290b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2290B4u;
    {
        const bool branch_taken_0x2290b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2290b4) {
            ctx->pc = 0x2290A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2290a0;
        }
    }
    ctx->pc = 0x2290BCu;
    // 0x2290bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2290BCu;
    {
        const bool branch_taken_0x2290bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2290C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2290BCu;
            // 0x2290c0: 0x651026  xor         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290bc) {
            ctx->pc = 0x2290CCu;
            goto label_2290cc;
        }
    }
    ctx->pc = 0x2290C4u;
label_2290c4:
    // 0x2290c4: 0x2486fff0  addiu       $a2, $a0, -0x10
    ctx->pc = 0x2290c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x2290c8: 0x651026  xor         $v0, $v1, $a1
    ctx->pc = 0x2290c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
label_2290cc:
    // 0x2290cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2290ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2290d0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2290d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2290d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2290d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2290d8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2290d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2290dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2290DCu;
    {
        const bool branch_taken_0x2290dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2290E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2290DCu;
            // 0x2290e0: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2290dc) {
            ctx->pc = 0x2290F8u;
            goto label_2290f8;
        }
    }
    ctx->pc = 0x2290E4u;
    // 0x2290e4: 0x8ec2a748  lw          $v0, -0x58B8($s6)
    ctx->pc = 0x2290e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944584)));
    // 0x2290e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2290e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2290ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2290ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2290f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2290f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2290f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2290f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2290f8:
    // 0x2290f8: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x2290f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2290fc: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x2290fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x229100: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x229100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x229104: 0x8ce3a77c  lw          $v1, -0x5884($a3)
    ctx->pc = 0x229104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944636)));
    // 0x229108: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x229108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x22910c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x22910cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x229110: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x229110u;
    {
        const bool branch_taken_0x229110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229110u;
            // 0x229114: 0x918804  sllv        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229110) {
            ctx->pc = 0x22912Cu;
            goto label_22912c;
        }
    }
    ctx->pc = 0x229118u;
    // 0x229118: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x229118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22911c: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x229120: 0x96060008  lhu         $a2, 0x8($s0)
    ctx->pc = 0x229120u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229124: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x229124u;
    SET_GPR_U32(ctx, 31, 0x22912Cu);
    ctx->pc = 0x229128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229124u;
            // 0x229128: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22912Cu; }
        if (ctx->pc != 0x22912Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22912Cu; }
        if (ctx->pc != 0x22912Cu) { return; }
    }
    ctx->pc = 0x22912Cu;
label_22912c:
    // 0x22912c: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x22912cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229130: 0x8ea4a794  lw          $a0, -0x586C($s5)
    ctx->pc = 0x229130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944660)));
    // 0x229134: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x229134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229138: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x229138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22913c: 0xaea4a794  sw          $a0, -0x586C($s5)
    ctx->pc = 0x22913cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944660), GPR_U32(ctx, 4));
    // 0x229140: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x229140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_229144:
    // 0x229144: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x229144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229148: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x229148u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22914c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22914cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229150: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x229150u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229154: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x229154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x229158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22915c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22915cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x229160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229164: 0x3e00008  jr          $ra
    ctx->pc = 0x229164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229164u;
            // 0x229168: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22916Cu;
    // 0x22916c: 0x0  nop
    ctx->pc = 0x22916cu;
    // NOP
    ctx->pc = 0x229170u;
}
