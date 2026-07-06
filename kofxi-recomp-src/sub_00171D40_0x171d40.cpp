#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171D40
// Address: 0x171d40 - 0x171f40
void sub_00171D40_0x171d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D40_0x171d40");
#endif

    switch (ctx->pc) {
        case 0x171d6cu: goto label_171d6c;
        case 0x171e08u: goto label_171e08;
        default: break;
    }

    ctx->pc = 0x171d40u;

    // 0x171d40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x171d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x171d44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x171d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x171d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x171d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x171d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171d50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x171d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171d58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x171d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171d60: 0x97b0005a  lhu         $s0, 0x5A($sp)
    ctx->pc = 0x171d60u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 90)));
    // 0x171d64: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x171D64u;
    SET_GPR_U32(ctx, 31, 0x171D6Cu);
    ctx->pc = 0x171D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D64u;
            // 0x171d68: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (runtime->hasFunction(0x1717C0u)) {
        auto targetFn = runtime->lookupFunction(0x1717C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D6Cu; }
        if (ctx->pc != 0x171D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717C0_0x1717c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D6Cu; }
        if (ctx->pc != 0x171D6Cu) { return; }
    }
    ctx->pc = 0x171D6Cu;
label_171d6c:
    // 0x171d6c: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x171d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x171d70: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x171d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x171d74: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x171d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x171d78: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x171d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x171d7c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x171d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x171d80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x171d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x171d84: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x171d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171d88: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x171d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171d8c: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x171d8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x171d90: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171d94: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x171d98: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x171D98u;
    {
        const bool branch_taken_0x171d98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x171D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D98u;
            // 0x171d9c: 0x3044003f  andi        $a0, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d98) {
            ctx->pc = 0x171DACu;
            goto label_171dac;
        }
    }
    ctx->pc = 0x171DA0u;
    // 0x171da0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171DA0u;
    {
        const bool branch_taken_0x171da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x171da0) {
            ctx->pc = 0x171DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171DA0u;
            // 0x171da4: 0x3086ffff  andi        $a2, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171DB0u;
            goto label_171db0;
        }
    }
    ctx->pc = 0x171DA8u;
    // 0x171da8: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x171da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_171dac:
    // 0x171dac: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x171dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_171db0:
    // 0x171db0: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x171db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x171db4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x171DB4u;
    {
        const bool branch_taken_0x171db4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x171DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171DB4u;
            // 0x171db8: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171db4) {
            ctx->pc = 0x171DC8u;
            goto label_171dc8;
        }
    }
    ctx->pc = 0x171DBCu;
    // 0x171dbc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171DBCu;
    {
        const bool branch_taken_0x171dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171dbc) {
            ctx->pc = 0x171DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171DBCu;
            // 0x171dc0: 0x3043ffff  andi        $v1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171DCCu;
            goto label_171dcc;
        }
    }
    ctx->pc = 0x171DC4u;
    // 0x171dc4: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x171dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_171dc8:
    // 0x171dc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x171dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_171dcc:
    // 0x171dcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dd0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x171dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x171dd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171dd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171ddc: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x171ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x171de0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x171de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x171de4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x171de4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171de8: 0x94c2001e  lhu         $v0, 0x1E($a2)
    ctx->pc = 0x171de8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x171dec: 0x9466001e  lhu         $a2, 0x1E($v1)
    ctx->pc = 0x171decu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x171df0: 0x464026  xor         $t0, $v0, $a2
    ctx->pc = 0x171df0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x171df4: 0x94a3011c  lhu         $v1, 0x11C($a1)
    ctx->pc = 0x171df4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 284)));
    // 0x171df8: 0xc83824  and         $a3, $a2, $t0
    ctx->pc = 0x171df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x171dfc: 0x484024  and         $t0, $v0, $t0
    ctx->pc = 0x171dfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x171e00: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x171e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x171e04: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x171e04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_171e08:
    // 0x171e08: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x171e0c: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x171e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x171e10: 0x256c0040  addiu       $t4, $t3, 0x40
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x171e14: 0x5810004  bgez        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x171E14u;
    {
        const bool branch_taken_0x171e14 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x171E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E14u;
            // 0x171e18: 0x318b003f  andi        $t3, $t4, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e14) {
            ctx->pc = 0x171E28u;
            goto label_171e28;
        }
    }
    ctx->pc = 0x171E1Cu;
    // 0x171e1c: 0x51600003  beql        $t3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171E1Cu;
    {
        const bool branch_taken_0x171e1c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e1c) {
            ctx->pc = 0x171E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171E1Cu;
            // 0x171e20: 0x316effff  andi        $t6, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171E2Cu;
            goto label_171e2c;
        }
    }
    ctx->pc = 0x171E24u;
    // 0x171e24: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x171e24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_171e28:
    // 0x171e28: 0x316effff  andi        $t6, $t3, 0xFFFF
    ctx->pc = 0x171e28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_171e2c:
    // 0x171e2c: 0x25cc003f  addiu       $t4, $t6, 0x3F
    ctx->pc = 0x171e2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 63));
    // 0x171e30: 0x5810004  bgez        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x171E30u;
    {
        const bool branch_taken_0x171e30 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x171E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E30u;
            // 0x171e34: 0x318b003f  andi        $t3, $t4, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e30) {
            ctx->pc = 0x171E44u;
            goto label_171e44;
        }
    }
    ctx->pc = 0x171E38u;
    // 0x171e38: 0x51600003  beql        $t3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171E38u;
    {
        const bool branch_taken_0x171e38 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e38) {
            ctx->pc = 0x171E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171E38u;
            // 0x171e3c: 0x316dffff  andi        $t5, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x171E48u;
            goto label_171e48;
        }
    }
    ctx->pc = 0x171E40u;
    // 0x171e40: 0x256bffc0  addiu       $t3, $t3, -0x40
    ctx->pc = 0x171e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967232));
