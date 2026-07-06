#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121CD0
// Address: 0x121cd0 - 0x122380
void sub_00121CD0_0x121cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121CD0_0x121cd0");
#endif

    switch (ctx->pc) {
        case 0x121d28u: goto label_121d28;
        case 0x121e30u: goto label_121e30;
        case 0x121e58u: goto label_121e58;
        case 0x121e5cu: goto label_121e5c;
        case 0x121ef0u: goto label_121ef0;
        case 0x121f28u: goto label_121f28;
        case 0x12211cu: goto label_12211c;
        case 0x122198u: goto label_122198;
        default: break;
    }

    ctx->pc = 0x121cd0u;

    // 0x121cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x121cd4: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x121cd4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x121cd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121cdc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x121cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x121ce0: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x121ce0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x121ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121ce8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121cec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cf0: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x121cf0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x121cf4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x121cf4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x121cf8: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x121CF8u;
    {
        const bool branch_taken_0x121cf8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x121CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CF8u;
        // 0x121cfc: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121cf8) {
            ctx->pc = 0x1220F0u;
            goto label_1220f0;
        }
    }
    ctx->pc = 0x121D00u;
    // 0x121d00: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x121d00u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121d04: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x121D04u;
    {
        const bool branch_taken_0x121d04 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D04u;
        // 0x121d08: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d04) {
            ctx->pc = 0x121EB4u;
            goto label_121eb4;
        }
    }
    ctx->pc = 0x121D0Cu;
    // 0x121d0c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x121d0cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121d10: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x121D10u;
    {
        const bool branch_taken_0x121d10 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D10u;
        // 0x121d14: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d10) {
            ctx->pc = 0x121E98u;
            goto label_121e98;
        }
    }
    ctx->pc = 0x121D18u;
    // 0x121d18: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x121d18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121d1c: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x121d1cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121d20: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x121d20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121d24: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x121d24u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_121d28:
    // 0x121d28: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x121d28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x121d2c: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x121d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x121d30: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x121d30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x121d34: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x121d34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121d38: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x121d38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x121d3c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x121d3cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x121d40: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x121d40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x121d44: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x121d44u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x121d48: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x121D48u;
    {
        const bool branch_taken_0x121d48 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x121D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D48u;
        // 0x121d4c: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121d48) {
            ctx->pc = 0x121D64u;
            goto label_121d64;
        }
    }
    ctx->pc = 0x121D50u;
    // 0x121d50: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x121d50u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x121d54: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x121d54u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x121d58: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x121d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x121d5c: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x121d5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x121d60: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x121d60u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_121d64:
    // 0x121d64: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x121d64u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121d68: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x121d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x121d6c: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x121d6cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x121d70: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x121d70u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x121d74: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121D74u;
    {
        const bool branch_taken_0x121d74 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d74) {
            ctx->pc = 0x121D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121D74u;
            // 0x121d78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121D7Cu;
            goto label_121d7c;
        }
    }
    ctx->pc = 0x121D7Cu;
label_121d7c:
    // 0x121d7c: 0x7812  mflo        $t7
    ctx->pc = 0x121d7cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x121d80: 0x7010  mfhi        $t6
    ctx->pc = 0x121d80u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121d84: 0x6012  mflo        $t4
    ctx->pc = 0x121d84u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x121d88: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121d88u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121d8c: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x121d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x121d90: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x121d90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121d94: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x121d94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121d98: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x121D98u;
    {
        const bool branch_taken_0x121d98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d98) {
            ctx->pc = 0x121D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121D98u;
            // 0x121d9c: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121DC8u;
            goto label_121dc8;
        }
    }
    ctx->pc = 0x121DA0u;
    // 0x121da0: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121da0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x121da4: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x121da4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121da8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121DA8u;
    {
        const bool branch_taken_0x121da8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DA8u;
        // 0x121dac: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121da8) {
            ctx->pc = 0x121DC4u;
            goto label_121dc4;
        }
    }
    ctx->pc = 0x121DB0u;
    // 0x121db0: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x121db0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121db4: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121DB4u;
    {
        const bool branch_taken_0x121db4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121db4) {
            ctx->pc = 0x121DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121DB4u;
            // 0x121db8: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121DC8u;
            goto label_121dc8;
        }
    }
    ctx->pc = 0x121DBCu;
    // 0x121dbc: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x121dbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x121dc0: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121dc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_121dc4:
    // 0x121dc4: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x121dc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_121dc8:
    // 0x121dc8: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x121dc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x121dcc: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x121dccu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x121dd0: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121DD0u;
    {
        const bool branch_taken_0x121dd0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x121dd0) {
            ctx->pc = 0x121DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121DD0u;
            // 0x121dd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121DD8u;
            goto label_121dd8;
        }
    }
    ctx->pc = 0x121DD8u;
