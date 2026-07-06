#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2CC0
// Address: 0x1f2cc0 - 0x1f2e78
void sub_001F2CC0_0x1f2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2CC0_0x1f2cc0");
#endif

    switch (ctx->pc) {
        case 0x1f2d10u: goto label_1f2d10;
        case 0x1f2de8u: goto label_1f2de8;
        case 0x1f2e00u: goto label_1f2e00;
        case 0x1f2e38u: goto label_1f2e38;
        case 0x1f2e68u: goto label_1f2e68;
        default: break;
    }

    ctx->pc = 0x1f2cc0u;

    // 0x1f2cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2cc4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1f2cc4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2ccc: 0x8dac2018  lw          $t4, 0x2018($t5)
    ctx->pc = 0x1f2cccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8216)));
    // 0x1f2cd0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1f2cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f2cd4: 0x258b0004  addiu       $t3, $t4, 0x4
    ctx->pc = 0x1f2cd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1f2cd8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1f2cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f2cdc: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x1f2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1f2ce0: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x1f2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1f2ce4: 0xc72818  mult        $a1, $a2, $a3
    ctx->pc = 0x1f2ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f2ce8: 0x8dae0038  lw          $t6, 0x38($t5)
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 56)));
    // 0x1f2cec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1f2cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f2cf0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1f2cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f2cf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2CF4u;
    {
        const bool branch_taken_0x1f2cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CF4u;
            // 0x1f2cf8: 0x8d69001c  lw          $t1, 0x1C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cf4) {
            ctx->pc = 0x1F2D10u;
            goto label_1f2d10;
        }
    }
    ctx->pc = 0x1F2CFCu;
    // 0x1f2cfc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f2cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f2d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2d04: 0x34a50f17  ori         $a1, $a1, 0xF17
    ctx->pc = 0x1f2d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3863);
    // 0x1f2d08: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F2D08u;
    ctx->pc = 0x1F2D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D08u;
            // 0x1f2d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F2D10u;
label_1f2d10:
    // 0x1f2d10: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x1f2d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1f2d14: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1f2d14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f2d18: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x1f2d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f2d1c: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x1f2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1f2d20: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x1f2d20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x1f2d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2d28: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x1f2d28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1f2d2c: 0x62903  sra         $a1, $a2, 4
    ctx->pc = 0x1f2d2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1f2d30: 0x15c30005  bne         $t6, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2D30u;
    {
        const bool branch_taken_0x1f2d30 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D30u;
            // 0x1f2d34: 0x71103  sra         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d30) {
            ctx->pc = 0x1F2D48u;
            goto label_1f2d48;
        }
    }
    ctx->pc = 0x1F2D38u;
    // 0x1f2d38: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1f2d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f2d3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2D3Cu;
    {
        const bool branch_taken_0x1f2d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D3Cu;
            // 0x1f2d40: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d3c) {
            ctx->pc = 0x1F2D58u;
            goto label_1f2d58;
        }
    }
    ctx->pc = 0x1F2D44u;
    // 0x1f2d44: 0x0  nop
    ctx->pc = 0x1f2d44u;
    // NOP
label_1f2d48:
    // 0x1f2d48: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1f2d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f2d4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f2d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2d54: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1f2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1f2d58:
    // 0x1f2d58: 0x244a0040  addiu       $t2, $v0, 0x40
    ctx->pc = 0x1f2d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1f2d5c: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x1f2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x1f2d60: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2d64: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x1f2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1f2d68: 0x2467000f  addiu       $a3, $v1, 0xF
    ctx->pc = 0x1f2d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1f2d6c: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1f2d6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f2d70: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x1f2d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1f2d74: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1f2d74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f2d78: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x1f2d78u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1f2d7c: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x1f2d7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1f2d80: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1f2d80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1f2d84: 0x15c8000a  bne         $t6, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2D84u;
    {
        const bool branch_taken_0x1f2d84 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 8));
        ctx->pc = 0x1F2D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D84u;
            // 0x1f2d88: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d84) {
            ctx->pc = 0x1F2DB0u;
            goto label_1f2db0;
        }
    }
    ctx->pc = 0x1F2D8Cu;
    // 0x1f2d8c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1f2d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f2d90: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1f2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1f2d94: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1f2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1f2d98: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x1f2d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f2d9c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2D9Cu;
    {
        const bool branch_taken_0x1f2d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d9c) {
            ctx->pc = 0x1F2DD0u;
            goto label_1f2dd0;
        }
    }
    ctx->pc = 0x1F2DA4u;
    // 0x1f2da4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F2DA4u;
    {
        const bool branch_taken_0x1f2da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DA4u;
            // 0x1f2da8: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2da4) {
            ctx->pc = 0x1F2DE8u;
            goto label_1f2de8;
        }
    }
    ctx->pc = 0x1F2DACu;
    // 0x1f2dac: 0x0  nop
    ctx->pc = 0x1f2dacu;
    // NOP
