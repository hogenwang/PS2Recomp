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

// Function: sub_0020B3F0
// Address: 0x20b3f0 - 0x20b7d0
void sub_0020B3F0_0x20b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B3F0_0x20b3f0");
#endif

    ctx->pc = 0x20b3f0u;

    // 0x20b3f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20b3f4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b3f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x20b3fc: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x20b3fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20b400: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20b400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20b404: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x20b404u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x20b408: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20b40c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20b410: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x20b410u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x20b414: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20b418: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x20b41c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20b420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b424: 0x3c11009d  lui         $s1, 0x9D
    ctx->pc = 0x20b424u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)157 << 16));
    // 0x20b428: 0x8c6fa480  lw          $t7, -0x5B80($v1)
    ctx->pc = 0x20b428u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b42c: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20b42cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20b430: 0x8fb50078  lw          $s5, 0x78($sp)
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20b434: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b438: 0x3603c  dsll32      $t4, $v1, 0
    ctx->pc = 0x20b438u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20b43c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b440: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x20b440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x20b444: 0xfde30000  sd          $v1, 0x0($t7)
    ctx->pc = 0x20b444u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 3));
    // 0x20b448: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x20b448u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20b44c: 0xfdec0008  sd          $t4, 0x8($t7)
    ctx->pc = 0x20b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 12));
    // 0x20b450: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x20b450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20b454: 0xfde00010  sd          $zero, 0x10($t7)
    ctx->pc = 0x20b454u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 0));
    // 0x20b458: 0xe603c  dsll32      $t4, $t6, 0
    ctx->pc = 0x20b458u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) << (32 + 0));
    // 0x20b45c: 0xfde30018  sd          $v1, 0x18($t7)
    ctx->pc = 0x20b45cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 3));
    // 0x20b460: 0x3c036131  lui         $v1, 0x6131
    ctx->pc = 0x20b460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24881 << 16));
    // 0x20b464: 0x6c6825  or          $t5, $v1, $t4
    ctx->pc = 0x20b464u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x20b468: 0x8fac0070  lw          $t4, 0x70($sp)
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20b46c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x20b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20b470: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20b470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20b474: 0xc9240  sll         $s2, $t4, 9
    ctx->pc = 0x20b474u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
    // 0x20b478: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20b478u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x20b47c: 0x26523480  addiu       $s2, $s2, 0x3480
    ctx->pc = 0x20b47cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 13440));
    // 0x20b480: 0x258c3e80  addiu       $t4, $t4, 0x3E80
    ctx->pc = 0x20b480u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16000));
    // 0x20b484: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x20b484u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x20b488: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x20b488u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x20b48c: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x20b48cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x20b490: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x20b490u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x20b494: 0x24d6825  or          $t5, $s2, $t5
    ctx->pc = 0x20b494u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) | GPR_U64(ctx, 13));
    // 0x20b498: 0xc617c  dsll32      $t4, $t4, 5
    ctx->pc = 0x20b498u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 5));
    // 0x20b49c: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x20b49cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x20b4a0: 0x1831825  or          $v1, $t4, $v1
    ctx->pc = 0x20b4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x20b4a4: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x20b4a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20b4a8: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x20b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
    // 0x20b4ac: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x20b4acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20b4b0: 0xfdee0028  sd          $t6, 0x28($t7)
    ctx->pc = 0x20b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 14));
    // 0x20b4b4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20b4b8: 0x8e18a480  lw          $t8, -0x5B80($s0)
    ctx->pc = 0x20b4b8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943872)));
    // 0x20b4bc: 0x3c0e60ab  lui         $t6, 0x60AB
    ctx->pc = 0x20b4bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)24747 << 16));
    // 0x20b4c0: 0x35ce4000  ori         $t6, $t6, 0x4000
    ctx->pc = 0x20b4c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16384);
    // 0x20b4c4: 0x9231b280  lbu         $s1, -0x4D80($s1)
    ctx->pc = 0x20b4c4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294947456)));
    // 0x20b4c8: 0x340f8001  ori         $t7, $zero, 0x8001
    ctx->pc = 0x20b4c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20b4cc: 0xe803c  dsll32      $s0, $t6, 0
    ctx->pc = 0x20b4ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) << (32 + 0));
    // 0x20b4d0: 0x1f09025  or          $s2, $t7, $s0
    ctx->pc = 0x20b4d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x20b4d4: 0x3c0e0041  lui         $t6, 0x41
    ctx->pc = 0x20b4d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65 << 16));
    // 0x20b4d8: 0x11802b  sltu        $s0, $zero, $s1
    ctx->pc = 0x20b4d8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x20b4dc: 0x35d13413  ori         $s1, $t6, 0x3413
    ctx->pc = 0x20b4dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)13331);
    // 0x20b4e0: 0x107978  dsll        $t7, $s0, 5
    ctx->pc = 0x20b4e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) << 5);
    // 0x20b4e4: 0x1071b8  dsll        $t6, $s0, 6
    ctx->pc = 0x20b4e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << 6);
    // 0x20b4e8: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x20b4e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x20b4ec: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20b4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20b4f0: 0xff0e0030  sd          $t6, 0x30($t8)
    ctx->pc = 0x20b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 14));
    // 0x20b4f4: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20b4f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20b4f8: 0xff0d0038  sd          $t5, 0x38($t8)
    ctx->pc = 0x20b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 13));
    // 0x20b4fc: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20b4fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20b500: 0xff0c0040  sd          $t4, 0x40($t8)
    ctx->pc = 0x20b500u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 12));
    // 0x20b504: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20b504u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20b508: 0xff030048  sd          $v1, 0x48($t8)
    ctx->pc = 0x20b508u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 3));
    // 0x20b50c: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20b50cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20b510: 0xff120050  sd          $s2, 0x50($t8)
    ctx->pc = 0x20b510u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 18));
    // 0x20b514: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b518: 0xff110058  sd          $s1, 0x58($t8)
    ctx->pc = 0x20b518u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 17));
    // 0x20b51c: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x20b51cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x20b520: 0x8e18a480  lw          $t8, -0x5B80($s0)
    ctx->pc = 0x20b520u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943872)));
    // 0x20b524: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x20b524u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x20b528: 0x27160060  addiu       $s6, $t8, 0x60
    ctx->pc = 0x20b528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x20b52c: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x20b52cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20b530: 0xadf6a480  sw          $s6, -0x5B80($t7)
    ctx->pc = 0x20b530u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294943872), GPR_U32(ctx, 22));
    // 0x20b534: 0x157900  sll         $t7, $s5, 4
    ctx->pc = 0x20b534u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x20b538: 0x25f50008  addiu       $s5, $t7, 0x8
    ctx->pc = 0x20b538u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x20b53c: 0xaf150060  sw          $s5, 0x60($t8)
    ctx->pc = 0x20b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 21));
    // 0x20b540: 0x107900  sll         $t7, $s0, 4
    ctx->pc = 0x20b540u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20b544: 0x8dd8a480  lw          $t8, -0x5B80($t6)
    ctx->pc = 0x20b544u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943872)));
    // 0x20b548: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x20b548u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x20b54c: 0x4a900  sll         $s5, $a0, 4
    ctx->pc = 0x20b54cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20b550: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20b554: 0x26b56c00  addiu       $s5, $s5, 0x6C00
    ctx->pc = 0x20b554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27648));
    // 0x20b558: 0xaf0f0004  sw          $t7, 0x4($t8)
    ctx->pc = 0x20b558u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 15));
    // 0x20b55c: 0x3c0e009d  lui         $t6, 0x9D
    ctx->pc = 0x20b55cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)157 << 16));
    // 0x20b560: 0x8dada480  lw          $t5, -0x5B80($t5)
    ctx->pc = 0x20b560u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943872)));
    // 0x20b564: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x20b564u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x20b568: 0x8d8ca480  lw          $t4, -0x5B80($t4)
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943872)));
    // 0x20b56c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x20b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x20b570: 0x8c6ca480  lw          $t4, -0x5B80($v1)
    ctx->pc = 0x20b570u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b574: 0x25830010  addiu       $v1, $t4, 0x10
    ctx->pc = 0x20b574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x20b578: 0xaf23a480  sw          $v1, -0x5B80($t9)
    ctx->pc = 0x20b578u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4294943872), GPR_U32(ctx, 3));
    // 0x20b57c: 0xad880010  sw          $t0, 0x10($t4)
    ctx->pc = 0x20b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 8));
    // 0x20b580: 0x8e83a480  lw          $v1, -0x5B80($s4)
    ctx->pc = 0x20b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943872)));
    // 0x20b584: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x20b584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x20b588: 0x8e63a480  lw          $v1, -0x5B80($s3)
    ctx->pc = 0x20b588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943872)));
    // 0x20b58c: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x20b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x20b590: 0x8e43a480  lw          $v1, -0x5B80($s2)
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943872)));
    // 0x20b594: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x20b594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x20b598: 0x8e2ca480  lw          $t4, -0x5B80($s1)
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943872)));
    // 0x20b59c: 0x25830010  addiu       $v1, $t4, 0x10
    ctx->pc = 0x20b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x20b5a0: 0xae03a480  sw          $v1, -0x5B80($s0)
    ctx->pc = 0x20b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943872), GPR_U32(ctx, 3));
    // 0x20b5a4: 0xad950010  sw          $s5, 0x10($t4)
    ctx->pc = 0x20b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 21));
    // 0x20b5a8: 0x91c3b280  lbu         $v1, -0x4D80($t6)
    ctx->pc = 0x20b5a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294947456)));
    // 0x20b5ac: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20B5ACu;
    {
        const bool branch_taken_0x20b5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b5ac) {
            ctx->pc = 0x20B5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B5ACu;
            // 0x20b5b0: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B604u;
            goto label_20b604;
        }
    }
    ctx->pc = 0x20B5B4u;
    // 0x20b5b4: 0x56100  sll         $t4, $a1, 4
    ctx->pc = 0x20b5b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20b5b8: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20b5bc: 0x258d7100  addiu       $t5, $t4, 0x7100
    ctx->pc = 0x20b5bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 28928));
    // 0x20b5c0: 0x25ae8000  addiu       $t6, $t5, -0x8000
    ctx->pc = 0x20b5c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294934528));
    // 0x20b5c4: 0x346c8889  ori         $t4, $v1, 0x8889
    ctx->pc = 0x20b5c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20b5c8: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x20b5c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x20b5cc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20b5d0: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x20b5d0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x20b5d4: 0xd7180  sll         $t6, $t5, 6
    ctx->pc = 0x20b5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
    // 0x20b5d8: 0x18e0018  mult        $zero, $t4, $t6
    ctx->pc = 0x20b5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20b5dc: 0xe6fc2  srl         $t5, $t6, 31
    ctx->pc = 0x20b5dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x20b5e0: 0x0  nop
    ctx->pc = 0x20b5e0u;
    // NOP
    // 0x20b5e4: 0x6010  mfhi        $t4
    ctx->pc = 0x20b5e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x20b5e8: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x20b5e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x20b5ec: 0xc6203  sra         $t4, $t4, 8
    ctx->pc = 0x20b5ecu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 8));
    // 0x20b5f0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x20b5f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x20b5f4: 0x258c7fff  addiu       $t4, $t4, 0x7FFF
    ctx->pc = 0x20b5f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32767));
    // 0x20b5f8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x20b5f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x20b5fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B5FCu;
    {
        const bool branch_taken_0x20b5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5FCu;
        // 0x20b600: 0x1837024  and         $t6, $t4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5fc) {
            ctx->pc = 0x20B608u;
            goto label_20b608;
        }
    }
    ctx->pc = 0x20B604u;