label_121dd8:
    // 0x121dd8: 0x7812  mflo        $t7
    ctx->pc = 0x121dd8u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x121ddc: 0x7010  mfhi        $t6
    ctx->pc = 0x121ddcu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121de0: 0x5812  mflo        $t3
    ctx->pc = 0x121de0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x121de4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121de4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121de8: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x121de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x121dec: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x121decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121df0: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x121df0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121df4: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x121DF4u;
    {
        const bool branch_taken_0x121df4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DF4u;
        // 0x121df8: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121df4) {
            ctx->pc = 0x121E24u;
            goto label_121e24;
        }
    }
    ctx->pc = 0x121DFCu;
    // 0x121dfc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121e00: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x121e00u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121e04: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121E04u;
    {
        const bool branch_taken_0x121e04 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E04u;
        // 0x121e08: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e04) {
            ctx->pc = 0x121E20u;
            goto label_121e20;
        }
    }
    ctx->pc = 0x121E0Cu;
    // 0x121e0c: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x121e0cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121e10: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x121E10u;
    {
        const bool branch_taken_0x121e10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E10u;
        // 0x121e14: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e10) {
            ctx->pc = 0x121E24u;
            goto label_121e24;
        }
    }
    ctx->pc = 0x121E18u;
    // 0x121e18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121e1c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x121e1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_121e20:
    // 0x121e20: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x121e20u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_121e24:
    // 0x121e24: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x121e24u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x121e28: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x121e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x121e2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x121e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121e30:
    // 0x121e30: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x121E30u;
    {
        const bool branch_taken_0x121e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E30u;
        // 0x121e34: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e30) {
            ctx->pc = 0x121E5Cu;
            goto label_121e5c;
        }
    }
    ctx->pc = 0x121E38u;
    // 0x121e38: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x121e38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121e3c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x121e3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x121e40: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x121e40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x121e44: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x121e44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x121e48: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x121e48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x121e4c: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x121e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x121e50: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x121e50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x121e54: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x121e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_121e58:
    // 0x121e58: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x121e58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_121e5c:
    // 0x121e5c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x121e5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121e64: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x121e64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x121e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121e6c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x121e6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x121e70: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x121e70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x121e74: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x121e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x121e78: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x121e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x121e7c: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x121e7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x121e80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121e84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121e88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x121e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121e8c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x121e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x121e90: 0x3e00008  jr          $ra
    ctx->pc = 0x121E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E90u;
        // 0x121e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121E98u;
label_121e98:
    // 0x121e98: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x121e98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121e9c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x121e9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x121ea0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x121ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x121ea4: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x121ea4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121ea8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x121ea8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121eac: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x121EACu;
    {
        const bool branch_taken_0x121eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EACu;
        // 0x121eb0: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121eac) {
            ctx->pc = 0x121D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121d28;
        }
    }
    ctx->pc = 0x121EB4u;
