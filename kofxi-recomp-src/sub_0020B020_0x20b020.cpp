#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020B020
// Address: 0x20b020 - 0x20b3f0
void sub_0020B020_0x20b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B020_0x20b020");
#endif

    ctx->pc = 0x20b020u;

    // 0x20b020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20b024: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x20b024u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x20b028: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20b02c: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x20b02cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x20b030: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20b034: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x20b034u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b038: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20b03c: 0x18d6825  or          $t5, $t4, $t5
    ctx->pc = 0x20b03cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x20b040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20b044: 0x240f0006  addiu       $t7, $zero, 0x6
    ctx->pc = 0x20b044u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20b048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20b04c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b054: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x20b054u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20b058: 0x8c63a480  lw          $v1, -0x5B80($v1)
    ctx->pc = 0x20b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b05c: 0xf703c  dsll32      $t6, $t7, 0
    ctx->pc = 0x20b05cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << (32 + 0));
    // 0x20b060: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x20b064: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x20b068: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x20b068u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x20b06c: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20b06cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20b070: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x20b070u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x20b074: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x20b074u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x20b078: 0x240d003f  addiu       $t5, $zero, 0x3F
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20b07c: 0x96240  sll         $t4, $t1, 9
    ctx->pc = 0x20b07cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
    // 0x20b080: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x20b080u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x20b084: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x20b084u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x20b088: 0x258c3480  addiu       $t4, $t4, 0x3480
    ctx->pc = 0x20b088u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 13440));
    // 0x20b08c: 0x25293e80  addiu       $t1, $t1, 0x3E80
    ctx->pc = 0x20b08cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16000));
    // 0x20b090: 0xfc6d0018  sd          $t5, 0x18($v1)
    ctx->pc = 0x20b090u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 13));
    // 0x20b094: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x20b094u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x20b098: 0xc803c  dsll32      $s0, $t4, 0
    ctx->pc = 0x20b098u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << (32 + 0));
    // 0x20b09c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x20b09cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x20b0a0: 0x3c0d6131  lui         $t5, 0x6131
    ctx->pc = 0x20b0a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)24881 << 16));
    // 0x20b0a4: 0x9617c  dsll32      $t4, $t1, 5
    ctx->pc = 0x20b0a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 5));
    // 0x20b0a8: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x20b0a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x20b0ac: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x20b0acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x20b0b0: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x20b0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x20b0b4: 0x20d6825  or          $t5, $s0, $t5
    ctx->pc = 0x20b0b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 16) | GPR_U64(ctx, 13));
    // 0x20b0b8: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x20b0b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x20b0bc: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x20b0bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x20b0c0: 0x3c0e009d  lui         $t6, 0x9D
    ctx->pc = 0x20b0c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)157 << 16));
    // 0x20b0c4: 0x1894825  or          $t1, $t4, $t1
    ctx->pc = 0x20b0c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x20b0c8: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20b0c8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20b0cc: 0xfc690020  sd          $t1, 0x20($v1)
    ctx->pc = 0x20b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 9));
    // 0x20b0d0: 0x240c0014  addiu       $t4, $zero, 0x14
    ctx->pc = 0x20b0d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20b0d4: 0xfc6f0028  sd          $t7, 0x28($v1)
    ctx->pc = 0x20b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 15));
    // 0x20b0d8: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x20b0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20b0dc: 0x91d0b280  lbu         $s0, -0x4D80($t6)
    ctx->pc = 0x20b0dcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294947456)));
    // 0x20b0e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20b0e4: 0x8dada480  lw          $t5, -0x5B80($t5)
    ctx->pc = 0x20b0e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943872)));
    // 0x20b0e8: 0x3c0e60ab  lui         $t6, 0x60AB
    ctx->pc = 0x20b0e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)24747 << 16));
    // 0x20b0ec: 0x35ce4000  ori         $t6, $t6, 0x4000
    ctx->pc = 0x20b0ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16384);
    // 0x20b0f0: 0xe783c  dsll32      $t7, $t6, 0
    ctx->pc = 0x20b0f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << (32 + 0));
    // 0x20b0f4: 0x340e8001  ori         $t6, $zero, 0x8001
    ctx->pc = 0x20b0f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20b0f8: 0x1cf9025  or          $s2, $t6, $t7
    ctx->pc = 0x20b0f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x20b0fc: 0x3c0e0041  lui         $t6, 0x41
    ctx->pc = 0x20b0fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65 << 16));
    // 0x20b100: 0x10782b  sltu        $t7, $zero, $s0
    ctx->pc = 0x20b100u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x20b104: 0x35d13413  ori         $s1, $t6, 0x3413
    ctx->pc = 0x20b104u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)13331);
    // 0x20b108: 0xf8178  dsll        $s0, $t7, 5
    ctx->pc = 0x20b108u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 15) << 5);
    // 0x20b10c: 0xf71b8  dsll        $t6, $t7, 6
    ctx->pc = 0x20b10cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 6);
    // 0x20b110: 0x20e8025  or          $s0, $s0, $t6
    ctx->pc = 0x20b110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 14));
    // 0x20b114: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20b118: 0xfdb00030  sd          $s0, 0x30($t5)
    ctx->pc = 0x20b118u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 48), GPR_U64(ctx, 16));
    // 0x20b11c: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20b11cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20b120: 0xfdac0038  sd          $t4, 0x38($t5)
    ctx->pc = 0x20b120u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 56), GPR_U64(ctx, 12));
    // 0x20b124: 0xa8100  sll         $s0, $t2, 4
    ctx->pc = 0x20b124u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x20b128: 0xfda90040  sd          $t1, 0x40($t5)
    ctx->pc = 0x20b128u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 64), GPR_U64(ctx, 9));
    // 0x20b12c: 0x260c0008  addiu       $t4, $s0, 0x8
    ctx->pc = 0x20b12cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x20b130: 0xfda30048  sd          $v1, 0x48($t5)
    ctx->pc = 0x20b130u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 72), GPR_U64(ctx, 3));
    // 0x20b134: 0xb4900  sll         $t1, $t3, 4
    ctx->pc = 0x20b134u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20b138: 0xfdb20050  sd          $s2, 0x50($t5)
    ctx->pc = 0x20b138u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 80), GPR_U64(ctx, 18));
    // 0x20b13c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x20b140: 0xfdb10058  sd          $s1, 0x58($t5)
    ctx->pc = 0x20b140u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 88), GPR_U64(ctx, 17));
    // 0x20b144: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x20b144u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x20b148: 0x8df5a480  lw          $s5, -0x5B80($t7)
    ctx->pc = 0x20b148u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943872)));
    // 0x20b14c: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x20b150: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20b154: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20b158: 0x26ad0060  addiu       $t5, $s5, 0x60
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x20b15c: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20b15cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20b160: 0xadcda480  sw          $t5, -0x5B80($t6)
    ctx->pc = 0x20b160u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294943872), GPR_U32(ctx, 13));
    // 0x20b164: 0xaeac0060  sw          $t4, 0x60($s5)
    ctx->pc = 0x20b164u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 12));
    // 0x20b168: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20b168u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20b16c: 0x8e95a480  lw          $s5, -0x5B80($s4)
    ctx->pc = 0x20b16cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943872)));
    // 0x20b170: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20b174: 0x3c0c009d  lui         $t4, 0x9D
    ctx->pc = 0x20b174u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)157 << 16));
    // 0x20b178: 0xaea90004  sw          $t1, 0x4($s5)
    ctx->pc = 0x20b178u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 9));
    // 0x20b17c: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x20b17cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20b180: 0x8e69a480  lw          $t1, -0x5B80($s3)
    ctx->pc = 0x20b180u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943872)));
    // 0x20b184: 0x26946c00  addiu       $s4, $s4, 0x6C00
    ctx->pc = 0x20b184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 27648));
    // 0x20b188: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x20b188u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x20b18c: 0x8e49a480  lw          $t1, -0x5B80($s2)
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943872)));
    // 0x20b190: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x20b190u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x20b194: 0x8e31a480  lw          $s1, -0x5B80($s1)
    ctx->pc = 0x20b194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943872)));
    // 0x20b198: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x20b198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x20b19c: 0xae09a480  sw          $t1, -0x5B80($s0)
    ctx->pc = 0x20b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943872), GPR_U32(ctx, 9));
    // 0x20b1a0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x20b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x20b1a4: 0x8f29a480  lw          $t1, -0x5B80($t9)
    ctx->pc = 0x20b1a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294943872)));
    // 0x20b1a8: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x20b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x20b1ac: 0x8f09a480  lw          $t1, -0x5B80($t8)
    ctx->pc = 0x20b1acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943872)));
    // 0x20b1b0: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x20b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x20b1b4: 0x8de3a480  lw          $v1, -0x5B80($t7)
    ctx->pc = 0x20b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943872)));
    // 0x20b1b8: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x20b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x20b1bc: 0x8dc9a480  lw          $t1, -0x5B80($t6)
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943872)));
    // 0x20b1c0: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x20b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x20b1c4: 0xada3a480  sw          $v1, -0x5B80($t5)
    ctx->pc = 0x20b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294943872), GPR_U32(ctx, 3));
    // 0x20b1c8: 0xad340010  sw          $s4, 0x10($t1)
    ctx->pc = 0x20b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 20));
    // 0x20b1cc: 0x9183b280  lbu         $v1, -0x4D80($t4)
    ctx->pc = 0x20b1ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294947456)));
    // 0x20b1d0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20B1D0u;
    {
        const bool branch_taken_0x20b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1d0) {
            ctx->pc = 0x20B1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B1D0u;
            // 0x20b1d4: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B228u;
            goto label_20b228;
        }
    }
    ctx->pc = 0x20B1D8u;
    // 0x20b1d8: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x20b1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20b1dc: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20b1e0: 0x252c7100  addiu       $t4, $t1, 0x7100
    ctx->pc = 0x20b1e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 28928));
    // 0x20b1e4: 0x258d8000  addiu       $t5, $t4, -0x8000
    ctx->pc = 0x20b1e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294934528));
    // 0x20b1e8: 0x34698889  ori         $t1, $v1, 0x8889
    ctx->pc = 0x20b1e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20b1ec: 0xd60c0  sll         $t4, $t5, 3
    ctx->pc = 0x20b1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x20b1f0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20b1f4: 0x18d6023  subu        $t4, $t4, $t5
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x20b1f8: 0xc6980  sll         $t5, $t4, 6
    ctx->pc = 0x20b1f8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x20b1fc: 0x12d0018  mult        $zero, $t1, $t5
    ctx->pc = 0x20b1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20b200: 0xd67c2  srl         $t4, $t5, 31
    ctx->pc = 0x20b200u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x20b204: 0x0  nop
    ctx->pc = 0x20b204u;
    // NOP
    // 0x20b208: 0x4810  mfhi        $t1
    ctx->pc = 0x20b208u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x20b20c: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x20b210: 0x94a03  sra         $t1, $t1, 8
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 8));
    // 0x20b214: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x20b214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x20b218: 0x25297fff  addiu       $t1, $t1, 0x7FFF
    ctx->pc = 0x20b218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32767));
    // 0x20b21c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20b21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20b220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B220u;
    {
        const bool branch_taken_0x20b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B220u;
            // 0x20b224: 0x1236024  and         $t4, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b220) {
            ctx->pc = 0x20B22Cu;
            goto label_20b22c;
        }
    }
    ctx->pc = 0x20B228u;
