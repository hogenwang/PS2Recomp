#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD8F8
// Address: 0x1ad8f8 - 0x1adb58
void sub_001AD8F8_0x1ad8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD8F8_0x1ad8f8");
#endif

    switch (ctx->pc) {
        case 0x1ad950u: goto label_1ad950;
        default: break;
    }

    ctx->pc = 0x1ad8f8u;

    // 0x1ad8f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ad8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ad8fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ad900: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ad900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad904: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ad904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ad908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad90c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ad90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ad910: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ad910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad914: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ad914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ad918: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ad918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad91c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ad91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1ad920: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1ad920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad924: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ad924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1ad928: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1ad928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad92c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1ad92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1ad930: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ad930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad934: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1ad934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1ad938: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1ad938u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad93c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ad93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ad940: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x1ad944: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1ad944u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ad948: 0xc06b5a0  jal         func_1AD680
    ctx->pc = 0x1AD948u;
    SET_GPR_U32(ctx, 31, 0x1AD950u);
    ctx->pc = 0x1AD94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD948u;
            // 0x1ad94c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD680u;
    if (runtime->hasFunction(0x1AD680u)) {
        auto targetFn = runtime->lookupFunction(0x1AD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD950u; }
        if (ctx->pc != 0x1AD950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD680_0x1ad680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD950u; }
        if (ctx->pc != 0x1AD950u) { return; }
    }
    ctx->pc = 0x1AD950u;
label_1ad950:
    // 0x1ad950: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x1AD950u;
    {
        const bool branch_taken_0x1ad950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad950) {
            ctx->pc = 0x1AD954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD950u;
            // 0x1ad954: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADB30u;
            goto label_1adb30;
        }
    }
    ctx->pc = 0x1AD958u;
    // 0x1ad958: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1ad958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad95c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1ad95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ad960: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1ad960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad964: 0x38670004  xori        $a3, $v1, 0x4
    ctx->pc = 0x1ad964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1ad968: 0x87300a  movz        $a2, $a0, $a3
    ctx->pc = 0x1ad968u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x1ad96c: 0x226182a  slt         $v1, $s1, $a2
    ctx->pc = 0x1ad96cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ad970: 0x5460006e  bnel        $v1, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x1AD970u;
    {
        const bool branch_taken_0x1ad970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad970) {
            ctx->pc = 0x1AD974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD970u;
            // 0x1ad974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADB2Cu;
            goto label_1adb2c;
        }
    }
    ctx->pc = 0x1AD978u;
    // 0x1ad978: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1ad978u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad97c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1ad97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ad980: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1ad980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad984: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ad984u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ad988: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad98c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1ad98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ad990: 0x14650027  bne         $v1, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1AD990u;
    {
        const bool branch_taken_0x1ad990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AD994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD990u;
            // 0x1ad994: 0x240eff00  addiu       $t6, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad990) {
            ctx->pc = 0x1ADA30u;
            goto label_1ada30;
        }
    }
    ctx->pc = 0x1AD998u;
    // 0x1ad998: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1ad998u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1ad99c: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x1ad99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1ad9a0: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x1ad9a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1ad9a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ad9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad9a8: 0x6e1824  and         $v1, $v1, $t6
    ctx->pc = 0x1ad9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x1ad9ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ad9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ad9b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ad9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ad9b4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1ad9b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ad9b8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x1ad9b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ad9bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD9BCu;
    {
        const bool branch_taken_0x1ad9bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9BCu;
            // 0x1ad9c0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9bc) {
            ctx->pc = 0x1AD9D0u;
            goto label_1ad9d0;
        }
    }
    ctx->pc = 0x1AD9C4u;
    // 0x1ad9c4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1AD9C4u;
    {
        const bool branch_taken_0x1ad9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD9C4u;
            // 0x1ad9c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad9c4) {
            ctx->pc = 0x1ADB2Cu;
            goto label_1adb2c;
        }
    }
    ctx->pc = 0x1AD9CCu;
    // 0x1ad9cc: 0x0  nop
    ctx->pc = 0x1ad9ccu;
    // NOP