label_121eb4:
    // 0x121eb4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x121EB4u;
    {
        const bool branch_taken_0x121eb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x121EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EB4u;
        // 0x121eb8: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121eb4) {
            ctx->pc = 0x121ED8u;
            goto label_121ed8;
        }
    }
    ctx->pc = 0x121EBCu;
    // 0x121ebc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x121ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ec0: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x121ec0u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x121ec4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121EC4u;
    {
        const bool branch_taken_0x121ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x121ec4) {
            ctx->pc = 0x121EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121EC4u;
            // 0x121ec8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121ECCu;
            goto label_121ecc;
        }
    }
    ctx->pc = 0x121ECCu;
label_121ecc:
    // 0x121ecc: 0x2812  mflo        $a1
    ctx->pc = 0x121eccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x121ed0: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x121ed0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x121ed4: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x121ed4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_121ed8:
    // 0x121ed8: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x121ED8u;
    {
        const bool branch_taken_0x121ed8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED8u;
        // 0x121edc: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ed8) {
            ctx->pc = 0x1220D4u;
            goto label_1220d4;
        }
    }
    ctx->pc = 0x121EE0u;
    // 0x121ee0: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x121ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121ee4: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x121ee4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121ee8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x121ee8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121eec: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x121eecu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_121ef0:
    // 0x121ef0: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x121ef0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x121ef4: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x121ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x121ef8: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x121ef8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x121efc: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x121efcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121f00: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x121f00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x121f04: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x121f04u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x121f08: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x121f08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x121f0c: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x121f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x121f10: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x121F10u;
    {
        const bool branch_taken_0x121f10 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x121F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F10u;
        // 0x121f14: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f10) {
            ctx->pc = 0x121FECu;
            goto label_121fec;
        }
    }
    ctx->pc = 0x121F18u;
    // 0x121f18: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x121f18u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x121f1c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x121f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121f20: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x121f20u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121f24: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x121f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_121f28:
    // 0x121f28: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x121f28u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x121f2c: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x121f2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x121f30: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121F30u;
    {
        const bool branch_taken_0x121f30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f30) {
            ctx->pc = 0x121F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121F30u;
            // 0x121f34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121F38u;
            goto label_121f38;
        }
    }
    ctx->pc = 0x121F38u;
label_121f38:
    // 0x121f38: 0x7010  mfhi        $t6
    ctx->pc = 0x121f38u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121f3c: 0x6812  mflo        $t5
    ctx->pc = 0x121f3cu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x121f40: 0x4812  mflo        $t1
    ctx->pc = 0x121f40u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x121f44: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121f44u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121f48: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x121f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x121f4c: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x121f4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x121f50: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x121f50u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121f54: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x121F54u;
    {
        const bool branch_taken_0x121f54 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f54) {
            ctx->pc = 0x121F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121F54u;
            // 0x121f58: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121F84u;
            goto label_121f84;
        }
    }
    ctx->pc = 0x121F5Cu;
    // 0x121f5c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121f5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x121f60: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x121f60u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121f64: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121F64u;
    {
        const bool branch_taken_0x121f64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F64u;
        // 0x121f68: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f64) {
            ctx->pc = 0x121F80u;
            goto label_121f80;
        }
    }
    ctx->pc = 0x121F6Cu;
    // 0x121f6c: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x121f6cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121f70: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121F70u;
    {
        const bool branch_taken_0x121f70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f70) {
            ctx->pc = 0x121F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121F70u;
            // 0x121f74: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121F84u;
            goto label_121f84;
        }
    }
    ctx->pc = 0x121F78u;
    // 0x121f78: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x121f78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x121f7c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121f7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_121f80:
    // 0x121f80: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x121f80u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_121f84:
    // 0x121f84: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x121f84u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x121f88: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x121f88u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x121f8c: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121F8Cu;
    {
        const bool branch_taken_0x121f8c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f8c) {
            ctx->pc = 0x121F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121F8Cu;
            // 0x121f90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121F94u;
            goto label_121f94;
        }
    }
    ctx->pc = 0x121F94u;
