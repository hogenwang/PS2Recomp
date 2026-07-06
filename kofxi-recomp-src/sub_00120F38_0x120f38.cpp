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

// Function: sub_00120F38
// Address: 0x120f38 - 0x1215e8
void sub_00120F38_0x120f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120F38_0x120f38");
#endif

    switch (ctx->pc) {
        case 0x120f90u: goto label_120f90;
        case 0x121098u: goto label_121098;
        case 0x1210c0u: goto label_1210c0;
        case 0x1210c4u: goto label_1210c4;
        case 0x121158u: goto label_121158;
        case 0x121190u: goto label_121190;
        case 0x121384u: goto label_121384;
        case 0x121400u: goto label_121400;
        default: break;
    }

    ctx->pc = 0x120f38u;

    // 0x120f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120f3c: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x120f3cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120f40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120f44: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x120f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x120f48: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x120f48u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x120f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120f50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x120f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120f54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x120f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f58: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x120f58u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120f5c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x120f5cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120f60: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x120F60u;
    {
        const bool branch_taken_0x120f60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x120F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F60u;
        // 0x120f64: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f60) {
            ctx->pc = 0x121358u;
            goto label_121358;
        }
    }
    ctx->pc = 0x120F68u;
    // 0x120f68: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x120f68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120f6c: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x120F6Cu;
    {
        const bool branch_taken_0x120f6c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F6Cu;
        // 0x120f70: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f6c) {
            ctx->pc = 0x12111Cu;
            goto label_12111c;
        }
    }
    ctx->pc = 0x120F74u;
    // 0x120f74: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x120f74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x120f78: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x120F78u;
    {
        const bool branch_taken_0x120f78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F78u;
        // 0x120f7c: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f78) {
            ctx->pc = 0x121100u;
            goto label_121100;
        }
    }
    ctx->pc = 0x120F80u;
    // 0x120f80: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x120f80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120f84: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x120f84u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120f88: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x120f88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f8c: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x120f8cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_120f90:
    // 0x120f90: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x120f90u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x120f94: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x120f94u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x120f98: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x120f98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x120f9c: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x120f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120fa0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x120fa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x120fa4: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x120fa4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x120fa8: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x120fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x120fac: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x120facu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x120fb0: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x120FB0u;
    {
        const bool branch_taken_0x120fb0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x120FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FB0u;
        // 0x120fb4: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120fb0) {
            ctx->pc = 0x120FCCu;
            goto label_120fcc;
        }
    }
    ctx->pc = 0x120FB8u;
    // 0x120fb8: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x120fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x120fbc: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x120fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x120fc0: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x120fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x120fc4: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x120fc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x120fc8: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x120fc8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_120fcc:
    // 0x120fcc: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x120fccu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x120fd0: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x120fd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x120fd4: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x120fd4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x120fd8: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x120fd8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x120fdc: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120FDCu;
    {
        const bool branch_taken_0x120fdc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fdc) {
            ctx->pc = 0x120FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120FDCu;
            // 0x120fe0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120FE4u;
            goto label_120fe4;
        }
    }
    ctx->pc = 0x120FE4u;
label_120fe4:
    // 0x120fe4: 0x7812  mflo        $t7
    ctx->pc = 0x120fe4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x120fe8: 0x7010  mfhi        $t6
    ctx->pc = 0x120fe8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x120fec: 0x6012  mflo        $t4
    ctx->pc = 0x120fecu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x120ff0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x120ff0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120ff4: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x120ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x120ff8: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x120ff8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x120ffc: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x120ffcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121000: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x121000u;
    {
        const bool branch_taken_0x121000 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121000) {
            ctx->pc = 0x121004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121000u;
            // 0x121004: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121030u;
            goto label_121030;
        }
    }
    ctx->pc = 0x121008u;
    // 0x121008: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121008u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12100c: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12100cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121010: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121010u;
    {
        const bool branch_taken_0x121010 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121010u;
        // 0x121014: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121010) {
            ctx->pc = 0x12102Cu;
            goto label_12102c;
        }
    }
    ctx->pc = 0x121018u;
    // 0x121018: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x121018u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12101c: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12101Cu;
    {
        const bool branch_taken_0x12101c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12101c) {
            ctx->pc = 0x121020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12101Cu;
            // 0x121020: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121030u;
            goto label_121030;
        }
    }
    ctx->pc = 0x121024u;
    // 0x121024: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x121024u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x121028: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x121028u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12102c:
    // 0x12102c: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x12102cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_121030:
    // 0x121030: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x121030u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x121034: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x121034u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x121038: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121038u;
    {
        const bool branch_taken_0x121038 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x121038) {
            ctx->pc = 0x12103Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121038u;
            // 0x12103c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121040u;
            goto label_121040;
        }
    }
    ctx->pc = 0x121040u;