label_171e44:
    // 0x171e44: 0x316dffff  andi        $t5, $t3, 0xFFFF
    ctx->pc = 0x171e44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_171e48:
    // 0x171e48: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x171e48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x171e4c: 0xb6080  sll         $t4, $t3, 2
    ctx->pc = 0x171e4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x171e50: 0xd5880  sll         $t3, $t5, 2
    ctx->pc = 0x171e50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x171e54: 0xac6021  addu        $t4, $a1, $t4
    ctx->pc = 0x171e54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x171e58: 0xab5821  addu        $t3, $a1, $t3
    ctx->pc = 0x171e58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x171e5c: 0x958c001e  lhu         $t4, 0x1E($t4)
    ctx->pc = 0x171e5cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 30)));
    // 0x171e60: 0x956b001e  lhu         $t3, 0x1E($t3)
    ctx->pc = 0x171e60u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x171e64: 0x16c5826  xor         $t3, $t3, $t4
    ctx->pc = 0x171e64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 12));
    // 0x171e68: 0x18b5824  and         $t3, $t4, $t3
    ctx->pc = 0x171e68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x171e6c: 0x15400004  bnez        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x171E6Cu;
    {
        const bool branch_taken_0x171e6c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x171E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E6Cu;
            // 0x171e70: 0x316cffff  andi        $t4, $t3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e6c) {
            ctx->pc = 0x171E80u;
            goto label_171e80;
        }
    }
    ctx->pc = 0x171E74u;
    // 0x171e74: 0x318bffff  andi        $t3, $t4, 0xFFFF
    ctx->pc = 0x171e74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x171e78: 0x11600007  beqz        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x171E78u;
    {
        const bool branch_taken_0x171e78 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e78) {
            ctx->pc = 0x171E98u;
            goto label_171e98;
        }
    }
    ctx->pc = 0x171E80u;
