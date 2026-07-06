#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D4D88
// Address: 0x2d4d88 - 0x2d5050
void sub_002D4D88_0x2d4d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4D88_0x2d4d88");
#endif

    switch (ctx->pc) {
        case 0x2d4ec0u: goto label_2d4ec0;
        case 0x2d4f90u: goto label_2d4f90;
        case 0x2d5008u: goto label_2d5008;
        default: break;
    }

    ctx->pc = 0x2d4d88u;

    // 0x2d4d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4d8c: 0x3c030f0f  lui         $v1, 0xF0F
    ctx->pc = 0x2d4d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3855 << 16));
    // 0x2d4d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4d94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d4d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4d9c: 0x34630f0f  ori         $v1, $v1, 0xF0F
    ctx->pc = 0x2d4d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3855);
    // 0x2d4da0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d4da4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2d4da4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4da8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d4da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d4dac: 0x3c06cccc  lui         $a2, 0xCCCC
    ctx->pc = 0x2d4dacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52428 << 16));
    // 0x2d4db0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d4db4: 0x3c085555  lui         $t0, 0x5555
    ctx->pc = 0x2d4db4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21845 << 16));
    // 0x2d4db8: 0x35085555  ori         $t0, $t0, 0x5555
    ctx->pc = 0x2d4db8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)21845);
    // 0x2d4dbc: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x2d4dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x2d4dc0: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x2d4dc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d4dc4: 0x34e700ff  ori         $a3, $a3, 0xFF
    ctx->pc = 0x2d4dc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
    // 0x2d4dc8: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4dcc: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x2d4dccu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4dd0: 0xf1102  srl         $v0, $t7, 4
    ctx->pc = 0x2d4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 4));
    // 0x2d4dd4: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2d4dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2d4dd8: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d4dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d4ddc: 0x253495a0  addiu       $s4, $t1, -0x6A60
    ctx->pc = 0x2d4ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940064));
    // 0x2d4de0: 0x436824  and         $t5, $v0, $v1
    ctx->pc = 0x2d4de0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d4de4: 0x1cd7026  xor         $t6, $t6, $t5
    ctx->pc = 0x2d4de4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 13));
    // 0x2d4de8: 0xd1900  sll         $v1, $t5, 4
    ctx->pc = 0x2d4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x2d4dec: 0x1e37826  xor         $t7, $t7, $v1
    ctx->pc = 0x2d4decu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 3));
    // 0x2d4df0: 0xe1480  sll         $v0, $t6, 18
    ctx->pc = 0x2d4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 18));
    // 0x2d4df4: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d4df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d4df8: 0xf1c80  sll         $v1, $t7, 18
    ctx->pc = 0x2d4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 18));
    // 0x2d4dfc: 0x466824  and         $t5, $v0, $a2
    ctx->pc = 0x2d4dfcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2d4e00: 0x6f1826  xor         $v1, $v1, $t7
    ctx->pc = 0x2d4e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 15));
    // 0x2d4e04: 0x1cd2826  xor         $a1, $t6, $t5
    ctx->pc = 0x2d4e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 13));
    // 0x2d4e08: 0xd1482  srl         $v0, $t5, 18
    ctx->pc = 0x2d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 18));
    // 0x2d4e0c: 0x666824  and         $t5, $v1, $a2
    ctx->pc = 0x2d4e0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2d4e10: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x2d4e10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x2d4e14: 0xa27026  xor         $t6, $a1, $v0
    ctx->pc = 0x2d4e14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2d4e18: 0xd1482  srl         $v0, $t5, 18
    ctx->pc = 0x2d4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), 18));
    // 0x2d4e1c: 0x1ed1826  xor         $v1, $t7, $t5
    ctx->pc = 0x2d4e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 13));
    // 0x2d4e20: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x2d4e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x2d4e24: 0x627826  xor         $t7, $v1, $v0
    ctx->pc = 0x2d4e24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2d4e28: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2d4e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2d4e2c: 0xf1042  srl         $v0, $t7, 1
    ctx->pc = 0x2d4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x2d4e30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d4e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e34: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d4e38: 0x486824  and         $t5, $v0, $t0
    ctx->pc = 0x2d4e38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2d4e3c: 0xd1840  sll         $v1, $t5, 1
    ctx->pc = 0x2d4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2d4e40: 0x1cd7026  xor         $t6, $t6, $t5
    ctx->pc = 0x2d4e40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 13));
    // 0x2d4e44: 0x1e37826  xor         $t7, $t7, $v1
    ctx->pc = 0x2d4e44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 3));
    // 0x2d4e48: 0xe1202  srl         $v0, $t6, 8
    ctx->pc = 0x2d4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x2d4e4c: 0x4f1026  xor         $v0, $v0, $t7
    ctx->pc = 0x2d4e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 15));
    // 0x2d4e50: 0x476824  and         $t5, $v0, $a3
    ctx->pc = 0x2d4e50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2d4e54: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2d4e54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2d4e58: 0xd1a00  sll         $v1, $t5, 8
    ctx->pc = 0x2d4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x2d4e5c: 0x1ed7826  xor         $t7, $t7, $t5
    ctx->pc = 0x2d4e5cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 13));
    // 0x2d4e60: 0x1c37026  xor         $t6, $t6, $v1
    ctx->pc = 0x2d4e60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x2d4e64: 0xf1042  srl         $v0, $t7, 1
    ctx->pc = 0x2d4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
    // 0x2d4e68: 0x4e1026  xor         $v0, $v0, $t6
    ctx->pc = 0x2d4e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 14));
    // 0x2d4e6c: 0x24f88da0  addiu       $t8, $a3, -0x7260
    ctx->pc = 0x2d4e6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938016));
    // 0x2d4e70: 0x486824  and         $t5, $v0, $t0
    ctx->pc = 0x2d4e70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2d4e74: 0x1cd7026  xor         $t6, $t6, $t5
    ctx->pc = 0x2d4e74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 13));
    // 0x2d4e78: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x2d4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2d4e7c: 0x1c52824  and         $a1, $t6, $a1
    ctx->pc = 0x2d4e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x2d4e80: 0x1c67024  and         $t6, $t6, $a2
    ctx->pc = 0x2d4e80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x2d4e84: 0x1e27826  xor         $t7, $t7, $v0
    ctx->pc = 0x2d4e84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 2));
    // 0x2d4e88: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x2d4e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2d4e8c: 0x31e200ff  andi        $v0, $t7, 0xFF
    ctx->pc = 0x2d4e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x2d4e90: 0xf1c02  srl         $v1, $t7, 16
    ctx->pc = 0x2d4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x2d4e94: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2d4e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2d4e98: 0x31e4ff00  andi        $a0, $t7, 0xFF00
    ctx->pc = 0x2d4e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65280);
    // 0x2d4e9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d4e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d4ea0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2d4ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2d4ea4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d4ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d4ea8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2d4ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2d4eac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d4eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d4eb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d4eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d4eb4: 0x2783c  dsll32      $t7, $v0, 0
    ctx->pc = 0x2d4eb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4eb8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x2d4eb8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x2d4ebc: 0x0  nop
    ctx->pc = 0x2d4ebcu;
    // NOP