label_121040:
    // 0x121040: 0x7812  mflo        $t7
    ctx->pc = 0x121040u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x121044: 0x7010  mfhi        $t6
    ctx->pc = 0x121044u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121048: 0x5812  mflo        $t3
    ctx->pc = 0x121048u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x12104c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12104cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x121050: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x121050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x121054: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x121054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121058: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x121058u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12105c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12105Cu;
    {
        const bool branch_taken_0x12105c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12105Cu;
        // 0x121060: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12105c) {
            ctx->pc = 0x12108Cu;
            goto label_12108c;
        }
    }
    ctx->pc = 0x121064u;
    // 0x121064: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121068: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x121068u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12106c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12106Cu;
    {
        const bool branch_taken_0x12106c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12106Cu;
        // 0x121070: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12106c) {
            ctx->pc = 0x121088u;
            goto label_121088;
        }
    }
    ctx->pc = 0x121074u;
    // 0x121074: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x121074u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121078: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x121078u;
    {
        const bool branch_taken_0x121078 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121078u;
        // 0x12107c: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121078) {
            ctx->pc = 0x12108Cu;
            goto label_12108c;
        }
    }
    ctx->pc = 0x121080u;
    // 0x121080: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121084: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_121088:
    // 0x121088: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x121088u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_12108c:
    // 0x12108c: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x12108cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x121090: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x121090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x121094: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x121094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121098:
    // 0x121098: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x121098u;
    {
        const bool branch_taken_0x121098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121098u;
        // 0x12109c: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121098) {
            ctx->pc = 0x1210C4u;
            goto label_1210c4;
        }
    }
    ctx->pc = 0x1210A0u;
    // 0x1210a0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1210a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1210a4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1210a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1210a8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1210a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1210ac: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x1210acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x1210b0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1210b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1210b4: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x1210b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x1210b8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1210b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1210bc: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1210bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_1210c0:
    // 0x1210c0: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x1210c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_1210c4:
    // 0x1210c4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1210c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1210c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1210c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1210cc: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x1210ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1210d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1210d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1210d4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1210d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1210d8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1210d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1210dc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1210dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1210e0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1210e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1210e4: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x1210e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1210e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1210e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1210ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1210ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1210f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1210f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1210f4: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x1210f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x1210f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1210F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1210FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210F8u;
        // 0x1210fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1210F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121100u;
label_121100:
    // 0x121100: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x121100u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121104: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x121104u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x121108: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x121108u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12110c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12110cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121110: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x121110u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121114: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x121114u;
    {
        const bool branch_taken_0x121114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121114u;
        // 0x121118: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121114) {
            ctx->pc = 0x120F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120f90;
        }
    }
    ctx->pc = 0x12111Cu;
label_12111c:
    // 0x12111c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12111Cu;
    {
        const bool branch_taken_0x12111c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x121120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12111Cu;
        // 0x121120: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12111c) {
            ctx->pc = 0x121140u;
            goto label_121140;
        }
    }
    ctx->pc = 0x121124u;
    // 0x121124: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x121124u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121128: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x121128u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x12112c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12112Cu;
    {
        const bool branch_taken_0x12112c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12112c) {
            ctx->pc = 0x121130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12112Cu;
            // 0x121130: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121134u;
            goto label_121134;
        }
    }
    ctx->pc = 0x121134u;
label_121134:
    // 0x121134: 0x2812  mflo        $a1
    ctx->pc = 0x121134u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x121138: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x121138u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12113c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12113cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_121140:
    // 0x121140: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x121140u;
    {
        const bool branch_taken_0x121140 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121140u;
        // 0x121144: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121140) {
            ctx->pc = 0x12133Cu;
            goto label_12133c;
        }
    }
    ctx->pc = 0x121148u;
    // 0x121148: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12114c: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12114cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121150: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x121150u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121154: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x121154u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_121158:
    // 0x121158: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x121158u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x12115c: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12115cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x121160: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x121160u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x121164: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x121164u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121168: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x121168u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12116c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12116cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x121170: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x121170u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x121174: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x121174u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x121178: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x121178u;
    {
        const bool branch_taken_0x121178 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121178u;
        // 0x12117c: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121178) {
            ctx->pc = 0x121254u;
            goto label_121254;
        }
    }
    ctx->pc = 0x121180u;
    // 0x121180: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x121180u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x121184: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x121184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121188: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x121188u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12118c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12118cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_121190:
    // 0x121190: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x121190u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x121194: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x121194u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x121198: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121198u;
    {
        const bool branch_taken_0x121198 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x121198) {
            ctx->pc = 0x12119Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121198u;
            // 0x12119c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1211A0u;
            goto label_1211a0;
        }
    }
    ctx->pc = 0x1211A0u;