label_171e80:
    // 0x171e80: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x171e84: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x171e84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x171e88: 0x294b0002  slti        $t3, $t2, 0x2
    ctx->pc = 0x171e88u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x171e8c: 0x1560ffde  bnez        $t3, . + 4 + (-0x22 << 2)
    ctx->pc = 0x171E8Cu;
    {
        const bool branch_taken_0x171e8c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x171E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E8Cu;
            // 0x171e90: 0x3129ffff  andi        $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e8c) {
            ctx->pc = 0x171E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171e08;
        }
    }
    ctx->pc = 0x171E94u;
    // 0x171e94: 0x0  nop
    ctx->pc = 0x171e94u;
    // NOP
label_171e98:
    // 0x171e98: 0x2e410009  sltiu       $at, $s2, 0x9
    ctx->pc = 0x171e98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x171e9c: 0x5020001e  beql        $at, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x171E9Cu;
    {
        const bool branch_taken_0x171e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e9c) {
            ctx->pc = 0x171EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171E9Cu;
            // 0x171ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171EA4u;
    // 0x171ea4: 0x3c0a003e  lui         $t2, 0x3E
    ctx->pc = 0x171ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)62 << 16));
    // 0x171ea8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x171eac: 0x254ad580  addiu       $t2, $t2, -0x2A80
    ctx->pc = 0x171eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956416));
    // 0x171eb0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x171eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x171eb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171eb8: 0x600008  jr          $v1
    ctx->pc = 0x171EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171EC0u: goto label_171ec0;
            case 0x171EC8u: goto label_171ec8;
            case 0x171ED0u: goto label_171ed0;
            case 0x171ED8u: goto label_171ed8;
            case 0x171EE0u: goto label_171ee0;
            case 0x171EE8u: goto label_171ee8;
            case 0x171EF0u: goto label_171ef0;
            case 0x171F04u: goto label_171f04;
            case 0x171F0Cu: goto label_171f0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171EC0u;
label_171ec0:
    // 0x171ec0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x171EC0u;
    {
        const bool branch_taken_0x171ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EC0u;
            // 0x171ec4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ec0) {
            ctx->pc = 0x171F1Cu;
            goto label_171f1c;
        }
    }
    ctx->pc = 0x171EC8u;
label_171ec8:
    // 0x171ec8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x171EC8u;
    {
        const bool branch_taken_0x171ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EC8u;
            // 0x171ecc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ec8) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171ED0u;
label_171ed0:
    // 0x171ed0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x171ED0u;
    {
        const bool branch_taken_0x171ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171ED0u;
            // 0x171ed4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ed0) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171ED8u;
label_171ed8:
    // 0x171ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x171ED8u;
    {
        const bool branch_taken_0x171ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171ED8u;
            // 0x171edc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ed8) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171EE0u;
label_171ee0:
    // 0x171ee0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x171EE0u;
    {
        const bool branch_taken_0x171ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EE0u;
            // 0x171ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ee0) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171EE8u;
label_171ee8:
    // 0x171ee8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x171EE8u;
    {
        const bool branch_taken_0x171ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EE8u;
            // 0x171eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ee8) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171EF0u;
label_171ef0:
    // 0x171ef0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x171ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x171ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171ef8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x171ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x171efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x171EFCu;
    {
        const bool branch_taken_0x171efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EFCu;
            // 0x171f00: 0x9442001c  lhu         $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171efc) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171F04u;
label_171f04:
    // 0x171f04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171F04u;
    {
        const bool branch_taken_0x171f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F04u;
            // 0x171f08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f04) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171F0Cu;
label_171f0c:
    // 0x171f0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171F0Cu;
    {
        const bool branch_taken_0x171f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F0Cu;
            // 0x171f10: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f0c) {
            ctx->pc = 0x171F18u;
            goto label_171f18;
        }
    }
    ctx->pc = 0x171F14u;
    // 0x171f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171f18:
    // 0x171f18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x171f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_171f1c:
    // 0x171f1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x171f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x171F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F2Cu;
            // 0x171f30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171F34u;
    // 0x171f34: 0x0  nop
    ctx->pc = 0x171f34u;
    // NOP
    // 0x171f38: 0x0  nop
    ctx->pc = 0x171f38u;
    // NOP
    // 0x171f3c: 0x0  nop
    ctx->pc = 0x171f3cu;
    // NOP
    ctx->pc = 0x171f40u;
}
