#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1C00
// Address: 0x1d1c00 - 0x1d4be0
void sub_001D1C00_0x1d1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1C00_0x1d1c00");
#endif

    switch (ctx->pc) {
        case 0x1d2460u: goto label_1d2460;
        case 0x1d2948u: goto label_1d2948;
        case 0x1d2a40u: goto label_1d2a40;
        case 0x1d2b38u: goto label_1d2b38;
        case 0x1d2bf0u: goto label_1d2bf0;
        case 0x1d2c1cu: goto label_1d2c1c;
        case 0x1d37f8u: goto label_1d37f8;
        case 0x1d3818u: goto label_1d3818;
        case 0x1d4558u: goto label_1d4558;
        case 0x1d4560u: goto label_1d4560;
        default: break;
    }

    ctx->pc = 0x1d1c00u;

    // 0x1d1c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d1c04: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d1c08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1c0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d1c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d1c10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d1c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d1c14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d1c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d1c18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d1c18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c1c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d1c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d1c20: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1d1c20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1c28: 0x26b40180  addiu       $s4, $s5, 0x180
    ctx->pc = 0x1d1c28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x1d1c2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1c30: 0x2c38824  and         $s1, $s6, $v1
    ctx->pc = 0x1d1c30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x1d1c34: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1d1c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1d1c38: 0x2d12023  subu        $a0, $s6, $s1
    ctx->pc = 0x1d1c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1d1c3c: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x1d1c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d1c40: 0x8e820438  lw          $v0, 0x438($s4)
    ctx->pc = 0x1d1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1080)));
    // 0x1d1c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1c48: 0xae820438  sw          $v0, 0x438($s4)
    ctx->pc = 0x1d1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 2));
    // 0x1d1c4c: 0x82320000  lb          $s2, 0x0($s1)
    ctx->pc = 0x1d1c4cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1c50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1c54: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1c54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1c5c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1d1c5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1c60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1c64: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1d1c64u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1c68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1c6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d1c6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1c70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1c74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1c74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1c7c: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d1c80: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1c84: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x1d1c84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1d1c88: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1c8c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d1c8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d1c90: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d1c90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d1c94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1c98: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1c9c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1d1c9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1d1ca0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1ca4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d1ca4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d1ca8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d1cac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1cb0: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x1d1cb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x1d1cb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1cb8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d1cb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d1cbc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1CBCu;
    {
        const bool branch_taken_0x1d1cbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CBCu;
            // 0x1d1cc0: 0x2729004  sllv        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cbc) {
            ctx->pc = 0x1D1CE0u;
            goto label_1d1ce0;
        }
    }
    ctx->pc = 0x1D1CC4u;
    // 0x1d1cc4: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1d1cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1d1cc8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1ccc: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1d1cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d1cd0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d1cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d1cd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1CD4u;
    {
        const bool branch_taken_0x1d1cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1CD4u;
            // 0x1d1cd8: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cd4) {
            ctx->pc = 0x1D1CE8u;
            goto label_1d1ce8;
        }
    }
    ctx->pc = 0x1D1CDCu;
    // 0x1d1cdc: 0x0  nop
    ctx->pc = 0x1d1cdcu;
    // NOP
label_1d1ce0:
    // 0x1d1ce0: 0xae920034  sw          $s2, 0x34($s4)
    ctx->pc = 0x1d1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 18));
    // 0x1d1ce4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d1ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ce8:
    // 0x1d1ce8: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d1ce8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1cec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1cf0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1cf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1cf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1cf8: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1cfc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1cfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1d00: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d1d00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d1d04: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1d1d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d1d08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1d0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1d10: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1d1d10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1d14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1d18: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d1d18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d1d1c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1d20: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1D20u;
    {
        const bool branch_taken_0x1d1d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D20u;
            // 0x1d1d24: 0x2048025  or          $s0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d20) {
            ctx->pc = 0x1D1D98u;
            goto label_1d1d98;
        }
    }
    ctx->pc = 0x1D1D28u;
    // 0x1d1d28: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1d1d2c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1D2Cu;
    {
        const bool branch_taken_0x1d1d2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D2Cu;
            // 0x1d1d30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d2c) {
            ctx->pc = 0x1D1D50u;
            goto label_1d1d50;
        }
    }
    ctx->pc = 0x1D1D34u;
    // 0x1d1d34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d1d38: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1d3c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d1d3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d1d40: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d1d44: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d1d44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d1d48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1D48u;
    {
        const bool branch_taken_0x1d1d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D48u;
            // 0x1d1d4c: 0xae830040  sw          $v1, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d48) {
            ctx->pc = 0x1D1D5Cu;
            goto label_1d1d5c;
        }
    }
    ctx->pc = 0x1D1D50u;
label_1d1d50:
    // 0x1d1d50: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1d1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d1d54: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d1d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d58: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x1d1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_1d1d5c:
    // 0x1d1d5c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d1d5cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1d60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1d64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1d64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1d6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1d70: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1d70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1d74: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d1d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d1d78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1d7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1d80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1d80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1d84: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d1d84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d1d88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1d8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1d90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1D90u;
    {
        const bool branch_taken_0x1d1d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1D90u;
            // 0x1d1d94: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d90) {
            ctx->pc = 0x1D1DA8u;
            goto label_1d1da8;
        }
    }
    ctx->pc = 0x1D1D98u;
label_1d1d98:
    // 0x1d1d98: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1d1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d1d9c: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d1da0: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x1d1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
    // 0x1d1da4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d1da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d1da8:
    // 0x1d1da8: 0x8e830308  lw          $v1, 0x308($s4)
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x1d1dac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1DACu;
    {
        const bool branch_taken_0x1d1dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DACu;
            // 0x1d1db0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dac) {
            ctx->pc = 0x1D1DBCu;
            goto label_1d1dbc;
        }
    }
    ctx->pc = 0x1D1DB4u;
    // 0x1d1db4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1DB4u;
    {
        const bool branch_taken_0x1d1db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1db4) {
            ctx->pc = 0x1D1DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DB4u;
            // 0x1d1db8: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1DD8u;
            goto label_1d1dd8;
        }
    }
    ctx->pc = 0x1D1DBCu;
label_1d1dbc:
    // 0x1d1dbc: 0x8e82030c  lw          $v0, 0x30C($s4)
    ctx->pc = 0x1d1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 780)));
    // 0x1d1dc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1DC0u;
    {
        const bool branch_taken_0x1d1dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DC0u;
            // 0x1d1dc4: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dc0) {
            ctx->pc = 0x1D1DE4u;
            goto label_1d1de4;
        }
    }
    ctx->pc = 0x1D1DC8u;
    // 0x1d1dc8: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1DC8u;
    {
        const bool branch_taken_0x1d1dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1dc8) {
            ctx->pc = 0x1D1DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DC8u;
            // 0x1d1dcc: 0x8e840420  lw          $a0, 0x420($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1DE8u;
            goto label_1d1de8;
        }
    }
    ctx->pc = 0x1D1DD0u;
    // 0x1d1dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1DD0u;
    {
        const bool branch_taken_0x1d1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DD0u;
            // 0x1d1dd4: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dd0) {
            ctx->pc = 0x1D1DDCu;
            goto label_1d1ddc;
        }
    }
    ctx->pc = 0x1D1DD8u;
label_1d1dd8:
    // 0x1d1dd8: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1d1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_1d1ddc:
    // 0x1d1ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1de0: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1d1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_1d1de4:
    // 0x1d1de4: 0x8e840420  lw          $a0, 0x420($s4)
    ctx->pc = 0x1d1de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
label_1d1de8:
    // 0x1d1de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1dec: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1DECu;
    {
        const bool branch_taken_0x1d1dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DECu;
            // 0x1d1df0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1dec) {
            ctx->pc = 0x1D1E0Cu;
            goto label_1d1e0c;
        }
    }
    ctx->pc = 0x1D1DF4u;
    // 0x1d1df4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d1df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d1df8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D1DF8u;
    {
        const bool branch_taken_0x1d1df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1df8) {
            ctx->pc = 0x1D1DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1DF8u;
            // 0x1d1dfc: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E4Cu;
            goto label_1d1e4c;
        }
    }
    ctx->pc = 0x1D1E00u;
    // 0x1d1e00: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d1e04: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1E04u;
    {
        const bool branch_taken_0x1d1e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1e04) {
            ctx->pc = 0x1D1E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E04u;
            // 0x1d1e08: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E4Cu;
            goto label_1d1e4c;
        }
    }
    ctx->pc = 0x1D1E0Cu;
label_1d1e0c:
    // 0x1d1e0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1e10: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1E10u;
    {
        const bool branch_taken_0x1d1e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d1e10) {
            ctx->pc = 0x1D1E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E10u;
            // 0x1d1e14: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E58u;
            goto label_1d1e58;
        }
    }
    ctx->pc = 0x1D1E18u;
    // 0x1d1e18: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1E18u;
    {
        const bool branch_taken_0x1d1e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E18u;
            // 0x1d1e1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e18) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E20u;
    // 0x1d1e20: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1E20u;
    {
        const bool branch_taken_0x1d1e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E20u;
            // 0x1d1e24: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e20) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E28u;
    // 0x1d1e28: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1E28u;
    {
        const bool branch_taken_0x1d1e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E28u;
            // 0x1d1e2c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e28) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E30u;
    // 0x1d1e30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1E30u;
    {
        const bool branch_taken_0x1d1e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E30u;
            // 0x1d1e34: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e30) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E38u;
    // 0x1d1e38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1E38u;
    {
        const bool branch_taken_0x1d1e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E38u;
            // 0x1d1e3c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e38) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E40u;
    // 0x1d1e40: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1E40u;
    {
        const bool branch_taken_0x1d1e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1e40) {
            ctx->pc = 0x1D1E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E40u;
            // 0x1d1e44: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1E58u;
            goto label_1d1e58;
        }
    }
    ctx->pc = 0x1D1E48u;
label_1d1e48:
    // 0x1d1e48: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1d1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_1d1e4c:
    // 0x1d1e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1e50: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1d1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x1d1e54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d1e58:
    // 0x1d1e58: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d1e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1e5c: 0x50400b49  beql        $v0, $zero, . + 4 + (0xB49 << 2)
    ctx->pc = 0x1D1E5Cu;
    {
        const bool branch_taken_0x1d1e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e5c) {
            ctx->pc = 0x1D1E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E5Cu;
            // 0x1d1e60: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4B84u;
            goto label_1d4b84;
        }
    }
    ctx->pc = 0x1D1E64u;
    // 0x1d1e64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d1e68: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1d1e6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1e70: 0x8c63c100  lw          $v1, -0x3F00($v1)
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951168)));
    // 0x1d1e74: 0x600008  jr          $v1
    ctx->pc = 0x1D1E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1E80u: goto label_1d1e80;
            case 0x1D2490u: goto label_1d2490;
            case 0x1D28A8u: goto label_1d28a8;
            case 0x1D2C28u: goto label_1d2c28;
            case 0x1D3148u: goto label_1d3148;
            case 0x1D37F0u: goto label_1d37f0;
            case 0x1D3A58u: goto label_1d3a58;
            case 0x1D4578u: goto label_1d4578;
            case 0x1D4990u: goto label_1d4990;
            case 0x1D4B80u: goto label_1d4b80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D1E7Cu;
    // 0x1d1e7c: 0x0  nop
    ctx->pc = 0x1d1e7cu;
    // NOP
label_1d1e80:
    // 0x1d1e80: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1d1e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d1e84: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D1E84u;
    {
        const bool branch_taken_0x1d1e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E84u;
            // 0x1d1e88: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e84) {
            ctx->pc = 0x1D1F00u;
            goto label_1d1f00;
        }
    }
    ctx->pc = 0x1D1E8Cu;
    // 0x1d1e8c: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1d1e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1d1e90: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1E90u;
    {
        const bool branch_taken_0x1d1e90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1E90u;
            // 0x1d1e94: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e90) {
            ctx->pc = 0x1D1EB8u;
            goto label_1d1eb8;
        }
    }
    ctx->pc = 0x1D1E98u;
    // 0x1d1e98: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d1e9c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1ea0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d1ea0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d1ea4: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1d1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d1ea8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d1eac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1EACu;
    {
        const bool branch_taken_0x1d1eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EACu;
            // 0x1d1eb0: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1eac) {
            ctx->pc = 0x1D1EC4u;
            goto label_1d1ec4;
        }
    }
    ctx->pc = 0x1D1EB4u;
    // 0x1d1eb4: 0x0  nop
    ctx->pc = 0x1d1eb4u;
    // NOP
label_1d1eb8:
    // 0x1d1eb8: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1d1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d1ebc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d1ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ec0: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1d1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_1d1ec4:
    // 0x1d1ec4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d1ec4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1ec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1ecc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1eccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1ed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1ed4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1ed8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1ed8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1edc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d1edcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d1ee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1ee4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1ee8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1eec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d1eecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d1ef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1ef4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1ef8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1EF8u;
    {
        const bool branch_taken_0x1d1ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1EF8u;
            // 0x1d1efc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ef8) {
            ctx->pc = 0x1D1F0Cu;
            goto label_1d1f0c;
        }
    }
    ctx->pc = 0x1D1F00u;
label_1d1f00:
    // 0x1d1f00: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d1f04: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1d1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x1d1f08: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1f08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d1f0c:
    // 0x1d1f0c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d1f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d1f10: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1F10u;
    {
        const bool branch_taken_0x1d1f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F10u;
            // 0x1d1f14: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f10) {
            ctx->pc = 0x1D1F88u;
            goto label_1d1f88;
        }
    }
    ctx->pc = 0x1D1F18u;
    // 0x1d1f18: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d1f18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d1f1c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1F1Cu;
    {
        const bool branch_taken_0x1d1f1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F1Cu;
            // 0x1d1f20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f1c) {
            ctx->pc = 0x1D1F40u;
            goto label_1d1f40;
        }
    }
    ctx->pc = 0x1D1F24u;
    // 0x1d1f24: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d1f28: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1f2c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d1f2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d1f30: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d1f34: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d1f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1F38u;
    {
        const bool branch_taken_0x1d1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F38u;
            // 0x1d1f3c: 0xae830048  sw          $v1, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f38) {
            ctx->pc = 0x1D1F4Cu;
            goto label_1d1f4c;
        }
    }
    ctx->pc = 0x1D1F40u;
label_1d1f40:
    // 0x1d1f40: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d1f44: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d1f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f48: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x1d1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
label_1d1f4c:
    // 0x1d1f4c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d1f4cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1f50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1f54: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1f54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1f58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1f5c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1f60: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1f60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1f64: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d1f64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d1f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1f6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1f70: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1f70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1f74: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d1f74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d1f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1f7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1F80u;
    {
        const bool branch_taken_0x1d1f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F80u;
            // 0x1d1f84: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f80) {
            ctx->pc = 0x1D1F94u;
            goto label_1d1f94;
        }
    }
    ctx->pc = 0x1D1F88u;
label_1d1f88:
    // 0x1d1f88: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d1f88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d1f8c: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x1d1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x1d1f90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d1f94:
    // 0x1d1f94: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d1f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d1f98: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1F98u;
    {
        const bool branch_taken_0x1d1f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F98u;
            // 0x1d1f9c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f98) {
            ctx->pc = 0x1D2010u;
            goto label_1d2010;
        }
    }
    ctx->pc = 0x1D1FA0u;
    // 0x1d1fa0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d1fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d1fa4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1FA4u;
    {
        const bool branch_taken_0x1d1fa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FA4u;
            // 0x1d1fa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fa4) {
            ctx->pc = 0x1D1FC8u;
            goto label_1d1fc8;
        }
    }
    ctx->pc = 0x1D1FACu;
    // 0x1d1fac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d1facu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d1fb0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d1fb4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d1fb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d1fb8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d1fbc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d1fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d1fc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1FC0u;
    {
        const bool branch_taken_0x1d1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FC0u;
            // 0x1d1fc4: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fc0) {
            ctx->pc = 0x1D1FD4u;
            goto label_1d1fd4;
        }
    }
    ctx->pc = 0x1D1FC8u;
label_1d1fc8:
    // 0x1d1fc8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d1fcc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d1fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1fd0: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1d1fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_1d1fd4:
    // 0x1d1fd4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d1fd4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1fd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1fdc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1fdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1fe0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1fe4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1fe8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d1fe8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1fec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d1fecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d1ff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d1ff4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d1ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d1ff8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d1ff8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1ffc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d1ffcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2000: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2004: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2008u;
    {
        const bool branch_taken_0x1d2008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D200Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2008u;
            // 0x1d200c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2008) {
            ctx->pc = 0x1D201Cu;
            goto label_1d201c;
        }
    }
    ctx->pc = 0x1D2010u;
label_1d2010:
    // 0x1d2010: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d2010u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d2014: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1d2014u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
    // 0x1d2018: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d201c:
    // 0x1d201c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d201cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d2020: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2020u;
    {
        const bool branch_taken_0x1d2020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2020u;
            // 0x1d2024: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2020) {
            ctx->pc = 0x1D2098u;
            goto label_1d2098;
        }
    }
    ctx->pc = 0x1D2028u;
    // 0x1d2028: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d2028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d202c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D202Cu;
    {
        const bool branch_taken_0x1d202c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D202Cu;
            // 0x1d2030: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d202c) {
            ctx->pc = 0x1D2050u;
            goto label_1d2050;
        }
    }
    ctx->pc = 0x1D2034u;
    // 0x1d2034: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2034u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2038: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2038u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d203c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d203cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2040: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d2040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d2044: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2044u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2048u;
    {
        const bool branch_taken_0x1d2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2048u;
            // 0x1d204c: 0xae830050  sw          $v1, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2048) {
            ctx->pc = 0x1D205Cu;
            goto label_1d205c;
        }
    }
    ctx->pc = 0x1D2050u;
label_1d2050:
    // 0x1d2050: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d2054: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2058: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d2058u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_1d205c:
    // 0x1d205c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d205cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2064: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2068: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d206c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d206cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2070: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2074: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2074u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2078: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d207c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d207cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2080: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2084: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d208c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d208cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2090: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2090u;
    {
        const bool branch_taken_0x1d2090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2090u;
            // 0x1d2094: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2090) {
            ctx->pc = 0x1D20A4u;
            goto label_1d20a4;
        }
    }
    ctx->pc = 0x1D2098u;
label_1d2098:
    // 0x1d2098: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d2098u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d209c: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1d209cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1d20a0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d20a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d20a4:
    // 0x1d20a4: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d20a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d20a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D20A8u;
    {
        const bool branch_taken_0x1d20a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D20ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20A8u;
            // 0x1d20ac: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20a8) {
            ctx->pc = 0x1D2120u;
            goto label_1d2120;
        }
    }
    ctx->pc = 0x1D20B0u;
    // 0x1d20b0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d20b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d20b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D20B4u;
    {
        const bool branch_taken_0x1d20b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20B4u;
            // 0x1d20b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20b4) {
            ctx->pc = 0x1D20D8u;
            goto label_1d20d8;
        }
    }
    ctx->pc = 0x1D20BCu;
    // 0x1d20bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d20c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d20c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d20c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d20c8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d20cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d20ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d20d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D20D0u;
    {
        const bool branch_taken_0x1d20d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20D0u;
            // 0x1d20d4: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20d0) {
            ctx->pc = 0x1D20E4u;
            goto label_1d20e4;
        }
    }
    ctx->pc = 0x1D20D8u;
label_1d20d8:
    // 0x1d20d8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d20dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d20dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d20e0: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_1d20e4:
    // 0x1d20e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d20e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d20e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d20ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d20ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d20f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d20f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d20f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d20f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d20f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d20fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d20fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2100: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2104: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2104u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2108: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d210c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d210cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2114: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2118: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2118u;
    {
        const bool branch_taken_0x1d2118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2118u;
            // 0x1d211c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2118) {
            ctx->pc = 0x1D212Cu;
            goto label_1d212c;
        }
    }
    ctx->pc = 0x1D2120u;
label_1d2120:
    // 0x1d2120: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d2120u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d2124: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1d2124u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1d2128: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d212c:
    // 0x1d212c: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x1d212cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1d2130: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2130u;
    {
        const bool branch_taken_0x1d2130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2130u;
            // 0x1d2134: 0x121502  srl         $v0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2130) {
            ctx->pc = 0x1D21A8u;
            goto label_1d21a8;
        }
    }
    ctx->pc = 0x1D2138u;
    // 0x1d2138: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x1d213c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D213Cu;
    {
        const bool branch_taken_0x1d213c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D213Cu;
            // 0x1d2140: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d213c) {
            ctx->pc = 0x1D2160u;
            goto label_1d2160;
        }
    }
    ctx->pc = 0x1D2144u;
    // 0x1d2144: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2148: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2148u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d214c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d214cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2150: 0x121d02  srl         $v1, $s2, 20
    ctx->pc = 0x1d2150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x1d2154: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2154u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2158u;
    {
        const bool branch_taken_0x1d2158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2158u;
            // 0x1d215c: 0xae830058  sw          $v1, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2158) {
            ctx->pc = 0x1D216Cu;
            goto label_1d216c;
        }
    }
    ctx->pc = 0x1D2160u;
label_1d2160:
    // 0x1d2160: 0x121502  srl         $v0, $s2, 20
    ctx->pc = 0x1d2160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x1d2164: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2168: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1d2168u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_1d216c:
    // 0x1d216c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d216cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2170: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2174: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2174u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d217c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2180: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2184: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2188: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d218c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d218cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2190: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2194: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d219c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d21a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D21A0u;
    {
        const bool branch_taken_0x1d21a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21A0u;
            // 0x1d21a4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21a0) {
            ctx->pc = 0x1D21B4u;
            goto label_1d21b4;
        }
    }
    ctx->pc = 0x1D21A8u;