label_1211a0:
    // 0x1211a0: 0x7010  mfhi        $t6
    ctx->pc = 0x1211a0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1211a4: 0x6812  mflo        $t5
    ctx->pc = 0x1211a4u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1211a8: 0x4812  mflo        $t1
    ctx->pc = 0x1211a8u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x1211ac: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1211acu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1211b0: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x1211b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1211b4: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x1211b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x1211b8: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x1211b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1211bc: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1211BCu;
    {
        const bool branch_taken_0x1211bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211bc) {
            ctx->pc = 0x1211C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211BCu;
            // 0x1211c0: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x1211C4u;
    // 0x1211c4: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1211c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1211c8: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x1211c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1211cc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1211CCu;
    {
        const bool branch_taken_0x1211cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1211D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1211CCu;
        // 0x1211d0: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211cc) {
            ctx->pc = 0x1211E8u;
            goto label_1211e8;
        }
    }
    ctx->pc = 0x1211D4u;
    // 0x1211d4: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x1211d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1211d8: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1211D8u;
    {
        const bool branch_taken_0x1211d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211d8) {
            ctx->pc = 0x1211DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211D8u;
            // 0x1211dc: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x1211E0u;
    // 0x1211e0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1211e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1211e4: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1211e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_1211e8:
    // 0x1211e8: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x1211e8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_1211ec:
    // 0x1211ec: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x1211ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x1211f0: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x1211f0u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1211f4: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1211F4u;
    {
        const bool branch_taken_0x1211f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211f4) {
            ctx->pc = 0x1211F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1211F4u;
            // 0x1211f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1211FCu;
            goto label_1211fc;
        }
    }
    ctx->pc = 0x1211FCu;
label_1211fc:
    // 0x1211fc: 0x7812  mflo        $t7
    ctx->pc = 0x1211fcu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x121200: 0x7010  mfhi        $t6
    ctx->pc = 0x121200u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121204: 0x5012  mflo        $t2
    ctx->pc = 0x121204u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x121208: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12120c: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x12120cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x121210: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x121210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121214: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x121214u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121218: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x121218u;
    {
        const bool branch_taken_0x121218 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121218u;
        // 0x12121c: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121218) {
            ctx->pc = 0x121248u;
            goto label_121248;
        }
    }
    ctx->pc = 0x121220u;
    // 0x121220: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x121220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121224: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x121224u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121228: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121228u;
    {
        const bool branch_taken_0x121228 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121228u;
        // 0x12122c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121228) {
            ctx->pc = 0x121244u;
            goto label_121244;
        }
    }
    ctx->pc = 0x121230u;
    // 0x121230: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x121230u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121234: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x121234u;
    {
        const bool branch_taken_0x121234 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121234u;
        // 0x121238: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121234) {
            ctx->pc = 0x121248u;
            goto label_121248;
        }
    }
    ctx->pc = 0x12123Cu;
    // 0x12123c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x121240: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x121240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_121244:
    // 0x121244: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x121244u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_121248:
    // 0x121248: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x121248u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x12124c: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x12124Cu;
    {
        const bool branch_taken_0x12124c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12124Cu;
        // 0x121250: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12124c) {
            ctx->pc = 0x121098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121098;
        }
    }
    ctx->pc = 0x121254u;
label_121254:
    // 0x121254: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x121254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x121258: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x121258u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12125c: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12125cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x121260: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x121260u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x121264: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x121264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x121268: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x121268u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12126c: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x12126cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x121270: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x121270u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x121274: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x121274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121278: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x121278u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12127c: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12127cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x121280: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121280u;
    {
        const bool branch_taken_0x121280 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x121280) {
            ctx->pc = 0x121284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121280u;
            // 0x121284: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121288u;
            goto label_121288;
        }
    }
    ctx->pc = 0x121288u;
