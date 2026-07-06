#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281020
// Address: 0x281020 - 0x281168
void sub_00281020_0x281020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281020_0x281020");
#endif

    switch (ctx->pc) {
        case 0x281040u: goto label_281040;
        case 0x281054u: goto label_281054;
        case 0x2810a0u: goto label_2810a0;
        default: break;
    }

    ctx->pc = 0x281020u;

    // 0x281020: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x281020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28102c: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x28102cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x281030: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x281030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281034: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x281034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x281038: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x281038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28103c: 0xa2300b  movn        $a2, $a1, $v0
    ctx->pc = 0x28103cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
label_281040:
    // 0x281040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281048: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x281048u;
    {
        const bool branch_taken_0x281048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28104Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281048u;
            // 0x28104c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281048) {
            ctx->pc = 0x281154u;
            goto label_281154;
        }
    }
    ctx->pc = 0x281050u;
    // 0x281050: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x281050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_281054:
    // 0x281054: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x281054u;
    {
        const bool branch_taken_0x281054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281054) {
            ctx->pc = 0x281140u;
            goto label_281140;
        }
    }
    ctx->pc = 0x28105Cu;
    // 0x28105c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x28105cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x281060: 0x10c30037  beq         $a2, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x281060u;
    {
        const bool branch_taken_0x281060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x281064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281060u;
            // 0x281064: 0x24120020  addiu       $s2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281060) {
            ctx->pc = 0x281140u;
            goto label_281140;
        }
    }
    ctx->pc = 0x281068u;
    // 0x281068: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x281068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28106c: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x28106cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x281070: 0x24190029  addiu       $t9, $zero, 0x29
    ctx->pc = 0x281070u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x281074: 0x2418002b  addiu       $t8, $zero, 0x2B
    ctx->pc = 0x281074u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x281078: 0x240f002c  addiu       $t7, $zero, 0x2C
    ctx->pc = 0x281078u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x28107c: 0x240e002d  addiu       $t6, $zero, 0x2D
    ctx->pc = 0x28107cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x281080: 0x240d002e  addiu       $t5, $zero, 0x2E
    ctx->pc = 0x281080u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x281084: 0x240c002f  addiu       $t4, $zero, 0x2F
    ctx->pc = 0x281084u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x281088: 0x240b003a  addiu       $t3, $zero, 0x3A
    ctx->pc = 0x281088u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x28108c: 0x240a003d  addiu       $t2, $zero, 0x3D
    ctx->pc = 0x28108cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x281090: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281094: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x281094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281098: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x281098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28109c: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x28109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