label_1d21a8:
    // 0x1d21a8: 0x129300  sll         $s2, $s2, 12
    ctx->pc = 0x1d21a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
    // 0x1d21ac: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1d21acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x1d21b0: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1d21b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1d21b4:
    // 0x1d21b4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d21b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d21b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D21B8u;
    {
        const bool branch_taken_0x1d21b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21B8u;
            // 0x1d21bc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21b8) {
            ctx->pc = 0x1D2230u;
            goto label_1d2230;
        }
    }
    ctx->pc = 0x1D21C0u;
    // 0x1d21c0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d21c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d21c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D21C4u;
    {
        const bool branch_taken_0x1d21c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21C4u;
            // 0x1d21c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21c4) {
            ctx->pc = 0x1D21E8u;
            goto label_1d21e8;
        }
    }
    ctx->pc = 0x1D21CCu;
    // 0x1d21cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d21d0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d21d4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d21d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d21d8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d21dc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d21dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d21e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D21E0u;
    {
        const bool branch_taken_0x1d21e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21E0u;
            // 0x1d21e4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21e0) {
            ctx->pc = 0x1D21F4u;
            goto label_1d21f4;
        }
    }
    ctx->pc = 0x1D21E8u;
label_1d21e8:
    // 0x1d21e8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d21ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d21ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21f0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d21f4:
    // 0x1d21f4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d21f4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d21f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d21f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d21fc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d21fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2200: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2204: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2204u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2208: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2208u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d220c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d220cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2210: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2214: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2214u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2218: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d221c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d221cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2220: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2224: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2224u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2228: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2228u;
    {
        const bool branch_taken_0x1d2228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2228u;
            // 0x1d222c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2228) {
            ctx->pc = 0x1D223Cu;
            goto label_1d223c;
        }
    }
    ctx->pc = 0x1D2230u;
label_1d2230:
    // 0x1d2230: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2230u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2234: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d2234u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d2238: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d223c:
    // 0x1d223c: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1d223cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d2240: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2240u;
    {
        const bool branch_taken_0x1d2240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2240u;
            // 0x1d2244: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2240) {
            ctx->pc = 0x1D22B8u;
            goto label_1d22b8;
        }
    }
    ctx->pc = 0x1D2248u;
    // 0x1d2248: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1d2248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1d224c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D224Cu;
    {
        const bool branch_taken_0x1d224c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D224Cu;
            // 0x1d2250: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d224c) {
            ctx->pc = 0x1D2270u;
            goto label_1d2270;
        }
    }
    ctx->pc = 0x1D2254u;
    // 0x1d2254: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2258: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2258u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d225c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d225cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2260: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1d2260u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d2264: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2264u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2268u;
    {
        const bool branch_taken_0x1d2268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2268u;
            // 0x1d226c: 0xae83005c  sw          $v1, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2268) {
            ctx->pc = 0x1D227Cu;
            goto label_1d227c;
        }
    }
    ctx->pc = 0x1D2270u;
label_1d2270:
    // 0x1d2270: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d2274: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2278: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d2278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_1d227c:
    // 0x1d227c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d227cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2280: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2284: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2288: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d228c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d228cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2290: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2290u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2294: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2294u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d229c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d229cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d22a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d22a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d22a4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d22a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d22a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d22a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d22ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d22acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d22b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D22B0u;
    {
        const bool branch_taken_0x1d22b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22B0u;
            // 0x1d22b4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22b0) {
            ctx->pc = 0x1D22C4u;
            goto label_1d22c4;
        }
    }
    ctx->pc = 0x1D22B8u;
label_1d22b8:
    // 0x1d22b8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d22b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d22bc: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1d22bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1d22c0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d22c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d22c4:
    // 0x1d22c4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d22c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d22c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D22C8u;
    {
        const bool branch_taken_0x1d22c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D22CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22C8u;
            // 0x1d22cc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22c8) {
            ctx->pc = 0x1D2340u;
            goto label_1d2340;
        }
    }
    ctx->pc = 0x1D22D0u;
    // 0x1d22d0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d22d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d22d4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D22D4u;
    {
        const bool branch_taken_0x1d22d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22D4u;
            // 0x1d22d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22d4) {
            ctx->pc = 0x1D22F8u;
            goto label_1d22f8;
        }
    }
    ctx->pc = 0x1D22DCu;
    // 0x1d22dc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d22e0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d22e4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d22e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d22e8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d22ec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d22ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d22f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D22F0u;
    {
        const bool branch_taken_0x1d22f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22F0u;
            // 0x1d22f4: 0xae830060  sw          $v1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22f0) {
            ctx->pc = 0x1D2304u;
            goto label_1d2304;
        }
    }
    ctx->pc = 0x1D22F8u;
label_1d22f8:
    // 0x1d22f8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d22fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d22fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2300: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x1d2300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_1d2304:
    // 0x1d2304: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2304u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2308: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d230c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d230cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2314: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2314u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2318: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2318u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d231c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d231cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2320: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2324: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2324u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2328: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2328u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d232c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d232cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2334: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2334u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2338: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2338u;
    {
        const bool branch_taken_0x1d2338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2338u;
            // 0x1d233c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2338) {
            ctx->pc = 0x1D234Cu;
            goto label_1d234c;
        }
    }
    ctx->pc = 0x1D2340u;
label_1d2340:
    // 0x1d2340: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2340u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2344: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x1d2344u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
    // 0x1d2348: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d234c:
    // 0x1d234c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d234cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d2350: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2350u;
    {
        const bool branch_taken_0x1d2350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2350u;
            // 0x1d2354: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2350) {
            ctx->pc = 0x1D23C8u;
            goto label_1d23c8;
        }
    }
    ctx->pc = 0x1D2358u;
    // 0x1d2358: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d2358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d235c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D235Cu;
    {
        const bool branch_taken_0x1d235c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D235Cu;
            // 0x1d2360: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d235c) {
            ctx->pc = 0x1D2380u;
            goto label_1d2380;
        }
    }
    ctx->pc = 0x1D2364u;
    // 0x1d2364: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2368: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d236c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d236cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2370: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d2370u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d2374: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2374u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2378: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2378u;
    {
        const bool branch_taken_0x1d2378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2378u;
            // 0x1d237c: 0xae830064  sw          $v1, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2378) {
            ctx->pc = 0x1D238Cu;
            goto label_1d238c;
        }
    }
    ctx->pc = 0x1D2380u;
label_1d2380:
    // 0x1d2380: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d2380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d2384: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2388: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1d2388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_1d238c:
    // 0x1d238c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d238cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2390: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2394: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2394u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d239c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d239cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d23a0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d23a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d23a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d23a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d23a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d23a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d23ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d23acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d23b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d23b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d23b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d23b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d23b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d23b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d23bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d23c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D23C0u;
    {
        const bool branch_taken_0x1d23c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23C0u;
            // 0x1d23c4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23c0) {
            ctx->pc = 0x1D23D4u;
            goto label_1d23d4;
        }
    }
    ctx->pc = 0x1D23C8u;
label_1d23c8:
    // 0x1d23c8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d23c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d23cc: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1d23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
    // 0x1d23d0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d23d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d23d4:
    // 0x1d23d4: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1d23d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d23d8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D23D8u;
    {
        const bool branch_taken_0x1d23d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23D8u;
            // 0x1d23dc: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23d8) {
            ctx->pc = 0x1D2418u;
            goto label_1d2418;
        }
    }
    ctx->pc = 0x1D23E0u;
    // 0x1d23e0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1d23e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1d23e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D23E4u;
    {
        const bool branch_taken_0x1d23e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23E4u;
            // 0x1d23e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23e4) {
            ctx->pc = 0x1D2408u;
            goto label_1d2408;
        }
    }
    ctx->pc = 0x1D23ECu;
    // 0x1d23ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d23f0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d23f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d23f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d23f8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1d23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d23fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23FCu;
            // 0x1d2400: 0xae830068  sw          $v1, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D2410u;
            goto label_1d2410;
        }
    }
    ctx->pc = 0x1D2404u;
    // 0x1d2404: 0x0  nop
    ctx->pc = 0x1d2404u;
    // NOP
label_1d2408:
    // 0x1d2408: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1d2408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d240c: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x1d240cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_1d2410:
    // 0x1d2410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2410u;
    {
        const bool branch_taken_0x1d2410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2410u;
            // 0x1d2414: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2410) {
            ctx->pc = 0x1D2420u;
            goto label_1d2420;
        }
    }
    ctx->pc = 0x1D2418u;
label_1d2418:
    // 0x1d2418: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1d241c: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x1d241cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_1d2420:
    // 0x1d2420: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1d2424: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d2424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2428: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2428u;
    {
        const bool branch_taken_0x1d2428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D242Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2428u;
            // 0x1d242c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2428) {
            ctx->pc = 0x1D2448u;
            goto label_1d2448;
        }
    }
    ctx->pc = 0x1D2430u;
    // 0x1d2430: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1d2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
    // 0x1d2434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2438: 0xae84004c  sw          $a0, 0x4C($s4)
    ctx->pc = 0x1d2438u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
    // 0x1d243c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2440: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1d2440u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x1d2444: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d2448:
    // 0x1d2448: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d2448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d244c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1d2450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2454: 0x8c42c0c0  lw          $v0, -0x3F40($v0)
    ctx->pc = 0x1d2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951104)));
    // 0x1d2458: 0xc074370  jal         func_1D0DC0
    ctx->pc = 0x1D2458u;
    SET_GPR_U32(ctx, 31, 0x1D2460u);
    ctx->pc = 0x1D245Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2458u;
            // 0x1d245c: 0xae820318  sw          $v0, 0x318($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DC0u;
    if (runtime->hasFunction(0x1D0DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2460u; }
        if (ctx->pc != 0x1D2460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0DC0_0x1d0dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2460u; }
        if (ctx->pc != 0x1D2460u) { return; }
    }
    ctx->pc = 0x1D2460u;
label_1d2460:
    // 0x1d2460: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1d2460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1d2464: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1d2468: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1d2468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1d246c: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x1d246cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1d2470: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1d2470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1d2474: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x1d2474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1d2478: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1d2478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d247c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d2480: 0xae8202d4  sw          $v0, 0x2D4($s4)
    ctx->pc = 0x1d2480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 2));
    // 0x1d2484: 0x100009c1  b           . + 4 + (0x9C1 << 2)
    ctx->pc = 0x1D2484u;
    {
        const bool branch_taken_0x1d2484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2484u;
            // 0x1d2488: 0xae8302d8  sw          $v1, 0x2D8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2484) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D248Cu;
    // 0x1d248c: 0x0  nop
    ctx->pc = 0x1d248cu;
    // NOP
label_1d2490:
    // 0x1d2490: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1d2490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d2494: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2494u;
    {
        const bool branch_taken_0x1d2494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2494u;
            // 0x1d2498: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2494) {
            ctx->pc = 0x1D2510u;
            goto label_1d2510;
        }
    }
    ctx->pc = 0x1D249Cu;
    // 0x1d249c: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1d249cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1d24a0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D24A0u;
    {
        const bool branch_taken_0x1d24a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24A0u;
            // 0x1d24a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24a0) {
            ctx->pc = 0x1D24C8u;
            goto label_1d24c8;
        }
    }
    ctx->pc = 0x1D24A8u;
    // 0x1d24a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d24ac: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d24b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d24b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d24b4: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1d24b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d24b8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d24bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D24BCu;
    {
        const bool branch_taken_0x1d24bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24BCu;
            // 0x1d24c0: 0xae83006c  sw          $v1, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24bc) {
            ctx->pc = 0x1D24D4u;
            goto label_1d24d4;
        }
    }
    ctx->pc = 0x1D24C4u;
    // 0x1d24c4: 0x0  nop
    ctx->pc = 0x1d24c4u;
    // NOP
label_1d24c8:
    // 0x1d24c8: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1d24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d24cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d24ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24d0: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x1d24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_1d24d4:
    // 0x1d24d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d24d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d24d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d24dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d24dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d24e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d24e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d24e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d24e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d24e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d24e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d24ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d24ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d24f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d24f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d24f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d24f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d24f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d24f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d24fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d24fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2504: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2504u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2508u;
    {
        const bool branch_taken_0x1d2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2508u;
            // 0x1d250c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2508) {
            ctx->pc = 0x1D251Cu;
            goto label_1d251c;
        }
    }
    ctx->pc = 0x1D2510u;
label_1d2510:
    // 0x1d2510: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x1d2510u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d2514: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x1d2514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
    // 0x1d2518: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1d251c:
    // 0x1d251c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d251cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d2520: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2520u;
    {
        const bool branch_taken_0x1d2520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2520u;
            // 0x1d2524: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2520) {
            ctx->pc = 0x1D2598u;
            goto label_1d2598;
        }
    }
    ctx->pc = 0x1D2528u;
    // 0x1d2528: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d2528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d252c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D252Cu;
    {
        const bool branch_taken_0x1d252c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D252Cu;
            // 0x1d2530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d252c) {
            ctx->pc = 0x1D2550u;
            goto label_1d2550;
        }
    }
    ctx->pc = 0x1D2534u;
    // 0x1d2534: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2538: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d253c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d253cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2540: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d2540u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2544: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2544u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2548u;
    {
        const bool branch_taken_0x1d2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2548u;
            // 0x1d254c: 0xae830070  sw          $v1, 0x70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2548) {
            ctx->pc = 0x1D255Cu;
            goto label_1d255c;
        }
    }
    ctx->pc = 0x1D2550u;
label_1d2550:
    // 0x1d2550: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2554: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2558: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x1d2558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_1d255c:
    // 0x1d255c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d255cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2560: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2564: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d256c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2570: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2574: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2574u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2578: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d257c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d257cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2580: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2584: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d258c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2590: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2590u;
    {
        const bool branch_taken_0x1d2590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2590u;
            // 0x1d2594: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2590) {
            ctx->pc = 0x1D25A4u;
            goto label_1d25a4;
        }
    }
    ctx->pc = 0x1D2598u;
label_1d2598:
    // 0x1d2598: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2598u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d259c: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x1d259cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
    // 0x1d25a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d25a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d25a4:
    // 0x1d25a4: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x1d25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1d25a8: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1D25A8u;
    {
        const bool branch_taken_0x1d25a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25A8u;
            // 0x1d25ac: 0x2a620018  slti        $v0, $s3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25a8) {
            ctx->pc = 0x1D2744u;
            goto label_1d2744;
        }
    }
    ctx->pc = 0x1D25B0u;
    // 0x1d25b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D25B0u;
    {
        const bool branch_taken_0x1d25b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D25B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25B0u;
            // 0x1d25b4: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25b0) {
            ctx->pc = 0x1D2628u;
            goto label_1d2628;
        }
    }
    ctx->pc = 0x1D25B8u;
    // 0x1d25b8: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1d25b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1d25bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D25BCu;
    {
        const bool branch_taken_0x1d25bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25BCu;
            // 0x1d25c0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25bc) {
            ctx->pc = 0x1D25E0u;
            goto label_1d25e0;
        }
    }
    ctx->pc = 0x1D25C4u;
    // 0x1d25c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d25c8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d25cc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d25ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d25d0: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d25d4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d25d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d25d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D25D8u;
    {
        const bool branch_taken_0x1d25d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25D8u;
            // 0x1d25dc: 0xae830074  sw          $v1, 0x74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25d8) {
            ctx->pc = 0x1D25ECu;
            goto label_1d25ec;
        }
    }
    ctx->pc = 0x1D25E0u;
label_1d25e0:
    // 0x1d25e0: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d25e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d25e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25e8: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1d25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_1d25ec:
    // 0x1d25ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d25f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d25f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d25f4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d25f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d25f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d25fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d25fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2600: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2600u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2604: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2604u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2608: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d260c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d260cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2610: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2610u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2614: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2614u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2618: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d261c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d261cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2620u;
    {
        const bool branch_taken_0x1d2620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2620u;
            // 0x1d2624: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2620) {
            ctx->pc = 0x1D2634u;
            goto label_1d2634;
        }
    }
    ctx->pc = 0x1D2628u;
label_1d2628:
    // 0x1d2628: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d2628u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d262c: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1d262cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
    // 0x1d2630: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d2634:
    // 0x1d2634: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1d2634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d2638: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2638u;
    {
        const bool branch_taken_0x1d2638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2638u;
            // 0x1d263c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2638) {
            ctx->pc = 0x1D26B0u;
            goto label_1d26b0;
        }
    }
    ctx->pc = 0x1D2640u;
    // 0x1d2640: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1d2640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1d2644: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2644u;
    {
        const bool branch_taken_0x1d2644 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2644u;
            // 0x1d2648: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2644) {
            ctx->pc = 0x1D2668u;
            goto label_1d2668;
        }
    }
    ctx->pc = 0x1D264Cu;
    // 0x1d264c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d264cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2650: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2654: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2654u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2658: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1d2658u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d265c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d265cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2660u;
    {
        const bool branch_taken_0x1d2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2660u;
            // 0x1d2664: 0xae830078  sw          $v1, 0x78($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2660) {
            ctx->pc = 0x1D2674u;
            goto label_1d2674;
        }
    }
    ctx->pc = 0x1D2668u;
label_1d2668:
    // 0x1d2668: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1d2668u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d266c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d266cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2670: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x1d2670u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_1d2674:
    // 0x1d2674: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2674u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d267c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d267cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2680: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2684: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2688: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d268c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d268cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2694: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2694u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2698: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2698u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d269c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d269cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d26a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d26a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d26a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d26a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d26a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D26A8u;
    {
        const bool branch_taken_0x1d26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26A8u;
            // 0x1d26ac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26a8) {
            ctx->pc = 0x1D26BCu;
            goto label_1d26bc;
        }
    }
    ctx->pc = 0x1D26B0u;
label_1d26b0:
    // 0x1d26b0: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d26b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d26b4: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x1d26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
    // 0x1d26b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d26b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d26bc:
    // 0x1d26bc: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1d26bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d26c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D26C0u;
    {
        const bool branch_taken_0x1d26c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D26C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26C0u;
            // 0x1d26c4: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26c0) {
            ctx->pc = 0x1D2738u;
            goto label_1d2738;
        }
    }
    ctx->pc = 0x1D26C8u;
    // 0x1d26c8: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1d26c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1d26cc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D26CCu;
    {
        const bool branch_taken_0x1d26cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26CCu;
            // 0x1d26d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26cc) {
            ctx->pc = 0x1D26F0u;
            goto label_1d26f0;
        }
    }
    ctx->pc = 0x1D26D4u;
    // 0x1d26d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d26d8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d26dc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d26dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d26e0: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1d26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d26e4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d26e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D26E8u;
    {
        const bool branch_taken_0x1d26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26E8u;
            // 0x1d26ec: 0xae83007c  sw          $v1, 0x7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26e8) {
            ctx->pc = 0x1D26FCu;
            goto label_1d26fc;
        }
    }
    ctx->pc = 0x1D26F0u;
label_1d26f0:
    // 0x1d26f0: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1d26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d26f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d26f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26f8: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x1d26f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
label_1d26fc:
    // 0x1d26fc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d26fcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2700: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2704: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2704u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d270c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2710: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2710u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2714: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d271c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2720: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2724: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d272c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d272cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2730u;
    {
        const bool branch_taken_0x1d2730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2730u;
            // 0x1d2734: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2730) {
            ctx->pc = 0x1D2744u;
            goto label_1d2744;
        }
    }
    ctx->pc = 0x1D2738u;
label_1d2738:
    // 0x1d2738: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d2738u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d273c: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x1d273cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
    // 0x1d2740: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d2744:
    // 0x1d2744: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1d2744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1d2748: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2748u;
    {
        const bool branch_taken_0x1d2748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2748u;
            // 0x1d274c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2748) {
            ctx->pc = 0x1D27C0u;
            goto label_1d27c0;
        }
    }
    ctx->pc = 0x1D2750u;
    // 0x1d2750: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1d2750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1d2754: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2754u;
    {
        const bool branch_taken_0x1d2754 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2754u;
            // 0x1d2758: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2754) {
            ctx->pc = 0x1D2778u;
            goto label_1d2778;
        }
    }
    ctx->pc = 0x1D275Cu;
    // 0x1d275c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d275cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2760: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2764: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2764u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2768: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1d2768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d276c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d276cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2770u;
    {
        const bool branch_taken_0x1d2770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2770u;
            // 0x1d2774: 0xae830080  sw          $v1, 0x80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2770) {
            ctx->pc = 0x1D2784u;
            goto label_1d2784;
        }
    }
    ctx->pc = 0x1D2778u;
label_1d2778:
    // 0x1d2778: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1d2778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d277c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d277cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2780: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1d2780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_1d2784:
    // 0x1d2784: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2784u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d278c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d278cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2790: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2794: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2794u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2798: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2798u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d279c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d279cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d27a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d27a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d27a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d27a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d27a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d27a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d27ac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d27acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d27b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d27b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d27b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d27b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d27b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D27B8u;
    {
        const bool branch_taken_0x1d27b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27B8u;
            // 0x1d27bc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27b8) {
            ctx->pc = 0x1D27CCu;
            goto label_1d27cc;
        }
    }
    ctx->pc = 0x1D27C0u;
