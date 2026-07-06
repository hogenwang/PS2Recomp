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

// Function: sub_00225270
// Address: 0x225270 - 0x225488
void sub_00225270_0x225270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225270_0x225270");
#endif

    switch (ctx->pc) {
        case 0x2252a0u: goto label_2252a0;
        case 0x2252a8u: goto label_2252a8;
        case 0x2252d0u: goto label_2252d0;
        case 0x22531cu: goto label_22531c;
        case 0x225354u: goto label_225354;
        case 0x225364u: goto label_225364;
        case 0x2253b0u: goto label_2253b0;
        case 0x2253c0u: goto label_2253c0;
        default: break;
    }

    ctx->pc = 0x225270u;

    // 0x225270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225274: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x225278: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x225278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22527c: 0x25eaf058  addiu       $t2, $t7, -0xFA8
    ctx->pc = 0x22527cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963288));
    // 0x225280: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x225280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x225284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22528c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22528cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225290: 0x240bff80  addiu       $t3, $zero, -0x80
    ctx->pc = 0x225290u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x225294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225298: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x225298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22529c: 0x908d0000  lbu         $t5, 0x0($a0)
    ctx->pc = 0x22529cu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2252a0:
    // 0x2252a0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2252a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2252a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2252a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2252a8:
    // 0x2252a8: 0x1ab7824  and         $t7, $t5, $t3
    ctx->pc = 0x2252a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x2252ac: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2252ACu;
    {
        const bool branch_taken_0x2252ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252ACu;
        // 0x2252b0: 0xd7840  sll         $t7, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252ac) {
            ctx->pc = 0x2252D4u;
            goto label_2252d4;
        }
    }
    ctx->pc = 0x2252B4u;
    // 0x2252b4: 0x914f0000  lbu         $t7, 0x0($t2)
    ctx->pc = 0x2252b4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2252b8: 0x25eeffe4  addiu       $t6, $t7, -0x1C
    ctx->pc = 0x2252b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967268));
    // 0x2252bc: 0x1e96014  dsllv       $t4, $t1, $t7
    ctx->pc = 0x2252bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x2252c0: 0x2def001c  sltiu       $t7, $t7, 0x1C
    ctx->pc = 0x2252c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x2252c4: 0x15e0006e  bnez        $t7, . + 4 + (0x6E << 2)
    ctx->pc = 0x2252C4u;
    {
        const bool branch_taken_0x2252c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2252C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252C4u;
        // 0x2252c8: 0x1c77014  dsllv       $t6, $a3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) << (GPR_U32(ctx, 14) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252c4) {
            ctx->pc = 0x225480u;
            goto label_225480;
        }
    }
    ctx->pc = 0x2252CCu;
    // 0x2252cc: 0xce3025  or          $a2, $a2, $t6
    ctx->pc = 0x2252ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 14));
