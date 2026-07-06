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

// Function: sub_00301130
// Address: 0x301130 - 0x3012f0
void sub_00301130_0x301130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301130_0x301130");
#endif

    ctx->pc = 0x301130u;

    // 0x301130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x301130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x301134: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x301134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x301138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x301138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30113c: 0x24663480  addiu       $a2, $v1, 0x3480
    ctx->pc = 0x30113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13440));
    // 0x301140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x301140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x301144: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x301144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x301148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x301148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30114c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x30114cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x301150: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x301150u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x301154: 0x8c63a458  lw          $v1, -0x5BA8($v1)
    ctx->pc = 0x301154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x301158: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x301158u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30115c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30115cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301160: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x301160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x301164: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x301164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x301168: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x301168u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x30116c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x30116cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x301170: 0x3c062007  lui         $a2, 0x2007
    ctx->pc = 0x301170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8199 << 16));
    // 0x301174: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x301174u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x301178: 0x34c6d00d  ori         $a2, $a2, 0xD00D
    ctx->pc = 0x301178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53261);
    // 0x30117c: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x30117cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x301180: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x301180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x301184: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x301184u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x301188: 0x3c065531  lui         $a2, 0x5531
    ctx->pc = 0x301188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21809 << 16));
    // 0x30118c: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x30118cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x301190: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x301190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x301194: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x301194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x301198: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x301198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x30119c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x30119cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3011a0: 0xfc670020  sd          $a3, 0x20($v1)
    ctx->pc = 0x3011a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 7));
    // 0x3011a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3011a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3011a8: 0xfc660028  sd          $a2, 0x28($v1)
    ctx->pc = 0x3011a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 6));
    // 0x3011ac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3011acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3011b0: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x3011b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x3011b4: 0x3c0640ab  lui         $a2, 0x40AB
    ctx->pc = 0x3011b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16555 << 16));
    // 0x3011b8: 0xfc690038  sd          $t1, 0x38($v1)
    ctx->pc = 0x3011b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 9));
    // 0x3011bc: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x3011bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x3011c0: 0xfc670040  sd          $a3, 0x40($v1)
    ctx->pc = 0x3011c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 7));
    // 0x3011c4: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x3011c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x3011c8: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x3011c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3011cc: 0xfc680048  sd          $t0, 0x48($v1)
    ctx->pc = 0x3011ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 8));
    // 0x3011d0: 0x34068001  ori         $a2, $zero, 0x8001
    ctx->pc = 0x3011d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3011d4: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x3011d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x3011d8: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x3011d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3011dc: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x3011dcu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x3011e0: 0xfc670050  sd          $a3, 0x50($v1)
    ctx->pc = 0x3011e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 7));
    // 0x3011e4: 0x24065353  addiu       $a2, $zero, 0x5353
    ctx->pc = 0x3011e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x3011e8: 0xfc660058  sd          $a2, 0x58($v1)
    ctx->pc = 0x3011e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 6));
    // 0x3011ec: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x3011ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x3011f0: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x3011f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x3011f4: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x3011f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x3011f8: 0x8ceaa458  lw          $t2, -0x5BA8($a3)
    ctx->pc = 0x3011f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943832)));
    // 0x3011fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x3011fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x301200: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x301200u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x301204: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x301204u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x301208: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x301208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30120c: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x30120cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x301210: 0xad400064  sw          $zero, 0x64($t2)
    ctx->pc = 0x301210u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 100), GPR_U32(ctx, 0));
    // 0x301214: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x301214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x301218: 0x8ccaa458  lw          $t2, -0x5BA8($a2)
    ctx->pc = 0x301218u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943832)));
    // 0x30121c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x30121cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x301220: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x301220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x301224: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x301224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x301228: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x301228u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x30122c: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x30122cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x301230: 0xad400068  sw          $zero, 0x68($t2)
    ctx->pc = 0x301230u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 104), GPR_U32(ctx, 0));
    // 0x301234: 0x24867200  addiu       $a2, $a0, 0x7200
    ctx->pc = 0x301234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
    // 0x301238: 0x8d29a458  lw          $t1, -0x5BA8($t1)
    ctx->pc = 0x301238u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943832)));
    // 0x30123c: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x30123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x301240: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x301240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x301244: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x301244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x301248: 0x24907200  addiu       $s0, $a0, 0x7200
    ctx->pc = 0x301248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 29184));
    // 0x30124c: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x30124cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x301250: 0xad20006c  sw          $zero, 0x6C($t1)
    ctx->pc = 0x301250u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 108), GPR_U32(ctx, 0));
    // 0x301254: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x301254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x301258: 0x8d08a458  lw          $t0, -0x5BA8($t0)
    ctx->pc = 0x301258u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943832)));
    // 0x30125c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x30125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x301260: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x301260u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x301264: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x301264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x301268: 0xad070070  sw          $a3, 0x70($t0)
    ctx->pc = 0x301268u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 7));
    // 0x30126c: 0x8cb2a458  lw          $s2, -0x5BA8($a1)
    ctx->pc = 0x30126cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943832)));
    // 0x301270: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x301270u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x301274: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x301274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x301278: 0xae460074  sw          $a2, 0x74($s2)
    ctx->pc = 0x301278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 6));
    // 0x30127c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x30127cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x301280: 0x8f26a458  lw          $a2, -0x5BA8($t9)
    ctx->pc = 0x301280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294943832)));
    // 0x301284: 0xacc40078  sw          $a0, 0x78($a2)
    ctx->pc = 0x301284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 4));
    // 0x301288: 0x8f06a458  lw          $a2, -0x5BA8($t8)
    ctx->pc = 0x301288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943832)));
    // 0x30128c: 0xacc0007c  sw          $zero, 0x7C($a2)
    ctx->pc = 0x30128cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
    // 0x301290: 0x8de6a458  lw          $a2, -0x5BA8($t7)
    ctx->pc = 0x301290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943832)));
    // 0x301294: 0xacd10080  sw          $s1, 0x80($a2)
    ctx->pc = 0x301294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 17));
    // 0x301298: 0x8dc6a458  lw          $a2, -0x5BA8($t6)
    ctx->pc = 0x301298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943832)));
    // 0x30129c: 0xacd10084  sw          $s1, 0x84($a2)
    ctx->pc = 0x30129cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 17));
    // 0x3012a0: 0x8da6a458  lw          $a2, -0x5BA8($t5)
    ctx->pc = 0x3012a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943832)));
    // 0x3012a4: 0xacc00088  sw          $zero, 0x88($a2)
    ctx->pc = 0x3012a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 0));
    // 0x3012a8: 0x8d86a458  lw          $a2, -0x5BA8($t4)
    ctx->pc = 0x3012a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943832)));
    // 0x3012ac: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x3012acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
    // 0x3012b0: 0x8d66a458  lw          $a2, -0x5BA8($t3)
    ctx->pc = 0x3012b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943832)));
    // 0x3012b4: 0xacc30090  sw          $v1, 0x90($a2)
    ctx->pc = 0x3012b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 3));
    // 0x3012b8: 0x8d43a458  lw          $v1, -0x5BA8($t2)
    ctx->pc = 0x3012b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x3012bc: 0xac700094  sw          $s0, 0x94($v1)
    ctx->pc = 0x3012bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 16));
    // 0x3012c0: 0x8d23a458  lw          $v1, -0x5BA8($t1)
    ctx->pc = 0x3012c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943832)));
    // 0x3012c4: 0xac640098  sw          $a0, 0x98($v1)
    ctx->pc = 0x3012c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 4));
    // 0x3012c8: 0x8d03a458  lw          $v1, -0x5BA8($t0)
    ctx->pc = 0x3012c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943832)));
    // 0x3012cc: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x3012ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x3012d0: 0x8ce3a458  lw          $v1, -0x5BA8($a3)
    ctx->pc = 0x3012d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943832)));
    // 0x3012d4: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x3012d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x3012d8: 0xaca3a458  sw          $v1, -0x5BA8($a1)
    ctx->pc = 0x3012d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943832), GPR_U32(ctx, 3));
    // 0x3012dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3012dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3012e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3012e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3012e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3012e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3012e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3012E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3012ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012E8u;
        // 0x3012ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3012E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3012F0u;
}