label_1d27c0:
    // 0x1d27c0: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x1d27c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x1d27c4: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1d27c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x1d27c8: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1d27c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_1d27cc:
    // 0x1d27cc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d27ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d27d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D27D0u;
    {
        const bool branch_taken_0x1d27d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D27D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27D0u;
            // 0x1d27d4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27d0) {
            ctx->pc = 0x1D2848u;
            goto label_1d2848;
        }
    }
    ctx->pc = 0x1D27D8u;
    // 0x1d27d8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d27d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d27dc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D27DCu;
    {
        const bool branch_taken_0x1d27dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27DCu;
            // 0x1d27e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27dc) {
            ctx->pc = 0x1D2800u;
            goto label_1d2800;
        }
    }
    ctx->pc = 0x1D27E4u;
    // 0x1d27e4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d27e8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d27ec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d27ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d27f0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d27f4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d27f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d27f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D27F8u;
    {
        const bool branch_taken_0x1d27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27F8u;
            // 0x1d27fc: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27f8) {
            ctx->pc = 0x1D280Cu;
            goto label_1d280c;
        }
    }
    ctx->pc = 0x1D2800u;
label_1d2800:
    // 0x1d2800: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2804: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2808: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d2808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d280c:
    // 0x1d280c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d280cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2814: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2814u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d281c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2820: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2824: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d282c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d282cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2830: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2834: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d283c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d283cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2840u;
    {
        const bool branch_taken_0x1d2840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2840u;
            // 0x1d2844: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2840) {
            ctx->pc = 0x1D2854u;
            goto label_1d2854;
        }
    }
    ctx->pc = 0x1D2848u;
label_1d2848:
    // 0x1d2848: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2848u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d284c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d284cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d2850: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2854:
    // 0x1d2854: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1d2854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1d2858: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D2858u;
    {
        const bool branch_taken_0x1d2858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2858u;
            // 0x1d285c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2858) {
            ctx->pc = 0x1D2898u;
            goto label_1d2898;
        }
    }
    ctx->pc = 0x1D2860u;
    // 0x1d2860: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1d2864: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2864u;
    {
        const bool branch_taken_0x1d2864 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2864u;
            // 0x1d2868: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2864) {
            ctx->pc = 0x1D2888u;
            goto label_1d2888;
        }
    }
    ctx->pc = 0x1D286Cu;
    // 0x1d286c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2870: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2874: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2874u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2878: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1d2878u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d287c: 0x100008ba  b           . + 4 + (0x8BA << 2)
    ctx->pc = 0x1D287Cu;
    {
        const bool branch_taken_0x1d287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D287Cu;
            // 0x1d2880: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d287c) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D2884u;
    // 0x1d2884: 0x0  nop
    ctx->pc = 0x1d2884u;
    // NOP
label_1d2888:
    // 0x1d2888: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d288c: 0x100008b6  b           . + 4 + (0x8B6 << 2)
    ctx->pc = 0x1D288Cu;
    {
        const bool branch_taken_0x1d288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D288Cu;
            // 0x1d2890: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d288c) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D2894u;
    // 0x1d2894: 0x0  nop
    ctx->pc = 0x1d2894u;
    // NOP
label_1d2898:
    // 0x1d2898: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
    // 0x1d289c: 0x100008bb  b           . + 4 + (0x8BB << 2)
    ctx->pc = 0x1D289Cu;
    {
        const bool branch_taken_0x1d289c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D289Cu;
            // 0x1d28a0: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d289c) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D28A4u;
    // 0x1d28a4: 0x0  nop
    ctx->pc = 0x1d28a4u;
    // NOP
label_1d28a8:
    // 0x1d28a8: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d28a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d28ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D28ACu;
    {
        const bool branch_taken_0x1d28ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28ACu;
            // 0x1d28b0: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28ac) {
            ctx->pc = 0x1D2928u;
            goto label_1d2928;
        }
    }
    ctx->pc = 0x1D28B4u;
    // 0x1d28b4: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d28b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d28b8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D28B8u;
    {
        const bool branch_taken_0x1d28b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28B8u;
            // 0x1d28bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28b8) {
            ctx->pc = 0x1D28E0u;
            goto label_1d28e0;
        }
    }
    ctx->pc = 0x1D28C0u;
    // 0x1d28c0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d28c4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d28c8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d28c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d28cc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d28d0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d28d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d28d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D28D4u;
    {
        const bool branch_taken_0x1d28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28D4u;
            // 0x1d28d8: 0xae830024  sw          $v1, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d4) {
            ctx->pc = 0x1D28ECu;
            goto label_1d28ec;
        }
    }
    ctx->pc = 0x1D28DCu;
    // 0x1d28dc: 0x0  nop
    ctx->pc = 0x1d28dcu;
    // NOP
label_1d28e0:
    // 0x1d28e0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d28e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d28e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28e8: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_1d28ec:
    // 0x1d28ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d28ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d28f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d28f4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d28f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d28f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d28f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d28fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2900: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2904: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d290c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2910: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2914: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2914u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d291c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d291cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2920u;
    {
        const bool branch_taken_0x1d2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2920u;
            // 0x1d2924: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2920) {
            ctx->pc = 0x1D2934u;
            goto label_1d2934;
        }
    }
    ctx->pc = 0x1D2928u;
label_1d2928:
    // 0x1d2928: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2928u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d292c: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1d292cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1d2930: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2934:
    // 0x1d2934: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1d2934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1d2938: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D2938u;
    {
        const bool branch_taken_0x1d2938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D293Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2938u;
            // 0x1d293c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2938) {
            ctx->pc = 0x1D29A4u;
            goto label_1d29a4;
        }
    }
    ctx->pc = 0x1D2940u;
    // 0x1d2940: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d2940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2944: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d2948:
    // 0x1d2948: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1d2948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d294c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D294Cu;
    {
        const bool branch_taken_0x1d294c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d294c) {
            ctx->pc = 0x1D2950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D294Cu;
            // 0x1d2950: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2994u;
            goto label_1d2994;
        }
    }
    ctx->pc = 0x1D2954u;
    // 0x1d2954: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1d2954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1d2958: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2958u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d295c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d295cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2964: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d296c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d296cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2970: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2970u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2974: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d297c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d297cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2980: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2984: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2988: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d298c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d298cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2990: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2990u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1d2994:
    // 0x1d2994: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d2994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d2998: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2998u;
    {
        const bool branch_taken_0x1d2998 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d2998) {
            ctx->pc = 0x1D299Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2998u;
            // 0x1d299c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2948;
        }
    }
    ctx->pc = 0x1D29A0u;
    // 0x1d29a0: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d29a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_1d29a4:
    // 0x1d29a4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D29A4u;
    {
        const bool branch_taken_0x1d29a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D29A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29A4u;
            // 0x1d29a8: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29a4) {
            ctx->pc = 0x1D2A20u;
            goto label_1d2a20;
        }
    }
    ctx->pc = 0x1D29ACu;
    // 0x1d29ac: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d29b0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D29B0u;
    {
        const bool branch_taken_0x1d29b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29B0u;
            // 0x1d29b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29b0) {
            ctx->pc = 0x1D29D8u;
            goto label_1d29d8;
        }
    }
    ctx->pc = 0x1D29B8u;
    // 0x1d29b8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d29bc: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d29c0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d29c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d29c4: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d29c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d29c8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d29c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d29cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D29CCu;
    {
        const bool branch_taken_0x1d29cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29CCu;
            // 0x1d29d0: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29cc) {
            ctx->pc = 0x1D29E4u;
            goto label_1d29e4;
        }
    }
    ctx->pc = 0x1D29D4u;
    // 0x1d29d4: 0x0  nop
    ctx->pc = 0x1d29d4u;
    // NOP
label_1d29d8:
    // 0x1d29d8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d29dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d29dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e0: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x1d29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_1d29e4:
    // 0x1d29e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d29e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d29e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d29e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d29ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d29ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d29f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d29f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d29f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d29f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d29f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d29f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d29fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d29fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2a00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2a04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2a04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2a08: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2a08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2a0c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2a0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2a10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2a14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2A18u;
    {
        const bool branch_taken_0x1d2a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A18u;
            // 0x1d2a1c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a18) {
            ctx->pc = 0x1D2A2Cu;
            goto label_1d2a2c;
        }
    }
    ctx->pc = 0x1D2A20u;
label_1d2a20:
    // 0x1d2a20: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2a20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2a24: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x1d2a24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x1d2a28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2a28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2a2c:
    // 0x1d2a2c: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1d2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1d2a30: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D2A30u;
    {
        const bool branch_taken_0x1d2a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A30u;
            // 0x1d2a34: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a30) {
            ctx->pc = 0x1D2A9Cu;
            goto label_1d2a9c;
        }
    }
    ctx->pc = 0x1D2A38u;
    // 0x1d2a38: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2a3c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d2a40:
    // 0x1d2a40: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1d2a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d2a44: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A44u;
            // 0x1d2a48: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A8Cu;
            goto label_1d2a8c;
        }
    }
    ctx->pc = 0x1D2A4Cu;
    // 0x1d2a4c: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1d2a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1d2a50: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2a50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2a54: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2a5c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2a5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2a64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2a64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2a68: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2a68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2a6c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2a70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2a74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2a74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2a78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2a7c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2a7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2a80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2a84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2a84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2a88: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2a88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1d2a8c:
    // 0x1d2a8c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d2a90: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2A90u;
    {
        const bool branch_taken_0x1d2a90 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d2a90) {
            ctx->pc = 0x1D2A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A90u;
            // 0x1d2a94: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2a40;
        }
    }
    ctx->pc = 0x1D2A98u;
    // 0x1d2a98: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d2a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_1d2a9c:
    // 0x1d2a9c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2A9Cu;
    {
        const bool branch_taken_0x1d2a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A9Cu;
            // 0x1d2aa0: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a9c) {
            ctx->pc = 0x1D2B18u;
            goto label_1d2b18;
        }
    }
    ctx->pc = 0x1D2AA4u;
    // 0x1d2aa4: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d2aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d2aa8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2AA8u;
    {
        const bool branch_taken_0x1d2aa8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AA8u;
            // 0x1d2aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aa8) {
            ctx->pc = 0x1D2AD0u;
            goto label_1d2ad0;
        }
    }
    ctx->pc = 0x1D2AB0u;
    // 0x1d2ab0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2ab4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2ab8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2ab8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2abc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2ac0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2ac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2AC4u;
    {
        const bool branch_taken_0x1d2ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AC4u;
            // 0x1d2ac8: 0xae830158  sw          $v1, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ac4) {
            ctx->pc = 0x1D2ADCu;
            goto label_1d2adc;
        }
    }
    ctx->pc = 0x1D2ACCu;
    // 0x1d2acc: 0x0  nop
    ctx->pc = 0x1d2accu;
    // NOP
label_1d2ad0:
    // 0x1d2ad0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2ad4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ad8: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x1d2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_1d2adc:
    // 0x1d2adc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2adcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2ae0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2ae4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2ae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2aec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2aecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2af0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2af0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2af4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2af4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2af8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2afc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2afcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2b00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2b00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2b04: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2b04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2b08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2b0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2B10u;
    {
        const bool branch_taken_0x1d2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B10u;
            // 0x1d2b14: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b10) {
            ctx->pc = 0x1D2B24u;
            goto label_1d2b24;
        }
    }
    ctx->pc = 0x1D2B18u;
label_1d2b18:
    // 0x1d2b18: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2b18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2b1c: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x1d2b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
    // 0x1d2b20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2b24:
    // 0x1d2b24: 0x8e820158  lw          $v0, 0x158($s4)
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x1d2b28: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D2B28u;
    {
        const bool branch_taken_0x1d2b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B28u;
            // 0x1d2b2c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b28) {
            ctx->pc = 0x1D2B94u;
            goto label_1d2b94;
        }
    }
    ctx->pc = 0x1D2B30u;
    // 0x1d2b30: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1d2b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2b34: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d2b38:
    // 0x1d2b38: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1d2b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d2b3c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2B3Cu;
    {
        const bool branch_taken_0x1d2b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2b3c) {
            ctx->pc = 0x1D2B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B3Cu;
            // 0x1d2b40: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B84u;
            goto label_1d2b84;
        }
    }
    ctx->pc = 0x1D2B44u;
    // 0x1d2b44: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1d2b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1d2b48: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2b48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2b4c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2b4cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2b50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2b54: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2b54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2b58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2b5c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2b60: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2b60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2b64: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2b64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2b68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2b6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2b70: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2b70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2b74: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2b74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2b7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2b80: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2b80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1d2b84:
    // 0x1d2b84: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d2b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d2b88: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2B88u;
    {
        const bool branch_taken_0x1d2b88 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d2b88) {
            ctx->pc = 0x1D2B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B88u;
            // 0x1d2b8c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2b38;
        }
    }
    ctx->pc = 0x1D2B90u;
    // 0x1d2b90: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d2b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_1d2b94:
    // 0x1d2b94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2B94u;
    {
        const bool branch_taken_0x1d2b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2B94u;
            // 0x1d2b98: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b94) {
            ctx->pc = 0x1D2BD0u;
            goto label_1d2bd0;
        }
    }
    ctx->pc = 0x1D2B9Cu;
    // 0x1d2b9c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d2b9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d2ba0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2BA0u;
    {
        const bool branch_taken_0x1d2ba0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2BA0u;
            // 0x1d2ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ba0) {
            ctx->pc = 0x1D2BC0u;
            goto label_1d2bc0;
        }
    }
    ctx->pc = 0x1D2BA8u;
    // 0x1d2ba8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2bac: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2bb0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2bb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2bb4: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2bb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2BB8u;
    {
        const bool branch_taken_0x1d2bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2BB8u;
            // 0x1d2bbc: 0xae83015c  sw          $v1, 0x15C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bb8) {
            ctx->pc = 0x1D2BC8u;
            goto label_1d2bc8;
        }
    }
    ctx->pc = 0x1D2BC0u;
label_1d2bc0:
    // 0x1d2bc0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2bc4: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x1d2bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_1d2bc8:
    // 0x1d2bc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2BC8u;
    {
        const bool branch_taken_0x1d2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2BC8u;
            // 0x1d2bcc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bc8) {
            ctx->pc = 0x1D2BD8u;
            goto label_1d2bd8;
        }
    }
    ctx->pc = 0x1D2BD0u;
label_1d2bd0:
    // 0x1d2bd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d2bd4: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x1d2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_1d2bd8:
    // 0x1d2bd8: 0x8e82015c  lw          $v0, 0x15C($s4)
    ctx->pc = 0x1d2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x1d2bdc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2BDCu;
    {
        const bool branch_taken_0x1d2bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2bdc) {
            ctx->pc = 0x1D2C14u;
            goto label_1d2c14;
        }
    }
    ctx->pc = 0x1D2BE4u;
    // 0x1d2be4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2be8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2bec: 0x0  nop
    ctx->pc = 0x1d2becu;
    // NOP
label_1d2bf0:
    // 0x1d2bf0: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1d2bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d2bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2BF4u;
    {
        const bool branch_taken_0x1d2bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2BF4u;
            // 0x1d2bf8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bf4) {
            ctx->pc = 0x1D2C04u;
            goto label_1d2c04;
        }
    }
    ctx->pc = 0x1D2BFCu;
    // 0x1d2bfc: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1d2bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1d2c00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d2c04:
    // 0x1d2c04: 0x0  nop
    ctx->pc = 0x1d2c04u;
    // NOP
    // 0x1d2c08: 0x0  nop
    ctx->pc = 0x1d2c08u;
    // NOP
    // 0x1d2c0c: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D2C0Cu;
    {
        const bool branch_taken_0x1d2c0c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1d2c0c) {
            ctx->pc = 0x1D2C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C0Cu;
            // 0x1d2c10: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2bf0;
        }
    }
    ctx->pc = 0x1D2C14u;
label_1d2c14:
    // 0x1d2c14: 0xc0743cc  jal         func_1D0F30
    ctx->pc = 0x1D2C14u;
    SET_GPR_U32(ctx, 31, 0x1D2C1Cu);
    ctx->pc = 0x1D2C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C14u;
            // 0x1d2c18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F30u;
    if (runtime->hasFunction(0x1D0F30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C1Cu; }
        if (ctx->pc != 0x1D2C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F30_0x1d0f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2C1Cu; }
        if (ctx->pc != 0x1D2C1Cu) { return; }
    }
    ctx->pc = 0x1D2C1Cu;
label_1d2c1c:
    // 0x1d2c1c: 0x100007dc  b           . + 4 + (0x7DC << 2)
    ctx->pc = 0x1D2C1Cu;
    {
        const bool branch_taken_0x1d2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C1Cu;
            // 0x1d2c20: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c1c) {
            ctx->pc = 0x1D4B90u;
            goto label_1d4b90;
        }
    }
    ctx->pc = 0x1D2C24u;
    // 0x1d2c24: 0x0  nop
    ctx->pc = 0x1d2c24u;
    // NOP
label_1d2c28:
    // 0x1d2c28: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d2c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d2c2c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2C2Cu;
    {
        const bool branch_taken_0x1d2c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C2Cu;
            // 0x1d2c30: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c2c) {
            ctx->pc = 0x1D2CA8u;
            goto label_1d2ca8;
        }
    }
    ctx->pc = 0x1D2C34u;
    // 0x1d2c34: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d2c34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d2c38: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2C38u;
    {
        const bool branch_taken_0x1d2c38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C38u;
            // 0x1d2c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c38) {
            ctx->pc = 0x1D2C60u;
            goto label_1d2c60;
        }
    }
    ctx->pc = 0x1D2C40u;
    // 0x1d2c40: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2c44: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2c48: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2c48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2c4c: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2c50: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2c50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2C54u;
    {
        const bool branch_taken_0x1d2c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2C54u;
            // 0x1d2c58: 0xae83019c  sw          $v1, 0x19C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c54) {
            ctx->pc = 0x1D2C6Cu;
            goto label_1d2c6c;
        }
    }
    ctx->pc = 0x1D2C5Cu;
    // 0x1d2c5c: 0x0  nop
    ctx->pc = 0x1d2c5cu;
    // NOP
label_1d2c60:
    // 0x1d2c60: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2c64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c68: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x1d2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
label_1d2c6c:
    // 0x1d2c6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2c6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2c70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2c74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2c74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2c7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2c80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2c80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2c84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2c84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2c88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2c8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2c90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2c90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2c94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2c94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2c98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2c9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2CA0u;
    {
        const bool branch_taken_0x1d2ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CA0u;
            // 0x1d2ca4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ca0) {
            ctx->pc = 0x1D2CB4u;
            goto label_1d2cb4;
        }
    }
    ctx->pc = 0x1D2CA8u;
label_1d2ca8:
    // 0x1d2ca8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2cac: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x1d2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
    // 0x1d2cb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2cb4:
    // 0x1d2cb4: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1d2cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d2cb8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2CB8u;
    {
        const bool branch_taken_0x1d2cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CB8u;
            // 0x1d2cbc: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cb8) {
            ctx->pc = 0x1D2D30u;
            goto label_1d2d30;
        }
    }
    ctx->pc = 0x1D2CC0u;
    // 0x1d2cc0: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1d2cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1d2cc4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2CC4u;
    {
        const bool branch_taken_0x1d2cc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CC4u;
            // 0x1d2cc8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cc4) {
            ctx->pc = 0x1D2CE8u;
            goto label_1d2ce8;
        }
    }
    ctx->pc = 0x1D2CCCu;
    // 0x1d2ccc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2cd0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2cd4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2cd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2cd8: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1d2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d2cdc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2CE0u;
    {
        const bool branch_taken_0x1d2ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2CE0u;
            // 0x1d2ce4: 0xae8301a0  sw          $v1, 0x1A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ce0) {
            ctx->pc = 0x1D2CF4u;
            goto label_1d2cf4;
        }
    }
    ctx->pc = 0x1D2CE8u;
label_1d2ce8:
    // 0x1d2ce8: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1d2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d2cec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cf0: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x1d2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
label_1d2cf4:
    // 0x1d2cf4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2cf4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2cf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2cfc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2d00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2d04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2d04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2d08: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2d0c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2d0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2d10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2d14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2d18: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2d18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2d1c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2d1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2d20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2d24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2d24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2D28u;
    {
        const bool branch_taken_0x1d2d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D28u;
            // 0x1d2d2c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d28) {
            ctx->pc = 0x1D2D3Cu;
            goto label_1d2d3c;
        }
    }
    ctx->pc = 0x1D2D30u;
label_1d2d30:
    // 0x1d2d30: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1d2d30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1d2d34: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x1d2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
    // 0x1d2d38: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d2d38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1d2d3c:
    // 0x1d2d3c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d2d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d2d40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2D40u;
    {
        const bool branch_taken_0x1d2d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D40u;
            // 0x1d2d44: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d40) {
            ctx->pc = 0x1D2DB8u;
            goto label_1d2db8;
        }
    }
    ctx->pc = 0x1D2D48u;
    // 0x1d2d48: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d2d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d2d4c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2D4Cu;
    {
        const bool branch_taken_0x1d2d4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D4Cu;
            // 0x1d2d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d4c) {
            ctx->pc = 0x1D2D70u;
            goto label_1d2d70;
        }
    }
    ctx->pc = 0x1D2D54u;
    // 0x1d2d54: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2d58: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2d5c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2d5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2d60: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2d64: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2d64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2d68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2D68u;
    {
        const bool branch_taken_0x1d2d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D68u;
            // 0x1d2d6c: 0xae8301a4  sw          $v1, 0x1A4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d68) {
            ctx->pc = 0x1D2D7Cu;
            goto label_1d2d7c;
        }
    }
    ctx->pc = 0x1D2D70u;