label_1ad9d0:
    // 0x1ad9d0: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x1ad9d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ad9d4: 0x67680a  movz        $t5, $v1, $a3
    ctx->pc = 0x1ad9d4u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x1ad9d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ad9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad9dc: 0x20d3021  addu        $a2, $s0, $t5
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1ad9e0: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1ad9e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1ad9e4: 0x20d3821  addu        $a3, $s0, $t5
    ctx->pc = 0x1ad9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1ad9e8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1ad9e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1ad9ec: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x1ad9ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ad9f0: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x1ad9f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ad9f4: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1ad9f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1ad9f8: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1ad9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ad9fc: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x1ad9fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1ada00: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1ada00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ada04: 0x8e2024  and         $a0, $a0, $t6
    ctx->pc = 0x1ada04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 14));
    // 0x1ada08: 0xae2824  and         $a1, $a1, $t6
    ctx->pc = 0x1ada08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 14));
    // 0x1ada0c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1ada0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1ada10: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ada10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ada14: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ada14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ada18: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x1ada18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1ada1c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1ada1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1ada20: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ada24: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ada24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1ada28: 0x10880003  beq         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADA28u;
    {
        const bool branch_taken_0x1ada28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x1ADA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA28u;
            // 0x1ada2c: 0xa6460000  sh          $a2, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada28) {
            ctx->pc = 0x1ADA38u;
            goto label_1ada38;
        }
    }
    ctx->pc = 0x1ADA30u;
label_1ada30:
    // 0x1ada30: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1ADA30u;
    {
        const bool branch_taken_0x1ada30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADA30u;
            // 0x1ada34: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada30) {
            ctx->pc = 0x1ADB2Cu;
            goto label_1adb2c;
        }
    }
    ctx->pc = 0x1ADA38u;
label_1ada38:
    // 0x1ada38: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1ada38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1ada3c: 0x3c0900ff  lui         $t1, 0xFF
    ctx->pc = 0x1ada3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)255 << 16));
    // 0x1ada40: 0x20d5021  addu        $t2, $s0, $t5
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1ada44: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1ada44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1ada48: 0x20d1821  addu        $v1, $s0, $t5
    ctx->pc = 0x1ada48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1ada4c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1ada4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1ada50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ada50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ada54: 0x20d5821  addu        $t3, $s0, $t5
    ctx->pc = 0x1ada54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1ada58: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x1ada5c: 0x95470000  lhu         $a3, 0x0($t2)
    ctx->pc = 0x1ada5cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1ada60: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x1ada60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1ada64: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x1ada64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ada68: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1ada68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1ada6c: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x1ada6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1ada70: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x1ada70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x1ada74: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1ada74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1ada78: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1ada78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1ada7c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ada7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1ada80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ada80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ada84: 0x20d6021  addu        $t4, $s0, $t5
    ctx->pc = 0x1ada84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x1ada88: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ada88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1ada8c: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x1ada8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x1ada90: 0x91480001  lbu         $t0, 0x1($t2)
    ctx->pc = 0x1ada90u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x1ada94: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1ada94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1ada98: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x1ada98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1ada9c: 0xee3824  and         $a3, $a3, $t6
    ctx->pc = 0x1ada9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 14));
    // 0x1adaa0: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1adaa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1adaa4: 0x53203  sra         $a2, $a1, 8
    ctx->pc = 0x1adaa4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1adaa8: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x1adaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1adaac: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1adaacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1adab0: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x1adab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1adab4: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x1adab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x1adab8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1adab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1adabc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1adabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1adac0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1adac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1adac4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adac8: 0xa6c80000  sh          $t0, 0x0($s6)
    ctx->pc = 0x1adac8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1adacc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1adaccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1adad0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1adad4: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x1adad4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1adad8: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x1adad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1adadc: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1adadcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1adae0: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x1adae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x1adae4: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x1adae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x1adae8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1adae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1adaec: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1adaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1adaf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adaf4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1adaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1adaf8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1adaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x1adafc: 0x8da40004  lw          $a0, 0x4($t5)
    ctx->pc = 0x1adafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x1adb00: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x1adb00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1adb04: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x1adb04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1adb08: 0x41e02  srl         $v1, $a0, 24
    ctx->pc = 0x1adb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x1adb0c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1adb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1adb10: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x1adb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x1adb14: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1adb14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1adb18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1adb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1adb1c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1adb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1adb20: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1adb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1adb24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1adb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1adb28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1adb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1adb2c:
    // 0x1adb2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1adb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adb30:
    // 0x1adb30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1adb30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1adb34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adb34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adb38: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1adb38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1adb3c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1adb3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adb40: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1adb40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1adb44: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1adb44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adb48: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1adb48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1adb4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1adb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adb50: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADB50u;
            // 0x1adb54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADB58u;
    ctx->pc = 0x1adb58u;
}