label_2252d0:
    // 0x2252d0: 0xd7840  sll         $t7, $t5, 1
    ctx->pc = 0x2252d0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_2252d4:
    // 0x2252d4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2252d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2252d8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2252d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2252dc: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2252DCu;
    {
        const bool branch_taken_0x2252dc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2252E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252DCu;
        // 0x2252e0: 0x31ed00ff  andi        $t5, $t7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252dc) {
            ctx->pc = 0x2252A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2252a8;
        }
    }
    ctx->pc = 0x2252E4u;
    // 0x2252e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2252e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2252e8: 0x286f0008  slti        $t7, $v1, 0x8
    ctx->pc = 0x2252e8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2252ec: 0x55e0ffec  bnel        $t7, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2252ECu;
    {
        const bool branch_taken_0x2252ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2252ec) {
            ctx->pc = 0x2252F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2252ECu;
            // 0x2252f0: 0x908d0000  lbu         $t5, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2252A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2252a0;
        }
    }
    ctx->pc = 0x2252F4u;
    // 0x2252f4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2252f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2252f8: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x2252f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x2252fc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2252fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x225300: 0x25f1f048  addiu       $s1, $t7, -0xFB8
    ctx->pc = 0x225300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963272));
    // 0x225304: 0x25c4f0c0  addiu       $a0, $t6, -0xF40
    ctx->pc = 0x225304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294963392));
    // 0x225308: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x225308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22530c: 0x2418001c  addiu       $t8, $zero, 0x1C
    ctx->pc = 0x22530cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x225310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x225310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x225314: 0x3c19003a  lui         $t9, 0x3A
    ctx->pc = 0x225314u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)58 << 16));
    // 0x225318: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x225318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_22531c:
    // 0x22531c: 0x717021  addu        $t6, $v1, $s1
    ctx->pc = 0x22531cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x225320: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x225320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225324: 0x81cf0000  lb          $t7, 0x0($t6)
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x225328: 0x272af090  addiu       $t2, $t9, -0xF70
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), 4294963344));
    // 0x22532c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22532cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225330: 0x30f7023  subu        $t6, $t8, $t7
    ctx->pc = 0x225330u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x225334: 0x1e56814  dsllv       $t5, $a1, $t7
    ctx->pc = 0x225334u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x225338: 0x1c56016  dsrlv       $t4, $a1, $t6
    ctx->pc = 0x225338u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 14) & 0x3F));
    // 0x22533c: 0x1e67814  dsllv       $t7, $a2, $t7
    ctx->pc = 0x22533cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x225340: 0x1c67016  dsrlv       $t6, $a2, $t6
    ctx->pc = 0x225340u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> (GPR_U32(ctx, 14) & 0x3F));
    // 0x225344: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x225344u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x225348: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x225348u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x22534c: 0x1a22824  and         $a1, $t5, $v0
    ctx->pc = 0x22534cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x225350: 0x1e23024  and         $a2, $t7, $v0
    ctx->pc = 0x225350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
label_225354:
    // 0x225354: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x225354u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x225358: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x225358u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22535c: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x22535cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x225360: 0x914f0000  lbu         $t7, 0x0($t2)
    ctx->pc = 0x225360u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_225364:
    // 0x225364: 0x1ee7816  dsrlv       $t7, $t6, $t7
    ctx->pc = 0x225364u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) >> (GPR_U32(ctx, 15) & 0x3F));
    // 0x225368: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x225368u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x22536c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x22536cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x225370: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x225370u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x225374: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x225374u;
    {
        const bool branch_taken_0x225374 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x225378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225374u;
        // 0x225378: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225374) {
            ctx->pc = 0x225388u;
            goto label_225388;
        }
    }
    ctx->pc = 0x22537Cu;
    // 0x22537c: 0x912f0000  lbu         $t7, 0x0($t1)
    ctx->pc = 0x22537cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x225380: 0x16f7825  or          $t7, $t3, $t7
    ctx->pc = 0x225380u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x225384: 0xa12f0000  sb          $t7, 0x0($t1)
    ctx->pc = 0x225384u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 15));
label_225388:
    // 0x225388: 0xb5842  srl         $t3, $t3, 1
    ctx->pc = 0x225388u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x22538c: 0x5560fff5  bnel        $t3, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x22538Cu;
    {
        const bool branch_taken_0x22538c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x22538c) {
            ctx->pc = 0x225390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22538Cu;
            // 0x225390: 0x914f0000  lbu         $t7, 0x0($t2) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225364;
        }
    }
    ctx->pc = 0x225394u;
    // 0x225394: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x225394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x225398: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x225398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22539c: 0x290f0004  slti        $t7, $t0, 0x4
    ctx->pc = 0x22539cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2253a0: 0x15e0ffec  bnez        $t7, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2253A0u;
    {
        const bool branch_taken_0x2253a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2253A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253A0u;
        // 0x2253a4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253a0) {
            ctx->pc = 0x225354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225354;
        }
    }
    ctx->pc = 0x2253A8u;
    // 0x2253a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2253a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253ac: 0x260af0a8  addiu       $t2, $s0, -0xF58
    ctx->pc = 0x2253acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963368));
label_2253b0:
    // 0x2253b0: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x2253b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2253b4: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2253b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253b8: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x2253b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2253bc: 0x914f0000  lbu         $t7, 0x0($t2)
    ctx->pc = 0x2253bcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2253c0:
    // 0x2253c0: 0x1ec7816  dsrlv       $t7, $t4, $t7
    ctx->pc = 0x2253c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) >> (GPR_U32(ctx, 15) & 0x3F));
    // 0x2253c4: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x2253c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x2253c8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x2253c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x2253cc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x2253ccu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x2253d0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2253D0u;
    {
        const bool branch_taken_0x2253d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2253D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253D0u;
        // 0x2253d4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253d0) {
            ctx->pc = 0x2253E4u;
            goto label_2253e4;
        }
    }
    ctx->pc = 0x2253D8u;
    // 0x2253d8: 0x912f0000  lbu         $t7, 0x0($t1)
    ctx->pc = 0x2253d8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2253dc: 0x16f7825  or          $t7, $t3, $t7
    ctx->pc = 0x2253dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x2253e0: 0xa12f0000  sb          $t7, 0x0($t1)
    ctx->pc = 0x2253e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 15));