label_1d2d70:
    // 0x1d2d70: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2d74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d78: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x1d2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
label_1d2d7c:
    // 0x1d2d7c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2d7cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2d80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2d84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2d84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2d88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2d8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2d90: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2d90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2d94: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2d94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2d98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2d9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2da0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2da0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2da4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2dac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2dacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2db0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2DB0u;
    {
        const bool branch_taken_0x1d2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DB0u;
            // 0x1d2db4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2db0) {
            ctx->pc = 0x1D2DC4u;
            goto label_1d2dc4;
        }
    }
    ctx->pc = 0x1D2DB8u;
label_1d2db8:
    // 0x1d2db8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2db8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2dbc: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x1d2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
    // 0x1d2dc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2dc4:
    // 0x1d2dc4: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x1d2dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x1d2dc8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2DC8u;
    {
        const bool branch_taken_0x1d2dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DC8u;
            // 0x1d2dcc: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dc8) {
            ctx->pc = 0x1D2E40u;
            goto label_1d2e40;
        }
    }
    ctx->pc = 0x1D2DD0u;
    // 0x1d2dd0: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x1d2dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x1d2dd4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2DD4u;
    {
        const bool branch_taken_0x1d2dd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DD4u;
            // 0x1d2dd8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dd4) {
            ctx->pc = 0x1D2DF8u;
            goto label_1d2df8;
        }
    }
    ctx->pc = 0x1D2DDCu;
    // 0x1d2ddc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2de0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2de4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2de4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2de8: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x1d2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1d2dec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2decu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2df0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2DF0u;
    {
        const bool branch_taken_0x1d2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DF0u;
            // 0x1d2df4: 0xae8301a8  sw          $v1, 0x1A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2df0) {
            ctx->pc = 0x1D2E04u;
            goto label_1d2e04;
        }
    }
    ctx->pc = 0x1D2DF8u;
label_1d2df8:
    // 0x1d2df8: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1d2dfc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e00: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x1d2e00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
label_1d2e04:
    // 0x1d2e04: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2e04u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2e08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2e0c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2e0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2e10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2e14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2e14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2e18: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2e18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2e1c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2e1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2e20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2e24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2e24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2e28: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2e2c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2e2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2e34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2e34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2E38u;
    {
        const bool branch_taken_0x1d2e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E38u;
            // 0x1d2e3c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e38) {
            ctx->pc = 0x1D2E4Cu;
            goto label_1d2e4c;
        }
    }
    ctx->pc = 0x1D2E40u;
label_1d2e40:
    // 0x1d2e40: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x1d2e40u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1d2e44: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x1d2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
    // 0x1d2e48: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_1d2e4c:
    // 0x1d2e4c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d2e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d2e50: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2E50u;
    {
        const bool branch_taken_0x1d2e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E50u;
            // 0x1d2e54: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e50) {
            ctx->pc = 0x1D2EC8u;
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2E58u;
    // 0x1d2e58: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d2e5c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2E5Cu;
    {
        const bool branch_taken_0x1d2e5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E5Cu;
            // 0x1d2e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e5c) {
            ctx->pc = 0x1D2E80u;
            goto label_1d2e80;
        }
    }
    ctx->pc = 0x1D2E64u;
    // 0x1d2e64: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2e68: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2e6c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2e6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2e70: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2e74: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2e74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2E78u;
    {
        const bool branch_taken_0x1d2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2E78u;
            // 0x1d2e7c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e78) {
            ctx->pc = 0x1D2E8Cu;
            goto label_1d2e8c;
        }
    }
    ctx->pc = 0x1D2E80u;
label_1d2e80:
    // 0x1d2e80: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2e84: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e88: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d2e8c:
    // 0x1d2e8c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2e8cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2e90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2e94: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2e94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2e98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2e9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2ea0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2ea0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2ea4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2ea4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2ea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2eac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2eacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2eb0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2eb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2eb4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2eb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2ebc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2ec0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2EC0u;
    {
        const bool branch_taken_0x1d2ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EC0u;
            // 0x1d2ec4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ec0) {
            ctx->pc = 0x1D2ED4u;
            goto label_1d2ed4;
        }
    }
    ctx->pc = 0x1D2EC8u;
label_1d2ec8:
    // 0x1d2ec8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2ecc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d2ed0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2ed4:
    // 0x1d2ed4: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x1d2ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1d2ed8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2ED8u;
    {
        const bool branch_taken_0x1d2ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2ED8u;
            // 0x1d2edc: 0x121302  srl         $v0, $s2, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ed8) {
            ctx->pc = 0x1D2F50u;
            goto label_1d2f50;
        }
    }
    ctx->pc = 0x1D2EE0u;
    // 0x1d2ee0: 0x2673fff4  addiu       $s3, $s3, -0xC
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x1d2ee4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2EE4u;
    {
        const bool branch_taken_0x1d2ee4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EE4u;
            // 0x1d2ee8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ee4) {
            ctx->pc = 0x1D2F08u;
            goto label_1d2f08;
        }
    }
    ctx->pc = 0x1D2EECu;
    // 0x1d2eec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2ef0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2ef4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2ef4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2ef8: 0x121b02  srl         $v1, $s2, 12
    ctx->pc = 0x1d2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x1d2efc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2efcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2f00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2F00u;
    {
        const bool branch_taken_0x1d2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F00u;
            // 0x1d2f04: 0xae8301ac  sw          $v1, 0x1AC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f00) {
            ctx->pc = 0x1D2F14u;
            goto label_1d2f14;
        }
    }
    ctx->pc = 0x1D2F08u;
label_1d2f08:
    // 0x1d2f08: 0x121302  srl         $v0, $s2, 12
    ctx->pc = 0x1d2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x1d2f0c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f10: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x1d2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
label_1d2f14:
    // 0x1d2f14: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2f14u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2f1c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2f1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2f20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2f24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2f28: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2f28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2f2c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2f2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2f30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2f34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2f34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2f38: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2f3c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2f3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2f40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2f44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2f48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2F48u;
    {
        const bool branch_taken_0x1d2f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F48u;
            // 0x1d2f4c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f48) {
            ctx->pc = 0x1D2F5Cu;
            goto label_1d2f5c;
        }
    }
    ctx->pc = 0x1D2F50u;
label_1d2f50:
    // 0x1d2f50: 0x129500  sll         $s2, $s2, 20
    ctx->pc = 0x1d2f50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
    // 0x1d2f54: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x1d2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
    // 0x1d2f58: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x1d2f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_1d2f5c:
    // 0x1d2f5c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d2f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d2f60: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2F60u;
    {
        const bool branch_taken_0x1d2f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F60u;
            // 0x1d2f64: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f60) {
            ctx->pc = 0x1D2FD8u;
            goto label_1d2fd8;
        }
    }
    ctx->pc = 0x1D2F68u;
    // 0x1d2f68: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d2f68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d2f6c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2F6Cu;
    {
        const bool branch_taken_0x1d2f6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F6Cu;
            // 0x1d2f70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f6c) {
            ctx->pc = 0x1D2F90u;
            goto label_1d2f90;
        }
    }
    ctx->pc = 0x1D2F74u;
    // 0x1d2f74: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2f78: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2f7c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d2f7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d2f80: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2f84: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d2f84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d2f88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2F88u;
    {
        const bool branch_taken_0x1d2f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F88u;
            // 0x1d2f8c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f88) {
            ctx->pc = 0x1D2F9Cu;
            goto label_1d2f9c;
        }
    }
    ctx->pc = 0x1D2F90u;
label_1d2f90:
    // 0x1d2f90: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d2f94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d2f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f98: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d2f9c:
    // 0x1d2f9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d2f9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2fa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2fa4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2fa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2fa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2fac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2facu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2fb0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d2fb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2fb4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d2fb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d2fb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2fbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2fc0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2fc4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d2fc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d2fc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d2fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2fcc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d2fccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d2fd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2FD0u;
    {
        const bool branch_taken_0x1d2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FD0u;
            // 0x1d2fd4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fd0) {
            ctx->pc = 0x1D2FE4u;
            goto label_1d2fe4;
        }
    }
    ctx->pc = 0x1D2FD8u;
label_1d2fd8:
    // 0x1d2fd8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d2fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d2fdc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d2fe0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2fe4:
    // 0x1d2fe4: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x1d2fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d2fe8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2FE8u;
    {
        const bool branch_taken_0x1d2fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FE8u;
            // 0x1d2fec: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fe8) {
            ctx->pc = 0x1D3060u;
            goto label_1d3060;
        }
    }
    ctx->pc = 0x1D2FF0u;
    // 0x1d2ff0: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x1d2ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x1d2ff4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2FF4u;
    {
        const bool branch_taken_0x1d2ff4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FF4u;
            // 0x1d2ff8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ff4) {
            ctx->pc = 0x1D3018u;
            goto label_1d3018;
        }
    }
    ctx->pc = 0x1D2FFCu;
    // 0x1d2ffc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3000: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3000u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3004: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3004u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3008: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x1d3008u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1d300c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d300cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3010: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3010u;
    {
        const bool branch_taken_0x1d3010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3010u;
            // 0x1d3014: 0xae8301b0  sw          $v1, 0x1B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3010) {
            ctx->pc = 0x1D3024u;
            goto label_1d3024;
        }
    }
    ctx->pc = 0x1D3018u;
label_1d3018:
    // 0x1d3018: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x1d3018u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1d301c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d301cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3020: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x1d3020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
label_1d3024:
    // 0x1d3024: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3028: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d302c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d302cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3030: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3034: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3034u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3038: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d303c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d303cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3040: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3044: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3044u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3048: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d304c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d304cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3050: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3054: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3054u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3058: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3058u;
    {
        const bool branch_taken_0x1d3058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3058u;
            // 0x1d305c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3058) {
            ctx->pc = 0x1D306Cu;
            goto label_1d306c;
        }
    }
    ctx->pc = 0x1D3060u;
label_1d3060:
    // 0x1d3060: 0x129580  sll         $s2, $s2, 22
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 22));
    // 0x1d3064: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x1d3064u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
    // 0x1d3068: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x1d3068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
label_1d306c:
    // 0x1d306c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d306cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3070: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3070u;
    {
        const bool branch_taken_0x1d3070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3070u;
            // 0x1d3074: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3070) {
            ctx->pc = 0x1D30E8u;
            goto label_1d30e8;
        }
    }
    ctx->pc = 0x1D3078u;
    // 0x1d3078: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d307c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D307Cu;
    {
        const bool branch_taken_0x1d307c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D307Cu;
            // 0x1d3080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d307c) {
            ctx->pc = 0x1D30A0u;
            goto label_1d30a0;
        }
    }
    ctx->pc = 0x1D3084u;
    // 0x1d3084: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3088: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d308c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d308cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3090: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3094: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3094u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3098: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3098u;
    {
        const bool branch_taken_0x1d3098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3098u;
            // 0x1d309c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3098) {
            ctx->pc = 0x1D30ACu;
            goto label_1d30ac;
        }
    }
    ctx->pc = 0x1D30A0u;
label_1d30a0:
    // 0x1d30a0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d30a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d30a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30a8: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d30a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d30ac:
    // 0x1d30ac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d30acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d30b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d30b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d30b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d30b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d30b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d30b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d30bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d30bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d30c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d30c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d30c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d30c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d30c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d30c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d30cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d30ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d30d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d30d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d30d4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d30d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d30d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d30d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d30dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d30dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d30e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D30E0u;
    {
        const bool branch_taken_0x1d30e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30E0u;
            // 0x1d30e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30e0) {
            ctx->pc = 0x1D30F4u;
            goto label_1d30f4;
        }
    }
    ctx->pc = 0x1D30E8u;
label_1d30e8:
    // 0x1d30e8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d30e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d30ec: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d30f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d30f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d30f4:
    // 0x1d30f4: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x1d30f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d30f8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D30F8u;
    {
        const bool branch_taken_0x1d30f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30F8u;
            // 0x1d30fc: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30f8) {
            ctx->pc = 0x1D3138u;
            goto label_1d3138;
        }
    }
    ctx->pc = 0x1D3100u;
    // 0x1d3100: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x1d3104: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3104u;
    {
        const bool branch_taken_0x1d3104 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3104u;
            // 0x1d3108: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3104) {
            ctx->pc = 0x1D3128u;
            goto label_1d3128;
        }
    }
    ctx->pc = 0x1D310Cu;
    // 0x1d310c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d310cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3110: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3114: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3114u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3118: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x1d3118u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1d311c: 0x10000692  b           . + 4 + (0x692 << 2)
    ctx->pc = 0x1D311Cu;
    {
        const bool branch_taken_0x1d311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D311Cu;
            // 0x1d3120: 0xae8301b4  sw          $v1, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d311c) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D3124u;
    // 0x1d3124: 0x0  nop
    ctx->pc = 0x1d3124u;
    // NOP
label_1d3128:
    // 0x1d3128: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x1d3128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1d312c: 0x1000068e  b           . + 4 + (0x68E << 2)
    ctx->pc = 0x1D312Cu;
    {
        const bool branch_taken_0x1d312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D312Cu;
            // 0x1d3130: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d312c) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D3134u;
    // 0x1d3134: 0x0  nop
    ctx->pc = 0x1d3134u;
    // NOP
label_1d3138:
    // 0x1d3138: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x1d3138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
    // 0x1d313c: 0x10000693  b           . + 4 + (0x693 << 2)
    ctx->pc = 0x1D313Cu;
    {
        const bool branch_taken_0x1d313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D313Cu;
            // 0x1d3140: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d313c) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D3144u;
    // 0x1d3144: 0x0  nop
    ctx->pc = 0x1d3144u;
    // NOP
label_1d3148:
    // 0x1d3148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d314c: 0x2a63001e  slti        $v1, $s3, 0x1E
    ctx->pc = 0x1d314cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d3150: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3150u;
    {
        const bool branch_taken_0x1d3150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3150u;
            // 0x1d3154: 0xae820310  sw          $v0, 0x310($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3150) {
            ctx->pc = 0x1D31C8u;
            goto label_1d31c8;
        }
    }
    ctx->pc = 0x1D3158u;
    // 0x1d3158: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d3158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d315c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D315Cu;
    {
        const bool branch_taken_0x1d315c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D315Cu;
            // 0x1d3160: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d315c) {
            ctx->pc = 0x1D3180u;
            goto label_1d3180;
        }
    }
    ctx->pc = 0x1D3164u;
    // 0x1d3164: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3168: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d316c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d316cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3170: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d3170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d3174: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3174u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3178u;
    {
        const bool branch_taken_0x1d3178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D317Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3178u;
            // 0x1d317c: 0xae830088  sw          $v1, 0x88($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3178) {
            ctx->pc = 0x1D318Cu;
            goto label_1d318c;
        }
    }
    ctx->pc = 0x1D3180u;
label_1d3180:
    // 0x1d3180: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d3180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d3184: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3188: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x1d3188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
label_1d318c:
    // 0x1d318c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d318cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3194: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d319c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d319cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d31a0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d31a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d31a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d31a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d31a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d31a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d31ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d31acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d31b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d31b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d31b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d31b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d31b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d31b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d31bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d31bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d31c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D31C0u;
    {
        const bool branch_taken_0x1d31c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31C0u;
            // 0x1d31c4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31c0) {
            ctx->pc = 0x1D31D8u;
            goto label_1d31d8;
        }
    }
    ctx->pc = 0x1D31C8u;
label_1d31c8:
    // 0x1d31c8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d31cc: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d31ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d31d0: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x1d31d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    // 0x1d31d4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d31d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d31d8:
    // 0x1d31d8: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1d31d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d31dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D31DCu;
    {
        const bool branch_taken_0x1d31dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D31E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31DCu;
            // 0x1d31e0: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31dc) {
            ctx->pc = 0x1D3258u;
            goto label_1d3258;
        }
    }
    ctx->pc = 0x1D31E4u;
    // 0x1d31e4: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1d31e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1d31e8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D31E8u;
    {
        const bool branch_taken_0x1d31e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31E8u;
            // 0x1d31ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31e8) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D31F0u;
    // 0x1d31f0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d31f4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d31f8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d31f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d31fc: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1d31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3200: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3200u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3204: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3204u;
    {
        const bool branch_taken_0x1d3204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3204u;
            // 0x1d3208: 0xae83008c  sw          $v1, 0x8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3204) {
            ctx->pc = 0x1D321Cu;
            goto label_1d321c;
        }
    }
    ctx->pc = 0x1D320Cu;
    // 0x1d320c: 0x0  nop
    ctx->pc = 0x1d320cu;
    // NOP
label_1d3210:
    // 0x1d3210: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1d3210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3214: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3218: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1d3218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_1d321c:
    // 0x1d321c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d321cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3220: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3224: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3228: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d322c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d322cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3230: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3230u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3234: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3238: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d323c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d323cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3240: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3244: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3248: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d324c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d324cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3250: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3250u;
    {
        const bool branch_taken_0x1d3250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3250u;
            // 0x1d3254: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3250) {
            ctx->pc = 0x1D3264u;
            goto label_1d3264;
        }
    }
    ctx->pc = 0x1D3258u;
label_1d3258:
    // 0x1d3258: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1d3258u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d325c: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1d325cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x1d3260: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d3260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d3264:
    // 0x1d3264: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x1d3264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1d3268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d326c: 0x146400e2  bne         $v1, $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x1D326Cu;
    {
        const bool branch_taken_0x1d326c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D3270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D326Cu;
            // 0x1d3270: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d326c) {
            ctx->pc = 0x1D35F8u;
            goto label_1d35f8;
        }
    }
    ctx->pc = 0x1D3274u;
    // 0x1d3274: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1d3274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1d3278: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3278u;
    {
        const bool branch_taken_0x1d3278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3278u;
            // 0x1d327c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3278) {
            ctx->pc = 0x1D32F0u;
            goto label_1d32f0;
        }
    }
    ctx->pc = 0x1D3280u;
    // 0x1d3280: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1d3280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1d3284: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3284u;
    {
        const bool branch_taken_0x1d3284 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3284u;
            // 0x1d3288: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3284) {
            ctx->pc = 0x1D32A8u;
            goto label_1d32a8;
        }
    }
    ctx->pc = 0x1D328Cu;
    // 0x1d328c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d328cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3290: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3294: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3294u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3298: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1d3298u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d329c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d329cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d32a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D32A0u;
    {
        const bool branch_taken_0x1d32a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D32A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32A0u;
            // 0x1d32a4: 0xae830090  sw          $v1, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32a0) {
            ctx->pc = 0x1D32B4u;
            goto label_1d32b4;
        }
    }
    ctx->pc = 0x1D32A8u;
label_1d32a8:
    // 0x1d32a8: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1d32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d32ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d32acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d32b0: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x1d32b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_1d32b4:
    // 0x1d32b4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d32b4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d32b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d32b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d32bc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d32bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d32c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d32c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d32c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d32c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d32c8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d32c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d32cc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d32ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d32d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d32d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d32d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d32d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d32d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d32dc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d32dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d32e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d32e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d32e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D32E8u;
    {
        const bool branch_taken_0x1d32e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D32ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32E8u;
            // 0x1d32ec: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32e8) {
            ctx->pc = 0x1D32FCu;
            goto label_1d32fc;
        }
    }
    ctx->pc = 0x1D32F0u;
label_1d32f0:
    // 0x1d32f0: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x1d32f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x1d32f4: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x1d32f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
    // 0x1d32f8: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1d32f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_1d32fc:
    // 0x1d32fc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d32fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3300: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3300u;
    {
        const bool branch_taken_0x1d3300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3300u;
            // 0x1d3304: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3300) {
            ctx->pc = 0x1D3378u;
            goto label_1d3378;
        }
    }
    ctx->pc = 0x1D3308u;
    // 0x1d3308: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3308u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d330c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D330Cu;
    {
        const bool branch_taken_0x1d330c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D330Cu;
            // 0x1d3310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d330c) {
            ctx->pc = 0x1D3330u;
            goto label_1d3330;
        }
    }
    ctx->pc = 0x1D3314u;
    // 0x1d3314: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3318: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d331c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d331cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3320: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3324: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3324u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3328: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3328u;
    {
        const bool branch_taken_0x1d3328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3328u;
            // 0x1d332c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3328) {
            ctx->pc = 0x1D333Cu;
            goto label_1d333c;
        }
    }
    ctx->pc = 0x1D3330u;
label_1d3330:
    // 0x1d3330: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d3330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3334: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3338: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d3338u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d333c:
    // 0x1d333c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d333cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3340: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3344: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3344u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3348: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d334c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d334cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3350: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3354: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3354u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3358: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d335c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d335cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3360: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3364: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d336c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d336cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3370u;
    {
        const bool branch_taken_0x1d3370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3370u;
            // 0x1d3374: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3370) {
            ctx->pc = 0x1D3384u;
            goto label_1d3384;
        }
    }
    ctx->pc = 0x1D3378u;