label_20b228:
    // 0x20b228: 0x246c7100  addiu       $t4, $v1, 0x7100
    ctx->pc = 0x20b228u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20b22c:
    // 0x20b22c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b230: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20b234: 0x8c69a480  lw          $t1, -0x5B80($v1)
    ctx->pc = 0x20b234u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b238: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x20b238u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b23c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20b240: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20b240u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20b244: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20b244u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20b248: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x20b248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20b24c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20b250: 0xad2c0004  sw          $t4, 0x4($t1)
    ctx->pc = 0x20b250u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 12));
    // 0x20b254: 0x24706c00  addiu       $s0, $v1, 0x6C00
    ctx->pc = 0x20b254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x20b258: 0x8fac0060  lw          $t4, 0x60($sp)
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b25c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b260: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20b264: 0x8c6da480  lw          $t5, -0x5B80($v1)
    ctx->pc = 0x20b264u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b268: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x20b268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x20b26c: 0x8fa90068  lw          $t1, 0x68($sp)
    ctx->pc = 0x20b26cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20b270: 0xa9100  sll         $s2, $t2, 4
    ctx->pc = 0x20b270u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x20b274: 0xadae0008  sw          $t6, 0x8($t5)
    ctx->pc = 0x20b274u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 14));
    // 0x20b278: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b27c: 0x8ccca480  lw          $t4, -0x5B80($a2)
    ctx->pc = 0x20b27cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943872)));
    // 0x20b280: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20b280u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20b284: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20b284u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20b288: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20b288u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20b28c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x20b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x20b290: 0x1693021  addu        $a2, $t3, $t1
    ctx->pc = 0x20b290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x20b294: 0x8c99a480  lw          $t9, -0x5B80($a0)
    ctx->pc = 0x20b294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943872)));
    // 0x20b298: 0x69900  sll         $s3, $a2, 4
    ctx->pc = 0x20b298u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20b29c: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20b29cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20b2a0: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x20b2a4: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20b2a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20b2a8: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20b2ac: 0x27340010  addiu       $s4, $t9, 0x10
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x20b2b0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20b2b4: 0xac74a480  sw          $s4, -0x5B80($v1)
    ctx->pc = 0x20b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943872), GPR_U32(ctx, 20));
    // 0x20b2b8: 0xaf320010  sw          $s2, 0x10($t9)
    ctx->pc = 0x20b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 18));
    // 0x20b2bc: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x20b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x20b2c0: 0x8f12a480  lw          $s2, -0x5B80($t8)
    ctx->pc = 0x20b2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943872)));
    // 0x20b2c4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x20b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x20b2c8: 0x8defa480  lw          $t7, -0x5B80($t7)
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943872)));
    // 0x20b2cc: 0xade00008  sw          $zero, 0x8($t7)
    ctx->pc = 0x20b2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 0));
    // 0x20b2d0: 0x8dcea480  lw          $t6, -0x5B80($t6)
    ctx->pc = 0x20b2d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943872)));
    // 0x20b2d4: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x20b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
    // 0x20b2d8: 0x8daea480  lw          $t6, -0x5B80($t5)
    ctx->pc = 0x20b2d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943872)));
    // 0x20b2dc: 0x25cd0010  addiu       $t5, $t6, 0x10
    ctx->pc = 0x20b2dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x20b2e0: 0xad8da480  sw          $t5, -0x5B80($t4)
    ctx->pc = 0x20b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294943872), GPR_U32(ctx, 13));
    // 0x20b2e4: 0xadd10010  sw          $s1, 0x10($t6)
    ctx->pc = 0x20b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 17));
    // 0x20b2e8: 0x8d6ba480  lw          $t3, -0x5B80($t3)
    ctx->pc = 0x20b2e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943872)));
    // 0x20b2ec: 0xad710004  sw          $s1, 0x4($t3)
    ctx->pc = 0x20b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 17));
    // 0x20b2f0: 0x8d4aa480  lw          $t2, -0x5B80($t2)
    ctx->pc = 0x20b2f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943872)));
    // 0x20b2f4: 0xad510008  sw          $s1, 0x8($t2)
    ctx->pc = 0x20b2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 17));
    // 0x20b2f8: 0x8d29a480  lw          $t1, -0x5B80($t1)
    ctx->pc = 0x20b2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943872)));
    // 0x20b2fc: 0xad28000c  sw          $t0, 0xC($t1)
    ctx->pc = 0x20b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
    // 0x20b300: 0x8cc8a480  lw          $t0, -0x5B80($a2)
    ctx->pc = 0x20b300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943872)));
    // 0x20b304: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x20b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x20b308: 0xac86a480  sw          $a2, -0x5B80($a0)
    ctx->pc = 0x20b308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943872), GPR_U32(ctx, 6));
    // 0x20b30c: 0xad100010  sw          $s0, 0x10($t0)
    ctx->pc = 0x20b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 16));
    // 0x20b310: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x20b310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x20b314: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20B314u;
    {
        const bool branch_taken_0x20b314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b314) {
            ctx->pc = 0x20B318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B314u;
            // 0x20b318: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B370u;
            goto label_20b370;
        }
    }
    ctx->pc = 0x20B31Cu;
    // 0x20b31c: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x20b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x20b320: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20b320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20b324: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20b324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20b328: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    // 0x20b32c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x20b32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20b330: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x20b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20b334: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20b338: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20b338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20b33c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20b340: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x20b340u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x20b344: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x20b344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20b348: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x20b348u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20b34c: 0x0  nop
    ctx->pc = 0x20b34cu;
    // NOP
    // 0x20b350: 0x2010  mfhi        $a0
    ctx->pc = 0x20b350u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20b354: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20b354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20b358: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x20b358u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x20b35c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20b360: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x20b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x20b364: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20b364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b368: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20B368u;
    {
        const bool branch_taken_0x20b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B368u;
            // 0x20b36c: 0x835024  and         $t2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b368) {
            ctx->pc = 0x20B378u;
            goto label_20b378;
        }
    }
    ctx->pc = 0x20B370u;