label_121288:
    // 0x121288: 0x6810  mfhi        $t5
    ctx->pc = 0x121288u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12128c: 0x6012  mflo        $t4
    ctx->pc = 0x12128cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x121290: 0x2012  mflo        $a0
    ctx->pc = 0x121290u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x121294: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x121294u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x121298: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x121298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12129c: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x12129cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1212a0: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x1212a0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1212a4: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1212A4u;
    {
        const bool branch_taken_0x1212a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212A4u;
        // 0x1212a8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212a4) {
            ctx->pc = 0x1212D0u;
            goto label_1212d0;
        }
    }
    ctx->pc = 0x1212ACu;
    // 0x1212ac: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1212b0: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x1212b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1212b4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1212B4u;
    {
        const bool branch_taken_0x1212b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1212B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212B4u;
        // 0x1212b8: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212b4) {
            ctx->pc = 0x1212D0u;
            goto label_1212d0;
        }
    }
    ctx->pc = 0x1212BCu;
    // 0x1212bc: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x1212bcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1212c0: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1212C0u;
    {
        const bool branch_taken_0x1212c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212c0) {
            ctx->pc = 0x1212C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1212C0u;
            // 0x1212c4: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1212D4u;
            goto label_1212d4;
        }
    }
    ctx->pc = 0x1212C8u;
    // 0x1212c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1212c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1212cc: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1212ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_1212d0:
    // 0x1212d0: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x1212d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_1212d4:
    // 0x1212d4: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x1212d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1212d8: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x1212d8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1212dc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1212DCu;
    {
        const bool branch_taken_0x1212dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212dc) {
            ctx->pc = 0x1212E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1212DCu;
            // 0x1212e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1212E4u;
            goto label_1212e4;
        }
    }
    ctx->pc = 0x1212E4u;
label_1212e4:
    // 0x1212e4: 0x7812  mflo        $t7
    ctx->pc = 0x1212e4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1212e8: 0x7010  mfhi        $t6
    ctx->pc = 0x1212e8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1212ec: 0x3812  mflo        $a3
    ctx->pc = 0x1212ecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1212f0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1212f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1212f4: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x1212f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1212f8: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x1212f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1212fc: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x1212fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x121300: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x121300u;
    {
        const bool branch_taken_0x121300 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121300u;
        // 0x121304: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121300) {
            ctx->pc = 0x121330u;
            goto label_121330;
        }
    }
    ctx->pc = 0x121308u;
    // 0x121308: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x121308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x12130c: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x12130cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x121310: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121310u;
    {
        const bool branch_taken_0x121310 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121310u;
        // 0x121314: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121310) {
            ctx->pc = 0x12132Cu;
            goto label_12132c;
        }
    }
    ctx->pc = 0x121318u;
    // 0x121318: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x121318u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12131c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12131Cu;
    {
        const bool branch_taken_0x12131c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x121320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12131Cu;
        // 0x121320: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12131c) {
            ctx->pc = 0x121330u;
            goto label_121330;
        }
    }
    ctx->pc = 0x121324u;
    // 0x121324: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121328: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x121328u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_12132c:
    // 0x12132c: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x12132cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_121330:
    // 0x121330: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x121330u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x121334: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x121334u;
    {
        const bool branch_taken_0x121334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121334u;
        // 0x121338: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121334) {
            ctx->pc = 0x121190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121190;
        }
    }
    ctx->pc = 0x12133Cu;
label_12133c:
    // 0x12133c: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12133cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121340: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x121340u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x121344: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x121344u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x121348: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x121348u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12134c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12134cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121350: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x121350u;
    {
        const bool branch_taken_0x121350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121350u;
        // 0x121354: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121350) {
            ctx->pc = 0x121158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121158;
        }
    }
    ctx->pc = 0x121358u;