label_1d3378:
    // 0x1d3378: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3378u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d337c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d337cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d3380: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3384:
    // 0x1d3384: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1d3384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1d3388: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3388u;
    {
        const bool branch_taken_0x1d3388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3388u;
            // 0x1d338c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3388) {
            ctx->pc = 0x1D3400u;
            goto label_1d3400;
        }
    }
    ctx->pc = 0x1D3390u;
    // 0x1d3390: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1d3390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1d3394: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3394u;
    {
        const bool branch_taken_0x1d3394 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3394u;
            // 0x1d3398: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3394) {
            ctx->pc = 0x1D33B8u;
            goto label_1d33b8;
        }
    }
    ctx->pc = 0x1D339Cu;
    // 0x1d339c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d339cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d33a0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d33a4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d33a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d33a8: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1d33a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d33ac: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d33acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d33b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D33B0u;
    {
        const bool branch_taken_0x1d33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33B0u;
            // 0x1d33b4: 0xae830094  sw          $v1, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33b0) {
            ctx->pc = 0x1D33C4u;
            goto label_1d33c4;
        }
    }
    ctx->pc = 0x1D33B8u;
label_1d33b8:
    // 0x1d33b8: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1d33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1d33bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d33bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d33c0: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x1d33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_1d33c4:
    // 0x1d33c4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d33c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d33c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d33cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d33ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d33d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d33d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d33d8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d33d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d33dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d33dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d33e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d33e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d33e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d33e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d33e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d33e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d33ec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d33ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d33f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d33f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d33f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d33f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d33f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D33F8u;
    {
        const bool branch_taken_0x1d33f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33F8u;
            // 0x1d33fc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33f8) {
            ctx->pc = 0x1D340Cu;
            goto label_1d340c;
        }
    }
    ctx->pc = 0x1D3400u;
label_1d3400:
    // 0x1d3400: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x1d3400u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x1d3404: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x1d3404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
    // 0x1d3408: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_1d340c:
    // 0x1d340c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1d340cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d3410: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3410u;
    {
        const bool branch_taken_0x1d3410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3410u;
            // 0x1d3414: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3410) {
            ctx->pc = 0x1D3488u;
            goto label_1d3488;
        }
    }
    ctx->pc = 0x1D3418u;
    // 0x1d3418: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1d3418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1d341c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D341Cu;
    {
        const bool branch_taken_0x1d341c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D341Cu;
            // 0x1d3420: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d341c) {
            ctx->pc = 0x1D3440u;
            goto label_1d3440;
        }
    }
    ctx->pc = 0x1D3424u;
    // 0x1d3424: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3428: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d342c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d342cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3430: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1d3430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d3434: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3434u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3438u;
    {
        const bool branch_taken_0x1d3438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3438u;
            // 0x1d343c: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3438) {
            ctx->pc = 0x1D344Cu;
            goto label_1d344c;
        }
    }
    ctx->pc = 0x1D3440u;
label_1d3440:
    // 0x1d3440: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1d3440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d3444: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3448: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x1d3448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
label_1d344c:
    // 0x1d344c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d344cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3450: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3454: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d345c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d345cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3460: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3464: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3468: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d346c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d346cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3470: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3470u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3474: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d347c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d347cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3480u;
    {
        const bool branch_taken_0x1d3480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3480u;
            // 0x1d3484: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3480) {
            ctx->pc = 0x1D3494u;
            goto label_1d3494;
        }
    }
    ctx->pc = 0x1D3488u;
label_1d3488:
    // 0x1d3488: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x1d3488u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1d348c: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x1d348cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
    // 0x1d3490: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1d3490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1d3494:
    // 0x1d3494: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1d3494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d3498: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3498u;
    {
        const bool branch_taken_0x1d3498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3498u;
            // 0x1d349c: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3498) {
            ctx->pc = 0x1D3510u;
            goto label_1d3510;
        }
    }
    ctx->pc = 0x1D34A0u;
    // 0x1d34a0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1d34a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1d34a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D34A4u;
    {
        const bool branch_taken_0x1d34a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34A4u;
            // 0x1d34a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34a4) {
            ctx->pc = 0x1D34C8u;
            goto label_1d34c8;
        }
    }
    ctx->pc = 0x1D34ACu;
    // 0x1d34ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d34acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d34b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d34b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d34b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d34b8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1d34b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d34bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d34bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d34c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D34C0u;
    {
        const bool branch_taken_0x1d34c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34C0u;
            // 0x1d34c4: 0xae83009c  sw          $v1, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34c0) {
            ctx->pc = 0x1D34D4u;
            goto label_1d34d4;
        }
    }
    ctx->pc = 0x1D34C8u;
label_1d34c8:
    // 0x1d34c8: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1d34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d34cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d34ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34d0: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x1d34d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_1d34d4:
    // 0x1d34d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d34d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d34d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d34d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d34dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d34dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d34e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d34e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d34e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d34e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d34e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d34e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d34ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d34ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d34f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d34f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d34f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d34f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d34f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d34f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d34fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d34fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3504: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3504u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3508u;
    {
        const bool branch_taken_0x1d3508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D350Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3508u;
            // 0x1d350c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3508) {
            ctx->pc = 0x1D351Cu;
            goto label_1d351c;
        }
    }
    ctx->pc = 0x1D3510u;
label_1d3510:
    // 0x1d3510: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x1d3510u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1d3514: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x1d3514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x1d3518: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1d3518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1d351c:
    // 0x1d351c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1d351cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d3520: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3520u;
    {
        const bool branch_taken_0x1d3520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3520u;
            // 0x1d3524: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3520) {
            ctx->pc = 0x1D3598u;
            goto label_1d3598;
        }
    }
    ctx->pc = 0x1D3528u;
    // 0x1d3528: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1d3528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1d352c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D352Cu;
    {
        const bool branch_taken_0x1d352c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D352Cu;
            // 0x1d3530: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d352c) {
            ctx->pc = 0x1D3550u;
            goto label_1d3550;
        }
    }
    ctx->pc = 0x1D3534u;
    // 0x1d3534: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3538: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d353c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d353cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3540: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1d3540u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d3544: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3544u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3548u;
    {
        const bool branch_taken_0x1d3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D354Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3548u;
            // 0x1d354c: 0xae8300a0  sw          $v1, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3548) {
            ctx->pc = 0x1D355Cu;
            goto label_1d355c;
        }
    }
    ctx->pc = 0x1D3550u;
label_1d3550:
    // 0x1d3550: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1d3550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d3554: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3558: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x1d3558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
label_1d355c:
    // 0x1d355c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d355cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3560: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3564: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d356c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d356cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3570: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3574: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3574u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3578: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d357c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d357cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3580: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3584: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d358c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3590: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3590u;
    {
        const bool branch_taken_0x1d3590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3590u;
            // 0x1d3594: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3590) {
            ctx->pc = 0x1D35A4u;
            goto label_1d35a4;
        }
    }
    ctx->pc = 0x1D3598u;
label_1d3598:
    // 0x1d3598: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x1d3598u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1d359c: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x1d359cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x1d35a0: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1d35a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1d35a4:
    // 0x1d35a4: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1d35a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d35a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D35A8u;
    {
        const bool branch_taken_0x1d35a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D35ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35A8u;
            // 0x1d35ac: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35a8) {
            ctx->pc = 0x1D35E8u;
            goto label_1d35e8;
        }
    }
    ctx->pc = 0x1D35B0u;
    // 0x1d35b0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1d35b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1d35b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D35B4u;
    {
        const bool branch_taken_0x1d35b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35B4u;
            // 0x1d35b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35b4) {
            ctx->pc = 0x1D35D8u;
            goto label_1d35d8;
        }
    }
    ctx->pc = 0x1D35BCu;
    // 0x1d35bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d35c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d35c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d35c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d35c8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1d35c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d35cc: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x1D35CCu;
    {
        const bool branch_taken_0x1d35cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35CCu;
            // 0x1d35d0: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35cc) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D35D4u;
    // 0x1d35d4: 0x0  nop
    ctx->pc = 0x1d35d4u;
    // NOP
label_1d35d8:
    // 0x1d35d8: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1d35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1d35dc: 0x10000562  b           . + 4 + (0x562 << 2)
    ctx->pc = 0x1D35DCu;
    {
        const bool branch_taken_0x1d35dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35DCu;
            // 0x1d35e0: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35dc) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D35E4u;
    // 0x1d35e4: 0x0  nop
    ctx->pc = 0x1d35e4u;
    // NOP
label_1d35e8:
    // 0x1d35e8: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1d35e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1d35ec: 0x10000567  b           . + 4 + (0x567 << 2)
    ctx->pc = 0x1D35ECu;
    {
        const bool branch_taken_0x1d35ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35ECu;
            // 0x1d35f0: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35ec) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D35F4u;
    // 0x1d35f4: 0x0  nop
    ctx->pc = 0x1d35f4u;
    // NOP
label_1d35f8:
    // 0x1d35f8: 0x54620565  bnel        $v1, $v0, . + 4 + (0x565 << 2)
    ctx->pc = 0x1D35F8u;
    {
        const bool branch_taken_0x1d35f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d35f8) {
            ctx->pc = 0x1D35FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35F8u;
            // 0x1d35fc: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4B90u;
            goto label_1d4b90;
        }
    }
    ctx->pc = 0x1D3600u;
    // 0x1d3600: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d3600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3604: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D3604u;
    {
        const bool branch_taken_0x1d3604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3604u;
            // 0x1d3608: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3604) {
            ctx->pc = 0x1D3678u;
            goto label_1d3678;
        }
    }
    ctx->pc = 0x1D360Cu;
    // 0x1d360c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d360cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d3610: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3610u;
    {
        const bool branch_taken_0x1d3610 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3610u;
            // 0x1d3614: 0x931023  subu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3610) {
            ctx->pc = 0x1D3630u;
            goto label_1d3630;
        }
    }
    ctx->pc = 0x1D3618u;
    // 0x1d3618: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d361c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d361cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3620: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3624: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3624u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3628u;
    {
        const bool branch_taken_0x1d3628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3628u;
            // 0x1d362c: 0xae8300a8  sw          $v1, 0xA8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3628) {
            ctx->pc = 0x1D363Cu;
            goto label_1d363c;
        }
    }
    ctx->pc = 0x1D3630u;
label_1d3630:
    // 0x1d3630: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3634: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3638: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x1d3638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
label_1d363c:
    // 0x1d363c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d363cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3644: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3644u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3648: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d364c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d364cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3650: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3650u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3654: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3654u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d365c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3660: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3664: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d366c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d366cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3670: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3670u;
    {
        const bool branch_taken_0x1d3670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3670u;
            // 0x1d3674: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3670) {
            ctx->pc = 0x1D3684u;
            goto label_1d3684;
        }
    }
    ctx->pc = 0x1D3678u;
label_1d3678:
    // 0x1d3678: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3678u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d367c: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x1d367cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    // 0x1d3680: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3684:
    // 0x1d3684: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x1d3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x1d3688: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D3688u;
    {
        const bool branch_taken_0x1d3688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D368Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3688u;
            // 0x1d368c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3688) {
            ctx->pc = 0x1D3714u;
            goto label_1d3714;
        }
    }
    ctx->pc = 0x1D3690u;
    // 0x1d3690: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3690u;
    {
        const bool branch_taken_0x1d3690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3690u;
            // 0x1d3694: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3690) {
            ctx->pc = 0x1D3708u;
            goto label_1d3708;
        }
    }
    ctx->pc = 0x1D3698u;
    // 0x1d3698: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d369c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D369Cu;
    {
        const bool branch_taken_0x1d369c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D369Cu;
            // 0x1d36a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d369c) {
            ctx->pc = 0x1D36C0u;
            goto label_1d36c0;
        }
    }
    ctx->pc = 0x1D36A4u;
    // 0x1d36a4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d36a8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d36ac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d36acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d36b0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d36b4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d36b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d36b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D36B8u;
    {
        const bool branch_taken_0x1d36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36B8u;
            // 0x1d36bc: 0xae8300ac  sw          $v1, 0xAC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36b8) {
            ctx->pc = 0x1D36CCu;
            goto label_1d36cc;
        }
    }
    ctx->pc = 0x1D36C0u;
label_1d36c0:
    // 0x1d36c0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d36c4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d36c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d36c8: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x1d36c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
label_1d36cc:
    // 0x1d36cc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d36ccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d36d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d36d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d36d4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d36d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d36d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d36d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d36dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d36dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d36e0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d36e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d36e4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d36e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d36e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d36e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d36ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d36ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d36f0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d36f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d36f4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d36f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d36f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d36f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d36fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d36fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3700u;
    {
        const bool branch_taken_0x1d3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3700u;
            // 0x1d3704: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3700) {
            ctx->pc = 0x1D3714u;
            goto label_1d3714;
        }
    }
    ctx->pc = 0x1D3708u;
label_1d3708:
    // 0x1d3708: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3708u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d370c: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x1d370cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    // 0x1d3710: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3714:
    // 0x1d3714: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1d3714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d3718: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3718u;
    {
        const bool branch_taken_0x1d3718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3718u;
            // 0x1d371c: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3718) {
            ctx->pc = 0x1D3790u;
            goto label_1d3790;
        }
    }
    ctx->pc = 0x1D3720u;
    // 0x1d3720: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1d3720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1d3724: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3724u;
    {
        const bool branch_taken_0x1d3724 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3724u;
            // 0x1d3728: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3724) {
            ctx->pc = 0x1D3748u;
            goto label_1d3748;
        }
    }
    ctx->pc = 0x1D372Cu;
    // 0x1d372c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d372cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3730: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3734: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3734u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3738: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1d3738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d373c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d373cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3740: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3740u;
    {
        const bool branch_taken_0x1d3740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3740u;
            // 0x1d3744: 0xae8300b0  sw          $v1, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3740) {
            ctx->pc = 0x1D3754u;
            goto label_1d3754;
        }
    }
    ctx->pc = 0x1D3748u;
label_1d3748:
    // 0x1d3748: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1d3748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d374c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d374cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3750: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x1d3750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
label_1d3754:
    // 0x1d3754: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3754u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3758: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d375c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d375cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3764: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3764u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3768: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3768u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d376c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d376cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3774: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3774u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3778: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d377c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d377cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3784: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3784u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3788u;
    {
        const bool branch_taken_0x1d3788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3788u;
            // 0x1d378c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3788) {
            ctx->pc = 0x1D379Cu;
            goto label_1d379c;
        }
    }
    ctx->pc = 0x1D3790u;
label_1d3790:
    // 0x1d3790: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d3794: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x1d3794u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x1d3798: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1d3798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1d379c:
    // 0x1d379c: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1d379cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d37a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D37A0u;
    {
        const bool branch_taken_0x1d37a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37A0u;
            // 0x1d37a4: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37a0) {
            ctx->pc = 0x1D37E0u;
            goto label_1d37e0;
        }
    }
    ctx->pc = 0x1D37A8u;
    // 0x1d37a8: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1d37a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1d37ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D37ACu;
    {
        const bool branch_taken_0x1d37ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37ACu;
            // 0x1d37b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37ac) {
            ctx->pc = 0x1D37D0u;
            goto label_1d37d0;
        }
    }
    ctx->pc = 0x1D37B4u;
    // 0x1d37b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d37b8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d37bc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d37bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d37c0: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1d37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d37c4: 0x100004e8  b           . + 4 + (0x4E8 << 2)
    ctx->pc = 0x1D37C4u;
    {
        const bool branch_taken_0x1d37c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37C4u;
            // 0x1d37c8: 0xae8300b4  sw          $v1, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37c4) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D37CCu;
    // 0x1d37cc: 0x0  nop
    ctx->pc = 0x1d37ccu;
    // NOP
label_1d37d0:
    // 0x1d37d0: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1d37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d37d4: 0x100004e4  b           . + 4 + (0x4E4 << 2)
    ctx->pc = 0x1D37D4u;
    {
        const bool branch_taken_0x1d37d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37D4u;
            // 0x1d37d8: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37d4) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D37DCu;
    // 0x1d37dc: 0x0  nop
    ctx->pc = 0x1d37dcu;
    // NOP
label_1d37e0:
    // 0x1d37e0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x1d37e4: 0x100004e9  b           . + 4 + (0x4E9 << 2)
    ctx->pc = 0x1D37E4u;
    {
        const bool branch_taken_0x1d37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37E4u;
            // 0x1d37e8: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37e4) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D37ECu;
    // 0x1d37ec: 0x0  nop
    ctx->pc = 0x1d37ecu;
    // NOP
label_1d37f0:
    // 0x1d37f0: 0xc07439c  jal         func_1D0E70
    ctx->pc = 0x1D37F0u;
    SET_GPR_U32(ctx, 31, 0x1D37F8u);
    ctx->pc = 0x1D37F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37F0u;
            // 0x1d37f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E70u;
    if (runtime->hasFunction(0x1D0E70u)) {
        auto targetFn = runtime->lookupFunction(0x1D0E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37F8u; }
        if (ctx->pc != 0x1D37F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0E70_0x1d0e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37F8u; }
        if (ctx->pc != 0x1D37F8u) { return; }
    }
    ctx->pc = 0x1D37F8u;
label_1d37f8:
    // 0x1d37f8: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1d37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1d37fc: 0x184004e3  blez        $v0, . + 4 + (0x4E3 << 2)
    ctx->pc = 0x1D37FCu;
    {
        const bool branch_taken_0x1d37fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D3800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37FCu;
            // 0x1d3800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37fc) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D3804u;
    // 0x1d3804: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1d3804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3808: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d380c: 0x2685016c  addiu       $a1, $s4, 0x16C
    ctx->pc = 0x1d380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    // 0x1d3810: 0x26840160  addiu       $a0, $s4, 0x160
    ctx->pc = 0x1d3810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x1d3814: 0x0  nop
    ctx->pc = 0x1d3814u;
    // NOP
label_1d3818:
    // 0x1d3818: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1d3818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d381c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D381Cu;
    {
        const bool branch_taken_0x1d381c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D381Cu;
            // 0x1d3820: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d381c) {
            ctx->pc = 0x1D3890u;
            goto label_1d3890;
        }
    }
    ctx->pc = 0x1D3824u;
    // 0x1d3824: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x1d3824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x1d3828: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3828u;
    {
        const bool branch_taken_0x1d3828 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3828u;
            // 0x1d382c: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3828) {
            ctx->pc = 0x1D3848u;
            goto label_1d3848;
        }
    }
    ctx->pc = 0x1D3830u;
    // 0x1d3830: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3834: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3834u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3838: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x1d3838u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1d383c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d383cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3840u;
    {
        const bool branch_taken_0x1d3840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3840u;
            // 0x1d3844: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3840) {
            ctx->pc = 0x1D3854u;
            goto label_1d3854;
        }
    }
    ctx->pc = 0x1D3848u;
label_1d3848:
    // 0x1d3848: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x1d3848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1d384c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d384cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3850: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d3850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1d3854:
    // 0x1d3854: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3854u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3858: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d385c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d385cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3864: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3864u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3868: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3868u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d386c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d386cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3874: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3874u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3878: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3878u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d387c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d387cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3884: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3884u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3888u;
    {
        const bool branch_taken_0x1d3888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D388Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3888u;
            // 0x1d388c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3888) {
            ctx->pc = 0x1D389Cu;
            goto label_1d389c;
        }
    }
    ctx->pc = 0x1D3890u;
label_1d3890:
    // 0x1d3890: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x1d3894: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d3894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d3898: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1d3898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1d389c:
    // 0x1d389c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d389cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d38a0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D38A0u;
    {
        const bool branch_taken_0x1d38a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D38A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38A0u;
            // 0x1d38a4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38a0) {
            ctx->pc = 0x1D3918u;
            goto label_1d3918;
        }
    }
    ctx->pc = 0x1D38A8u;
    // 0x1d38a8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d38a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d38ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D38ACu;
    {
        const bool branch_taken_0x1d38ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38ACu;
            // 0x1d38b0: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38ac) {
            ctx->pc = 0x1D38D0u;
            goto label_1d38d0;
        }
    }
    ctx->pc = 0x1D38B4u;
    // 0x1d38b4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d38b8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d38b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d38bc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d38c0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d38c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d38c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D38C4u;
    {
        const bool branch_taken_0x1d38c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38C4u;
            // 0x1d38c8: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38c4) {
            ctx->pc = 0x1D38DCu;
            goto label_1d38dc;
        }
    }
    ctx->pc = 0x1D38CCu;
    // 0x1d38cc: 0x0  nop
    ctx->pc = 0x1d38ccu;
    // NOP
label_1d38d0:
    // 0x1d38d0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d38d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d38d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38d8: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d38d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d38dc:
    // 0x1d38dc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d38dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d38e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d38e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d38e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d38e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d38e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d38e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d38ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d38f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d38f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d38f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d38f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d38f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d38f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d38fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d38fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3900: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3904: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d390c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3910u;
    {
        const bool branch_taken_0x1d3910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3910u;
            // 0x1d3914: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3910) {
            ctx->pc = 0x1D3924u;
            goto label_1d3924;
        }
    }
    ctx->pc = 0x1D3918u;
label_1d3918:
    // 0x1d3918: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3918u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d391c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d391cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d3920: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3924:
    // 0x1d3924: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1d3924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d3928: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3928u;
    {
        const bool branch_taken_0x1d3928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3928u;
            // 0x1d392c: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3928) {
            ctx->pc = 0x1D39A0u;
            goto label_1d39a0;
        }
    }
    ctx->pc = 0x1D3930u;
    // 0x1d3930: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x1d3930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x1d3934: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3934u;
    {
        const bool branch_taken_0x1d3934 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3934u;
            // 0x1d3938: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3934) {
            ctx->pc = 0x1D3958u;
            goto label_1d3958;
        }
    }
    ctx->pc = 0x1D393Cu;
    // 0x1d393c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d393cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3940: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3940u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3944: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x1d3944u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1d3948: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3948u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d394c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D394Cu;
    {
        const bool branch_taken_0x1d394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D394Cu;
            // 0x1d3950: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d394c) {
            ctx->pc = 0x1D3964u;
            goto label_1d3964;
        }
    }
    ctx->pc = 0x1D3954u;
    // 0x1d3954: 0x0  nop
    ctx->pc = 0x1d3954u;
    // NOP