label_20b604:
    // 0x20b604: 0x246e7100  addiu       $t6, $v1, 0x7100
    ctx->pc = 0x20b604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20b608:
    // 0x20b608: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b60c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20b610: 0x8c6da480  lw          $t5, -0x5B80($v1)
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b614: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20b618: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x20b618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b61c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20b620: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x20b620u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x20b624: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x20b624u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x20b628: 0xadae0004  sw          $t6, 0x4($t5)
    ctx->pc = 0x20b628u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 14));
    // 0x20b62c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20b630: 0x8d8fa480  lw          $t7, -0x5B80($t4)
    ctx->pc = 0x20b630u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943872)));
    // 0x20b634: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20b638: 0x8fae0078  lw          $t6, 0x78($sp)
    ctx->pc = 0x20b638u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20b63c: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20b63cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20b640: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x20b640u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x20b644: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x20b644u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x20b648: 0xadf00008  sw          $s0, 0x8($t7)
    ctx->pc = 0x20b648u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 16));
    // 0x20b64c: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x20b64cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x20b650: 0x8cd0a480  lw          $s0, -0x5B80($a2)
    ctx->pc = 0x20b650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943872)));
    // 0x20b654: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20b654u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20b658: 0x8fac0088  lw          $t4, 0x88($sp)
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20b65c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x20b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20b660: 0x8faf0080  lw          $t7, 0x80($sp)
    ctx->pc = 0x20b660u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20b664: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20b664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20b668: 0x1cc3021  addu        $a2, $t6, $t4
    ctx->pc = 0x20b668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x20b66c: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20b66cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20b670: 0x8c8ca480  lw          $t4, -0x5B80($a0)
    ctx->pc = 0x20b670u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943872)));
    // 0x20b674: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b674u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20b678: 0x8fae0090  lw          $t6, 0x90($sp)
    ctx->pc = 0x20b678u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20b67c: 0x25950010  addiu       $s5, $t4, 0x10
    ctx->pc = 0x20b67cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x20b680: 0xadb5a480  sw          $s5, -0x5B80($t5)
    ctx->pc = 0x20b680u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294943872), GPR_U32(ctx, 21));
    // 0x20b684: 0x1ee2021  addu        $a0, $t7, $t6
    ctx->pc = 0x20b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x20b688: 0xad860010  sw          $a2, 0x10($t4)
    ctx->pc = 0x20b688u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 6));
    // 0x20b68c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20b690: 0x8e8ca480  lw          $t4, -0x5B80($s4)
    ctx->pc = 0x20b690u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943872)));
    // 0x20b694: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20b694u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20b698: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20b69c: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20b69cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20b6a0: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x20b6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x20b6a4: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x20b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x20b6a8: 0x8e64a480  lw          $a0, -0x5B80($s3)
    ctx->pc = 0x20b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943872)));
    // 0x20b6ac: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x20b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x20b6b0: 0x8e44a480  lw          $a0, -0x5B80($s2)
    ctx->pc = 0x20b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943872)));
    // 0x20b6b4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x20b6b8: 0x8e2ca480  lw          $t4, -0x5B80($s1)
    ctx->pc = 0x20b6b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943872)));
    // 0x20b6bc: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x20b6c0: 0xae04a480  sw          $a0, -0x5B80($s0)
    ctx->pc = 0x20b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943872), GPR_U32(ctx, 4));
    // 0x20b6c4: 0xad880010  sw          $t0, 0x10($t4)
    ctx->pc = 0x20b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 8));
    // 0x20b6c8: 0x8f24a480  lw          $a0, -0x5B80($t9)
    ctx->pc = 0x20b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294943872)));
    // 0x20b6cc: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x20b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x20b6d0: 0x8f04a480  lw          $a0, -0x5B80($t8)
    ctx->pc = 0x20b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943872)));
    // 0x20b6d4: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x20b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x20b6d8: 0x8de4a480  lw          $a0, -0x5B80($t7)
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943872)));
    // 0x20b6dc: 0xac8b000c  sw          $t3, 0xC($a0)
    ctx->pc = 0x20b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 11));
    // 0x20b6e0: 0x8dc8a480  lw          $t0, -0x5B80($t6)
    ctx->pc = 0x20b6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943872)));
    // 0x20b6e4: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x20b6e8: 0xada4a480  sw          $a0, -0x5B80($t5)
    ctx->pc = 0x20b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294943872), GPR_U32(ctx, 4));
    // 0x20b6ec: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x20b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x20b6f0: 0x90c3b280  lbu         $v1, -0x4D80($a2)
    ctx->pc = 0x20b6f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947456)));
    // 0x20b6f4: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20B6F4u;
    {
        const bool branch_taken_0x20b6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b6f4) {
            ctx->pc = 0x20B6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B6F4u;
            // 0x20b6f8: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B750u;
            goto label_20b750;
        }
    }
    ctx->pc = 0x20B6FCu;
    // 0x20b6fc: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x20b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x20b700: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20b700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20b704: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20b704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20b708: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x20b708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    // 0x20b70c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x20b70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20b710: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x20b710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20b714: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20b714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20b718: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20b718u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20b71c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20b71cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20b720: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x20b720u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x20b724: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x20b724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20b728: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20b72c: 0x0  nop
    ctx->pc = 0x20b72cu;
    // NOP
    // 0x20b730: 0x2010  mfhi        $a0
    ctx->pc = 0x20b730u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20b734: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20b734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20b738: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x20b738u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x20b73c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20b740: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x20b740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x20b744: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20b744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20B748u;
    {
        const bool branch_taken_0x20b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B748u;
        // 0x20b74c: 0x835024  and         $t2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b748) {
            ctx->pc = 0x20B758u;
            goto label_20b758;
        }
    }
    ctx->pc = 0x20B750u;
