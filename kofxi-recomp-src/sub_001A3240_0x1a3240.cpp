#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3240
// Address: 0x1a3240 - 0x1a3420
void sub_001A3240_0x1a3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3240_0x1a3240");
#endif

    ctx->pc = 0x1a3240u;

    // 0x1a3240: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1a3240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a3244: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a3244u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a3248: 0x4600073  bltz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1A3248u;
    {
        const bool branch_taken_0x1a3248 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1a3248) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A3250u;
    // 0x1a3250: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a3250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a3254: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1a3254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a3258: 0x9484dab0  lhu         $a0, -0x2550($a0)
    ctx->pc = 0x1a3258u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957744)));
    // 0x1a325c: 0x3084ff00  andi        $a0, $a0, 0xFF00
    ctx->pc = 0x1a325cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x1a3260: 0x1086006d  beq         $a0, $a2, . + 4 + (0x6D << 2)
    ctx->pc = 0x1A3260u;
    {
        const bool branch_taken_0x1a3260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a3260) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A3268u;
    // 0x1a3268: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a3268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a326c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1a326cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a3270: 0x90879780  lbu         $a3, -0x6880($a0)
    ctx->pc = 0x1a3270u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294940544)));
    // 0x1a3274: 0x54e60013  bnel        $a3, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A3274u;
    {
        const bool branch_taken_0x1a3274 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a3274) {
            ctx->pc = 0x1A3278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3274u;
            // 0x1a3278: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A32C4u;
            goto label_1a32c4;
        }
    }
    ctx->pc = 0x1A327Cu;
    // 0x1a327c: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x1a327cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x1a3280: 0x9086b240  lbu         $a2, -0x4DC0($a0)
    ctx->pc = 0x1a3280u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947392)));
    // 0x1a3284: 0x54c0000a  bnel        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3284u;
    {
        const bool branch_taken_0x1a3284 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3284) {
            ctx->pc = 0x1A3288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3284u;
            // 0x1a3288: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A32B0u;
            goto label_1a32b0;
        }
    }
    ctx->pc = 0x1A328Cu;
    // 0x1a328c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a328cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a3290: 0x5363c  dsll32      $a2, $a1, 24
    ctx->pc = 0x1a3290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a3294: 0x90849748  lbu         $a0, -0x68B8($a0)
    ctx->pc = 0x1a3294u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294940488)));
    // 0x1a3298: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1a3298u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1a329c: 0x50c4002d  beql        $a2, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A329Cu;
    {
        const bool branch_taken_0x1a329c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a329c) {
            ctx->pc = 0x1A32A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A329Cu;
            // 0x1a32a0: 0x5463c  dsll32      $t0, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3354u;
            goto label_1a3354;
        }
    }
    ctx->pc = 0x1A32A4u;
    // 0x1a32a4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1A32A4u;
    {
        const bool branch_taken_0x1a32a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a32a4) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A32ACu;
    // 0x1a32ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a32acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a32b0:
    // 0x1a32b0: 0x14c40027  bne         $a2, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A32B0u;
    {
        const bool branch_taken_0x1a32b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a32b0) {
            ctx->pc = 0x1A3350u;
            goto label_1a3350;
        }
    }
    ctx->pc = 0x1A32B8u;
    // 0x1a32b8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1A32B8u;
    {
        const bool branch_taken_0x1a32b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a32b8) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A32C0u;
    // 0x1a32c0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1a32c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a32c4:
    // 0x1a32c4: 0x54e40007  bnel        $a3, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A32C4u;
    {
        const bool branch_taken_0x1a32c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a32c4) {
            ctx->pc = 0x1A32C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32C4u;
            // 0x1a32c8: 0x5463c  dsll32      $t0, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A32E4u;
            goto label_1a32e4;
        }
    }
    ctx->pc = 0x1A32CCu;
    // 0x1a32cc: 0x14a00052  bnez        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1A32CCu;
    {
        const bool branch_taken_0x1a32cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a32cc) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A32D4u;
    // 0x1a32d4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a32d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a32d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A32D8u;
    {
        const bool branch_taken_0x1a32d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32D8u;
            // 0x1a32dc: 0x80859480  lb          $a1, -0x6B80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294939776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32d8) {
            ctx->pc = 0x1A3318u;
            goto label_1a3318;
        }
    }
    ctx->pc = 0x1A32E0u;
    // 0x1a32e0: 0x5463c  dsll32      $t0, $a1, 24
    ctx->pc = 0x1a32e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 24));