label_121f94:
    // 0x121f94: 0x7812  mflo        $t7
    ctx->pc = 0x121f94u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x121f98: 0x7010  mfhi        $t6
    ctx->pc = 0x121f98u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121f9c: 0x5012  mflo        $t2
    ctx->pc = 0x121f9cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x121fa0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121fa4: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x121fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x121fa8: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x121fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121fac: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x121facu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121fb0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x121FB0u;
    {
        const bool branch_taken_0x121fb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FB0u;
        // 0x121fb4: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fb0) {
            ctx->pc = 0x121FE0u;
            goto label_121fe0;
        }
    }
    ctx->pc = 0x121FB8u;
    // 0x121fb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121fbc: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x121fbcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121fc0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121FC0u;
    {
        const bool branch_taken_0x121fc0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FC0u;
        // 0x121fc4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fc0) {
            ctx->pc = 0x121FDCu;
            goto label_121fdc;
        }
    }
    ctx->pc = 0x121FC8u;
    // 0x121fc8: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x121fc8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121fcc: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x121FCCu;
    {
        const bool branch_taken_0x121fcc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FCCu;
        // 0x121fd0: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fcc) {
            ctx->pc = 0x121FE0u;
            goto label_121fe0;
        }
    }
    ctx->pc = 0x121FD4u;
    // 0x121fd4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121fd8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x121fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_121fdc:
    // 0x121fdc: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x121fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_121fe0:
    // 0x121fe0: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x121fe0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x121fe4: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x121FE4u;
    {
        const bool branch_taken_0x121fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FE4u;
        // 0x121fe8: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fe4) {
            ctx->pc = 0x121E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121e30;
        }
    }
    ctx->pc = 0x121FECu;
label_121fec:
    // 0x121fec: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x121fecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x121ff0: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x121ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121ff4: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x121ff4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x121ff8: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x121ff8u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x121ffc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x121ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x122000: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x122000u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x122004: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x122004u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x122008: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x122008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12200c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x12200cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122010: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x122010u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x122014: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x122014u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x122018: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x122018u;
    {
        const bool branch_taken_0x122018 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x122018) {
            ctx->pc = 0x12201Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122018u;
            // 0x12201c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x122020u;
            goto label_122020;
        }
    }
    ctx->pc = 0x122020u;
label_122020:
    // 0x122020: 0x6810  mfhi        $t5
    ctx->pc = 0x122020u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x122024: 0x6012  mflo        $t4
    ctx->pc = 0x122024u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x122028: 0x2012  mflo        $a0
    ctx->pc = 0x122028u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x12202c: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x12202cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x122030: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x122030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x122034: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x122034u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x122038: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x122038u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12203c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12203Cu;
    {
        const bool branch_taken_0x12203c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12203Cu;
        // 0x122040: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12203c) {
            ctx->pc = 0x122068u;
            goto label_122068;
        }
    }
    ctx->pc = 0x122044u;
    // 0x122044: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x122044u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x122048: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x122048u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12204c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12204Cu;
    {
        const bool branch_taken_0x12204c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12204Cu;
        // 0x122050: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12204c) {
            ctx->pc = 0x122068u;
            goto label_122068;
        }
    }
    ctx->pc = 0x122054u;
    // 0x122054: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x122054u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x122058: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x122058u;
    {
        const bool branch_taken_0x122058 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x122058) {
            ctx->pc = 0x12205Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122058u;
            // 0x12205c: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12206Cu;
            goto label_12206c;
        }
    }
    ctx->pc = 0x122060u;
    // 0x122060: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x122064: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x122064u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_122068:
    // 0x122068: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x122068u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12206c:
    // 0x12206c: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12206cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x122070: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x122070u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x122074: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x122074u;
    {
        const bool branch_taken_0x122074 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x122074) {
            ctx->pc = 0x122078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122074u;
            // 0x122078: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12207Cu;
            goto label_12207c;
        }
    }
    ctx->pc = 0x12207Cu;
