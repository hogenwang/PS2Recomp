#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00307390
// Address: 0x307390 - 0x307610
void sub_00307390_0x307390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307390_0x307390");
#endif

    ctx->pc = 0x307390u;

    // 0x307390: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x307390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x307394: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x307394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x307398: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x307398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x30739c: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x30739cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3073a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3073a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3073a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3073a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3073a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3073a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3073ac: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x3073acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3073b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3073b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3073b4: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x3073b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x3073b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3073b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3073bc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x3073bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3073c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3073c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3073c4: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x3073c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3073c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3073c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3073cc: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x3073ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3073d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3073d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3073d4: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x3073d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3073d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3073d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3073dc: 0x3c0c01d1  lui         $t4, 0x1D1
    ctx->pc = 0x3073dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)465 << 16));
    // 0x3073e0: 0x8c631dc0  lw          $v1, 0x1DC0($v1)
    ctx->pc = 0x3073e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7616)));
    // 0x3073e4: 0x3c1501d1  lui         $s5, 0x1D1
    ctx->pc = 0x3073e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)465 << 16));
    // 0x3073e8: 0x3c1401d1  lui         $s4, 0x1D1
    ctx->pc = 0x3073e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)465 << 16));
    // 0x3073ec: 0x3c1301d1  lui         $s3, 0x1D1
    ctx->pc = 0x3073ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)465 << 16));
    // 0x3073f0: 0x3c1201d1  lui         $s2, 0x1D1
    ctx->pc = 0x3073f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)465 << 16));
    // 0x3073f4: 0x3c1101d1  lui         $s1, 0x1D1
    ctx->pc = 0x3073f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)465 << 16));
    // 0x3073f8: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x3073f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x3073fc: 0x3c1001d1  lui         $s0, 0x1D1
    ctx->pc = 0x3073fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)465 << 16));
    // 0x307400: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x307400u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x307404: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x307404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x307408: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x307408u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x30740c: 0x3c0601d1  lui         $a2, 0x1D1
    ctx->pc = 0x30740cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)465 << 16));
    // 0x307410: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x307410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x307414: 0x34e70005  ori         $a3, $a3, 0x5
    ctx->pc = 0x307414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5);
    // 0x307418: 0x94c91db0  lhu         $t1, 0x1DB0($a2)
    ctx->pc = 0x307418u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 7600)));
    // 0x30741c: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x30741cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x307420: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x307420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x307424: 0x3c1901d1  lui         $t9, 0x1D1
    ctx->pc = 0x307424u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)465 << 16));
    // 0x307428: 0x3c1801d1  lui         $t8, 0x1D1
    ctx->pc = 0x307428u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)465 << 16));
    // 0x30742c: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x30742cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x307430: 0x3406dc01  ori         $a2, $zero, 0xDC01
    ctx->pc = 0x307430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56321);
    // 0x307434: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x307434u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x307438: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x307438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30743c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x30743cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x307440: 0x94240  sll         $t0, $t1, 9
    ctx->pc = 0x307440u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
    // 0x307444: 0x25083480  addiu       $t0, $t0, 0x3480
    ctx->pc = 0x307444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13440));
    // 0x307448: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x307448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30744c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x30744cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x307450: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x307450u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x307454: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x307454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x307458: 0x3c0660ab  lui         $a2, 0x60AB
    ctx->pc = 0x307458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24747 << 16));
    // 0x30745c: 0xfc680020  sd          $t0, 0x20($v1)
    ctx->pc = 0x30745cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 8));
    // 0x307460: 0xfc670028  sd          $a3, 0x28($v1)
    ctx->pc = 0x307460u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 7));
    // 0x307464: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x307464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x307468: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x307468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30746c: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x30746cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x307470: 0xfc6b0038  sd          $t3, 0x38($v1)
    ctx->pc = 0x307470u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 11));
    // 0x307474: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x307474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x307478: 0xfc6a0040  sd          $t2, 0x40($v1)
    ctx->pc = 0x307478u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 10));
    // 0x30747c: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x30747cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x307480: 0xfc690048  sd          $t1, 0x48($v1)
    ctx->pc = 0x307480u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 9));
    // 0x307484: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x307484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x307488: 0x34c73413  ori         $a3, $a2, 0x3413
    ctx->pc = 0x307488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13331);
    // 0x30748c: 0xfc680050  sd          $t0, 0x50($v1)
    ctx->pc = 0x30748cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 8));
    // 0x307490: 0xfc670058  sd          $a3, 0x58($v1)
    ctx->pc = 0x307490u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 7));
    // 0x307494: 0x3c0601d1  lui         $a2, 0x1D1
    ctx->pc = 0x307494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)465 << 16));
    // 0x307498: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x307498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x30749c: 0x3c0801d1  lui         $t0, 0x1D1
    ctx->pc = 0x30749cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)465 << 16));
    // 0x3074a0: 0x8cc31dc0  lw          $v1, 0x1DC0($a2)
    ctx->pc = 0x3074a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7616)));
    // 0x3074a4: 0x3c0b01d1  lui         $t3, 0x1D1
    ctx->pc = 0x3074a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)465 << 16));
    // 0x3074a8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3074a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3074ac: 0x3c0a01d1  lui         $t2, 0x1D1
    ctx->pc = 0x3074acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)465 << 16));
    // 0x3074b0: 0x3c0901d1  lui         $t1, 0x1D1
    ctx->pc = 0x3074b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)465 << 16));
    // 0x3074b4: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x3074b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x3074b8: 0x3c0601d1  lui         $a2, 0x1D1
    ctx->pc = 0x3074b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)465 << 16));
    // 0x3074bc: 0x8d0d1dc0  lw          $t5, 0x1DC0($t0)
    ctx->pc = 0x3074bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7616)));
    // 0x3074c0: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x3074c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
    // 0x3074c4: 0x442c0  sll         $t0, $a0, 11
    ctx->pc = 0x3074c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x3074c8: 0xada00068  sw          $zero, 0x68($t5)
    ctx->pc = 0x3074c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 104), GPR_U32(ctx, 0));
    // 0x3074cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3074ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3074d0: 0x25086c00  addiu       $t0, $t0, 0x6C00
    ctx->pc = 0x3074d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27648));
    // 0x3074d4: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x3074d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x3074d8: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x3074d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
    // 0x3074dc: 0x249e6c00  addiu       $fp, $a0, 0x6C00
    ctx->pc = 0x3074dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x3074e0: 0x8d881dc0  lw          $t0, 0x1DC0($t4)
    ctx->pc = 0x3074e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 7616)));
    // 0x3074e4: 0x522c0  sll         $a0, $a1, 11
    ctx->pc = 0x3074e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x3074e8: 0x3c0d01d1  lui         $t5, 0x1D1
    ctx->pc = 0x3074e8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)465 << 16));
    // 0x3074ec: 0x24977200  addiu       $s7, $a0, 0x7200
    ctx->pc = 0x3074ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
    // 0x3074f0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3074f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3074f4: 0xad00006c  sw          $zero, 0x6C($t0)
    ctx->pc = 0x3074f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 0));
    // 0x3074f8: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x3074f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x3074fc: 0x3c0c01d1  lui         $t4, 0x1D1
    ctx->pc = 0x3074fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)465 << 16));
    // 0x307500: 0x24967200  addiu       $s6, $a0, 0x7200
    ctx->pc = 0x307500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
    // 0x307504: 0x3c0801d1  lui         $t0, 0x1D1
    ctx->pc = 0x307504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)465 << 16));
    // 0x307508: 0x8d641dc0  lw          $a0, 0x1DC0($t3)
    ctx->pc = 0x307508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 7616)));
    // 0x30750c: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x30750cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x307510: 0xac870070  sw          $a3, 0x70($a0)
    ctx->pc = 0x307510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 7));
    // 0x307514: 0x3c0b01d1  lui         $t3, 0x1D1
    ctx->pc = 0x307514u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)465 << 16));
    // 0x307518: 0x8d441dc0  lw          $a0, 0x1DC0($t2)
    ctx->pc = 0x307518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 7616)));
    // 0x30751c: 0xac870074  sw          $a3, 0x74($a0)
    ctx->pc = 0x30751cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 7));
    // 0x307520: 0x3c0a01d1  lui         $t2, 0x1D1
    ctx->pc = 0x307520u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)465 << 16));
    // 0x307524: 0x8d241dc0  lw          $a0, 0x1DC0($t1)
    ctx->pc = 0x307524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 7616)));
    // 0x307528: 0xac870078  sw          $a3, 0x78($a0)
    ctx->pc = 0x307528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 7));
    // 0x30752c: 0x3c0901d1  lui         $t1, 0x1D1
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)465 << 16));
    // 0x307530: 0x90c61d48  lbu         $a2, 0x1D48($a2)
    ctx->pc = 0x307530u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7496)));
    // 0x307534: 0x3c0401d1  lui         $a0, 0x1D1
    ctx->pc = 0x307534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
    // 0x307538: 0x8c631dc0  lw          $v1, 0x1DC0($v1)
    ctx->pc = 0x307538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7616)));
    // 0x30753c: 0xac66007c  sw          $a2, 0x7C($v1)
    ctx->pc = 0x30753cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 6));
    // 0x307540: 0x8eb51dc0  lw          $s5, 0x1DC0($s5)
    ctx->pc = 0x307540u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7616)));
    // 0x307544: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x307544u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x307548: 0xaea30080  sw          $v1, 0x80($s5)
    ctx->pc = 0x307548u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 3));
    // 0x30754c: 0x8e831dc0  lw          $v1, 0x1DC0($s4)
    ctx->pc = 0x30754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7616)));
    // 0x307550: 0xac770084  sw          $s7, 0x84($v1)
    ctx->pc = 0x307550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 23));
    // 0x307554: 0x8e731dc0  lw          $s3, 0x1DC0($s3)
    ctx->pc = 0x307554u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7616)));
    // 0x307558: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x307558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30755c: 0xae630088  sw          $v1, 0x88($s3)
    ctx->pc = 0x30755cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 3));
    // 0x307560: 0x8e431dc0  lw          $v1, 0x1DC0($s2)
    ctx->pc = 0x307560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7616)));
    // 0x307564: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x307564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x307568: 0x8e311dc0  lw          $s1, 0x1DC0($s1)
    ctx->pc = 0x307568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7616)));
    // 0x30756c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x30756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x307570: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x307570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
    // 0x307574: 0x8e101dc0  lw          $s0, 0x1DC0($s0)
    ctx->pc = 0x307574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7616)));
    // 0x307578: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x307578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x30757c: 0x8f231dc0  lw          $v1, 0x1DC0($t9)
    ctx->pc = 0x30757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 7616)));
    // 0x307580: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x307580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x307584: 0x8f031dc0  lw          $v1, 0x1DC0($t8)
    ctx->pc = 0x307584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 7616)));
    // 0x307588: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x307588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x30758c: 0x8de31dc0  lw          $v1, 0x1DC0($t7)
    ctx->pc = 0x30758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 7616)));
    // 0x307590: 0xac6700a0  sw          $a3, 0xA0($v1)
    ctx->pc = 0x307590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 7));
    // 0x307594: 0x8dc31dc0  lw          $v1, 0x1DC0($t6)
    ctx->pc = 0x307594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 7616)));
    // 0x307598: 0xac6700a4  sw          $a3, 0xA4($v1)
    ctx->pc = 0x307598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 7));
    // 0x30759c: 0x8da31dc0  lw          $v1, 0x1DC0($t5)
    ctx->pc = 0x30759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 7616)));
    // 0x3075a0: 0xac6700a8  sw          $a3, 0xA8($v1)
    ctx->pc = 0x3075a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 7));
    // 0x3075a4: 0x8d831dc0  lw          $v1, 0x1DC0($t4)
    ctx->pc = 0x3075a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 7616)));
    // 0x3075a8: 0xac6600ac  sw          $a2, 0xAC($v1)
    ctx->pc = 0x3075a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 6));
    // 0x3075ac: 0x8d631dc0  lw          $v1, 0x1DC0($t3)
    ctx->pc = 0x3075acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 7616)));
    // 0x3075b0: 0xac7e00b0  sw          $fp, 0xB0($v1)
    ctx->pc = 0x3075b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 30));
    // 0x3075b4: 0x8d431dc0  lw          $v1, 0x1DC0($t2)
    ctx->pc = 0x3075b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 7616)));
    // 0x3075b8: 0xac7600b4  sw          $s6, 0xB4($v1)
    ctx->pc = 0x3075b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 22));
    // 0x3075bc: 0x8d261dc0  lw          $a2, 0x1DC0($t1)
    ctx->pc = 0x3075bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 7616)));
    // 0x3075c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3075c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3075c4: 0xacc300b8  sw          $v1, 0xB8($a2)
    ctx->pc = 0x3075c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 3));
    // 0x3075c8: 0x8d031dc0  lw          $v1, 0x1DC0($t0)
    ctx->pc = 0x3075c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7616)));
    // 0x3075cc: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x3075ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
    // 0x3075d0: 0x8ca31dc0  lw          $v1, 0x1DC0($a1)
    ctx->pc = 0x3075d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7616)));
    // 0x3075d4: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x3075d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x3075d8: 0xac831dc0  sw          $v1, 0x1DC0($a0)
    ctx->pc = 0x3075d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7616), GPR_U32(ctx, 3));
    // 0x3075dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3075dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3075e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3075e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3075e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3075e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3075e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3075e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3075ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3075ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3075f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3075f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3075f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3075f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3075f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3075f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3075fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3075fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307600: 0x3e00008  jr          $ra
    ctx->pc = 0x307600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307600u;
            // 0x307604: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307608u;
    // 0x307608: 0x0  nop
    ctx->pc = 0x307608u;
    // NOP
    // 0x30760c: 0x0  nop
    ctx->pc = 0x30760cu;
    // NOP
    ctx->pc = 0x307610u;
}