label_20b750:
    // 0x20b750: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20b754: 0x246a7100  addiu       $t2, $v1, 0x7100
    ctx->pc = 0x20b754u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20b758:
    // 0x20b758: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b75c: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20b75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20b760: 0x8c63a480  lw          $v1, -0x5B80($v1)
    ctx->pc = 0x20b760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b764: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x20b764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b768: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20b768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20b76c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20b770: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20b770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20b774: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20b774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20b778: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x20b778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x20b77c: 0x8d08a480  lw          $t0, -0x5B80($t0)
    ctx->pc = 0x20b77cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943872)));
    // 0x20b780: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b784: 0xad090008  sw          $t1, 0x8($t0)
    ctx->pc = 0x20b784u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 9));
    // 0x20b788: 0x8ce7a480  lw          $a3, -0x5B80($a3)
    ctx->pc = 0x20b788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943872)));
    // 0x20b78c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x20b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x20b790: 0x8cc6a480  lw          $a2, -0x5B80($a2)
    ctx->pc = 0x20b790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943872)));
    // 0x20b794: 0x8c84a068  lw          $a0, -0x5F98($a0)
    ctx->pc = 0x20b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942824)));
    // 0x20b798: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20b79c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b7a0: 0xaca6a480  sw          $a2, -0x5B80($a1)
    ctx->pc = 0x20b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943872), GPR_U32(ctx, 6));
    // 0x20b7a4: 0xac64a068  sw          $a0, -0x5F98($v1)
    ctx->pc = 0x20b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942824), GPR_U32(ctx, 4));
    // 0x20b7a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20b7a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b7ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20b7acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b7b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20b7b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20b7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20b7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x20B7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7C4u;
        // 0x20b7c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B7CCu;
    // 0x20b7cc: 0x0  nop
    ctx->pc = 0x20b7ccu;
    // NOP
}