label_1a32e4:
    // 0x1a32e4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a32e8: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x1a32e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x1a32ec: 0x24c6db5a  addiu       $a2, $a2, -0x24A6
    ctx->pc = 0x1a32ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957914));
    // 0x1a32f0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1a32f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1a32f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a32f8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a32f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a32fc: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1a32fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a3300: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a3300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a3304: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1a3304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a3308: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1a3308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a330c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1a330cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a3310: 0x10c40041  beq         $a2, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1A3310u;
    {
        const bool branch_taken_0x1a3310 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a3310) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A3318u;
label_1a3318:
    // 0x1a3318: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a3318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a331c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1a331cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1a3320: 0x8c849478  lw          $a0, -0x6B88($a0)
    ctx->pc = 0x1a3320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939768)));
    // 0x1a3324: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1a3324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1a3328: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3328u;
    {
        const bool branch_taken_0x1a3328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3328) {
            ctx->pc = 0x1A3350u;
            goto label_1a3350;
        }
    }
    ctx->pc = 0x1A3330u;
    // 0x1a3330: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a3330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a3334: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x1a3334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a3338: 0x90849490  lbu         $a0, -0x6B70($a0)
    ctx->pc = 0x1a3338u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294939792)));
    // 0x1a333c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1a333cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1a3340: 0x14a40035  bne         $a1, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A3340u;
    {
        const bool branch_taken_0x1a3340 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a3340) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A3348u;
    // 0x1a3348: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a334c: 0x80859480  lb          $a1, -0x6B80($a0)
    ctx->pc = 0x1a334cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294939776)));
label_1a3350:
    // 0x1a3350: 0x5463c  dsll32      $t0, $a1, 24
    ctx->pc = 0x1a3350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 24));
label_1a3354:
    // 0x1a3354: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a3354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a3358: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x1a3358u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x1a335c: 0x24c6e8c0  addiu       $a2, $a2, -0x1740
    ctx->pc = 0x1a335cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961344));
    // 0x1a3360: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1a3360u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a3364: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1a3368: 0xa83821  addu        $a3, $a1, $t0
    ctx->pc = 0x1a3368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a336c: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x1a336cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1a3370: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x1a3370u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1a3374: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x1a3374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x1a3378: 0x2484b258  addiu       $a0, $a0, -0x4DA8
    ctx->pc = 0x1a3378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947416));
    // 0x1a337c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a3380: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1a3380u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3384: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A3384u;
    {
        const bool branch_taken_0x1a3384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3384u;
            // 0x1a3388: 0xc73021  addu        $a2, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3384) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A338Cu;
    // 0x1a338c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1a338cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a3390: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A3390u;
    {
        const bool branch_taken_0x1a3390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3390) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A3398u;
    // 0x1a3398: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3398u;
    {
        const bool branch_taken_0x1a3398 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3398u;
            // 0x1a339c: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3398) {
            ctx->pc = 0x1A33A8u;
            goto label_1a33a8;
        }
    }
    ctx->pc = 0x1A33A0u;
    // 0x1a33a0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1a33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a33a4: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x1a33a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_1a33a8:
    // 0x1a33a8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1a33a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1a33ac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1a33acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a33b0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x1a33b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a33b4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A33B4u;
    {
        const bool branch_taken_0x1a33b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a33b4) {
            ctx->pc = 0x1A33B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A33B4u;
            // 0x1a33b8: 0x41c3c  dsll32      $v1, $a0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A33C4u;
            goto label_1a33c4;
        }
    }
    ctx->pc = 0x1A33BCu;
    // 0x1a33bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a33bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a33c0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1a33c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_1a33c4:
    // 0x1a33c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1a33c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a33c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1a33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1a33cc: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1a33ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a33d0: 0x24846408  addiu       $a0, $a0, 0x6408
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25608));
    // 0x1a33d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a33d8: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x1a33d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x1a33dc: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1a33dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a33e0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a33e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a33e4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1A33E4u;
    {
        const bool branch_taken_0x1a33e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a33e4) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A33ECu;
    // 0x1a33ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1a33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1a33f0: 0xa4c40012  sh          $a0, 0x12($a2)
    ctx->pc = 0x1a33f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a33f4: 0x24636418  addiu       $v1, $v1, 0x6418
    ctx->pc = 0x1a33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25624));
    // 0x1a33f8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1a33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a33fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1a33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1a3400: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1a3400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3404: 0x24636428  addiu       $v1, $v1, 0x6428
    ctx->pc = 0x1a3404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25640));
    // 0x1a3408: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a3408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a340c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1a340cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3410: 0xa4c40014  sh          $a0, 0x14($a2)
    ctx->pc = 0x1a3410u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a3414: 0xa4c3001c  sh          $v1, 0x1C($a2)
    ctx->pc = 0x1a3414u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 3));
label_1a3418:
    // 0x1a3418: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3420u;
    ctx->pc = 0x1a3420u;
}