label_12207c:
    // 0x12207c: 0x7812  mflo        $t7
    ctx->pc = 0x12207cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x122080: 0x7010  mfhi        $t6
    ctx->pc = 0x122080u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x122084: 0x3812  mflo        $a3
    ctx->pc = 0x122084u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x122088: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x122088u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12208c: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x12208cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x122090: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x122090u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x122094: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x122094u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x122098: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x122098u;
    {
        const bool branch_taken_0x122098 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122098u;
        // 0x12209c: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122098) {
            ctx->pc = 0x1220C8u;
            goto label_1220c8;
        }
    }
    ctx->pc = 0x1220A0u;
    // 0x1220a0: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x1220a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1220a4: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x1220a4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1220a8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1220A8u;
    {
        const bool branch_taken_0x1220a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1220ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220A8u;
        // 0x1220ac: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220a8) {
            ctx->pc = 0x1220C4u;
            goto label_1220c4;
        }
    }
    ctx->pc = 0x1220B0u;
    // 0x1220b0: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x1220b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1220b4: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1220B4u;
    {
        const bool branch_taken_0x1220b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220B4u;
        // 0x1220b8: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220b4) {
            ctx->pc = 0x1220C8u;
            goto label_1220c8;
        }
    }
    ctx->pc = 0x1220BCu;
    // 0x1220bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1220bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1220c0: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x1220c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_1220c4:
    // 0x1220c4: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x1220c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1220c8:
    // 0x1220c8: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x1220c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1220cc: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x1220CCu;
    {
        const bool branch_taken_0x1220cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220CCu;
        // 0x1220d0: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220cc) {
            ctx->pc = 0x121F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121f28;
        }
    }
    ctx->pc = 0x1220D4u;
label_1220d4:
    // 0x1220d4: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1220d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1220d8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1220d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1220dc: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x1220dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1220e0: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1220e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1220e4: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x1220e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220e8: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x1220E8u;
    {
        const bool branch_taken_0x1220e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220E8u;
        // 0x1220ec: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220e8) {
            ctx->pc = 0x121EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121ef0;
        }
    }
    ctx->pc = 0x1220F0u;
label_1220f0:
    // 0x1220f0: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x1220f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1220f4: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x1220F4u;
    {
        const bool branch_taken_0x1220f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1220F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220F4u;
        // 0x1220f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220f4) {
            ctx->pc = 0x122174u;
            goto label_122174;
        }
    }
    ctx->pc = 0x1220FCu;
    // 0x1220fc: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x1220fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x122100: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x122100u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x122104: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x122104u;
    {
        const bool branch_taken_0x122104 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122104u;
        // 0x122108: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122104) {
            ctx->pc = 0x122360u;
            goto label_122360;
        }
    }
    ctx->pc = 0x12210Cu;
    // 0x12210c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12210cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x122110: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x122110u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x122114: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x122114u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122118: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x122118u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12211c:
    // 0x12211c: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x12211cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x122120: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x122120u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x122124: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x122124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x122128: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x122128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12212c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12212cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x122130: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x122130u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x122134: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x122134u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x122138: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x122138u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12213c: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x12213Cu;
    {
        const bool branch_taken_0x12213c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x122140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12213Cu;
        // 0x122140: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12213c) {
            ctx->pc = 0x1221A8u;
            goto label_1221a8;
        }
    }
    ctx->pc = 0x122144u;
    // 0x122144: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x122144u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x122148: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x122148u;
    {
        const bool branch_taken_0x122148 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122148u;
        // 0x12214c: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122148) {
            ctx->pc = 0x122160u;
            goto label_122160;
        }
    }
    ctx->pc = 0x122150u;
    // 0x122150: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x122150u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x122154: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x122154u;
    {
        const bool branch_taken_0x122154 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122154u;
        // 0x122158: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122154) {
            ctx->pc = 0x122174u;
            goto label_122174;
        }
    }
    ctx->pc = 0x12215Cu;
    // 0x12215c: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x12215cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_122160:
    // 0x122160: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x122160u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x122164: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x122164u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x122168: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12216c: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x12216cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x122170: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x122170u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_122174:
    // 0x122174: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x122174u;
    {
        const bool branch_taken_0x122174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122174u;
        // 0x122178: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122174) {
            ctx->pc = 0x121E5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121e5c;
        }
    }
    ctx->pc = 0x12217Cu;
    // 0x12217c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12217cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122180: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x122180u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x122184: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x122184u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x122188: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x122188u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12218c: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12218cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x122190: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x122190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x122194: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x122194u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_122198:
    // 0x122198: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x122198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12219c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12219cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1221a0: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x1221A0u;
    {
        const bool branch_taken_0x1221a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1221A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221A0u;
        // 0x1221a4: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221a0) {
            ctx->pc = 0x121E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121e58;
        }
    }
    ctx->pc = 0x1221A8u;
