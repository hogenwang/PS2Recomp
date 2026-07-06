#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C110
// Address: 0x30c110 - 0x30c2a0
void sub_0030C110_0x30c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C110_0x30c110");
#endif

    ctx->pc = 0x30c110u;

    // 0x30c110: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x30c110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30c114: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x30c114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x30c118: 0x8cc3017c  lw          $v1, 0x17C($a2)
    ctx->pc = 0x30c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 380)));
    // 0x30c11c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C11Cu;
    {
        const bool branch_taken_0x30c11c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C11Cu;
            // 0x30c120: 0xac650060  sw          $a1, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c11c) {
            ctx->pc = 0x30C138u;
            goto label_30c138;
        }
    }
    ctx->pc = 0x30C124u;
    // 0x30c124: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x30c124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x30c128: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x30c128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x30c12c: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x30c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x30c130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30C130u;
    {
        const bool branch_taken_0x30c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C130u;
            // 0x30c134: 0x24673480  addiu       $a3, $v1, 0x3480 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 13440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c130) {
            ctx->pc = 0x30C13Cu;
            goto label_30c13c;
        }
    }
    ctx->pc = 0x30C138u;
label_30c138:
    // 0x30c138: 0x24073b80  addiu       $a3, $zero, 0x3B80
    ctx->pc = 0x30c138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15232));
label_30c13c:
    // 0x30c13c: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x30c13cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x30c140: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C140u;
    {
        const bool branch_taken_0x30c140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c140) {
            ctx->pc = 0x30C144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C140u;
            // 0x30c144: 0x24083e9c  addiu       $t0, $zero, 0x3E9C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16028));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C158u;
            goto label_30c158;
        }
    }
    ctx->pc = 0x30C148u;
    // 0x30c148: 0x51a80  sll         $v1, $a1, 10
    ctx->pc = 0x30c148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x30c14c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x30c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x30c150: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x30c150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x30c154: 0x24683e80  addiu       $t0, $v1, 0x3E80
    ctx->pc = 0x30c154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16000));
label_30c158:
    // 0x30c158: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x30c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x30c15c: 0x8cc40158  lw          $a0, 0x158($a2)
    ctx->pc = 0x30c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x30c160: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30C160u;
    {
        const bool branch_taken_0x30c160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c160) {
            ctx->pc = 0x30C200u;
            goto label_30c200;
        }
    }
    ctx->pc = 0x30C168u;
    // 0x30c168: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30c168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30c16c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30c16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c170: 0x8c843ba0  lw          $a0, 0x3BA0($a0)
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15264)));
    // 0x30c174: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30c174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30c178: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x30c178u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c17c: 0x54860011  bnel        $a0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x30C17Cu;
    {
        const bool branch_taken_0x30c17c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x30c17c) {
            ctx->pc = 0x30C180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C17Cu;
            // 0x30c180: 0x8203c  dsll32      $a0, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C1C4u;
            goto label_30c1c4;
        }
    }
    ctx->pc = 0x30C184u;
    // 0x30c184: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x30c184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30c188: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30c188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30c18c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30c18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30c190: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30c190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30c194: 0x4297c  dsll32      $a1, $a0, 5
    ctx->pc = 0x30c194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 5));
    // 0x30c198: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x30c198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c19c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x30c19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c1a0: 0x3c042131  lui         $a0, 0x2131
    ctx->pc = 0x30c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8497 << 16));
    // 0x30c1a4: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x30c1a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x30c1a8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x30c1ac: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x30c1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30c1b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30c1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c1b4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x30c1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30c1b8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x30c1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30c1bc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x30C1BCu;
    {
        const bool branch_taken_0x30c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1BCu;
            // 0x30c1c0: 0xfc640030  sd          $a0, 0x30($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1bc) {
            ctx->pc = 0x30C294u;
            goto label_30c294;
        }
    }
    ctx->pc = 0x30C1C4u;
label_30c1c4:
    // 0x30c1c4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30c1c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30c1c8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30c1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30c1cc: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30c1ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30c1d0: 0x4297c  dsll32      $a1, $a0, 5
    ctx->pc = 0x30c1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 5));
    // 0x30c1d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x30c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c1d8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x30c1d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c1dc: 0x3c042141  lui         $a0, 0x2141
    ctx->pc = 0x30c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8513 << 16));
    // 0x30c1e0: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x30c1e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x30c1e4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x30c1e8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x30c1e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30c1ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30c1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c1f0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x30c1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30c1f4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x30c1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30c1f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x30C1F8u;
    {
        const bool branch_taken_0x30c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C1F8u;
            // 0x30c1fc: 0xfc640030  sd          $a0, 0x30($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1f8) {
            ctx->pc = 0x30C294u;
            goto label_30c294;
        }
    }
    ctx->pc = 0x30C200u;
label_30c200:
    // 0x30c200: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30c200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30c204: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c208: 0x8c843ba0  lw          $a0, 0x3BA0($a0)
    ctx->pc = 0x30c208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15264)));
    // 0x30c20c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30c210: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x30c210u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c214: 0x54860011  bnel        $a0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x30C214u;
    {
        const bool branch_taken_0x30c214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x30c214) {
            ctx->pc = 0x30C218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C214u;
            // 0x30c218: 0x8203c  dsll32      $a0, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C25Cu;
            goto label_30c25c;
        }
    }
    ctx->pc = 0x30C21Cu;
    // 0x30c21c: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x30c21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30c220: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30c220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30c224: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30c224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30c228: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30c228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30c22c: 0x4297c  dsll32      $a1, $a0, 5
    ctx->pc = 0x30c22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 5));
    // 0x30c230: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x30c230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30c234: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x30c234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c238: 0x3c042131  lui         $a0, 0x2131
    ctx->pc = 0x30c238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8497 << 16));
    // 0x30c23c: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x30c23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x30c240: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30c240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x30c244: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x30c244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30c248: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30c248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c24c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x30c24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30c250: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x30c250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30c254: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30C254u;
    {
        const bool branch_taken_0x30c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C254u;
            // 0x30c258: 0xfc640030  sd          $a0, 0x30($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c254) {
            ctx->pc = 0x30C294u;
            goto label_30c294;
        }
    }
    ctx->pc = 0x30C25Cu;
label_30c25c:
    // 0x30c25c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x30c25cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30c260: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30c260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30c264: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x30c264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30c268: 0x4297c  dsll32      $a1, $a0, 5
    ctx->pc = 0x30c268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 5));
    // 0x30c26c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x30c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30c270: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x30c270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c274: 0x3c042141  lui         $a0, 0x2141
    ctx->pc = 0x30c274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8513 << 16));
    // 0x30c278: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x30c278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x30c27c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x30c280: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x30c280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30c284: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30c284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c288: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x30c288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30c28c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x30c28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30c290: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x30c290u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
label_30c294:
    // 0x30c294: 0x3e00008  jr          $ra
    ctx->pc = 0x30C294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C29Cu;
    // 0x30c29c: 0x0  nop
    ctx->pc = 0x30c29cu;
    // NOP
    ctx->pc = 0x30c2a0u;
}