label_121358:
    // 0x121358: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x121358u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12135c: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12135Cu;
    {
        const bool branch_taken_0x12135c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12135Cu;
        // 0x121360: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12135c) {
            ctx->pc = 0x1213DCu;
            goto label_1213dc;
        }
    }
    ctx->pc = 0x121364u;
    // 0x121364: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x121364u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x121368: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x121368u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12136c: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x12136Cu;
    {
        const bool branch_taken_0x12136c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x121370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12136Cu;
        // 0x121370: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12136c) {
            ctx->pc = 0x1215C8u;
            goto label_1215c8;
        }
    }
    ctx->pc = 0x121374u;
    // 0x121374: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x121374u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121378: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x121378u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12137c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12137cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121380: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x121380u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_121384:
    // 0x121384: 0x3c0e003e  lui         $t6, 0x3E
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)62 << 16));
    // 0x121388: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x121388u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12138c: 0x25ceb630  addiu       $t6, $t6, -0x49D0
    ctx->pc = 0x12138cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294948400));
    // 0x121390: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x121390u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x121394: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x121394u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x121398: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x121398u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12139c: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12139cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1213a0: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x1213a0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1213a4: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x1213A4u;
    {
        const bool branch_taken_0x1213a4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x1213A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213A4u;
        // 0x1213a8: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213a4) {
            ctx->pc = 0x121410u;
            goto label_121410;
        }
    }
    ctx->pc = 0x1213ACu;
    // 0x1213ac: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x1213acu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1213b0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1213B0u;
    {
        const bool branch_taken_0x1213b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1213B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213B0u;
        // 0x1213b4: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213b0) {
            ctx->pc = 0x1213C8u;
            goto label_1213c8;
        }
    }
    ctx->pc = 0x1213B8u;
    // 0x1213b8: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x1213b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1213bc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1213BCu;
    {
        const bool branch_taken_0x1213bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1213C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213BCu;
        // 0x1213c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213bc) {
            ctx->pc = 0x1213DCu;
            goto label_1213dc;
        }
    }
    ctx->pc = 0x1213C4u;
    // 0x1213c4: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x1213c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_1213c8:
    // 0x1213c8: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x1213c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1213cc: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x1213ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1213d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1213d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1213d4: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x1213d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1213d8: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x1213d8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1213dc:
    // 0x1213dc: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x1213DCu;
    {
        const bool branch_taken_0x1213dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213DCu;
        // 0x1213e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213dc) {
            ctx->pc = 0x1210C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1210c4;
        }
    }
    ctx->pc = 0x1213E4u;
    // 0x1213e4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1213e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1213e8: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x1213e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x1213ec: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1213ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1213f0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1213f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1213f4: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x1213f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x1213f8: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x1213f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x1213fc: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x1213fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_121400:
    // 0x121400: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x121400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x121404: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x121404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x121408: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x121408u;
    {
        const bool branch_taken_0x121408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121408u;
        // 0x12140c: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121408) {
            ctx->pc = 0x1210C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1210c0;
        }
    }
    ctx->pc = 0x121410u;
label_121410:
    // 0x121410: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x121410u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x121414: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x121414u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x121418: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12141c: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x12141cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x121420: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x121420u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x121424: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x121428: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x121428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x12142c: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x12142cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x121430: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x121430u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x121434: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x121434u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x121438: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x121438u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12143c: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x12143cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x121440: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x121440u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x121444: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121444u;
    {
        const bool branch_taken_0x121444 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x121444) {
            ctx->pc = 0x121448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121444u;
            // 0x121448: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12144Cu;
            goto label_12144c;
        }
    }
    ctx->pc = 0x12144Cu;
label_12144c:
    // 0x12144c: 0x7010  mfhi        $t6
    ctx->pc = 0x12144cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x121450: 0x6012  mflo        $t4
    ctx->pc = 0x121450u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x121454: 0x3812  mflo        $a3
    ctx->pc = 0x121454u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x121458: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x121458u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12145c: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x12145cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x121460: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x121460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x121464: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x121464u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x121468: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x121468u;
    {
        const bool branch_taken_0x121468 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121468) {
            ctx->pc = 0x12146Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121468u;
            // 0x12146c: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121498u;
            goto label_121498;
        }
    }
    ctx->pc = 0x121470u;
    // 0x121470: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x121474: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x121474u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x121478: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x121478u;
    {
        const bool branch_taken_0x121478 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121478u;
        // 0x12147c: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121478) {
            ctx->pc = 0x121494u;
            goto label_121494;
        }
    }
    ctx->pc = 0x121480u;
    // 0x121480: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x121480u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x121484: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121484u;
    {
        const bool branch_taken_0x121484 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121484) {
            ctx->pc = 0x121488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121484u;
            // 0x121488: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121498u;
            goto label_121498;
        }
    }
    ctx->pc = 0x12148Cu;
    // 0x12148c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12148cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121490: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x121490u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_121494:
    // 0x121494: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x121494u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_121498:
    // 0x121498: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x121498u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12149c: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12149cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1214a0: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1214A0u;
    {
        const bool branch_taken_0x1214a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214a0) {
            ctx->pc = 0x1214A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1214A0u;
            // 0x1214a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1214A8u;
            goto label_1214a8;
        }
    }
    ctx->pc = 0x1214A8u;