label_1d3958:
    // 0x1d3958: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x1d3958u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1d395c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d395cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3960: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d3960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1d3964:
    // 0x1d3964: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3964u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d396c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d396cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3974: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3974u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3978: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3978u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d397c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d397cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3984: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3984u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3988: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d398c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d398cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3990: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3994: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3994u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3998u;
    {
        const bool branch_taken_0x1d3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3998u;
            // 0x1d399c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3998) {
            ctx->pc = 0x1D39ACu;
            goto label_1d39ac;
        }
    }
    ctx->pc = 0x1D39A0u;
label_1d39a0:
    // 0x1d39a0: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x1d39a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x1d39a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d39a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1d39a8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1d39ac:
    // 0x1d39ac: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d39b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D39B0u;
    {
        const bool branch_taken_0x1d39b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D39B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39B0u;
            // 0x1d39b4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39b0) {
            ctx->pc = 0x1D3A28u;
            goto label_1d3a28;
        }
    }
    ctx->pc = 0x1D39B8u;
    // 0x1d39b8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d39b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d39bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D39BCu;
    {
        const bool branch_taken_0x1d39bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39BCu;
            // 0x1d39c0: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39bc) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D39C4u;
    // 0x1d39c4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d39c8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d39c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d39cc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d39d0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d39d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D39D4u;
    {
        const bool branch_taken_0x1d39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39D4u;
            // 0x1d39d8: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39d4) {
            ctx->pc = 0x1D39ECu;
            goto label_1d39ec;
        }
    }
    ctx->pc = 0x1D39DCu;
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
label_1d39e0:
    // 0x1d39e0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d39e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d39e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e8: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d39e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d39ec:
    // 0x1d39ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d39ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d39f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d39f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d39f4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d39f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d39f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d39f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d39fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d39fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3a00: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3a00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3a04: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3a04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3a08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3a0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3a10: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3a10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3a14: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3a14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3a18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3a1c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3a20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3A20u;
    {
        const bool branch_taken_0x1d3a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A20u;
            // 0x1d3a24: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a20) {
            ctx->pc = 0x1D3A34u;
            goto label_1d3a34;
        }
    }
    ctx->pc = 0x1D3A28u;
label_1d3a28:
    // 0x1d3a28: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3a28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d3a2c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d3a30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3a30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3a34:
    // 0x1d3a34: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1d3a38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d3a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d3a3c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d3a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d3a40: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1d3a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3a44: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1D3A44u;
    {
        const bool branch_taken_0x1d3a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A44u;
            // 0x1d3a48: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a44) {
            ctx->pc = 0x1D3818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3818;
        }
    }
    ctx->pc = 0x1D3A4Cu;
    // 0x1d3a4c: 0x10000450  b           . + 4 + (0x450 << 2)
    ctx->pc = 0x1D3A4Cu;
    {
        const bool branch_taken_0x1d3a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A4Cu;
            // 0x1d3a50: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a4c) {
            ctx->pc = 0x1D4B90u;
            goto label_1d4b90;
        }
    }
    ctx->pc = 0x1D3A54u;
    // 0x1d3a54: 0x0  nop
    ctx->pc = 0x1d3a54u;
    // NOP
label_1d3a58:
    // 0x1d3a58: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1d3a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d3a5c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D3A5Cu;
    {
        const bool branch_taken_0x1d3a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A5Cu;
            // 0x1d3a60: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a5c) {
            ctx->pc = 0x1D3AD8u;
            goto label_1d3ad8;
        }
    }
    ctx->pc = 0x1D3A64u;
    // 0x1d3a64: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1d3a64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1d3a68: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3A68u;
    {
        const bool branch_taken_0x1d3a68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A68u;
            // 0x1d3a6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a68) {
            ctx->pc = 0x1D3A90u;
            goto label_1d3a90;
        }
    }
    ctx->pc = 0x1D3A70u;
    // 0x1d3a70: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3a74: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3a78: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3a78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3a7c: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1d3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3a80: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3a80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3a84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3A84u;
    {
        const bool branch_taken_0x1d3a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A84u;
            // 0x1d3a88: 0xae830104  sw          $v1, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a84) {
            ctx->pc = 0x1D3A9Cu;
            goto label_1d3a9c;
        }
    }
    ctx->pc = 0x1D3A8Cu;
    // 0x1d3a8c: 0x0  nop
    ctx->pc = 0x1d3a8cu;
    // NOP
label_1d3a90:
    // 0x1d3a90: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1d3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3a94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a98: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x1d3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
label_1d3a9c:
    // 0x1d3a9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3a9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3aa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3aa4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3aa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3aa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3aac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3aacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3ab0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3ab0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ab4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3ab8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3abc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3abcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3ac0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3ac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ac4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3ac4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3ac8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3acc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3ad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3AD0u;
    {
        const bool branch_taken_0x1d3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AD0u;
            // 0x1d3ad4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ad0) {
            ctx->pc = 0x1D3AE4u;
            goto label_1d3ae4;
        }
    }
    ctx->pc = 0x1D3AD8u;
label_1d3ad8:
    // 0x1d3ad8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d3adc: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x1d3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
    // 0x1d3ae0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d3ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d3ae4:
    // 0x1d3ae4: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1d3ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d3ae8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3AE8u;
    {
        const bool branch_taken_0x1d3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AE8u;
            // 0x1d3aec: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ae8) {
            ctx->pc = 0x1D3B60u;
            goto label_1d3b60;
        }
    }
    ctx->pc = 0x1D3AF0u;
    // 0x1d3af0: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1d3af4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3AF4u;
    {
        const bool branch_taken_0x1d3af4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AF4u;
            // 0x1d3af8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3af4) {
            ctx->pc = 0x1D3B18u;
            goto label_1d3b18;
        }
    }
    ctx->pc = 0x1D3AFCu;
    // 0x1d3afc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3b00: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3b04: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3b04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3b08: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1d3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3b0c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3B10u;
    {
        const bool branch_taken_0x1d3b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B10u;
            // 0x1d3b14: 0xae830108  sw          $v1, 0x108($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b10) {
            ctx->pc = 0x1D3B24u;
            goto label_1d3b24;
        }
    }
    ctx->pc = 0x1D3B18u;
label_1d3b18:
    // 0x1d3b18: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1d3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3b1c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b20: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x1d3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
label_1d3b24:
    // 0x1d3b24: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3b28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3b2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3b2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3b30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3b34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3b34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3b38: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3b3c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3b3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3b40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3b44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3b44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3b48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3b48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3b4c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3b4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3b50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3b54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3b58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3B58u;
    {
        const bool branch_taken_0x1d3b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B58u;
            // 0x1d3b5c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b58) {
            ctx->pc = 0x1D3B6Cu;
            goto label_1d3b6c;
        }
    }
    ctx->pc = 0x1D3B60u;
label_1d3b60:
    // 0x1d3b60: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1d3b60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d3b64: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x1d3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
    // 0x1d3b68: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d3b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d3b6c:
    // 0x1d3b6c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1d3b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d3b70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3B70u;
    {
        const bool branch_taken_0x1d3b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B70u;
            // 0x1d3b74: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b70) {
            ctx->pc = 0x1D3BE8u;
            goto label_1d3be8;
        }
    }
    ctx->pc = 0x1D3B78u;
    // 0x1d3b78: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1d3b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1d3b7c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3B7Cu;
    {
        const bool branch_taken_0x1d3b7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B7Cu;
            // 0x1d3b80: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b7c) {
            ctx->pc = 0x1D3BA0u;
            goto label_1d3ba0;
        }
    }
    ctx->pc = 0x1D3B84u;
    // 0x1d3b84: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3b88: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3b8c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3b8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3b90: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1d3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3b94: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3b94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3B98u;
    {
        const bool branch_taken_0x1d3b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B98u;
            // 0x1d3b9c: 0xae83010c  sw          $v1, 0x10C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b98) {
            ctx->pc = 0x1D3BACu;
            goto label_1d3bac;
        }
    }
    ctx->pc = 0x1D3BA0u;
label_1d3ba0:
    // 0x1d3ba0: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3ba4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ba8: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x1d3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
label_1d3bac:
    // 0x1d3bac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3bacu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3bb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3bb4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3bb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3bbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3bc0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3bc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3bc4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3bc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3bcc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3bccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3bd0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3bd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3bd4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3bd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3bd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3bdc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3be0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3BE0u;
    {
        const bool branch_taken_0x1d3be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BE0u;
            // 0x1d3be4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3be0) {
            ctx->pc = 0x1D3BF4u;
            goto label_1d3bf4;
        }
    }
    ctx->pc = 0x1D3BE8u;
label_1d3be8:
    // 0x1d3be8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1d3be8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d3bec: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x1d3becu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
    // 0x1d3bf0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d3bf4:
    // 0x1d3bf4: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1d3bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d3bf8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3BF8u;
    {
        const bool branch_taken_0x1d3bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BF8u;
            // 0x1d3bfc: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3bf8) {
            ctx->pc = 0x1D3C70u;
            goto label_1d3c70;
        }
    }
    ctx->pc = 0x1D3C00u;
    // 0x1d3c00: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1d3c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1d3c04: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C04u;
    {
        const bool branch_taken_0x1d3c04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C04u;
            // 0x1d3c08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c04) {
            ctx->pc = 0x1D3C28u;
            goto label_1d3c28;
        }
    }
    ctx->pc = 0x1D3C0Cu;
    // 0x1d3c0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3c10: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3c14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3c14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3c18: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1d3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3c1c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3c20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3C20u;
    {
        const bool branch_taken_0x1d3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C20u;
            // 0x1d3c24: 0xae830110  sw          $v1, 0x110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c20) {
            ctx->pc = 0x1D3C34u;
            goto label_1d3c34;
        }
    }
    ctx->pc = 0x1D3C28u;
label_1d3c28:
    // 0x1d3c28: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1d3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1d3c2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c30: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x1d3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
label_1d3c34:
    // 0x1d3c34: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3c34u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3c38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3c3c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3c3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3c40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3c44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3c44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3c48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3c48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3c4c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3c4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3c50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3c54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3c54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3c58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3c58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3c5c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3c5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3c60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3c64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3c64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3c68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3C68u;
    {
        const bool branch_taken_0x1d3c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C68u;
            // 0x1d3c6c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c68) {
            ctx->pc = 0x1D3C7Cu;
            goto label_1d3c7c;
        }
    }
    ctx->pc = 0x1D3C70u;
label_1d3c70:
    // 0x1d3c70: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1d3c70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d3c74: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x1d3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
    // 0x1d3c78: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d3c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d3c7c:
    // 0x1d3c7c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d3c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d3c80: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3C80u;
    {
        const bool branch_taken_0x1d3c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C80u;
            // 0x1d3c84: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c80) {
            ctx->pc = 0x1D3CF8u;
            goto label_1d3cf8;
        }
    }
    ctx->pc = 0x1D3C88u;
    // 0x1d3c88: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d3c88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d3c8c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C8Cu;
    {
        const bool branch_taken_0x1d3c8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C8Cu;
            // 0x1d3c90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c8c) {
            ctx->pc = 0x1D3CB0u;
            goto label_1d3cb0;
        }
    }
    ctx->pc = 0x1D3C94u;
    // 0x1d3c94: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3c98: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3c9c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3c9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3ca0: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d3ca4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3ca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3CA8u;
    {
        const bool branch_taken_0x1d3ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3CA8u;
            // 0x1d3cac: 0xae830114  sw          $v1, 0x114($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ca8) {
            ctx->pc = 0x1D3CBCu;
            goto label_1d3cbc;
        }
    }
    ctx->pc = 0x1D3CB0u;
label_1d3cb0:
    // 0x1d3cb0: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d3cb4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cb8: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x1d3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
label_1d3cbc:
    // 0x1d3cbc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3cbcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3cc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3cc4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3cc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3ccc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3cd0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3cd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3cd4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3cd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3cd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3cdc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3ce0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ce4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3ce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3ce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3cec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3cf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3CF0u;
    {
        const bool branch_taken_0x1d3cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3CF0u;
            // 0x1d3cf4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cf0) {
            ctx->pc = 0x1D3D04u;
            goto label_1d3d04;
        }
    }
    ctx->pc = 0x1D3CF8u;
label_1d3cf8:
    // 0x1d3cf8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d3cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d3cfc: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x1d3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
    // 0x1d3d00: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d3d04:
    // 0x1d3d04: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d3d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d3d08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3D08u;
    {
        const bool branch_taken_0x1d3d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D08u;
            // 0x1d3d0c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d08) {
            ctx->pc = 0x1D3D80u;
            goto label_1d3d80;
        }
    }
    ctx->pc = 0x1D3D10u;
    // 0x1d3d10: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d3d14: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3D14u;
    {
        const bool branch_taken_0x1d3d14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D14u;
            // 0x1d3d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d14) {
            ctx->pc = 0x1D3D38u;
            goto label_1d3d38;
        }
    }
    ctx->pc = 0x1D3D1Cu;
    // 0x1d3d1c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3d20: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3d24: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3d24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3d28: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d3d2c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3d30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3D30u;
    {
        const bool branch_taken_0x1d3d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D30u;
            // 0x1d3d34: 0xae830118  sw          $v1, 0x118($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d30) {
            ctx->pc = 0x1D3D44u;
            goto label_1d3d44;
        }
    }
    ctx->pc = 0x1D3D38u;
label_1d3d38:
    // 0x1d3d38: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d3d3c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d40: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x1d3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
label_1d3d44:
    // 0x1d3d44: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3d44u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3d48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3d4c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3d4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3d54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3d54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3d58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3d58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3d5c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3d5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3d60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3d64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3d64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3d68: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3d6c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3d6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3d70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3d74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3d74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3d78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3D78u;
    {
        const bool branch_taken_0x1d3d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D78u;
            // 0x1d3d7c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d78) {
            ctx->pc = 0x1D3D8Cu;
            goto label_1d3d8c;
        }
    }
    ctx->pc = 0x1D3D80u;
label_1d3d80:
    // 0x1d3d80: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d3d80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d3d84: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x1d3d84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
    // 0x1d3d88: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d3d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d3d8c:
    // 0x1d3d8c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d3d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3d90: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3D90u;
    {
        const bool branch_taken_0x1d3d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D90u;
            // 0x1d3d94: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d90) {
            ctx->pc = 0x1D3E08u;
            goto label_1d3e08;
        }
    }
    ctx->pc = 0x1D3D98u;
    // 0x1d3d98: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d3d9c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3D9Cu;
    {
        const bool branch_taken_0x1d3d9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D9Cu;
            // 0x1d3da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d9c) {
            ctx->pc = 0x1D3DC0u;
            goto label_1d3dc0;
        }
    }
    ctx->pc = 0x1D3DA4u;
    // 0x1d3da4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3da8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3dac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3dacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3db0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3db4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3db4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3db8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3DB8u;
    {
        const bool branch_taken_0x1d3db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3DB8u;
            // 0x1d3dbc: 0xae83011c  sw          $v1, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3db8) {
            ctx->pc = 0x1D3DCCu;
            goto label_1d3dcc;
        }
    }
    ctx->pc = 0x1D3DC0u;
label_1d3dc0:
    // 0x1d3dc0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3dc4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dc8: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x1d3dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
label_1d3dcc:
    // 0x1d3dcc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3dd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3dd4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3dd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3ddc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3de0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3de0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3de4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3de4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3de8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3dec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3decu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3df0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3df0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3df4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3df4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3df8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3dfc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3e00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3E00u;
    {
        const bool branch_taken_0x1d3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E00u;
            // 0x1d3e04: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e00) {
            ctx->pc = 0x1D3E14u;
            goto label_1d3e14;
        }
    }
    ctx->pc = 0x1D3E08u;
label_1d3e08:
    // 0x1d3e08: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3e08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d3e0c: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x1d3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
    // 0x1d3e10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3e10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3e14:
    // 0x1d3e14: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d3e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3e18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3E18u;
    {
        const bool branch_taken_0x1d3e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E18u;
            // 0x1d3e1c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e18) {
            ctx->pc = 0x1D3E90u;
            goto label_1d3e90;
        }
    }
    ctx->pc = 0x1D3E20u;
    // 0x1d3e20: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d3e24: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3E24u;
    {
        const bool branch_taken_0x1d3e24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E24u;
            // 0x1d3e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e24) {
            ctx->pc = 0x1D3E48u;
            goto label_1d3e48;
        }
    }
    ctx->pc = 0x1D3E2Cu;
    // 0x1d3e2c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3e30: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3e34: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3e34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3e38: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3e3c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3E40u;
    {
        const bool branch_taken_0x1d3e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E40u;
            // 0x1d3e44: 0xae830120  sw          $v1, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e40) {
            ctx->pc = 0x1D3E54u;
            goto label_1d3e54;
        }
    }
    ctx->pc = 0x1D3E48u;
label_1d3e48:
    // 0x1d3e48: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3e4c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e50: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x1d3e50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
label_1d3e54:
    // 0x1d3e54: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3e54u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3e58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3e5c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3e5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3e64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3e68: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3e68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3e6c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3e6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3e70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3e74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3e74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3e78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3e78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3e7c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3e80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3e84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3e84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3e88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3E88u;
    {
        const bool branch_taken_0x1d3e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E88u;
            // 0x1d3e8c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e88) {
            ctx->pc = 0x1D3E9Cu;
            goto label_1d3e9c;
        }
    }
    ctx->pc = 0x1D3E90u;
label_1d3e90:
    // 0x1d3e90: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3e90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d3e94: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x1d3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x1d3e98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3e9c:
    // 0x1d3e9c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d3e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3ea0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3EA0u;
    {
        const bool branch_taken_0x1d3ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EA0u;
            // 0x1d3ea4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ea0) {
            ctx->pc = 0x1D3F18u;
            goto label_1d3f18;
        }
    }
    ctx->pc = 0x1D3EA8u;
    // 0x1d3ea8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d3eac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3EACu;
    {
        const bool branch_taken_0x1d3eac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EACu;
            // 0x1d3eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3eac) {
            ctx->pc = 0x1D3ED0u;
            goto label_1d3ed0;
        }
    }
    ctx->pc = 0x1D3EB4u;
    // 0x1d3eb4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3eb8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3ebc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3ebcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3ec0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3ec4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3ec8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3EC8u;
    {
        const bool branch_taken_0x1d3ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EC8u;
            // 0x1d3ecc: 0xae830124  sw          $v1, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ec8) {
            ctx->pc = 0x1D3EDCu;
            goto label_1d3edc;
        }
    }
    ctx->pc = 0x1D3ED0u;
label_1d3ed0:
    // 0x1d3ed0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3ed4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ed8: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x1d3ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_1d3edc:
    // 0x1d3edc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3edcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3ee4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3ee4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3eec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3ef0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3ef0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ef4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3ef4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3ef8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3efc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3efcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3f00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3f00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3f04: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3f04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3f08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3f0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3f10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3F10u;
    {
        const bool branch_taken_0x1d3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F10u;
            // 0x1d3f14: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f10) {
            ctx->pc = 0x1D3F24u;
            goto label_1d3f24;
        }
    }
    ctx->pc = 0x1D3F18u;
label_1d3f18:
    // 0x1d3f18: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d3f1c: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x1d3f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x1d3f20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3f24:
    // 0x1d3f24: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d3f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3f28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3F28u;
    {
        const bool branch_taken_0x1d3f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F28u;
            // 0x1d3f2c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f28) {
            ctx->pc = 0x1D3FA0u;
            goto label_1d3fa0;
        }
    }
    ctx->pc = 0x1D3F30u;
    // 0x1d3f30: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d3f34: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3F34u;
    {
        const bool branch_taken_0x1d3f34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F34u;
            // 0x1d3f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f34) {
            ctx->pc = 0x1D3F58u;
            goto label_1d3f58;
        }
    }
    ctx->pc = 0x1D3F3Cu;
    // 0x1d3f3c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3f40: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3f44: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3f44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3f48: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3f4c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3f50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3F50u;
    {
        const bool branch_taken_0x1d3f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F50u;
            // 0x1d3f54: 0xae830128  sw          $v1, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f50) {
            ctx->pc = 0x1D3F64u;
            goto label_1d3f64;
        }
    }
    ctx->pc = 0x1D3F58u;
label_1d3f58:
    // 0x1d3f58: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3f5c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f60: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x1d3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
label_1d3f64:
    // 0x1d3f64: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3f6c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3f6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3f70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3f74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3f74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3f78: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d3f78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3f7c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d3f7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d3f80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3f84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3f88: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3f8c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d3f8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d3f90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3f94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d3f98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3F98u;
    {
        const bool branch_taken_0x1d3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3F98u;
            // 0x1d3f9c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f98) {
            ctx->pc = 0x1D3FACu;
            goto label_1d3fac;
        }
    }
    ctx->pc = 0x1D3FA0u;