label_20b370:
    // 0x20b370: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20b370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20b374: 0x246a7100  addiu       $t2, $v1, 0x7100
    ctx->pc = 0x20b374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20b378:
    // 0x20b378: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b37c: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20b380: 0x8c63a480  lw          $v1, -0x5B80($v1)
    ctx->pc = 0x20b380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20b384: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b388: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20b388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20b38c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20b390: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20b394: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20b394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20b398: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x20b398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x20b39c: 0x8d08a480  lw          $t0, -0x5B80($t0)
    ctx->pc = 0x20b39cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943872)));
    // 0x20b3a0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20b3a4: 0xad090008  sw          $t1, 0x8($t0)
    ctx->pc = 0x20b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 9));
    // 0x20b3a8: 0x8ce7a480  lw          $a3, -0x5B80($a3)
    ctx->pc = 0x20b3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943872)));
    // 0x20b3ac: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x20b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x20b3b0: 0x8cc6a480  lw          $a2, -0x5B80($a2)
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943872)));
    // 0x20b3b4: 0x8c84a068  lw          $a0, -0x5F98($a0)
    ctx->pc = 0x20b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942824)));
    // 0x20b3b8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x20b3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20b3bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20b3c0: 0xaca6a480  sw          $a2, -0x5B80($a1)
    ctx->pc = 0x20b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943872), GPR_U32(ctx, 6));
    // 0x20b3c4: 0xac64a068  sw          $a0, -0x5F98($v1)
    ctx->pc = 0x20b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942824), GPR_U32(ctx, 4));
    // 0x20b3c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20b3c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b3cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20b3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b3d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20b3d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b3d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20b3d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b3d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b3dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B3E0u;
            // 0x20b3e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20B3E8u;
    // 0x20b3e8: 0x0  nop
    ctx->pc = 0x20b3e8u;
    // NOP
    // 0x20b3ec: 0x0  nop
    ctx->pc = 0x20b3ecu;
    // NOP
    ctx->pc = 0x20b3f0u;
}