label_1221a8:
    // 0x1221a8: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x1221a8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x1221ac: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x1221acu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x1221b0: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x1221b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x1221b4: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x1221b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x1221b8: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x1221b8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x1221bc: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x1221bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1221c0: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x1221c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1221c4: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x1221c4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x1221c8: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x1221c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x1221cc: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x1221ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x1221d0: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x1221d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x1221d4: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x1221d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1221d8: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x1221d8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x1221dc: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1221DCu;
    {
        const bool branch_taken_0x1221dc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1221dc) {
            ctx->pc = 0x1221E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1221DCu;
            // 0x1221e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1221E4u;
            goto label_1221e4;
        }
    }
    ctx->pc = 0x1221E4u;
label_1221e4:
    // 0x1221e4: 0x7010  mfhi        $t6
    ctx->pc = 0x1221e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1221e8: 0x6012  mflo        $t4
    ctx->pc = 0x1221e8u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x1221ec: 0x3812  mflo        $a3
    ctx->pc = 0x1221ecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1221f0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1221f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1221f4: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x1221f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1221f8: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x1221f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1221fc: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x1221fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x122200: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x122200u;
    {
        const bool branch_taken_0x122200 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x122200) {
            ctx->pc = 0x122204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122200u;
            // 0x122204: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122230u;
            goto label_122230;
        }
    }
    ctx->pc = 0x122208u;
    // 0x122208: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x122208u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x12220c: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12220cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x122210: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x122210u;
    {
        const bool branch_taken_0x122210 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122210u;
        // 0x122214: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122210) {
            ctx->pc = 0x12222Cu;
            goto label_12222c;
        }
    }
    ctx->pc = 0x122218u;
    // 0x122218: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x122218u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12221c: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12221Cu;
    {
        const bool branch_taken_0x12221c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12221c) {
            ctx->pc = 0x122220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12221Cu;
            // 0x122220: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122230u;
            goto label_122230;
        }
    }
    ctx->pc = 0x122224u;
    // 0x122224: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x122228: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x122228u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12222c:
    // 0x12222c: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x12222cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_122230:
    // 0x122230: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x122230u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x122234: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x122234u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x122238: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x122238u;
    {
        const bool branch_taken_0x122238 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x122238) {
            ctx->pc = 0x12223Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122238u;
            // 0x12223c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x122240u;
            goto label_122240;
        }
    }
    ctx->pc = 0x122240u;