label_2d4ec0:
    // 0x2d4ec0: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2d4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2d4ec4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d4ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d4ec8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2d4ec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4ecc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D4ECCu;
    {
        const bool branch_taken_0x2d4ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4ECCu;
            // 0x2d4ed0: 0x2a110010  slti        $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ecc) {
            ctx->pc = 0x2D4EE8u;
            goto label_2d4ee8;
        }
    }
    ctx->pc = 0x2D4ED4u;
    // 0x2d4ed4: 0xe2680  sll         $a0, $t6, 26
    ctx->pc = 0x2d4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 26));
    // 0x2d4ed8: 0xf2e80  sll         $a1, $t7, 26
    ctx->pc = 0x2d4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 26));
    // 0x2d4edc: 0xe1082  srl         $v0, $t6, 2
    ctx->pc = 0x2d4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 2));
    // 0x2d4ee0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4EE0u;
    {
        const bool branch_taken_0x2d4ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4EE0u;
            // 0x2d4ee4: 0xf1882  srl         $v1, $t7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ee0) {
            ctx->pc = 0x2D4EF8u;
            goto label_2d4ef8;
        }
    }
    ctx->pc = 0x2D4EE8u;
label_2d4ee8:
    // 0x2d4ee8: 0xe26c0  sll         $a0, $t6, 27
    ctx->pc = 0x2d4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 27));
    // 0x2d4eec: 0xf2ec0  sll         $a1, $t7, 27
    ctx->pc = 0x2d4eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 27));
    // 0x2d4ef0: 0xe1042  srl         $v0, $t6, 1
    ctx->pc = 0x2d4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 1));
    // 0x2d4ef4: 0xf1842  srl         $v1, $t7, 1
    ctx->pc = 0x2d4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 1));
