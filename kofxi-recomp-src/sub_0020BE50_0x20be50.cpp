#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020BE50
// Address: 0x20be50 - 0x20c040
void sub_0020BE50_0x20be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BE50_0x20be50");
#endif

    ctx->pc = 0x20be50u;

    // 0x20be50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20be54: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x20be54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20be58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20be5c: 0x24663480  addiu       $a2, $v1, 0x3480
    ctx->pc = 0x20be5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13440));
    // 0x20be60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20be64: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x20be64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20be68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20be6c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x20be6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x20be70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20be70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20be74: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x20be74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20be78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20be78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20be7c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20be80: 0x8c69a458  lw          $t1, -0x5BA8($v1)
    ctx->pc = 0x20be80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20be84: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x20be84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20be88: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x20be88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x20be8c: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x20be8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20be90: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x20be90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x20be94: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x20be94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x20be98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20be98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20be9c: 0x3c1101c1  lui         $s1, 0x1C1
    ctx->pc = 0x20be9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)449 << 16));
    // 0x20bea0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x20bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x20bea4: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20bea4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20bea8: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x20bea8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x20beac: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20beb0: 0x3c032007  lui         $v1, 0x2007
    ctx->pc = 0x20beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8199 << 16));
    // 0x20beb4: 0xfd260008  sd          $a2, 0x8($t1)
    ctx->pc = 0x20beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 6));
    // 0x20beb8: 0x3463d00d  ori         $v1, $v1, 0xD00D
    ctx->pc = 0x20beb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53261);
    // 0x20bebc: 0xfd200010  sd          $zero, 0x10($t1)
    ctx->pc = 0x20bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 0));
    // 0x20bec0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x20bec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20bec4: 0xfd270018  sd          $a3, 0x18($t1)
    ctx->pc = 0x20bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 7));
    // 0x20bec8: 0x3c035531  lui         $v1, 0x5531
    ctx->pc = 0x20bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21809 << 16));
    // 0x20becc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20beccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20bed0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x20bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20bed4: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x20bed4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x20bed8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x20bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x20bedc: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x20bedcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x20bee0: 0xfd230020  sd          $v1, 0x20($t1)
    ctx->pc = 0x20bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 32), GPR_U64(ctx, 3));
    // 0x20bee4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x20bee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20bee8: 0xfd270028  sd          $a3, 0x28($t1)
    ctx->pc = 0x20bee8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 40), GPR_U64(ctx, 7));
    // 0x20beec: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20beecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20bef0: 0x90c9b280  lbu         $t1, -0x4D80($a2)
    ctx->pc = 0x20bef0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947456)));
    // 0x20bef4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x20bef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20bef8: 0x8c6ca458  lw          $t4, -0x5BA8($v1)
    ctx->pc = 0x20bef8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20befc: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20befcu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20bf00: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20bf04: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20bf04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20bf08: 0x3c0640ab  lui         $a2, 0x40AB
    ctx->pc = 0x20bf08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16555 << 16));
    // 0x20bf0c: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x20bf0cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20bf10: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x20bf10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x20bf14: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x20bf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20bf18: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20bf18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20bf1c: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20bf1cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20bf20: 0x665825  or          $t3, $v1, $a2
    ctx->pc = 0x20bf20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20bf24: 0x93178  dsll        $a2, $t1, 5
    ctx->pc = 0x20bf24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 5);
    // 0x20bf28: 0x919b8  dsll        $v1, $t1, 6
    ctx->pc = 0x20bf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 6);
    // 0x20bf2c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x20bf2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x20bf30: 0x24095353  addiu       $t1, $zero, 0x5353
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x20bf34: 0xfd860030  sd          $a2, 0x30($t4)
    ctx->pc = 0x20bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 48), GPR_U64(ctx, 6));
    // 0x20bf38: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20bf3c: 0xfd8a0038  sd          $t2, 0x38($t4)
    ctx->pc = 0x20bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 56), GPR_U64(ctx, 10));
    // 0x20bf40: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20bf40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20bf44: 0xfd870040  sd          $a3, 0x40($t4)
    ctx->pc = 0x20bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 64), GPR_U64(ctx, 7));
    // 0x20bf48: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20bf4c: 0xfd880048  sd          $t0, 0x48($t4)
    ctx->pc = 0x20bf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 72), GPR_U64(ctx, 8));
    // 0x20bf50: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x20bf50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20bf54: 0xfd8b0050  sd          $t3, 0x50($t4)
    ctx->pc = 0x20bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 80), GPR_U64(ctx, 11));
    // 0x20bf58: 0x24e86c00  addiu       $t0, $a3, 0x6C00
    ctx->pc = 0x20bf58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
    // 0x20bf5c: 0xfd890058  sd          $t1, 0x58($t4)
    ctx->pc = 0x20bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 88), GPR_U64(ctx, 9));
    // 0x20bf60: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x20bf60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20bf64: 0xad800060  sw          $zero, 0x60($t4)
    ctx->pc = 0x20bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 0));
    // 0x20bf68: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20bf6c: 0x8c6ba458  lw          $t3, -0x5BA8($v1)
    ctx->pc = 0x20bf6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943832)));
    // 0x20bf70: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20bf74: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20bf74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20bf78: 0x24e77200  addiu       $a3, $a3, 0x7200
    ctx->pc = 0x20bf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29184));
    // 0x20bf7c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x20bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x20bf80: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20bf80u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20bf84: 0xad600064  sw          $zero, 0x64($t3)
    ctx->pc = 0x20bf84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 0));
    // 0x20bf88: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x20bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x20bf8c: 0x8ccba458  lw          $t3, -0x5BA8($a2)
    ctx->pc = 0x20bf8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943832)));
    // 0x20bf90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20bf94: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x20bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x20bf98: 0x24637200  addiu       $v1, $v1, 0x7200
    ctx->pc = 0x20bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29184));
    // 0x20bf9c: 0xad600068  sw          $zero, 0x68($t3)
    ctx->pc = 0x20bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 104), GPR_U32(ctx, 0));
    // 0x20bfa0: 0x3c06f000  lui         $a2, 0xF000
    ctx->pc = 0x20bfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61440 << 16));
    // 0x20bfa4: 0x8d4aa458  lw          $t2, -0x5BA8($t2)
    ctx->pc = 0x20bfa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x20bfa8: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x20bfa8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x20bfac: 0xad40006c  sw          $zero, 0x6C($t2)
    ctx->pc = 0x20bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 0));
    // 0x20bfb0: 0x8d34a458  lw          $s4, -0x5BA8($t1)
    ctx->pc = 0x20bfb0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943832)));
    // 0x20bfb4: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20bfb4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20bfb8: 0xae880070  sw          $t0, 0x70($s4)
    ctx->pc = 0x20bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 8));
    // 0x20bfbc: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20bfbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20bfc0: 0x8e68a458  lw          $t0, -0x5BA8($s3)
    ctx->pc = 0x20bfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943832)));
    // 0x20bfc4: 0xad070074  sw          $a3, 0x74($t0)
    ctx->pc = 0x20bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 116), GPR_U32(ctx, 7));
    // 0x20bfc8: 0x8e47a458  lw          $a3, -0x5BA8($s2)
    ctx->pc = 0x20bfc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943832)));
    // 0x20bfcc: 0xace60078  sw          $a2, 0x78($a3)
    ctx->pc = 0x20bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 6));
    // 0x20bfd0: 0x8e27a458  lw          $a3, -0x5BA8($s1)
    ctx->pc = 0x20bfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943832)));
    // 0x20bfd4: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x20bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x20bfd8: 0x8e07a458  lw          $a3, -0x5BA8($s0)
    ctx->pc = 0x20bfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943832)));
    // 0x20bfdc: 0xace50080  sw          $a1, 0x80($a3)
    ctx->pc = 0x20bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 5));
    // 0x20bfe0: 0x8f27a458  lw          $a3, -0x5BA8($t9)
    ctx->pc = 0x20bfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294943832)));
    // 0x20bfe4: 0xace50084  sw          $a1, 0x84($a3)
    ctx->pc = 0x20bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 5));
    // 0x20bfe8: 0x8f05a458  lw          $a1, -0x5BA8($t8)
    ctx->pc = 0x20bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943832)));
    // 0x20bfec: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x20bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x20bff0: 0x8de5a458  lw          $a1, -0x5BA8($t7)
    ctx->pc = 0x20bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943832)));
    // 0x20bff4: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x20bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x20bff8: 0x8dc5a458  lw          $a1, -0x5BA8($t6)
    ctx->pc = 0x20bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943832)));
    // 0x20bffc: 0xaca40090  sw          $a0, 0x90($a1)
    ctx->pc = 0x20bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 4));
    // 0x20c000: 0x8da4a458  lw          $a0, -0x5BA8($t5)
    ctx->pc = 0x20c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943832)));
    // 0x20c004: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x20c004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x20c008: 0x8d83a458  lw          $v1, -0x5BA8($t4)
    ctx->pc = 0x20c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943832)));
    // 0x20c00c: 0xac660098  sw          $a2, 0x98($v1)
    ctx->pc = 0x20c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 6));
    // 0x20c010: 0x8d63a458  lw          $v1, -0x5BA8($t3)
    ctx->pc = 0x20c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943832)));
    // 0x20c014: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x20c014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x20c018: 0x8d43a458  lw          $v1, -0x5BA8($t2)
    ctx->pc = 0x20c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943832)));
    // 0x20c01c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x20c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x20c020: 0xad23a458  sw          $v1, -0x5BA8($t1)
    ctx->pc = 0x20c020u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294943832), GPR_U32(ctx, 3));
    // 0x20c024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20c024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20c028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c02c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c02cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c038: 0x3e00008  jr          $ra
    ctx->pc = 0x20C038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C038u;
            // 0x20c03c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C040u;
    ctx->pc = 0x20c040u;
}