label_122240:
    // 0x122240: 0x7812  mflo        $t7
    ctx->pc = 0x122240u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x122244: 0x7010  mfhi        $t6
    ctx->pc = 0x122244u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x122248: 0x6012  mflo        $t4
    ctx->pc = 0x122248u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12224c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12224cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x122250: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x122250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x122254: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x122254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x122258: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x122258u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12225c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12225Cu;
    {
        const bool branch_taken_0x12225c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12225Cu;
        // 0x122260: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12225c) {
            ctx->pc = 0x12228Cu;
            goto label_12228c;
        }
    }
    ctx->pc = 0x122264u;
    // 0x122264: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x122264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x122268: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x122268u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12226c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12226Cu;
    {
        const bool branch_taken_0x12226c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12226Cu;
        // 0x122270: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12226c) {
            ctx->pc = 0x122288u;
            goto label_122288;
        }
    }
    ctx->pc = 0x122274u;
    // 0x122274: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x122274u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x122278: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x122278u;
    {
        const bool branch_taken_0x122278 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122278u;
        // 0x12227c: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122278) {
            ctx->pc = 0x12228Cu;
            goto label_12228c;
        }
    }
    ctx->pc = 0x122280u;
    // 0x122280: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x122280u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x122284: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x122284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_122288:
    // 0x122288: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x122288u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_12228c:
    // 0x12228c: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x12228cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x122290: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x122290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x122294: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x122294u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x122298: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x122298u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x12229c: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x12229cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1222a0: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x1222a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1222a4: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x1222a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1222a8: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x1222a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1222ac: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1222acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222b0: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x1222b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1222b4: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x1222b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1222b8: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x1222b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1222bc: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x1222bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1222c0: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x1222c0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1222c4: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1222C4u;
    {
        const bool branch_taken_0x1222c4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1222C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222C4u;
        // 0x1222c8: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222c4) {
            ctx->pc = 0x1222D4u;
            goto label_1222d4;
        }
    }
    ctx->pc = 0x1222CCu;
    // 0x1222cc: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x1222ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x1222d0: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x1222d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_1222d4:
    // 0x1222d4: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x1222d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1222d8: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x1222d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1222dc: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x1222dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1222e0: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x1222e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1222e4: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x1222e4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1222e8: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1222E8u;
    {
        const bool branch_taken_0x1222e8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1222ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222E8u;
        // 0x1222ec: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222e8) {
            ctx->pc = 0x122300u;
            goto label_122300;
        }
    }
    ctx->pc = 0x1222F0u;
    // 0x1222f0: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1222F0u;
    {
        const bool branch_taken_0x1222f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x1222F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222F0u;
        // 0x1222f4: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222f0) {
            ctx->pc = 0x122318u;
            goto label_122318;
        }
    }
    ctx->pc = 0x1222F8u;
    // 0x1222f8: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1222F8u;
    {
        const bool branch_taken_0x1222f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1222f8) {
            ctx->pc = 0x122318u;
            goto label_122318;
        }
    }
    ctx->pc = 0x122300u;
label_122300:
    // 0x122300: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x122300u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x122304: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x122304u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x122308: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x122308u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12230c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12230cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x122310: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x122310u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x122314: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x122314u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_122318:
    // 0x122318: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x122318u;
    {
        const bool branch_taken_0x122318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122318u;
        // 0x12231c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122318) {
            ctx->pc = 0x121E5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121e5c;
        }
    }
    ctx->pc = 0x122320u;
    // 0x122320: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x122320u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x122324: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x122324u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x122328: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x122328u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12232c: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x12232cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x122330: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x122330u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x122334: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x122334u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x122338: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x122338u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12233c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12233cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x122340: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x122340u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x122344: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x122344u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x122348: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x122348u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12234c: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x12234cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x122350: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x122350u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x122354: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x122354u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x122358: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x122358u;
    {
        const bool branch_taken_0x122358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122358u;
        // 0x12235c: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122358) {
            ctx->pc = 0x122198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122198;
        }
    }
    ctx->pc = 0x122360u;
label_122360:
    // 0x122360: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x122360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x122364: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x122364u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x122368: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x122368u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12236c: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12236cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x122370: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x122370u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122374: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x122374u;
    {
        const bool branch_taken_0x122374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122374u;
        // 0x122378: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122374) {
            ctx->pc = 0x12211Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12211c;
        }
    }
    ctx->pc = 0x12237Cu;
    // 0x12237c: 0x0  nop
    ctx->pc = 0x12237cu;
    // NOP
}