label_1d3fa0:
    // 0x1d3fa0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d3fa4: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x1d3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
    // 0x1d3fa8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d3fac:
    // 0x1d3fac: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d3facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d3fb0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3FB0u;
    {
        const bool branch_taken_0x1d3fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FB0u;
            // 0x1d3fb4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fb0) {
            ctx->pc = 0x1D4028u;
            goto label_1d4028;
        }
    }
    ctx->pc = 0x1D3FB8u;
    // 0x1d3fb8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d3fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d3fbc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3FBCu;
    {
        const bool branch_taken_0x1d3fbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FBCu;
            // 0x1d3fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fbc) {
            ctx->pc = 0x1D3FE0u;
            goto label_1d3fe0;
        }
    }
    ctx->pc = 0x1D3FC4u;
    // 0x1d3fc4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3fc8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d3fcc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d3fccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d3fd0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3fd4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d3fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d3fd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3FD8u;
    {
        const bool branch_taken_0x1d3fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FD8u;
            // 0x1d3fdc: 0xae83012c  sw          $v1, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fd8) {
            ctx->pc = 0x1D3FECu;
            goto label_1d3fec;
        }
    }
    ctx->pc = 0x1D3FE0u;
label_1d3fe0:
    // 0x1d3fe0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d3fe4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d3fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3fe8: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x1d3fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
label_1d3fec:
    // 0x1d3fec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d3fecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3ff4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d3ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d3ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d3ffc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d3ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4000: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4000u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4004: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4004u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4008: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d400c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d400cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4010: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4014: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4018: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d401c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d401cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4020: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4020u;
    {
        const bool branch_taken_0x1d4020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4020u;
            // 0x1d4024: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4020) {
            ctx->pc = 0x1D4034u;
            goto label_1d4034;
        }
    }
    ctx->pc = 0x1D4028u;
label_1d4028:
    // 0x1d4028: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4028u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d402c: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x1d402cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
    // 0x1d4030: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d4034:
    // 0x1d4034: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d4034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4038: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4038u;
    {
        const bool branch_taken_0x1d4038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4038u;
            // 0x1d403c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4038) {
            ctx->pc = 0x1D40B0u;
            goto label_1d40b0;
        }
    }
    ctx->pc = 0x1D4040u;
    // 0x1d4040: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d4044: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4044u;
    {
        const bool branch_taken_0x1d4044 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4044u;
            // 0x1d4048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4044) {
            ctx->pc = 0x1D4068u;
            goto label_1d4068;
        }
    }
    ctx->pc = 0x1D404Cu;
    // 0x1d404c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d404cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4050: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4054: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4054u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4058: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4058u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d405c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d405cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4060u;
    {
        const bool branch_taken_0x1d4060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4060u;
            // 0x1d4064: 0xae830130  sw          $v1, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4060) {
            ctx->pc = 0x1D4074u;
            goto label_1d4074;
        }
    }
    ctx->pc = 0x1D4068u;
label_1d4068:
    // 0x1d4068: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d406c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d406cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4070: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x1d4070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_1d4074:
    // 0x1d4074: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d4074u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4078: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d407c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d407cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4080: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4084: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4084u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4088: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d408c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d408cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4090: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4094: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4094u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4098: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4098u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d409c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d409cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d40a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d40a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d40a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d40a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d40a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D40A8u;
    {
        const bool branch_taken_0x1d40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40A8u;
            // 0x1d40ac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40a8) {
            ctx->pc = 0x1D40BCu;
            goto label_1d40bc;
        }
    }
    ctx->pc = 0x1D40B0u;
label_1d40b0:
    // 0x1d40b0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d40b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d40b4: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x1d40b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
    // 0x1d40b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d40b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d40bc:
    // 0x1d40bc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d40bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d40c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D40C0u;
    {
        const bool branch_taken_0x1d40c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D40C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40C0u;
            // 0x1d40c4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40c0) {
            ctx->pc = 0x1D4138u;
            goto label_1d4138;
        }
    }
    ctx->pc = 0x1D40C8u;
    // 0x1d40c8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d40c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d40cc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D40CCu;
    {
        const bool branch_taken_0x1d40cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40CCu;
            // 0x1d40d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40cc) {
            ctx->pc = 0x1D40F0u;
            goto label_1d40f0;
        }
    }
    ctx->pc = 0x1D40D4u;
    // 0x1d40d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d40d8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d40dc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d40dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d40e0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d40e4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d40e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d40e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D40E8u;
    {
        const bool branch_taken_0x1d40e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40E8u;
            // 0x1d40ec: 0xae830134  sw          $v1, 0x134($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40e8) {
            ctx->pc = 0x1D40FCu;
            goto label_1d40fc;
        }
    }
    ctx->pc = 0x1D40F0u;
label_1d40f0:
    // 0x1d40f0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d40f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d40f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40f8: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x1d40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_1d40fc:
    // 0x1d40fc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d40fcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4100: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4104: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4104u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d410c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d410cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4110: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4114: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d411c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d411cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4120: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4124: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4124u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4128: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d412c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d412cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4130: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4130u;
    {
        const bool branch_taken_0x1d4130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4130u;
            // 0x1d4134: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4130) {
            ctx->pc = 0x1D4144u;
            goto label_1d4144;
        }
    }
    ctx->pc = 0x1D4138u;
label_1d4138:
    // 0x1d4138: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4138u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d413c: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x1d413cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
    // 0x1d4140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d4144:
    // 0x1d4144: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d4144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4148: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4148u;
    {
        const bool branch_taken_0x1d4148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4148u;
            // 0x1d414c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4148) {
            ctx->pc = 0x1D41C0u;
            goto label_1d41c0;
        }
    }
    ctx->pc = 0x1D4150u;
    // 0x1d4150: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d4154: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4154u;
    {
        const bool branch_taken_0x1d4154 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4154u;
            // 0x1d4158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4154) {
            ctx->pc = 0x1D4178u;
            goto label_1d4178;
        }
    }
    ctx->pc = 0x1D415Cu;
    // 0x1d415c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d415cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4160: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4164: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4164u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4168: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d416c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d416cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4170: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4170u;
    {
        const bool branch_taken_0x1d4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4170u;
            // 0x1d4174: 0xae830138  sw          $v1, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4170) {
            ctx->pc = 0x1D4184u;
            goto label_1d4184;
        }
    }
    ctx->pc = 0x1D4178u;
label_1d4178:
    // 0x1d4178: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4178u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d417c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d417cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4180: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x1d4180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
label_1d4184:
    // 0x1d4184: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d4184u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4188: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d418c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d418cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4194: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4198: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4198u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d419c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d419cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d41a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d41a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d41a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d41a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d41a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d41ac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d41acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d41b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d41b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d41b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d41b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d41b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D41B8u;
    {
        const bool branch_taken_0x1d41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41B8u;
            // 0x1d41bc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41b8) {
            ctx->pc = 0x1D41CCu;
            goto label_1d41cc;
        }
    }
    ctx->pc = 0x1D41C0u;
label_1d41c0:
    // 0x1d41c0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d41c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d41c4: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x1d41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
    // 0x1d41c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d41c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d41cc:
    // 0x1d41cc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d41ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d41d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D41D0u;
    {
        const bool branch_taken_0x1d41d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D41D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41D0u;
            // 0x1d41d4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41d0) {
            ctx->pc = 0x1D4248u;
            goto label_1d4248;
        }
    }
    ctx->pc = 0x1D41D8u;
    // 0x1d41d8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d41d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d41dc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D41DCu;
    {
        const bool branch_taken_0x1d41dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41DCu;
            // 0x1d41e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41dc) {
            ctx->pc = 0x1D4200u;
            goto label_1d4200;
        }
    }
    ctx->pc = 0x1D41E4u;
    // 0x1d41e4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d41e8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d41ec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d41ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d41f0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d41f4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d41f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d41f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D41F8u;
    {
        const bool branch_taken_0x1d41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41F8u;
            // 0x1d41fc: 0xae83013c  sw          $v1, 0x13C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41f8) {
            ctx->pc = 0x1D420Cu;
            goto label_1d420c;
        }
    }
    ctx->pc = 0x1D4200u;
label_1d4200:
    // 0x1d4200: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4204: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d4204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4208: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x1d4208u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
label_1d420c:
    // 0x1d420c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d420cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4210: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4214: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4214u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d421c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d421cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4220: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4220u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4224: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4228: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d422c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d422cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4230: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4230u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4234: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4238: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d423c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d423cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4240: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4240u;
    {
        const bool branch_taken_0x1d4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4240u;
            // 0x1d4244: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4240) {
            ctx->pc = 0x1D4254u;
            goto label_1d4254;
        }
    }
    ctx->pc = 0x1D4248u;
label_1d4248:
    // 0x1d4248: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4248u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d424c: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x1d424cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
    // 0x1d4250: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d4254:
    // 0x1d4254: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d4254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4258: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4258u;
    {
        const bool branch_taken_0x1d4258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D425Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4258u;
            // 0x1d425c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4258) {
            ctx->pc = 0x1D42D0u;
            goto label_1d42d0;
        }
    }
    ctx->pc = 0x1D4260u;
    // 0x1d4260: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d4264: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4264u;
    {
        const bool branch_taken_0x1d4264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4264u;
            // 0x1d4268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4264) {
            ctx->pc = 0x1D4288u;
            goto label_1d4288;
        }
    }
    ctx->pc = 0x1D426Cu;
    // 0x1d426c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d426cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4270: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4274: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4274u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4278: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d427c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d427cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4280u;
    {
        const bool branch_taken_0x1d4280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4280u;
            // 0x1d4284: 0xae830140  sw          $v1, 0x140($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4280) {
            ctx->pc = 0x1D4294u;
            goto label_1d4294;
        }
    }
    ctx->pc = 0x1D4288u;
label_1d4288:
    // 0x1d4288: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d428c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d428cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4290: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x1d4290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
label_1d4294:
    // 0x1d4294: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d4294u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d429c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d429cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d42a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d42a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d42a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d42a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d42a8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d42a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d42ac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d42acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d42b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d42b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d42b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d42b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d42b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d42b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d42bc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d42bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d42c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d42c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d42c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D42C8u;
    {
        const bool branch_taken_0x1d42c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42C8u;
            // 0x1d42cc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42c8) {
            ctx->pc = 0x1D42DCu;
            goto label_1d42dc;
        }
    }
    ctx->pc = 0x1D42D0u;
label_1d42d0:
    // 0x1d42d0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d42d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d42d4: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x1d42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
    // 0x1d42d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d42d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d42dc:
    // 0x1d42dc: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x1d42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x1d42e0: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1D42E0u;
    {
        const bool branch_taken_0x1d42e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42E0u;
            // 0x1d42e4: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42e0) {
            ctx->pc = 0x1D4550u;
            goto label_1d4550;
        }
    }
    ctx->pc = 0x1D42E8u;
    // 0x1d42e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D42E8u;
    {
        const bool branch_taken_0x1d42e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D42ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42E8u;
            // 0x1d42ec: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42e8) {
            ctx->pc = 0x1D4360u;
            goto label_1d4360;
        }
    }
    ctx->pc = 0x1D42F0u;
    // 0x1d42f0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d42f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d42f4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D42F4u;
    {
        const bool branch_taken_0x1d42f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42F4u;
            // 0x1d42f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42f4) {
            ctx->pc = 0x1D4318u;
            goto label_1d4318;
        }
    }
    ctx->pc = 0x1D42FCu;
    // 0x1d42fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4300: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4304: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4304u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4308: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4308u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d430c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d430cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4310u;
    {
        const bool branch_taken_0x1d4310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4310u;
            // 0x1d4314: 0xae830144  sw          $v1, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4310) {
            ctx->pc = 0x1D4324u;
            goto label_1d4324;
        }
    }
    ctx->pc = 0x1D4318u;
label_1d4318:
    // 0x1d4318: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d431c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d431cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4320: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x1d4320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
label_1d4324:
    // 0x1d4324: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d4324u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4328: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d432c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d432cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4334: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4334u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4338: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d433c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d433cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4340: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4344: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4348: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d434c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d434cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4350: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4354: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4358: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4358u;
    {
        const bool branch_taken_0x1d4358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4358u;
            // 0x1d435c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4358) {
            ctx->pc = 0x1D436Cu;
            goto label_1d436c;
        }
    }
    ctx->pc = 0x1D4360u;
label_1d4360:
    // 0x1d4360: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4360u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4364: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x1d4364u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
    // 0x1d4368: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d436c:
    // 0x1d436c: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1d436cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d4370: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4370u;
    {
        const bool branch_taken_0x1d4370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4370u;
            // 0x1d4374: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4370) {
            ctx->pc = 0x1D43E8u;
            goto label_1d43e8;
        }
    }
    ctx->pc = 0x1D4378u;
    // 0x1d4378: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1d4378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1d437c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D437Cu;
    {
        const bool branch_taken_0x1d437c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D437Cu;
            // 0x1d4380: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d437c) {
            ctx->pc = 0x1D43A0u;
            goto label_1d43a0;
        }
    }
    ctx->pc = 0x1D4384u;
    // 0x1d4384: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4388: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4388u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d438c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d438cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4390: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1d4390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d4394: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d4394u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4398u;
    {
        const bool branch_taken_0x1d4398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4398u;
            // 0x1d439c: 0xae830148  sw          $v1, 0x148($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4398) {
            ctx->pc = 0x1D43ACu;
            goto label_1d43ac;
        }
    }
    ctx->pc = 0x1D43A0u;
label_1d43a0:
    // 0x1d43a0: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1d43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1d43a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d43a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43a8: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x1d43a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
label_1d43ac:
    // 0x1d43ac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d43acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d43b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d43b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d43b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d43b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d43b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d43bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d43c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d43c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d43c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d43c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d43c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d43c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d43cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d43ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d43d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d43d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d43d4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d43d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d43d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d43d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d43dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d43dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d43e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D43E0u;
    {
        const bool branch_taken_0x1d43e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D43E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43E0u;
            // 0x1d43e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43e0) {
            ctx->pc = 0x1D43F4u;
            goto label_1d43f4;
        }
    }
    ctx->pc = 0x1D43E8u;
label_1d43e8:
    // 0x1d43e8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d43ec: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x1d43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
    // 0x1d43f0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1d43f4:
    // 0x1d43f4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d43f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d43f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D43F8u;
    {
        const bool branch_taken_0x1d43f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D43FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43F8u;
            // 0x1d43fc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43f8) {
            ctx->pc = 0x1D4470u;
            goto label_1d4470;
        }
    }
    ctx->pc = 0x1D4400u;
    // 0x1d4400: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d4404: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4404u;
    {
        const bool branch_taken_0x1d4404 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4404u;
            // 0x1d4408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4404) {
            ctx->pc = 0x1D4428u;
            goto label_1d4428;
        }
    }
    ctx->pc = 0x1D440Cu;
    // 0x1d440c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4410: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4414: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4414u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4418: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4418u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d441c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d441cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4420u;
    {
        const bool branch_taken_0x1d4420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4420u;
            // 0x1d4424: 0xae83014c  sw          $v1, 0x14C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4420) {
            ctx->pc = 0x1D4434u;
            goto label_1d4434;
        }
    }
    ctx->pc = 0x1D4428u;
label_1d4428:
    // 0x1d4428: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d442c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d442cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4430: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x1d4430u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
label_1d4434:
    // 0x1d4434: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d4434u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4438: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d443c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d443cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4444: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4444u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4448: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4448u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d444c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d444cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4450: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4454: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4458: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4458u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d445c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d445cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4464: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4464u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4468u;
    {
        const bool branch_taken_0x1d4468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4468u;
            // 0x1d446c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4468) {
            ctx->pc = 0x1D447Cu;
            goto label_1d447c;
        }
    }
    ctx->pc = 0x1D4470u;
label_1d4470:
    // 0x1d4470: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4470u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4474: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x1d4474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x1d4478: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d447c:
    // 0x1d447c: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x1d447cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x1d4480: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4480u;
    {
        const bool branch_taken_0x1d4480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4480u;
            // 0x1d4484: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4480) {
            ctx->pc = 0x1D44F8u;
            goto label_1d44f8;
        }
    }
    ctx->pc = 0x1D4488u;
    // 0x1d4488: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x1d448c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D448Cu;
    {
        const bool branch_taken_0x1d448c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D448Cu;
            // 0x1d4490: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d448c) {
            ctx->pc = 0x1D44B0u;
            goto label_1d44b0;
        }
    }
    ctx->pc = 0x1D4494u;
    // 0x1d4494: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4498: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d449c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d449cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d44a0: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x1d44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1d44a4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d44a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D44A8u;
    {
        const bool branch_taken_0x1d44a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44A8u;
            // 0x1d44ac: 0xae830150  sw          $v1, 0x150($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44a8) {
            ctx->pc = 0x1D44BCu;
            goto label_1d44bc;
        }
    }
    ctx->pc = 0x1D44B0u;
label_1d44b0:
    // 0x1d44b0: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x1d44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1d44b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d44b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44b8: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x1d44b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
label_1d44bc:
    // 0x1d44bc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d44c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d44c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d44c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d44c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d44c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d44cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d44ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d44d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d44d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d44d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d44d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d44d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d44d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d44dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d44dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d44e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d44e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d44e4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d44e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d44e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d44e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d44ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d44ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d44f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D44F0u;
    {
        const bool branch_taken_0x1d44f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44F0u;
            // 0x1d44f4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44f0) {
            ctx->pc = 0x1D4504u;
            goto label_1d4504;
        }
    }
    ctx->pc = 0x1D44F8u;
label_1d44f8:
    // 0x1d44f8: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1d44fc: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x1d44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
    // 0x1d4500: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_1d4504:
    // 0x1d4504: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1d4504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d4508: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4508u;
    {
        const bool branch_taken_0x1d4508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4508u;
            // 0x1d450c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4508) {
            ctx->pc = 0x1D4548u;
            goto label_1d4548;
        }
    }
    ctx->pc = 0x1D4510u;
    // 0x1d4510: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1d4514: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4514u;
    {
        const bool branch_taken_0x1d4514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4514u;
            // 0x1d4518: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4514) {
            ctx->pc = 0x1D4538u;
            goto label_1d4538;
        }
    }
    ctx->pc = 0x1D451Cu;
    // 0x1d451c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d451cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4520: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4524: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4524u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4528: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1d4528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d452c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D452Cu;
    {
        const bool branch_taken_0x1d452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D452Cu;
            // 0x1d4530: 0xae830154  sw          $v1, 0x154($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d452c) {
            ctx->pc = 0x1D4540u;
            goto label_1d4540;
        }
    }
    ctx->pc = 0x1D4534u;
    // 0x1d4534: 0x0  nop
    ctx->pc = 0x1d4534u;
    // NOP
label_1d4538:
    // 0x1d4538: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1d453c: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x1d453cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_1d4540:
    // 0x1d4540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4540u;
    {
        const bool branch_taken_0x1d4540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4540u;
            // 0x1d4544: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4540) {
            ctx->pc = 0x1D4550u;
            goto label_1d4550;
        }
    }
    ctx->pc = 0x1D4548u;
label_1d4548:
    // 0x1d4548: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d4548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d454c: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x1d454cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_1d4550:
    // 0x1d4550: 0xc074370  jal         func_1D0DC0
    ctx->pc = 0x1D4550u;
    SET_GPR_U32(ctx, 31, 0x1D4558u);
    ctx->pc = 0x1D4554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4550u;
            // 0x1d4554: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DC0u;
    if (runtime->hasFunction(0x1D0DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4558u; }
        if (ctx->pc != 0x1D4558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0DC0_0x1d0dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4558u; }
        if (ctx->pc != 0x1D4558u) { return; }
    }
    ctx->pc = 0x1D4558u;
label_1d4558:
    // 0x1d4558: 0xc0743b0  jal         func_1D0EC0
    ctx->pc = 0x1D4558u;
    SET_GPR_U32(ctx, 31, 0x1D4560u);
    ctx->pc = 0x1D455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4558u;
            // 0x1d455c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EC0u;
    if (runtime->hasFunction(0x1D0EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D0EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4560u; }
        if (ctx->pc != 0x1D4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0EC0_0x1d0ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4560u; }
        if (ctx->pc != 0x1D4560u) { return; }
    }
    ctx->pc = 0x1D4560u;
label_1d4560:
    // 0x1d4560: 0x8e8203c4  lw          $v0, 0x3C4($s4)
    ctx->pc = 0x1d4560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
    // 0x1d4564: 0x50400189  beql        $v0, $zero, . + 4 + (0x189 << 2)
    ctx->pc = 0x1D4564u;
    {
        const bool branch_taken_0x1d4564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4564) {
            ctx->pc = 0x1D4568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4564u;
            // 0x1d4568: 0xaea00170  sw          $zero, 0x170($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D456Cu;
    // 0x1d456c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x1D456Cu;
    {
        const bool branch_taken_0x1d456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D456Cu;
            // 0x1d4570: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d456c) {
            ctx->pc = 0x1D4B90u;
            goto label_1d4b90;
        }
    }
    ctx->pc = 0x1D4574u;
    // 0x1d4574: 0x0  nop
    ctx->pc = 0x1d4574u;
    // NOP
label_1d4578:
    // 0x1d4578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d457c: 0x2a630016  slti        $v1, $s3, 0x16
    ctx->pc = 0x1d457cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d4580: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4580u;
    {
        const bool branch_taken_0x1d4580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4580u;
            // 0x1d4584: 0xae820314  sw          $v0, 0x314($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4580) {
            ctx->pc = 0x1D45F8u;
            goto label_1d45f8;
        }
    }
    ctx->pc = 0x1D4588u;
    // 0x1d4588: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x1d4588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x1d458c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D458Cu;
    {
        const bool branch_taken_0x1d458c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D458Cu;
            // 0x1d4590: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d458c) {
            ctx->pc = 0x1D45B0u;
            goto label_1d45b0;
        }
    }
    ctx->pc = 0x1D4594u;
    // 0x1d4594: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4598: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4598u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d459c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d459cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d45a0: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1d45a4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d45a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d45a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D45A8u;
    {
        const bool branch_taken_0x1d45a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45A8u;
            // 0x1d45ac: 0xae830184  sw          $v1, 0x184($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45a8) {
            ctx->pc = 0x1D45BCu;
            goto label_1d45bc;
        }
    }
    ctx->pc = 0x1D45B0u;