label_2d4ef8:
    // 0x2d4ef8: 0x447025  or          $t6, $v0, $a0
    ctx->pc = 0x2d4ef8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d4efc: 0x657825  or          $t7, $v1, $a1
    ctx->pc = 0x2d4efcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2d4f00: 0x1d27024  and         $t6, $t6, $s2
    ctx->pc = 0x2d4f00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 18));
    // 0x2d4f04: 0x1f27824  and         $t7, $t7, $s2
    ctx->pc = 0x2d4f04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 18));
    // 0x2d4f08: 0xe2d02  srl         $a1, $t6, 20
    ctx->pc = 0x2d4f08u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 14), 20));
    // 0x2d4f0c: 0xe1542  srl         $v0, $t6, 21
    ctx->pc = 0x2d4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), 21));
    // 0x2d4f10: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2d4f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2d4f14: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d4f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d4f18: 0xe6582  srl         $t4, $t6, 22
    ctx->pc = 0x2d4f18u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), 22));
    // 0x2d4f1c: 0xe4342  srl         $t0, $t6, 13
    ctx->pc = 0x2d4f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 13));
    // 0x2d4f20: 0xe5b82  srl         $t3, $t6, 14
    ctx->pc = 0x2d4f20u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 14));
    // 0x2d4f24: 0xe3982  srl         $a3, $t6, 6
    ctx->pc = 0x2d4f24u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 14), 6));
    // 0x2d4f28: 0xe31c2  srl         $a2, $t6, 7
    ctx->pc = 0x2d4f28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 14), 7));
    // 0x2d4f2c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2d4f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2d4f30: 0x318c0038  andi        $t4, $t4, 0x38
    ctx->pc = 0x2d4f30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)56);
    // 0x2d4f34: 0x316b0030  andi        $t3, $t3, 0x30
    ctx->pc = 0x2d4f34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)48);
    // 0x2d4f38: 0x30c6003c  andi        $a2, $a2, 0x3C
    ctx->pc = 0x2d4f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)60);
    // 0x2d4f3c: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x2d4f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x2d4f40: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x2d4f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2d4f44: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x2d4f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x2d4f48: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x2d4f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x2d4f4c: 0x31eb003f  andi        $t3, $t7, 0x3F
    ctx->pc = 0x2d4f4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)63);
    // 0x2d4f50: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2d4f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2d4f54: 0xf4d42  srl         $t1, $t7, 21
    ctx->pc = 0x2d4f54u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 15), 21));
    // 0x2d4f58: 0xf2582  srl         $a0, $t7, 22
    ctx->pc = 0x2d4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 15), 22));
    // 0x2d4f5c: 0xf51c2  srl         $t2, $t7, 7
    ctx->pc = 0x2d4f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 15), 7));
    // 0x2d4f60: 0xf1a02  srl         $v1, $t7, 8
    ctx->pc = 0x2d4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x2d4f64: 0x31c2003f  andi        $v0, $t6, 0x3F
    ctx->pc = 0x2d4f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)63);
    // 0x2d4f68: 0x30840030  andi        $a0, $a0, 0x30
    ctx->pc = 0x2d4f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x2d4f6c: 0x3063003c  andi        $v1, $v1, 0x3C
    ctx->pc = 0x2d4f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60);
    // 0x2d4f70: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x2d4f70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x2d4f74: 0x314a0003  andi        $t2, $t2, 0x3
    ctx->pc = 0x2d4f74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2d4f78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d4f7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d4f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d4f80: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2d4f80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2d4f84: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2d4f84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d4f88: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x2d4f88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x2d4f8c: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x2d4f8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_2d4f90:
    // 0x2d4f90: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x2d4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2d4f94: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x2d4f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x2d4f98: 0x1184021  addu        $t0, $t0, $t8
    ctx->pc = 0x2d4f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x2d4f9c: 0xf83821  addu        $a3, $a3, $t8
    ctx->pc = 0x2d4f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
    // 0x2d4fa0: 0xf6342  srl         $t4, $t7, 13
    ctx->pc = 0x2d4fa0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 13));
    // 0x2d4fa4: 0x8ca40300  lw          $a0, 0x300($a1)
    ctx->pc = 0x2d4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 768)));
    // 0x2d4fa8: 0x8ce60100  lw          $a2, 0x100($a3)
    ctx->pc = 0x2d4fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x2d4fac: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x2d4facu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2d4fb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4fb4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x2d4fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2d4fb8: 0x8d020200  lw          $v0, 0x200($t0)
    ctx->pc = 0x2d4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 512)));
    // 0x2d4fbc: 0x318c00fc  andi        $t4, $t4, 0xFC
    ctx->pc = 0x2d4fbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)252);
    // 0x2d4fc0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2d4fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2d4fc4: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x2d4fc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x2d4fc8: 0x1384821  addu        $t1, $t1, $t8
    ctx->pc = 0x2d4fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x2d4fcc: 0x1986021  addu        $t4, $t4, $t8
    ctx->pc = 0x2d4fccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x2d4fd0: 0x1585021  addu        $t2, $t2, $t8
    ctx->pc = 0x2d4fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 24)));
    // 0x2d4fd4: 0x8d270700  lw          $a3, 0x700($t1)
    ctx->pc = 0x2d4fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1792)));
    // 0x2d4fd8: 0x8d650400  lw          $a1, 0x400($t3)
    ctx->pc = 0x2d4fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1024)));
    // 0x2d4fdc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2d4fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2d4fe0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d4fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d4fe4: 0x8d840600  lw          $a0, 0x600($t4)
    ctx->pc = 0x2d4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1536)));
    // 0x2d4fe8: 0x8d460500  lw          $a2, 0x500($t2)
    ctx->pc = 0x2d4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1280)));
    // 0x2d4fec: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2d4fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2d4ff0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d4ff4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2d4ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x2d4ff8: 0x34402  srl         $t0, $v1, 16
    ctx->pc = 0x2d4ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2d4ffc: 0xa46825  or          $t5, $a1, $a0
    ctx->pc = 0x2d4ffcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2d5000: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2d5000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5004: 0x1b31824  and         $v1, $t5, $s3
    ctx->pc = 0x2d5004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & GPR_U64(ctx, 19));
label_2d5008:
    // 0x2d5008: 0xd1400  sll         $v0, $t5, 16
    ctx->pc = 0x2d5008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x2d500c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x2d500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x2d5010: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2d5010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2d5014: 0x32702  srl         $a0, $v1, 28
    ctx->pc = 0x2d5014u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x2d5018: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2d5018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d501c: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x2d501cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x2d5020: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x2d5020u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x2d5024: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d5024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d5028: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x2d5028u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
    // 0x2d502c: 0x1620ffa4  bnez        $s1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2D502Cu;
    {
        const bool branch_taken_0x2d502c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D502Cu;
            // 0x2d5030: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d502c) {
            ctx->pc = 0x2D4EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d4ec0;
        }
    }
    ctx->pc = 0x2D5034u;
    // 0x2d5034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d503c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d503cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5044: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5048: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5048u;
            // 0x2d504c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5050u;
    ctx->pc = 0x2d5050u;
}