label_2253e4:
    // 0x2253e4: 0xb5842  srl         $t3, $t3, 1
    ctx->pc = 0x2253e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x2253e8: 0x5560fff5  bnel        $t3, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2253E8u;
    {
        const bool branch_taken_0x2253e8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x2253e8) {
            ctx->pc = 0x2253ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2253E8u;
            // 0x2253ec: 0x914f0000  lbu         $t7, 0x0($t2) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2253C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2253c0;
        }
    }
    ctx->pc = 0x2253F0u;
    // 0x2253f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2253f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2253f4: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2253f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253f8: 0x290f0004  slti        $t7, $t0, 0x4
    ctx->pc = 0x2253f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2253fc: 0x15e0ffec  bnez        $t7, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2253FCu;
    {
        const bool branch_taken_0x2253fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x225400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253FCu;
        // 0x225400: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253fc) {
            ctx->pc = 0x2253B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2253b0;
        }
    }
    ctx->pc = 0x225404u;
    // 0x225404: 0x93ae0000  lbu         $t6, 0x0($sp)
    ctx->pc = 0x225404u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x225408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22540c: 0x93ab0004  lbu         $t3, 0x4($sp)
    ctx->pc = 0x22540cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x225410: 0x28670010  slti        $a3, $v1, 0x10
    ctx->pc = 0x225410u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x225414: 0x93aa0002  lbu         $t2, 0x2($sp)
    ctx->pc = 0x225414u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x225418: 0xe7638  dsll        $t6, $t6, 24
    ctx->pc = 0x225418u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 24);
    // 0x22541c: 0x93af0001  lbu         $t7, 0x1($sp)
    ctx->pc = 0x22541cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x225420: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x225420u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
    // 0x225424: 0x93ad0005  lbu         $t5, 0x5($sp)
    ctx->pc = 0x225424u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x225428: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x225428u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x22542c: 0x93ac0003  lbu         $t4, 0x3($sp)
    ctx->pc = 0x22542cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x225430: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x225430u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x225434: 0x93a90006  lbu         $t1, 0x6($sp)
    ctx->pc = 0x225434u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x225438: 0xd6a38  dsll        $t5, $t5, 8
    ctx->pc = 0x225438u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 8);
    // 0x22543c: 0x93a80007  lbu         $t0, 0x7($sp)
    ctx->pc = 0x22543cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x225440: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x225440u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x225444: 0x1c97025  or          $t6, $t6, $t1
    ctx->pc = 0x225444u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 9));
    // 0x225448: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x225448u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x22544c: 0x1e87825  or          $t7, $t7, $t0
    ctx->pc = 0x22544cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
    // 0x225450: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x225450u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x225454: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x225454u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x225458: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x225458u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x22545c: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x22545cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x225460: 0xfc8f0008  sd          $t7, 0x8($a0)
    ctx->pc = 0x225460u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 15));
    // 0x225464: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
    ctx->pc = 0x225464u;
    {
        const bool branch_taken_0x225464 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x225468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225464u;
        // 0x225468: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225464) {
            ctx->pc = 0x22531Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22531c;
        }
    }
    ctx->pc = 0x22546Cu;
    // 0x22546c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225470: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x225470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225474: 0x3e00008  jr          $ra
    ctx->pc = 0x225474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225474u;
        // 0x225478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22547Cu;
    // 0x22547c: 0x0  nop
    ctx->pc = 0x22547cu;
    // NOP
label_225480:
    // 0x225480: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x225480u;
    {
        const bool branch_taken_0x225480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225480u;
        // 0x225484: 0xac2825  or          $a1, $a1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225480) {
            ctx->pc = 0x2252D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2252d0;
        }
    }
    ctx->pc = 0x225488u;
}