label_1f2db0:
    // 0x1f2db0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1f2db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f2db4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f2db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2dbc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1f2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1f2dc0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1f2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1f2dc4: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x1f2dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f2dc8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2DC8u;
    {
        const bool branch_taken_0x1f2dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2dc8) {
            ctx->pc = 0x1F2DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DC8u;
            // 0x1f2dcc: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2DE8u;
            goto label_1f2de8;
        }
    }
    ctx->pc = 0x1F2DD0u;
label_1f2dd0:
    // 0x1f2dd0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f2dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f2dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2dd8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1f2dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ddc: 0x34a50f18  ori         $a1, $a1, 0xF18
    ctx->pc = 0x1f2ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3864);
    // 0x1f2de0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F2DE0u;
    ctx->pc = 0x1F2DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DE0u;
            // 0x1f2de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F2DE8u;
label_1f2de8:
    // 0x1f2de8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2DE8u;
    {
        const bool branch_taken_0x1f2de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2de8) {
            ctx->pc = 0x1F2E28u;
            goto label_1f2e28;
        }
    }
    ctx->pc = 0x1F2DF0u;
    // 0x1f2df0: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F2DF0u;
    {
        const bool branch_taken_0x1f2df0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1F2DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DF0u;
            // 0x1f2df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2df0) {
            ctx->pc = 0x1F2E54u;
            goto label_1f2e54;
        }
    }
    ctx->pc = 0x1F2DF8u;
    // 0x1f2df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dfc: 0x25830030  addiu       $v1, $t4, 0x30
    ctx->pc = 0x1f2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
label_1f2e00:
    // 0x1f2e00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f2e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f2e04: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1f2e08: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x1f2e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1f2e0c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f2e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f2e10: 0x0  nop
    ctx->pc = 0x1f2e10u;
    // NOP
    // 0x1f2e14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2E14u;
    {
        const bool branch_taken_0x1f2e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E14u;
            // 0x1f2e18: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e14) {
            ctx->pc = 0x1F2E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2e00;
        }
    }
    ctx->pc = 0x1F2E1Cu;
    // 0x1f2e1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F2E1Cu;
    {
        const bool branch_taken_0x1f2e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E1Cu;
            // 0x1f2e20: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e1c) {
            ctx->pc = 0x1F2E58u;
            goto label_1f2e58;
        }
    }
    ctx->pc = 0x1F2E24u;
    // 0x1f2e24: 0x0  nop
    ctx->pc = 0x1f2e24u;
    // NOP
label_1f2e28:
    // 0x1f2e28: 0x5920000b  blezl       $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2E28u;
    {
        const bool branch_taken_0x1f2e28 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x1f2e28) {
            ctx->pc = 0x1F2E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E28u;
            // 0x1f2e2c: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F2E58u;
            goto label_1f2e58;
        }
    }
    ctx->pc = 0x1F2E30u;
    // 0x1f2e30: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f2e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e34: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f2e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f2e38:
    // 0x1f2e38: 0x0  nop
    ctx->pc = 0x1f2e38u;
    // NOP
    // 0x1f2e3c: 0x0  nop
    ctx->pc = 0x1f2e3cu;
    // NOP
    // 0x1f2e40: 0x0  nop
    ctx->pc = 0x1f2e40u;
    // NOP
    // 0x1f2e44: 0x0  nop
    ctx->pc = 0x1f2e44u;
    // NOP
    // 0x1f2e48: 0x0  nop
    ctx->pc = 0x1f2e48u;
    // NOP
    // 0x1f2e4c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2E4Cu;
    {
        const bool branch_taken_0x1f2e4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E4Cu;
            // 0x1f2e50: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e4c) {
            ctx->pc = 0x1F2E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2e38;
        }
    }
    ctx->pc = 0x1F2E54u;
label_1f2e54:
    // 0x1f2e54: 0xad890178  sw          $t1, 0x178($t4)
    ctx->pc = 0x1f2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
label_1f2e58:
    // 0x1f2e58: 0x25850030  addiu       $a1, $t4, 0x30
    ctx->pc = 0x1f2e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x1f2e5c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1f2e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e60: 0xc07d1b4  jal         func_1F46D0
    ctx->pc = 0x1F2E60u;
    SET_GPR_U32(ctx, 31, 0x1F2E68u);
    ctx->pc = 0x1F2E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E60u;
            // 0x1f2e64: 0x25840180  addiu       $a0, $t4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F46D0u;
    if (runtime->hasFunction(0x1F46D0u)) {
        auto targetFn = runtime->lookupFunction(0x1F46D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E68u; }
        if (ctx->pc != 0x1F2E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F46D0_0x1f46d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E68u; }
        if (ctx->pc != 0x1F2E68u) { return; }
    }
    ctx->pc = 0x1F2E68u;
label_1f2e68:
    // 0x1f2e68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2e70: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E70u;
            // 0x1f2e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2E78u;
    ctx->pc = 0x1f2e78u;
}
