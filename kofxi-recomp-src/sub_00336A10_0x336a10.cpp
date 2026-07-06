#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336A10
// Address: 0x336a10 - 0x336af0
void sub_00336A10_0x336a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336A10_0x336a10");
#endif

    ctx->pc = 0x336a10u;

    // 0x336a10: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x336a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x336a14: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x336a14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x336a18: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x336a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x336a1c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x336A1Cu;
    {
        const bool branch_taken_0x336a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336a1c) {
            ctx->pc = 0x336A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336A1Cu;
            // 0x336a20: 0x30c20002  andi        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x336A8Cu;
            goto label_336a8c;
        }
    }
    ctx->pc = 0x336A24u;
    // 0x336a24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336a28: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x336a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x336a2c: 0x9445ea20  lhu         $a1, -0x15E0($v0)
    ctx->pc = 0x336a2cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961696)));
    // 0x336a30: 0x30a200f0  andi        $v0, $a1, 0xF0
    ctx->pc = 0x336a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x336a34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336A34u;
    {
        const bool branch_taken_0x336a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336A34u;
            // 0x336a38: 0x9463ea24  lhu         $v1, -0x15DC($v1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a34) {
            ctx->pc = 0x336A44u;
            goto label_336a44;
        }
    }
    ctx->pc = 0x336A3Cu;
    // 0x336a3c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x336A3Cu;
    {
        const bool branch_taken_0x336a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336A3Cu;
            // 0x336a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a3c) {
            ctx->pc = 0x336AE0u;
            goto label_336ae0;
        }
    }
    ctx->pc = 0x336A44u;
label_336a44:
    // 0x336a44: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x336a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x336a48: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x336a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336a4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x336a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x336a50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x336A50u;
    {
        const bool branch_taken_0x336a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336a50) {
            ctx->pc = 0x336A88u;
            goto label_336a88;
        }
    }
    ctx->pc = 0x336A58u;
    // 0x336a58: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x336a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336a5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x336A5Cu;
    {
        const bool branch_taken_0x336a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336a5c) {
            ctx->pc = 0x336A88u;
            goto label_336a88;
        }
    }
    ctx->pc = 0x336A64u;
    // 0x336a64: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336a68: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x336a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x336a6c: 0x9444ea22  lhu         $a0, -0x15DE($v0)
    ctx->pc = 0x336a6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961698)));
    // 0x336a70: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x336a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x336a74: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x336a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x336a78: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x336a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x336a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336a80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x336A80u;
    {
        const bool branch_taken_0x336a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336A80u;
            // 0x336a84: 0xa464ea22  sh          $a0, -0x15DE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294961698), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a80) {
            ctx->pc = 0x336AE0u;
            goto label_336ae0;
        }
    }
    ctx->pc = 0x336A88u;
label_336a88:
    // 0x336a88: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x336a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_336a8c:
    // 0x336a8c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x336A8Cu;
    {
        const bool branch_taken_0x336a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336a8c) {
            ctx->pc = 0x336A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336A8Cu;
            // 0x336a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336AE0u;
            goto label_336ae0;
        }
    }
    ctx->pc = 0x336A94u;
    // 0x336a94: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336a98: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x336a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x336a9c: 0x9445ea2c  lhu         $a1, -0x15D4($v0)
    ctx->pc = 0x336a9cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961708)));
    // 0x336aa0: 0x30a200f0  andi        $v0, $a1, 0xF0
    ctx->pc = 0x336aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x336aa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336AA4u;
    {
        const bool branch_taken_0x336aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336AA4u;
            // 0x336aa8: 0x9466ea30  lhu         $a2, -0x15D0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336aa4) {
            ctx->pc = 0x336AB4u;
            goto label_336ab4;
        }
    }
    ctx->pc = 0x336AACu;
    // 0x336aac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x336AACu;
    {
        const bool branch_taken_0x336aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336AACu;
            // 0x336ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336aac) {
            ctx->pc = 0x336AE0u;
            goto label_336ae0;
        }
    }
    ctx->pc = 0x336AB4u;
label_336ab4:
    // 0x336ab4: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x336ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336ab8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x336ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x336abc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x336abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x336ac0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336AC0u;
    {
        const bool branch_taken_0x336ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ac0) {
            ctx->pc = 0x336ADCu;
            goto label_336adc;
        }
    }
    ctx->pc = 0x336AC8u;
    // 0x336ac8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x336ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336acc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336ACCu;
    {
        const bool branch_taken_0x336acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336acc) {
            ctx->pc = 0x336ADCu;
            goto label_336adc;
        }
    }
    ctx->pc = 0x336AD4u;
    // 0x336ad4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x336AD4u;
    {
        const bool branch_taken_0x336ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336AD4u;
            // 0x336ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ad4) {
            ctx->pc = 0x336AE0u;
            goto label_336ae0;
        }
    }
    ctx->pc = 0x336ADCu;
label_336adc:
    // 0x336adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336ae0:
    // 0x336ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x336AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336AE8u;
    // 0x336ae8: 0x0  nop
    ctx->pc = 0x336ae8u;
    // NOP
    // 0x336aec: 0x0  nop
    ctx->pc = 0x336aecu;
    // NOP
    ctx->pc = 0x336af0u;
}