label_1214a8:
    // 0x1214a8: 0x7812  mflo        $t7
    ctx->pc = 0x1214a8u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1214ac: 0x7010  mfhi        $t6
    ctx->pc = 0x1214acu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1214b0: 0x6012  mflo        $t4
    ctx->pc = 0x1214b0u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x1214b4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1214b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1214b8: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x1214b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1214bc: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x1214bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1214c0: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x1214c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1214c4: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1214C4u;
    {
        const bool branch_taken_0x1214c4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214C4u;
        // 0x1214c8: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214c4) {
            ctx->pc = 0x1214F4u;
            goto label_1214f4;
        }
    }
    ctx->pc = 0x1214CCu;
    // 0x1214cc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1214d0: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x1214d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1214d4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1214D4u;
    {
        const bool branch_taken_0x1214d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1214D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214D4u;
        // 0x1214d8: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214d4) {
            ctx->pc = 0x1214F0u;
            goto label_1214f0;
        }
    }
    ctx->pc = 0x1214DCu;
    // 0x1214dc: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x1214dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1214e0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1214E0u;
    {
        const bool branch_taken_0x1214e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214E0u;
        // 0x1214e4: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214e0) {
            ctx->pc = 0x1214F4u;
            goto label_1214f4;
        }
    }
    ctx->pc = 0x1214E8u;
    // 0x1214e8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1214e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1214ec: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1214ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1214f0:
    // 0x1214f0: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x1214f0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1214f4:
    // 0x1214f4: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x1214f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1214f8: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x1214f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x1214fc: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x121500: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x121500u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x121504: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x121504u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x121508: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x121508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x12150c: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x12150cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x121510: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x121510u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x121514: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x121514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121518: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x121518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x12151c: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x12151cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x121520: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x121520u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x121524: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x121524u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x121528: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x121528u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12152c: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12152Cu;
    {
        const bool branch_taken_0x12152c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x121530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12152Cu;
        // 0x121530: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12152c) {
            ctx->pc = 0x12153Cu;
            goto label_12153c;
        }
    }
    ctx->pc = 0x121534u;
    // 0x121534: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x121534u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x121538: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x121538u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_12153c:
    // 0x12153c: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x12153cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x121540: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x121540u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x121544: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x121544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x121548: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x121548u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x12154c: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x12154cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121550: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x121550u;
    {
        const bool branch_taken_0x121550 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x121554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121550u;
        // 0x121554: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121550) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121558u;
    // 0x121558: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x121558u;
    {
        const bool branch_taken_0x121558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x12155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121558u;
        // 0x12155c: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121558) {
            ctx->pc = 0x121580u;
            goto label_121580;
        }
    }
    ctx->pc = 0x121560u;
    // 0x121560: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x121560u;
    {
        const bool branch_taken_0x121560 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x121560) {
            ctx->pc = 0x121580u;
            goto label_121580;
        }
    }
    ctx->pc = 0x121568u;
label_121568:
    // 0x121568: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x121568u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x12156c: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x12156cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x121570: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x121570u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x121574: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x121574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x121578: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x121578u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12157c: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x12157cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_121580:
    // 0x121580: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x121580u;
    {
        const bool branch_taken_0x121580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121580u;
        // 0x121584: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121580) {
            ctx->pc = 0x1210C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1210c4;
        }
    }
    ctx->pc = 0x121588u;
    // 0x121588: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x121588u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x12158c: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x12158cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x121590: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x121590u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x121594: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x121594u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x121598: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x121598u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x12159c: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x12159cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x1215a0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1215a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1215a4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1215a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1215a8: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x1215a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x1215ac: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x1215acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x1215b0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1215b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1215b4: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x1215b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x1215b8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1215b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1215bc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1215bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1215c0: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x1215C0u;
    {
        const bool branch_taken_0x1215c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215C0u;
        // 0x1215c4: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215c0) {
            ctx->pc = 0x121400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121400;
        }
    }
    ctx->pc = 0x1215C8u;
label_1215c8:
    // 0x1215c8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1215c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1215cc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1215ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1215d0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x1215d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1215d4: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x1215d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1215d8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x1215d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215dc: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x1215DCu;
    {
        const bool branch_taken_0x1215dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215DCu;
        // 0x1215e0: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215dc) {
            ctx->pc = 0x121384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121384;
        }
    }
    ctx->pc = 0x1215E4u;
    // 0x1215e4: 0x0  nop
    ctx->pc = 0x1215e4u;
    // NOP
}