label_2810a0:
    // 0x2810a0: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2810a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2810a4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2810A4u;
    {
        const bool branch_taken_0x2810a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2810A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810A4u;
            // 0x2810a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810a4) {
            ctx->pc = 0x281124u;
            goto label_281124;
        }
    }
    ctx->pc = 0x2810ACu;
    // 0x2810ac: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2810acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x2810b0: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2810b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2810b4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2810B4u;
    {
        const bool branch_taken_0x2810b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2810B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810B4u;
            // 0x2810b8: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810b4) {
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810BCu;
    // 0x2810bc: 0x10720019  beq         $v1, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2810BCu;
    {
        const bool branch_taken_0x2810bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2810C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810BCu;
            // 0x2810c0: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810bc) {
            ctx->pc = 0x281124u;
            goto label_281124;
        }
    }
    ctx->pc = 0x2810C4u;
    // 0x2810c4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2810c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2810c8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2810C8u;
    {
        const bool branch_taken_0x2810c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2810c8) {
            ctx->pc = 0x2810CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2810C8u;
            // 0x2810cc: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810D0u;
    // 0x2810d0: 0x50710015  beql        $v1, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2810D0u;
    {
        const bool branch_taken_0x2810d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x2810d0) {
            ctx->pc = 0x2810D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2810D0u;
            // 0x2810d4: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810D8u;
    // 0x2810d8: 0x50700013  beql        $v1, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2810D8u;
    {
        const bool branch_taken_0x2810d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x2810d8) {
            ctx->pc = 0x2810DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2810D8u;
            // 0x2810dc: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810E0u;
    // 0x2810e0: 0x50790011  beql        $v1, $t9, . + 4 + (0x11 << 2)
    ctx->pc = 0x2810E0u;
    {
        const bool branch_taken_0x2810e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 25));
        if (branch_taken_0x2810e0) {
            ctx->pc = 0x2810E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2810E0u;
            // 0x2810e4: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810E8u;
    // 0x2810e8: 0x5078000f  beql        $v1, $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x2810E8u;
    {
        const bool branch_taken_0x2810e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x2810e8) {
            ctx->pc = 0x2810ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2810E8u;
            // 0x2810ec: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810F0u;
    // 0x2810f0: 0x506f000d  beql        $v1, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2810F0u;
    {
        const bool branch_taken_0x2810f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 15));
        if (branch_taken_0x2810f0) {
            ctx->pc = 0x2810F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2810F0u;
            // 0x2810f4: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810F8u;
    // 0x2810f8: 0x506e000b  beql        $v1, $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x2810F8u;
    {
        const bool branch_taken_0x2810f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        if (branch_taken_0x2810f8) {
            ctx->pc = 0x2810FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2810F8u;
            // 0x2810fc: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x281100u;
    // 0x281100: 0x106d0009  beq         $v1, $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x281100u;
    {
        const bool branch_taken_0x281100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x281104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281100u;
            // 0x281104: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281100) {
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x281108u;
    // 0x281108: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x281108u;
    {
        const bool branch_taken_0x281108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        if (branch_taken_0x281108) {
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x281110u;
    // 0x281110: 0x506b0006  beql        $v1, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x281110u;
    {
        const bool branch_taken_0x281110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x281110) {
            ctx->pc = 0x281114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281110u;
            // 0x281114: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28112Cu;
            goto label_28112c;
        }
    }
    ctx->pc = 0x281118u;
    // 0x281118: 0x106a0002  beq         $v1, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x281118u;
    {
        const bool branch_taken_0x281118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x28111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281118u;
            // 0x28111c: 0x3862003f  xori        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281118) {
            ctx->pc = 0x281124u;
            goto label_281124;
        }
    }
    ctx->pc = 0x281120u;
    // 0x281120: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x281120u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
label_281124:
    // 0x281124: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x281124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_281128:
    // 0x281128: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x281128u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_28112c:
    // 0x28112c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28112Cu;
    {
        const bool branch_taken_0x28112c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28112Cu;
            // 0x281130: 0xa2400b  movn        $t0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28112c) {
            ctx->pc = 0x281140u;
            goto label_281140;
        }
    }
    ctx->pc = 0x281134u;
    // 0x281134: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x281134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x281138: 0x14c9ffd9  bne         $a2, $t1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x281138u;
    {
        const bool branch_taken_0x281138 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x28113Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281138u;
            // 0x28113c: 0x2462ff9f  addiu       $v0, $v1, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281138) {
            ctx->pc = 0x2810A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2810a0;
        }
    }
    ctx->pc = 0x281140u;
label_281140:
    // 0x281140: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281140u;
    {
        const bool branch_taken_0x281140 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x281144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281140u;
            // 0x281144: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281140) {
            ctx->pc = 0x281154u;
            goto label_281154;
        }
    }
    ctx->pc = 0x281148u;
    // 0x281148: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x281148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x28114c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x28114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x281150: 0x67100a  movz        $v0, $v1, $a3
    ctx->pc = 0x281150u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_281154:
    // 0x281154: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x281154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281158: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x281158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28115c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28115cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281160: 0x3e00008  jr          $ra
    ctx->pc = 0x281160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281160u;
            // 0x281164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281168u;
    ctx->pc = 0x281168u;
}