label_1d45b0:
    // 0x1d45b0: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1d45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1d45b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d45b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45b8: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x1d45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
label_1d45bc:
    // 0x1d45bc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d45bcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d45c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d45c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d45c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d45c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d45c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d45cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d45ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d45d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d45d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d45d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d45d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d45d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d45dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d45dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d45e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d45e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d45e4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d45e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d45e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d45e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d45ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d45ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d45f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D45F0u;
    {
        const bool branch_taken_0x1d45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45F0u;
            // 0x1d45f4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45f0) {
            ctx->pc = 0x1D4608u;
            goto label_1d4608;
        }
    }
    ctx->pc = 0x1D45F8u;
label_1d45f8:
    // 0x1d45f8: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1d45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1d45fc: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x1d45fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1d4600: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x1d4600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
    // 0x1d4604: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x1d4604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_1d4608:
    // 0x1d4608: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d4608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d460c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D460Cu;
    {
        const bool branch_taken_0x1d460c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D460Cu;
            // 0x1d4610: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d460c) {
            ctx->pc = 0x1D4688u;
            goto label_1d4688;
        }
    }
    ctx->pc = 0x1D4614u;
    // 0x1d4614: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d4618: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4618u;
    {
        const bool branch_taken_0x1d4618 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4618u;
            // 0x1d461c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4618) {
            ctx->pc = 0x1D4640u;
            goto label_1d4640;
        }
    }
    ctx->pc = 0x1D4620u;
    // 0x1d4620: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4624: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4628: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4628u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d462c: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4630: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4634: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4634u;
    {
        const bool branch_taken_0x1d4634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4634u;
            // 0x1d4638: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4634) {
            ctx->pc = 0x1D464Cu;
            goto label_1d464c;
        }
    }
    ctx->pc = 0x1D463Cu;
    // 0x1d463c: 0x0  nop
    ctx->pc = 0x1d463cu;
    // NOP
label_1d4640:
    // 0x1d4640: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4644: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d4644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4648: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d4648u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d464c:
    // 0x1d464c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4650: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4654: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d465c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4660: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4664: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d466c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4670: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4674: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d467c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d467cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4680: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4680u;
    {
        const bool branch_taken_0x1d4680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4680u;
            // 0x1d4684: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4680) {
            ctx->pc = 0x1D4694u;
            goto label_1d4694;
        }
    }
    ctx->pc = 0x1D4688u;
label_1d4688:
    // 0x1d4688: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d468c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d468cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d4690: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d4694:
    // 0x1d4694: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x1d4694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d4698: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4698u;
    {
        const bool branch_taken_0x1d4698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4698u;
            // 0x1d469c: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4698) {
            ctx->pc = 0x1D4710u;
            goto label_1d4710;
        }
    }
    ctx->pc = 0x1D46A0u;
    // 0x1d46a0: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x1d46a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D46A4u;
    {
        const bool branch_taken_0x1d46a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46A4u;
            // 0x1d46a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46a4) {
            ctx->pc = 0x1D46C8u;
            goto label_1d46c8;
        }
    }
    ctx->pc = 0x1D46ACu;
    // 0x1d46ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d46acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d46b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d46b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d46b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d46b8: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x1d46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1d46bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d46bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d46c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D46C0u;
    {
        const bool branch_taken_0x1d46c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46C0u;
            // 0x1d46c4: 0xae830188  sw          $v1, 0x188($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46c0) {
            ctx->pc = 0x1D46D4u;
            goto label_1d46d4;
        }
    }
    ctx->pc = 0x1D46C8u;
label_1d46c8:
    // 0x1d46c8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1d46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1d46cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d46ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46d0: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x1d46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
label_1d46d4:
    // 0x1d46d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d46d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d46d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d46d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d46dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d46dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d46e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d46e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d46e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d46e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d46e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d46e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d46ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d46ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d46f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d46f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d46f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d46f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d46f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d46fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d46fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4700: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4704: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4704u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4708u;
    {
        const bool branch_taken_0x1d4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4708u;
            // 0x1d470c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4708) {
            ctx->pc = 0x1D471Cu;
            goto label_1d471c;
        }
    }
    ctx->pc = 0x1D4710u;
label_1d4710:
    // 0x1d4710: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x1d4710u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x1d4714: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x1d4714u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x1d4718: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x1d4718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_1d471c:
    // 0x1d471c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d471cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4720: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4720u;
    {
        const bool branch_taken_0x1d4720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4720u;
            // 0x1d4724: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4720) {
            ctx->pc = 0x1D4798u;
            goto label_1d4798;
        }
    }
    ctx->pc = 0x1D4728u;
    // 0x1d4728: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d472c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D472Cu;
    {
        const bool branch_taken_0x1d472c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D472Cu;
            // 0x1d4730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d472c) {
            ctx->pc = 0x1D4750u;
            goto label_1d4750;
        }
    }
    ctx->pc = 0x1D4734u;
    // 0x1d4734: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4738: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4738u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d473c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d473cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4740: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4744: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4748: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4748u;
    {
        const bool branch_taken_0x1d4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4748u;
            // 0x1d474c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4748) {
            ctx->pc = 0x1D475Cu;
            goto label_1d475c;
        }
    }
    ctx->pc = 0x1D4750u;
label_1d4750:
    // 0x1d4750: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4754: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d4754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4758: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d4758u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d475c:
    // 0x1d475c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d475cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4764: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4764u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d476c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d476cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4770: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4774: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d477c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d477cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4780: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4784: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4784u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d478c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d478cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4790u;
    {
        const bool branch_taken_0x1d4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4790u;
            // 0x1d4794: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4790) {
            ctx->pc = 0x1D47A4u;
            goto label_1d47a4;
        }
    }
    ctx->pc = 0x1D4798u;
label_1d4798:
    // 0x1d4798: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4798u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d479c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d479cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d47a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d47a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d47a4:
    // 0x1d47a4: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x1d47a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d47a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D47A8u;
    {
        const bool branch_taken_0x1d47a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D47ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47A8u;
            // 0x1d47ac: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a8) {
            ctx->pc = 0x1D4820u;
            goto label_1d4820;
        }
    }
    ctx->pc = 0x1D47B0u;
    // 0x1d47b0: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x1d47b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x1d47b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D47B4u;
    {
        const bool branch_taken_0x1d47b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47B4u;
            // 0x1d47b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b4) {
            ctx->pc = 0x1D47D8u;
            goto label_1d47d8;
        }
    }
    ctx->pc = 0x1D47BCu;
    // 0x1d47bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d47bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d47c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d47c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d47c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d47c8: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x1d47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1d47cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d47ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d47d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47D0u;
    {
        const bool branch_taken_0x1d47d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47D0u;
            // 0x1d47d4: 0xae83018c  sw          $v1, 0x18C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d0) {
            ctx->pc = 0x1D47E4u;
            goto label_1d47e4;
        }
    }
    ctx->pc = 0x1D47D8u;
label_1d47d8:
    // 0x1d47d8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1d47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1d47dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d47dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47e0: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x1d47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
label_1d47e4:
    // 0x1d47e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d47e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d47e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d47e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d47ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d47ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d47f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d47f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d47f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d47f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d47f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d47f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d47fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d47fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4804: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4808: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d480c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d480cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4814: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4818u;
    {
        const bool branch_taken_0x1d4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4818u;
            // 0x1d481c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4818) {
            ctx->pc = 0x1D482Cu;
            goto label_1d482c;
        }
    }
    ctx->pc = 0x1D4820u;
label_1d4820:
    // 0x1d4820: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x1d4820u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x1d4824: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x1d4824u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
    // 0x1d4828: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x1d4828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_1d482c:
    // 0x1d482c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d482cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d4830: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4830u;
    {
        const bool branch_taken_0x1d4830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4830u;
            // 0x1d4834: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4830) {
            ctx->pc = 0x1D48A8u;
            goto label_1d48a8;
        }
    }
    ctx->pc = 0x1D4838u;
    // 0x1d4838: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d483c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D483Cu;
    {
        const bool branch_taken_0x1d483c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D483Cu;
            // 0x1d4840: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d483c) {
            ctx->pc = 0x1D4860u;
            goto label_1d4860;
        }
    }
    ctx->pc = 0x1D4844u;
    // 0x1d4844: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4848: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d484c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d484cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4850: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d4854: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4858: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4858u;
    {
        const bool branch_taken_0x1d4858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4858u;
            // 0x1d485c: 0xae830190  sw          $v1, 0x190($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4858) {
            ctx->pc = 0x1D486Cu;
            goto label_1d486c;
        }
    }
    ctx->pc = 0x1D4860u;
label_1d4860:
    // 0x1d4860: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d4860u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d4864: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d4864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4868: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x1d4868u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
label_1d486c:
    // 0x1d486c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d486cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4874: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4874u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d487c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d487cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4880: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4880u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4884: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4884u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d488c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d488cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4890: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4894: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4894u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4898: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d489c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d48a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D48A0u;
    {
        const bool branch_taken_0x1d48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48A0u;
            // 0x1d48a4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48a0) {
            ctx->pc = 0x1D48B4u;
            goto label_1d48b4;
        }
    }
    ctx->pc = 0x1D48A8u;
label_1d48a8:
    // 0x1d48a8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d48a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d48ac: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x1d48acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
    // 0x1d48b0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d48b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d48b4:
    // 0x1d48b4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d48b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d48b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D48B8u;
    {
        const bool branch_taken_0x1d48b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48B8u;
            // 0x1d48bc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48b8) {
            ctx->pc = 0x1D4930u;
            goto label_1d4930;
        }
    }
    ctx->pc = 0x1D48C0u;
    // 0x1d48c0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d48c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d48c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D48C4u;
    {
        const bool branch_taken_0x1d48c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48C4u;
            // 0x1d48c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48c4) {
            ctx->pc = 0x1D48E8u;
            goto label_1d48e8;
        }
    }
    ctx->pc = 0x1D48CCu;
    // 0x1d48cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d48d0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d48d4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d48d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d48d8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d48dc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d48dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d48e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D48E0u;
    {
        const bool branch_taken_0x1d48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48E0u;
            // 0x1d48e4: 0xae830194  sw          $v1, 0x194($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48e0) {
            ctx->pc = 0x1D48F4u;
            goto label_1d48f4;
        }
    }
    ctx->pc = 0x1D48E8u;
label_1d48e8:
    // 0x1d48e8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d48ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d48ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48f0: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x1d48f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
label_1d48f4:
    // 0x1d48f4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d48f4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d48f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d48f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d48fc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d48fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4904: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4904u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4908: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4908u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d490c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d490cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4914: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4914u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4918: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d491c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d491cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4924: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4924u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4928: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4928u;
    {
        const bool branch_taken_0x1d4928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4928u;
            // 0x1d492c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4928) {
            ctx->pc = 0x1D493Cu;
            goto label_1d493c;
        }
    }
    ctx->pc = 0x1D4930u;
label_1d4930:
    // 0x1d4930: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4934: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x1d4934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
    // 0x1d4938: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d493c:
    // 0x1d493c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d493cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4940: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4940u;
    {
        const bool branch_taken_0x1d4940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4940u;
            // 0x1d4944: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4940) {
            ctx->pc = 0x1D4980u;
            goto label_1d4980;
        }
    }
    ctx->pc = 0x1D4948u;
    // 0x1d4948: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d494c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D494Cu;
    {
        const bool branch_taken_0x1d494c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D494Cu;
            // 0x1d4950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d494c) {
            ctx->pc = 0x1D4970u;
            goto label_1d4970;
        }
    }
    ctx->pc = 0x1D4954u;
    // 0x1d4954: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4958: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4958u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d495c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d495cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4960: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4960u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4964: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1D4964u;
    {
        const bool branch_taken_0x1d4964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4964u;
            // 0x1d4968: 0xae830198  sw          $v1, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4964) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D496Cu;
    // 0x1d496c: 0x0  nop
    ctx->pc = 0x1d496cu;
    // NOP
label_1d4970:
    // 0x1d4970: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4974: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1D4974u;
    {
        const bool branch_taken_0x1d4974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4974u;
            // 0x1d4978: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4974) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D497Cu;
    // 0x1d497c: 0x0  nop
    ctx->pc = 0x1d497cu;
    // NOP
label_1d4980:
    // 0x1d4980: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d4984: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1D4984u;
    {
        const bool branch_taken_0x1d4984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4984u;
            // 0x1d4988: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4984) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D498Cu;
    // 0x1d498c: 0x0  nop
    ctx->pc = 0x1d498cu;
    // NOP
label_1d4990:
    // 0x1d4990: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1d4990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1d4994: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D4994u;
    {
        const bool branch_taken_0x1d4994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4994u;
            // 0x1d4998: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4994) {
            ctx->pc = 0x1D4A10u;
            goto label_1d4a10;
        }
    }
    ctx->pc = 0x1D499Cu;
    // 0x1d499c: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1d499cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1d49a0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D49A0u;
    {
        const bool branch_taken_0x1d49a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49A0u;
            // 0x1d49a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49a0) {
            ctx->pc = 0x1D49C8u;
            goto label_1d49c8;
        }
    }
    ctx->pc = 0x1D49A8u;
    // 0x1d49a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d49ac: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d49acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d49b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d49b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d49b4: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1d49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d49b8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d49b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d49bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D49BCu;
    {
        const bool branch_taken_0x1d49bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49BCu;
            // 0x1d49c0: 0xae830178  sw          $v1, 0x178($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49bc) {
            ctx->pc = 0x1D49D4u;
            goto label_1d49d4;
        }
    }
    ctx->pc = 0x1D49C4u;
    // 0x1d49c4: 0x0  nop
    ctx->pc = 0x1d49c4u;
    // NOP
label_1d49c8:
    // 0x1d49c8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1d49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1d49cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d49ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d49d0: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x1d49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
label_1d49d4:
    // 0x1d49d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d49d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d49d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d49d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d49dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d49dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d49e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d49e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d49e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d49e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d49e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d49e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d49ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d49ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d49f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d49f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d49f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d49f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d49f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d49fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d49fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4a00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4a04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4a04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4A08u;
    {
        const bool branch_taken_0x1d4a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A08u;
            // 0x1d4a0c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a08) {
            ctx->pc = 0x1D4A1Cu;
            goto label_1d4a1c;
        }
    }
    ctx->pc = 0x1D4A10u;
label_1d4a10:
    // 0x1d4a10: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1d4a10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d4a14: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x1d4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
    // 0x1d4a18: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1d4a1c:
    // 0x1d4a1c: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x1d4a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d4a20: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4A20u;
    {
        const bool branch_taken_0x1d4a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A20u;
            // 0x1d4a24: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a20) {
            ctx->pc = 0x1D4A98u;
            goto label_1d4a98;
        }
    }
    ctx->pc = 0x1D4A28u;
    // 0x1d4a28: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x1d4a28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x1d4a2c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4A2Cu;
    {
        const bool branch_taken_0x1d4a2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A2Cu;
            // 0x1d4a30: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a2c) {
            ctx->pc = 0x1D4A50u;
            goto label_1d4a50;
        }
    }
    ctx->pc = 0x1D4A34u;
    // 0x1d4a34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4a38: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4a3c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4a3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4a40: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x1d4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1d4a44: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d4a44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4a48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4A48u;
    {
        const bool branch_taken_0x1d4a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A48u;
            // 0x1d4a4c: 0xae83017c  sw          $v1, 0x17C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a48) {
            ctx->pc = 0x1D4A5Cu;
            goto label_1d4a5c;
        }
    }
    ctx->pc = 0x1D4A50u;
label_1d4a50:
    // 0x1d4a50: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1d4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1d4a54: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d4a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a58: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x1d4a58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
label_1d4a5c:
    // 0x1d4a5c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d4a5cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4a64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4a64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4a68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4a6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4a70: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4a70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4a74: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4a7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4a80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4a80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4a84: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4a84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4a8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4a90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4A90u;
    {
        const bool branch_taken_0x1d4a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A90u;
            // 0x1d4a94: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a90) {
            ctx->pc = 0x1D4AA4u;
            goto label_1d4aa4;
        }
    }
    ctx->pc = 0x1D4A98u;
label_1d4a98:
    // 0x1d4a98: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x1d4a98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1d4a9c: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x1d4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
    // 0x1d4aa0: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x1d4aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_1d4aa4:
    // 0x1d4aa4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1d4aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4aa8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D4AA8u;
    {
        const bool branch_taken_0x1d4aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AA8u;
            // 0x1d4aac: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa8) {
            ctx->pc = 0x1D4B20u;
            goto label_1d4b20;
        }
    }
    ctx->pc = 0x1D4AB0u;
    // 0x1d4ab0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1d4ab4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4AB4u;
    {
        const bool branch_taken_0x1d4ab4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AB4u;
            // 0x1d4ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ab4) {
            ctx->pc = 0x1D4AD8u;
            goto label_1d4ad8;
        }
    }
    ctx->pc = 0x1D4ABCu;
    // 0x1d4abc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4ac0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4ac4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4ac4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4ac8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1d4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4acc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1d4ad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4AD0u;
    {
        const bool branch_taken_0x1d4ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AD0u;
            // 0x1d4ad4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ad0) {
            ctx->pc = 0x1D4AE4u;
            goto label_1d4ae4;
        }
    }
    ctx->pc = 0x1D4AD8u;
label_1d4ad8:
    // 0x1d4ad8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1d4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1d4adc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d4adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ae0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1d4ae4:
    // 0x1d4ae4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1d4ae4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4ae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4aec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4aecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4af0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4af4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4af4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4af8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1d4af8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4afc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d4afcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d4b00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4b04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4b04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4b08: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d4b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4b0c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d4b0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d4b10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d4b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d4b14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1d4b14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1d4b18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4B18u;
    {
        const bool branch_taken_0x1d4b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B18u;
            // 0x1d4b1c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b18) {
            ctx->pc = 0x1D4B2Cu;
            goto label_1d4b2c;
        }
    }
    ctx->pc = 0x1D4B20u;
label_1d4b20:
    // 0x1d4b20: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1d4b20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d4b24: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1d4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1d4b28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d4b2c:
    // 0x1d4b2c: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x1d4b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d4b30: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D4B30u;
    {
        const bool branch_taken_0x1d4b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B30u;
            // 0x1d4b34: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b30) {
            ctx->pc = 0x1D4B70u;
            goto label_1d4b70;
        }
    }
    ctx->pc = 0x1D4B38u;
    // 0x1d4b38: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x1d4b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x1d4b3c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4B3Cu;
    {
        const bool branch_taken_0x1d4b3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B3Cu;
            // 0x1d4b40: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b3c) {
            ctx->pc = 0x1D4B60u;
            goto label_1d4b60;
        }
    }
    ctx->pc = 0x1D4B44u;
    // 0x1d4b44: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d4b48: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d4b4c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d4b4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d4b50: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x1d4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1d4b54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4B54u;
    {
        const bool branch_taken_0x1d4b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B54u;
            // 0x1d4b58: 0xae830180  sw          $v1, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b54) {
            ctx->pc = 0x1D4B68u;
            goto label_1d4b68;
        }
    }
    ctx->pc = 0x1D4B5Cu;
    // 0x1d4b5c: 0x0  nop
    ctx->pc = 0x1d4b5cu;
    // NOP
label_1d4b60:
    // 0x1d4b60: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1d4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1d4b64: 0xae820180  sw          $v0, 0x180($s4)
    ctx->pc = 0x1d4b64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
label_1d4b68:
    // 0x1d4b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4B68u;
    {
        const bool branch_taken_0x1d4b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B68u;
            // 0x1d4b6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b68) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D4B70u;
label_1d4b70:
    // 0x1d4b70: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x1d4b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x1d4b74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4B74u;
    {
        const bool branch_taken_0x1d4b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B74u;
            // 0x1d4b78: 0xae820180  sw          $v0, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b74) {
            ctx->pc = 0x1D4B8Cu;
            goto label_1d4b8c;
        }
    }
    ctx->pc = 0x1D4B7Cu;
    // 0x1d4b7c: 0x0  nop
    ctx->pc = 0x1d4b7cu;
    // NOP
label_1d4b80:
    // 0x1d4b80: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1d4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_1d4b84:
    // 0x1d4b84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4b88: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1d4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_1d4b8c:
    // 0x1d4b8c: 0x2361823  subu        $v1, $s1, $s6
    ctx->pc = 0x1d4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_1d4b90:
    // 0x1d4b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4b94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d4b98: 0xae80030c  sw          $zero, 0x30C($s4)
    ctx->pc = 0x1d4b98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 780), GPR_U32(ctx, 0));
    // 0x1d4b9c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1d4ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4ba4: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1d4ba8: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1d4bac: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1d4bacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d4bb0: 0xae800308  sw          $zero, 0x308($s4)
    ctx->pc = 0x1d4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 776), GPR_U32(ctx, 0));
    // 0x1d4bb4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1d4bb4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d4bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4bbc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d4bbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d4bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4bc4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4bc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4bcc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d4bccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d4bd0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d4bd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4bd4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1d4bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d4bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BD8u;
            // 0x1d4bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4BE0u;
    ctx->pc = 0x1d4be0u;
}
